'''
    Sequencial read/write test
    Authored by yzcc, 2024.4.13
'''
import random

from util.cachewrapper import CacheWrapper
from util.ref_cache import RefCache
				
def seq_test(cache:CacheWrapper, ref_cache:RefCache):
	print("\n[Seq Test]: Start Seq Test")
	addr_l 	= 0x1000
	addr_r	= 0x9000
	for addr in range(addr_l, addr_r, 24):
		act = random.randint(0, 1)
		addr &= ~(0b111)

		addr1 = addr
		addr2 = addr + 4 
		addr3 = addr + 8
		if (act == 0):                  # write
			data = random.randint(0, 0xffffffff)
			mask = random.randint(0x1, 0xff)

			cache.write(addr, data, mask)

			cres = cache.read(addr)
			mres = ref_cache.probe_data(addr)
			   
			if (cres == mres):
				pass
			else:
				print(f"[Seq Test]: Write at 0x{addr:x}, data 0x{data:x}, mask {mask:b}, ", end="")
				print(f"fail! (cache: 0x{cres:x}, mem: 0x{mres:x})")
			assert(cres == mres)
			
		else:
			cache.trigger_read_req(addr1)
			cache.trigger_read_req(addr2)
			cache.trigger_read_req(addr3)

			cres1 = cache.recv()
			cres2 = cache.recv()
			cres3 = cache.recv()

			mres1 = ref_cache.probe_data(addr1)
			mres2 = ref_cache.probe_data(addr2)
			mres3 = ref_cache.probe_data(addr3)

			if (cres1 == mres1 and cres2 == mres2 and cres3 == mres3):
				pass
			else:
				print(f"[Seq Test]: Read at 0x{addr1:x} and 0x{addr2:x}, ", end="")
				print(f"fail! (\
		  cache: (1)0x{cres1:x} (2)0x{cres2:x}, (3)0x{cres3:x}\
			mem: (1)0x{mres1:x} (2)0x{mres2:x}, (3)0x{mres3:x})")
			assert(cres1 == mres1 and cres2 == mres2 and cres3 == mres3)
	print("[Seq Test]: End Seq Test")