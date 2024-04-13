from util.simplebus import SimpleBusWrapper
import pytest

import xspcomm as xsp
from asyncio import run, create_task

class CacheWrapper():
    def __init__(self, bus:SimpleBusWrapper, clk:xsp.XClock, cache_port:xsp.XPort):
        self.p_bus      = bus
        self.p_clk      = clk
        self.cache_port = cache_port

    def reset(self):
        self.cache_port["reset"].value = 1
        self.p_clk.Step(100)
        self.cache_port["reset"].value = 0
        self.cache_port["io_flush"].value = 0
        while (self.cache_port["io_in_req_ready"].value == 0):
            self.p_clk.Step(1)

    # Trigger a read request
    def ReadReq(self, addr):
        self.p_bus.ReqUnValid()
        while (not self.p_bus.IsReqReady()):
            self.p_clk.Step(1)
        self.p_bus.ReqReadData(addr)
        self.p_bus.ReqSetValid()
        self.p_clk.Step(1)
        self.p_bus.ReqUnValid()

    # Trigger serial read req
    def read_req_serial(self, addrl:list):
        for addr in addrl:
            while (not self.p_bus.IsReqReady()):
                self.p_clk.Step(1)
            self.p_bus.ReqReadData(addr)
            self.p_bus.ReqSetValid()
            self.p_clk.Step(1)
        self.p_bus.ReqUnValid()

    # Recv a read data
    def ReadRecv(self):
        while (not self.p_bus.IsRespValid()):
            self.p_clk.Step(1)
        return self.p_bus.RespData().value

    def Read(self, addr):
        self.ReadReq(addr)

        res = self.ReadRecv()

        return res
    
    # Trigger a write request
    def WriteReq(self, addr, data, mask):
        self.p_bus.ReqUnValid()
        while (not self.p_bus.IsReqReady()):
            self.p_clk.Step(1)
        # send
        self.p_bus.ReqWriteData(addr, data, mask)
        self.p_bus.ReqSetValid()
        self.p_clk.Step(1)
        self.p_bus.ReqUnValid()

    # Recv a write resp
    def WriteRecv(self):
        while (not self.p_bus.IsRespValid()):
            self.p_clk.Step(1)
        return self.p_bus.IsRespWriteCmp()

    def Write(self, addr, data, mask):
        self.WriteReq(addr, data, mask)

        res = self.WriteRecv()

        return res
    
    # probe cache <-> memory request
    def probe(self, target):
        while (not self.cache_port["io_mmio_req_valid"].value and not self.cache_port["io_out_mem_req_valid"].value):
            self.p_clk.Step(1)
        if (self.cache_port["io_mmio_req_valid"].value):
            prefix = "io_mmio_"
        else:
            if (self.cache_port["io_out_mem_req_valid"].value):
                prefix = "io_out_mem_"
            else:
                prefix = "error"
        
        addr, size, cmd, wmask, wdata = 0, 0, 0, 0, 0

        if (prefix == "error" or prefix != target):
            return addr, size, cmd ,wmask, wdata

        addr    = self.cache_port[f"{prefix}req_bits_addr"].value
        size    = self.cache_port[f"{prefix}req_bits_size"].value
        cmd     = self.cache_port[f"{prefix}req_bits_cmd"].value
        wmask   = self.cache_port[f"{prefix}req_bits_wmask"].value
        wdata   = self.cache_port[f"{prefix}req_bits_wdata"].value

        return addr, size, cmd ,wmask, wdata
    

class CacheWrapperCor():
    def __init__(self):
        pass

    async def do_task(self):
        while (1):
            pass
        pass