from toffee import Bundle, Signals


class DecoupledBundle(Bundle):
    ready, valid = Signals(2)

class SimpleBusReqBundle(DecoupledBundle):
    addr, size, cmd, wmask, wdata, user = Signals(6)


class SimpleBusRspBundle(DecoupledBundle):
    cmd, rdata, user = Signals(3)

class SimpleBusBundle(Bundle):
    req = SimpleBusReqBundle.from_regex(r"^req_(?:(valid|ready)|bits_(.*))")
    rsp = SimpleBusRspBundle.from_regex(r"^resp_(?:(valid|ready)|bits_(.*))")