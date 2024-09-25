"""
    Simulator for SimpleRam
    Author: yzcc
"""

from env.simplebus_wrap import *
from picker_out.UT_Cache.xspcomm import XClock

class SimpleRam:
    def __init__(self, bus: SimplebusWrapper, clock: XClock):
        self.xclock = clock
        self.memory = {}
        self.bus = bus
        self.read_index = 0
        self.read_base_addr = 0  # base addr of the cacheline to read
        self.read_offset = 0  # current offset in the cacheline

        self.write_index = 0
        self.write_base_addr = 0
        self.write_offset = 0

        # always ready to receive req
        self.bus.req.__ready__ = True

        # Register Callback Func
        self.xclock.StepRis(self.__cb__)

    def __ram_read__(self, addr):
        if addr in self.memory:
            return self.memory[addr]
        else:
            return 0

    def __ram_write__(self, addr, data, mask):
        real_mask = 0
        for i in range(8):
            if mask & 0b1 != 0:
                real_mask |= (0xff << (i * 8))
            mask >>= 1
        mem_data = self.__ram_read__(addr)
        data = (data & real_mask) | (mem_data & ~real_mask)
        self.memory[addr] = data

    def __handle_read__(self):
        """ handle the read request """
        # Read
        if self.bus.req.__valid__ and self.bus.req.is_cmd(CMD_READ):
            addr = self.bus.req.__addr__
            data = self.__ram_read__(addr)
            self.bus.put_resp(RespMsg(CMD_READLST, data, 0x114))

        # Burst Read
        if self.bus.req.__valid__ and self.bus.req.is_cmd(CMD_READBST):
            addr = self.bus.req.__addr__
            self.read_index = 8
            self.read_offset = addr % 64
            self.read_base_addr = addr - self.read_offset

        if self.bus.resp.__ready__ and self.read_index != 0:
            addr = self.read_base_addr + self.read_offset
            data = self.__ram_read__(addr)
            cmd = CMD_READ  # ?
            if self.read_index == 1:    # last of the burst
                cmd = CMD_READLST

            self.read_index -= 1
            self.read_offset = (self.read_offset + 8) % 64
            self.bus.put_resp(RespMsg(cmd, data, 0x114))

    def __handle_write__(self):
        if self.bus.req.__valid__ and self.bus.req.is_cmd(CMD_WRITE):
            addr = self.bus.req.__addr__
            mask = self.bus.req.__wmask__
            data = self.bus.req.__wdata__
            self.__ram_write__(addr, data, mask)
            self.bus.put_resp(RespMsg(CMD_WRITERSP, 0x1919810, 0x114))

        if self.bus.req.__valid__ and (self.bus.req.is_cmd(CMD_WRITEBST) or self.bus.req.is_cmd(CMD_WRITELST)):
            addr = self.bus.req.__addr__
            mask = self.bus.req.__wmask__
            data = self.bus.req.__wdata__

            if self.write_index == 0:
                self.write_index = 8  # TODO: maybe is .size?
                self.write_offset = addr % 64
                self.write_base_addr = addr - self.write_offset
            addr = self.write_base_addr + self.write_offset

            self.__ram_write__(addr, data, mask)

            self.bus.put_resp(RespMsg(CMD_WRITERSP, data, 0x114))
            self.write_index -= 1
            self.write_offset = (self.write_offset + 8) % 64

    def __cb__(self, *a, **b):
        self.bus.resp.__valid__ = False
        self.__handle_read__()
        self.__handle_write__()

    def reset(self):
        self.memory.clear()

