// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
// Verilator compiles this file in when DPI functions are used.
// If you have multiple Verilated designs with the same DPI exported
// function names, you will get multiple definition link errors from here.
// This is an unfortunate result of the DPI specification.
// To solve this, either
//    1. Call VCache::{export_function} instead,
//       and do not even bother to compile this file
// or 2. Compile all __Dpi.cpp files in the same compiler run,
//       and #ifdefs already inserted here will sort everything out.

#include "VCache__Dpi.h"
#include "VCache.h"

#ifndef VL_DPIDECL_get_clock_
#define VL_DPIDECL_get_clock_
void get_clock(svLogic* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:218:17
    return VCache::get_clock(value);
}
#endif

#ifndef VL_DPIDECL_get_io_empty_
#define VL_DPIDECL_get_io_empty_
void get_io_empty(svLogic* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:708:17
    return VCache::get_io_empty(value);
}
#endif

#ifndef VL_DPIDECL_get_io_flush_
#define VL_DPIDECL_get_io_flush_
void get_io_flush(svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:368:17
    return VCache::get_io_flush(value);
}
#endif

#ifndef VL_DPIDECL_get_io_in_req_bits_addr_
#define VL_DPIDECL_get_io_in_req_bits_addr_
void get_io_in_req_bits_addr(svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:258:17
    return VCache::get_io_in_req_bits_addr(value);
}
#endif

#ifndef VL_DPIDECL_get_io_in_req_bits_cmd_
#define VL_DPIDECL_get_io_in_req_bits_cmd_
void get_io_in_req_bits_cmd(svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:278:17
    return VCache::get_io_in_req_bits_cmd(value);
}
#endif

#ifndef VL_DPIDECL_get_io_in_req_bits_size_
#define VL_DPIDECL_get_io_in_req_bits_size_
void get_io_in_req_bits_size(svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:268:17
    return VCache::get_io_in_req_bits_size(value);
}
#endif

#ifndef VL_DPIDECL_get_io_in_req_bits_user_
#define VL_DPIDECL_get_io_in_req_bits_user_
void get_io_in_req_bits_user(svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:308:17
    return VCache::get_io_in_req_bits_user(value);
}
#endif

#ifndef VL_DPIDECL_get_io_in_req_bits_wdata_
#define VL_DPIDECL_get_io_in_req_bits_wdata_
void get_io_in_req_bits_wdata(svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:298:17
    return VCache::get_io_in_req_bits_wdata(value);
}
#endif

#ifndef VL_DPIDECL_get_io_in_req_bits_wmask_
#define VL_DPIDECL_get_io_in_req_bits_wmask_
void get_io_in_req_bits_wmask(svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:288:17
    return VCache::get_io_in_req_bits_wmask(value);
}
#endif

#ifndef VL_DPIDECL_get_io_in_req_ready_
#define VL_DPIDECL_get_io_in_req_ready_
void get_io_in_req_ready(svLogic* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:238:17
    return VCache::get_io_in_req_ready(value);
}
#endif

#ifndef VL_DPIDECL_get_io_in_req_valid_
#define VL_DPIDECL_get_io_in_req_valid_
void get_io_in_req_valid(svLogic* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:248:17
    return VCache::get_io_in_req_valid(value);
}
#endif

#ifndef VL_DPIDECL_get_io_in_resp_bits_cmd_
#define VL_DPIDECL_get_io_in_resp_bits_cmd_
void get_io_in_resp_bits_cmd(svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:338:17
    return VCache::get_io_in_resp_bits_cmd(value);
}
#endif

#ifndef VL_DPIDECL_get_io_in_resp_bits_rdata_
#define VL_DPIDECL_get_io_in_resp_bits_rdata_
void get_io_in_resp_bits_rdata(svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:348:17
    return VCache::get_io_in_resp_bits_rdata(value);
}
#endif

#ifndef VL_DPIDECL_get_io_in_resp_bits_user_
#define VL_DPIDECL_get_io_in_resp_bits_user_
void get_io_in_resp_bits_user(svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:358:17
    return VCache::get_io_in_resp_bits_user(value);
}
#endif

#ifndef VL_DPIDECL_get_io_in_resp_ready_
#define VL_DPIDECL_get_io_in_resp_ready_
void get_io_in_resp_ready(svLogic* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:318:17
    return VCache::get_io_in_resp_ready(value);
}
#endif

#ifndef VL_DPIDECL_get_io_in_resp_valid_
#define VL_DPIDECL_get_io_in_resp_valid_
void get_io_in_resp_valid(svLogic* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:328:17
    return VCache::get_io_in_resp_valid(value);
}
#endif

#ifndef VL_DPIDECL_get_io_mmio_req_bits_addr_
#define VL_DPIDECL_get_io_mmio_req_bits_addr_
void get_io_mmio_req_bits_addr(svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:618:17
    return VCache::get_io_mmio_req_bits_addr(value);
}
#endif

#ifndef VL_DPIDECL_get_io_mmio_req_bits_cmd_
#define VL_DPIDECL_get_io_mmio_req_bits_cmd_
void get_io_mmio_req_bits_cmd(svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:638:17
    return VCache::get_io_mmio_req_bits_cmd(value);
}
#endif

#ifndef VL_DPIDECL_get_io_mmio_req_bits_size_
#define VL_DPIDECL_get_io_mmio_req_bits_size_
void get_io_mmio_req_bits_size(svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:628:17
    return VCache::get_io_mmio_req_bits_size(value);
}
#endif

#ifndef VL_DPIDECL_get_io_mmio_req_bits_wdata_
#define VL_DPIDECL_get_io_mmio_req_bits_wdata_
void get_io_mmio_req_bits_wdata(svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:658:17
    return VCache::get_io_mmio_req_bits_wdata(value);
}
#endif

#ifndef VL_DPIDECL_get_io_mmio_req_bits_wmask_
#define VL_DPIDECL_get_io_mmio_req_bits_wmask_
void get_io_mmio_req_bits_wmask(svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:648:17
    return VCache::get_io_mmio_req_bits_wmask(value);
}
#endif

#ifndef VL_DPIDECL_get_io_mmio_req_ready_
#define VL_DPIDECL_get_io_mmio_req_ready_
void get_io_mmio_req_ready(svLogic* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:598:17
    return VCache::get_io_mmio_req_ready(value);
}
#endif

#ifndef VL_DPIDECL_get_io_mmio_req_valid_
#define VL_DPIDECL_get_io_mmio_req_valid_
void get_io_mmio_req_valid(svLogic* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:608:17
    return VCache::get_io_mmio_req_valid(value);
}
#endif

#ifndef VL_DPIDECL_get_io_mmio_resp_bits_cmd_
#define VL_DPIDECL_get_io_mmio_resp_bits_cmd_
void get_io_mmio_resp_bits_cmd(svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:688:17
    return VCache::get_io_mmio_resp_bits_cmd(value);
}
#endif

#ifndef VL_DPIDECL_get_io_mmio_resp_bits_rdata_
#define VL_DPIDECL_get_io_mmio_resp_bits_rdata_
void get_io_mmio_resp_bits_rdata(svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:698:17
    return VCache::get_io_mmio_resp_bits_rdata(value);
}
#endif

#ifndef VL_DPIDECL_get_io_mmio_resp_ready_
#define VL_DPIDECL_get_io_mmio_resp_ready_
void get_io_mmio_resp_ready(svLogic* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:668:17
    return VCache::get_io_mmio_resp_ready(value);
}
#endif

#ifndef VL_DPIDECL_get_io_mmio_resp_valid_
#define VL_DPIDECL_get_io_mmio_resp_valid_
void get_io_mmio_resp_valid(svLogic* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:678:17
    return VCache::get_io_mmio_resp_valid(value);
}
#endif

#ifndef VL_DPIDECL_get_io_out_coh_req_bits_addr_
#define VL_DPIDECL_get_io_out_coh_req_bits_addr_
void get_io_out_coh_req_bits_addr(svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:508:17
    return VCache::get_io_out_coh_req_bits_addr(value);
}
#endif

#ifndef VL_DPIDECL_get_io_out_coh_req_bits_cmd_
#define VL_DPIDECL_get_io_out_coh_req_bits_cmd_
void get_io_out_coh_req_bits_cmd(svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:528:17
    return VCache::get_io_out_coh_req_bits_cmd(value);
}
#endif

#ifndef VL_DPIDECL_get_io_out_coh_req_bits_size_
#define VL_DPIDECL_get_io_out_coh_req_bits_size_
void get_io_out_coh_req_bits_size(svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:518:17
    return VCache::get_io_out_coh_req_bits_size(value);
}
#endif

#ifndef VL_DPIDECL_get_io_out_coh_req_bits_wdata_
#define VL_DPIDECL_get_io_out_coh_req_bits_wdata_
void get_io_out_coh_req_bits_wdata(svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:548:17
    return VCache::get_io_out_coh_req_bits_wdata(value);
}
#endif

#ifndef VL_DPIDECL_get_io_out_coh_req_bits_wmask_
#define VL_DPIDECL_get_io_out_coh_req_bits_wmask_
void get_io_out_coh_req_bits_wmask(svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:538:17
    return VCache::get_io_out_coh_req_bits_wmask(value);
}
#endif

#ifndef VL_DPIDECL_get_io_out_coh_req_ready_
#define VL_DPIDECL_get_io_out_coh_req_ready_
void get_io_out_coh_req_ready(svLogic* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:488:17
    return VCache::get_io_out_coh_req_ready(value);
}
#endif

#ifndef VL_DPIDECL_get_io_out_coh_req_valid_
#define VL_DPIDECL_get_io_out_coh_req_valid_
void get_io_out_coh_req_valid(svLogic* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:498:17
    return VCache::get_io_out_coh_req_valid(value);
}
#endif

#ifndef VL_DPIDECL_get_io_out_coh_resp_bits_cmd_
#define VL_DPIDECL_get_io_out_coh_resp_bits_cmd_
void get_io_out_coh_resp_bits_cmd(svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:578:17
    return VCache::get_io_out_coh_resp_bits_cmd(value);
}
#endif

#ifndef VL_DPIDECL_get_io_out_coh_resp_bits_rdata_
#define VL_DPIDECL_get_io_out_coh_resp_bits_rdata_
void get_io_out_coh_resp_bits_rdata(svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:588:17
    return VCache::get_io_out_coh_resp_bits_rdata(value);
}
#endif

#ifndef VL_DPIDECL_get_io_out_coh_resp_ready_
#define VL_DPIDECL_get_io_out_coh_resp_ready_
void get_io_out_coh_resp_ready(svLogic* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:558:17
    return VCache::get_io_out_coh_resp_ready(value);
}
#endif

#ifndef VL_DPIDECL_get_io_out_coh_resp_valid_
#define VL_DPIDECL_get_io_out_coh_resp_valid_
void get_io_out_coh_resp_valid(svLogic* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:568:17
    return VCache::get_io_out_coh_resp_valid(value);
}
#endif

#ifndef VL_DPIDECL_get_io_out_mem_req_bits_addr_
#define VL_DPIDECL_get_io_out_mem_req_bits_addr_
void get_io_out_mem_req_bits_addr(svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:398:17
    return VCache::get_io_out_mem_req_bits_addr(value);
}
#endif

#ifndef VL_DPIDECL_get_io_out_mem_req_bits_cmd_
#define VL_DPIDECL_get_io_out_mem_req_bits_cmd_
void get_io_out_mem_req_bits_cmd(svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:418:17
    return VCache::get_io_out_mem_req_bits_cmd(value);
}
#endif

#ifndef VL_DPIDECL_get_io_out_mem_req_bits_size_
#define VL_DPIDECL_get_io_out_mem_req_bits_size_
void get_io_out_mem_req_bits_size(svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:408:17
    return VCache::get_io_out_mem_req_bits_size(value);
}
#endif

#ifndef VL_DPIDECL_get_io_out_mem_req_bits_wdata_
#define VL_DPIDECL_get_io_out_mem_req_bits_wdata_
void get_io_out_mem_req_bits_wdata(svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:438:17
    return VCache::get_io_out_mem_req_bits_wdata(value);
}
#endif

#ifndef VL_DPIDECL_get_io_out_mem_req_bits_wmask_
#define VL_DPIDECL_get_io_out_mem_req_bits_wmask_
void get_io_out_mem_req_bits_wmask(svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:428:17
    return VCache::get_io_out_mem_req_bits_wmask(value);
}
#endif

#ifndef VL_DPIDECL_get_io_out_mem_req_ready_
#define VL_DPIDECL_get_io_out_mem_req_ready_
void get_io_out_mem_req_ready(svLogic* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:378:17
    return VCache::get_io_out_mem_req_ready(value);
}
#endif

#ifndef VL_DPIDECL_get_io_out_mem_req_valid_
#define VL_DPIDECL_get_io_out_mem_req_valid_
void get_io_out_mem_req_valid(svLogic* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:388:17
    return VCache::get_io_out_mem_req_valid(value);
}
#endif

#ifndef VL_DPIDECL_get_io_out_mem_resp_bits_cmd_
#define VL_DPIDECL_get_io_out_mem_resp_bits_cmd_
void get_io_out_mem_resp_bits_cmd(svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:468:17
    return VCache::get_io_out_mem_resp_bits_cmd(value);
}
#endif

#ifndef VL_DPIDECL_get_io_out_mem_resp_bits_rdata_
#define VL_DPIDECL_get_io_out_mem_resp_bits_rdata_
void get_io_out_mem_resp_bits_rdata(svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:478:17
    return VCache::get_io_out_mem_resp_bits_rdata(value);
}
#endif

#ifndef VL_DPIDECL_get_io_out_mem_resp_ready_
#define VL_DPIDECL_get_io_out_mem_resp_ready_
void get_io_out_mem_resp_ready(svLogic* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:448:17
    return VCache::get_io_out_mem_resp_ready(value);
}
#endif

#ifndef VL_DPIDECL_get_io_out_mem_resp_valid_
#define VL_DPIDECL_get_io_out_mem_resp_valid_
void get_io_out_mem_resp_valid(svLogic* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:458:17
    return VCache::get_io_out_mem_resp_valid(value);
}
#endif

#ifndef VL_DPIDECL_get_reset_
#define VL_DPIDECL_get_reset_
void get_reset(svLogic* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:228:17
    return VCache::get_reset(value);
}
#endif

#ifndef VL_DPIDECL_get_victim_way_mask_
#define VL_DPIDECL_get_victim_way_mask_
void get_victim_way_mask(svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:728:17
    return VCache::get_victim_way_mask(value);
}
#endif

#ifndef VL_DPIDECL_get_victim_way_mask_valid_
#define VL_DPIDECL_get_victim_way_mask_valid_
void get_victim_way_mask_valid(svLogic* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:718:17
    return VCache::get_victim_way_mask_valid(value);
}
#endif

#ifndef VL_DPIDECL_set_clock_
#define VL_DPIDECL_set_clock_
void set_clock(svLogic value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:223:17
    return VCache::set_clock(value);
}
#endif

#ifndef VL_DPIDECL_set_io_empty_
#define VL_DPIDECL_set_io_empty_
void set_io_empty(svLogic value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:713:17
    return VCache::set_io_empty(value);
}
#endif

#ifndef VL_DPIDECL_set_io_flush_
#define VL_DPIDECL_set_io_flush_
void set_io_flush(const svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:373:17
    return VCache::set_io_flush(value);
}
#endif

#ifndef VL_DPIDECL_set_io_in_req_bits_addr_
#define VL_DPIDECL_set_io_in_req_bits_addr_
void set_io_in_req_bits_addr(const svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:263:17
    return VCache::set_io_in_req_bits_addr(value);
}
#endif

#ifndef VL_DPIDECL_set_io_in_req_bits_cmd_
#define VL_DPIDECL_set_io_in_req_bits_cmd_
void set_io_in_req_bits_cmd(const svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:283:17
    return VCache::set_io_in_req_bits_cmd(value);
}
#endif

#ifndef VL_DPIDECL_set_io_in_req_bits_size_
#define VL_DPIDECL_set_io_in_req_bits_size_
void set_io_in_req_bits_size(const svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:273:17
    return VCache::set_io_in_req_bits_size(value);
}
#endif

#ifndef VL_DPIDECL_set_io_in_req_bits_user_
#define VL_DPIDECL_set_io_in_req_bits_user_
void set_io_in_req_bits_user(const svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:313:17
    return VCache::set_io_in_req_bits_user(value);
}
#endif

#ifndef VL_DPIDECL_set_io_in_req_bits_wdata_
#define VL_DPIDECL_set_io_in_req_bits_wdata_
void set_io_in_req_bits_wdata(const svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:303:17
    return VCache::set_io_in_req_bits_wdata(value);
}
#endif

#ifndef VL_DPIDECL_set_io_in_req_bits_wmask_
#define VL_DPIDECL_set_io_in_req_bits_wmask_
void set_io_in_req_bits_wmask(const svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:293:17
    return VCache::set_io_in_req_bits_wmask(value);
}
#endif

#ifndef VL_DPIDECL_set_io_in_req_ready_
#define VL_DPIDECL_set_io_in_req_ready_
void set_io_in_req_ready(svLogic value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:243:17
    return VCache::set_io_in_req_ready(value);
}
#endif

#ifndef VL_DPIDECL_set_io_in_req_valid_
#define VL_DPIDECL_set_io_in_req_valid_
void set_io_in_req_valid(svLogic value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:253:17
    return VCache::set_io_in_req_valid(value);
}
#endif

#ifndef VL_DPIDECL_set_io_in_resp_bits_cmd_
#define VL_DPIDECL_set_io_in_resp_bits_cmd_
void set_io_in_resp_bits_cmd(const svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:343:17
    return VCache::set_io_in_resp_bits_cmd(value);
}
#endif

#ifndef VL_DPIDECL_set_io_in_resp_bits_rdata_
#define VL_DPIDECL_set_io_in_resp_bits_rdata_
void set_io_in_resp_bits_rdata(const svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:353:17
    return VCache::set_io_in_resp_bits_rdata(value);
}
#endif

#ifndef VL_DPIDECL_set_io_in_resp_bits_user_
#define VL_DPIDECL_set_io_in_resp_bits_user_
void set_io_in_resp_bits_user(const svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:363:17
    return VCache::set_io_in_resp_bits_user(value);
}
#endif

#ifndef VL_DPIDECL_set_io_in_resp_ready_
#define VL_DPIDECL_set_io_in_resp_ready_
void set_io_in_resp_ready(svLogic value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:323:17
    return VCache::set_io_in_resp_ready(value);
}
#endif

#ifndef VL_DPIDECL_set_io_in_resp_valid_
#define VL_DPIDECL_set_io_in_resp_valid_
void set_io_in_resp_valid(svLogic value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:333:17
    return VCache::set_io_in_resp_valid(value);
}
#endif

#ifndef VL_DPIDECL_set_io_mmio_req_bits_addr_
#define VL_DPIDECL_set_io_mmio_req_bits_addr_
void set_io_mmio_req_bits_addr(const svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:623:17
    return VCache::set_io_mmio_req_bits_addr(value);
}
#endif

#ifndef VL_DPIDECL_set_io_mmio_req_bits_cmd_
#define VL_DPIDECL_set_io_mmio_req_bits_cmd_
void set_io_mmio_req_bits_cmd(const svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:643:17
    return VCache::set_io_mmio_req_bits_cmd(value);
}
#endif

#ifndef VL_DPIDECL_set_io_mmio_req_bits_size_
#define VL_DPIDECL_set_io_mmio_req_bits_size_
void set_io_mmio_req_bits_size(const svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:633:17
    return VCache::set_io_mmio_req_bits_size(value);
}
#endif

#ifndef VL_DPIDECL_set_io_mmio_req_bits_wdata_
#define VL_DPIDECL_set_io_mmio_req_bits_wdata_
void set_io_mmio_req_bits_wdata(const svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:663:17
    return VCache::set_io_mmio_req_bits_wdata(value);
}
#endif

#ifndef VL_DPIDECL_set_io_mmio_req_bits_wmask_
#define VL_DPIDECL_set_io_mmio_req_bits_wmask_
void set_io_mmio_req_bits_wmask(const svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:653:17
    return VCache::set_io_mmio_req_bits_wmask(value);
}
#endif

#ifndef VL_DPIDECL_set_io_mmio_req_ready_
#define VL_DPIDECL_set_io_mmio_req_ready_
void set_io_mmio_req_ready(svLogic value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:603:17
    return VCache::set_io_mmio_req_ready(value);
}
#endif

#ifndef VL_DPIDECL_set_io_mmio_req_valid_
#define VL_DPIDECL_set_io_mmio_req_valid_
void set_io_mmio_req_valid(svLogic value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:613:17
    return VCache::set_io_mmio_req_valid(value);
}
#endif

#ifndef VL_DPIDECL_set_io_mmio_resp_bits_cmd_
#define VL_DPIDECL_set_io_mmio_resp_bits_cmd_
void set_io_mmio_resp_bits_cmd(const svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:693:17
    return VCache::set_io_mmio_resp_bits_cmd(value);
}
#endif

#ifndef VL_DPIDECL_set_io_mmio_resp_bits_rdata_
#define VL_DPIDECL_set_io_mmio_resp_bits_rdata_
void set_io_mmio_resp_bits_rdata(const svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:703:17
    return VCache::set_io_mmio_resp_bits_rdata(value);
}
#endif

#ifndef VL_DPIDECL_set_io_mmio_resp_ready_
#define VL_DPIDECL_set_io_mmio_resp_ready_
void set_io_mmio_resp_ready(svLogic value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:673:17
    return VCache::set_io_mmio_resp_ready(value);
}
#endif

#ifndef VL_DPIDECL_set_io_mmio_resp_valid_
#define VL_DPIDECL_set_io_mmio_resp_valid_
void set_io_mmio_resp_valid(svLogic value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:683:17
    return VCache::set_io_mmio_resp_valid(value);
}
#endif

#ifndef VL_DPIDECL_set_io_out_coh_req_bits_addr_
#define VL_DPIDECL_set_io_out_coh_req_bits_addr_
void set_io_out_coh_req_bits_addr(const svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:513:17
    return VCache::set_io_out_coh_req_bits_addr(value);
}
#endif

#ifndef VL_DPIDECL_set_io_out_coh_req_bits_cmd_
#define VL_DPIDECL_set_io_out_coh_req_bits_cmd_
void set_io_out_coh_req_bits_cmd(const svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:533:17
    return VCache::set_io_out_coh_req_bits_cmd(value);
}
#endif

#ifndef VL_DPIDECL_set_io_out_coh_req_bits_size_
#define VL_DPIDECL_set_io_out_coh_req_bits_size_
void set_io_out_coh_req_bits_size(const svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:523:17
    return VCache::set_io_out_coh_req_bits_size(value);
}
#endif

#ifndef VL_DPIDECL_set_io_out_coh_req_bits_wdata_
#define VL_DPIDECL_set_io_out_coh_req_bits_wdata_
void set_io_out_coh_req_bits_wdata(const svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:553:17
    return VCache::set_io_out_coh_req_bits_wdata(value);
}
#endif

#ifndef VL_DPIDECL_set_io_out_coh_req_bits_wmask_
#define VL_DPIDECL_set_io_out_coh_req_bits_wmask_
void set_io_out_coh_req_bits_wmask(const svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:543:17
    return VCache::set_io_out_coh_req_bits_wmask(value);
}
#endif

#ifndef VL_DPIDECL_set_io_out_coh_req_ready_
#define VL_DPIDECL_set_io_out_coh_req_ready_
void set_io_out_coh_req_ready(svLogic value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:493:17
    return VCache::set_io_out_coh_req_ready(value);
}
#endif

#ifndef VL_DPIDECL_set_io_out_coh_req_valid_
#define VL_DPIDECL_set_io_out_coh_req_valid_
void set_io_out_coh_req_valid(svLogic value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:503:17
    return VCache::set_io_out_coh_req_valid(value);
}
#endif

#ifndef VL_DPIDECL_set_io_out_coh_resp_bits_cmd_
#define VL_DPIDECL_set_io_out_coh_resp_bits_cmd_
void set_io_out_coh_resp_bits_cmd(const svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:583:17
    return VCache::set_io_out_coh_resp_bits_cmd(value);
}
#endif

#ifndef VL_DPIDECL_set_io_out_coh_resp_bits_rdata_
#define VL_DPIDECL_set_io_out_coh_resp_bits_rdata_
void set_io_out_coh_resp_bits_rdata(const svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:593:17
    return VCache::set_io_out_coh_resp_bits_rdata(value);
}
#endif

#ifndef VL_DPIDECL_set_io_out_coh_resp_ready_
#define VL_DPIDECL_set_io_out_coh_resp_ready_
void set_io_out_coh_resp_ready(svLogic value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:563:17
    return VCache::set_io_out_coh_resp_ready(value);
}
#endif

#ifndef VL_DPIDECL_set_io_out_coh_resp_valid_
#define VL_DPIDECL_set_io_out_coh_resp_valid_
void set_io_out_coh_resp_valid(svLogic value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:573:17
    return VCache::set_io_out_coh_resp_valid(value);
}
#endif

#ifndef VL_DPIDECL_set_io_out_mem_req_bits_addr_
#define VL_DPIDECL_set_io_out_mem_req_bits_addr_
void set_io_out_mem_req_bits_addr(const svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:403:17
    return VCache::set_io_out_mem_req_bits_addr(value);
}
#endif

#ifndef VL_DPIDECL_set_io_out_mem_req_bits_cmd_
#define VL_DPIDECL_set_io_out_mem_req_bits_cmd_
void set_io_out_mem_req_bits_cmd(const svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:423:17
    return VCache::set_io_out_mem_req_bits_cmd(value);
}
#endif

#ifndef VL_DPIDECL_set_io_out_mem_req_bits_size_
#define VL_DPIDECL_set_io_out_mem_req_bits_size_
void set_io_out_mem_req_bits_size(const svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:413:17
    return VCache::set_io_out_mem_req_bits_size(value);
}
#endif

#ifndef VL_DPIDECL_set_io_out_mem_req_bits_wdata_
#define VL_DPIDECL_set_io_out_mem_req_bits_wdata_
void set_io_out_mem_req_bits_wdata(const svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:443:17
    return VCache::set_io_out_mem_req_bits_wdata(value);
}
#endif

#ifndef VL_DPIDECL_set_io_out_mem_req_bits_wmask_
#define VL_DPIDECL_set_io_out_mem_req_bits_wmask_
void set_io_out_mem_req_bits_wmask(const svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:433:17
    return VCache::set_io_out_mem_req_bits_wmask(value);
}
#endif

#ifndef VL_DPIDECL_set_io_out_mem_req_ready_
#define VL_DPIDECL_set_io_out_mem_req_ready_
void set_io_out_mem_req_ready(svLogic value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:383:17
    return VCache::set_io_out_mem_req_ready(value);
}
#endif

#ifndef VL_DPIDECL_set_io_out_mem_req_valid_
#define VL_DPIDECL_set_io_out_mem_req_valid_
void set_io_out_mem_req_valid(svLogic value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:393:17
    return VCache::set_io_out_mem_req_valid(value);
}
#endif

#ifndef VL_DPIDECL_set_io_out_mem_resp_bits_cmd_
#define VL_DPIDECL_set_io_out_mem_resp_bits_cmd_
void set_io_out_mem_resp_bits_cmd(const svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:473:17
    return VCache::set_io_out_mem_resp_bits_cmd(value);
}
#endif

#ifndef VL_DPIDECL_set_io_out_mem_resp_bits_rdata_
#define VL_DPIDECL_set_io_out_mem_resp_bits_rdata_
void set_io_out_mem_resp_bits_rdata(const svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:483:17
    return VCache::set_io_out_mem_resp_bits_rdata(value);
}
#endif

#ifndef VL_DPIDECL_set_io_out_mem_resp_ready_
#define VL_DPIDECL_set_io_out_mem_resp_ready_
void set_io_out_mem_resp_ready(svLogic value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:453:17
    return VCache::set_io_out_mem_resp_ready(value);
}
#endif

#ifndef VL_DPIDECL_set_io_out_mem_resp_valid_
#define VL_DPIDECL_set_io_out_mem_resp_valid_
void set_io_out_mem_resp_valid(svLogic value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:463:17
    return VCache::set_io_out_mem_resp_valid(value);
}
#endif

#ifndef VL_DPIDECL_set_reset_
#define VL_DPIDECL_set_reset_
void set_reset(svLogic value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:233:17
    return VCache::set_reset(value);
}
#endif

#ifndef VL_DPIDECL_set_victim_way_mask_
#define VL_DPIDECL_set_victim_way_mask_
void set_victim_way_mask(const svLogicVecVal* value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:733:17
    return VCache::set_victim_way_mask(value);
}
#endif

#ifndef VL_DPIDECL_set_victim_way_mask_valid_
#define VL_DPIDECL_set_victim_way_mask_valid_
void set_victim_way_mask_valid(svLogic value) {
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:723:17
    return VCache::set_victim_way_mask_valid(value);
}
#endif

