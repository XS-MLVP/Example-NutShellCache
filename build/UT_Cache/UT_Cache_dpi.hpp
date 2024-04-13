// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VCACHE__DPI_H_
#define VERILATED_VCACHE__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI EXPORTS
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:218:17
    extern void get_clock(svLogic* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:708:17
    extern void get_io_empty(svLogic* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:368:17
    extern void get_io_flush(svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:258:17
    extern void get_io_in_req_bits_addr(svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:278:17
    extern void get_io_in_req_bits_cmd(svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:268:17
    extern void get_io_in_req_bits_size(svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:308:17
    extern void get_io_in_req_bits_user(svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:298:17
    extern void get_io_in_req_bits_wdata(svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:288:17
    extern void get_io_in_req_bits_wmask(svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:238:17
    extern void get_io_in_req_ready(svLogic* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:248:17
    extern void get_io_in_req_valid(svLogic* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:338:17
    extern void get_io_in_resp_bits_cmd(svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:348:17
    extern void get_io_in_resp_bits_rdata(svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:358:17
    extern void get_io_in_resp_bits_user(svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:318:17
    extern void get_io_in_resp_ready(svLogic* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:328:17
    extern void get_io_in_resp_valid(svLogic* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:618:17
    extern void get_io_mmio_req_bits_addr(svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:638:17
    extern void get_io_mmio_req_bits_cmd(svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:628:17
    extern void get_io_mmio_req_bits_size(svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:658:17
    extern void get_io_mmio_req_bits_wdata(svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:648:17
    extern void get_io_mmio_req_bits_wmask(svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:598:17
    extern void get_io_mmio_req_ready(svLogic* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:608:17
    extern void get_io_mmio_req_valid(svLogic* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:688:17
    extern void get_io_mmio_resp_bits_cmd(svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:698:17
    extern void get_io_mmio_resp_bits_rdata(svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:668:17
    extern void get_io_mmio_resp_ready(svLogic* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:678:17
    extern void get_io_mmio_resp_valid(svLogic* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:508:17
    extern void get_io_out_coh_req_bits_addr(svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:528:17
    extern void get_io_out_coh_req_bits_cmd(svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:518:17
    extern void get_io_out_coh_req_bits_size(svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:548:17
    extern void get_io_out_coh_req_bits_wdata(svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:538:17
    extern void get_io_out_coh_req_bits_wmask(svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:488:17
    extern void get_io_out_coh_req_ready(svLogic* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:498:17
    extern void get_io_out_coh_req_valid(svLogic* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:578:17
    extern void get_io_out_coh_resp_bits_cmd(svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:588:17
    extern void get_io_out_coh_resp_bits_rdata(svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:558:17
    extern void get_io_out_coh_resp_ready(svLogic* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:568:17
    extern void get_io_out_coh_resp_valid(svLogic* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:398:17
    extern void get_io_out_mem_req_bits_addr(svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:418:17
    extern void get_io_out_mem_req_bits_cmd(svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:408:17
    extern void get_io_out_mem_req_bits_size(svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:438:17
    extern void get_io_out_mem_req_bits_wdata(svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:428:17
    extern void get_io_out_mem_req_bits_wmask(svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:378:17
    extern void get_io_out_mem_req_ready(svLogic* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:388:17
    extern void get_io_out_mem_req_valid(svLogic* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:468:17
    extern void get_io_out_mem_resp_bits_cmd(svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:478:17
    extern void get_io_out_mem_resp_bits_rdata(svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:448:17
    extern void get_io_out_mem_resp_ready(svLogic* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:458:17
    extern void get_io_out_mem_resp_valid(svLogic* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:228:17
    extern void get_reset(svLogic* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:728:17
    extern void get_victim_way_mask(svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:718:17
    extern void get_victim_way_mask_valid(svLogic* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:223:17
    extern void set_clock(svLogic value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:713:17
    extern void set_io_empty(svLogic value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:373:17
    extern void set_io_flush(const svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:263:17
    extern void set_io_in_req_bits_addr(const svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:283:17
    extern void set_io_in_req_bits_cmd(const svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:273:17
    extern void set_io_in_req_bits_size(const svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:313:17
    extern void set_io_in_req_bits_user(const svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:303:17
    extern void set_io_in_req_bits_wdata(const svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:293:17
    extern void set_io_in_req_bits_wmask(const svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:243:17
    extern void set_io_in_req_ready(svLogic value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:253:17
    extern void set_io_in_req_valid(svLogic value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:343:17
    extern void set_io_in_resp_bits_cmd(const svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:353:17
    extern void set_io_in_resp_bits_rdata(const svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:363:17
    extern void set_io_in_resp_bits_user(const svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:323:17
    extern void set_io_in_resp_ready(svLogic value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:333:17
    extern void set_io_in_resp_valid(svLogic value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:623:17
    extern void set_io_mmio_req_bits_addr(const svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:643:17
    extern void set_io_mmio_req_bits_cmd(const svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:633:17
    extern void set_io_mmio_req_bits_size(const svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:663:17
    extern void set_io_mmio_req_bits_wdata(const svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:653:17
    extern void set_io_mmio_req_bits_wmask(const svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:603:17
    extern void set_io_mmio_req_ready(svLogic value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:613:17
    extern void set_io_mmio_req_valid(svLogic value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:693:17
    extern void set_io_mmio_resp_bits_cmd(const svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:703:17
    extern void set_io_mmio_resp_bits_rdata(const svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:673:17
    extern void set_io_mmio_resp_ready(svLogic value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:683:17
    extern void set_io_mmio_resp_valid(svLogic value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:513:17
    extern void set_io_out_coh_req_bits_addr(const svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:533:17
    extern void set_io_out_coh_req_bits_cmd(const svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:523:17
    extern void set_io_out_coh_req_bits_size(const svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:553:17
    extern void set_io_out_coh_req_bits_wdata(const svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:543:17
    extern void set_io_out_coh_req_bits_wmask(const svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:493:17
    extern void set_io_out_coh_req_ready(svLogic value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:503:17
    extern void set_io_out_coh_req_valid(svLogic value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:583:17
    extern void set_io_out_coh_resp_bits_cmd(const svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:593:17
    extern void set_io_out_coh_resp_bits_rdata(const svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:563:17
    extern void set_io_out_coh_resp_ready(svLogic value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:573:17
    extern void set_io_out_coh_resp_valid(svLogic value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:403:17
    extern void set_io_out_mem_req_bits_addr(const svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:423:17
    extern void set_io_out_mem_req_bits_cmd(const svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:413:17
    extern void set_io_out_mem_req_bits_size(const svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:443:17
    extern void set_io_out_mem_req_bits_wdata(const svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:433:17
    extern void set_io_out_mem_req_bits_wmask(const svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:383:17
    extern void set_io_out_mem_req_ready(svLogic value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:393:17
    extern void set_io_out_mem_req_valid(svLogic value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:473:17
    extern void set_io_out_mem_resp_bits_cmd(const svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:483:17
    extern void set_io_out_mem_resp_bits_rdata(const svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:453:17
    extern void set_io_out_mem_resp_ready(svLogic value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:463:17
    extern void set_io_out_mem_resp_valid(svLogic value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:233:17
    extern void set_reset(svLogic value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:733:17
    extern void set_victim_way_mask(const svLogicVecVal* value);
    // DPI export at /home/yzcc/XS-MLVP/Nutshell-cache/workload/Cache_top.sv:723:17
    extern void set_victim_way_mask_valid(svLogic value);

#ifdef __cplusplus
}
#endif

#endif  // guard
