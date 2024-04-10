'''
MemorySIM:
	Just a simple array...
'''
import pytest

class MemorySIM:
	def __init__(self):
		self.memory = {}
		self.LBOUND = 0x00000000
		self.RBOUND = 0xffffffff

	def reset(self):
		self.memory.clear()
	
	def MemoryRead(self, addr):
		assert (addr >= self.LBOUND and addr <= self.RBOUND), "[Memory-SIM]: Out of boundary."
		if addr in self.memory:
			return self.memory[addr]
		else:
			return 0
		
	def MemoryWrite(self, addr, data, mask):
		assert (addr >= self.LBOUND and addr <= self.RBOUND), "[Memory-SIM]: Out of boundary."
		real_mask = 0
		for i in range(8):
			if (mask & 0b1 != 0):
				real_mask |= (0xff << (i * 8))
			mask >>= 1

		mem_data = self.MemoryRead(addr)
		data = (data & real_mask) | (mem_data & ~real_mask)
		self.memory[addr] = data