"""
    Just drive the dut
    Author: yzcc
"""

from env.cache_dut import CacheDut
from mlvp.funcov import CovGroup

import mlvp
import logging

def test_smoke(cache_pytest_req: tuple[CacheDut, list[CovGroup]]):
    # Settup
    mlvp.setup_logging(
        log_level=logging.INFO,
        console_display=True
    )

    pins, groups = cache_pytest_req

    pins.block_read(0x1)

    pins.block_write(0x1, 0x1, 0x1)

    pins.xclock.Step(100)
    pass

