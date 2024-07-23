"""
    Function coverage of MMIO
"""

from picker_out.UT_Cache import DUTCache
from utils.cmd_code import *
from mlvp.funcov import CovGroup


def is_use_mmio():
    def use_mmio(dut: DUTCache):        # use MMIO
        req_valid = dut.io_mmio_req_valid.value
        req_ready = dut.io_mmio_req_ready.value
        req_addr = dut.io_mmio_req_bits_addr.value
        return req_valid and req_ready and 0x30000000 <= req_addr <= 0x3fffffff
    return use_mmio


def is_not_burst():     # MMIO will not trigger burst request
    def not_burst(dut: DUTCache):
        req_valid = dut.io_mmio_req_valid.value
        req_ready = dut.io_mmio_req_ready.value
        req_cmd = dut.io_mmio_req_bits_cmd
        return req_valid and req_ready and req_cmd != CMD_READBST and req_cmd != CMD_WRITEBST
    return not_burst


def is_block_ppl():     # MMIO request will block the pipeline
    def block_ppl(dut: DUTCache):
        req_valid = dut.io_mmio_req_valid.value
        req_ready = dut.io_mmio_req_ready.value
        top_ready = dut.io_in_req_ready.value
        return req_valid and req_ready and not top_ready
    return block_ppl


def get_cov_grp_of_mmio(dut: DUTCache):
    grp = CovGroup("NtCache MMIO")
    grp.add_watch_point(dut, {"use_mmio": is_use_mmio()}, name="MMIO Transmit")
    grp.add_watch_point(dut, {"no_burst_mmio": is_not_burst()}, name="MMIO Not Burst")
    grp.add_watch_point(dut, {"block_ppl_mmio": is_block_ppl()}, name="MMIO Block Pipeline")
    return grp

