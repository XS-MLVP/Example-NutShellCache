"""
    A simple reference cache model
    Author: yzcc
"""

from env.simplebus_wrap import SimplebusWrapper
from picker_out.UT_Cache.xspcomm import XClock

from utils.cmd_code import *


class SimpleMem:
    def __init__(self):
        self.mem = {}
        self.lbound = 0x00000000
        self.rbound = 0xffffffff

    def reset(self):
        self.mem.clear()

    def read(self, addr):
        assert (self.lbound <= addr <= self.rbound), "[Memory-SIM]: Out of boundary."
        if addr in self.mem:
            return self.mem[addr]
        else:
            return 0

    def write(self, addr, data, mask):
        assert (self.lbound <= addr <= self.rbound), "[Memory-SIM]: Out of boundary."
        real_mask = 0
        for i in range(8):
            if mask & 0b1 != 0:
                real_mask |= (0xff << (i * 8))
            mask >>= 1

        mem_data = self.read(addr)
        data = (data & real_mask) | (mem_data & ~real_mask)
        self.mem[addr] = data


class RefCache:
    def __init__(self, top_bus: SimplebusWrapper, xclock: XClock):
        self.top_bus = top_bus

        self.xclock = xclock

        # Register callback function
        self.xclock.StepRis(self.__cb__)

        self.goldmem = SimpleMem()

    def __cb__(self, *a, **b):
        # if a cache r/w request has been accepted
        if self.top_bus.req.__is_fire__ and self.top_bus.req.is_cmd(CMD_WRITE):
            addr = self.top_bus.req.__addr__
            data = self.top_bus.req.__wdata__
            mask = self.top_bus.req.__wmask__
            self.goldmem.write(addr, data, mask)

    def peek(self, addr):
        return self.goldmem.read(addr)

