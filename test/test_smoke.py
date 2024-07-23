"""
    Just drive the dut
    Author: yzcc
"""

from env.cache_dut import CacheDut
from mlvp.funcov import CovGroup


def test_smoke(cache_pytest_req: tuple[CacheDut, list[CovGroup]]):
    pins, groups = cache_pytest_req

    pins.block_read(0x1)
    pass

