import sys, os
sys.path.append(os.getcwd())

from util.simplebus import SimpleBusWrapper
from util.cachewrapper import CacheWrapper
from util.simpleram import SimpleRam
from util.simplemem import MemorySIM
from dut import DUTCache

def cache_check():
	from test.random_test import random_test
	dut=DUTCache("libDPICache.so")
	dut.init_clock("clock")

	io = SimpleBusWrapper(dut.port, "io_in_")
	coh = SimpleBusWrapper(dut.port, "io_out_coh_")
	ram = SimpleRam(dut.port, dut.xclock, "io_out_mem_")
	mio = SimpleRam(dut.port, dut.xclock, "io_mmio_")
	goldmem = MemorySIM()
	cache = CacheWrapper(io, dut.xclock, dut.port)

	# reset
	cache.reset()

	# random test
	random_test(1000, cache, goldmem)

	# mmio test

	dut.finalize()

if __name__=="__main__":
	from test.random_test import random_check
	random_check()

	
