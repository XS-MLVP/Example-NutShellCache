"""
    Wrap up the basic operations here.
    Author: yzcc
"""

from picker_out.UT_Cache import DUTCache

class CacheDut:
    def __init__(self, func_name="cache_test"):
        # Create Dut
        self.dut = DUTCache(
            waveform_filename=f"report/fst/ittage_{func_name}.fst",
            coverage_filename=f"report/cov_dat/ittage_{func_name}.dat",
        )

        self.dut.InitClock("clock")
        self.xclock = self.dut.xclock
        pass