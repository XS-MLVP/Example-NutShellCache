'''
    A simple reference for Nutshell cache. Including data query, hit/miss/mmio query, and cacheline dirty/clean query.
    Authored by yzcc, 2024.4.13
'''

from .simplemem import SimpleMem
from .simplebus import SimpleBusWrapper
from .message_queue import MessageQueue
import xspcomm as xsp


'''
    I/D $:          32KB
    Cachline Size:  64B
'''
class RefCache:
    def __init__(self, io_bus: SimpleBusWrapper, mem_bus: SimpleBusWrapper, clk:xsp.XClock):
        self.CACHELINE_SZ   = 64
        self.MMIOLB     = 0x30000000
        self.MMIORB     = 0x7fffffff

        # Simulating memory
        self.goldmem    = SimpleMem()

        # Simulating dirty/clean cacheline， (Clean/Diry Table)
        # the element will be [in/out, clean/dirty], accessed by cacheline_base
        self.cacheline  = {}

        # Bus
        self.io_bus     = io_bus
        self.mem_bus    = mem_bus

        self.xclk   = clk
        self.xclk.StepRis(self.__callback)

        # Msg Queue
        self.msgq       = MessageQueue(self.xclk, maxlen=114514)

    def __callback(self, *a, **b):
        # if a cache r/w request has been triggered
        if (self.io_bus.IsReqSend()):
            addr    = self.io_bus.get_req_addr()
            cmd     = self.io_bus.get_req_cmd()
            if (self.io_bus.IsReqWrite()):
                # goldmem
                wdata   = self.io_bus.get_req_wdata()
                wmask   = self.io_bus.get_req_wmask()
                self.goldmem.memory_write(addr, wdata, wmask)

            # msg queue
            self.msgq.pushright(addr, cmd)

        # if a cache r/w req has been responsed
        if (self.io_bus.IsRespSend() and not self.msgq.empty()):
            # msg queue
            addr, cmd, _    = self.msgq.popleft()
            cacheline_base  = addr & (~0b111111)        # aligned to CACHELINSE_SZ
            
            # write: dirty cacheline
            if (cmd == self.io_bus.cmd_write and not self.__is_mmio(addr)):
                assert(cacheline_base in self.cacheline)
                assert(self.cacheline[cacheline_base][0] == "in")
                self.cacheline[cacheline_base][1]   = "dirty"

        # if cache trigger a memroy request
        if (self.mem_bus.IsReqSend()):
            addr = self.mem_bus.get_req_addr()
            cacheline_base = addr & (~0b111111)

            # read
            if (self.mem_bus.IsReqRead() or self.mem_bus.IsReqReadBurst()):
                assert((not (cacheline_base in self.cacheline)) or self.cacheline[cacheline_base][0] == "out")
                self.cacheline[cacheline_base] = ["in", "clean"]

            # write
            if (self.mem_bus.IsReqWrite() or self.mem_bus.IsReqWriteLast()):
                assert(cacheline_base in self.cacheline)
                self.cacheline[cacheline_base][0] = "out"

    # MMIO ?
    def __is_mmio(self, addr):
        return self.MMIOLB <= addr and addr <= self.MMIORB

    # reset
    def reset(self):
        self.msgq.deque.clear()

        self.goldmem.reset()

        self.cacheline.clear()

    # probe data in ref_cache at addr
    def probe_data(self, addr):
        return self.goldmem.memory_read(addr)

    # probe cacheline status
    def probe_cacheline_status(self, addr):
        cacheline_base = addr & (~0b111111)
        if (cacheline_base in self.cacheline):
            return self.cacheline[cacheline_base]
        else:
            return ["out", "clean"]
