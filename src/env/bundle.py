from mlvp import Bundle
from utils.cmd_code import *
from utils.common import ReqMsg, RespMsg


class SimpleBusReq(Bundle):
    signals = ["ready", "valid", "bits_addr", "bits_size", "bits_cmd", "bits_wmask",
               "bits_wdata", "bits_user"]

    def __init__(self):
        super().__init__()


class SimpleBusResp(Bundle):
    signals = ["ready", "valid", "bits_cmd", "bits_rdata", "bits_user"]

    def is_cmd(self, cmd):
        vals = self.as_dict()
        return vals["bits_cmd"] == cmd

class SimpleBus(Bundle):
    def __init__(self):
        super().__init__()

        self.req = SimpleBusReq.from_prefix("req_")
        self.resp = SimpleBusResp.from_prefix("resp_")

    def put_req(self, req: ReqMsg):
        self.req.assign(req.as_dict())

    def put_resp(self, resp: RespMsg):
        self.resp.assign(resp.as_dict())


# io_in_
class InBundle(SimpleBus):
    def __init__(self):
        super().__init__()



class OutMemBundle(SimpleBus):
    def __init__(self):
        super().__init__()


class OutCohBundle(SimpleBus):
    def __init__(self):
        super().__init__()



class MMIOBundle(SimpleBus):
    def __init__(self):
        super().__init__()
