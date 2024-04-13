// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCACHE__SYMS_H_
#define VERILATED_VCACHE__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "VCache.h"

// INCLUDE MODULE CLASSES
#include "VCache___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)
using VCache__Vcb_get_clock_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*0:0*/ &value);
using VCache__Vcb_get_io_empty_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*0:0*/ &value);
using VCache__Vcb_get_io_flush_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*1:0*/ &value);
using VCache__Vcb_get_io_in_req_bits_addr_t = void (*) (VCache__Syms* __restrict vlSymsp, IData/*31:0*/ &value);
using VCache__Vcb_get_io_in_req_bits_cmd_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*3:0*/ &value);
using VCache__Vcb_get_io_in_req_bits_size_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*2:0*/ &value);
using VCache__Vcb_get_io_in_req_bits_user_t = void (*) (VCache__Syms* __restrict vlSymsp, SData/*15:0*/ &value);
using VCache__Vcb_get_io_in_req_bits_wdata_t = void (*) (VCache__Syms* __restrict vlSymsp, QData/*63:0*/ &value);
using VCache__Vcb_get_io_in_req_bits_wmask_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*7:0*/ &value);
using VCache__Vcb_get_io_in_req_ready_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*0:0*/ &value);
using VCache__Vcb_get_io_in_req_valid_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*0:0*/ &value);
using VCache__Vcb_get_io_in_resp_bits_cmd_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*3:0*/ &value);
using VCache__Vcb_get_io_in_resp_bits_rdata_t = void (*) (VCache__Syms* __restrict vlSymsp, QData/*63:0*/ &value);
using VCache__Vcb_get_io_in_resp_bits_user_t = void (*) (VCache__Syms* __restrict vlSymsp, SData/*15:0*/ &value);
using VCache__Vcb_get_io_in_resp_ready_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*0:0*/ &value);
using VCache__Vcb_get_io_in_resp_valid_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*0:0*/ &value);
using VCache__Vcb_get_io_mmio_req_bits_addr_t = void (*) (VCache__Syms* __restrict vlSymsp, IData/*31:0*/ &value);
using VCache__Vcb_get_io_mmio_req_bits_cmd_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*3:0*/ &value);
using VCache__Vcb_get_io_mmio_req_bits_size_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*2:0*/ &value);
using VCache__Vcb_get_io_mmio_req_bits_wdata_t = void (*) (VCache__Syms* __restrict vlSymsp, QData/*63:0*/ &value);
using VCache__Vcb_get_io_mmio_req_bits_wmask_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*7:0*/ &value);
using VCache__Vcb_get_io_mmio_req_ready_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*0:0*/ &value);
using VCache__Vcb_get_io_mmio_req_valid_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*0:0*/ &value);
using VCache__Vcb_get_io_mmio_resp_bits_cmd_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*3:0*/ &value);
using VCache__Vcb_get_io_mmio_resp_bits_rdata_t = void (*) (VCache__Syms* __restrict vlSymsp, QData/*63:0*/ &value);
using VCache__Vcb_get_io_mmio_resp_ready_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*0:0*/ &value);
using VCache__Vcb_get_io_mmio_resp_valid_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*0:0*/ &value);
using VCache__Vcb_get_io_out_coh_req_bits_addr_t = void (*) (VCache__Syms* __restrict vlSymsp, IData/*31:0*/ &value);
using VCache__Vcb_get_io_out_coh_req_bits_cmd_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*3:0*/ &value);
using VCache__Vcb_get_io_out_coh_req_bits_size_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*2:0*/ &value);
using VCache__Vcb_get_io_out_coh_req_bits_wdata_t = void (*) (VCache__Syms* __restrict vlSymsp, QData/*63:0*/ &value);
using VCache__Vcb_get_io_out_coh_req_bits_wmask_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*7:0*/ &value);
using VCache__Vcb_get_io_out_coh_req_ready_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*0:0*/ &value);
using VCache__Vcb_get_io_out_coh_req_valid_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*0:0*/ &value);
using VCache__Vcb_get_io_out_coh_resp_bits_cmd_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*3:0*/ &value);
using VCache__Vcb_get_io_out_coh_resp_bits_rdata_t = void (*) (VCache__Syms* __restrict vlSymsp, QData/*63:0*/ &value);
using VCache__Vcb_get_io_out_coh_resp_ready_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*0:0*/ &value);
using VCache__Vcb_get_io_out_coh_resp_valid_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*0:0*/ &value);
using VCache__Vcb_get_io_out_mem_req_bits_addr_t = void (*) (VCache__Syms* __restrict vlSymsp, IData/*31:0*/ &value);
using VCache__Vcb_get_io_out_mem_req_bits_cmd_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*3:0*/ &value);
using VCache__Vcb_get_io_out_mem_req_bits_size_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*2:0*/ &value);
using VCache__Vcb_get_io_out_mem_req_bits_wdata_t = void (*) (VCache__Syms* __restrict vlSymsp, QData/*63:0*/ &value);
using VCache__Vcb_get_io_out_mem_req_bits_wmask_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*7:0*/ &value);
using VCache__Vcb_get_io_out_mem_req_ready_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*0:0*/ &value);
using VCache__Vcb_get_io_out_mem_req_valid_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*0:0*/ &value);
using VCache__Vcb_get_io_out_mem_resp_bits_cmd_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*3:0*/ &value);
using VCache__Vcb_get_io_out_mem_resp_bits_rdata_t = void (*) (VCache__Syms* __restrict vlSymsp, QData/*63:0*/ &value);
using VCache__Vcb_get_io_out_mem_resp_ready_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*0:0*/ &value);
using VCache__Vcb_get_io_out_mem_resp_valid_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*0:0*/ &value);
using VCache__Vcb_get_reset_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*0:0*/ &value);
using VCache__Vcb_get_victim_way_mask_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*3:0*/ &value);
using VCache__Vcb_get_victim_way_mask_valid_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*0:0*/ &value);
using VCache__Vcb_set_clock_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*0:0*/ value);
using VCache__Vcb_set_io_empty_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*0:0*/ value);
using VCache__Vcb_set_io_flush_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*1:0*/ value);
using VCache__Vcb_set_io_in_req_bits_addr_t = void (*) (VCache__Syms* __restrict vlSymsp, IData/*31:0*/ value);
using VCache__Vcb_set_io_in_req_bits_cmd_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*3:0*/ value);
using VCache__Vcb_set_io_in_req_bits_size_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*2:0*/ value);
using VCache__Vcb_set_io_in_req_bits_user_t = void (*) (VCache__Syms* __restrict vlSymsp, SData/*15:0*/ value);
using VCache__Vcb_set_io_in_req_bits_wdata_t = void (*) (VCache__Syms* __restrict vlSymsp, QData/*63:0*/ value);
using VCache__Vcb_set_io_in_req_bits_wmask_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*7:0*/ value);
using VCache__Vcb_set_io_in_req_ready_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*0:0*/ value);
using VCache__Vcb_set_io_in_req_valid_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*0:0*/ value);
using VCache__Vcb_set_io_in_resp_bits_cmd_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*3:0*/ value);
using VCache__Vcb_set_io_in_resp_bits_rdata_t = void (*) (VCache__Syms* __restrict vlSymsp, QData/*63:0*/ value);
using VCache__Vcb_set_io_in_resp_bits_user_t = void (*) (VCache__Syms* __restrict vlSymsp, SData/*15:0*/ value);
using VCache__Vcb_set_io_in_resp_ready_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*0:0*/ value);
using VCache__Vcb_set_io_in_resp_valid_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*0:0*/ value);
using VCache__Vcb_set_io_mmio_req_bits_addr_t = void (*) (VCache__Syms* __restrict vlSymsp, IData/*31:0*/ value);
using VCache__Vcb_set_io_mmio_req_bits_cmd_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*3:0*/ value);
using VCache__Vcb_set_io_mmio_req_bits_size_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*2:0*/ value);
using VCache__Vcb_set_io_mmio_req_bits_wdata_t = void (*) (VCache__Syms* __restrict vlSymsp, QData/*63:0*/ value);
using VCache__Vcb_set_io_mmio_req_bits_wmask_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*7:0*/ value);
using VCache__Vcb_set_io_mmio_req_ready_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*0:0*/ value);
using VCache__Vcb_set_io_mmio_req_valid_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*0:0*/ value);
using VCache__Vcb_set_io_mmio_resp_bits_cmd_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*3:0*/ value);
using VCache__Vcb_set_io_mmio_resp_bits_rdata_t = void (*) (VCache__Syms* __restrict vlSymsp, QData/*63:0*/ value);
using VCache__Vcb_set_io_mmio_resp_ready_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*0:0*/ value);
using VCache__Vcb_set_io_mmio_resp_valid_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*0:0*/ value);
using VCache__Vcb_set_io_out_coh_req_bits_addr_t = void (*) (VCache__Syms* __restrict vlSymsp, IData/*31:0*/ value);
using VCache__Vcb_set_io_out_coh_req_bits_cmd_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*3:0*/ value);
using VCache__Vcb_set_io_out_coh_req_bits_size_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*2:0*/ value);
using VCache__Vcb_set_io_out_coh_req_bits_wdata_t = void (*) (VCache__Syms* __restrict vlSymsp, QData/*63:0*/ value);
using VCache__Vcb_set_io_out_coh_req_bits_wmask_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*7:0*/ value);
using VCache__Vcb_set_io_out_coh_req_ready_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*0:0*/ value);
using VCache__Vcb_set_io_out_coh_req_valid_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*0:0*/ value);
using VCache__Vcb_set_io_out_coh_resp_bits_cmd_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*3:0*/ value);
using VCache__Vcb_set_io_out_coh_resp_bits_rdata_t = void (*) (VCache__Syms* __restrict vlSymsp, QData/*63:0*/ value);
using VCache__Vcb_set_io_out_coh_resp_ready_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*0:0*/ value);
using VCache__Vcb_set_io_out_coh_resp_valid_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*0:0*/ value);
using VCache__Vcb_set_io_out_mem_req_bits_addr_t = void (*) (VCache__Syms* __restrict vlSymsp, IData/*31:0*/ value);
using VCache__Vcb_set_io_out_mem_req_bits_cmd_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*3:0*/ value);
using VCache__Vcb_set_io_out_mem_req_bits_size_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*2:0*/ value);
using VCache__Vcb_set_io_out_mem_req_bits_wdata_t = void (*) (VCache__Syms* __restrict vlSymsp, QData/*63:0*/ value);
using VCache__Vcb_set_io_out_mem_req_bits_wmask_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*7:0*/ value);
using VCache__Vcb_set_io_out_mem_req_ready_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*0:0*/ value);
using VCache__Vcb_set_io_out_mem_req_valid_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*0:0*/ value);
using VCache__Vcb_set_io_out_mem_resp_bits_cmd_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*3:0*/ value);
using VCache__Vcb_set_io_out_mem_resp_bits_rdata_t = void (*) (VCache__Syms* __restrict vlSymsp, QData/*63:0*/ value);
using VCache__Vcb_set_io_out_mem_resp_ready_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*0:0*/ value);
using VCache__Vcb_set_io_out_mem_resp_valid_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*0:0*/ value);
using VCache__Vcb_set_reset_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*0:0*/ value);
using VCache__Vcb_set_victim_way_mask_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*3:0*/ value);
using VCache__Vcb_set_victim_way_mask_valid_t = void (*) (VCache__Syms* __restrict vlSymsp, CData/*0:0*/ value);

// SYMS CLASS (contains all model state)
class VCache__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VCache* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VCache___024root               TOP;

    // COVERAGE
    uint32_t __Vcoverage[5234];

    // SCOPE NAMES
    VerilatedScope __Vscope_Cache_top;
    VerilatedScope __Vscope_Cache_top__Cache__s2;
    VerilatedScope __Vscope_Cache_top__Cache__s3;

    // CONSTRUCTORS
    VCache__Syms(VerilatedContext* contextp, const char* namep, VCache* modelp);
    ~VCache__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
