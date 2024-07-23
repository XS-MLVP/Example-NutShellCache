"""
    Wrap up the basic operations here.
    Author: yzcc
"""

from picker_out.UT_Cache import DUTCache
from .bundle import *

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
        self.mmio_bundle = MMIOBundle.from_prefix("io_mmio_").set_name("io_mmio_").bind(self.dut)

        # Reset
        self.reset()

    def __get_bus_ready__(self, bus:Bundle):
        return bus.as_dict()["ready"]

    def __get_bus_valid__(self, bus:Bundle):
        return bus.as_dict()["valid"]

    def finalize(self):
        self.dut.Finish()

    def reset(self):
        # Reset
        self.dut.reset.value = 1
        self.xclock.Step(100)
        self.dut.reset.value = 0
        self.dut.io_flush.value = 0

        # Wait for ready
        while self.__get_bus_ready__(self.in_bundle.req) == 0:
            self.xclock.Step(1)

