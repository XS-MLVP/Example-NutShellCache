"""
    Wrap up the simplebus interface.
"""

from env.bundle import *


class SimplebusReqWrapper:
    def __init__(self, simplebus_req: SimpleBusReq):
        self.bus = simplebus_req

    @property
    def __valid__(self):
        vals = self.bus.as_dict()
        return vals["valid"]

    @__valid__.setter
    def __valid__(self, value):
        self.bus.assign({"valid": value})

    @property
    def __ready__(self):
        vals = self.bus.as_dict()
        return vals["ready"]

    @__ready__.setter
    def __ready__(self, value):
        self.bus.assign({"ready": value})

    @property
    def __is_fire__(self):
        return self.__valid__ and self.__ready__

    @property
    def __addr__(self):
        vals = self.bus.as_dict()
        return vals["bits_addr"]

    @property
    def __size__(self):
        vals = self.bus.as_dict()
        return vals["bits_size"]

    @property
    def __cmd__(self):
        vals = self.bus.as_dict()
        return vals["bits_cmd"]

    @property
    def __wmask__(self):
        vals = self.bus.as_dict()
        return vals["bits_wmask"]

    @property
    def __wdata__(self):
        vals = self.bus.as_dict()
        return vals["bits_wdata"]

    def is_cmd(self, cmd):
        return self.__cmd__ == cmd


class SimplebusRespWrapper:
    def __init__(self, simplebus_resp: SimpleBusResp):
        self.bus = simplebus_resp

    @property
    def __valid__(self):
        vals = self.bus.as_dict()
        return vals["valid"]

    @__valid__.setter
    def __valid__(self, value):
        self.bus.assign({"valid": value})

    @property
    def __ready__(self):
        vals = self.bus.as_dict()
        return vals["ready"]

    @__ready__.setter
    def __ready__(self, value):
        self.bus.assign({"ready": value})

    @property
    def __is_fire__(self):
        return self.__valid__ and self.__ready__

    @property
    def __cmd__(self):
        vals = self.bus.as_dict()
        return vals["bits_cmd"]

    def is_cmd(self, cmd):
        return self.__cmd__ == cmd


class SimplebusWrapper:
    def __init__(self, simplebus: SimpleBus):
        self.req = SimplebusReqWrapper(simplebus.req)
        self.resp = SimplebusRespWrapper(simplebus.resp)

    def put_req(self, req: ReqMsg):
        self.req.bus.assign(req.as_dict())

    def put_resp(self, resp: RespMsg):
        self.resp.bus.assign(resp.as_dict())

