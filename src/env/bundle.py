from mlvp import Bundle


class SimpleBusReq(Bundle):
    signals = ["ready", "valid", "bits_addr", "bits_size", "bits_cmd", "bits_wmask",
               "bits_wdata", "bits_user"]


class SimpleBusResp(Bundle):
    signals = ["ready", "valid", "bits_addr", "bits_size", "bits_cmd", "bits_rdata", "bits_user"]


# io_in_
class InBundle(Bundle):
    signals = []

    def __init__(self):
        super().__init__()

        self.req = SimpleBusReq.from_prefix("req_")
        self.resp = SimpleBusResp.from_prefix("resp_")


class OutMemBundle(Bundle):
    signals = []

    def __init__(self):
        super().__init__()

        self.req = SimpleBusReq.from_prefix("req_")
        self.resp = SimpleBusResp.from_prefix("resp_")


class OutCohBundle(Bundle):
    signals = []

    def __init__(self):
        super().__init__()

        self.req = SimpleBusReq.from_prefix("req_")
        self.resp = SimpleBusResp.from_prefix("resp_")


class MMIOBundle(Bundle):
    signals = []

    def __init__(self):
        super().__init__()

        self.req = SimpleBusReq.from_prefix("req_")
        self.resp = SimpleBusResp.from_prefix("resp_")