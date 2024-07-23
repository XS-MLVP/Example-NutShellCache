"""
    Random Test
    Author: yzcc
"""

from env.cache_dut import CacheDut
from ref.ref_cache import RefCache
from mlvp.funcov import CovGroup

import random
import mlvp


def test_random(cache_pytest_req: tuple[CacheDut, RefCache, list[CovGroup]]):
    pins, ref, groups = cache_pytest_req

    random.seed(0)
    for i in range(300):
        if i % 100 == 0:
            mlvp.info(f"{i}/1000")
        act = random.randint(0, 1)

        if act == 0:            # write
            data = random.randint(0, 0x1145141919810)
            addr = random.randint(0, 0xffffffff) & (~0b111)
            mask = random.randint(0x1, 0xff)

            res = pins.block_write(addr, data, mask)

            dut_res = pins.block_read(addr)
            ref_res = ref.peek(addr)

            assert dut_res == ref_res, f"write err at addr 0x{addr:x}"
        else:                   # read
            addr = random.randint(0, 0xffffffff) & (~0xf)

            dut_res = pins.block_read(addr)
            ref_res = ref.peek(addr)

            assert dut_res == ref_res, f"read err at addr 0x{addr:x}"

