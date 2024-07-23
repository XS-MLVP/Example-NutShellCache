"""
    Wrap up the basic operations here.
    Author: yzcc
"""
import mlvp

from picker_out.UT_Cache import DUTCache
from .bundle import *
from utils.cmd_code import *
from utils.common import ReqMsg

import queue

class CacheDut:
    def __init__(self, func_name="cache_test"):
        # Create Dut
        self.dut = DUTCache(
            waveform_filename=f"report/fst/cache_{func_name}.fst",
            coverage_filename=f"report/cov_dat/cache_{func_name}.dat",
        )

        self.dut.InitClock("clock")
        self.xclock = self.dut.xclock

        # Connect Bundles
        self.in_bundle = InBundle.from_prefix("io_in_").set_name("io_in").bind(self.dut)
        self.mem_bundle = OutMemBundle.from_prefix("io_out_mem_").set_name("io_out").bind(self.dut)
        self.coh_bundle = OutCohBundle.from_prefix("io_out_coh_").set_name("io_coh").bind(self.dut)
        self.mmio_bundle = MMIOBundle.from_prefix("io_mmio_").set_name("io_mmio").bind(self.dut)

        # Request Queue
        self.req_que = queue.Queue()

        # Response Queue
        self.resp_queue = queue.Queue()

        # cb
        self.xclock.StepRis(self.__cb__)

        # Reset
        self.reset()

    def __get_bus_ready__(self, bus: Bundle):
        return bus.as_dict()["ready"]

    def __get_bus_valid__(self, bus: Bundle):
        return bus.as_dict()["valid"]

    def __set_bus_valid__(self, bus: Bundle, valid: bool):
        bus.assign({"valid": valid})

    def __set_bus_ready__(self, bus: Bundle, ready: bool):
        bus.assign({"ready": ready})

    def __is_fire__(self, bus: Bundle):
        vals = bus.as_dict()
        return vals["valid"] and vals["ready"]

    def __cb__(self, *a, **b):
        # Handle Request
        if self.__is_fire__(self.in_bundle.req):
            self.req_que.get()

        if self.req_que.empty():
            self.__set_bus_valid__(self.in_bundle.req, False)
        else:
            self.__set_bus_valid__(self.in_bundle.req, True)
            msg: ReqMsg = self.req_que.queue[0]  # get a req from the queue, put to the in_bundle
            self.in_bundle.req.assign(msg.as_dict())

        # Handle Response
        self.__set_bus_ready__(self.in_bundle.resp, True)
        if self.__is_fire__(self.in_bundle.resp):
            res = self.in_bundle.resp.as_dict()["bits_rdata"]
            self.resp_queue.put_nowait(res)

    def finalize(self):
        self.dut.Finish()

    def __recv__(self):
        """ Get a resp from Resp Queue """
        await_time = 0
        while self.resp_queue.empty():
            self.xclock.Step(1)
            await_time += 1

        return self.resp_queue.get()

    def block_read(self, addr):
        self.non_block_read(addr)
        return self.__recv__()

    def block_write(self, addr, data, mask):
        self.non_block_write(addr, data, mask)
        return self.__recv__()

    def non_block_read(self, addr):
        self.req_que.put_nowait(ReqMsg(addr, CMD_READ))

    def non_block_write(self, addr, data, mask):
        self.req_que.put_nowait(ReqMsg(addr, CMD_WRITE, mask, data))

    def reset(self):
        # Reset
        self.dut.reset.value = 1
        self.xclock.Step(100)
        self.dut.reset.value = 0
        self.dut.io_flush.value = 0

        # Wait for ready
        while self.__get_bus_ready__(self.in_bundle.req) == 0:
            self.xclock.Step(1)

