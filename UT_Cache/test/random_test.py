'''
	Random Read & Write test for NutShell Cache
	Authored by yzcc, 2024.3.29
'''

import random
from util.cachewrapper import CacheWrapper
from util.ref_cahce import RefCache

def random_test(ite:int, cache:CacheWrapper, ref_cache:RefCache):
	print("\n[Random Test]: Start Ramdom Test")
	for i in range(ite):
		act = random.randint(0, 1)

		if (act == 0):                  # write
			data = random.randint(0, 0x1145141919810)
			addr = random.randint(0, 0xffffffff) & (~0b111)
			mask = random.randint(0x1, 0xff)

			cache.Write(addr, data, mask)

			cres = cache.Read(addr)
			mres = ref_cache.probe_data(addr)
			   
			if (cres == mres):
				pass
			else:
				print(f"[Random Test]: Write at 0x{addr:x}, data 0x{data:x}, mask {mask:b}, ", end="")
				print(f"fail! (cache: 0x{cres:x}, mem: 0x{mres:x})")
			assert(cres == mres)

		else:                           # read
			addr = random.randint(0, 0xffffffff) & (~0xf)

			cres = cache.Read(addr)
			mres = ref_cache.probe_data(addr)

			if (cres == mres):
				pass
			else:
				print(f"[Random Test]: Read at 0x{addr:x}, ", end="")
				print(f"fail! (cache: 0x{cres:x}, mem: 0x{mres:x})")
			assert(cres == mres)
	print("[Random Test]: End Ramdom Test")