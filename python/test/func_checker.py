'''
    check the functional point
'''
import xspcomm as xsp
from util.message_queue import MessageQueue
from util.simplebus import SimpleBusWrapper
import func.mmio_func as mmio_func
import func.io_func as io_func
import pytest

class Func_Checker():
    def __init__(self, clk:xsp.XClock, io_bus:SimpleBusWrapper, mem_bus:SimpleBusWrapper, mmio_bus:SimpleBusWrapper):
        self.xclk       = clk
        self.io_bus     = io_bus
        self.mem_bus    = mem_bus
        self.mmio_bus   = mmio_bus

        self.MMIO_LB    = 0x30000000
        self.MMIO_RB    = 0x7fffffff

        self.meq        = MessageQueue(self.xclk)
        self.xclk.StepRis(self.StepRis)
        pass

    def StepRis(self, *a, **b):
        if (self.io_bus.IsReqSend()):
            addr = self.io_bus.port["req_bits_addr"].value
            cmd  = self.io_bus.port["req_bits_cmd"].value
            self.meq.pushright(addr, cmd)

            if (addr >= self.MMIO_LB and addr <= self.MMIO_RB):
                if (self.io_bus.IsReqRead()):
                    mmio_func.MMIO_read_req()
                if (self.io_bus.IsReqWrite()):
                    mmio_func.MMIO_write_req()

        if (self.mmio_bus.IsReqSend()):
            addr = self.io_bus.port["req_bits_addr"].value
            cmd  = self.io_bus.port["req_bits_cmd"].value
            req_addr, req_cmd, _ = self.meq.peek_right()

            if (addr == req_addr and cmd == req_cmd):
                mmio_func.MMIO_transmit()
            else:
                pytest.assume(0)

            if (len(self.meq.deque) == 3):
                if (not self.io_bus.IsReqReady()):
                    mmio_func.MMIO_block()

        if (self.io_bus.IsRespSend()):
            addr, cmd, ts = self.meq.popleft()
            if (not (addr >= self.MMIO_LB and addr <= self.MMIO_RB)):
                cts = self.meq.ts
                if (cts - ts > 3):
                    io_func.Cache_miss()
                if (cts - ts <= 3):
                    io_func.Cache_hit()