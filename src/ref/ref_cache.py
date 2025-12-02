"""
    A simple reference cache model
    Author: yzcc
"""

from env.simplebus_agents import *
from utils import *
import queue

class CacheRefModel(Model):
    def __init__(self):
        super().__init__()
        self.data = {}

        self.req_que = queue.Queue()
        self.rsp_que = queue.Queue()

    @driver_hook(agent_name="in_agent")
    def non_block_read(self, addr):
        self.req_que.put_nowait(ReqMsg(addr, CMD_READ))

    @driver_hook(agent_name="in_agent")
    def non_block_write(self, addr, data, mask):
        self.req_que.put_nowait(ReqMsg(addr, CMD_WRITE, data, mask))

    @driver_hook(agent_name="in_agent")
    def recv(self):
        req = self.req_que.get()
        if req.cmd == CMD_READ:
            addr, rdata = req.addr & 0xfffffff8, 0
            if addr in self.data:
                rdata = self.data[addr]
            return RespMsg(rdata=rdata, cmd=CMD_READLST).as_dict()
        elif req.cmd == CMD_WRITE:
            addr = req.addr & 0xfffffff8
            wmask = replicate_bits(req.mask, 8, 8)
            if addr not in self.data:
                self.data[addr] = 0
            self.data[addr] = (self.data[addr] & (~wmask)) | (req.data & wmask)
            return RespMsg(rdata=0, cmd=CMD_WRITERSP).as_dict()
        assert False