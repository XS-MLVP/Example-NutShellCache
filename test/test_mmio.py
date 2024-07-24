"""
    Test case for MMIO
"""

from env.cache_dut import CacheDut
from env.simplebus_wrap import SimplebusWrapper
from ref.ref_cache import RefCache
from mlvp.funcov import CovGroup

import random
from chk_mmio import get_cov_grp_of_mmio


def test_mmio(cache_pytest_req: tuple[CacheDut, RefCache, list[CovGroup]]):
    pins, _, groups = cache_pytest_req

    # Add CovGroup
    grp = get_cov_grp_of_mmio(pins.dut)
    pins.xclock.StepRis(lambda _: grp.sample())
    groups.append(grp)

    # Start
    lbound = 0x30000000
    rbound = 0x3fffffff

    mmio_bus = SimplebusWrapper(pins.mmio_bundle)

    # Test1
    for i in range(100):
        addr = random.randint(lbound, rbound)

        if random.randint(0, 1):            # Read
            pins.non_block_read(addr)
        else:                                   # Write
            pins.non_block_write(addr, 0x114514, 0x1)

        cycle_count = 0
        while cycle_count < 100 and not mmio_bus.req.__is_fire__:
            cycle_count += 1
            pins.xclock.Step(1)

        mmio_addr = mmio_bus.req.__addr__
        assert mmio_addr == addr, f"should be transmit (read 0x{mmio_addr:x}, expected 0x{addr:x})"
        pins.__recv__()

    # Test2
    addr = random.randint(lbound, rbound)
    pins.non_block_read(addr)
    pins.non_block_read(addr + 4)
    pins.non_block_read(addr + 8)
    pins.__recv__()
    pins.__recv__()
    pins.__recv__()

