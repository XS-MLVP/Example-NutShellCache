import toffee_test
from Cache import DUTCache
from env.ntcache_env import *
from env.simpleram import *

@toffee_test.fixture
async def start_func(toffee_request: toffee_test.ToffeeRequest):
    setup_logging(ERROR)
    dut = toffee_request.create_dut(DUTCache, "clock")
    env = NtCacheEnv(dut)

    async def start_code():
        dut.reset.AsImmWrite()
        dut.reset.value = 1
        dut.reset.AsRiseWrite()
        start_clock(dut)

        await ClockCycles(dut, 100)
        dut.reset.value = 0
        dut.io_flush.value = 0

        async with Executor(exit="none") as exec:
            exec(env.usertop.req_handler(), sche_group="req_handler")
            exec(env.usertop.rsp_handler(), sche_group="rsp_handler")
            exec(SimpleBusRam(env.mem_agent).work(),sche_group="mmio")
            exec(SimpleBusRam(env.mmio_agent).work(), sche_group="mem")
        return env

    return start_code