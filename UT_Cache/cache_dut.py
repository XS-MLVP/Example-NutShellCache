
if __package__ or "." in __name__:
	from . import xspcomm as xsp
else:
	import xspcomm as xsp

if __package__ or "." in __name__:
	from .libUT_Cache import *
else:
	from libUT_Cache import *


class DUTCache(DutUnifiedBase):

	# 初始化
	def __init__(self, waveform_filename=None, coverage_filename=None, *a, **kw):
		super().__init__(*a, **kw)
		self.xclock = xsp.XClock(self.step)
		self.port  = xsp.XPort()
		self.xclock.Add(self.port)
		self.event = self.xclock.getEvent()

		# set output files
		if waveform_filename:
			super().set_waveform(waveform_filename)
		if coverage_filename:
			super().set_coverage(coverage_filename)

		# all Pins
		self.clock = xsp.XPin(xsp.XData(0, xsp.XData.In), self.event)
		self.reset = xsp.XPin(xsp.XData(0, xsp.XData.In), self.event)
		self.io_in_req_ready = xsp.XPin(xsp.XData(0, xsp.XData.Out), self.event)
		self.io_in_req_valid = xsp.XPin(xsp.XData(0, xsp.XData.In), self.event)
		self.io_in_req_bits_addr = xsp.XPin(xsp.XData(32, xsp.XData.In), self.event)
		self.io_in_req_bits_size = xsp.XPin(xsp.XData(3, xsp.XData.In), self.event)
		self.io_in_req_bits_cmd = xsp.XPin(xsp.XData(4, xsp.XData.In), self.event)
		self.io_in_req_bits_wmask = xsp.XPin(xsp.XData(8, xsp.XData.In), self.event)
		self.io_in_req_bits_wdata = xsp.XPin(xsp.XData(64, xsp.XData.In), self.event)
		self.io_in_req_bits_user = xsp.XPin(xsp.XData(16, xsp.XData.In), self.event)
		self.io_in_resp_ready = xsp.XPin(xsp.XData(0, xsp.XData.In), self.event)
		self.io_in_resp_valid = xsp.XPin(xsp.XData(0, xsp.XData.Out), self.event)
		self.io_in_resp_bits_cmd = xsp.XPin(xsp.XData(4, xsp.XData.Out), self.event)
		self.io_in_resp_bits_rdata = xsp.XPin(xsp.XData(64, xsp.XData.Out), self.event)
		self.io_in_resp_bits_user = xsp.XPin(xsp.XData(16, xsp.XData.Out), self.event)
		self.io_flush = xsp.XPin(xsp.XData(2, xsp.XData.In), self.event)
		self.io_out_mem_req_ready = xsp.XPin(xsp.XData(0, xsp.XData.In), self.event)
		self.io_out_mem_req_valid = xsp.XPin(xsp.XData(0, xsp.XData.Out), self.event)
		self.io_out_mem_req_bits_addr = xsp.XPin(xsp.XData(32, xsp.XData.Out), self.event)
		self.io_out_mem_req_bits_size = xsp.XPin(xsp.XData(3, xsp.XData.Out), self.event)
		self.io_out_mem_req_bits_cmd = xsp.XPin(xsp.XData(4, xsp.XData.Out), self.event)
		self.io_out_mem_req_bits_wmask = xsp.XPin(xsp.XData(8, xsp.XData.Out), self.event)
		self.io_out_mem_req_bits_wdata = xsp.XPin(xsp.XData(64, xsp.XData.Out), self.event)
		self.io_out_mem_resp_ready = xsp.XPin(xsp.XData(0, xsp.XData.Out), self.event)
		self.io_out_mem_resp_valid = xsp.XPin(xsp.XData(0, xsp.XData.In), self.event)
		self.io_out_mem_resp_bits_cmd = xsp.XPin(xsp.XData(4, xsp.XData.In), self.event)
		self.io_out_mem_resp_bits_rdata = xsp.XPin(xsp.XData(64, xsp.XData.In), self.event)
		self.io_out_coh_req_ready = xsp.XPin(xsp.XData(0, xsp.XData.Out), self.event)
		self.io_out_coh_req_valid = xsp.XPin(xsp.XData(0, xsp.XData.In), self.event)
		self.io_out_coh_req_bits_addr = xsp.XPin(xsp.XData(32, xsp.XData.In), self.event)
		self.io_out_coh_req_bits_size = xsp.XPin(xsp.XData(3, xsp.XData.In), self.event)
		self.io_out_coh_req_bits_cmd = xsp.XPin(xsp.XData(4, xsp.XData.In), self.event)
		self.io_out_coh_req_bits_wmask = xsp.XPin(xsp.XData(8, xsp.XData.In), self.event)
		self.io_out_coh_req_bits_wdata = xsp.XPin(xsp.XData(64, xsp.XData.In), self.event)
		self.io_out_coh_resp_ready = xsp.XPin(xsp.XData(0, xsp.XData.In), self.event)
		self.io_out_coh_resp_valid = xsp.XPin(xsp.XData(0, xsp.XData.Out), self.event)
		self.io_out_coh_resp_bits_cmd = xsp.XPin(xsp.XData(4, xsp.XData.Out), self.event)
		self.io_out_coh_resp_bits_rdata = xsp.XPin(xsp.XData(64, xsp.XData.Out), self.event)
		self.io_mmio_req_ready = xsp.XPin(xsp.XData(0, xsp.XData.In), self.event)
		self.io_mmio_req_valid = xsp.XPin(xsp.XData(0, xsp.XData.Out), self.event)
		self.io_mmio_req_bits_addr = xsp.XPin(xsp.XData(32, xsp.XData.Out), self.event)
		self.io_mmio_req_bits_size = xsp.XPin(xsp.XData(3, xsp.XData.Out), self.event)
		self.io_mmio_req_bits_cmd = xsp.XPin(xsp.XData(4, xsp.XData.Out), self.event)
		self.io_mmio_req_bits_wmask = xsp.XPin(xsp.XData(8, xsp.XData.Out), self.event)
		self.io_mmio_req_bits_wdata = xsp.XPin(xsp.XData(64, xsp.XData.Out), self.event)
		self.io_mmio_resp_ready = xsp.XPin(xsp.XData(0, xsp.XData.Out), self.event)
		self.io_mmio_resp_valid = xsp.XPin(xsp.XData(0, xsp.XData.In), self.event)
		self.io_mmio_resp_bits_cmd = xsp.XPin(xsp.XData(4, xsp.XData.In), self.event)
		self.io_mmio_resp_bits_rdata = xsp.XPin(xsp.XData(64, xsp.XData.In), self.event)
		self.io_empty = xsp.XPin(xsp.XData(0, xsp.XData.Out), self.event)
		self.victim_way_mask_valid = xsp.XPin(xsp.XData(0, xsp.XData.Out), self.event)
		self.victim_way_mask = xsp.XPin(xsp.XData(4, xsp.XData.Out), self.event)


		# BindDPI
		self.clock.BindDPIRW(DPIRclock, DPIWclock)
		self.reset.BindDPIRW(DPIRreset, DPIWreset)
		self.io_in_req_ready.BindDPIRW(DPIRio_in_req_ready, DPIWio_in_req_ready)
		self.io_in_req_valid.BindDPIRW(DPIRio_in_req_valid, DPIWio_in_req_valid)
		self.io_in_req_bits_addr.BindDPIRW(DPIRio_in_req_bits_addr, DPIWio_in_req_bits_addr)
		self.io_in_req_bits_size.BindDPIRW(DPIRio_in_req_bits_size, DPIWio_in_req_bits_size)
		self.io_in_req_bits_cmd.BindDPIRW(DPIRio_in_req_bits_cmd, DPIWio_in_req_bits_cmd)
		self.io_in_req_bits_wmask.BindDPIRW(DPIRio_in_req_bits_wmask, DPIWio_in_req_bits_wmask)
		self.io_in_req_bits_wdata.BindDPIRW(DPIRio_in_req_bits_wdata, DPIWio_in_req_bits_wdata)
		self.io_in_req_bits_user.BindDPIRW(DPIRio_in_req_bits_user, DPIWio_in_req_bits_user)
		self.io_in_resp_ready.BindDPIRW(DPIRio_in_resp_ready, DPIWio_in_resp_ready)
		self.io_in_resp_valid.BindDPIRW(DPIRio_in_resp_valid, DPIWio_in_resp_valid)
		self.io_in_resp_bits_cmd.BindDPIRW(DPIRio_in_resp_bits_cmd, DPIWio_in_resp_bits_cmd)
		self.io_in_resp_bits_rdata.BindDPIRW(DPIRio_in_resp_bits_rdata, DPIWio_in_resp_bits_rdata)
		self.io_in_resp_bits_user.BindDPIRW(DPIRio_in_resp_bits_user, DPIWio_in_resp_bits_user)
		self.io_flush.BindDPIRW(DPIRio_flush, DPIWio_flush)
		self.io_out_mem_req_ready.BindDPIRW(DPIRio_out_mem_req_ready, DPIWio_out_mem_req_ready)
		self.io_out_mem_req_valid.BindDPIRW(DPIRio_out_mem_req_valid, DPIWio_out_mem_req_valid)
		self.io_out_mem_req_bits_addr.BindDPIRW(DPIRio_out_mem_req_bits_addr, DPIWio_out_mem_req_bits_addr)
		self.io_out_mem_req_bits_size.BindDPIRW(DPIRio_out_mem_req_bits_size, DPIWio_out_mem_req_bits_size)
		self.io_out_mem_req_bits_cmd.BindDPIRW(DPIRio_out_mem_req_bits_cmd, DPIWio_out_mem_req_bits_cmd)
		self.io_out_mem_req_bits_wmask.BindDPIRW(DPIRio_out_mem_req_bits_wmask, DPIWio_out_mem_req_bits_wmask)
		self.io_out_mem_req_bits_wdata.BindDPIRW(DPIRio_out_mem_req_bits_wdata, DPIWio_out_mem_req_bits_wdata)
		self.io_out_mem_resp_ready.BindDPIRW(DPIRio_out_mem_resp_ready, DPIWio_out_mem_resp_ready)
		self.io_out_mem_resp_valid.BindDPIRW(DPIRio_out_mem_resp_valid, DPIWio_out_mem_resp_valid)
		self.io_out_mem_resp_bits_cmd.BindDPIRW(DPIRio_out_mem_resp_bits_cmd, DPIWio_out_mem_resp_bits_cmd)
		self.io_out_mem_resp_bits_rdata.BindDPIRW(DPIRio_out_mem_resp_bits_rdata, DPIWio_out_mem_resp_bits_rdata)
		self.io_out_coh_req_ready.BindDPIRW(DPIRio_out_coh_req_ready, DPIWio_out_coh_req_ready)
		self.io_out_coh_req_valid.BindDPIRW(DPIRio_out_coh_req_valid, DPIWio_out_coh_req_valid)
		self.io_out_coh_req_bits_addr.BindDPIRW(DPIRio_out_coh_req_bits_addr, DPIWio_out_coh_req_bits_addr)
		self.io_out_coh_req_bits_size.BindDPIRW(DPIRio_out_coh_req_bits_size, DPIWio_out_coh_req_bits_size)
		self.io_out_coh_req_bits_cmd.BindDPIRW(DPIRio_out_coh_req_bits_cmd, DPIWio_out_coh_req_bits_cmd)
		self.io_out_coh_req_bits_wmask.BindDPIRW(DPIRio_out_coh_req_bits_wmask, DPIWio_out_coh_req_bits_wmask)
		self.io_out_coh_req_bits_wdata.BindDPIRW(DPIRio_out_coh_req_bits_wdata, DPIWio_out_coh_req_bits_wdata)
		self.io_out_coh_resp_ready.BindDPIRW(DPIRio_out_coh_resp_ready, DPIWio_out_coh_resp_ready)
		self.io_out_coh_resp_valid.BindDPIRW(DPIRio_out_coh_resp_valid, DPIWio_out_coh_resp_valid)
		self.io_out_coh_resp_bits_cmd.BindDPIRW(DPIRio_out_coh_resp_bits_cmd, DPIWio_out_coh_resp_bits_cmd)
		self.io_out_coh_resp_bits_rdata.BindDPIRW(DPIRio_out_coh_resp_bits_rdata, DPIWio_out_coh_resp_bits_rdata)
		self.io_mmio_req_ready.BindDPIRW(DPIRio_mmio_req_ready, DPIWio_mmio_req_ready)
		self.io_mmio_req_valid.BindDPIRW(DPIRio_mmio_req_valid, DPIWio_mmio_req_valid)
		self.io_mmio_req_bits_addr.BindDPIRW(DPIRio_mmio_req_bits_addr, DPIWio_mmio_req_bits_addr)
		self.io_mmio_req_bits_size.BindDPIRW(DPIRio_mmio_req_bits_size, DPIWio_mmio_req_bits_size)
		self.io_mmio_req_bits_cmd.BindDPIRW(DPIRio_mmio_req_bits_cmd, DPIWio_mmio_req_bits_cmd)
		self.io_mmio_req_bits_wmask.BindDPIRW(DPIRio_mmio_req_bits_wmask, DPIWio_mmio_req_bits_wmask)
		self.io_mmio_req_bits_wdata.BindDPIRW(DPIRio_mmio_req_bits_wdata, DPIWio_mmio_req_bits_wdata)
		self.io_mmio_resp_ready.BindDPIRW(DPIRio_mmio_resp_ready, DPIWio_mmio_resp_ready)
		self.io_mmio_resp_valid.BindDPIRW(DPIRio_mmio_resp_valid, DPIWio_mmio_resp_valid)
		self.io_mmio_resp_bits_cmd.BindDPIRW(DPIRio_mmio_resp_bits_cmd, DPIWio_mmio_resp_bits_cmd)
		self.io_mmio_resp_bits_rdata.BindDPIRW(DPIRio_mmio_resp_bits_rdata, DPIWio_mmio_resp_bits_rdata)
		self.io_empty.BindDPIRW(DPIRio_empty, DPIWio_empty)
		self.victim_way_mask_valid.BindDPIRW(DPIRvictim_way_mask_valid, DPIWvictim_way_mask_valid)
		self.victim_way_mask.BindDPIRW(DPIRvictim_way_mask, DPIWvictim_way_mask)

		# Add2Port
		self.port.Add("clock", self.clock.xdata)
		self.port.Add("reset", self.reset.xdata)
		self.port.Add("io_in_req_ready", self.io_in_req_ready.xdata)
		self.port.Add("io_in_req_valid", self.io_in_req_valid.xdata)
		self.port.Add("io_in_req_bits_addr", self.io_in_req_bits_addr.xdata)
		self.port.Add("io_in_req_bits_size", self.io_in_req_bits_size.xdata)
		self.port.Add("io_in_req_bits_cmd", self.io_in_req_bits_cmd.xdata)
		self.port.Add("io_in_req_bits_wmask", self.io_in_req_bits_wmask.xdata)
		self.port.Add("io_in_req_bits_wdata", self.io_in_req_bits_wdata.xdata)
		self.port.Add("io_in_req_bits_user", self.io_in_req_bits_user.xdata)
		self.port.Add("io_in_resp_ready", self.io_in_resp_ready.xdata)
		self.port.Add("io_in_resp_valid", self.io_in_resp_valid.xdata)
		self.port.Add("io_in_resp_bits_cmd", self.io_in_resp_bits_cmd.xdata)
		self.port.Add("io_in_resp_bits_rdata", self.io_in_resp_bits_rdata.xdata)
		self.port.Add("io_in_resp_bits_user", self.io_in_resp_bits_user.xdata)
		self.port.Add("io_flush", self.io_flush.xdata)
		self.port.Add("io_out_mem_req_ready", self.io_out_mem_req_ready.xdata)
		self.port.Add("io_out_mem_req_valid", self.io_out_mem_req_valid.xdata)
		self.port.Add("io_out_mem_req_bits_addr", self.io_out_mem_req_bits_addr.xdata)
		self.port.Add("io_out_mem_req_bits_size", self.io_out_mem_req_bits_size.xdata)
		self.port.Add("io_out_mem_req_bits_cmd", self.io_out_mem_req_bits_cmd.xdata)
		self.port.Add("io_out_mem_req_bits_wmask", self.io_out_mem_req_bits_wmask.xdata)
		self.port.Add("io_out_mem_req_bits_wdata", self.io_out_mem_req_bits_wdata.xdata)
		self.port.Add("io_out_mem_resp_ready", self.io_out_mem_resp_ready.xdata)
		self.port.Add("io_out_mem_resp_valid", self.io_out_mem_resp_valid.xdata)
		self.port.Add("io_out_mem_resp_bits_cmd", self.io_out_mem_resp_bits_cmd.xdata)
		self.port.Add("io_out_mem_resp_bits_rdata", self.io_out_mem_resp_bits_rdata.xdata)
		self.port.Add("io_out_coh_req_ready", self.io_out_coh_req_ready.xdata)
		self.port.Add("io_out_coh_req_valid", self.io_out_coh_req_valid.xdata)
		self.port.Add("io_out_coh_req_bits_addr", self.io_out_coh_req_bits_addr.xdata)
		self.port.Add("io_out_coh_req_bits_size", self.io_out_coh_req_bits_size.xdata)
		self.port.Add("io_out_coh_req_bits_cmd", self.io_out_coh_req_bits_cmd.xdata)
		self.port.Add("io_out_coh_req_bits_wmask", self.io_out_coh_req_bits_wmask.xdata)
		self.port.Add("io_out_coh_req_bits_wdata", self.io_out_coh_req_bits_wdata.xdata)
		self.port.Add("io_out_coh_resp_ready", self.io_out_coh_resp_ready.xdata)
		self.port.Add("io_out_coh_resp_valid", self.io_out_coh_resp_valid.xdata)
		self.port.Add("io_out_coh_resp_bits_cmd", self.io_out_coh_resp_bits_cmd.xdata)
		self.port.Add("io_out_coh_resp_bits_rdata", self.io_out_coh_resp_bits_rdata.xdata)
		self.port.Add("io_mmio_req_ready", self.io_mmio_req_ready.xdata)
		self.port.Add("io_mmio_req_valid", self.io_mmio_req_valid.xdata)
		self.port.Add("io_mmio_req_bits_addr", self.io_mmio_req_bits_addr.xdata)
		self.port.Add("io_mmio_req_bits_size", self.io_mmio_req_bits_size.xdata)
		self.port.Add("io_mmio_req_bits_cmd", self.io_mmio_req_bits_cmd.xdata)
		self.port.Add("io_mmio_req_bits_wmask", self.io_mmio_req_bits_wmask.xdata)
		self.port.Add("io_mmio_req_bits_wdata", self.io_mmio_req_bits_wdata.xdata)
		self.port.Add("io_mmio_resp_ready", self.io_mmio_resp_ready.xdata)
		self.port.Add("io_mmio_resp_valid", self.io_mmio_resp_valid.xdata)
		self.port.Add("io_mmio_resp_bits_cmd", self.io_mmio_resp_bits_cmd.xdata)
		self.port.Add("io_mmio_resp_bits_rdata", self.io_mmio_resp_bits_rdata.xdata)
		self.port.Add("io_empty", self.io_empty.xdata)
		self.port.Add("victim_way_mask_valid", self.victim_way_mask_valid.xdata)
		self.port.Add("victim_way_mask", self.victim_way_mask.xdata)


	def __del__(self):
		super().__del__()
		self.finalize()

	def init_clock(self,name:str):
		self.xclock.Add(self.port[name])

	def Step(self,i: int):
		return self.xclock.Step(i)

	def StepRis(self, call_back, args=(), kwargs={}):
		return self.xclock.StepRis(call_back, args, kwargs)

	def StepFal(self, call_back, args=(), kwargs={}):
		return self.xclock.StepFal(call_back, args, kwargs)

	def __getitem__(self, key):
		return xsp.XPin(self.port[key], self.event)

	async def astep(self,i: int):
		return await self.xclock.AStep(i)

	async def acondition(self,fc_cheker):
		return await self.xclock.ACondition(fc_cheker)

	def runstep(self,i: int):
		return self.xclock.RunStep(i)

if __name__=="__main__":
	dut=DUTCache("libDPICache.so")
	dut.Step(1)
