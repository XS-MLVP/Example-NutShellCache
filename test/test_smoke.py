"""
    Just Drive The Dut
    Author: yzcc
"""
import logging

from base_test import *

@toffee_test.testcase
async def test_smoke(start_func):
    env: NtCacheEnv = await start_func()

    await env.usertop.block_read(0x1)

    await env.usertop.block_write(0x1, 0x1, 0x1)

    await env.usertop.non_block_read(0x1)
    await env.usertop.non_block_read(0x2)

    res = await env.usertop.recv()