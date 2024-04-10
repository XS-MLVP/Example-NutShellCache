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

'''
	check the functional point
'''
import xspcomm as xsp
from util.message_queue import MessageQueue
import func.mmio_func as mmio_func
import func.cache_func as cache_func
import pytest

import gc

class FuncChecker():
	def __init__(self, clk:xsp.XClock, io_bus:SimpleBusWrapper, mem_bus:SimpleBusWrapper, mmio_bus:SimpleBusWrapper):
		self.xclk       = clk
		self.io_bus     = io_bus
		self.mem_bus    = mem_bus
		self.mmio_bus   = mmio_bus

		self.MMIO_LB    = 0x30000000
		self.MMIO_RB    = 0x7fffffff

		self.msgq       = MessageQueue(self.xclk)
		self.xclk.StepRis(self.__callback)
		pass

	def __callback(self, *a, **b):
		if (self.io_bus.IsReqSend()):
			addr = self.io_bus.port["req_bits_addr"].value
			cmd  = self.io_bus.port["req_bits_cmd"].value
			self.msgq.pushright(addr, cmd)

			if (addr >= self.MMIO_LB and addr <= self.MMIO_RB):
				if (self.io_bus.IsReqRead()):
					mmio_func.mmio_read_req()
				if (self.io_bus.IsReqWrite()):
					mmio_func.mmio_write_req()

		if (self.mmio_bus.IsReqSend()):
			addr = self.io_bus.port["req_bits_addr"].value
			cmd  = self.io_bus.port["req_bits_cmd"].value
			req_addr, req_cmd, _ = self.msgq.peek_right()

			if (addr == req_addr and cmd == req_cmd):
				mmio_func.mmio_transmit()
			else:
				pytest.assume(0)

		if (self.io_bus.IsRespSend()):
			addr, cmd, ts = self.msgq.popleft()
			if (not (addr >= self.MMIO_LB and addr <= self.MMIO_RB)):
				cts = self.msgq.ts
				if (cts - ts > 3):
					cache_func.cache_miss()
				if (cts - ts <= 3):
					cache_func.cache_hit()
			else:
				if (not self.io_bus.IsReqReady()):
					mmio_func.mmio_block()

def random_test(ite:int, cache:CacheWrapper, goldmem:MemorySIM):
	print("\n[Random Test]: Start Ramdom Test")
	for i in range(ite):
		act = random.randint(0, 1)

		if (act == 0):                  # write
			data = random.randint(0, 0x1145141919810)
			addr = random.randint(0, 0xffffffff) & (~0xf)
			mask = random.randint(0x1, 0xff)

			cache.Write(addr, data, mask)
			goldmem.MemoryWrite(addr, data, mask)

			cres = cache.Read(addr)
			mres = goldmem.MemoryRead(addr)
			   
			if (cres == mres):
				pass
			else:
				print(f"[Random Test]: Write at 0x{addr:x}, data 0x{data:x}, mask {mask:b}, ", end="")
				print(f"fail! (cache: 0x{cres:x}, mem: 0x{mres:x})")
			assert(cres == mres)

		else:                           # read
			addr = random.randint(0, 0xffffffff) & (~0xf)

			cres = cache.Read(addr)
			mres = goldmem.MemoryRead(addr)

			if (cres == mres):
				pass
			else:
				print(f"[Random Test]: Read at 0x{addr:x}, ", end="")
				print(f"fail! (cache: 0x{cres:x}, mem: 0x{mres:x})")
			assert(cres == mres)
	print("[Random Test]: End Ramdom Test\n")

def seq_test(cache:CacheWrapper, goldmem:MemorySIM):
	print("\n[Seq Test]: Start Seq Test")
	addr_l 	= 0
	addr_r	= 1000
	for addr in range(addr_l, addr_r, 8):
		act = random.randint(0, 1)
		addr &= ~(0xff)

		if (act == 0):                  # write
			data = random.randint(0, 0xffffffff)
			mask = random.randint(0x1, 0xff)

			cache.Write(addr, data, mask)
			goldmem.MemoryWrite(addr, data, mask)

			cres = cache.Read(addr)
			mres = goldmem.MemoryRead(addr)
			   
			if (cres == mres):
				pass
			else:
				print(f"[Seq Test]: Write at 0x{addr:x}, data 0x{data:x}, mask {mask:b}, ", end="")
				print(f"fail! (cache: 0x{cres:x}, mem: 0x{mres:x})")
			assert(cres == mres)
			
		else:
			cres = cache.Read(addr)
			mres = goldmem.MemoryRead(addr)

			if (cres == mres):
				pass
			else:
				print(f"[Seq Test]: Read at 0x{addr:x}, ", end="")
				print(f"fail! (cache: 0x{cres:x}, mem: 0x{mres:x})")
			assert(cres == mres)
	print("[Seq Test]: End Seq Test\n")

def rw_check():
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

	FuncChecker(dut.xclock, io_bus, mem_bus, mmio_bus)

	# reset
	cache.reset()
	goldmem.reset()

	random_test(1000, cache, goldmem)

	cache.reset()
	goldmem.reset()
	seq_test(cache, goldmem)

	dut.finalize()
	gc.collect()