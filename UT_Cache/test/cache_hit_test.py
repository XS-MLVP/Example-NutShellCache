'''
	Cache hit test
	Authored by yzcc, 2024.4.15
'''

from util.cachewrapper import CacheWrapper
from util.ref_cache import RefCache

import random

'''
	I$ and D$ are both 32KB
	cacheline is 64B
'''
def cache_hit_test(ite:int, cache:CacheWrapper, ref_cache:RefCache):
	addr_l = 0
	addr_r = 32 * 1024
	cacheline_size = 64

	print("\n[Cache Hit Test] Start.")
	# prepare the env (fill the cache)
	for addr in range(addr_l, addr_r, cacheline_size):
		cache.read(addr)

	# test
	for i in range(ite):
		act = random.randint(0, 1)

		if (act == 0):                  # write
			data = random.randint(0, 0x1145141919810)
			addr = random.randint(addr_l, addr_r) & (~0b111)
			mask = random.randint(0x1, 0xff)

			cache.write(addr, data, mask)

			cres = cache.read(addr)
			mres = ref_cache.probe_data(addr)

			if (cres == mres):
				pass
			else:
				print(f"[Cache Hit Test]: Write at 0x{addr:x}, data 0x{data:x}, mask {mask:b}, ", end="")
				print(f"fail! (cache: 0x{cres:x}, mem: 0x{mres:x})")
			assert(cres == mres)

		else:                           # read
			addr = random.randint(addr_l, addr_r) & (~0b111)

			cres = cache.read(addr)
			mres = ref_cache.probe_data(addr)

			if (cres == mres):
				pass
			else:
				print(f"[Cache Hit Test]: Read at 0x{addr:x}, ", end="")
				print(f"fail! (cache: 0x{cres:x}, mem: 0x{mres:x})")
			assert(cres == mres)

	print("\n[Cache Hit Test] Finish")

