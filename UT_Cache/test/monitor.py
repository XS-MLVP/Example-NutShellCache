'''
    Assembly all functional point check here.
    Authored by yzcc, 2024.4.13
'''

from util.ref_cahce import RefCache
from util.simplebus import SimpleBusWrapper
from util.message_queue import MessageQueue
from tools.colorprint import Color as cl
import xspcomm as xsp

from func.cache_func import *
from func.mmio_func import *

class Moniter:
    def __init__(self, clk:xsp.XClock, io_bus:SimpleBusWrapper, mem_bus:SimpleBusWrapper, mmio_bus:SimpleBusWrapper, ref_cache: RefCache):
        self.xclk       = clk

        # Bus
        self.io_bus     = io_bus
        self.mem_bus    = mem_bus
        self.mmio_bus   = mmio_bus

        # Reference
        self.ref_cache  = ref_cache

        # MSGQ
        self.msgq       = MessageQueue(self.xclk)

        self.xclk.StepRis(self.__callback)

    def __callback(self, *a, **b):
        if (self.io_bus.IsReqSend()):
            addr    = self.io_bus.get_req_addr()
            cmd     = self.io_bus.get_req_cmd()
            self.msgq.pushright(addr, cmd)

        self.__basic()

        self.__mmio()

        self.__cache()

        if (self.io_bus.IsRespSend()):
            self.msgq.popleft()
        pass

    def __is_mmio_req(self, addr):
        return 0x30000000 <= addr and addr <= 0x7fffffff

    def __mmio(self):
        if (self.mmio_bus.IsReqSend()):
            addr, cmd, _ = self.msgq.peek_left()
            req_addr    = self.mmio_bus.get_req_addr()
            req_cmd     = self.mmio_bus.get_req_cmd()

            # Transmit
            if (req_addr == addr and req_cmd == cmd):
                mmio_transmit()
            else:
                cl.print_red("mmio transmit func fail!")
                assert(0)

            # Burst
            if (not (self.mmio_bus.IsReqReadBurst() or self.mmio_bus.IsReqWriteBurst())):
                mmio_not_burst()
            else:
                cl.print_red("mmio burst func fail!")
                assert(0)
        
        # Block
        if (not self.io_bus.IsReqReady() and self.msgq.length() > 0):
            addr, cmd, _ = self.msgq.peek_left()
            if (self.__is_mmio_req(addr)):
                mmio_block()
    
    # basic func (cache is a partial image of memory)
    def __basic(self):
        if (self.io_bus.IsRespSend()):
            addr, cmd, _ = self.msgq.peek_left()
            rdata       = self.io_bus.get_resp_rdata()
            ref_rdata   = self.ref_cache.probe_data(addr)
            if (cmd == self.io_bus.cmd_read):
                if (ref_rdata != rdata):
                    cl.print_red("result mismatches, basic func fail!")
                    assert(0)
                else:
                    basic_func()
        pass

    def __cache(self):
        if (self.io_bus.IsRespSend()):
            addr, _, ts = self.msgq.peek_left()
            cts = self.xclk.clk
            if (not self.__is_mmio_req(addr)):
                if (cts - ts > 3):
                    cache_miss()
                else:
                    cache_hit()
        pass