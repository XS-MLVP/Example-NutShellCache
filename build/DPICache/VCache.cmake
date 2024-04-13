# Verilated -*- CMake -*-
# DESCRIPTION: Verilator output: CMake include script with class lists
#
# This CMake script lists generated Verilated files, for including in higher level CMake scripts.
# This file is meant to be consumed by the verilate() function,
# which becomes available after executing `find_package(verilator).

### Constants...
set(PERL "perl" CACHE FILEPATH "Perl executable (from $PERL)")
set(VERILATOR_ROOT "/usr/local/share/verilator" CACHE PATH "Path to Verilator kit (from $VERILATOR_ROOT)")

### Compiler flags...
# User CFLAGS (from -CFLAGS on Verilator command line)
set(VCache_USER_CFLAGS "-fPIC ")
# User LDLIBS (from -LDFLAGS on Verilator command line)
set(VCache_USER_LDLIBS )

### Switches...
# SystemC output mode?  0/1 (from --sc)
set(VCache_SC 0)
# Coverage output mode?  0/1 (from --coverage)
set(VCache_COVERAGE 1)
# Threaded output mode?  0/1/N threads (from --threads)
set(VCache_THREADS 0)
# Threaded tracing output mode?  0/1/N threads (from --trace-threads)
set(VCache_TRACE_THREADS 0)
# Struct output mode?  0/1 (from --trace-structs)
set(VCache_TRACE_STRUCTS 0)
# VCD Tracing output mode?  0/1 (from --trace)
set(VCache_TRACE_VCD 1)
# FST Tracing output mode? 0/1 (from --fst-trace)
set(VCache_TRACE_FST 0)

### Sources...
# Global classes, need linked once per executable
set(VCache_GLOBAL "${VERILATOR_ROOT}/include/verilated.cpp" "${VERILATOR_ROOT}/include/verilated_dpi.cpp" "${VERILATOR_ROOT}/include/verilated_cov.cpp" "${VERILATOR_ROOT}/include/verilated_vcd_c.cpp")
# Generated module classes, non-fast-path, compile with low/medium optimization
set(VCache_CLASSES_SLOW "/home/yzcc/XS-MLVP/Nutshell-cache/workload/build/DPICache/VCache___024root__Slow.cpp" "/home/yzcc/XS-MLVP/Nutshell-cache/workload/build/DPICache/VCache___024root__DepSet_hc6909642__0__Slow.cpp" "/home/yzcc/XS-MLVP/Nutshell-cache/workload/build/DPICache/VCache___024root__DepSet_hc6909642__1__Slow.cpp" "/home/yzcc/XS-MLVP/Nutshell-cache/workload/build/DPICache/VCache___024root__DepSet_hc6909642__2__Slow.cpp" "/home/yzcc/XS-MLVP/Nutshell-cache/workload/build/DPICache/VCache___024root__DepSet_hc6909642__3__Slow.cpp" "/home/yzcc/XS-MLVP/Nutshell-cache/workload/build/DPICache/VCache___024root__DepSet_h420baa86__0__Slow.cpp")
# Generated module classes, fast-path, compile with highest optimization
set(VCache_CLASSES_FAST "/home/yzcc/XS-MLVP/Nutshell-cache/workload/build/DPICache/VCache.cpp" "/home/yzcc/XS-MLVP/Nutshell-cache/workload/build/DPICache/VCache__Dpi_Export__0.cpp" "/home/yzcc/XS-MLVP/Nutshell-cache/workload/build/DPICache/VCache___024root__DepSet_hc6909642__0.cpp" "/home/yzcc/XS-MLVP/Nutshell-cache/workload/build/DPICache/VCache___024root__DepSet_hc6909642__1.cpp" "/home/yzcc/XS-MLVP/Nutshell-cache/workload/build/DPICache/VCache___024root__DepSet_hc6909642__2.cpp" "/home/yzcc/XS-MLVP/Nutshell-cache/workload/build/DPICache/VCache___024root__DepSet_hc6909642__3.cpp" "/home/yzcc/XS-MLVP/Nutshell-cache/workload/build/DPICache/VCache___024root__DepSet_h420baa86__0.cpp")
# Generated support classes, non-fast-path, compile with low/medium optimization
set(VCache_SUPPORT_SLOW "/home/yzcc/XS-MLVP/Nutshell-cache/workload/build/DPICache/VCache__Syms.cpp" "/home/yzcc/XS-MLVP/Nutshell-cache/workload/build/DPICache/VCache__Trace__0__Slow.cpp")
# Generated support classes, fast-path, compile with highest optimization
set(VCache_SUPPORT_FAST "/home/yzcc/XS-MLVP/Nutshell-cache/workload/build/DPICache/VCache__Dpi.cpp" "/home/yzcc/XS-MLVP/Nutshell-cache/workload/build/DPICache/VCache__Trace__0.cpp")
# All dependencies
set(VCache_DEPS "/home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache.v" "/home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv" "/usr/local/bin/verilator_bin")
# User .cpp files (from .cpp's on Verilator command line)
set(VCache_USER_CLASSES )
