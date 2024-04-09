default:
	@cp python/cmake/${SIMULATOR}.cmake ${TARGET}/dut.cmake
	@cp python/CMakeLists.txt ${TARGET}/CMakeLists.txt
	@cp python/Makefile ${TARGET}/Makefile
	@cp python/dut.i ${TARGET}/dut.i
	-@mkdir ${TARGET}/util
	@cp python/util/*.py ${TARGET}/util/
	-@mkdir ${TARGET}/test
	@cp -r python/test/*.py ${TARGET}/test/
	-@mkdir ${TARGET}/func
	@cp python/func/*.py ${TARGET}/func/
	@cp python/*.py ${TARGET}/
	@cp python/pytest.ini ${TARGET}/
	@cp -r /usr/local/share/picker/python/xspcomm ${TARGET}/xspcomm
	cd ${TARGET} && make

ifeq ($(VERBOSE), OFF)
	cd ${TARGET} && rm -rf CMakeLists.txt dut* *.hpp build Makefile __pycache__ *.cmake
endif
