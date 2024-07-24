"""
    Just drive the dut
    Author: yzcc
"""

from env.cache_dut import CacheDut
from ref.ref_cache import RefCache
from mlvp.funcov import CovGroup

import mlvp
import logging


def test_smoke(cache_pytest_req: tuple[CacheDut, RefCache, list[CovGroup]]):
    pins, ref_cache, groups = cache_pytest_req

    pins.block_read(0x1)

    pins.block_write(0x1, 0x1, 0x1)

    pins.non_block_read(0x1)
    pins.non_block_read(0x2)

    pins.xclock.Step(100)

