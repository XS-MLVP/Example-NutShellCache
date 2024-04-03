from util.cachewrapper import CacheWrapper
from util.simplemem import MemorySIM
from util.simplebus import SimpleBusWrapper as SB
import xspcomm as xsp

class MMIO_cnt():
	def __init__(self, clock:xsp.XClock, port:xsp.XPort):
		self.MMIO_LB	= 0x30000000
		self.MMIO_RB	= 0x7fffffff
		self.xclk	 	= clock
		self.port		= port

		self.xclk.StepRis(self.MMIO_prob)

	def MMIO_prob(self, *a, **b):		# add this to callback?
		addr	= self.port["io_in_req_bits_addr"].value
		cmd 	= self.port["io_in_req_bits_cmd"].value
		if (addr >= self.MMIO_LB and addr <= self.MMIO_RB):
			if (cmd == 0b0000):		# Read
				self.MMIOread_prob()
			if (cmd == 0b0001):
				self.MMIOwrite_prob()
		pass

	def MMIOread_prob(self):
		pass
	def MMIOwrite_prob(self):
		pass

