"""
    A simple reference cache model
    Author: yzcc
"""

from env.simplebus_agents import *
from utils import *

class CacheRefModel(Model):
    def __init__(self):
        super().__init__()
        self.data = {}

    @driver_hook(agent_name="in_agent")
    def read(self, addr, size, user=0):
        addr, rdata = addr & 0xfffffff8, 0
        if addr in self.data:
            rdata = self.data[addr]
        return {"rdata": rdata, "user": user}

    @driver_hook(agent_name="in_agent")
    def write(self, addr, size, wdata, wmask, user=0):
        addr = addr & 0xfffffff8
        wmask = replicate_bits(wmask, 8, 8)
        if addr not in self.data:
            self.data[addr] = 0
        self.data[addr] = (self.data[addr] & (~wmask)) | (wdata & wmask)
        return {"user": user}

