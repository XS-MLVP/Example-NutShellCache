'''
    Top module of the testbench
    Authored by yzcc, 2024.4.13
'''
from monitor.monitor import Moniter
from util.simplebus import SimpleBusWrapper
from util.cachewrapper import CacheWrapper
from util.ref_cache import RefCache
from util.simpleram import SimpleRam
from cache_dut import DUTCache

from tools.colorprint import Color as color

class TestCache():
    def setup_class(self):
        color.print_blue("\nCache Test Start")

        self.dut = DUTCache("libDPICache.so")
        self.dut.init_clock("clock")

        # Bus
        self.io_bus     = SimpleBusWrapper(self.dut.port, "io_in_")
        self.coh_bus    = SimpleBusWrapper(self.dut.port, "io_out_coh_")
        self.mem_bus    = SimpleBusWrapper(self.dut.port, "io_out_mem_")
        self.mmio_bus   = SimpleBusWrapper(self.dut.port, "io_mmio_")
        
        # Ram
        self.mem    = SimpleRam(self.mem_bus, self.dut.xclock)
        self.mio    = SimpleRam(self.mmio_bus, self.dut.xclock)

        # Cache Ref 
        self.ref_cache = RefCache(self.io_bus, self.mem_bus, self.dut.xclock)

        # Monitor (Must behind Cache_Ref)
        Moniter(self.dut.xclock, self.io_bus, self.mem_bus, self.mmio_bus, self.ref_cache)

        # Cache Dut (Must be the last)
        self.cache  = CacheWrapper(self.io_bus, self.dut.xclock, self.dut.port)
        self.cache.reset()

        # Test List
        self.testlist   = ["random", "cache_hit", "cache_miss", "seq", "mmio_serial"]
    
    def teardown_class(self):
        self.dut.finalize()
        color.print_blue("\nCache Test End")

    def __reset(self):
        self.cache.reset()
        self.ref_cache.reset()
        self.mem.reset()
        self.mio.reset()

    # Random Test
    def test_random(self):
        if ("random" in self.testlist):
            # Run test
            from ..test.test_random import random_test
            random_test(1000, self.cache, self.ref_cache)
        else:
            print("\nrandom test is not included")
            
    # Sequencial Test
    def test_sequencial(self):
        if ("seq" in self.testlist):
            # Run test
            from ..test.test_seq import seq_test
            seq_test(self.cache, self.ref_cache)
        else:
            print("\nsequencial test is not included")

    # MMIO Test
    def test_mmio(self):
        if ("mmio_serial" in self.testlist):
            # Run test
            from ..test.test_mmio import mmio_test
            mmio_test(self.cache, self.ref_cache)
        else:
            print("\nmmio test is not included")

    # Cache Hit Test
    def test_cache_hit(self):
        if ("cache_hit" in self.testlist):
            self.__reset()      # TODO I don't know why removing this will cause err...
            from ..test.test_cache_hit import cache_hit_test
            cache_hit_test(100, self.cache, self.ref_cache)
        else:
            print("\ncache hit test is not included")

    # Cache Miss Test
    def test_cache_miss(self):
        if ("cache_miss" in self.testlist):
            self.__reset()      # TODO I don't know why removing this will cause err...
            from ..test.test_cache_miss import cache_miss_test
            cache_miss_test(100, self.cache, self.ref_cache)
        else:
            print("\ncache miss test is not included")

    def run(self):
        self.setup_class()
        
        # random
        self.test_random()
        #self.cache.reset()
        #self.cache.trigger_read_req(114514)
        #self.cache.xclk.Step(1000)

        self.teardown_class()
    pass