"""
    Functional coverage of cache miss
"""

from picker_out.UT_Cache import DUTCache
from utils.cmd_code import *
from mlvp.funcov import CovGroup


def is_cache_miss():
    """ detect whether pull up a read req from mem ports """
    def cache_miss(dut: DUTCache):
        req_valid = dut.io_out_mem_req_valid.value
        req_ready = dut.io_out_mem_req_ready.value
        return req_valid and req_ready
    return cache_miss


def is_cache_miss_block():
    """ block the pipeline when cache miss """
    def cache_miss(dut: DUTCache):
        req_valid = dut.io_out_mem_req_valid.value
        req_ready = dut.io_out_mem_req_ready.value
        top_ready = dut.io_in_req_ready.value
        return req_valid and req_ready and top_ready
    return cache_miss


def is_cache_miss_dirty():
    """ write back the dirty cacheline """
    def cache_miss_dirty(dut: DUTCache):
        req_valid = dut.io_out_mem_req_valid.value
        req_ready = dut.io_out_mem_req_ready.value
        req_cmd = dut.io_out_mem_req_bits_cmd.value
        return req_valid and req_ready and (req_cmd == CMD_WRITE or req_cmd == CMD_WRITEBST)
    return cache_miss_dirty


def get_cov_grp_of_cache_miss(dut: DUTCache):
    grp = CovGroup("NtCache Miss")
    grp.add_watch_point(dut, {"miss": is_cache_miss()}, name="Cache Miss")
    grp.add_watch_point(dut, {"block": is_cache_miss_block()}, name="Cache Miss Block")
    grp.add_watch_point(dut, {"write back dirty dat": is_cache_miss_dirty()}, name="Cache Miss Wb Dirty")
    return grp
