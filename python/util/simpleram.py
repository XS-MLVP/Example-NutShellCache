import xspcomm as xsp
	
from util.simplebus import SimpleBusWrapper

import pytest

class SimpleRam():
	def __init__(self, port:xsp.XPort, clock:xsp.XClock, prefix=""):
		self.xclk	= clock
		self.memory = {}

		self.mBus = SimpleBusWrapper(port, prefix)
		self.mBus.ReqSetReady()

		self.xclk.StepRis(self.RamStepRis)

		self.read_index = 0
		self.read_base_addr = 0			# base addr of the cacheline to read
		self.read_offset	= 0			# current offset in the cachline

		self.write_index = 0
		self.write_base_addr = 0
		self.write_offset = 0

	def RamStepRis(self, *a, **b):
		self.mBus.port["resp_valid"].value = 0
		self.Read()
		self.Write()

	def RamRead(self, addr):
		if (addr in self.memory):
			return self.memory[addr]
		else:
			return 0
	

	def RamWrite(self, addr, data, mask):
		real_mask = 0
		for i in range(8):
			if (mask & 0b1 != 0):
				real_mask |= (0xff << (i * 8))
			mask >>= 1
		mem_data = self.RamRead(addr)
		data = (data & real_mask) | (mem_data & ~real_mask)
		self.memory[addr] = data

	def Read(self):
		if (self.mBus.IsReqRead()):	# normal
			addr = self.mBus.port["req_bits_addr"].value
			data = self.RamRead(addr)
			self.mBus.RespWriteData(self.mBus.cmd_readLast, data)
		if (self.mBus.IsReqReadBurst()): # burst
			addr = self.mBus.port["req_bits_addr"].value
			self.read_index = 8 # TODO: maybe is .size?
			self.read_offset =  addr % 64
			self.read_base_addr = addr - self.read_offset
		
		if (self.mBus.IsRespReady() and self.read_index != 0):
			addr = self.read_base_addr + self.read_offset
			data = self.RamRead(addr)
			cmd = 0
			if (self.read_index == 1):
				cmd = self.mBus.cmd_readLast
			self.read_index -= 1
			self.read_offset = (self.read_index + 8) % 64
			self.mBus.RespWriteData(cmd, data)

	def Write(self):
		if (self.mBus.IsReqWrite()):
			addr = self.mBus.port["req_bits_addr"].value
			mask = self.mBus.port["req_bits_wmask"].value
			data = self.mBus.port["req_bits_wdata"].value
			self.RamWrite(addr, data, mask)
			self.mBus.RespWriteData(self.mBus.cmd_writeResp, 0x114514)

		if (self.mBus.IsReqWriteBurst() or self.mBus.IsReqWriteLast()):
			addr = self.mBus.port["req_bits_addr"].value
			mask = self.mBus.port["req_bits_wmask"].value
			data = self.mBus.port["req_bits_wdata"].value
			if (self.write_index == 0):
				self.write_index = 8	# TODO: maybe is .size?
				self.write_offset = addr % 64
				self.write_base_addr = addr - self.write_offset
			addr = self.write_base_addr + self.write_offset
			self.RamWrite(addr, data, mask)
			self.mBus.RespWriteData(self.mBus.cmd_writeResp, 0x114514)
			self.write_index -= 1
			self.write_offset = (self.write_offset + 8) % 64
					