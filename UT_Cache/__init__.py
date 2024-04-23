import sys, os
sys.path.append(os.getcwd())	

	
from xspcomm import *
from asyncio import run, create_task


if __name__ == "__main__":
	from  runner.tb_cache import TestCache
	tb = TestCache()
	tb.run()
	print("hello")
	pass