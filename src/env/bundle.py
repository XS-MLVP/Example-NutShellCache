from toffee import Bundle, Signals


class DecoupledBundle(Bundle):
    ready, valid = Signals(2)

class SimpleBusReqBundle(DecoupledBundle):
    addr, size, cmd, wmask, wdata = Signals(5)


class SimpleBusRspBundle(DecoupledBundle):
    cmd, rdata = Signals(2)

class SimpleBusBundle(Bundle):
    req = SimpleBusReqBundle.from_regex(r"^req_(?:(valid|ready)|bits_(.*))")
    rsp = SimpleBusRspBundle.from_regex(r"^resp_(?:(valid|ready)|bits_(.*))")