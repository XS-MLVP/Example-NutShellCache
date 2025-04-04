"""
    Simulator for SimpleRam
    Author: yzcc
"""

from utils.cmd_code import *
from utils.common import *
from .simplebus_agents import SimpleBusSlaveAgent

class SimpleBusRam:
    def __init__(self, agent:SimpleBusSlaveAgent):
        self.data = {}
        self.agent = agent

    async def rsp_write_burst(self, req):
        addr = req["addr"]
        while True:
            data, wmask = req["wdata"], replicate_bits(req["wmask"], 8, 8)
            if addr not in self.data:
                self.data[addr] = 0
            self.data[addr] = (self.data[addr] & (~wmask)) | (data & wmask)
            await self.agent.write_resp()
            if req["cmd"] == CMD_WRITELST:
                break
            req = await self.agent.get_req()
            addr += 8

    async def rsp_once(self):
        req = await self.agent.get_req()
        if req["cmd"] == CMD_READBST or req["cmd"] == CMD_READ:
            data_pkt = []
            firstaddr = req["addr"] & 0xffffffc0
            id = (req["addr"] - firstaddr) >> 3
            for _ in range(1 << req["size"]):
                if firstaddr + (id << 3) in self.data:
                    data_pkt.append(self.data[firstaddr + (id << 3)])
                else:
                    data_pkt.append(0)
                id = (id + 1) % (1 << req["size"])
            await self.agent.read_resp(req["size"], data_pkt)

        elif req["cmd"] == CMD_WRITEBST:
            await self.rsp_write_burst(req)

        elif req["cmd"] == CMD_WRITE:
            addr, data, wmask = req["addr"] & 0xfffffff8, req["wdata"], req["wmask"]
            wmask = replicate_bits(wmask, 8, 8)
            if addr not in self.data:
                self.data[addr] = 0
            self.data[addr] = (self.data[addr] & (~wmask)) | (data & wmask)
            await self.agent.write_resp()

    async def work(self):
        while True:
            await self.rsp_once()