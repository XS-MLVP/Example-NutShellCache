'''
    Sequencial read/write test
    Authored by yzcc, 2024.4.13
'''
import random

from util.simplebus import SimpleBusWrapper
from util.cachewrapper import CacheWrapper
from util.simpleram import SimpleRam
from util.simplemem import SimpleMem

import xspcomm as xsp
from util.message_queue import MessageQueue
import func.mmio_func as mmio_func
import func.cache_func as cache_func

from util.message_queue import MessageQueue

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

		if (self.mmio_bus.IsReqSend()):
			addr = self.mmio_bus.port["req_bits_addr"].value
			cmd  = self.mmio_bus.port["req_bits_cmd"].value
			req_addr, req_cmd, _ = self.msgq.peek_left()

			if (addr == req_addr and cmd == req_cmd):
				mmio_func.mmio_transmit()
			else:
				assert(0)

			if (cmd == self.mmio_bus.cmd_readBurst or cmd == self.mmio_bus.cmd_writeBurst):
				assert(0)
				pass
			else:
				mmio_func.mmio_not_burst()
				
def seq_test(cache:CacheWrapper, goldmem:SimpleMem):
	print("\n[Seq Test]: Start Seq Test")
	addr_l 	= 0
	addr_r	= 0x1000
	for addr in range(addr_l, addr_r, 24):
		act = random.randint(0, 1)
		addr &= ~(0b111)

		addr1 = addr
		addr2 = addr + 4 
		if (act == 0):                  # write
			data = random.randint(0, 0xffffffff)
			mask = random.randint(0x1, 0xff)

			cache.Write(addr, data, mask)
			goldmem.memory_write(addr, data, mask)

			cres = cache.Read(addr)
			mres = goldmem.memory_read(addr)
			   
			if (cres == mres):
				pass
			else:
				print(f"[Seq Test]: Write at 0x{addr:x}, data 0x{data:x}, mask {mask:b}, ", end="")
				print(f"fail! (cache: 0x{cres:x}, mem: 0x{mres:x})")
			assert(cres == mres)
			
		else:
			cache.p_bus.port["resp_ready"].value = 0
			cache.read_req_serial([addr1, addr2])
			cache.p_bus.port["resp_ready"].value = 1
			cres1 = cache.ReadRecv()
			cache.p_clk.Step(1)
			cres2 = cache.ReadRecv()
			cache.p_clk.Step(1)
			mres1 = goldmem.memory_read(addr1)
			mres2 = goldmem.memory_read(addr2)

			if (cres1 == mres1 and cres2 == mres2):
				pass
			else:
				print(f"[Seq Test]: Read at 0x{addr1:x} and 0x{addr2:x}, ", end="")
				print(f"fail! (cache: (1)0x{cres1:x} (2)0x{cres2:x}, mem: (1)0x{mres1:x} (2)0x{mres2:x})")
			assert(cres1 == mres1 and cres2 == mres2)
	print("[Seq Test]: End Seq Test")