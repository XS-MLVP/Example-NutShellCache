"""
    Wrap up some user functions for read/write here
    Author: yzcc
"""

import queue

from toffee import ClockCycles

from utils.cmd_code import *
from utils.common import *
from .simplebus_agents import SimpleBusMasterAgent

class UserTop:
    def __init__(self, agent:SimpleBusMasterAgent, dut):
        self.agent = agent
        self.dut = dut

        self.req_que = queue.Queue()
        self.rsp_que = queue.Queue()

    async def req_handler(self):
        while True:
            if self.req_que.empty():
                await ClockCycles(self.dut, 1)
            else:
                req:ReqMsg = self.req_que.get()
                if req.cmd == CMD_READ:
                    await self.agent.read(req.addr, req.size)
                if req.cmd == CMD_WRITE:
                    await self.agent.write(req.addr, req.size, req.data, req.mask)

    async def rsp_handler(self):
        while True:
            res = await self.agent.get_resp()

            rsp = RespMsg(rdata=res["rdata"], user=res["user"], cmd=res["cmd"])
            self.rsp_que.put(rsp)

    async def non_block_read(self, addr):
        self.req_que.put_nowait(ReqMsg(addr, CMD_READ))

    async def non_block_write(self, addr, data, mask):
        self.req_que.put_nowait(ReqMsg(addr, CMD_WRITE, data, mask))

    async def recv(self):
        while self.rsp_que.empty():
            await ClockCycles(self.dut, 1)
        return self.rsp_que.get()

    async def block_read(self, addr):
        await self.non_block_read(addr)
        res = await self.recv()
        return res

    async def block_write(self, addr, data, mask):
        await self.non_block_write(addr, data, mask)
        res = await self.recv()
        return res