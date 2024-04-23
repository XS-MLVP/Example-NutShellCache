'''
	Cache miss test.
	Authored by yzcc, 2024.4.15
'''

from util.cachewrapper import CacheWrapper
from util.ref_cache	import RefCache
import random

'''
	I$ and D$ are both 32KB
	cacheline is 64B
'''
def cache_miss_test(ite:int, cache:CacheWrapper, ref_cache:RefCache):
	addr_base = 32 * 1024
	cacheline_size = 64

	print("\n[Cache Miss Test]: Start Cache Miss Test")
	# prepare the env (fill the cache)
	for addr in range(0, addr_base, cacheline_size):
		cache.read(addr)
	
	# test
	for i in range(ite):
		# test for cache miss block
		addr1 = addr_base + (4 * i) * cacheline_size
		addr2 = addr_base + (4 * i + 1) * cacheline_size
		addr3 = addr_base + (4 * i + 2) * cacheline_size

		if (random.randint(0, 1) == 0):
			cache.trigger_read_req(addr1)
			cache.trigger_read_req(addr2)
			cache.trigger_read_req(addr3)
		else:
			cache.trigger_write_req(addr1, 0x114514, 0xff)
			cache.trigger_write_req(addr2, 0x114514, 0xff)
			cache.trigger_write_req(addr3, 0x114514, 0xff)
		cache.recv()
		cache.recv()
		cache.recv()
	print("[Cache Miss Test]: Finish")
