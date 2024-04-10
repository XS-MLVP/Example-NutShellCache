from util.simplebus import SimpleBusWrapper
from util.cachewrapper import CacheWrapper
from util.simpleram import SimpleRam
from util.simplemem import MemorySIM
from dut import DUTCache

import xspcomm as xsp
from util.message_queue import MessageQueue
import func.mmio_func as mmio_func
import func.cache_func as cache_func
import pytest

import random

class HitFuncChecker():
	def __init__(self, clk:xsp.XClock, io_bus:SimpleBusWrapper, mem_bus:SimpleBusWrapper, mmio_bus:SimpleBusWrapper):
		self.xclk		= clk
		self.io_bus		= io_bus
		self.mem_bus	= mem_bus
		self.mmio_bus	= mmio_bus

		self.lbound		= 0
		self.rbound		= 32 * 1024
		
		self.msgq		= MessageQueue(self.xclk)
		self.xclk.StepRis(self.__callback)

	def __callback(self, *a, **b):
		if (self.io_bus.IsReqSend()):
			addr = self.io_bus.port["req_bits_addr"].value
			cmd  = self.io_bus.port["req_bits_cmd"].value
			self.msgq.pushright(addr, cmd)

		if (self.mem_bus.IsReqValid()):
			req_addr, req_cmd, _ = self.msgq.peek_left()

			addr = self.mem_bus.port["req_bits_addr"].value
			#assert((not (req_addr >=self.lbound and req_addr <= self.rbound)))
			cache_func.cache_wb_strategy()
			
		if (self.io_bus.IsRespSend()):
			self.msgq.popleft()
		pass

'''
	I$ and D$ are both 32KB
	cacheline is 64B
'''
def cache_hit_test(ite:int, cache:CacheWrapper, goldmem:MemorySIM):
	addr_l = 0
	addr_r = 32 * 1024

	print("\n[Cache Hit Test] Running..")
	for i in range(ite):
		act = random.randint(0, 1)

		if (act == 0):                  # write
			data = random.randint(0, 0x1145141919810)
			addr = random.randint(addr_l, addr_r) & (~0xf)
			mask = random.randint(0x1, 0xff)

			cache.Write(addr, data, mask)
			goldmem.MemoryWrite(addr, data, mask)

			cres = cache.Read(addr)
			mres = goldmem.MemoryRead(addr)

			if (cres == mres):
				pass
			else:
				print(f"[Cache Hit Test]: Write at 0x{addr:x}, data 0x{data:x}, mask {mask:b}, ", end="")
				print(f"fail! (cache: 0x{cres:x}, mem: 0x{mres:x})")
			assert(cres == mres)

		else:                           # read
			addr = random.randint(addr_l, addr_r) & (~0xf)

			cres = cache.Read(addr)
			mres = goldmem.MemoryRead(addr)

			if (cres == mres):
				pass
			else:
				print(f"[Cache Hit Test]: Read at 0x{addr:x}, ", end="")
				print(f"fail! (cache: 0x{cres:x}, mem: 0x{mres:x})")
			assert(cres == mres)

	cache.Read(addr_r + 114514)
	print("\n[Cache Hit Test] Finish")

def cache_hit_check():
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
	print("\n[Cache Hit Test] Preparing Env...")
	addr_l = 0
	addr_r = 32 * 1024
	cacheline_size = 64
	for addr in range(addr_l, addr_r, cacheline_size):
		cache.Read(addr)
	print("\n[Cache Hit Test] Env set Done..")
	
	HitFuncChecker(dut.xclock, io_bus, mem_bus, mmio_bus)
	cache_hit_test(100, cache, goldmem)
	dut.finalize()
