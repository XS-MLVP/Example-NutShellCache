from util.simplebus import SimpleBusWrapper
from util.cachewrapper import CacheWrapper
from util.simpleram import SimpleRam
from util.simplemem import MemorySIM
from dut import DUTCache

import xspcomm as xsp
from util.message_queue import MessageQueue
import func.mmio_func as mmio_func
import func.cache_func as cache_func

import gc

class MissFuncChecker():
	def __init__(self, clk:xsp.XClock, io_bus:SimpleBusWrapper, mem_bus:SimpleBusWrapper, mmio_bus:SimpleBusWrapper):
		self.xclk		= clk
		self.io_bus		= io_bus
		self.mem_bus	= mem_bus
		self.mmio_bus	= mmio_bus

		self.has_mem_req_write	= 0
		self.lbound		= 0
		self.rbound		= 32 * 1024
		
		self.msgq		= MessageQueue(self.xclk)
		self.xclk.StepRis(self.__callback)
	
	def __callback(self, *a, **b):
		if (self.io_bus.IsReqSend()):
			addr = self.io_bus.port["req_bits_addr"].value
			cmd  = self.io_bus.port["req_bits_cmd"].value
			self.msgq.pushright(addr, cmd)

		if (self.io_bus.IsRespSend()):
			self.has_mem_req_write = 0
			addr, cmd, ts = self.msgq.popleft()
			if (not self.io_bus.IsReqReady()):
				cache_func.cache_miss_block()

		if (self.mem_bus.IsReqSend()):
			if (self.mem_bus.IsReqWrite() or self.mem_bus.IsReqWriteBurst()):
				self.has_mem_req_write = 1

			if (self.mem_bus.IsReqRead() or self.mem_bus.IsReqReadBurst()):
				if (self.has_mem_req_write):
					cache_func.cache_miss_dirty()
				req_addr = self.mem_bus.port["req_bits_addr"].value
				addr, cmd, _ = self.msgq.peek_left()
				if (addr & ~(0b111) == req_addr):
					cache_func.cache_keyword_first()
				assert(addr & ~(0b111) == req_addr)

'''
	I$ and D$ are both 32KB
	cacheline is 64B
'''
def cache_miss_test(ite:int, cache:CacheWrapper, goldmen:MemorySIM):
	addr_base = 32 * 1024
	cacheline_size = 64

	print("[Cache Miss Test] Running...")
	for i in range(ite):
		# test for cache miss block
		addr1 = addr_base + (4 * i) * cacheline_size
		addr2 = addr_base + (4 * i + 1) * cacheline_size
		addr3 = addr_base + (4 * i + 2) * cacheline_size
		cache.p_bus.port["resp_ready"].value = 0
		cache.read_req_serial([addr1, addr2])
		cache.p_bus.port["resp_ready"].value = 1
		cache.ReadRecv()
		cache.p_clk.Step(1)
		cache.ReadRecv()
		cache.p_clk.Step(1)
		#cache.ReadRecv()
		cache.Write(addr1, 0x114514, 0xff)
		cache.Write(addr2, 0x114514, 0xff)
		cache.Write(addr3, 0x114514, 0xff)
		pass
	for addr in range(addr_base, 2*addr_base, cacheline_size):
		cache.Read(addr)
	print("[Cache Miss Test] Finish\n")
	pass

def cache_miss_check():
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

	cache.reset()
	print("\n[Cache Miss Test] Preparing Env...\n")
	addr_l = 0
	addr_r = 32 * 1024
	cache_line_size = 64
	for addr in range(addr_l, addr_r, cache_line_size):
		cache.Read(addr)
	print("\n[Cache Miss Test] Env set Done..\n")

	MissFuncChecker(dut.xclock, io_bus, mem_bus, mmio_bus)
	cache_miss_test(10, cache, goldmem)

	dut.finalize()

