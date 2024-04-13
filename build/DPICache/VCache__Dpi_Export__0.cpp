// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "VCache.h"
#include "VCache__Syms.h"
#include "verilated_dpi.h"


void VCache::get_clock(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_clock\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_clock");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_clock_t __Vcb = (VCache__Vcb_get_clock_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VCache::set_clock(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_clock\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_clock");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_clock_t __Vcb = (VCache__Vcb_set_clock_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_reset(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_reset\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_reset");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_reset_t __Vcb = (VCache__Vcb_get_reset_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VCache::set_reset(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_reset\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_reset");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_reset_t __Vcb = (VCache__Vcb_set_reset_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_in_req_ready(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_in_req_ready\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_req_ready");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_in_req_ready_t __Vcb = (VCache__Vcb_get_io_in_req_ready_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VCache::set_io_in_req_ready(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_in_req_ready\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_req_ready");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_in_req_ready_t __Vcb = (VCache__Vcb_set_io_in_req_ready_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_in_req_valid(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_in_req_valid\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_req_valid");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_in_req_valid_t __Vcb = (VCache__Vcb_get_io_in_req_valid_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VCache::set_io_in_req_valid(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_in_req_valid\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_req_valid");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_in_req_valid_t __Vcb = (VCache__Vcb_set_io_in_req_valid_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_in_req_bits_addr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_in_req_bits_addr\n"); );
    // Init
    IData/*31:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_req_bits_addr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_in_req_bits_addr_t __Vcb = (VCache__Vcb_get_io_in_req_bits_addr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(32, value + 1 * value__Vidx, value__Vcvt);
}

void VCache::set_io_in_req_bits_addr(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_in_req_bits_addr\n"); );
    // Init
    IData/*31:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_req_bits_addr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_in_req_bits_addr_t __Vcb = (VCache__Vcb_set_io_in_req_bits_addr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = VL_SET_I_SVLV(value);
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_in_req_bits_size(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_in_req_bits_size\n"); );
    // Init
    CData/*2:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_req_bits_size");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_in_req_bits_size_t __Vcb = (VCache__Vcb_get_io_in_req_bits_size_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(3, value + 1 * value__Vidx, value__Vcvt);
}

void VCache::set_io_in_req_bits_size(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_in_req_bits_size\n"); );
    // Init
    CData/*2:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_req_bits_size");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_in_req_bits_size_t __Vcb = (VCache__Vcb_set_io_in_req_bits_size_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (7U & VL_SET_I_SVLV(value));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_in_req_bits_cmd(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_in_req_bits_cmd\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_req_bits_cmd");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_in_req_bits_cmd_t __Vcb = (VCache__Vcb_get_io_in_req_bits_cmd_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(4, value + 1 * value__Vidx, value__Vcvt);
}

void VCache::set_io_in_req_bits_cmd(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_in_req_bits_cmd\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_req_bits_cmd");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_in_req_bits_cmd_t __Vcb = (VCache__Vcb_set_io_in_req_bits_cmd_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xfU & VL_SET_I_SVLV(value));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_in_req_bits_wmask(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_in_req_bits_wmask\n"); );
    // Init
    CData/*7:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_req_bits_wmask");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_in_req_bits_wmask_t __Vcb = (VCache__Vcb_get_io_in_req_bits_wmask_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(8, value + 1 * value__Vidx, value__Vcvt);
}

void VCache::set_io_in_req_bits_wmask(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_in_req_bits_wmask\n"); );
    // Init
    CData/*7:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_req_bits_wmask");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_in_req_bits_wmask_t __Vcb = (VCache__Vcb_set_io_in_req_bits_wmask_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xffU & VL_SET_I_SVLV(value));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_in_req_bits_wdata(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_in_req_bits_wdata\n"); );
    // Init
    QData/*63:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_req_bits_wdata");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_in_req_bits_wdata_t __Vcb = (VCache__Vcb_get_io_in_req_bits_wdata_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(64, value + 2 * value__Vidx, value__Vcvt);
}

void VCache::set_io_in_req_bits_wdata(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_in_req_bits_wdata\n"); );
    // Init
    QData/*63:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_req_bits_wdata");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_in_req_bits_wdata_t __Vcb = (VCache__Vcb_set_io_in_req_bits_wdata_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = VL_SET_Q_SVLV(value);
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_in_req_bits_user(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_in_req_bits_user\n"); );
    // Init
    SData/*15:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_req_bits_user");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_in_req_bits_user_t __Vcb = (VCache__Vcb_get_io_in_req_bits_user_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(16, value + 1 * value__Vidx, value__Vcvt);
}

void VCache::set_io_in_req_bits_user(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_in_req_bits_user\n"); );
    // Init
    SData/*15:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_req_bits_user");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_in_req_bits_user_t __Vcb = (VCache__Vcb_set_io_in_req_bits_user_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xffffU & VL_SET_I_SVLV(value));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_in_resp_ready(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_in_resp_ready\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_resp_ready");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_in_resp_ready_t __Vcb = (VCache__Vcb_get_io_in_resp_ready_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VCache::set_io_in_resp_ready(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_in_resp_ready\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_resp_ready");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_in_resp_ready_t __Vcb = (VCache__Vcb_set_io_in_resp_ready_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_in_resp_valid(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_in_resp_valid\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_resp_valid");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_in_resp_valid_t __Vcb = (VCache__Vcb_get_io_in_resp_valid_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VCache::set_io_in_resp_valid(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_in_resp_valid\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_resp_valid");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_in_resp_valid_t __Vcb = (VCache__Vcb_set_io_in_resp_valid_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_in_resp_bits_cmd(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_in_resp_bits_cmd\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_resp_bits_cmd");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_in_resp_bits_cmd_t __Vcb = (VCache__Vcb_get_io_in_resp_bits_cmd_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(4, value + 1 * value__Vidx, value__Vcvt);
}

void VCache::set_io_in_resp_bits_cmd(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_in_resp_bits_cmd\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_resp_bits_cmd");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_in_resp_bits_cmd_t __Vcb = (VCache__Vcb_set_io_in_resp_bits_cmd_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xfU & VL_SET_I_SVLV(value));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_in_resp_bits_rdata(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_in_resp_bits_rdata\n"); );
    // Init
    QData/*63:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_resp_bits_rdata");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_in_resp_bits_rdata_t __Vcb = (VCache__Vcb_get_io_in_resp_bits_rdata_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(64, value + 2 * value__Vidx, value__Vcvt);
}

void VCache::set_io_in_resp_bits_rdata(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_in_resp_bits_rdata\n"); );
    // Init
    QData/*63:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_resp_bits_rdata");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_in_resp_bits_rdata_t __Vcb = (VCache__Vcb_set_io_in_resp_bits_rdata_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = VL_SET_Q_SVLV(value);
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_in_resp_bits_user(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_in_resp_bits_user\n"); );
    // Init
    SData/*15:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_in_resp_bits_user");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_in_resp_bits_user_t __Vcb = (VCache__Vcb_get_io_in_resp_bits_user_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(16, value + 1 * value__Vidx, value__Vcvt);
}

void VCache::set_io_in_resp_bits_user(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_in_resp_bits_user\n"); );
    // Init
    SData/*15:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_in_resp_bits_user");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_in_resp_bits_user_t __Vcb = (VCache__Vcb_set_io_in_resp_bits_user_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xffffU & VL_SET_I_SVLV(value));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_flush(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_flush\n"); );
    // Init
    CData/*1:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_flush");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_flush_t __Vcb = (VCache__Vcb_get_io_flush_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(2, value + 1 * value__Vidx, value__Vcvt);
}

void VCache::set_io_flush(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_flush\n"); );
    // Init
    CData/*1:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_flush");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_flush_t __Vcb = (VCache__Vcb_set_io_flush_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (3U & VL_SET_I_SVLV(value));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_out_mem_req_ready(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_out_mem_req_ready\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_mem_req_ready");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_out_mem_req_ready_t __Vcb = (VCache__Vcb_get_io_out_mem_req_ready_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VCache::set_io_out_mem_req_ready(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_out_mem_req_ready\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_mem_req_ready");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_out_mem_req_ready_t __Vcb = (VCache__Vcb_set_io_out_mem_req_ready_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_out_mem_req_valid(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_out_mem_req_valid\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_mem_req_valid");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_out_mem_req_valid_t __Vcb = (VCache__Vcb_get_io_out_mem_req_valid_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VCache::set_io_out_mem_req_valid(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_out_mem_req_valid\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_mem_req_valid");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_out_mem_req_valid_t __Vcb = (VCache__Vcb_set_io_out_mem_req_valid_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_out_mem_req_bits_addr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_out_mem_req_bits_addr\n"); );
    // Init
    IData/*31:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_mem_req_bits_addr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_out_mem_req_bits_addr_t __Vcb = (VCache__Vcb_get_io_out_mem_req_bits_addr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(32, value + 1 * value__Vidx, value__Vcvt);
}

void VCache::set_io_out_mem_req_bits_addr(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_out_mem_req_bits_addr\n"); );
    // Init
    IData/*31:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_mem_req_bits_addr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_out_mem_req_bits_addr_t __Vcb = (VCache__Vcb_set_io_out_mem_req_bits_addr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = VL_SET_I_SVLV(value);
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_out_mem_req_bits_size(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_out_mem_req_bits_size\n"); );
    // Init
    CData/*2:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_mem_req_bits_size");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_out_mem_req_bits_size_t __Vcb = (VCache__Vcb_get_io_out_mem_req_bits_size_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(3, value + 1 * value__Vidx, value__Vcvt);
}

void VCache::set_io_out_mem_req_bits_size(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_out_mem_req_bits_size\n"); );
    // Init
    CData/*2:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_mem_req_bits_size");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_out_mem_req_bits_size_t __Vcb = (VCache__Vcb_set_io_out_mem_req_bits_size_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (7U & VL_SET_I_SVLV(value));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_out_mem_req_bits_cmd(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_out_mem_req_bits_cmd\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_mem_req_bits_cmd");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_out_mem_req_bits_cmd_t __Vcb = (VCache__Vcb_get_io_out_mem_req_bits_cmd_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(4, value + 1 * value__Vidx, value__Vcvt);
}

void VCache::set_io_out_mem_req_bits_cmd(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_out_mem_req_bits_cmd\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_mem_req_bits_cmd");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_out_mem_req_bits_cmd_t __Vcb = (VCache__Vcb_set_io_out_mem_req_bits_cmd_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xfU & VL_SET_I_SVLV(value));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_out_mem_req_bits_wmask(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_out_mem_req_bits_wmask\n"); );
    // Init
    CData/*7:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_mem_req_bits_wmask");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_out_mem_req_bits_wmask_t __Vcb = (VCache__Vcb_get_io_out_mem_req_bits_wmask_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(8, value + 1 * value__Vidx, value__Vcvt);
}

void VCache::set_io_out_mem_req_bits_wmask(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_out_mem_req_bits_wmask\n"); );
    // Init
    CData/*7:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_mem_req_bits_wmask");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_out_mem_req_bits_wmask_t __Vcb = (VCache__Vcb_set_io_out_mem_req_bits_wmask_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xffU & VL_SET_I_SVLV(value));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_out_mem_req_bits_wdata(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_out_mem_req_bits_wdata\n"); );
    // Init
    QData/*63:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_mem_req_bits_wdata");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_out_mem_req_bits_wdata_t __Vcb = (VCache__Vcb_get_io_out_mem_req_bits_wdata_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(64, value + 2 * value__Vidx, value__Vcvt);
}

void VCache::set_io_out_mem_req_bits_wdata(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_out_mem_req_bits_wdata\n"); );
    // Init
    QData/*63:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_mem_req_bits_wdata");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_out_mem_req_bits_wdata_t __Vcb = (VCache__Vcb_set_io_out_mem_req_bits_wdata_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = VL_SET_Q_SVLV(value);
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_out_mem_resp_ready(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_out_mem_resp_ready\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_mem_resp_ready");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_out_mem_resp_ready_t __Vcb = (VCache__Vcb_get_io_out_mem_resp_ready_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VCache::set_io_out_mem_resp_ready(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_out_mem_resp_ready\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_mem_resp_ready");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_out_mem_resp_ready_t __Vcb = (VCache__Vcb_set_io_out_mem_resp_ready_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_out_mem_resp_valid(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_out_mem_resp_valid\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_mem_resp_valid");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_out_mem_resp_valid_t __Vcb = (VCache__Vcb_get_io_out_mem_resp_valid_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VCache::set_io_out_mem_resp_valid(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_out_mem_resp_valid\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_mem_resp_valid");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_out_mem_resp_valid_t __Vcb = (VCache__Vcb_set_io_out_mem_resp_valid_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_out_mem_resp_bits_cmd(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_out_mem_resp_bits_cmd\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_mem_resp_bits_cmd");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_out_mem_resp_bits_cmd_t __Vcb = (VCache__Vcb_get_io_out_mem_resp_bits_cmd_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(4, value + 1 * value__Vidx, value__Vcvt);
}

void VCache::set_io_out_mem_resp_bits_cmd(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_out_mem_resp_bits_cmd\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_mem_resp_bits_cmd");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_out_mem_resp_bits_cmd_t __Vcb = (VCache__Vcb_set_io_out_mem_resp_bits_cmd_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xfU & VL_SET_I_SVLV(value));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_out_mem_resp_bits_rdata(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_out_mem_resp_bits_rdata\n"); );
    // Init
    QData/*63:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_mem_resp_bits_rdata");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_out_mem_resp_bits_rdata_t __Vcb = (VCache__Vcb_get_io_out_mem_resp_bits_rdata_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(64, value + 2 * value__Vidx, value__Vcvt);
}

void VCache::set_io_out_mem_resp_bits_rdata(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_out_mem_resp_bits_rdata\n"); );
    // Init
    QData/*63:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_mem_resp_bits_rdata");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_out_mem_resp_bits_rdata_t __Vcb = (VCache__Vcb_set_io_out_mem_resp_bits_rdata_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = VL_SET_Q_SVLV(value);
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_out_coh_req_ready(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_out_coh_req_ready\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_coh_req_ready");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_out_coh_req_ready_t __Vcb = (VCache__Vcb_get_io_out_coh_req_ready_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VCache::set_io_out_coh_req_ready(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_out_coh_req_ready\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_coh_req_ready");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_out_coh_req_ready_t __Vcb = (VCache__Vcb_set_io_out_coh_req_ready_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_out_coh_req_valid(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_out_coh_req_valid\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_coh_req_valid");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_out_coh_req_valid_t __Vcb = (VCache__Vcb_get_io_out_coh_req_valid_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VCache::set_io_out_coh_req_valid(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_out_coh_req_valid\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_coh_req_valid");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_out_coh_req_valid_t __Vcb = (VCache__Vcb_set_io_out_coh_req_valid_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_out_coh_req_bits_addr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_out_coh_req_bits_addr\n"); );
    // Init
    IData/*31:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_coh_req_bits_addr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_out_coh_req_bits_addr_t __Vcb = (VCache__Vcb_get_io_out_coh_req_bits_addr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(32, value + 1 * value__Vidx, value__Vcvt);
}

void VCache::set_io_out_coh_req_bits_addr(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_out_coh_req_bits_addr\n"); );
    // Init
    IData/*31:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_coh_req_bits_addr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_out_coh_req_bits_addr_t __Vcb = (VCache__Vcb_set_io_out_coh_req_bits_addr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = VL_SET_I_SVLV(value);
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_out_coh_req_bits_size(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_out_coh_req_bits_size\n"); );
    // Init
    CData/*2:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_coh_req_bits_size");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_out_coh_req_bits_size_t __Vcb = (VCache__Vcb_get_io_out_coh_req_bits_size_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(3, value + 1 * value__Vidx, value__Vcvt);
}

void VCache::set_io_out_coh_req_bits_size(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_out_coh_req_bits_size\n"); );
    // Init
    CData/*2:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_coh_req_bits_size");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_out_coh_req_bits_size_t __Vcb = (VCache__Vcb_set_io_out_coh_req_bits_size_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (7U & VL_SET_I_SVLV(value));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_out_coh_req_bits_cmd(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_out_coh_req_bits_cmd\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_coh_req_bits_cmd");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_out_coh_req_bits_cmd_t __Vcb = (VCache__Vcb_get_io_out_coh_req_bits_cmd_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(4, value + 1 * value__Vidx, value__Vcvt);
}

void VCache::set_io_out_coh_req_bits_cmd(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_out_coh_req_bits_cmd\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_coh_req_bits_cmd");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_out_coh_req_bits_cmd_t __Vcb = (VCache__Vcb_set_io_out_coh_req_bits_cmd_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xfU & VL_SET_I_SVLV(value));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_out_coh_req_bits_wmask(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_out_coh_req_bits_wmask\n"); );
    // Init
    CData/*7:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_coh_req_bits_wmask");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_out_coh_req_bits_wmask_t __Vcb = (VCache__Vcb_get_io_out_coh_req_bits_wmask_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(8, value + 1 * value__Vidx, value__Vcvt);
}

void VCache::set_io_out_coh_req_bits_wmask(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_out_coh_req_bits_wmask\n"); );
    // Init
    CData/*7:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_coh_req_bits_wmask");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_out_coh_req_bits_wmask_t __Vcb = (VCache__Vcb_set_io_out_coh_req_bits_wmask_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xffU & VL_SET_I_SVLV(value));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_out_coh_req_bits_wdata(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_out_coh_req_bits_wdata\n"); );
    // Init
    QData/*63:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_coh_req_bits_wdata");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_out_coh_req_bits_wdata_t __Vcb = (VCache__Vcb_get_io_out_coh_req_bits_wdata_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(64, value + 2 * value__Vidx, value__Vcvt);
}

void VCache::set_io_out_coh_req_bits_wdata(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_out_coh_req_bits_wdata\n"); );
    // Init
    QData/*63:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_coh_req_bits_wdata");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_out_coh_req_bits_wdata_t __Vcb = (VCache__Vcb_set_io_out_coh_req_bits_wdata_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = VL_SET_Q_SVLV(value);
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_out_coh_resp_ready(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_out_coh_resp_ready\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_coh_resp_ready");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_out_coh_resp_ready_t __Vcb = (VCache__Vcb_get_io_out_coh_resp_ready_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VCache::set_io_out_coh_resp_ready(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_out_coh_resp_ready\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_coh_resp_ready");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_out_coh_resp_ready_t __Vcb = (VCache__Vcb_set_io_out_coh_resp_ready_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_out_coh_resp_valid(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_out_coh_resp_valid\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_coh_resp_valid");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_out_coh_resp_valid_t __Vcb = (VCache__Vcb_get_io_out_coh_resp_valid_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VCache::set_io_out_coh_resp_valid(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_out_coh_resp_valid\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_coh_resp_valid");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_out_coh_resp_valid_t __Vcb = (VCache__Vcb_set_io_out_coh_resp_valid_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_out_coh_resp_bits_cmd(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_out_coh_resp_bits_cmd\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_coh_resp_bits_cmd");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_out_coh_resp_bits_cmd_t __Vcb = (VCache__Vcb_get_io_out_coh_resp_bits_cmd_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(4, value + 1 * value__Vidx, value__Vcvt);
}

void VCache::set_io_out_coh_resp_bits_cmd(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_out_coh_resp_bits_cmd\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_coh_resp_bits_cmd");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_out_coh_resp_bits_cmd_t __Vcb = (VCache__Vcb_set_io_out_coh_resp_bits_cmd_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xfU & VL_SET_I_SVLV(value));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_out_coh_resp_bits_rdata(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_out_coh_resp_bits_rdata\n"); );
    // Init
    QData/*63:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_out_coh_resp_bits_rdata");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_out_coh_resp_bits_rdata_t __Vcb = (VCache__Vcb_get_io_out_coh_resp_bits_rdata_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(64, value + 2 * value__Vidx, value__Vcvt);
}

void VCache::set_io_out_coh_resp_bits_rdata(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_out_coh_resp_bits_rdata\n"); );
    // Init
    QData/*63:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_out_coh_resp_bits_rdata");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_out_coh_resp_bits_rdata_t __Vcb = (VCache__Vcb_set_io_out_coh_resp_bits_rdata_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = VL_SET_Q_SVLV(value);
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_mmio_req_ready(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_mmio_req_ready\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_mmio_req_ready");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_mmio_req_ready_t __Vcb = (VCache__Vcb_get_io_mmio_req_ready_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VCache::set_io_mmio_req_ready(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_mmio_req_ready\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_mmio_req_ready");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_mmio_req_ready_t __Vcb = (VCache__Vcb_set_io_mmio_req_ready_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_mmio_req_valid(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_mmio_req_valid\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_mmio_req_valid");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_mmio_req_valid_t __Vcb = (VCache__Vcb_get_io_mmio_req_valid_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VCache::set_io_mmio_req_valid(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_mmio_req_valid\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_mmio_req_valid");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_mmio_req_valid_t __Vcb = (VCache__Vcb_set_io_mmio_req_valid_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_mmio_req_bits_addr(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_mmio_req_bits_addr\n"); );
    // Init
    IData/*31:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_mmio_req_bits_addr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_mmio_req_bits_addr_t __Vcb = (VCache__Vcb_get_io_mmio_req_bits_addr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(32, value + 1 * value__Vidx, value__Vcvt);
}

void VCache::set_io_mmio_req_bits_addr(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_mmio_req_bits_addr\n"); );
    // Init
    IData/*31:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_mmio_req_bits_addr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_mmio_req_bits_addr_t __Vcb = (VCache__Vcb_set_io_mmio_req_bits_addr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = VL_SET_I_SVLV(value);
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_mmio_req_bits_size(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_mmio_req_bits_size\n"); );
    // Init
    CData/*2:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_mmio_req_bits_size");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_mmio_req_bits_size_t __Vcb = (VCache__Vcb_get_io_mmio_req_bits_size_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(3, value + 1 * value__Vidx, value__Vcvt);
}

void VCache::set_io_mmio_req_bits_size(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_mmio_req_bits_size\n"); );
    // Init
    CData/*2:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_mmio_req_bits_size");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_mmio_req_bits_size_t __Vcb = (VCache__Vcb_set_io_mmio_req_bits_size_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (7U & VL_SET_I_SVLV(value));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_mmio_req_bits_cmd(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_mmio_req_bits_cmd\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_mmio_req_bits_cmd");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_mmio_req_bits_cmd_t __Vcb = (VCache__Vcb_get_io_mmio_req_bits_cmd_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(4, value + 1 * value__Vidx, value__Vcvt);
}

void VCache::set_io_mmio_req_bits_cmd(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_mmio_req_bits_cmd\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_mmio_req_bits_cmd");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_mmio_req_bits_cmd_t __Vcb = (VCache__Vcb_set_io_mmio_req_bits_cmd_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xfU & VL_SET_I_SVLV(value));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_mmio_req_bits_wmask(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_mmio_req_bits_wmask\n"); );
    // Init
    CData/*7:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_mmio_req_bits_wmask");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_mmio_req_bits_wmask_t __Vcb = (VCache__Vcb_get_io_mmio_req_bits_wmask_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(8, value + 1 * value__Vidx, value__Vcvt);
}

void VCache::set_io_mmio_req_bits_wmask(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_mmio_req_bits_wmask\n"); );
    // Init
    CData/*7:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_mmio_req_bits_wmask");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_mmio_req_bits_wmask_t __Vcb = (VCache__Vcb_set_io_mmio_req_bits_wmask_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xffU & VL_SET_I_SVLV(value));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_mmio_req_bits_wdata(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_mmio_req_bits_wdata\n"); );
    // Init
    QData/*63:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_mmio_req_bits_wdata");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_mmio_req_bits_wdata_t __Vcb = (VCache__Vcb_get_io_mmio_req_bits_wdata_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(64, value + 2 * value__Vidx, value__Vcvt);
}

void VCache::set_io_mmio_req_bits_wdata(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_mmio_req_bits_wdata\n"); );
    // Init
    QData/*63:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_mmio_req_bits_wdata");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_mmio_req_bits_wdata_t __Vcb = (VCache__Vcb_set_io_mmio_req_bits_wdata_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = VL_SET_Q_SVLV(value);
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_mmio_resp_ready(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_mmio_resp_ready\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_mmio_resp_ready");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_mmio_resp_ready_t __Vcb = (VCache__Vcb_get_io_mmio_resp_ready_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VCache::set_io_mmio_resp_ready(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_mmio_resp_ready\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_mmio_resp_ready");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_mmio_resp_ready_t __Vcb = (VCache__Vcb_set_io_mmio_resp_ready_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_mmio_resp_valid(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_mmio_resp_valid\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_mmio_resp_valid");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_mmio_resp_valid_t __Vcb = (VCache__Vcb_get_io_mmio_resp_valid_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VCache::set_io_mmio_resp_valid(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_mmio_resp_valid\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_mmio_resp_valid");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_mmio_resp_valid_t __Vcb = (VCache__Vcb_set_io_mmio_resp_valid_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_mmio_resp_bits_cmd(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_mmio_resp_bits_cmd\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_mmio_resp_bits_cmd");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_mmio_resp_bits_cmd_t __Vcb = (VCache__Vcb_get_io_mmio_resp_bits_cmd_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(4, value + 1 * value__Vidx, value__Vcvt);
}

void VCache::set_io_mmio_resp_bits_cmd(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_mmio_resp_bits_cmd\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_mmio_resp_bits_cmd");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_mmio_resp_bits_cmd_t __Vcb = (VCache__Vcb_set_io_mmio_resp_bits_cmd_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xfU & VL_SET_I_SVLV(value));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_mmio_resp_bits_rdata(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_mmio_resp_bits_rdata\n"); );
    // Init
    QData/*63:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_mmio_resp_bits_rdata");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_mmio_resp_bits_rdata_t __Vcb = (VCache__Vcb_get_io_mmio_resp_bits_rdata_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_Q(64, value + 2 * value__Vidx, value__Vcvt);
}

void VCache::set_io_mmio_resp_bits_rdata(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_mmio_resp_bits_rdata\n"); );
    // Init
    QData/*63:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_mmio_resp_bits_rdata");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_mmio_resp_bits_rdata_t __Vcb = (VCache__Vcb_set_io_mmio_resp_bits_rdata_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = VL_SET_Q_SVLV(value);
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_io_empty(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_io_empty\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_io_empty");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_io_empty_t __Vcb = (VCache__Vcb_get_io_empty_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VCache::set_io_empty(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_io_empty\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_io_empty");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_io_empty_t __Vcb = (VCache__Vcb_set_io_empty_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_victim_way_mask_valid(svLogic* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_victim_way_mask_valid\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_victim_way_mask_valid");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_victim_way_mask_valid_t __Vcb = (VCache__Vcb_get_victim_way_mask_valid_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VCache::set_victim_way_mask_valid(svLogic value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_victim_way_mask_valid\n"); );
    // Init
    CData/*0:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_victim_way_mask_valid");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_victim_way_mask_valid_t __Vcb = (VCache__Vcb_set_victim_way_mask_valid_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (1U & value);
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}

void VCache::get_victim_way_mask(svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::get_victim_way_mask\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_victim_way_mask");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_get_victim_way_mask_t __Vcb = (VCache__Vcb_get_victim_way_mask_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) VL_SET_SVLV_I(4, value + 1 * value__Vidx, value__Vcvt);
}

void VCache::set_victim_way_mask(const svLogicVecVal* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root::set_victim_way_mask\n"); );
    // Init
    CData/*3:0*/ value__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("set_victim_way_mask");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VCache__Vcb_set_victim_way_mask_t __Vcb = (VCache__Vcb_set_victim_way_mask_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value__Vcvt = (0xfU & VL_SET_I_SVLV(value));
    (*__Vcb)((VCache__Syms*)(__Vscopep->symsp()), value__Vcvt);
}
