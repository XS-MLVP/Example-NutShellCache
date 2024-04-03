'''
	Random Read & Write test for NutShell Cache
	Authored by yzcc, 2024.3.29
'''

import random

from util.simplebus import SimpleBusWrapper
from util.cachewrapper import CacheWrapper
from util.simpleram import SimpleRam
from util.simplemem import MemorySIM
from dut import DUTCache

from func.mmio_func import MMIO_cnt

def random_test(ite:int, cache:CacheWrapper, goldmem:MemorySIM):
	#cache.reset()
	print("\n[Random Test]: Start Ramdom Test")
	for i in range(ite):
		act = random.randint(0, 1)

		if (act == 0):                  # write
			data = random.randint(0, 0x1145141919810)
			addr = random.randint(0, 0xffffffff) & (~0xf)
			mask = random.randint(0x1, 0xff)

			cache.Write(addr, data, mask)
			goldmem.MemoryWrite(addr, data, mask)

			print(f"[Random Test]: Write at 0x{addr:x}, data 0x{data:x}, mask {mask:b}, ", end="")

			cres = cache.Read(addr)
			mres = goldmem.MemoryRead(addr)

			if (cres == mres):
				print("pass!")
			else:
				print(f"fail! (cache: 0x{cres:x}, mem: 0x{mres:x})")
		else:                           # read
			addr = random.randint(0, 0xffffffff)
			print(f"[Random Test]: Read at 0x{addr:x}, ", end="")

			cres = cache.Read(addr)
			mres = goldmem.MemoryRead(addr)

			if (cres == mres):
				print("pass!")
			else:
				print(f"fail! (cache: 0x{cres:x}, mem: 0x{mres:x})")
	print("[Random Test]: End Ramdom Test\n")


def random_check():
	dut=DUTCache("libDPICache.so")
	dut.init_clock("clock")

	io = SimpleBusWrapper(dut.port, "io_in_")
	coh = SimpleBusWrapper(dut.port, "io_out_coh_")
	ram = SimpleRam(dut.port, dut.xclock, "io_out_mem_")
	mio = SimpleRam(dut.port, dut.xclock, "io_mmio_")
	goldmem = MemorySIM()
	cache = CacheWrapper(io, dut.xclock, dut.port)

	mmio_cnt = MMIO_cnt(dut.xclock, dut.port)

	# reset
	cache.reset()

	random_test(1000, cache, goldmem)

	dut.finalize()