'''
    Top module of the testbench
    Authored by yzcc, 2024.4.13
'''
from .monitor import Moniter
from util.simplebus import SimpleBusWrapper
from util.cachewrapper import CacheWrapper
from util.ref_cahce import RefCache
from util.simpleram import SimpleRam
from util.simplemem import SimpleMem
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
        
        # Gold Memory
        self.goldmem    = SimpleMem()

        # Cache Dut
        self.cache  = CacheWrapper(self.io_bus, self.dut.xclock, self.dut.port)

        # Cache Ref
        self.ref_cache = RefCache(self.io_bus, self.mem_bus, self.dut.xclock)

        # Monitor
        Moniter(self.dut.xclock, self.io_bus, self.mem_bus, self.mmio_bus, self.ref_cache)

        # Test List
        #self.testlist   = ["cache_hit", "cache_miss", "random", "seq", "mmio_serial"]
        self.testlist   = ["random"]
    
    def teardown_class(self):
        self.dut.finalize()
        color.print_blue("\nCache Test End")

    # Random Test
    def test_random(self):
        if ("random" in self.testlist):
            self.cache.reset()
            self.mem.reset()
            self.mio.reset()
            
            # Run test
            from .random_test import random_test
            random_test(1000, self.cache, self.ref_cache)
            
    # Sequencial Test
    def test_sequencial(self):
        if ("seq" in self.testlist):
            self.cache.reset()
            self.goldmem.reset()
            self.mem.reset()
            self.mio.reset()

            # Add callback func checker
            from .seq_test import FuncChecker
            FuncChecker(self.dut.xclock, self.io_bus, self.mem_bus, self.mmio_bus)

            # Run test
            from .seq_test import seq_test
            seq_test(self.cache, self.goldmem)

    # MMIO Test
    def test_mmio(self):
        if ("mmio_serial" in self.testlist):
            self.cache.reset()
            self.goldmem.reset()
            self.mem.reset()
            self.mio.reset()

            # Add caallback func checker
            from .mmio_test import FuncChecker
            FuncChecker(self.dut.xclock, self.io_bus, self.mem_bus, self.mmio_bus)

            # Run test
            from .mmio_test import mmio_test
            mmio_test(self.cache, self.goldmem)

    # Cache Hit Test


    def run(self):
        self.setup_class()
        
        # random
        self.test_random()

        self.teardown_class()
    pass