import sys, os
sys.path.append(os.getcwd())

def lc_test():
	from test.rw_test import random_test
	from test.rw_test import seq_test
	from test.cache_hit_test import cache_hit_test
	from test.cache_miss_test import cache_miss_test
	from dut import DUTCache
	from util.simplebus import SimpleBusWrapper
	from util.cachewrapper import CacheWrapper
	from util.simpleram import SimpleRam
	from util.simplemem import MemorySIM

	dut=DUTCache("libDPICache.so")
	dut.init_clock("clock")
	io_bus 		= SimpleBusWrapper(dut.port, "io_in_")
	coh_bus 	= SimpleBusWrapper(dut.port, "io_out_coh_")
	mem_bus		= SimpleBusWrapper(dut.port, "io_out_mem_")
	mmio_bus	= SimpleBusWrapper(dut.port, "io_mmio_")
	ram = SimpleRam(mem_bus, dut.xclock)
	mio = SimpleRam(mmio_bus, dut.xclock)
	goldmem = MemorySIM()
	cache = CacheWrapper(io_bus, dut.xclock, dut.port)

	# Cache Hit
	cache.reset()
	goldmem.reset()
	print("\n[Cache Hit Test] Preparing Env...")
	addr_l = 0
	addr_r = 32 * 1024
	cacheline_size = 64
	for addr in range(addr_l, addr_r, cacheline_size):
		cache.Read(addr)
	print("\n[Cache Hit Test] Env set Done..")
	#HitFuncChecker(dut.xclock, io_bus, mem_bus, mmio_bus)
	cache_hit_test(100, cache, goldmem)

	# Cache Miss
	cache.reset()
	goldmem.reset()
	print("\n[Cache Miss Test] Preparing Env...\n")
	addr_l = 0
	addr_r = 32 * 1024
	cache_line_size = 64
	for addr in range(addr_l, addr_r, cache_line_size):
		cache.Read(addr)
	print("\n[Cache Miss Test] Env set Done..\n")

	#MissFuncChecker(dut.xclock, io_bus, mem_bus, mmio_bus)
	cache_miss_test(10, cache, goldmem)

	# Random
	cache.reset()
	goldmem.reset()
	random_test(1000, cache, goldmem)

	# Seq
	cache.reset()
	goldmem.reset()
	seq_test(cache, goldmem)

	dut.finalize()

if __name__=="__main__":
	lc_test()
	pass

	
