"""
    Test case for cache miss
"""

from env.cache_dut import CacheDut
from env.simplebus_wrap import SimplebusWrapper
from ref.ref_cache import RefCache
from mlvp.funcov import CovGroup
from utils.cmd_code import *

from chk_miss import get_cov_grp_of_cache_miss


def test_miss(cache_pytest_req: tuple[CacheDut, RefCache, list[CovGroup]]):
    pins, _, groups = cache_pytest_req

    # Add CovGroup
    grp = get_cov_grp_of_cache_miss(pins.dut)
    pins.xclock.StepRis(lambda _: grp.sample())
    groups.append(grp)

    mem_bus = SimplebusWrapper(pins.mem_bundle)
    top_bus = SimplebusWrapper(pins.in_bundle)

    # Test
    pins.non_block_read(0x0)
    while not mem_bus.req.__is_fire__:
        pins.xclock.Step(1)
        assert not top_bus.resp.__is_fire__
    assert mem_bus.req.__addr__ == 0x0
    pins.__recv__()

    pins.non_block_read(0x1000)
    while not mem_bus.req.__is_fire__:
        pins.xclock.Step(1)
        assert not top_bus.resp.__is_fire__
    assert mem_bus.req.__addr__ == 0x1000
    pins.__recv__()

    pins.non_block_read(0x2000)
    while not mem_bus.req.__is_fire__:
        pins.xclock.Step(1)
        assert not top_bus.resp.__is_fire__
    assert mem_bus.req.__addr__ == 0x2000
    pins.__recv__()

    pins.non_block_write(0x400, 0x114, 0xf)
    for i in range(1000):
        pins.block_read(i * 64 + 0x1000)
