import sys, os
sys.path.append(os.getcwd())

from util.simplebus import SimpleBusWrapper
from util.cachewrapper import CacheWrapper
from util.simpleram import SimpleRam
from util.simplemem import MemorySIM
from dut import DUTCache

if __name__=="__main__":
	from test.random_test import random_check
	random_check()

	
