from toffee import *
from .bundle import *
from utils.cmd_code import *
from utils.common import *
import queue

class SimpleBusMasterAgent(Agent):
    def __init__(self, bundle: SimpleBusBundle):
        super().__init__(bundle.step)
        self.bundle:SimpleBusBundle = bundle

        self.req_que = queue.Queue()
        self.rsp_que = queue.Queue()

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

    async def read(self, addr, size, user=0):
        await self.send_req(addr, size, CMD_READ, user)

    async def write(self, addr, size, wdata, wmask, user=0):
        await self.send_req(addr, size, CMD_WRITE, user, wmask, wdata)

    async def req_handler(self):
        while True:
            if self.req_que.empty():
                await self.bundle.step()
            else:
                req: ReqMsg = self.req_que.get()
                if req.cmd == CMD_READ:
                    await self.send_req(req.addr, req.size, CMD_READ, req.user)
                elif req.cmd == CMD_WRITE:
                    await self.send_req(req.addr, req.size, CMD_WRITE, req.user, req.mask, req.data)

    async def rsp_handler(self):
        while True:
            res = await self.get_resp()
            rsp = RespMsg(rdata=res["rdata"], user=res["user"], cmd=res["cmd"])
            self.rsp_que.put(rsp)

    @driver_method()
    async def non_block_read(self, addr):
        self.req_que.put_nowait(ReqMsg(addr, CMD_READ))

    @driver_method()
    async def non_block_write(self, addr, data, mask):
        self.req_que.put_nowait(ReqMsg(addr, CMD_WRITE, data, mask))

    @driver_method()
    async def recv(self):
        while self.rsp_que.empty():
            await self.bundle.step()
        return self.rsp_que.get().as_dict()
    
    async def block_read(self, addr):
        await self.non_block_read(addr)
        res = await self.recv()
        return res
    
    async def block_write(self, addr, data, mask):
        await self.non_block_write(addr, data, mask)
        res = await self.recv()
        return res


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