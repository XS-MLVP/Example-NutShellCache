from toffee import *
from .bundle import *
from utils.cmd_code import *
from utils.common import *
import queue

class SimpleBusMasterAgent(Agent):
    def __init__(self, bundle: SimpleBusBundle):
        super().__init__(bundle.step)
        self.bundle:SimpleBusBundle = bundle

    async def send_req(self, addr, size, cmd, user=0, wmask=0, wdata=0):
        await AllValid(self.bundle.req.ready, delay=0)
        self.bundle.req.assign({
            "valid": 1,   "addr": addr,   "size": size,  "cmd": cmd,
            "user": user, "wmask": wmask, "wdata": wdata
        })
        await self.bundle.step()
        self.bundle.req.valid.value = 0

    async def get_resp(self):
        self.bundle.rsp.ready.value = 1
        await AllValid(self.bundle.rsp.valid)
        resp = self.bundle.rsp.as_dict()
        self.bundle.rsp.ready.value = 0
        return resp

    @driver_method()
    async def read(self, addr, size, user=0):
        await self.send_req(addr, size, CMD_READ, user)

    @driver_method()
    async def write(self, addr, size, wdata, wmask, user=0):
        await self.send_req(addr, size, CMD_WRITE, user, wmask, wdata)


class SimpleBusSlaveAgent(Agent):
    def __init__(self, bundle: SimpleBusBundle):
        super().__init__(bundle.step)
        self.bundle: SimpleBusBundle = bundle

    @driver_method()
    async def read_resp(self, size, rdata: list, user=0):
        assert len(rdata) == 1 << size
        await AllValid(self.bundle.rsp.ready, delay=0)
        self.bundle.rsp.valid.value = 1
        for i in range(1 << size):
            self.bundle.rsp.cmd.value = CMD_READLST if (i == ((1 << size) - 1)) else CMD_READ
            self.bundle.rsp.rdata.value = rdata[i]
            await self.bundle.step()
        self.bundle.rsp.valid.value = 0

    @driver_method()
    async def write_resp(self, user=0):
        await AllValid(self.bundle.rsp.ready, delay=0)
        self.bundle.rsp.assign({"valid": 1, "cmd": CMD_WRITERSP, "user": user})
        await self.bundle.step()
        self.bundle.rsp.valid.value = 0

    @driver_method()
    async def get_req(self):
        self.bundle.req.ready.value = 1
        await AllValid(self.bundle.req.valid)
        req = self.bundle.req.as_dict()
        self.bundle.req.ready.value = 0
        return req