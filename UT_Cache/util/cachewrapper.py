from util.simplebus import SimpleBusWrapper
from tools.colorprint import Color as cl

import xspcomm as xsp

'''
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
'''

import queue, threading

class ReqMsg:
    def __init__(self, addr, cmd, user=0x123, size=7,mask=0, data=0):
        self.user   = user
        self.size   = size
        self.addr   = addr
        self.cmd    = cmd
        self.mask   = mask
        self.data   = data
    
    def __print(self):
        print(f"[REQ MSG] user {self.user:x}, size {self.size}, addr 0x{self.addr:x}\
              cmd 0x{self.cmd:x}, mask {self.mask:b}, data {self.data:x}")


class CacheWrapper:
    def __init__(self, io_bus:SimpleBusWrapper, clk:xsp.XClock, cache_port:xsp.XPort):
        self.xclk       = clk
        self.io_bus     = io_bus
        self.cache_port = cache_port

        # Request Queue
        self.req_que    = queue.Queue()

        # Resp Queue
        self.resp_que   = queue.Queue()

        self.xclk.StepRis(self.__callback)
        pass

    def trigger_read_req(self, addr):
        print(f"trigger {addr:x}")
        self.req_que.put_nowait(ReqMsg(addr=addr, cmd=self.io_bus.cmd_read))


    def trigger_write_req(self, addr, data, mask):
        self.req_que.put_nowait(ReqMsg(addr=addr, cmd=self.io_bus.cmd_write, mask=mask, data=data))
    
    def read_recv(self):
        while (self.resp_que.empty()):
            self.xclk.Step(1)
        return self.resp_que.get()
        
    def read(self, addr):
        self.trigger_read_req(addr)
        return self.read_recv()
    
    def write(self, addr, data, mask):
        self.trigger_write_req(addr, data, mask)

    def reset(self):
        self.cache_port["reset"].value      = 1
        self.xclk.Step(100)
        self.cache_port["reset"].value      = 0
        self.cache_port["io_flush"].value   = 0
        while (not self.io_bus.IsReqReady()):
            self.xclk.Step(1)
        
    def __callback(self, *a, **b):
        print(f"{self.xclk.clk}, {self.io_bus.IsReqValid()}, {self.io_bus.IsReqReady()}")
        assert(not self.io_bus.IsReqValid())
        # Handle Request
        if (self.req_que.empty()):
            self.io_bus.ReqUnValid()
        else:
            self.io_bus.ReqSetValid()
            msg:ReqMsg = self.req_que.get()
            print(f"cb {msg.addr:x}")
            if (msg.cmd == self.io_bus.cmd_read):
                self.io_bus.ReqReadData(msg.addr)
            if (msg.cmd == self.io_bus.cmd_write):
                self.io_bus.ReqWriteData(msg.addr, msg.data, msg.mask)

        # Handle Recv
        self.io_bus.port["resp_ready"].value = 1
        if (self.io_bus.IsRespValid()):
            print(1)
            res = self.io_bus.get_resp_rdata()
            self.resp_que.put_nowait(res)
