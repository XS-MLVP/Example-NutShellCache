// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCache.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VCache__Syms.h"
#include "VCache___024root.h"

VL_INLINE_OPT void VCache___024root___sequent__TOP__10(VCache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root___sequent__TOP__10\n"); );
    // Body
    if (vlSelf->Cache_top__DOT__io_out_coh_req_valid) {
        vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_size 
            = vlSelf->Cache_top__DOT__io_out_coh_req_bits_size;
        vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_user = 0U;
        vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
            = vlSelf->Cache_top__DOT__io_out_coh_req_bits_wdata;
        vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wmask 
            = vlSelf->Cache_top__DOT__io_out_coh_req_bits_wmask;
        vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_cmd 
            = vlSelf->Cache_top__DOT__io_out_coh_req_bits_cmd;
        vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr 
            = vlSelf->Cache_top__DOT__io_out_coh_req_bits_addr;
    } else {
        vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_size 
            = vlSelf->Cache_top__DOT__io_in_req_bits_size;
        vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_user 
            = vlSelf->Cache_top__DOT__io_in_req_bits_user;
        vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
            = vlSelf->Cache_top__DOT__io_in_req_bits_wdata;
        vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wmask 
            = vlSelf->Cache_top__DOT__io_in_req_bits_wmask;
        vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_cmd 
            = vlSelf->Cache_top__DOT__io_in_req_bits_cmd;
        vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr 
            = vlSelf->Cache_top__DOT__io_in_req_bits_addr;
    }
    if ((1U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_size) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_size)))) {
        ++(vlSymsp->__Vcoverage[915]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_size 
            = ((6U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_size)) 
               | (1U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_size)));
    }
    if ((2U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_size) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_size)))) {
        ++(vlSymsp->__Vcoverage[916]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_size 
            = ((5U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_size)) 
               | (2U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_size)));
    }
    if ((4U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_size) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_size)))) {
        ++(vlSymsp->__Vcoverage[917]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_size 
            = ((3U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_size)) 
               | (4U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_size)));
    }
    if ((1U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_user) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user)))) {
        ++(vlSymsp->__Vcoverage[994]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user 
            = ((0xfffeU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user)) 
               | (1U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_user)));
    }
    if ((2U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_user) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user)))) {
        ++(vlSymsp->__Vcoverage[995]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user 
            = ((0xfffdU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user)) 
               | (2U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_user)));
    }
    if ((4U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_user) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user)))) {
        ++(vlSymsp->__Vcoverage[996]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user 
            = ((0xfffbU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user)) 
               | (4U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_user)));
    }
    if ((8U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_user) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user)))) {
        ++(vlSymsp->__Vcoverage[997]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user 
            = ((0xfff7U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user)) 
               | (8U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_user)));
    }
    if ((0x10U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_user) 
                  ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user)))) {
        ++(vlSymsp->__Vcoverage[998]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user 
            = ((0xffefU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user)) 
               | (0x10U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_user)));
    }
    if ((0x20U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_user) 
                  ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user)))) {
        ++(vlSymsp->__Vcoverage[999]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user 
            = ((0xffdfU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user)) 
               | (0x20U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_user)));
    }
    if ((0x40U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_user) 
                  ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user)))) {
        ++(vlSymsp->__Vcoverage[1000]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user 
            = ((0xffbfU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user)) 
               | (0x40U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_user)));
    }
    if ((0x80U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_user) 
                  ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user)))) {
        ++(vlSymsp->__Vcoverage[1001]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user 
            = ((0xff7fU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user)) 
               | (0x80U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_user)));
    }
    if ((0x100U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_user) 
                   ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user)))) {
        ++(vlSymsp->__Vcoverage[1002]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user 
            = ((0xfeffU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user)) 
               | (0x100U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_user)));
    }
    if ((0x200U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_user) 
                   ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user)))) {
        ++(vlSymsp->__Vcoverage[1003]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user 
            = ((0xfdffU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user)) 
               | (0x200U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_user)));
    }
    if ((0x400U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_user) 
                   ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user)))) {
        ++(vlSymsp->__Vcoverage[1004]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user 
            = ((0xfbffU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user)) 
               | (0x400U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_user)));
    }
    if ((0x800U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_user) 
                   ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user)))) {
        ++(vlSymsp->__Vcoverage[1005]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user 
            = ((0xf7ffU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user)) 
               | (0x800U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_user)));
    }
    if ((0x1000U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_user) 
                    ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user)))) {
        ++(vlSymsp->__Vcoverage[1006]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user 
            = ((0xefffU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user)) 
               | (0x1000U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_user)));
    }
    if ((0x2000U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_user) 
                    ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user)))) {
        ++(vlSymsp->__Vcoverage[1007]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user 
            = ((0xdfffU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user)) 
               | (0x2000U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_user)));
    }
    if ((0x4000U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_user) 
                    ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user)))) {
        ++(vlSymsp->__Vcoverage[1008]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user 
            = ((0xbfffU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user)) 
               | (0x4000U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_user)));
    }
    if ((0x8000U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_user) 
                    ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user)))) {
        ++(vlSymsp->__Vcoverage[1009]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user 
            = ((0x7fffU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_user)) 
               | (0x8000U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_user)));
    }
    if ((1U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata)))) {
        ++(vlSymsp->__Vcoverage[930]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xfffffffffffffffeULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | (IData)((IData)((1U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata)))));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 1U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[931]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xfffffffffffffffdULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 2U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[932]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xfffffffffffffffbULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 3U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[933]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xfffffffffffffff7ULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 4U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[934]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xffffffffffffffefULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 5U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[935]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xffffffffffffffdfULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 6U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[936]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xffffffffffffffbfULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 7U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[937]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xffffffffffffff7fULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 8U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[938]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xfffffffffffffeffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 9U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[939]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xfffffffffffffdffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0xaU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[940]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xfffffffffffffbffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0xbU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[941]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xfffffffffffff7ffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0xcU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[942]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xffffffffffffefffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0xdU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[943]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xffffffffffffdfffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0xeU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[944]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xffffffffffffbfffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0xfU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[945]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xffffffffffff7fffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0x10U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[946]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xfffffffffffeffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0x11U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[947]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xfffffffffffdffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0x12U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[948]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xfffffffffffbffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0x13U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[949]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xfffffffffff7ffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0x14U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[950]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xffffffffffefffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0x15U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[951]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xffffffffffdfffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0x16U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[952]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xffffffffffbfffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0x17U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[953]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xffffffffff7fffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0x18U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[954]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xfffffffffeffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0x19U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[955]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xfffffffffdffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0x1aU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[956]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xfffffffffbffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0x1bU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[957]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xfffffffff7ffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0x1cU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[958]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xffffffffefffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0x1dU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[959]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xffffffffdfffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0x1eU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[960]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xffffffffbfffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0x1fU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[961]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xffffffff7fffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0x20U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[962]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xfffffffeffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0x21U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[963]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xfffffffdffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0x22U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[964]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xfffffffbffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0x23U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[965]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xfffffff7ffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0x24U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[966]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xffffffefffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0x25U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[967]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xffffffdfffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0x26U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[968]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xffffffbfffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0x27U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[969]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xffffff7fffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0x28U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[970]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xfffffeffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0x29U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[971]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xfffffdffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0x2aU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[972]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xfffffbffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0x2bU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[973]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xfffff7ffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0x2cU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[974]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xffffefffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0x2dU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[975]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xffffdfffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0x2eU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[976]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xffffbfffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0x2fU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[977]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xffff7fffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0x30U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[978]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xfffeffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0x31U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[979]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xfffdffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0x32U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[980]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xfffbffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0x33U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[981]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xfff7ffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0x34U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[982]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xffefffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0x35U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[983]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xffdfffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0x36U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[984]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xffbfffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0x37U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[985]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xff7fffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0x38U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[986]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xfeffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0x39U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[987]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xfdffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0x3aU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[988]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xfbffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0x3bU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[989]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xf7ffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0x3cU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[990]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xefffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0x3dU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[991]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xdfffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                        >> 0x3eU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[992]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0xbfffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[993]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata 
            = ((0x7fffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wmask) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wmask)))) {
        ++(vlSymsp->__Vcoverage[922]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wmask 
            = ((0xfeU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wmask)) 
               | (1U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wmask)));
    }
    if ((2U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wmask) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wmask)))) {
        ++(vlSymsp->__Vcoverage[923]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wmask 
            = ((0xfdU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wmask)) 
               | (2U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wmask)));
    }
    if ((4U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wmask) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wmask)))) {
        ++(vlSymsp->__Vcoverage[924]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wmask 
            = ((0xfbU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wmask)) 
               | (4U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wmask)));
    }
    if ((8U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wmask) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wmask)))) {
        ++(vlSymsp->__Vcoverage[925]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wmask 
            = ((0xf7U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wmask)) 
               | (8U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wmask)));
    }
    if ((0x10U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wmask) 
                  ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wmask)))) {
        ++(vlSymsp->__Vcoverage[926]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wmask 
            = ((0xefU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wmask)) 
               | (0x10U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wmask)));
    }
    if ((0x20U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wmask) 
                  ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wmask)))) {
        ++(vlSymsp->__Vcoverage[927]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wmask 
            = ((0xdfU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wmask)) 
               | (0x20U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wmask)));
    }
    if ((0x40U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wmask) 
                  ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wmask)))) {
        ++(vlSymsp->__Vcoverage[928]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wmask 
            = ((0xbfU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wmask)) 
               | (0x40U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wmask)));
    }
    if ((0x80U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wmask) 
                  ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wmask)))) {
        ++(vlSymsp->__Vcoverage[929]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wmask 
            = ((0x7fU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_wmask)) 
               | (0x80U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wmask)));
    }
    if ((1U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_cmd) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_cmd)))) {
        ++(vlSymsp->__Vcoverage[918]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_cmd 
            = ((0xeU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_cmd)) 
               | (1U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_cmd)));
    }
    if ((2U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_cmd) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_cmd)))) {
        ++(vlSymsp->__Vcoverage[919]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_cmd 
            = ((0xdU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_cmd)) 
               | (2U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_cmd)));
    }
    if ((4U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_cmd) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_cmd)))) {
        ++(vlSymsp->__Vcoverage[920]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_cmd 
            = ((0xbU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_cmd)) 
               | (4U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_cmd)));
    }
    if ((8U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_cmd) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_cmd)))) {
        ++(vlSymsp->__Vcoverage[921]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_cmd 
            = ((7U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_cmd)) 
               | (8U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_cmd)));
    }
    if ((1U & (vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr 
               ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr))) {
        ++(vlSymsp->__Vcoverage[883]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr 
            = ((0xfffffffeU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr) 
               | (1U & vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr));
    }
    if ((2U & (vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr 
               ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr))) {
        ++(vlSymsp->__Vcoverage[884]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr 
            = ((0xfffffffdU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr) 
               | (2U & vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr));
    }
    if ((4U & (vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr 
               ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr))) {
        ++(vlSymsp->__Vcoverage[885]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr 
            = ((0xfffffffbU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr) 
               | (4U & vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr));
    }
    if ((8U & (vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr 
               ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr))) {
        ++(vlSymsp->__Vcoverage[886]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr 
            = ((0xfffffff7U & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr) 
               | (8U & vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr));
    }
    if ((0x10U & (vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr))) {
        ++(vlSymsp->__Vcoverage[887]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr 
            = ((0xffffffefU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr) 
               | (0x10U & vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr));
    }
    if ((0x20U & (vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr))) {
        ++(vlSymsp->__Vcoverage[888]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr 
            = ((0xffffffdfU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr) 
               | (0x20U & vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr));
    }
    if ((0x40U & (vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr))) {
        ++(vlSymsp->__Vcoverage[889]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr 
            = ((0xffffffbfU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr) 
               | (0x40U & vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr));
    }
    if ((0x80U & (vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr))) {
        ++(vlSymsp->__Vcoverage[890]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr 
            = ((0xffffff7fU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr) 
               | (0x80U & vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr));
    }
    if ((0x100U & (vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr))) {
        ++(vlSymsp->__Vcoverage[891]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr 
            = ((0xfffffeffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr) 
               | (0x100U & vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr));
    }
    if ((0x200U & (vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr))) {
        ++(vlSymsp->__Vcoverage[892]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr 
            = ((0xfffffdffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr) 
               | (0x200U & vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr));
    }
    if ((0x400U & (vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr))) {
        ++(vlSymsp->__Vcoverage[893]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr 
            = ((0xfffffbffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr) 
               | (0x400U & vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr));
    }
    if ((0x800U & (vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr))) {
        ++(vlSymsp->__Vcoverage[894]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr 
            = ((0xfffff7ffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr) 
               | (0x800U & vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr));
    }
    if ((0x1000U & (vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr))) {
        ++(vlSymsp->__Vcoverage[895]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr 
            = ((0xffffefffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr) 
               | (0x1000U & vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr));
    }
    if ((0x2000U & (vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr))) {
        ++(vlSymsp->__Vcoverage[896]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr 
            = ((0xffffdfffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr) 
               | (0x2000U & vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr));
    }
    if ((0x4000U & (vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr))) {
        ++(vlSymsp->__Vcoverage[897]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr 
            = ((0xffffbfffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr) 
               | (0x4000U & vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr));
    }
    if ((0x8000U & (vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr))) {
        ++(vlSymsp->__Vcoverage[898]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr 
            = ((0xffff7fffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr) 
               | (0x8000U & vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr));
    }
    if ((0x10000U & (vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr))) {
        ++(vlSymsp->__Vcoverage[899]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr 
            = ((0xfffeffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr) 
               | (0x10000U & vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr));
    }
    if ((0x20000U & (vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr))) {
        ++(vlSymsp->__Vcoverage[900]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr 
            = ((0xfffdffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr) 
               | (0x20000U & vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr));
    }
    if ((0x40000U & (vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr))) {
        ++(vlSymsp->__Vcoverage[901]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr 
            = ((0xfffbffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr) 
               | (0x40000U & vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr));
    }
    if ((0x80000U & (vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr))) {
        ++(vlSymsp->__Vcoverage[902]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr 
            = ((0xfff7ffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr) 
               | (0x80000U & vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr));
    }
    if ((0x100000U & (vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr 
                      ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr))) {
        ++(vlSymsp->__Vcoverage[903]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr 
            = ((0xffefffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr) 
               | (0x100000U & vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr));
    }
    if ((0x200000U & (vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr 
                      ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr))) {
        ++(vlSymsp->__Vcoverage[904]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr 
            = ((0xffdfffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr) 
               | (0x200000U & vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr));
    }
    if ((0x400000U & (vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr 
                      ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr))) {
        ++(vlSymsp->__Vcoverage[905]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr 
            = ((0xffbfffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr) 
               | (0x400000U & vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr));
    }
    if ((0x800000U & (vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr 
                      ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr))) {
        ++(vlSymsp->__Vcoverage[906]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr 
            = ((0xff7fffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr) 
               | (0x800000U & vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr));
    }
    if ((0x1000000U & (vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr 
                       ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr))) {
        ++(vlSymsp->__Vcoverage[907]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr 
            = ((0xfeffffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr) 
               | (0x1000000U & vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr));
    }
    if ((0x2000000U & (vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr 
                       ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr))) {
        ++(vlSymsp->__Vcoverage[908]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr 
            = ((0xfdffffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr) 
               | (0x2000000U & vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr));
    }
    if ((0x4000000U & (vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr 
                       ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr))) {
        ++(vlSymsp->__Vcoverage[909]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr 
            = ((0xfbffffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr) 
               | (0x4000000U & vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr));
    }
    if ((0x8000000U & (vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr 
                       ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr))) {
        ++(vlSymsp->__Vcoverage[910]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr 
            = ((0xf7ffffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr) 
               | (0x8000000U & vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr));
    }
    if ((0x10000000U & (vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr 
                        ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr))) {
        ++(vlSymsp->__Vcoverage[911]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr 
            = ((0xefffffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr) 
               | (0x10000000U & vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr));
    }
    if ((0x20000000U & (vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr 
                        ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr))) {
        ++(vlSymsp->__Vcoverage[912]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr 
            = ((0xdfffffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr) 
               | (0x20000000U & vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr));
    }
    if ((0x40000000U & (vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr 
                        ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr))) {
        ++(vlSymsp->__Vcoverage[913]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr 
            = ((0xbfffffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr) 
               | (0x40000000U & vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr));
    }
    if (((vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr 
          ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[914]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr 
            = ((0x7fffffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_bits_addr) 
               | (0x80000000U & vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr));
    }
}

VL_INLINE_OPT void VCache___024root___multiclk__TOP__11(VCache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root___multiclk__TOP__11\n"); );
    // Body
    vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__readArb_io_out_bits_setIdx 
        = (0x3ffU & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s1_io_dataReadBus_req_valid)
                      ? (vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr 
                         >> 3U) : (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_dataReadBus_req_bits_setIdx)));
    if ((1U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__readArb_io_out_bits_setIdx) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT____Vtogcov__ram_io_r_req_bits_setIdx)))) {
        ++(vlSymsp->__Vcoverage[4360]);
        vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT____Vtogcov__ram_io_r_req_bits_setIdx 
            = ((0x3feU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT____Vtogcov__ram_io_r_req_bits_setIdx)) 
               | (1U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__readArb_io_out_bits_setIdx)));
    }
    if ((2U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__readArb_io_out_bits_setIdx) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT____Vtogcov__ram_io_r_req_bits_setIdx)))) {
        ++(vlSymsp->__Vcoverage[4361]);
        vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT____Vtogcov__ram_io_r_req_bits_setIdx 
            = ((0x3fdU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT____Vtogcov__ram_io_r_req_bits_setIdx)) 
               | (2U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__readArb_io_out_bits_setIdx)));
    }
    if ((4U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__readArb_io_out_bits_setIdx) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT____Vtogcov__ram_io_r_req_bits_setIdx)))) {
        ++(vlSymsp->__Vcoverage[4362]);
        vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT____Vtogcov__ram_io_r_req_bits_setIdx 
            = ((0x3fbU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT____Vtogcov__ram_io_r_req_bits_setIdx)) 
               | (4U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__readArb_io_out_bits_setIdx)));
    }
    if ((8U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__readArb_io_out_bits_setIdx) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT____Vtogcov__ram_io_r_req_bits_setIdx)))) {
        ++(vlSymsp->__Vcoverage[4363]);
        vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT____Vtogcov__ram_io_r_req_bits_setIdx 
            = ((0x3f7U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT____Vtogcov__ram_io_r_req_bits_setIdx)) 
               | (8U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__readArb_io_out_bits_setIdx)));
    }
    if ((0x10U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__readArb_io_out_bits_setIdx) 
                  ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT____Vtogcov__ram_io_r_req_bits_setIdx)))) {
        ++(vlSymsp->__Vcoverage[4364]);
        vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT____Vtogcov__ram_io_r_req_bits_setIdx 
            = ((0x3efU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT____Vtogcov__ram_io_r_req_bits_setIdx)) 
               | (0x10U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__readArb_io_out_bits_setIdx)));
    }
    if ((0x20U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__readArb_io_out_bits_setIdx) 
                  ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT____Vtogcov__ram_io_r_req_bits_setIdx)))) {
        ++(vlSymsp->__Vcoverage[4365]);
        vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT____Vtogcov__ram_io_r_req_bits_setIdx 
            = ((0x3dfU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT____Vtogcov__ram_io_r_req_bits_setIdx)) 
               | (0x20U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__readArb_io_out_bits_setIdx)));
    }
    if ((0x40U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__readArb_io_out_bits_setIdx) 
                  ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT____Vtogcov__ram_io_r_req_bits_setIdx)))) {
        ++(vlSymsp->__Vcoverage[4366]);
        vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT____Vtogcov__ram_io_r_req_bits_setIdx 
            = ((0x3bfU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT____Vtogcov__ram_io_r_req_bits_setIdx)) 
               | (0x40U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__readArb_io_out_bits_setIdx)));
    }
    if ((0x80U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__readArb_io_out_bits_setIdx) 
                  ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT____Vtogcov__ram_io_r_req_bits_setIdx)))) {
        ++(vlSymsp->__Vcoverage[4367]);
        vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT____Vtogcov__ram_io_r_req_bits_setIdx 
            = ((0x37fU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT____Vtogcov__ram_io_r_req_bits_setIdx)) 
               | (0x80U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__readArb_io_out_bits_setIdx)));
    }
    if ((0x100U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__readArb_io_out_bits_setIdx) 
                   ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT____Vtogcov__ram_io_r_req_bits_setIdx)))) {
        ++(vlSymsp->__Vcoverage[4368]);
        vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT____Vtogcov__ram_io_r_req_bits_setIdx 
            = ((0x2ffU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT____Vtogcov__ram_io_r_req_bits_setIdx)) 
               | (0x100U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__readArb_io_out_bits_setIdx)));
    }
    if ((0x200U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__readArb_io_out_bits_setIdx) 
                   ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT____Vtogcov__ram_io_r_req_bits_setIdx)))) {
        ++(vlSymsp->__Vcoverage[4369]);
        vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT____Vtogcov__ram_io_r_req_bits_setIdx 
            = ((0x1ffU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT____Vtogcov__ram_io_r_req_bits_setIdx)) 
               | (0x200U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__readArb_io_out_bits_setIdx)));
    }
}
