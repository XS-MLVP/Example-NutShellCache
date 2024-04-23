'''
	MMIO Block test
	Authored by yzcc, 2024.4.13
'''
from util.cachewrapper import CacheWrapper
from util.ref_cache import RefCache
				
def mmio_test(cache: CacheWrapper, ref_cache:RefCache):
	mmio_lb	= 0x30000000
	mmio_rb	= 0x30001000
	
	print("\n[MMIO Test]: Start MMIO Serial Test")
	for addr in range(mmio_lb, mmio_rb, 16):
		addr &= ~(0xf)
		addr1 = addr
		addr2 = addr + 4
		addr3 = addr + 8

		cache.trigger_read_req(addr1)
		cache.trigger_read_req(addr2)
		cache.trigger_read_req(addr3)

		cache.recv()
		cache.recv()
		cache.recv()
		
	print("[MMIO Test]: Finish MMIO Serial Test")