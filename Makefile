#Makefile for Cache

export SIMULATOR = verilator
export TRACE := vcd
export PROJECT := Cache
export TARGET := UT_Cache
export VERBOSE := ON
export EXAMPLE := ON
export TLANG := python
export SIMULATOR_FLAGS := 
export CFLAGS := 
export COVERAGE := ON

all: release 

compile:
	cmake . -Bbuild -DSIMULATOR=$(SIMULATOR) -DTRACE=$(TRACE) -DPROJECT=$(PROJECT) \
		-DSIMULATOR_FLAGS=$(SIMULATOR_FLAGS) -DCFLAGS=$(CFLAGS) -DCOVERAGE=$(COVERAGE)
	cmake --build build --config Debug --parallel `nproc`

release: compile
	@cp -r build/${TARGET} .
	@cp dut_base.hpp ${TARGET}/dut_base.hpp
	@make -f mk/${TLANG}.mk

pytest:
	@cd ${TARGET} && pytest --cov=func --cov-report=html

ifneq ($(VERBOSE), OFF)
	cp *.v *.sv ${TARGET}/
else
# remove all files except UT_*
	rm -rf $(shell ls |grep -v "UT_" |grep -v "example.*")
	rm -rf ${TARGET}.cpp
endif

coverage:
ifeq ($(COVERAGE), ON)
ifeq ($(SIMULATOR), verilator)
	rm -rf coverage/
	verilator_coverage -write-info coverage.info ./${TARGET}/V${PROJECT}_coverage.dat
	genhtml coverage.info --output-directory coverage
else
# TODO: add vcs?
	echo $(SIMULATOR) TBD	
endif
else
	echo coverage is not on
endif

clean: 