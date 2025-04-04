from env.user_top import UserTop
from ref.ref_cache import *

class NtCacheEnv(Env):
    def __init__(self, dut):
        super().__init__()
        self.in_agent   = SimpleBusMasterAgent(SimpleBusBundle.from_prefix("io_in_").set_name("in").bind(dut))
        self.mem_agent  = SimpleBusSlaveAgent(SimpleBusBundle.from_prefix("io_out_mem_").set_name("mem").bind(dut))
        self.mmio_agent = SimpleBusSlaveAgent(SimpleBusBundle.from_prefix("io_mmio_").set_name("mmio").bind(dut))
        self.usertop    = UserTop(self.in_agent, dut)
        self.attach(CacheRefModel())
