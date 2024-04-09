import sys, os
sys.path.append(os.getcwd())

def test():
	from test.random_test import random_check
	random_check()

	from test.cache_hit_test import cache_hit_check
	cache_hit_check()

	from test.cache_miss_test import cache_miss_check
	cache_miss_check()

if __name__=="__main__":
	#test()
	pass

	
