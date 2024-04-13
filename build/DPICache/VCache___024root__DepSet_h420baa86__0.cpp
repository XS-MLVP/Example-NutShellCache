// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCache.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VCache___024root.h"

void VCache___024root___sequent__TOP__5(VCache___024root* vlSelf);
void VCache___024root___sequent__TOP__6(VCache___024root* vlSelf);
void VCache___024root___sequent__TOP__7(VCache___024root* vlSelf);
void VCache___024root___sequent__TOP__8(VCache___024root* vlSelf);
void VCache___024root___multiclk__TOP__9(VCache___024root* vlSelf);
void VCache___024root___sequent__TOP__10(VCache___024root* vlSelf);
void VCache___024root___multiclk__TOP__11(VCache___024root* vlSelf);

void VCache___024root___eval(VCache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root___eval\n"); );
    // Body
    if (vlSelf->__Vdpi_export_trigger) {
        VCache___024root___sequent__TOP__5(vlSelf);
    }
    if (((IData)(vlSelf->Cache_top__DOT__clock) & (~ (IData)(vlSelf->__Vclklast__TOP__Cache_top__DOT__clock)))) {
        VCache___024root___sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        VCache___024root___sequent__TOP__7(vlSelf);
        VCache___024root___sequent__TOP__8(vlSelf);
    }
    if ((((IData)(vlSelf->Cache_top__DOT__clock) & 
          (~ (IData)(vlSelf->__Vclklast__TOP__Cache_top__DOT__clock))) 
         | (IData)(vlSelf->__Vdpi_export_trigger))) {
        VCache___024root___multiclk__TOP__9(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__Vdpi_export_trigger) {
        VCache___024root___sequent__TOP__10(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((((IData)(vlSelf->Cache_top__DOT__clock) & 
          (~ (IData)(vlSelf->__Vclklast__TOP__Cache_top__DOT__clock))) 
         | (IData)(vlSelf->__Vdpi_export_trigger))) {
        VCache___024root___multiclk__TOP__11(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__Cache_top__DOT__clock 
        = vlSelf->Cache_top__DOT__clock;
    vlSelf->__Vdpi_export_trigger = 0U;
}

#ifdef VL_DEBUG
void VCache___024root___eval_debug_assertions(VCache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
