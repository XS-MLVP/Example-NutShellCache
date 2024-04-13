// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCache.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VCache__Syms.h"
#include "VCache___024root.h"

VL_INLINE_OPT void VCache___024root___sequent__TOP__8(VCache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root___sequent__TOP__8\n"); );
    // Init
    IData/*20:0*/ Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT___wdataword_T;
    // Body
    if ((0x40000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_bits_r_req_addr 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_in_bits_req_addr))) {
        ++(vlSymsp->__Vcoverage[1375]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_in_bits_req_addr 
            = ((0xfffbffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_in_bits_req_addr) 
               | (0x40000U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_bits_r_req_addr));
    }
    if ((0x80000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_bits_r_req_addr 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_in_bits_req_addr))) {
        ++(vlSymsp->__Vcoverage[1376]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_in_bits_req_addr 
            = ((0xfff7ffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_in_bits_req_addr) 
               | (0x80000U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_bits_r_req_addr));
    }
    if ((0x100000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_bits_r_req_addr 
                      ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_in_bits_req_addr))) {
        ++(vlSymsp->__Vcoverage[1377]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_in_bits_req_addr 
            = ((0xffefffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_in_bits_req_addr) 
               | (0x100000U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_bits_r_req_addr));
    }
    if ((0x200000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_bits_r_req_addr 
                      ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_in_bits_req_addr))) {
        ++(vlSymsp->__Vcoverage[1378]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_in_bits_req_addr 
            = ((0xffdfffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_in_bits_req_addr) 
               | (0x200000U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_bits_r_req_addr));
    }
    if ((0x400000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_bits_r_req_addr 
                      ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_in_bits_req_addr))) {
        ++(vlSymsp->__Vcoverage[1379]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_in_bits_req_addr 
            = ((0xffbfffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_in_bits_req_addr) 
               | (0x400000U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_bits_r_req_addr));
    }
    if ((0x800000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_bits_r_req_addr 
                      ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_in_bits_req_addr))) {
        ++(vlSymsp->__Vcoverage[1380]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_in_bits_req_addr 
            = ((0xff7fffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_in_bits_req_addr) 
               | (0x800000U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_bits_r_req_addr));
    }
    if ((0x1000000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_bits_r_req_addr 
                       ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_in_bits_req_addr))) {
        ++(vlSymsp->__Vcoverage[1381]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_in_bits_req_addr 
            = ((0xfeffffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_in_bits_req_addr) 
               | (0x1000000U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_bits_r_req_addr));
    }
    if ((0x2000000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_bits_r_req_addr 
                       ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_in_bits_req_addr))) {
        ++(vlSymsp->__Vcoverage[1382]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_in_bits_req_addr 
            = ((0xfdffffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_in_bits_req_addr) 
               | (0x2000000U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_bits_r_req_addr));
    }
    if ((0x4000000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_bits_r_req_addr 
                       ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_in_bits_req_addr))) {
        ++(vlSymsp->__Vcoverage[1383]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_in_bits_req_addr 
            = ((0xfbffffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_in_bits_req_addr) 
               | (0x4000000U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_bits_r_req_addr));
    }
    if ((0x8000000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_bits_r_req_addr 
                       ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_in_bits_req_addr))) {
        ++(vlSymsp->__Vcoverage[1384]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_in_bits_req_addr 
            = ((0xf7ffffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_in_bits_req_addr) 
               | (0x8000000U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_bits_r_req_addr));
    }
    if ((0x10000000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_bits_r_req_addr 
                        ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_in_bits_req_addr))) {
        ++(vlSymsp->__Vcoverage[1385]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_in_bits_req_addr 
            = ((0xefffffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_in_bits_req_addr) 
               | (0x10000000U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_bits_r_req_addr));
    }
    if ((0x20000000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_bits_r_req_addr 
                        ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_in_bits_req_addr))) {
        ++(vlSymsp->__Vcoverage[1386]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_in_bits_req_addr 
            = ((0xdfffffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_in_bits_req_addr) 
               | (0x20000000U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_bits_r_req_addr));
    }
    if ((0x40000000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_bits_r_req_addr 
                        ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_in_bits_req_addr))) {
        ++(vlSymsp->__Vcoverage[1387]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_in_bits_req_addr 
            = ((0xbfffffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_in_bits_req_addr) 
               | (0x40000000U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_bits_r_req_addr));
    }
    if (((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_bits_r_req_addr 
          ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_in_bits_req_addr) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1388]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_in_bits_req_addr 
            = ((0x7fffffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_in_bits_req_addr) 
               | (0x80000000U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_bits_r_req_addr));
    }
    if ((1U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_setIdx) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_setIdx)))) {
        ++(vlSymsp->__Vcoverage[1673]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_setIdx 
            = ((0x3feU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_setIdx)) 
               | (1U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_setIdx)));
    }
    if ((2U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_setIdx) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_setIdx)))) {
        ++(vlSymsp->__Vcoverage[1674]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_setIdx 
            = ((0x3fdU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_setIdx)) 
               | (2U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_setIdx)));
    }
    if ((4U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_setIdx) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_setIdx)))) {
        ++(vlSymsp->__Vcoverage[1675]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_setIdx 
            = ((0x3fbU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_setIdx)) 
               | (4U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_setIdx)));
    }
    if ((8U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_setIdx) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_setIdx)))) {
        ++(vlSymsp->__Vcoverage[1676]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_setIdx 
            = ((0x3f7U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_setIdx)) 
               | (8U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_setIdx)));
    }
    if ((0x10U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_setIdx) 
                  ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_setIdx)))) {
        ++(vlSymsp->__Vcoverage[1677]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_setIdx 
            = ((0x3efU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_setIdx)) 
               | (0x10U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_setIdx)));
    }
    if ((0x20U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_setIdx) 
                  ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_setIdx)))) {
        ++(vlSymsp->__Vcoverage[1678]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_setIdx 
            = ((0x3dfU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_setIdx)) 
               | (0x20U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_setIdx)));
    }
    if ((0x40U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_setIdx) 
                  ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_setIdx)))) {
        ++(vlSymsp->__Vcoverage[1679]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_setIdx 
            = ((0x3bfU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_setIdx)) 
               | (0x40U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_setIdx)));
    }
    if ((0x80U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_setIdx) 
                  ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_setIdx)))) {
        ++(vlSymsp->__Vcoverage[1680]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_setIdx 
            = ((0x37fU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_setIdx)) 
               | (0x80U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_setIdx)));
    }
    if ((0x100U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_setIdx) 
                   ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_setIdx)))) {
        ++(vlSymsp->__Vcoverage[1681]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_setIdx 
            = ((0x2ffU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_setIdx)) 
               | (0x100U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_setIdx)));
    }
    if ((0x200U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_setIdx) 
                   ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_setIdx)))) {
        ++(vlSymsp->__Vcoverage[1682]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_setIdx 
            = ((0x1ffU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_setIdx)) 
               | (0x200U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_setIdx)));
    }
    if ((1U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr 
               ^ vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr))) {
        ++(vlSymsp->__Vcoverage[3753]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr 
            = ((0xfffffffeU & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr) 
               | (1U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr));
    }
    if ((2U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr 
               ^ vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr))) {
        ++(vlSymsp->__Vcoverage[3754]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr 
            = ((0xfffffffdU & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr) 
               | (2U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr));
    }
    if ((4U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr 
               ^ vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr))) {
        ++(vlSymsp->__Vcoverage[3755]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr 
            = ((0xfffffffbU & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr) 
               | (4U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr));
    }
    if ((8U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr 
               ^ vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr))) {
        ++(vlSymsp->__Vcoverage[3756]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr 
            = ((0xfffffff7U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr) 
               | (8U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr));
    }
    if ((0x10U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr))) {
        ++(vlSymsp->__Vcoverage[3757]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr 
            = ((0xffffffefU & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr) 
               | (0x10U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr));
    }
    if ((0x20U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr))) {
        ++(vlSymsp->__Vcoverage[3758]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr 
            = ((0xffffffdfU & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr) 
               | (0x20U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr));
    }
    if ((0x40U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr))) {
        ++(vlSymsp->__Vcoverage[3759]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr 
            = ((0xffffffbfU & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr) 
               | (0x40U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr));
    }
    if ((0x80U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr))) {
        ++(vlSymsp->__Vcoverage[3760]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr 
            = ((0xffffff7fU & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr) 
               | (0x80U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr));
    }
    if ((0x100U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr))) {
        ++(vlSymsp->__Vcoverage[3761]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr 
            = ((0xfffffeffU & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr) 
               | (0x100U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr));
    }
    if ((0x200U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr))) {
        ++(vlSymsp->__Vcoverage[3762]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr 
            = ((0xfffffdffU & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr) 
               | (0x200U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr));
    }
    if ((0x400U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr))) {
        ++(vlSymsp->__Vcoverage[3763]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr 
            = ((0xfffffbffU & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr) 
               | (0x400U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr));
    }
    if ((0x800U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr))) {
        ++(vlSymsp->__Vcoverage[3764]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr 
            = ((0xfffff7ffU & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr) 
               | (0x800U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr));
    }
    if ((0x1000U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr))) {
        ++(vlSymsp->__Vcoverage[3765]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr 
            = ((0xffffefffU & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr) 
               | (0x1000U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr));
    }
    if ((0x2000U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr))) {
        ++(vlSymsp->__Vcoverage[3766]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr 
            = ((0xffffdfffU & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr) 
               | (0x2000U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr));
    }
    if ((0x4000U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr))) {
        ++(vlSymsp->__Vcoverage[3767]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr 
            = ((0xffffbfffU & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr) 
               | (0x4000U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr));
    }
    if ((0x8000U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr))) {
        ++(vlSymsp->__Vcoverage[3768]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr 
            = ((0xffff7fffU & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr) 
               | (0x8000U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr));
    }
    if ((0x10000U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr))) {
        ++(vlSymsp->__Vcoverage[3769]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr 
            = ((0xfffeffffU & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr) 
               | (0x10000U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr));
    }
    if ((0x20000U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr))) {
        ++(vlSymsp->__Vcoverage[3770]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr 
            = ((0xfffdffffU & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr) 
               | (0x20000U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr));
    }
    if ((0x40000U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr))) {
        ++(vlSymsp->__Vcoverage[3771]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr 
            = ((0xfffbffffU & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr) 
               | (0x40000U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr));
    }
    if ((0x80000U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr))) {
        ++(vlSymsp->__Vcoverage[3772]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr 
            = ((0xfff7ffffU & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr) 
               | (0x80000U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr));
    }
    if ((0x100000U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr 
                      ^ vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr))) {
        ++(vlSymsp->__Vcoverage[3773]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr 
            = ((0xffefffffU & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr) 
               | (0x100000U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr));
    }
    if ((0x200000U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr 
                      ^ vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr))) {
        ++(vlSymsp->__Vcoverage[3774]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr 
            = ((0xffdfffffU & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr) 
               | (0x200000U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr));
    }
    if ((0x400000U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr 
                      ^ vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr))) {
        ++(vlSymsp->__Vcoverage[3775]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr 
            = ((0xffbfffffU & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr) 
               | (0x400000U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr));
    }
    if ((0x800000U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr 
                      ^ vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr))) {
        ++(vlSymsp->__Vcoverage[3776]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr 
            = ((0xff7fffffU & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr) 
               | (0x800000U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr));
    }
    if ((0x1000000U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr 
                       ^ vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr))) {
        ++(vlSymsp->__Vcoverage[3777]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr 
            = ((0xfeffffffU & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr) 
               | (0x1000000U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr));
    }
    if ((0x2000000U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr 
                       ^ vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr))) {
        ++(vlSymsp->__Vcoverage[3778]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr 
            = ((0xfdffffffU & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr) 
               | (0x2000000U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr));
    }
    if ((0x4000000U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr 
                       ^ vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr))) {
        ++(vlSymsp->__Vcoverage[3779]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr 
            = ((0xfbffffffU & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr) 
               | (0x4000000U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr));
    }
    if ((0x8000000U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr 
                       ^ vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr))) {
        ++(vlSymsp->__Vcoverage[3780]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr 
            = ((0xf7ffffffU & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr) 
               | (0x8000000U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr));
    }
    if ((0x10000000U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr 
                        ^ vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr))) {
        ++(vlSymsp->__Vcoverage[3781]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr 
            = ((0xefffffffU & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr) 
               | (0x10000000U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr));
    }
    if ((0x20000000U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr 
                        ^ vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr))) {
        ++(vlSymsp->__Vcoverage[3782]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr 
            = ((0xdfffffffU & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr) 
               | (0x20000000U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr));
    }
    if ((0x40000000U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr 
                        ^ vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr))) {
        ++(vlSymsp->__Vcoverage[3783]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr 
            = ((0xbfffffffU & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr) 
               | (0x40000000U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr));
    }
    if (((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr 
          ^ vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3784]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr 
            = ((0x7fffffffU & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__waddr) 
               | (0x80000000U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr));
    }
    vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr 
        = ((1U == (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state))
            ? (0xfffffff8U & vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_bits_r_req_addr)
            : vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr);
    if ((1U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata)))) {
        ++(vlSymsp->__Vcoverage[2287]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xfffffffffffffffeULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | (IData)((IData)((1U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata)))));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 1U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2288]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xfffffffffffffffdULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 2U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2289]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xfffffffffffffffbULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 3U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2290]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xfffffffffffffff7ULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 4U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2291]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xffffffffffffffefULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 5U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2292]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xffffffffffffffdfULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 6U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2293]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xffffffffffffffbfULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 7U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2294]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xffffffffffffff7fULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 8U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2295]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xfffffffffffffeffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 9U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2296]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xfffffffffffffdffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0xaU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2297]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xfffffffffffffbffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0xbU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2298]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xfffffffffffff7ffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0xcU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2299]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xffffffffffffefffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0xdU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2300]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xffffffffffffdfffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0xeU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2301]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xffffffffffffbfffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0xfU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2302]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xffffffffffff7fffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0x10U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2303]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xfffffffffffeffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0x11U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2304]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xfffffffffffdffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0x12U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2305]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xfffffffffffbffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0x13U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2306]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xfffffffffff7ffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0x14U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2307]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xffffffffffefffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0x15U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2308]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xffffffffffdfffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0x16U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2309]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xffffffffffbfffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0x17U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2310]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xffffffffff7fffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0x18U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2311]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xfffffffffeffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0x19U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2312]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xfffffffffdffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0x1aU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2313]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xfffffffffbffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0x1bU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2314]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xfffffffff7ffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0x1cU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2315]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xffffffffefffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0x1dU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2316]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xffffffffdfffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0x1eU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2317]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xffffffffbfffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0x1fU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2318]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xffffffff7fffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0x20U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2319]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xfffffffeffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0x21U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2320]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xfffffffdffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0x22U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2321]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xfffffffbffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0x23U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2322]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xfffffff7ffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0x24U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2323]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xffffffefffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0x25U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2324]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xffffffdfffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0x26U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2325]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xffffffbfffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0x27U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2326]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xffffff7fffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0x28U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2327]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xfffffeffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0x29U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2328]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xfffffdffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0x2aU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2329]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xfffffbffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0x2bU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2330]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xfffff7ffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0x2cU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2331]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xffffefffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0x2dU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2332]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xffffdfffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0x2eU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2333]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xffffbfffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0x2fU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2334]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xffff7fffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0x30U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2335]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xfffeffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0x31U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2336]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xfffdffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0x32U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2337]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xfffbffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0x33U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2338]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xfff7ffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0x34U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2339]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xffefffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0x35U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2340]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xffdfffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0x36U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2341]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xffbfffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0x37U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2342]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xff7fffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0x38U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2343]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xfeffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0x39U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2344]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xfdffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0x3aU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2345]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xfbffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0x3bU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2346]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xf7ffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0x3cU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2347]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xefffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0x3dU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2348]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xdfffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                        >> 0x3eU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2349]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0xbfffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[2350]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata 
            = ((0x7fffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_out_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->Cache_top__DOT__io_in_resp_bits_rdata = vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata;
    if ((1U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data)))) {
        ++(vlSymsp->__Vcoverage[3186]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xfffffffffffffffeULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | (IData)((IData)((1U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data)))));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 1U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3187]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xfffffffffffffffdULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 2U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3188]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xfffffffffffffffbULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 3U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3189]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xfffffffffffffff7ULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 4U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3190]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xffffffffffffffefULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 5U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3191]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xffffffffffffffdfULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 6U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3192]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xffffffffffffffbfULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 7U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3193]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xffffffffffffff7fULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 8U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3194]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xfffffffffffffeffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 9U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3195]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xfffffffffffffdffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0xaU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3196]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xfffffffffffffbffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0xbU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3197]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xfffffffffffff7ffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0xcU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3198]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xffffffffffffefffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0xdU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3199]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xffffffffffffdfffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0xeU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3200]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xffffffffffffbfffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0xfU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3201]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xffffffffffff7fffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0x10U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3202]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xfffffffffffeffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0x11U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3203]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xfffffffffffdffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0x12U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3204]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xfffffffffffbffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0x13U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3205]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xfffffffffff7ffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0x14U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3206]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xffffffffffefffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0x15U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3207]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xffffffffffdfffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0x16U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3208]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xffffffffffbfffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0x17U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3209]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xffffffffff7fffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0x18U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3210]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xfffffffffeffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0x19U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3211]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xfffffffffdffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0x1aU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3212]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xfffffffffbffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0x1bU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3213]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xfffffffff7ffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0x1cU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3214]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xffffffffefffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0x1dU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3215]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xffffffffdfffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0x1eU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3216]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xffffffffbfffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0x1fU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3217]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xffffffff7fffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0x20U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3218]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xfffffffeffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0x21U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3219]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xfffffffdffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0x22U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3220]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xfffffffbffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0x23U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3221]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xfffffff7ffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0x24U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3222]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xffffffefffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0x25U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3223]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xffffffdfffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0x26U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3224]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xffffffbfffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0x27U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3225]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xffffff7fffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0x28U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3226]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xfffffeffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0x29U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3227]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xfffffdffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0x2aU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3228]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xfffffbffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0x2bU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3229]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xfffff7ffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0x2cU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3230]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xffffefffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0x2dU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3231]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xffffdfffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0x2eU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3232]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xffffbfffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0x2fU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3233]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xffff7fffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0x30U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3234]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xfffeffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0x31U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3235]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xfffdffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0x32U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3236]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xfffbffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0x33U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3237]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xfff7ffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0x34U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3238]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xffefffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0x35U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3239]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xffdfffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0x36U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3240]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xffbfffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0x37U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3241]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xff7fffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0x38U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3242]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xfeffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0x39U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3243]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xfdffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0x3aU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3244]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xfbffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0x3bU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3245]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xf7ffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0x3cU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3246]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xefffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0x3dU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3247]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xdfffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                        >> 0x3eU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3248]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0xbfffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[3249]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data 
            = ((0x7fffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_0_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_data_dirty) 
         ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_dirty))) {
        ++(vlSymsp->__Vcoverage[1667]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_dirty 
            = vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_data_dirty;
    }
    if ((1U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_data_tag 
               ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag))) {
        ++(vlSymsp->__Vcoverage[1648]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag 
            = ((0x7fffeU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag) 
               | (1U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_data_tag));
    }
    if ((2U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_data_tag 
               ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag))) {
        ++(vlSymsp->__Vcoverage[1649]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag 
            = ((0x7fffdU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag) 
               | (2U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_data_tag));
    }
    if ((4U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_data_tag 
               ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag))) {
        ++(vlSymsp->__Vcoverage[1650]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag 
            = ((0x7fffbU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag) 
               | (4U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_data_tag));
    }
    if ((8U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_data_tag 
               ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag))) {
        ++(vlSymsp->__Vcoverage[1651]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag 
            = ((0x7fff7U & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag) 
               | (8U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_data_tag));
    }
    if ((0x10U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_data_tag 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag))) {
        ++(vlSymsp->__Vcoverage[1652]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag 
            = ((0x7ffefU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag) 
               | (0x10U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_data_tag));
    }
    if ((0x20U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_data_tag 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag))) {
        ++(vlSymsp->__Vcoverage[1653]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag 
            = ((0x7ffdfU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag) 
               | (0x20U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_data_tag));
    }
    if ((0x40U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_data_tag 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag))) {
        ++(vlSymsp->__Vcoverage[1654]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag 
            = ((0x7ffbfU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag) 
               | (0x40U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_data_tag));
    }
    if ((0x80U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_data_tag 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag))) {
        ++(vlSymsp->__Vcoverage[1655]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag 
            = ((0x7ff7fU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag) 
               | (0x80U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_data_tag));
    }
    if ((0x100U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_data_tag 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag))) {
        ++(vlSymsp->__Vcoverage[1656]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag 
            = ((0x7feffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag) 
               | (0x100U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_data_tag));
    }
    if ((0x200U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_data_tag 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag))) {
        ++(vlSymsp->__Vcoverage[1657]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag 
            = ((0x7fdffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag) 
               | (0x200U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_data_tag));
    }
    if ((0x400U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_data_tag 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag))) {
        ++(vlSymsp->__Vcoverage[1658]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag 
            = ((0x7fbffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag) 
               | (0x400U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_data_tag));
    }
    if ((0x800U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_data_tag 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag))) {
        ++(vlSymsp->__Vcoverage[1659]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag 
            = ((0x7f7ffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag) 
               | (0x800U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_data_tag));
    }
    if ((0x1000U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_data_tag 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag))) {
        ++(vlSymsp->__Vcoverage[1660]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag 
            = ((0x7efffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag) 
               | (0x1000U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_data_tag));
    }
    if ((0x2000U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_data_tag 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag))) {
        ++(vlSymsp->__Vcoverage[1661]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag 
            = ((0x7dfffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag) 
               | (0x2000U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_data_tag));
    }
    if ((0x4000U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_data_tag 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag))) {
        ++(vlSymsp->__Vcoverage[1662]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag 
            = ((0x7bfffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag) 
               | (0x4000U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_data_tag));
    }
    if ((0x8000U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_data_tag 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag))) {
        ++(vlSymsp->__Vcoverage[1663]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag 
            = ((0x77fffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag) 
               | (0x8000U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_data_tag));
    }
    if ((0x10000U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_data_tag 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag))) {
        ++(vlSymsp->__Vcoverage[1664]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag 
            = ((0x6ffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag) 
               | (0x10000U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_data_tag));
    }
    if ((0x20000U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_data_tag 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag))) {
        ++(vlSymsp->__Vcoverage[1665]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag 
            = ((0x5ffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag) 
               | (0x20000U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_data_tag));
    }
    if ((0x40000U & (vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_data_tag 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag))) {
        ++(vlSymsp->__Vcoverage[1666]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag 
            = ((0x3ffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_data_tag) 
               | (0x40000U & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_data_tag));
    }
    Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT___wdataword_T 
        = (2U | ((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_data_tag 
                  << 2U) | (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_data_dirty)));
    if ((1U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_setIdx) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_setIdx)))) {
        ++(vlSymsp->__Vcoverage[1641]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_setIdx 
            = ((0x7eU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_setIdx)) 
               | (1U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_setIdx)));
    }
    if ((2U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_setIdx) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_setIdx)))) {
        ++(vlSymsp->__Vcoverage[1642]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_setIdx 
            = ((0x7dU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_setIdx)) 
               | (2U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_setIdx)));
    }
    if ((4U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_setIdx) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_setIdx)))) {
        ++(vlSymsp->__Vcoverage[1643]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_setIdx 
            = ((0x7bU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_setIdx)) 
               | (4U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_setIdx)));
    }
    if ((8U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_setIdx) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_setIdx)))) {
        ++(vlSymsp->__Vcoverage[1644]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_setIdx 
            = ((0x77U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_setIdx)) 
               | (8U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_setIdx)));
    }
    if ((0x10U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_setIdx) 
                  ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_setIdx)))) {
        ++(vlSymsp->__Vcoverage[1645]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_setIdx 
            = ((0x6fU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_setIdx)) 
               | (0x10U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_setIdx)));
    }
    if ((0x20U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_setIdx) 
                  ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_setIdx)))) {
        ++(vlSymsp->__Vcoverage[1646]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_setIdx 
            = ((0x5fU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_setIdx)) 
               | (0x20U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_setIdx)));
    }
    if ((0x40U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_setIdx) 
                  ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_setIdx)))) {
        ++(vlSymsp->__Vcoverage[1647]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_setIdx 
            = ((0x3fU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_bits_setIdx)) 
               | (0x40U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_setIdx)));
    }
    if (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__resetState) {
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_addr 
            = vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__resetSet;
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_addr 
            = vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__resetSet;
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_addr 
            = vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__resetSet;
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_addr 
            = vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__resetSet;
    } else {
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_addr 
            = vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_setIdx;
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_addr 
            = vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_setIdx;
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_addr 
            = vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_setIdx;
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_addr 
            = vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_setIdx;
    }
    if (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_mmio) 
         ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_mmio))) {
        ++(vlSymsp->__Vcoverage[1570]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_mmio 
            = vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_mmio;
    }
    if ((1U & (vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr 
               ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[2622]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr 
            = ((0xfffffffeU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr) 
               | (1U & vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr));
    }
    if ((2U & (vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr 
               ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[2623]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr 
            = ((0xfffffffdU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr) 
               | (2U & vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr));
    }
    if ((4U & (vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr 
               ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[2624]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr 
            = ((0xfffffffbU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr) 
               | (4U & vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr));
    }
    if ((8U & (vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr 
               ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[2625]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr 
            = ((0xfffffff7U & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr) 
               | (8U & vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr));
    }
    if ((0x10U & (vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[2626]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr 
            = ((0xffffffefU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr) 
               | (0x10U & vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr));
    }
    if ((0x20U & (vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[2627]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr 
            = ((0xffffffdfU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr) 
               | (0x20U & vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr));
    }
    if ((0x40U & (vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[2628]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr 
            = ((0xffffffbfU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr) 
               | (0x40U & vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr));
    }
    if ((0x80U & (vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[2629]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr 
            = ((0xffffff7fU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr) 
               | (0x80U & vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr));
    }
    if ((0x100U & (vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[2630]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr 
            = ((0xfffffeffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr) 
               | (0x100U & vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr));
    }
    if ((0x200U & (vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[2631]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr 
            = ((0xfffffdffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr) 
               | (0x200U & vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr));
    }
    if ((0x400U & (vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[2632]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr 
            = ((0xfffffbffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr) 
               | (0x400U & vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr));
    }
    if ((0x800U & (vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[2633]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr 
            = ((0xfffff7ffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr) 
               | (0x800U & vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr));
    }
    if ((0x1000U & (vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[2634]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr 
            = ((0xffffefffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr) 
               | (0x1000U & vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr));
    }
    if ((0x2000U & (vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[2635]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr 
            = ((0xffffdfffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr) 
               | (0x2000U & vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr));
    }
    if ((0x4000U & (vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[2636]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr 
            = ((0xffffbfffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr) 
               | (0x4000U & vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr));
    }
    if ((0x8000U & (vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[2637]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr 
            = ((0xffff7fffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr) 
               | (0x8000U & vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr));
    }
    if ((0x10000U & (vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[2638]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr 
            = ((0xfffeffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr) 
               | (0x10000U & vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr));
    }
    if ((0x20000U & (vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[2639]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr 
            = ((0xfffdffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr) 
               | (0x20000U & vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr));
    }
    if ((0x40000U & (vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[2640]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr 
            = ((0xfffbffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr) 
               | (0x40000U & vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr));
    }
    if ((0x80000U & (vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[2641]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr 
            = ((0xfff7ffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr) 
               | (0x80000U & vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr));
    }
    if ((0x100000U & (vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr 
                      ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[2642]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr 
            = ((0xffefffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr) 
               | (0x100000U & vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr));
    }
    if ((0x200000U & (vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr 
                      ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[2643]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr 
            = ((0xffdfffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr) 
               | (0x200000U & vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr));
    }
    if ((0x400000U & (vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr 
                      ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[2644]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr 
            = ((0xffbfffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr) 
               | (0x400000U & vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr));
    }
    if ((0x800000U & (vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr 
                      ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[2645]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr 
            = ((0xff7fffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr) 
               | (0x800000U & vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr));
    }
    if ((0x1000000U & (vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr 
                       ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[2646]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr 
            = ((0xfeffffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr) 
               | (0x1000000U & vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr));
    }
    if ((0x2000000U & (vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr 
                       ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[2647]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr 
            = ((0xfdffffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr) 
               | (0x2000000U & vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr));
    }
    if ((0x4000000U & (vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr 
                       ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[2648]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr 
            = ((0xfbffffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr) 
               | (0x4000000U & vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr));
    }
    if ((0x8000000U & (vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr 
                       ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[2649]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr 
            = ((0xf7ffffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr) 
               | (0x8000000U & vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr));
    }
    if ((0x10000000U & (vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr 
                        ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[2650]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr 
            = ((0xefffffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr) 
               | (0x10000000U & vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr));
    }
    if ((0x20000000U & (vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr 
                        ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[2651]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr 
            = ((0xdfffffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr) 
               | (0x20000000U & vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr));
    }
    if ((0x40000000U & (vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr 
                        ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[2652]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr 
            = ((0xbfffffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr) 
               | (0x40000000U & vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr));
    }
    if (((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr 
          ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2653]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr 
            = ((0x7fffffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_mem_req_bits_addr) 
               | (0x80000000U & vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr));
    }
    vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr 
        = vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr;
    if (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__resetState) {
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_data = 0U;
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_data = 0U;
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_data = 0U;
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_data = 0U;
    } else {
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_data 
            = Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT___wdataword_T;
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_data 
            = Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT___wdataword_T;
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_data 
            = Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT___wdataword_T;
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_data 
            = Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT___wdataword_T;
    }
    if ((1U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_addr) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_addr)))) {
        ++(vlSymsp->__Vcoverage[4194]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_addr 
            = ((0x7eU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_addr)) 
               | (1U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_addr)));
    }
    if ((2U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_addr) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_addr)))) {
        ++(vlSymsp->__Vcoverage[4195]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_addr 
            = ((0x7dU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_addr)) 
               | (2U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_addr)));
    }
    if ((4U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_addr) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_addr)))) {
        ++(vlSymsp->__Vcoverage[4196]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_addr 
            = ((0x7bU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_addr)) 
               | (4U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_addr)));
    }
    if ((8U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_addr) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_addr)))) {
        ++(vlSymsp->__Vcoverage[4197]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_addr 
            = ((0x77U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_addr)) 
               | (8U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_addr)));
    }
    if ((0x10U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_addr) 
                  ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_addr)))) {
        ++(vlSymsp->__Vcoverage[4198]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_addr 
            = ((0x6fU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_addr)) 
               | (0x10U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_addr)));
    }
    if ((0x20U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_addr) 
                  ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_addr)))) {
        ++(vlSymsp->__Vcoverage[4199]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_addr 
            = ((0x5fU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_addr)) 
               | (0x20U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_addr)));
    }
    if ((0x40U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_addr) 
                  ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_addr)))) {
        ++(vlSymsp->__Vcoverage[4200]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_addr 
            = ((0x3fU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_addr)) 
               | (0x40U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_addr)));
    }
    if ((1U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_addr) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_addr)))) {
        ++(vlSymsp->__Vcoverage[4234]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_addr 
            = ((0x7eU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_addr)) 
               | (1U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_addr)));
    }
    if ((2U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_addr) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_addr)))) {
        ++(vlSymsp->__Vcoverage[4235]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_addr 
            = ((0x7dU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_addr)) 
               | (2U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_addr)));
    }
    if ((4U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_addr) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_addr)))) {
        ++(vlSymsp->__Vcoverage[4236]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_addr 
            = ((0x7bU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_addr)) 
               | (4U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_addr)));
    }
    if ((8U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_addr) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_addr)))) {
        ++(vlSymsp->__Vcoverage[4237]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_addr 
            = ((0x77U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_addr)) 
               | (8U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_addr)));
    }
    if ((0x10U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_addr) 
                  ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_addr)))) {
        ++(vlSymsp->__Vcoverage[4238]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_addr 
            = ((0x6fU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_addr)) 
               | (0x10U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_addr)));
    }
    if ((0x20U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_addr) 
                  ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_addr)))) {
        ++(vlSymsp->__Vcoverage[4239]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_addr 
            = ((0x5fU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_addr)) 
               | (0x20U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_addr)));
    }
    if ((0x40U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_addr) 
                  ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_addr)))) {
        ++(vlSymsp->__Vcoverage[4240]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_addr 
            = ((0x3fU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_addr)) 
               | (0x40U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_addr)));
    }
    if ((1U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_addr) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_addr)))) {
        ++(vlSymsp->__Vcoverage[4274]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_addr 
            = ((0x7eU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_addr)) 
               | (1U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_addr)));
    }
    if ((2U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_addr) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_addr)))) {
        ++(vlSymsp->__Vcoverage[4275]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_addr 
            = ((0x7dU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_addr)) 
               | (2U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_addr)));
    }
    if ((4U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_addr) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_addr)))) {
        ++(vlSymsp->__Vcoverage[4276]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_addr 
            = ((0x7bU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_addr)) 
               | (4U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_addr)));
    }
    if ((8U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_addr) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_addr)))) {
        ++(vlSymsp->__Vcoverage[4277]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_addr 
            = ((0x77U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_addr)) 
               | (8U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_addr)));
    }
    if ((0x10U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_addr) 
                  ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_addr)))) {
        ++(vlSymsp->__Vcoverage[4278]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_addr 
            = ((0x6fU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_addr)) 
               | (0x10U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_addr)));
    }
    if ((0x20U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_addr) 
                  ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_addr)))) {
        ++(vlSymsp->__Vcoverage[4279]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_addr 
            = ((0x5fU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_addr)) 
               | (0x20U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_addr)));
    }
    if ((0x40U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_addr) 
                  ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_addr)))) {
        ++(vlSymsp->__Vcoverage[4280]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_addr 
            = ((0x3fU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_addr)) 
               | (0x40U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_addr)));
    }
    if ((1U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_addr) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_addr)))) {
        ++(vlSymsp->__Vcoverage[4314]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_addr 
            = ((0x7eU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_addr)) 
               | (1U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_addr)));
    }
    if ((2U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_addr) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_addr)))) {
        ++(vlSymsp->__Vcoverage[4315]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_addr 
            = ((0x7dU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_addr)) 
               | (2U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_addr)));
    }
    if ((4U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_addr) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_addr)))) {
        ++(vlSymsp->__Vcoverage[4316]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_addr 
            = ((0x7bU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_addr)) 
               | (4U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_addr)));
    }
    if ((8U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_addr) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_addr)))) {
        ++(vlSymsp->__Vcoverage[4317]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_addr 
            = ((0x77U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_addr)) 
               | (8U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_addr)));
    }
    if ((0x10U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_addr) 
                  ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_addr)))) {
        ++(vlSymsp->__Vcoverage[4318]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_addr 
            = ((0x6fU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_addr)) 
               | (0x10U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_addr)));
    }
    if ((0x20U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_addr) 
                  ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_addr)))) {
        ++(vlSymsp->__Vcoverage[4319]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_addr 
            = ((0x5fU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_addr)) 
               | (0x20U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_addr)));
    }
    if ((0x40U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_addr) 
                  ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_addr)))) {
        ++(vlSymsp->__Vcoverage[4320]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_addr 
            = ((0x3fU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_addr)) 
               | (0x40U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_addr)));
    }
    if ((1U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_data 
               ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4173]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data 
            = ((0x1ffffeU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data) 
               | (1U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_data));
    }
    if ((2U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_data 
               ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4174]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data 
            = ((0x1ffffdU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data) 
               | (2U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_data));
    }
    if ((4U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_data 
               ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4175]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data 
            = ((0x1ffffbU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data) 
               | (4U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_data));
    }
    if ((8U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_data 
               ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4176]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data 
            = ((0x1ffff7U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data) 
               | (8U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_data));
    }
    if ((0x10U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_data 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4177]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data 
            = ((0x1fffefU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data) 
               | (0x10U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_data));
    }
    if ((0x20U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_data 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4178]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data 
            = ((0x1fffdfU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data) 
               | (0x20U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_data));
    }
    if ((0x40U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_data 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4179]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data 
            = ((0x1fffbfU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data) 
               | (0x40U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_data));
    }
    if ((0x80U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_data 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4180]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data 
            = ((0x1fff7fU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data) 
               | (0x80U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_data));
    }
    if ((0x100U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_data 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4181]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data 
            = ((0x1ffeffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data) 
               | (0x100U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_data));
    }
    if ((0x200U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_data 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4182]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data 
            = ((0x1ffdffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data) 
               | (0x200U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_data));
    }
    if ((0x400U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_data 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4183]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data 
            = ((0x1ffbffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data) 
               | (0x400U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_data));
    }
    if ((0x800U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_data 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4184]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data 
            = ((0x1ff7ffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data) 
               | (0x800U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_data));
    }
    if ((0x1000U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_data 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4185]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data 
            = ((0x1fefffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data) 
               | (0x1000U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_data));
    }
    if ((0x2000U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_data 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4186]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data 
            = ((0x1fdfffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data) 
               | (0x2000U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_data));
    }
    if ((0x4000U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_data 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4187]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data 
            = ((0x1fbfffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data) 
               | (0x4000U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_data));
    }
    if ((0x8000U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_data 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4188]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data 
            = ((0x1f7fffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data) 
               | (0x8000U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_data));
    }
    if ((0x10000U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_data 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4189]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data 
            = ((0x1effffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data) 
               | (0x10000U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_data));
    }
    if ((0x20000U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_data 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4190]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data 
            = ((0x1dffffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data) 
               | (0x20000U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_data));
    }
    if ((0x40000U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_data 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4191]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data 
            = ((0x1bffffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data) 
               | (0x40000U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_data));
    }
    if ((0x80000U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_data 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4192]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data 
            = ((0x17ffffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data) 
               | (0x80000U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_data));
    }
    if ((0x100000U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_data 
                      ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4193]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data 
            = ((0xfffffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_data) 
               | (0x100000U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_data));
    }
    if ((1U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_data 
               ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4213]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data 
            = ((0x1ffffeU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data) 
               | (1U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_data));
    }
    if ((2U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_data 
               ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4214]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data 
            = ((0x1ffffdU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data) 
               | (2U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_data));
    }
    if ((4U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_data 
               ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4215]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data 
            = ((0x1ffffbU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data) 
               | (4U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_data));
    }
    if ((8U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_data 
               ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4216]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data 
            = ((0x1ffff7U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data) 
               | (8U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_data));
    }
    if ((0x10U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_data 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4217]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data 
            = ((0x1fffefU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data) 
               | (0x10U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_data));
    }
    if ((0x20U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_data 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4218]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data 
            = ((0x1fffdfU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data) 
               | (0x20U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_data));
    }
    if ((0x40U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_data 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4219]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data 
            = ((0x1fffbfU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data) 
               | (0x40U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_data));
    }
    if ((0x80U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_data 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4220]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data 
            = ((0x1fff7fU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data) 
               | (0x80U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_data));
    }
    if ((0x100U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_data 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4221]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data 
            = ((0x1ffeffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data) 
               | (0x100U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_data));
    }
    if ((0x200U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_data 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4222]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data 
            = ((0x1ffdffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data) 
               | (0x200U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_data));
    }
    if ((0x400U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_data 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4223]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data 
            = ((0x1ffbffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data) 
               | (0x400U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_data));
    }
    if ((0x800U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_data 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4224]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data 
            = ((0x1ff7ffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data) 
               | (0x800U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_data));
    }
    if ((0x1000U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_data 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4225]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data 
            = ((0x1fefffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data) 
               | (0x1000U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_data));
    }
    if ((0x2000U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_data 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4226]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data 
            = ((0x1fdfffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data) 
               | (0x2000U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_data));
    }
    if ((0x4000U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_data 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4227]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data 
            = ((0x1fbfffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data) 
               | (0x4000U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_data));
    }
    if ((0x8000U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_data 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4228]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data 
            = ((0x1f7fffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data) 
               | (0x8000U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_data));
    }
    if ((0x10000U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_data 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4229]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data 
            = ((0x1effffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data) 
               | (0x10000U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_data));
    }
    if ((0x20000U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_data 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4230]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data 
            = ((0x1dffffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data) 
               | (0x20000U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_data));
    }
    if ((0x40000U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_data 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4231]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data 
            = ((0x1bffffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data) 
               | (0x40000U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_data));
    }
    if ((0x80000U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_data 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4232]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data 
            = ((0x17ffffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data) 
               | (0x80000U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_data));
    }
    if ((0x100000U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_data 
                      ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4233]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data 
            = ((0xfffffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_data) 
               | (0x100000U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_data));
    }
    if ((1U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_data 
               ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4253]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data 
            = ((0x1ffffeU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data) 
               | (1U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_data));
    }
    if ((2U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_data 
               ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4254]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data 
            = ((0x1ffffdU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data) 
               | (2U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_data));
    }
    if ((4U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_data 
               ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4255]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data 
            = ((0x1ffffbU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data) 
               | (4U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_data));
    }
    if ((8U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_data 
               ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4256]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data 
            = ((0x1ffff7U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data) 
               | (8U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_data));
    }
    if ((0x10U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_data 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4257]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data 
            = ((0x1fffefU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data) 
               | (0x10U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_data));
    }
    if ((0x20U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_data 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4258]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data 
            = ((0x1fffdfU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data) 
               | (0x20U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_data));
    }
    if ((0x40U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_data 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4259]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data 
            = ((0x1fffbfU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data) 
               | (0x40U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_data));
    }
    if ((0x80U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_data 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4260]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data 
            = ((0x1fff7fU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data) 
               | (0x80U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_data));
    }
    if ((0x100U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_data 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4261]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data 
            = ((0x1ffeffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data) 
               | (0x100U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_data));
    }
    if ((0x200U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_data 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4262]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data 
            = ((0x1ffdffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data) 
               | (0x200U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_data));
    }
    if ((0x400U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_data 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4263]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data 
            = ((0x1ffbffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data) 
               | (0x400U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_data));
    }
    if ((0x800U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_data 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4264]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data 
            = ((0x1ff7ffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data) 
               | (0x800U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_data));
    }
    if ((0x1000U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_data 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4265]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data 
            = ((0x1fefffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data) 
               | (0x1000U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_data));
    }
    if ((0x2000U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_data 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4266]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data 
            = ((0x1fdfffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data) 
               | (0x2000U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_data));
    }
    if ((0x4000U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_data 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4267]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data 
            = ((0x1fbfffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data) 
               | (0x4000U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_data));
    }
    if ((0x8000U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_data 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4268]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data 
            = ((0x1f7fffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data) 
               | (0x8000U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_data));
    }
    if ((0x10000U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_data 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4269]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data 
            = ((0x1effffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data) 
               | (0x10000U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_data));
    }
    if ((0x20000U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_data 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4270]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data 
            = ((0x1dffffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data) 
               | (0x20000U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_data));
    }
    if ((0x40000U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_data 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4271]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data 
            = ((0x1bffffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data) 
               | (0x40000U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_data));
    }
    if ((0x80000U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_data 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4272]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data 
            = ((0x17ffffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data) 
               | (0x80000U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_data));
    }
    if ((0x100000U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_data 
                      ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4273]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data 
            = ((0xfffffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_data) 
               | (0x100000U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_data));
    }
    if ((1U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_data 
               ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4293]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data 
            = ((0x1ffffeU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data) 
               | (1U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_data));
    }
    if ((2U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_data 
               ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4294]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data 
            = ((0x1ffffdU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data) 
               | (2U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_data));
    }
    if ((4U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_data 
               ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4295]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data 
            = ((0x1ffffbU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data) 
               | (4U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_data));
    }
    if ((8U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_data 
               ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4296]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data 
            = ((0x1ffff7U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data) 
               | (8U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_data));
    }
    if ((0x10U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_data 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4297]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data 
            = ((0x1fffefU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data) 
               | (0x10U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_data));
    }
    if ((0x20U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_data 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4298]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data 
            = ((0x1fffdfU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data) 
               | (0x20U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_data));
    }
    if ((0x40U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_data 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4299]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data 
            = ((0x1fffbfU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data) 
               | (0x40U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_data));
    }
    if ((0x80U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_data 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4300]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data 
            = ((0x1fff7fU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data) 
               | (0x80U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_data));
    }
    if ((0x100U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_data 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4301]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data 
            = ((0x1ffeffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data) 
               | (0x100U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_data));
    }
    if ((0x200U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_data 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4302]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data 
            = ((0x1ffdffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data) 
               | (0x200U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_data));
    }
    if ((0x400U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_data 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4303]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data 
            = ((0x1ffbffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data) 
               | (0x400U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_data));
    }
    if ((0x800U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_data 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4304]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data 
            = ((0x1ff7ffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data) 
               | (0x800U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_data));
    }
    if ((0x1000U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_data 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4305]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data 
            = ((0x1fefffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data) 
               | (0x1000U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_data));
    }
    if ((0x2000U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_data 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4306]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data 
            = ((0x1fdfffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data) 
               | (0x2000U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_data));
    }
    if ((0x4000U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_data 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4307]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data 
            = ((0x1fbfffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data) 
               | (0x4000U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_data));
    }
    if ((0x8000U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_data 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4308]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data 
            = ((0x1f7fffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data) 
               | (0x8000U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_data));
    }
    if ((0x10000U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_data 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4309]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data 
            = ((0x1effffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data) 
               | (0x10000U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_data));
    }
    if ((0x20000U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_data 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4310]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data 
            = ((0x1dffffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data) 
               | (0x20000U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_data));
    }
    if ((0x40000U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_data 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4311]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data 
            = ((0x1bffffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data) 
               | (0x40000U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_data));
    }
    if ((0x80000U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_data 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4312]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data 
            = ((0x17ffffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data) 
               | (0x80000U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_data));
    }
    if ((0x100000U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_data 
                      ^ vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data))) {
        ++(vlSymsp->__Vcoverage[4313]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data 
            = ((0xfffffU & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_data) 
               | (0x100000U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_data));
    }
}

VL_INLINE_OPT void VCache___024root___multiclk__TOP__9(VCache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root___multiclk__TOP__9\n"); );
    // Init
    IData/*18:0*/ Cache_top__DOT__Cache__DOT__s2__DOT___GEN_3;
    CData/*0:0*/ Cache_top__DOT__Cache__DOT__s2__DOT___GEN_5;
    CData/*3:0*/ Cache_top__DOT__Cache__DOT__s2__DOT___waymask_T;
    QData/*63:0*/ Cache_top__DOT__Cache__DOT__s3__DOT___dataRefill_T;
    // Body
    vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT___T_41 
        = ((IData)(vlSelf->Cache_top__DOT__io_mmio_req_ready) 
           & (5U == (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state)));
    vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT___GEN_26 
        = ((IData)(vlSelf->Cache_top__DOT__io_mmio_resp_valid)
            ? 7U : (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state));
    vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT___GEN_1 
        = ((((IData)(vlSelf->Cache_top__DOT__io_flush) 
             >> 1U) & (0U != (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state))) 
           | (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__needFlush));
    vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT___GEN_57 
        = ((8U == (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state))
            ? (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__afterFirstRead)
            : ((1U == (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state))
                ? (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__afterFirstRead)
                : ((2U == (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state))
                    ? ((IData)(vlSelf->Cache_top__DOT__io_out_mem_resp_valid) 
                       | (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__afterFirstRead))
                    : (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__afterFirstRead))));
    vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_valid 
        = ((2U == (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state)) 
           & (IData)(vlSelf->Cache_top__DOT__io_out_mem_resp_valid));
    vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__readingFirst 
        = (((~ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__afterFirstRead)) 
            & (IData)(vlSelf->Cache_top__DOT__io_out_mem_resp_valid)) 
           & (2U == (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state)));
    vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataRefillWriteBus_x9 
        = ((2U == (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state)) 
           & (IData)(vlSelf->Cache_top__DOT__io_out_mem_resp_valid));
    if ((1U & ((IData)(vlSelf->Cache_top__DOT__io_mmio_req_bits_size) 
               ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_size)))) {
        ++(vlSymsp->__Vcoverage[619]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_size 
            = ((6U & (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_size)) 
               | (1U & (IData)(vlSelf->Cache_top__DOT__io_mmio_req_bits_size)));
    }
    if ((2U & ((IData)(vlSelf->Cache_top__DOT__io_mmio_req_bits_size) 
               ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_size)))) {
        ++(vlSymsp->__Vcoverage[620]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_size 
            = ((5U & (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_size)) 
               | (2U & (IData)(vlSelf->Cache_top__DOT__io_mmio_req_bits_size)));
    }
    if ((4U & ((IData)(vlSelf->Cache_top__DOT__io_mmio_req_bits_size) 
               ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_size)))) {
        ++(vlSymsp->__Vcoverage[621]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_size 
            = ((3U & (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_size)) 
               | (4U & (IData)(vlSelf->Cache_top__DOT__io_mmio_req_bits_size)));
    }
    if ((1U & ((IData)(vlSelf->Cache_top__DOT__io_in_resp_bits_user) 
               ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user)))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user 
            = ((0xfffeU & (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user)) 
               | (1U & (IData)(vlSelf->Cache_top__DOT__io_in_resp_bits_user)));
    }
    if ((2U & ((IData)(vlSelf->Cache_top__DOT__io_in_resp_bits_user) 
               ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user)))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user 
            = ((0xfffdU & (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user)) 
               | (2U & (IData)(vlSelf->Cache_top__DOT__io_in_resp_bits_user)));
    }
    if ((4U & ((IData)(vlSelf->Cache_top__DOT__io_in_resp_bits_user) 
               ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user)))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user 
            = ((0xfffbU & (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user)) 
               | (4U & (IData)(vlSelf->Cache_top__DOT__io_in_resp_bits_user)));
    }
    if ((8U & ((IData)(vlSelf->Cache_top__DOT__io_in_resp_bits_user) 
               ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user)))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user 
            = ((0xfff7U & (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user)) 
               | (8U & (IData)(vlSelf->Cache_top__DOT__io_in_resp_bits_user)));
    }
    if ((0x10U & ((IData)(vlSelf->Cache_top__DOT__io_in_resp_bits_user) 
                  ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user)))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user 
            = ((0xffefU & (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user)) 
               | (0x10U & (IData)(vlSelf->Cache_top__DOT__io_in_resp_bits_user)));
    }
    if ((0x20U & ((IData)(vlSelf->Cache_top__DOT__io_in_resp_bits_user) 
                  ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user)))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user 
            = ((0xffdfU & (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user)) 
               | (0x20U & (IData)(vlSelf->Cache_top__DOT__io_in_resp_bits_user)));
    }
    if ((0x40U & ((IData)(vlSelf->Cache_top__DOT__io_in_resp_bits_user) 
                  ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user)))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user 
            = ((0xffbfU & (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user)) 
               | (0x40U & (IData)(vlSelf->Cache_top__DOT__io_in_resp_bits_user)));
    }
    if ((0x80U & ((IData)(vlSelf->Cache_top__DOT__io_in_resp_bits_user) 
                  ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user)))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user 
            = ((0xff7fU & (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user)) 
               | (0x80U & (IData)(vlSelf->Cache_top__DOT__io_in_resp_bits_user)));
    }
    if ((0x100U & ((IData)(vlSelf->Cache_top__DOT__io_in_resp_bits_user) 
                   ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user)))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user 
            = ((0xfeffU & (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user)) 
               | (0x100U & (IData)(vlSelf->Cache_top__DOT__io_in_resp_bits_user)));
    }
    if ((0x200U & ((IData)(vlSelf->Cache_top__DOT__io_in_resp_bits_user) 
                   ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user)))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user 
            = ((0xfdffU & (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user)) 
               | (0x200U & (IData)(vlSelf->Cache_top__DOT__io_in_resp_bits_user)));
    }
    if ((0x400U & ((IData)(vlSelf->Cache_top__DOT__io_in_resp_bits_user) 
                   ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user)))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user 
            = ((0xfbffU & (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user)) 
               | (0x400U & (IData)(vlSelf->Cache_top__DOT__io_in_resp_bits_user)));
    }
    if ((0x800U & ((IData)(vlSelf->Cache_top__DOT__io_in_resp_bits_user) 
                   ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user)))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user 
            = ((0xf7ffU & (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user)) 
               | (0x800U & (IData)(vlSelf->Cache_top__DOT__io_in_resp_bits_user)));
    }
    if ((0x1000U & ((IData)(vlSelf->Cache_top__DOT__io_in_resp_bits_user) 
                    ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user)))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user 
            = ((0xefffU & (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user)) 
               | (0x1000U & (IData)(vlSelf->Cache_top__DOT__io_in_resp_bits_user)));
    }
    if ((0x2000U & ((IData)(vlSelf->Cache_top__DOT__io_in_resp_bits_user) 
                    ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user)))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user 
            = ((0xdfffU & (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user)) 
               | (0x2000U & (IData)(vlSelf->Cache_top__DOT__io_in_resp_bits_user)));
    }
    if ((0x4000U & ((IData)(vlSelf->Cache_top__DOT__io_in_resp_bits_user) 
                    ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user)))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user 
            = ((0xbfffU & (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user)) 
               | (0x4000U & (IData)(vlSelf->Cache_top__DOT__io_in_resp_bits_user)));
    }
    if ((0x8000U & ((IData)(vlSelf->Cache_top__DOT__io_in_resp_bits_user) 
                    ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user)))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user 
            = ((0x7fffU & (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_user)) 
               | (0x8000U & (IData)(vlSelf->Cache_top__DOT__io_in_resp_bits_user)));
    }
    if ((1U & ((IData)(vlSelf->Cache_top__DOT__victim_way_mask) 
               ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__victim_way_mask)))) {
        ++(vlSymsp->__Vcoverage[770]);
        vlSelf->Cache_top__DOT____Vtogcov__victim_way_mask 
            = ((0xeU & (IData)(vlSelf->Cache_top__DOT____Vtogcov__victim_way_mask)) 
               | (1U & (IData)(vlSelf->Cache_top__DOT__victim_way_mask)));
    }
    if ((2U & ((IData)(vlSelf->Cache_top__DOT__victim_way_mask) 
               ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__victim_way_mask)))) {
        ++(vlSymsp->__Vcoverage[771]);
        vlSelf->Cache_top__DOT____Vtogcov__victim_way_mask 
            = ((0xdU & (IData)(vlSelf->Cache_top__DOT____Vtogcov__victim_way_mask)) 
               | (2U & (IData)(vlSelf->Cache_top__DOT__victim_way_mask)));
    }
    if ((4U & ((IData)(vlSelf->Cache_top__DOT__victim_way_mask) 
               ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__victim_way_mask)))) {
        ++(vlSymsp->__Vcoverage[772]);
        vlSelf->Cache_top__DOT____Vtogcov__victim_way_mask 
            = ((0xbU & (IData)(vlSelf->Cache_top__DOT____Vtogcov__victim_way_mask)) 
               | (4U & (IData)(vlSelf->Cache_top__DOT__victim_way_mask)));
    }
    if ((8U & ((IData)(vlSelf->Cache_top__DOT__victim_way_mask) 
               ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__victim_way_mask)))) {
        ++(vlSymsp->__Vcoverage[773]);
        vlSelf->Cache_top__DOT____Vtogcov__victim_way_mask 
            = ((7U & (IData)(vlSelf->Cache_top__DOT____Vtogcov__victim_way_mask)) 
               | (8U & (IData)(vlSelf->Cache_top__DOT__victim_way_mask)));
    }
    if ((1U & ((IData)(vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata) 
               ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata)))) {
        ++(vlSymsp->__Vcoverage[634]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xfffffffffffffffeULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | (IData)((IData)((1U & (IData)(vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata)))));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 1U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[635]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xfffffffffffffffdULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 2U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[636]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xfffffffffffffffbULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 3U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[637]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xfffffffffffffff7ULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 4U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[638]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xffffffffffffffefULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 5U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[639]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xffffffffffffffdfULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 6U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[640]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xffffffffffffffbfULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 7U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[641]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xffffffffffffff7fULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 8U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[642]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xfffffffffffffeffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 9U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[643]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xfffffffffffffdffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0xaU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[644]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xfffffffffffffbffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0xbU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[645]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xfffffffffffff7ffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0xcU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[646]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xffffffffffffefffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0xdU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[647]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xffffffffffffdfffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0xeU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[648]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xffffffffffffbfffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0xfU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[649]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xffffffffffff7fffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0x10U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[650]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xfffffffffffeffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0x11U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[651]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xfffffffffffdffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0x12U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[652]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xfffffffffffbffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0x13U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[653]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xfffffffffff7ffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0x14U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[654]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xffffffffffefffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0x15U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[655]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xffffffffffdfffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0x16U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[656]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xffffffffffbfffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0x17U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[657]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xffffffffff7fffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0x18U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[658]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xfffffffffeffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0x19U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[659]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xfffffffffdffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0x1aU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[660]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xfffffffffbffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0x1bU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[661]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xfffffffff7ffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0x1cU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[662]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xffffffffefffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0x1dU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[663]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xffffffffdfffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0x1eU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[664]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xffffffffbfffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0x1fU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[665]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xffffffff7fffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0x20U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[666]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xfffffffeffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0x21U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[667]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xfffffffdffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0x22U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[668]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xfffffffbffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0x23U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[669]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xfffffff7ffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0x24U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[670]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xffffffefffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0x25U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[671]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xffffffdfffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0x26U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[672]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xffffffbfffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0x27U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[673]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xffffff7fffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0x28U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[674]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xfffffeffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0x29U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[675]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xfffffdffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0x2aU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[676]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xfffffbffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0x2bU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[677]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xfffff7ffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0x2cU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[678]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xffffefffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0x2dU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[679]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xffffdfffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0x2eU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[680]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xffffbfffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0x2fU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[681]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xffff7fffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0x30U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[682]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xfffeffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0x31U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[683]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xfffdffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0x32U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[684]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xfffbffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0x33U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[685]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xfff7ffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0x34U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[686]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xffefffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0x35U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[687]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xffdfffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0x36U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[688]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xffbfffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0x37U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[689]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xff7fffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0x38U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[690]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xfeffffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0x39U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[691]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xfdffffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0x3aU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[692]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xfbffffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0x3bU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[693]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xf7ffffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0x3cU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[694]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xefffffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0x3dU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[695]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xdfffffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                        >> 0x3eU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[696]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0xbfffffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                  ^ vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[697]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata 
            = ((0x7fffffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->Cache_top__DOT__io_mmio_req_bits_wmask) 
               ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wmask)))) {
        ++(vlSymsp->__Vcoverage[626]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wmask 
            = ((0xfeU & (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wmask)) 
               | (1U & (IData)(vlSelf->Cache_top__DOT__io_mmio_req_bits_wmask)));
    }
    if ((2U & ((IData)(vlSelf->Cache_top__DOT__io_mmio_req_bits_wmask) 
               ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wmask)))) {
        ++(vlSymsp->__Vcoverage[627]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wmask 
            = ((0xfdU & (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wmask)) 
               | (2U & (IData)(vlSelf->Cache_top__DOT__io_mmio_req_bits_wmask)));
    }
    if ((4U & ((IData)(vlSelf->Cache_top__DOT__io_mmio_req_bits_wmask) 
               ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wmask)))) {
        ++(vlSymsp->__Vcoverage[628]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wmask 
            = ((0xfbU & (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wmask)) 
               | (4U & (IData)(vlSelf->Cache_top__DOT__io_mmio_req_bits_wmask)));
    }
    if ((8U & ((IData)(vlSelf->Cache_top__DOT__io_mmio_req_bits_wmask) 
               ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wmask)))) {
        ++(vlSymsp->__Vcoverage[629]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wmask 
            = ((0xf7U & (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wmask)) 
               | (8U & (IData)(vlSelf->Cache_top__DOT__io_mmio_req_bits_wmask)));
    }
    if ((0x10U & ((IData)(vlSelf->Cache_top__DOT__io_mmio_req_bits_wmask) 
                  ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wmask)))) {
        ++(vlSymsp->__Vcoverage[630]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wmask 
            = ((0xefU & (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wmask)) 
               | (0x10U & (IData)(vlSelf->Cache_top__DOT__io_mmio_req_bits_wmask)));
    }
    if ((0x20U & ((IData)(vlSelf->Cache_top__DOT__io_mmio_req_bits_wmask) 
                  ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wmask)))) {
        ++(vlSymsp->__Vcoverage[631]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wmask 
            = ((0xdfU & (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wmask)) 
               | (0x20U & (IData)(vlSelf->Cache_top__DOT__io_mmio_req_bits_wmask)));
    }
    if ((0x40U & ((IData)(vlSelf->Cache_top__DOT__io_mmio_req_bits_wmask) 
                  ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wmask)))) {
        ++(vlSymsp->__Vcoverage[632]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wmask 
            = ((0xbfU & (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wmask)) 
               | (0x40U & (IData)(vlSelf->Cache_top__DOT__io_mmio_req_bits_wmask)));
    }
    if ((0x80U & ((IData)(vlSelf->Cache_top__DOT__io_mmio_req_bits_wmask) 
                  ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wmask)))) {
        ++(vlSymsp->__Vcoverage[633]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wmask 
            = ((0x7fU & (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_wmask)) 
               | (0x80U & (IData)(vlSelf->Cache_top__DOT__io_mmio_req_bits_wmask)));
    }
    if ((1U & ((IData)(vlSelf->Cache_top__DOT__io_mmio_req_bits_cmd) 
               ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_cmd)))) {
        ++(vlSymsp->__Vcoverage[622]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_cmd 
            = ((0xeU & (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_cmd)) 
               | (1U & (IData)(vlSelf->Cache_top__DOT__io_mmio_req_bits_cmd)));
    }
    if ((2U & ((IData)(vlSelf->Cache_top__DOT__io_mmio_req_bits_cmd) 
               ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_cmd)))) {
        ++(vlSymsp->__Vcoverage[623]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_cmd 
            = ((0xdU & (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_cmd)) 
               | (2U & (IData)(vlSelf->Cache_top__DOT__io_mmio_req_bits_cmd)));
    }
    if ((4U & ((IData)(vlSelf->Cache_top__DOT__io_mmio_req_bits_cmd) 
               ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_cmd)))) {
        ++(vlSymsp->__Vcoverage[624]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_cmd 
            = ((0xbU & (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_cmd)) 
               | (4U & (IData)(vlSelf->Cache_top__DOT__io_mmio_req_bits_cmd)));
    }
    if ((8U & ((IData)(vlSelf->Cache_top__DOT__io_mmio_req_bits_cmd) 
               ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_cmd)))) {
        ++(vlSymsp->__Vcoverage[625]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_cmd 
            = ((7U & (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_cmd)) 
               | (8U & (IData)(vlSelf->Cache_top__DOT__io_mmio_req_bits_cmd)));
    }
    if (((IData)(vlSelf->Cache_top__DOT__io_mmio_req_valid) 
         ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_valid))) {
        ++(vlSymsp->__Vcoverage[586]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_valid 
            = vlSelf->Cache_top__DOT__io_mmio_req_valid;
    }
    vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT___T_26 
        = ((IData)(vlSelf->Cache_top__DOT__io_out_mem_req_ready) 
           & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_valid));
    if ((1U & ((IData)(vlSelf->Cache_top__DOT__io_in_resp_bits_cmd) 
               ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_cmd)))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_cmd 
            = ((0xeU & (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_cmd)) 
               | (1U & (IData)(vlSelf->Cache_top__DOT__io_in_resp_bits_cmd)));
    }
    if ((2U & ((IData)(vlSelf->Cache_top__DOT__io_in_resp_bits_cmd) 
               ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_cmd)))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_cmd 
            = ((0xdU & (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_cmd)) 
               | (2U & (IData)(vlSelf->Cache_top__DOT__io_in_resp_bits_cmd)));
    }
    if ((4U & ((IData)(vlSelf->Cache_top__DOT__io_in_resp_bits_cmd) 
               ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_cmd)))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_cmd 
            = ((0xbU & (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_cmd)) 
               | (4U & (IData)(vlSelf->Cache_top__DOT__io_in_resp_bits_cmd)));
    }
    if ((8U & ((IData)(vlSelf->Cache_top__DOT__io_in_resp_bits_cmd) 
               ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_cmd)))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_cmd 
            = ((7U & (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_cmd)) 
               | (8U & (IData)(vlSelf->Cache_top__DOT__io_in_resp_bits_cmd)));
    }
    if (((IData)(vlSelf->Cache_top__DOT__io_out_mem_req_valid) 
         ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_valid))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_valid 
            = vlSelf->Cache_top__DOT__io_out_mem_req_valid;
    }
    if ((1U & ((IData)(vlSelf->Cache_top__DOT__io_out_mem_req_bits_cmd) 
               ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_cmd)))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_cmd 
            = ((0xeU & (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_cmd)) 
               | (1U & (IData)(vlSelf->Cache_top__DOT__io_out_mem_req_bits_cmd)));
    }
    if ((2U & ((IData)(vlSelf->Cache_top__DOT__io_out_mem_req_bits_cmd) 
               ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_cmd)))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_cmd 
            = ((0xdU & (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_cmd)) 
               | (2U & (IData)(vlSelf->Cache_top__DOT__io_out_mem_req_bits_cmd)));
    }
    if ((4U & ((IData)(vlSelf->Cache_top__DOT__io_out_mem_req_bits_cmd) 
               ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_cmd)))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_cmd 
            = ((0xbU & (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_cmd)) 
               | (4U & (IData)(vlSelf->Cache_top__DOT__io_out_mem_req_bits_cmd)));
    }
    if ((8U & ((IData)(vlSelf->Cache_top__DOT__io_out_mem_req_bits_cmd) 
               ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_cmd)))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_cmd 
            = ((7U & (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_cmd)) 
               | (8U & (IData)(vlSelf->Cache_top__DOT__io_out_mem_req_bits_cmd)));
    }
    vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT___T_27 
        = ((IData)(vlSelf->Cache_top__DOT__io_out_coh_resp_ready) 
           & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_cohResp_valid));
    vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT___T_5 
        = ((IData)(vlSelf->Cache_top__DOT__io_in_resp_ready) 
           & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_valid));
    vlSelf->Cache_top__DOT__Cache__DOT__s3_io_dataReadRespToL1 
        = ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__hitReadBurst) 
           & (((0U == (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state)) 
               & (IData)(vlSelf->Cache_top__DOT__io_in_resp_ready)) 
              | (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT___io_cohResp_valid_T_4)));
    vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT___respToL1Last_T_6 
        = ((((0U == (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state)) 
             | (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT___io_cohResp_valid_T_4)) 
            & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__hitReadBurst)) 
           & (IData)(vlSelf->Cache_top__DOT__io_in_resp_ready));
    vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT___T_29 
        = ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__hitReadBurst) 
           & (IData)(vlSelf->Cache_top__DOT__io_in_resp_ready));
    vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_ready 
        = ((((IData)(vlSelf->Cache_top__DOT__io_in_resp_ready) 
             & ((0U == (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state)) 
                & (~ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__hitReadBurst)))) 
            & (~ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__miss))) 
           & (~ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__probe)));
    if (((IData)(vlSelf->Cache_top__DOT__victim_way_mask_valid) 
         ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__victim_way_mask_valid))) {
        ++(vlSymsp->__Vcoverage[769]);
        vlSelf->Cache_top__DOT____Vtogcov__victim_way_mask_valid 
            = vlSelf->Cache_top__DOT__victim_way_mask_valid;
    }
    if (((IData)(vlSelf->Cache_top__DOT__io_empty) 
         ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_empty))) {
        ++(vlSymsp->__Vcoverage[768]);
        vlSelf->Cache_top__DOT____Vtogcov__io_empty 
            = vlSelf->Cache_top__DOT__io_empty;
    }
    vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT___GEN_20 
        = ((((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__miss) 
             | (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__mmio)) 
            & (~ ((IData)(vlSelf->Cache_top__DOT__io_flush) 
                  >> 1U))) ? ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__mmio)
                               ? 5U : ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__meta_dirty)
                                        ? 3U : 1U))
            : (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state));
    if ((1U & (vlSelf->Cache_top__DOT__io_mmio_req_bits_addr 
               ^ vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[587]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr 
            = ((0xfffffffeU & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr) 
               | (1U & vlSelf->Cache_top__DOT__io_mmio_req_bits_addr));
    }
    if ((2U & (vlSelf->Cache_top__DOT__io_mmio_req_bits_addr 
               ^ vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[588]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr 
            = ((0xfffffffdU & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr) 
               | (2U & vlSelf->Cache_top__DOT__io_mmio_req_bits_addr));
    }
    if ((4U & (vlSelf->Cache_top__DOT__io_mmio_req_bits_addr 
               ^ vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[589]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr 
            = ((0xfffffffbU & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr) 
               | (4U & vlSelf->Cache_top__DOT__io_mmio_req_bits_addr));
    }
    if ((8U & (vlSelf->Cache_top__DOT__io_mmio_req_bits_addr 
               ^ vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[590]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr 
            = ((0xfffffff7U & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr) 
               | (8U & vlSelf->Cache_top__DOT__io_mmio_req_bits_addr));
    }
    if ((0x10U & (vlSelf->Cache_top__DOT__io_mmio_req_bits_addr 
                  ^ vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[591]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr 
            = ((0xffffffefU & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr) 
               | (0x10U & vlSelf->Cache_top__DOT__io_mmio_req_bits_addr));
    }
    if ((0x20U & (vlSelf->Cache_top__DOT__io_mmio_req_bits_addr 
                  ^ vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[592]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr 
            = ((0xffffffdfU & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr) 
               | (0x20U & vlSelf->Cache_top__DOT__io_mmio_req_bits_addr));
    }
    if ((0x40U & (vlSelf->Cache_top__DOT__io_mmio_req_bits_addr 
                  ^ vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[593]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr 
            = ((0xffffffbfU & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr) 
               | (0x40U & vlSelf->Cache_top__DOT__io_mmio_req_bits_addr));
    }
    if ((0x80U & (vlSelf->Cache_top__DOT__io_mmio_req_bits_addr 
                  ^ vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[594]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr 
            = ((0xffffff7fU & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr) 
               | (0x80U & vlSelf->Cache_top__DOT__io_mmio_req_bits_addr));
    }
    if ((0x100U & (vlSelf->Cache_top__DOT__io_mmio_req_bits_addr 
                   ^ vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[595]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr 
            = ((0xfffffeffU & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr) 
               | (0x100U & vlSelf->Cache_top__DOT__io_mmio_req_bits_addr));
    }
    if ((0x200U & (vlSelf->Cache_top__DOT__io_mmio_req_bits_addr 
                   ^ vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[596]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr 
            = ((0xfffffdffU & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr) 
               | (0x200U & vlSelf->Cache_top__DOT__io_mmio_req_bits_addr));
    }
    if ((0x400U & (vlSelf->Cache_top__DOT__io_mmio_req_bits_addr 
                   ^ vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[597]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr 
            = ((0xfffffbffU & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr) 
               | (0x400U & vlSelf->Cache_top__DOT__io_mmio_req_bits_addr));
    }
    if ((0x800U & (vlSelf->Cache_top__DOT__io_mmio_req_bits_addr 
                   ^ vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[598]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr 
            = ((0xfffff7ffU & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr) 
               | (0x800U & vlSelf->Cache_top__DOT__io_mmio_req_bits_addr));
    }
    if ((0x1000U & (vlSelf->Cache_top__DOT__io_mmio_req_bits_addr 
                    ^ vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[599]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr 
            = ((0xffffefffU & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr) 
               | (0x1000U & vlSelf->Cache_top__DOT__io_mmio_req_bits_addr));
    }
    if ((0x2000U & (vlSelf->Cache_top__DOT__io_mmio_req_bits_addr 
                    ^ vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[600]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr 
            = ((0xffffdfffU & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr) 
               | (0x2000U & vlSelf->Cache_top__DOT__io_mmio_req_bits_addr));
    }
    if ((0x4000U & (vlSelf->Cache_top__DOT__io_mmio_req_bits_addr 
                    ^ vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[601]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr 
            = ((0xffffbfffU & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr) 
               | (0x4000U & vlSelf->Cache_top__DOT__io_mmio_req_bits_addr));
    }
    if ((0x8000U & (vlSelf->Cache_top__DOT__io_mmio_req_bits_addr 
                    ^ vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[602]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr 
            = ((0xffff7fffU & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr) 
               | (0x8000U & vlSelf->Cache_top__DOT__io_mmio_req_bits_addr));
    }
    if ((0x10000U & (vlSelf->Cache_top__DOT__io_mmio_req_bits_addr 
                     ^ vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[603]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr 
            = ((0xfffeffffU & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr) 
               | (0x10000U & vlSelf->Cache_top__DOT__io_mmio_req_bits_addr));
    }
    if ((0x20000U & (vlSelf->Cache_top__DOT__io_mmio_req_bits_addr 
                     ^ vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[604]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr 
            = ((0xfffdffffU & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr) 
               | (0x20000U & vlSelf->Cache_top__DOT__io_mmio_req_bits_addr));
    }
    if ((0x40000U & (vlSelf->Cache_top__DOT__io_mmio_req_bits_addr 
                     ^ vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[605]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr 
            = ((0xfffbffffU & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr) 
               | (0x40000U & vlSelf->Cache_top__DOT__io_mmio_req_bits_addr));
    }
    if ((0x80000U & (vlSelf->Cache_top__DOT__io_mmio_req_bits_addr 
                     ^ vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[606]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr 
            = ((0xfff7ffffU & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr) 
               | (0x80000U & vlSelf->Cache_top__DOT__io_mmio_req_bits_addr));
    }
    if ((0x100000U & (vlSelf->Cache_top__DOT__io_mmio_req_bits_addr 
                      ^ vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[607]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr 
            = ((0xffefffffU & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr) 
               | (0x100000U & vlSelf->Cache_top__DOT__io_mmio_req_bits_addr));
    }
    if ((0x200000U & (vlSelf->Cache_top__DOT__io_mmio_req_bits_addr 
                      ^ vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[608]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr 
            = ((0xffdfffffU & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr) 
               | (0x200000U & vlSelf->Cache_top__DOT__io_mmio_req_bits_addr));
    }
    if ((0x400000U & (vlSelf->Cache_top__DOT__io_mmio_req_bits_addr 
                      ^ vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[609]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr 
            = ((0xffbfffffU & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr) 
               | (0x400000U & vlSelf->Cache_top__DOT__io_mmio_req_bits_addr));
    }
    if ((0x800000U & (vlSelf->Cache_top__DOT__io_mmio_req_bits_addr 
                      ^ vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[610]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr 
            = ((0xff7fffffU & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr) 
               | (0x800000U & vlSelf->Cache_top__DOT__io_mmio_req_bits_addr));
    }
    if ((0x1000000U & (vlSelf->Cache_top__DOT__io_mmio_req_bits_addr 
                       ^ vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[611]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr 
            = ((0xfeffffffU & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr) 
               | (0x1000000U & vlSelf->Cache_top__DOT__io_mmio_req_bits_addr));
    }
    if ((0x2000000U & (vlSelf->Cache_top__DOT__io_mmio_req_bits_addr 
                       ^ vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[612]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr 
            = ((0xfdffffffU & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr) 
               | (0x2000000U & vlSelf->Cache_top__DOT__io_mmio_req_bits_addr));
    }
    if ((0x4000000U & (vlSelf->Cache_top__DOT__io_mmio_req_bits_addr 
                       ^ vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[613]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr 
            = ((0xfbffffffU & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr) 
               | (0x4000000U & vlSelf->Cache_top__DOT__io_mmio_req_bits_addr));
    }
    if ((0x8000000U & (vlSelf->Cache_top__DOT__io_mmio_req_bits_addr 
                       ^ vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[614]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr 
            = ((0xf7ffffffU & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr) 
               | (0x8000000U & vlSelf->Cache_top__DOT__io_mmio_req_bits_addr));
    }
    if ((0x10000000U & (vlSelf->Cache_top__DOT__io_mmio_req_bits_addr 
                        ^ vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[615]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr 
            = ((0xefffffffU & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr) 
               | (0x10000000U & vlSelf->Cache_top__DOT__io_mmio_req_bits_addr));
    }
    if ((0x20000000U & (vlSelf->Cache_top__DOT__io_mmio_req_bits_addr 
                        ^ vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[616]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr 
            = ((0xdfffffffU & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr) 
               | (0x20000000U & vlSelf->Cache_top__DOT__io_mmio_req_bits_addr));
    }
    if ((0x40000000U & (vlSelf->Cache_top__DOT__io_mmio_req_bits_addr 
                        ^ vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[617]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr 
            = ((0xbfffffffU & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr) 
               | (0x40000000U & vlSelf->Cache_top__DOT__io_mmio_req_bits_addr));
    }
    if (((vlSelf->Cache_top__DOT__io_mmio_req_bits_addr 
          ^ vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[618]);
        vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr 
            = ((0x7fffffffU & vlSelf->Cache_top__DOT____Vtogcov__io_mmio_req_bits_addr) 
               | (0x80000000U & vlSelf->Cache_top__DOT__io_mmio_req_bits_addr));
    }
    if (((IData)(vlSelf->Cache_top__DOT__io_out_coh_resp_valid) 
         ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_valid))) {
        ++(vlSymsp->__Vcoverage[516]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_valid 
            = vlSelf->Cache_top__DOT__io_out_coh_resp_valid;
    }
    if ((1U & ((IData)(vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata) 
               ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata)))) {
        ++(vlSymsp->__Vcoverage[268]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xfffffffffffffffeULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | (IData)((IData)((1U & (IData)(vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata)))));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 1U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[269]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xfffffffffffffffdULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 2U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[270]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xfffffffffffffffbULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 3U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[271]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xfffffffffffffff7ULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 4U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[272]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xffffffffffffffefULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 5U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xffffffffffffffdfULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 6U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xffffffffffffffbfULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 7U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xffffffffffffff7fULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 8U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[276]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xfffffffffffffeffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 9U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xfffffffffffffdffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0xaU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[278]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xfffffffffffffbffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0xbU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[279]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xfffffffffffff7ffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0xcU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xffffffffffffefffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0xdU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xffffffffffffdfffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0xeU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xffffffffffffbfffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0xfU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[283]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xffffffffffff7fffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0x10U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xfffffffffffeffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0x11U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[285]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xfffffffffffdffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0x12U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[286]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xfffffffffffbffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0x13U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xfffffffffff7ffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0x14U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xffffffffffefffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0x15U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xffffffffffdfffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0x16U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xffffffffffbfffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0x17U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xffffffffff7fffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0x18U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xfffffffffeffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0x19U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xfffffffffdffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0x1aU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xfffffffffbffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0x1bU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xfffffffff7ffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0x1cU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xffffffffefffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0x1dU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[297]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xffffffffdfffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0x1eU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xffffffffbfffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0x1fU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xffffffff7fffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0x20U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xfffffffeffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0x21U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xfffffffdffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0x22U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xfffffffbffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0x23U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xfffffff7ffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0x24U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xffffffefffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0x25U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xffffffdfffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0x26U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[306]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xffffffbfffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0x27U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xffffff7fffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0x28U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xfffffeffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0x29U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xfffffdffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0x2aU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xfffffbffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0x2bU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[311]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xfffff7ffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0x2cU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xffffefffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0x2dU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xffffdfffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0x2eU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xffffbfffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0x2fU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xffff7fffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0x30U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xfffeffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0x31U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xfffdffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0x32U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[318]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xfffbffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0x33U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xfff7ffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0x34U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[320]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xffefffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0x35U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[321]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xffdfffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0x36U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xffbfffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0x37U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xff7fffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0x38U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xfeffffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0x39U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[325]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xfdffffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0x3aU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xfbffffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0x3bU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xf7ffffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0x3cU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xefffffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0x3dU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xdfffffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                        >> 0x3eU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0xbfffffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                  ^ vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata 
            = ((0x7fffffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata) 
               ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata)))) {
        ++(vlSymsp->__Vcoverage[521]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xfffffffffffffffeULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | (IData)((IData)((1U & (IData)(vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata)))));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 1U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[522]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xfffffffffffffffdULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 2U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[523]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xfffffffffffffffbULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 3U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[524]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xfffffffffffffff7ULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 4U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[525]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xffffffffffffffefULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 5U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[526]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xffffffffffffffdfULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 6U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[527]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xffffffffffffffbfULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 7U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[528]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xffffffffffffff7fULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 8U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[529]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xfffffffffffffeffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 9U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[530]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xfffffffffffffdffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0xaU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[531]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xfffffffffffffbffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0xbU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[532]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xfffffffffffff7ffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0xcU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[533]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xffffffffffffefffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0xdU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[534]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xffffffffffffdfffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0xeU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[535]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xffffffffffffbfffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0xfU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[536]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xffffffffffff7fffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0x10U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[537]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xfffffffffffeffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0x11U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[538]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xfffffffffffdffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0x12U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[539]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xfffffffffffbffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0x13U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[540]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xfffffffffff7ffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0x14U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[541]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xffffffffffefffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0x15U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[542]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xffffffffffdfffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0x16U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[543]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xffffffffffbfffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0x17U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[544]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xffffffffff7fffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0x18U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[545]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xfffffffffeffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0x19U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[546]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xfffffffffdffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0x1aU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[547]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xfffffffffbffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0x1bU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[548]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xfffffffff7ffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0x1cU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[549]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xffffffffefffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0x1dU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[550]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xffffffffdfffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0x1eU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[551]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xffffffffbfffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0x1fU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[552]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xffffffff7fffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0x20U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[553]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xfffffffeffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0x21U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[554]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xfffffffdffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0x22U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[555]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xfffffffbffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0x23U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[556]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xfffffff7ffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0x24U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[557]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xffffffefffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0x25U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[558]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xffffffdfffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0x26U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[559]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xffffffbfffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0x27U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[560]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xffffff7fffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0x28U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[561]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xfffffeffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0x29U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[562]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xfffffdffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0x2aU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[563]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xfffffbffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0x2bU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[564]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xfffff7ffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0x2cU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[565]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xffffefffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0x2dU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[566]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xffffdfffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0x2eU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[567]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xffffbfffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0x2fU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[568]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xffff7fffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0x30U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[569]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xfffeffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0x31U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[570]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xfffdffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0x32U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[571]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xfffbffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0x33U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[572]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xfff7ffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0x34U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[573]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xffefffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0x35U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[574]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xffdfffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0x36U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[575]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xffbfffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0x37U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[576]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xff7fffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0x38U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[577]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xfeffffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0x39U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[578]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xfdffffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0x3aU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[579]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xfbffffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0x3bU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[580]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xf7ffffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0x3cU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[581]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xefffffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0x3dU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[582]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xdfffffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                        >> 0x3eU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[583]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0xbfffffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                  ^ vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[584]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata 
            = ((0x7fffffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->Cache_top__DOT__io_in_resp_bits_rdata) 
               ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata)))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xfffffffffffffffeULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | (IData)((IData)((1U & (IData)(vlSelf->Cache_top__DOT__io_in_resp_bits_rdata)))));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 1U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xfffffffffffffffdULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 2U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xfffffffffffffffbULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 3U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xfffffffffffffff7ULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 4U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xffffffffffffffefULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 5U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xffffffffffffffdfULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 6U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xffffffffffffffbfULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 7U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xffffffffffffff7fULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 8U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xfffffffffffffeffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 9U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xfffffffffffffdffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0xaU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xfffffffffffffbffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0xbU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xfffffffffffff7ffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0xcU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xffffffffffffefffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0xdU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xffffffffffffdfffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0xeU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xffffffffffffbfffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0xfU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xffffffffffff7fffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0x10U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xfffffffffffeffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0x11U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xfffffffffffdffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0x12U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xfffffffffffbffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0x13U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xfffffffffff7ffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0x14U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xffffffffffefffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0x15U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xffffffffffdfffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0x16U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xffffffffffbfffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0x17U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xffffffffff7fffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0x18U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xfffffffffeffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0x19U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xfffffffffdffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0x1aU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xfffffffffbffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0x1bU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xfffffffff7ffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0x1cU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xffffffffefffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0x1dU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xffffffffdfffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0x1eU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xffffffffbfffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0x1fU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xffffffff7fffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0x20U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xfffffffeffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0x21U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xfffffffdffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0x22U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xfffffffbffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0x23U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xfffffff7ffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0x24U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xffffffefffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0x25U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xffffffdfffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0x26U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xffffffbfffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0x27U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xffffff7fffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0x28U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xfffffeffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0x29U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xfffffdffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0x2aU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xfffffbffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0x2bU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xfffff7ffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0x2cU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xffffefffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0x2dU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xffffdfffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0x2eU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xffffbfffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0x2fU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xffff7fffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0x30U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xfffeffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0x31U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xfffdffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0x32U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xfffbffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0x33U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xfff7ffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0x34U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xffefffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0x35U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xffdfffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0x36U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xffbfffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0x37U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xff7fffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0x38U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xfeffffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0x39U)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xfdffffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0x3aU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xfbffffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0x3bU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xf7ffffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0x3cU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xefffffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0x3dU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xdfffffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                        >> 0x3eU)) ^ (IData)((vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0xbfffffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                  ^ vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata 
            = ((0x7fffffffffffffffULL & vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__io_in_resp_bits_rdata 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & (vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr 
               ^ vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr 
            = ((0xfffffffeU & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr) 
               | (1U & vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr));
    }
    if ((2U & (vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr 
               ^ vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr 
            = ((0xfffffffdU & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr) 
               | (2U & vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr));
    }
    if ((4U & (vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr 
               ^ vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr 
            = ((0xfffffffbU & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr) 
               | (4U & vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr));
    }
    if ((8U & (vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr 
               ^ vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr 
            = ((0xfffffff7U & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr) 
               | (8U & vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr));
    }
    if ((0x10U & (vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr 
                  ^ vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr 
            = ((0xffffffefU & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr) 
               | (0x10U & vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr));
    }
    if ((0x20U & (vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr 
                  ^ vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr 
            = ((0xffffffdfU & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr) 
               | (0x20U & vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr));
    }
    if ((0x40U & (vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr 
                  ^ vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr 
            = ((0xffffffbfU & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr) 
               | (0x40U & vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr));
    }
    if ((0x80U & (vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr 
                  ^ vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr 
            = ((0xffffff7fU & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr) 
               | (0x80U & vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr));
    }
    if ((0x100U & (vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr 
                   ^ vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr 
            = ((0xfffffeffU & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr) 
               | (0x100U & vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr));
    }
    if ((0x200U & (vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr 
                   ^ vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr 
            = ((0xfffffdffU & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr) 
               | (0x200U & vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr));
    }
    if ((0x400U & (vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr 
                   ^ vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr 
            = ((0xfffffbffU & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr) 
               | (0x400U & vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr));
    }
    if ((0x800U & (vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr 
                   ^ vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr 
            = ((0xfffff7ffU & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr) 
               | (0x800U & vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr));
    }
    if ((0x1000U & (vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr 
                    ^ vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr 
            = ((0xffffefffU & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr) 
               | (0x1000U & vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr));
    }
    if ((0x2000U & (vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr 
                    ^ vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr 
            = ((0xffffdfffU & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr) 
               | (0x2000U & vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr));
    }
    if ((0x4000U & (vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr 
                    ^ vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr 
            = ((0xffffbfffU & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr) 
               | (0x4000U & vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr));
    }
    if ((0x8000U & (vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr 
                    ^ vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr 
            = ((0xffff7fffU & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr) 
               | (0x8000U & vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr));
    }
    if ((0x10000U & (vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr 
                     ^ vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr 
            = ((0xfffeffffU & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr) 
               | (0x10000U & vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr));
    }
    if ((0x20000U & (vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr 
                     ^ vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr 
            = ((0xfffdffffU & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr) 
               | (0x20000U & vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr));
    }
    if ((0x40000U & (vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr 
                     ^ vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr 
            = ((0xfffbffffU & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr) 
               | (0x40000U & vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr));
    }
    if ((0x80000U & (vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr 
                     ^ vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr 
            = ((0xfff7ffffU & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr) 
               | (0x80000U & vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr));
    }
    if ((0x100000U & (vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr 
                      ^ vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr 
            = ((0xffefffffU & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr) 
               | (0x100000U & vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr));
    }
    if ((0x200000U & (vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr 
                      ^ vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr 
            = ((0xffdfffffU & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr) 
               | (0x200000U & vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr));
    }
    if ((0x400000U & (vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr 
                      ^ vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr 
            = ((0xffbfffffU & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr) 
               | (0x400000U & vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr));
    }
    if ((0x800000U & (vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr 
                      ^ vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr 
            = ((0xff7fffffU & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr) 
               | (0x800000U & vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr));
    }
    if ((0x1000000U & (vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr 
                       ^ vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr 
            = ((0xfeffffffU & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr) 
               | (0x1000000U & vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr));
    }
    if ((0x2000000U & (vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr 
                       ^ vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr 
            = ((0xfdffffffU & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr) 
               | (0x2000000U & vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr));
    }
    if ((0x4000000U & (vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr 
                       ^ vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr 
            = ((0xfbffffffU & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr) 
               | (0x4000000U & vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr));
    }
    if ((0x8000000U & (vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr 
                       ^ vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr 
            = ((0xf7ffffffU & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr) 
               | (0x8000000U & vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr));
    }
    if ((0x10000000U & (vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr 
                        ^ vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr 
            = ((0xefffffffU & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr) 
               | (0x10000000U & vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr));
    }
    if ((0x20000000U & (vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr 
                        ^ vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr 
            = ((0xdfffffffU & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr) 
               | (0x20000000U & vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr));
    }
    if ((0x40000000U & (vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr 
                        ^ vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr 
            = ((0xbfffffffU & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr) 
               | (0x40000000U & vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr));
    }
    if (((vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr 
          ^ vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr 
            = ((0x7fffffffU & vlSelf->Cache_top__DOT____Vtogcov__io_out_mem_req_bits_addr) 
               | (0x80000000U & vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr));
    }
    if (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_valid) 
         ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_valid))) {
        ++(vlSymsp->__Vcoverage[3250]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_valid 
            = vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_valid;
    }
    vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_valid 
        = ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_valid) 
           | (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_valid));
    if (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__readingFirst) 
         ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__readingFirst))) {
        ++(vlSymsp->__Vcoverage[3790]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__readingFirst 
            = vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__readingFirst;
    }
    Cache_top__DOT__Cache__DOT__s3__DOT___dataRefill_T 
        = ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__readingFirst)
            ? vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__wordMask
            : 0ULL);
    if (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataRefillWriteBus_x9) 
         ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataRefillWriteBus_x9))) {
        ++(vlSymsp->__Vcoverage[3866]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataRefillWriteBus_x9 
            = vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataRefillWriteBus_x9;
    }
    if ((((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataRefillWriteBus_x9) 
          & (6U == (IData)(vlSelf->Cache_top__DOT__io_out_mem_resp_bits_cmd))) 
         ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__metaRefillWriteBus_req_valid))) {
        ++(vlSymsp->__Vcoverage[3867]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__metaRefillWriteBus_req_valid 
            = ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataRefillWriteBus_x9) 
               & (6U == (IData)(vlSelf->Cache_top__DOT__io_out_mem_resp_bits_cmd)));
    }
    vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_in_1_valid 
        = ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataRefillWriteBus_x9) 
           & (6U == (IData)(vlSelf->Cache_top__DOT__io_out_mem_resp_bits_cmd)));
    vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT___GEN_59 
        = (7U & ((8U == (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state))
                  ? (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__writeBeatCnt_value)
                  : ((1U == (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state))
                      ? (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__writeBeatCnt_value)
                      : ((2U == (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state))
                          ? (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__writeBeatCnt_value)
                          : ((3U == (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state))
                              ? ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT___T_26)
                                  ? ((IData)(1U) + (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__writeBeatCnt_value))
                                  : (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__writeBeatCnt_value))
                              : (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__writeBeatCnt_value))))));
    vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT___GEN_8 
        = ((((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT___T_26) 
             | (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT___T_27)) 
            | ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__hitReadBurst) 
               & (IData)(vlSelf->Cache_top__DOT__io_in_resp_ready)))
            ? 0U : (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state2));
    vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT___releaseLast_T_2 
        = ((8U == (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state)) 
           & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT___T_27));
    vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT___GEN_0 
        = (7U & (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT___T_5) 
                  & ((3U == (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_bits_r_req_cmd)) 
                     | (7U == (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_bits_r_req_cmd))))
                  ? ((IData)(1U) + (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__writeL2BeatCnt_value))
                  : (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__writeL2BeatCnt_value)));
    vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT___GEN_12 
        = ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT___T_5) 
           | (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__alreadyOutFire));
    if (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_dataReadRespToL1) 
         ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_dataReadRespToL1))) {
        ++(vlSymsp->__Vcoverage[2792]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_dataReadRespToL1 
            = vlSelf->Cache_top__DOT__Cache__DOT__s3_io_dataReadRespToL1;
    }
    vlSelf->Cache_top__DOT__io_in_resp_valid = ((~ 
                                                 ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_valid) 
                                                  & (4U 
                                                     == (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT___io_out_bits_cmd_T_7)))) 
                                                & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_valid) 
                                                   | (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_dataReadRespToL1)));
    vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__respToL1Last 
        = ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT___respToL1Last_T_6) 
           & (7U == (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__respToL1Last_c_value)));
    vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__respToL1Fire 
        = ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT___T_29) 
           & (2U == (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state2)));
    if (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_ready) 
         ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_ready))) {
        ++(vlSymsp->__Vcoverage[1484]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_ready 
            = vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_ready;
    }
    vlSelf->Cache_top__DOT__Cache__DOT___T_4 = ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__valid) 
                                                & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_ready));
    vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_ready 
        = (1U & ((~ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__valid)) 
                 | ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_ready) 
                    & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__valid))));
    if ((1U ^ ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_valid) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_dataReadBus_req_ready)))) {
        ++(vlSymsp->__Vcoverage[1098]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_dataReadBus_req_ready 
            = (1U & (~ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_valid)));
    }
    if (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_valid) 
         ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_valid))) {
        ++(vlSymsp->__Vcoverage[1672]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_valid 
            = vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_valid;
    }
    vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__isForwardData 
        = ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__valid) 
           & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_valid) 
              & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_setIdx) 
                 == (0x3ffU & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_bits_r_req_addr 
                               >> 3U)))));
    vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
        = ((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_bits_r_req_wdata 
            & Cache_top__DOT__Cache__DOT__s3__DOT___dataRefill_T) 
           | (vlSelf->Cache_top__DOT__io_out_mem_resp_bits_rdata 
              & (~ Cache_top__DOT__Cache__DOT__s3__DOT___dataRefill_T)));
    if (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_in_1_valid) 
         ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__metaWriteArb_io_in_1_valid))) {
        ++(vlSymsp->__Vcoverage[3173]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__metaWriteArb_io_in_1_valid 
            = vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_in_1_valid;
    }
    vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_valid 
        = ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_in_0_valid) 
           | (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_in_1_valid));
    vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__releaseLast 
        = ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT___releaseLast_T_2) 
           & (7U == (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__releaseLast_c_value)));
    vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT___GEN_58 
        = ((8U == (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state))
            ? (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT___GEN_0)
            : ((1U == (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state))
                ? (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT___GEN_0)
                : ((2U == (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state))
                    ? ((IData)(vlSelf->Cache_top__DOT__io_out_mem_resp_valid)
                        ? ((3U == (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_bits_r_req_cmd))
                            ? 0U : (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT___GEN_0))
                        : (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT___GEN_0))
                    : (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT___GEN_0))));
    if (((IData)(vlSelf->Cache_top__DOT__io_in_resp_valid) 
         ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_valid))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_resp_valid 
            = vlSelf->Cache_top__DOT__io_in_resp_valid;
    }
    if (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__respToL1Last) 
         ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__respToL1Last))) {
        ++(vlSymsp->__Vcoverage[3865]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__respToL1Last 
            = vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__respToL1Last;
    }
    if (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__respToL1Fire) 
         ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__respToL1Fire))) {
        ++(vlSymsp->__Vcoverage[3860]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__respToL1Fire 
            = vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__respToL1Fire;
    }
    vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT___GEN_55 
        = (7U & ((8U == (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state))
                  ? (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT___T_27) 
                      | (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__respToL1Fire))
                      ? ((IData)(1U) + (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__readBeatCnt_value))
                      : (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__readBeatCnt_value))
                  : ((1U == (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state))
                      ? ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT___T_26)
                          ? (vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_bits_r_req_addr 
                             >> 3U) : (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__readBeatCnt_value))
                      : ((2U == (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state))
                          ? ((IData)(vlSelf->Cache_top__DOT__io_out_mem_resp_valid)
                              ? ((IData)(1U) + (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__readBeatCnt_value))
                              : (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__readBeatCnt_value))
                          : (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__readBeatCnt_value)))));
    if (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_ready) 
         ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_out_ready))) {
        ++(vlSymsp->__Vcoverage[1010]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_out_ready 
            = vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_ready;
    }
    vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT___T 
        = ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_ready) 
           & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__valid));
    vlSelf->Cache_top__DOT__Cache__DOT__s1_io_metaReadBus_req_valid 
        = ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_valid) 
           & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_ready));
    vlSelf->Cache_top__DOT__Cache__DOT__s1_io_dataReadBus_req_valid 
        = ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_valid) 
           & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_ready));
    if (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__isForwardData) 
         ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__isForwardData))) {
        ++(vlSymsp->__Vcoverage[3059]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__isForwardData 
            = vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__isForwardData;
    }
    vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT___GEN_8 
        = ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__isForwardData) 
           | (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__isForwardDataReg));
    vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_isForwardData 
        = ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__isForwardDataReg) 
           | (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__isForwardData));
    vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_waymask 
        = ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__isForwardData)
            ? (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_bits_r_waymask)
            : (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__forwardDataReg_waymask));
    if ((1U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data)))) {
        ++(vlSymsp->__Vcoverage[3261]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xfffffffffffffffeULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | (IData)((IData)((1U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data)))));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 1U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3262]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xfffffffffffffffdULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 2U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3263]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xfffffffffffffffbULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 3U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3264]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xfffffffffffffff7ULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 4U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3265]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xffffffffffffffefULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 5U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3266]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xffffffffffffffdfULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 6U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3267]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xffffffffffffffbfULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 7U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3268]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xffffffffffffff7fULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 8U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3269]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xfffffffffffffeffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 9U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3270]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xfffffffffffffdffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0xaU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3271]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xfffffffffffffbffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0xbU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3272]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xfffffffffffff7ffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0xcU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3273]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xffffffffffffefffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0xdU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3274]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xffffffffffffdfffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0xeU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3275]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xffffffffffffbfffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0xfU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3276]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xffffffffffff7fffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0x10U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3277]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xfffffffffffeffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0x11U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3278]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xfffffffffffdffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0x12U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3279]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xfffffffffffbffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0x13U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3280]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xfffffffffff7ffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0x14U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3281]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xffffffffffefffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0x15U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3282]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xffffffffffdfffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0x16U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3283]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xffffffffffbfffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0x17U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3284]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xffffffffff7fffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0x18U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3285]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xfffffffffeffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0x19U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3286]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xfffffffffdffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0x1aU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3287]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xfffffffffbffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0x1bU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3288]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xfffffffff7ffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0x1cU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3289]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xffffffffefffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0x1dU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3290]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xffffffffdfffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0x1eU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3291]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xffffffffbfffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0x1fU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3292]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xffffffff7fffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0x20U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3293]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xfffffffeffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0x21U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3294]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xfffffffdffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0x22U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3295]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xfffffffbffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0x23U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3296]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xfffffff7ffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0x24U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3297]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xffffffefffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0x25U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3298]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xffffffdfffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0x26U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3299]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xffffffbfffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0x27U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3300]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xffffff7fffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0x28U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3301]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xfffffeffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0x29U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3302]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xfffffdffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0x2aU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3303]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xfffffbffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0x2bU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3304]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xfffff7ffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0x2cU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3305]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xffffefffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0x2dU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3306]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xffffdfffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0x2eU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3307]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xffffbfffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0x2fU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3308]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xffff7fffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0x30U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3309]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xfffeffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0x31U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3310]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xfffdffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0x32U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3311]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xfffbffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0x33U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3312]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xfff7ffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0x34U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3313]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xffefffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0x35U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3314]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xffdfffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0x36U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3315]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xffbfffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0x37U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3316]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xff7fffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0x38U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3317]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xfeffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0x39U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3318]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xfdffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0x3aU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3319]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xfbffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0x3bU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3320]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xf7ffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0x3cU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3321]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xefffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0x3dU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3322]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xdfffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                        >> 0x3eU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3323]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0xbfffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[3324]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data 
            = ((0x7fffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__dataWriteArb_io_in_1_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
        = ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_valid)
            ? vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data
            : vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data);
    if (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_valid) 
         ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_valid))) {
        ++(vlSymsp->__Vcoverage[1640]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_metaWriteBus_req_valid 
            = vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_valid;
    }
    vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_en 
        = ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_valid) 
           | (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__resetState));
    vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_en 
        = ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_valid) 
           | (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__resetState));
    vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_en 
        = ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_valid) 
           | (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__resetState));
    vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_en 
        = ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_valid) 
           | (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__resetState));
    vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__wen 
        = ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_valid) 
           | (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__resetState));
    vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__isForwardMeta 
        = (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__valid) 
            & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_valid)) 
           & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_setIdx) 
              == (0x7fU & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_bits_r_req_addr 
                           >> 6U))));
    if (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__releaseLast) 
         ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__releaseLast))) {
        ++(vlSymsp->__Vcoverage[3859]);
        vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT____Vtogcov__releaseLast 
            = vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__releaseLast;
    }
    vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT___GEN_56 
        = ((8U == (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state))
            ? (((((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__probe) 
                  & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT___T_27)) 
                 & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__releaseLast)) 
                | ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__respToL1Fire) 
                   & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__respToL1Last)))
                ? 0U : (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state))
            : ((1U == (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state))
                ? ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT___T_26)
                    ? 2U : (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state))
                : ((2U == (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state))
                    ? ((IData)(vlSelf->Cache_top__DOT__io_out_mem_resp_valid)
                        ? ((6U == (IData)(vlSelf->Cache_top__DOT__io_out_mem_resp_bits_cmd))
                            ? 7U : (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state))
                        : (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state))
                    : ((3U == (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state))
                        ? (((7U == (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__cmd)) 
                            & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT___T_26))
                            ? 4U : (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state))
                        : ((4U == (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state))
                            ? ((IData)(vlSelf->Cache_top__DOT__io_out_mem_resp_valid)
                                ? 1U : (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state))
                            : ((7U == (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state))
                                ? ((((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT___T_5) 
                                     | (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__needFlush)) 
                                    | (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__alreadyOutFire))
                                    ? 0U : (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state))
                                : (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state)))))));
    vlSelf->Cache_top__DOT__Cache__DOT__s3_io_isFinish 
        = ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__probe)
            ? ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT___T_27) 
               & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__miss)
                   ? (0U == (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state))
                   : ((8U == (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state)) 
                      & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__releaseLast))))
            : ((1U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__hit) 
                      | (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_bits_r_req_cmd)))
                ? (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT___T_5)
                : ((7U == (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state)) 
                   & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT___GEN_12))));
    vlSelf->Cache_top__DOT__Cache__DOT__s3_io_cohResp_bits_cmd 
        = ((8U == (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state))
            ? ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__releaseLast)
                ? 6U : 0U) : ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__hit)
                               ? 0xcU : 8U));
    if (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s1_io_metaReadBus_req_valid) 
         ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_metaReadBus_req_valid))) {
        ++(vlSymsp->__Vcoverage[1013]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_metaReadBus_req_valid 
            = vlSelf->Cache_top__DOT__Cache__DOT__s1_io_metaReadBus_req_valid;
    }
    if (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s1_io_dataReadBus_req_valid) 
         ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_dataReadBus_req_valid))) {
        ++(vlSymsp->__Vcoverage[1099]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_dataReadBus_req_valid 
            = vlSelf->Cache_top__DOT__Cache__DOT__s1_io_dataReadBus_req_valid;
    }
    if ((1U ^ ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s1_io_dataReadBus_req_valid) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__readArb__DOT____Vtogcov__grant_1)))) {
        ++(vlSymsp->__Vcoverage[5232]);
        vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__readArb__DOT____Vtogcov__grant_1 
            = (1U & (~ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s1_io_dataReadBus_req_valid)));
    }
    vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__readArb_io_in_1_ready 
        = (1U & ((~ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s1_io_dataReadBus_req_valid)) 
                 & (~ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_valid))));
    vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__readArb_io_out_valid 
        = ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s1_io_dataReadBus_req_valid) 
           | (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_dataReadBus_req_valid));
    if (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_isForwardData) 
         ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_isForwardData))) {
        ++(vlSymsp->__Vcoverage[1571]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_isForwardData 
            = vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_isForwardData;
    }
    if ((1U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_waymask) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_waymask)))) {
        ++(vlSymsp->__Vcoverage[1636]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_waymask 
            = ((0xeU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_waymask)) 
               | (1U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_waymask)));
    }
    if ((2U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_waymask) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_waymask)))) {
        ++(vlSymsp->__Vcoverage[1637]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_waymask 
            = ((0xdU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_waymask)) 
               | (2U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_waymask)));
    }
    if ((4U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_waymask) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_waymask)))) {
        ++(vlSymsp->__Vcoverage[1638]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_waymask 
            = ((0xbU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_waymask)) 
               | (4U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_waymask)));
    }
    if ((8U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_waymask) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_waymask)))) {
        ++(vlSymsp->__Vcoverage[1639]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_waymask 
            = ((7U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_waymask)) 
               | (8U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_waymask)));
    }
    if ((1U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data)))) {
        ++(vlSymsp->__Vcoverage[1683]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xfffffffffffffffeULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | (IData)((IData)((1U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data)))));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 1U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1684]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xfffffffffffffffdULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 2U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1685]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xfffffffffffffffbULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 3U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1686]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xfffffffffffffff7ULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 4U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1687]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xffffffffffffffefULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 5U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1688]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xffffffffffffffdfULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 6U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1689]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xffffffffffffffbfULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 7U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1690]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xffffffffffffff7fULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 8U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1691]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xfffffffffffffeffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 9U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1692]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xfffffffffffffdffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0xaU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1693]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xfffffffffffffbffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0xbU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1694]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xfffffffffffff7ffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0xcU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1695]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xffffffffffffefffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0xdU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1696]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xffffffffffffdfffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0xeU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1697]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xffffffffffffbfffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0xfU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1698]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xffffffffffff7fffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0x10U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1699]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xfffffffffffeffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0x11U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1700]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xfffffffffffdffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0x12U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1701]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xfffffffffffbffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0x13U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1702]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xfffffffffff7ffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0x14U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1703]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xffffffffffefffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0x15U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1704]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xffffffffffdfffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0x16U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1705]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xffffffffffbfffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0x17U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1706]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xffffffffff7fffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0x18U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1707]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xfffffffffeffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0x19U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1708]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xfffffffffdffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0x1aU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1709]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xfffffffffbffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0x1bU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1710]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xfffffffff7ffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0x1cU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1711]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xffffffffefffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0x1dU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1712]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xffffffffdfffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0x1eU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1713]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xffffffffbfffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0x1fU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1714]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xffffffff7fffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0x20U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1715]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xfffffffeffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0x21U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1716]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xfffffffdffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0x22U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1717]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xfffffffbffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0x23U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1718]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xfffffff7ffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0x24U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1719]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xffffffefffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0x25U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1720]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xffffffdfffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0x26U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1721]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xffffffbfffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0x27U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1722]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xffffff7fffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0x28U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1723]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xfffffeffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0x29U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1724]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xfffffdffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0x2aU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1725]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xfffffbffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0x2bU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1726]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xfffff7ffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0x2cU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1727]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xffffefffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0x2dU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1728]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xffffdfffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0x2eU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1729]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xffffbfffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0x2fU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1730]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xffff7fffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0x30U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1731]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xfffeffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0x31U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1732]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xfffdffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0x32U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1733]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xfffbffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0x33U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1734]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xfff7ffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0x34U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1735]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xffefffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0x35U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1736]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xffdfffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0x36U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1737]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xffbfffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0x37U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1738]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xff7fffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0x38U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1739]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xfeffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0x39U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1740]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xfdffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0x3aU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1741]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xfbffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0x3bU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1742]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xf7ffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0x3cU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1743]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xefffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0x3dU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1744]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xdfffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                        >> 0x3eU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1745]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0xbfffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[1746]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data 
            = ((0x7fffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_dataWriteBus_req_bits_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
        = ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__isForwardData)
            ? vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data
            : vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__forwardDataReg_data_data);
    if (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_en) 
         ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_en))) {
        ++(vlSymsp->__Vcoverage[4202]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_0_MPORT_en 
            = vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_en;
    }
    if (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_en) 
         ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_en))) {
        ++(vlSymsp->__Vcoverage[4242]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_1_MPORT_en 
            = vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_en;
    }
    if (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_en) 
         ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_en))) {
        ++(vlSymsp->__Vcoverage[4282]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_2_MPORT_en 
            = vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_en;
    }
    if (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_en) 
         ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_en))) {
        ++(vlSymsp->__Vcoverage[4322]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__array_3_MPORT_en 
            = vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_en;
    }
    if (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__wen) 
         ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__wen))) {
        ++(vlSymsp->__Vcoverage[4333]);
        vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT____Vtogcov__wen 
            = vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__wen;
    }
    vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram_io_r_req_ready 
        = (1U & ((~ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__resetState)) 
                 & (~ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__wen))));
    if (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__isForwardMeta) 
         ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__isForwardMeta))) {
        ++(vlSymsp->__Vcoverage[2862]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__isForwardMeta 
            = vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__isForwardMeta;
    }
    vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT___GEN_0 
        = ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__isForwardMeta) 
           | (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__isForwardMetaReg));
    if (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__isForwardMeta) {
        Cache_top__DOT__Cache__DOT__s2__DOT___GEN_5 
            = vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_data_dirty;
        Cache_top__DOT__Cache__DOT__s2__DOT___GEN_3 
            = vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_data_tag;
    } else {
        Cache_top__DOT__Cache__DOT__s2__DOT___GEN_5 
            = vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__forwardMetaReg_data_dirty;
        Cache_top__DOT__Cache__DOT__s2__DOT___GEN_3 
            = vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__forwardMetaReg_data_tag;
    }
    vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__pickForwardMeta 
        = ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__isForwardMetaReg) 
           | (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__isForwardMeta));
    vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT___GEN_6 
        = ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__isForwardMeta)
            ? (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_bits_r_waymask)
            : (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__forwardMetaReg_waymask));
    if (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_isFinish) 
         ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_isFinish))) {
        ++(vlSymsp->__Vcoverage[2351]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_isFinish 
            = vlSelf->Cache_top__DOT__Cache__DOT__s3_io_isFinish;
    }
    vlSelf->Cache_top__DOT__Cache__DOT___GEN_10 = (
                                                   ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__valid) 
                                                    & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_ready)) 
                                                   | ((~ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_isFinish)) 
                                                      & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__valid_1)));
    if ((1U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_cohResp_bits_cmd) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_cohResp_bits_cmd)))) {
        ++(vlSymsp->__Vcoverage[2724]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_cohResp_bits_cmd 
            = ((0xeU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_cohResp_bits_cmd)) 
               | (1U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_cohResp_bits_cmd)));
    }
    if ((2U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_cohResp_bits_cmd) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_cohResp_bits_cmd)))) {
        ++(vlSymsp->__Vcoverage[2725]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_cohResp_bits_cmd 
            = ((0xdU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_cohResp_bits_cmd)) 
               | (2U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_cohResp_bits_cmd)));
    }
    if ((4U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_cohResp_bits_cmd) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_cohResp_bits_cmd)))) {
        ++(vlSymsp->__Vcoverage[2726]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_cohResp_bits_cmd 
            = ((0xbU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_cohResp_bits_cmd)) 
               | (4U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_cohResp_bits_cmd)));
    }
    if ((8U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_cohResp_bits_cmd) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_cohResp_bits_cmd)))) {
        ++(vlSymsp->__Vcoverage[2727]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_cohResp_bits_cmd 
            = ((7U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_cohResp_bits_cmd)) 
               | (8U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_cohResp_bits_cmd)));
    }
    vlSelf->Cache_top__DOT__io_out_coh_resp_bits_cmd 
        = vlSelf->Cache_top__DOT__Cache__DOT__s3_io_cohResp_bits_cmd;
    if (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__readArb_io_in_1_ready) 
         ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_dataReadBus_req_ready))) {
        ++(vlSymsp->__Vcoverage[2353]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s3_io_dataReadBus_req_ready 
            = vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__readArb_io_in_1_ready;
    }
    if (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__readArb_io_out_valid) 
         ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT____Vtogcov__ram_io_r_req_valid))) {
        ++(vlSymsp->__Vcoverage[4359]);
        vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT____Vtogcov__ram_io_r_req_valid 
            = vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__readArb_io_out_valid;
    }
    if ((1U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data)))) {
        ++(vlSymsp->__Vcoverage[1572]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xfffffffffffffffeULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | (IData)((IData)((1U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data)))));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 1U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1573]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xfffffffffffffffdULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 2U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1574]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xfffffffffffffffbULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 3U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1575]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xfffffffffffffff7ULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 4U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1576]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xffffffffffffffefULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 5U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1577]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xffffffffffffffdfULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 6U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1578]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xffffffffffffffbfULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 7U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1579]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xffffffffffffff7fULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 8U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1580]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xfffffffffffffeffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 9U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1581]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xfffffffffffffdffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0xaU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1582]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xfffffffffffffbffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0xbU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1583]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xfffffffffffff7ffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0xcU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1584]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xffffffffffffefffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0xdU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1585]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xffffffffffffdfffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0xeU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1586]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xffffffffffffbfffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0xfU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1587]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xffffffffffff7fffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0x10U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1588]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xfffffffffffeffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0x11U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1589]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xfffffffffffdffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0x12U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1590]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xfffffffffffbffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0x13U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1591]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xfffffffffff7ffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0x14U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1592]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xffffffffffefffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0x15U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1593]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xffffffffffdfffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0x16U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1594]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xffffffffffbfffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0x17U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1595]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xffffffffff7fffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0x18U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1596]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xfffffffffeffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0x19U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1597]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xfffffffffdffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0x1aU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1598]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xfffffffffbffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0x1bU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1599]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xfffffffff7ffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0x1cU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1600]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xffffffffefffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0x1dU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1601]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xffffffffdfffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0x1eU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1602]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xffffffffbfffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0x1fU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1603]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xffffffff7fffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0x20U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1604]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xfffffffeffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0x21U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1605]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xfffffffdffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0x22U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1606]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xfffffffbffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0x23U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1607]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xfffffff7ffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0x24U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1608]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xffffffefffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0x25U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1609]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xffffffdfffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0x26U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1610]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xffffffbfffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0x27U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1611]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xffffff7fffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0x28U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1612]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xfffffeffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0x29U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1613]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xfffffdffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0x2aU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1614]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xfffffbffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0x2bU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1615]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xfffff7ffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0x2cU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1616]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xffffefffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0x2dU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1617]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xffffdfffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0x2eU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1618]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xffffbfffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0x2fU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1619]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xffff7fffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0x30U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1620]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xfffeffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0x31U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1621]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xfffdffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0x32U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1622]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xfffbffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0x33U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1623]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xfff7ffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0x34U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1624]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xffefffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0x35U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1625]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xffdfffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0x36U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1626]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xffbfffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0x37U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1627]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xff7fffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0x38U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1628]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xfeffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0x39U)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1629]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xfdffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0x3aU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1630]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xfbffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0x3bU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1631]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xf7ffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0x3cU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1632]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xefffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0x3dU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1633]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xdfffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                        >> 0x3eU)) ^ (IData)((vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1634]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0xbfffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
                 >> 0x3fU))) {
        ++(vlSymsp->__Vcoverage[1635]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data 
            = ((0x7fffffffffffffffULL & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_forwardData_data_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram_io_r_req_ready) 
         ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_metaReadBus_req_ready))) {
        ++(vlSymsp->__Vcoverage[1012]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_metaReadBus_req_ready 
            = vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram_io_r_req_ready;
    }
    vlSelf->Cache_top__DOT__Cache__DOT__s1_io_out_valid 
        = (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_valid) 
            & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram_io_r_req_ready)) 
           & (~ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_valid)));
    if (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__pickForwardMeta) 
         ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__pickForwardMeta))) {
        ++(vlSymsp->__Vcoverage[2888]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__pickForwardMeta 
            = vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__pickForwardMeta;
    }
    if ((1U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT___GEN_6) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__forwardWaymask_0)))) {
        ++(vlSymsp->__Vcoverage[2889]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__forwardWaymask_0 
            = (1U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT___GEN_6));
    }
    if ((1U & (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT___GEN_6) 
                >> 1U) ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__forwardWaymask_1)))) {
        ++(vlSymsp->__Vcoverage[2890]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__forwardWaymask_1 
            = (1U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT___GEN_6) 
                     >> 1U));
    }
    if ((1U & (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT___GEN_6) 
                >> 2U) ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__forwardWaymask_2)))) {
        ++(vlSymsp->__Vcoverage[2891]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__forwardWaymask_2 
            = (1U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT___GEN_6) 
                     >> 2U));
    }
    if ((IData)((((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT___GEN_6) 
                  >> 3U) ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__forwardWaymask_3)))) {
        ++(vlSymsp->__Vcoverage[2892]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__forwardWaymask_3 
            = (1U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT___GEN_6) 
                     >> 3U));
    }
    vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_0_dirty 
        = (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__pickForwardMeta) 
            & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT___GEN_6))
            ? (IData)(Cache_top__DOT__Cache__DOT__s2__DOT___GEN_5)
            : (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray_io_r_0_resp_data_0_dirty));
    vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_1_dirty 
        = (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__pickForwardMeta) 
            & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT___GEN_6) 
               >> 1U)) ? (IData)(Cache_top__DOT__Cache__DOT__s2__DOT___GEN_5)
            : (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray_io_r_0_resp_data_1_dirty));
    vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_2_dirty 
        = (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__pickForwardMeta) 
            & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT___GEN_6) 
               >> 2U)) ? (IData)(Cache_top__DOT__Cache__DOT__s2__DOT___GEN_5)
            : (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray_io_r_0_resp_data_2_dirty));
    vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_3_dirty 
        = (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__pickForwardMeta) 
            & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT___GEN_6) 
               >> 3U)) ? (IData)(Cache_top__DOT__Cache__DOT__s2__DOT___GEN_5)
            : (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray_io_r_0_resp_data_3_dirty));
    vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_0_tag 
        = (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__pickForwardMeta) 
            & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT___GEN_6))
            ? Cache_top__DOT__Cache__DOT__s2__DOT___GEN_3
            : vlSelf->Cache_top__DOT__Cache__DOT__metaArray_io_r_0_resp_data_0_tag);
    vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_1_tag 
        = (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__pickForwardMeta) 
            & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT___GEN_6) 
               >> 1U)) ? Cache_top__DOT__Cache__DOT__s2__DOT___GEN_3
            : vlSelf->Cache_top__DOT__Cache__DOT__metaArray_io_r_0_resp_data_1_tag);
    vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_2_tag 
        = (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__pickForwardMeta) 
            & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT___GEN_6) 
               >> 2U)) ? Cache_top__DOT__Cache__DOT__s2__DOT___GEN_3
            : vlSelf->Cache_top__DOT__Cache__DOT__metaArray_io_r_0_resp_data_2_tag);
    vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_3_tag 
        = (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__pickForwardMeta) 
            & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT___GEN_6) 
               >> 3U)) ? Cache_top__DOT__Cache__DOT__s2__DOT___GEN_3
            : vlSelf->Cache_top__DOT__Cache__DOT__metaArray_io_r_0_resp_data_3_tag);
    vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_0_tag 
        = (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__pickForwardMeta) 
            & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT___GEN_6))
            ? Cache_top__DOT__Cache__DOT__s2__DOT___GEN_3
            : vlSelf->Cache_top__DOT__Cache__DOT__metaArray_io_r_0_resp_data_0_tag);
    vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_1_tag 
        = (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__pickForwardMeta) 
            & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT___GEN_6) 
               >> 1U)) ? Cache_top__DOT__Cache__DOT__s2__DOT___GEN_3
            : vlSelf->Cache_top__DOT__Cache__DOT__metaArray_io_r_0_resp_data_1_tag);
    vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_2_tag 
        = (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__pickForwardMeta) 
            & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT___GEN_6) 
               >> 2U)) ? Cache_top__DOT__Cache__DOT__s2__DOT___GEN_3
            : vlSelf->Cache_top__DOT__Cache__DOT__metaArray_io_r_0_resp_data_2_tag);
    vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_3_tag 
        = (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__pickForwardMeta) 
            & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT___GEN_6) 
               >> 3U)) ? Cache_top__DOT__Cache__DOT__s2__DOT___GEN_3
            : vlSelf->Cache_top__DOT__Cache__DOT__metaArray_io_r_0_resp_data_3_tag);
    vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_0_valid 
        = (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__pickForwardMeta) 
            & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT___GEN_6)) 
           | (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray_io_r_0_resp_data_0_valid));
    vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_1_valid 
        = (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__pickForwardMeta) 
            & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT___GEN_6) 
               >> 1U)) | (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray_io_r_0_resp_data_1_valid));
    vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_2_valid 
        = (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__pickForwardMeta) 
            & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT___GEN_6) 
               >> 2U)) | (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray_io_r_0_resp_data_2_valid));
    vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_3_valid 
        = (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__pickForwardMeta) 
            & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT___GEN_6) 
               >> 3U)) | (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray_io_r_0_resp_data_3_valid));
    if ((1U & ((IData)(vlSelf->Cache_top__DOT__io_out_coh_resp_bits_cmd) 
               ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_cmd)))) {
        ++(vlSymsp->__Vcoverage[517]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_cmd 
            = ((0xeU & (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_cmd)) 
               | (1U & (IData)(vlSelf->Cache_top__DOT__io_out_coh_resp_bits_cmd)));
    }
    if ((2U & ((IData)(vlSelf->Cache_top__DOT__io_out_coh_resp_bits_cmd) 
               ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_cmd)))) {
        ++(vlSymsp->__Vcoverage[518]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_cmd 
            = ((0xdU & (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_cmd)) 
               | (2U & (IData)(vlSelf->Cache_top__DOT__io_out_coh_resp_bits_cmd)));
    }
    if ((4U & ((IData)(vlSelf->Cache_top__DOT__io_out_coh_resp_bits_cmd) 
               ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_cmd)))) {
        ++(vlSymsp->__Vcoverage[519]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_cmd 
            = ((0xbU & (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_cmd)) 
               | (4U & (IData)(vlSelf->Cache_top__DOT__io_out_coh_resp_bits_cmd)));
    }
    if ((8U & ((IData)(vlSelf->Cache_top__DOT__io_out_coh_resp_bits_cmd) 
               ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_cmd)))) {
        ++(vlSymsp->__Vcoverage[520]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_cmd 
            = ((7U & (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_resp_bits_cmd)) 
               | (8U & (IData)(vlSelf->Cache_top__DOT__io_out_coh_resp_bits_cmd)));
    }
    if (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s1_io_out_valid) 
         ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_out_valid))) {
        ++(vlSymsp->__Vcoverage[1011]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_out_valid 
            = vlSelf->Cache_top__DOT__Cache__DOT__s1_io_out_valid;
    }
    vlSelf->Cache_top__DOT__Cache__DOT___T_2 = ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s1_io_out_valid) 
                                                & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_ready));
    vlSelf->Cache_top__DOT__Cache__DOT___GEN_1 = (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s1_io_out_valid) 
                                                   & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_ready)) 
                                                  | ((~ 
                                                      ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_ready) 
                                                       & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__valid))) 
                                                     & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__valid)));
    vlSelf->Cache_top__DOT__Cache__DOT__s1_io_in_ready 
        = ((((~ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_valid)) 
             | ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_ready) 
                & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s1_io_out_valid))) 
            & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram_io_r_req_ready)) 
           & (~ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_valid)));
    if (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_0_dirty) 
         ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_dirty))) {
        ++(vlSymsp->__Vcoverage[1504]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_dirty 
            = vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_0_dirty;
    }
    if (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_1_dirty) 
         ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_dirty))) {
        ++(vlSymsp->__Vcoverage[1524]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_dirty 
            = vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_1_dirty;
    }
    if (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_2_dirty) 
         ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_dirty))) {
        ++(vlSymsp->__Vcoverage[1544]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_dirty 
            = vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_2_dirty;
    }
    if (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_3_dirty) 
         ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_dirty))) {
        ++(vlSymsp->__Vcoverage[1564]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_dirty 
            = vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_3_dirty;
    }
    if ((1U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_0_tag 
               ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag))) {
        ++(vlSymsp->__Vcoverage[1485]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag 
            = ((0x7fffeU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag) 
               | (1U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_0_tag));
    }
    if ((2U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_0_tag 
               ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag))) {
        ++(vlSymsp->__Vcoverage[1486]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag 
            = ((0x7fffdU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag) 
               | (2U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_0_tag));
    }
    if ((4U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_0_tag 
               ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag))) {
        ++(vlSymsp->__Vcoverage[1487]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag 
            = ((0x7fffbU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag) 
               | (4U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_0_tag));
    }
    if ((8U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_0_tag 
               ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag))) {
        ++(vlSymsp->__Vcoverage[1488]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag 
            = ((0x7fff7U & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag) 
               | (8U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_0_tag));
    }
    if ((0x10U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_0_tag 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag))) {
        ++(vlSymsp->__Vcoverage[1489]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag 
            = ((0x7ffefU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag) 
               | (0x10U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_0_tag));
    }
    if ((0x20U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_0_tag 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag))) {
        ++(vlSymsp->__Vcoverage[1490]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag 
            = ((0x7ffdfU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag) 
               | (0x20U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_0_tag));
    }
    if ((0x40U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_0_tag 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag))) {
        ++(vlSymsp->__Vcoverage[1491]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag 
            = ((0x7ffbfU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag) 
               | (0x40U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_0_tag));
    }
    if ((0x80U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_0_tag 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag))) {
        ++(vlSymsp->__Vcoverage[1492]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag 
            = ((0x7ff7fU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag) 
               | (0x80U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_0_tag));
    }
    if ((0x100U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_0_tag 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag))) {
        ++(vlSymsp->__Vcoverage[1493]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag 
            = ((0x7feffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag) 
               | (0x100U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_0_tag));
    }
    if ((0x200U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_0_tag 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag))) {
        ++(vlSymsp->__Vcoverage[1494]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag 
            = ((0x7fdffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag) 
               | (0x200U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_0_tag));
    }
    if ((0x400U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_0_tag 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag))) {
        ++(vlSymsp->__Vcoverage[1495]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag 
            = ((0x7fbffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag) 
               | (0x400U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_0_tag));
    }
    if ((0x800U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_0_tag 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag))) {
        ++(vlSymsp->__Vcoverage[1496]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag 
            = ((0x7f7ffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag) 
               | (0x800U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_0_tag));
    }
    if ((0x1000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_0_tag 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag))) {
        ++(vlSymsp->__Vcoverage[1497]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag 
            = ((0x7efffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag) 
               | (0x1000U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_0_tag));
    }
    if ((0x2000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_0_tag 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag))) {
        ++(vlSymsp->__Vcoverage[1498]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag 
            = ((0x7dfffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag) 
               | (0x2000U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_0_tag));
    }
    if ((0x4000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_0_tag 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag))) {
        ++(vlSymsp->__Vcoverage[1499]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag 
            = ((0x7bfffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag) 
               | (0x4000U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_0_tag));
    }
    if ((0x8000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_0_tag 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag))) {
        ++(vlSymsp->__Vcoverage[1500]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag 
            = ((0x77fffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag) 
               | (0x8000U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_0_tag));
    }
    if ((0x10000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_0_tag 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag))) {
        ++(vlSymsp->__Vcoverage[1501]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag 
            = ((0x6ffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag) 
               | (0x10000U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_0_tag));
    }
    if ((0x20000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_0_tag 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag))) {
        ++(vlSymsp->__Vcoverage[1502]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag 
            = ((0x5ffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag) 
               | (0x20000U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_0_tag));
    }
    if ((0x40000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_0_tag 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag))) {
        ++(vlSymsp->__Vcoverage[1503]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag 
            = ((0x3ffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_0_tag) 
               | (0x40000U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_0_tag));
    }
    if ((1U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_1_tag 
               ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag))) {
        ++(vlSymsp->__Vcoverage[1505]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag 
            = ((0x7fffeU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag) 
               | (1U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_1_tag));
    }
    if ((2U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_1_tag 
               ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag))) {
        ++(vlSymsp->__Vcoverage[1506]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag 
            = ((0x7fffdU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag) 
               | (2U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_1_tag));
    }
    if ((4U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_1_tag 
               ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag))) {
        ++(vlSymsp->__Vcoverage[1507]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag 
            = ((0x7fffbU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag) 
               | (4U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_1_tag));
    }
    if ((8U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_1_tag 
               ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag))) {
        ++(vlSymsp->__Vcoverage[1508]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag 
            = ((0x7fff7U & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag) 
               | (8U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_1_tag));
    }
    if ((0x10U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_1_tag 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag))) {
        ++(vlSymsp->__Vcoverage[1509]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag 
            = ((0x7ffefU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag) 
               | (0x10U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_1_tag));
    }
    if ((0x20U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_1_tag 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag))) {
        ++(vlSymsp->__Vcoverage[1510]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag 
            = ((0x7ffdfU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag) 
               | (0x20U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_1_tag));
    }
    if ((0x40U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_1_tag 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag))) {
        ++(vlSymsp->__Vcoverage[1511]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag 
            = ((0x7ffbfU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag) 
               | (0x40U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_1_tag));
    }
    if ((0x80U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_1_tag 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag))) {
        ++(vlSymsp->__Vcoverage[1512]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag 
            = ((0x7ff7fU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag) 
               | (0x80U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_1_tag));
    }
    if ((0x100U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_1_tag 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag))) {
        ++(vlSymsp->__Vcoverage[1513]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag 
            = ((0x7feffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag) 
               | (0x100U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_1_tag));
    }
    if ((0x200U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_1_tag 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag))) {
        ++(vlSymsp->__Vcoverage[1514]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag 
            = ((0x7fdffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag) 
               | (0x200U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_1_tag));
    }
    if ((0x400U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_1_tag 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag))) {
        ++(vlSymsp->__Vcoverage[1515]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag 
            = ((0x7fbffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag) 
               | (0x400U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_1_tag));
    }
    if ((0x800U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_1_tag 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag))) {
        ++(vlSymsp->__Vcoverage[1516]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag 
            = ((0x7f7ffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag) 
               | (0x800U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_1_tag));
    }
    if ((0x1000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_1_tag 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag))) {
        ++(vlSymsp->__Vcoverage[1517]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag 
            = ((0x7efffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag) 
               | (0x1000U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_1_tag));
    }
    if ((0x2000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_1_tag 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag))) {
        ++(vlSymsp->__Vcoverage[1518]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag 
            = ((0x7dfffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag) 
               | (0x2000U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_1_tag));
    }
    if ((0x4000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_1_tag 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag))) {
        ++(vlSymsp->__Vcoverage[1519]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag 
            = ((0x7bfffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag) 
               | (0x4000U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_1_tag));
    }
    if ((0x8000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_1_tag 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag))) {
        ++(vlSymsp->__Vcoverage[1520]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag 
            = ((0x77fffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag) 
               | (0x8000U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_1_tag));
    }
    if ((0x10000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_1_tag 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag))) {
        ++(vlSymsp->__Vcoverage[1521]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag 
            = ((0x6ffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag) 
               | (0x10000U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_1_tag));
    }
    if ((0x20000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_1_tag 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag))) {
        ++(vlSymsp->__Vcoverage[1522]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag 
            = ((0x5ffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag) 
               | (0x20000U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_1_tag));
    }
    if ((0x40000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_1_tag 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag))) {
        ++(vlSymsp->__Vcoverage[1523]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag 
            = ((0x3ffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_1_tag) 
               | (0x40000U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_1_tag));
    }
    if ((1U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_2_tag 
               ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag))) {
        ++(vlSymsp->__Vcoverage[1525]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag 
            = ((0x7fffeU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag) 
               | (1U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_2_tag));
    }
    if ((2U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_2_tag 
               ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag))) {
        ++(vlSymsp->__Vcoverage[1526]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag 
            = ((0x7fffdU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag) 
               | (2U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_2_tag));
    }
    if ((4U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_2_tag 
               ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag))) {
        ++(vlSymsp->__Vcoverage[1527]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag 
            = ((0x7fffbU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag) 
               | (4U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_2_tag));
    }
    if ((8U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_2_tag 
               ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag))) {
        ++(vlSymsp->__Vcoverage[1528]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag 
            = ((0x7fff7U & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag) 
               | (8U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_2_tag));
    }
    if ((0x10U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_2_tag 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag))) {
        ++(vlSymsp->__Vcoverage[1529]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag 
            = ((0x7ffefU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag) 
               | (0x10U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_2_tag));
    }
    if ((0x20U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_2_tag 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag))) {
        ++(vlSymsp->__Vcoverage[1530]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag 
            = ((0x7ffdfU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag) 
               | (0x20U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_2_tag));
    }
    if ((0x40U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_2_tag 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag))) {
        ++(vlSymsp->__Vcoverage[1531]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag 
            = ((0x7ffbfU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag) 
               | (0x40U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_2_tag));
    }
    if ((0x80U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_2_tag 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag))) {
        ++(vlSymsp->__Vcoverage[1532]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag 
            = ((0x7ff7fU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag) 
               | (0x80U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_2_tag));
    }
    if ((0x100U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_2_tag 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag))) {
        ++(vlSymsp->__Vcoverage[1533]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag 
            = ((0x7feffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag) 
               | (0x100U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_2_tag));
    }
    if ((0x200U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_2_tag 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag))) {
        ++(vlSymsp->__Vcoverage[1534]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag 
            = ((0x7fdffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag) 
               | (0x200U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_2_tag));
    }
    if ((0x400U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_2_tag 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag))) {
        ++(vlSymsp->__Vcoverage[1535]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag 
            = ((0x7fbffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag) 
               | (0x400U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_2_tag));
    }
    if ((0x800U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_2_tag 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag))) {
        ++(vlSymsp->__Vcoverage[1536]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag 
            = ((0x7f7ffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag) 
               | (0x800U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_2_tag));
    }
    if ((0x1000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_2_tag 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag))) {
        ++(vlSymsp->__Vcoverage[1537]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag 
            = ((0x7efffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag) 
               | (0x1000U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_2_tag));
    }
    if ((0x2000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_2_tag 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag))) {
        ++(vlSymsp->__Vcoverage[1538]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag 
            = ((0x7dfffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag) 
               | (0x2000U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_2_tag));
    }
    if ((0x4000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_2_tag 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag))) {
        ++(vlSymsp->__Vcoverage[1539]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag 
            = ((0x7bfffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag) 
               | (0x4000U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_2_tag));
    }
    if ((0x8000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_2_tag 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag))) {
        ++(vlSymsp->__Vcoverage[1540]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag 
            = ((0x77fffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag) 
               | (0x8000U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_2_tag));
    }
    if ((0x10000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_2_tag 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag))) {
        ++(vlSymsp->__Vcoverage[1541]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag 
            = ((0x6ffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag) 
               | (0x10000U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_2_tag));
    }
    if ((0x20000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_2_tag 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag))) {
        ++(vlSymsp->__Vcoverage[1542]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag 
            = ((0x5ffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag) 
               | (0x20000U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_2_tag));
    }
    if ((0x40000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_2_tag 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag))) {
        ++(vlSymsp->__Vcoverage[1543]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag 
            = ((0x3ffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_2_tag) 
               | (0x40000U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_2_tag));
    }
    if ((1U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_3_tag 
               ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag))) {
        ++(vlSymsp->__Vcoverage[1545]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag 
            = ((0x7fffeU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag) 
               | (1U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_3_tag));
    }
    if ((2U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_3_tag 
               ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag))) {
        ++(vlSymsp->__Vcoverage[1546]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag 
            = ((0x7fffdU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag) 
               | (2U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_3_tag));
    }
    if ((4U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_3_tag 
               ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag))) {
        ++(vlSymsp->__Vcoverage[1547]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag 
            = ((0x7fffbU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag) 
               | (4U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_3_tag));
    }
    if ((8U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_3_tag 
               ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag))) {
        ++(vlSymsp->__Vcoverage[1548]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag 
            = ((0x7fff7U & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag) 
               | (8U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_3_tag));
    }
    if ((0x10U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_3_tag 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag))) {
        ++(vlSymsp->__Vcoverage[1549]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag 
            = ((0x7ffefU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag) 
               | (0x10U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_3_tag));
    }
    if ((0x20U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_3_tag 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag))) {
        ++(vlSymsp->__Vcoverage[1550]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag 
            = ((0x7ffdfU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag) 
               | (0x20U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_3_tag));
    }
    if ((0x40U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_3_tag 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag))) {
        ++(vlSymsp->__Vcoverage[1551]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag 
            = ((0x7ffbfU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag) 
               | (0x40U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_3_tag));
    }
    if ((0x80U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_3_tag 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag))) {
        ++(vlSymsp->__Vcoverage[1552]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag 
            = ((0x7ff7fU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag) 
               | (0x80U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_3_tag));
    }
    if ((0x100U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_3_tag 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag))) {
        ++(vlSymsp->__Vcoverage[1553]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag 
            = ((0x7feffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag) 
               | (0x100U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_3_tag));
    }
    if ((0x200U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_3_tag 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag))) {
        ++(vlSymsp->__Vcoverage[1554]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag 
            = ((0x7fdffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag) 
               | (0x200U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_3_tag));
    }
    if ((0x400U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_3_tag 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag))) {
        ++(vlSymsp->__Vcoverage[1555]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag 
            = ((0x7fbffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag) 
               | (0x400U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_3_tag));
    }
    if ((0x800U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_3_tag 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag))) {
        ++(vlSymsp->__Vcoverage[1556]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag 
            = ((0x7f7ffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag) 
               | (0x800U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_3_tag));
    }
    if ((0x1000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_3_tag 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag))) {
        ++(vlSymsp->__Vcoverage[1557]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag 
            = ((0x7efffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag) 
               | (0x1000U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_3_tag));
    }
    if ((0x2000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_3_tag 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag))) {
        ++(vlSymsp->__Vcoverage[1558]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag 
            = ((0x7dfffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag) 
               | (0x2000U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_3_tag));
    }
    if ((0x4000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_3_tag 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag))) {
        ++(vlSymsp->__Vcoverage[1559]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag 
            = ((0x7bfffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag) 
               | (0x4000U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_3_tag));
    }
    if ((0x8000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_3_tag 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag))) {
        ++(vlSymsp->__Vcoverage[1560]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag 
            = ((0x77fffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag) 
               | (0x8000U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_3_tag));
    }
    if ((0x10000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_3_tag 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag))) {
        ++(vlSymsp->__Vcoverage[1561]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag 
            = ((0x6ffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag) 
               | (0x10000U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_3_tag));
    }
    if ((0x20000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_3_tag 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag))) {
        ++(vlSymsp->__Vcoverage[1562]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag 
            = ((0x5ffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag) 
               | (0x20000U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_3_tag));
    }
    if ((0x40000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_3_tag 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag))) {
        ++(vlSymsp->__Vcoverage[1563]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag 
            = ((0x3ffffU & vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_metas_3_tag) 
               | (0x40000U & vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_3_tag));
    }
    if ((1U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_0_tag 
               ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag))) {
        ++(vlSymsp->__Vcoverage[2893]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag 
            = ((0x7fffeU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag) 
               | (1U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_0_tag));
    }
    if ((2U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_0_tag 
               ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag))) {
        ++(vlSymsp->__Vcoverage[2894]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag 
            = ((0x7fffdU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag) 
               | (2U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_0_tag));
    }
    if ((4U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_0_tag 
               ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag))) {
        ++(vlSymsp->__Vcoverage[2895]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag 
            = ((0x7fffbU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag) 
               | (4U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_0_tag));
    }
    if ((8U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_0_tag 
               ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag))) {
        ++(vlSymsp->__Vcoverage[2896]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag 
            = ((0x7fff7U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag) 
               | (8U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_0_tag));
    }
    if ((0x10U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_0_tag 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag))) {
        ++(vlSymsp->__Vcoverage[2897]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag 
            = ((0x7ffefU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag) 
               | (0x10U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_0_tag));
    }
    if ((0x20U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_0_tag 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag))) {
        ++(vlSymsp->__Vcoverage[2898]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag 
            = ((0x7ffdfU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag) 
               | (0x20U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_0_tag));
    }
    if ((0x40U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_0_tag 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag))) {
        ++(vlSymsp->__Vcoverage[2899]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag 
            = ((0x7ffbfU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag) 
               | (0x40U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_0_tag));
    }
    if ((0x80U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_0_tag 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag))) {
        ++(vlSymsp->__Vcoverage[2900]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag 
            = ((0x7ff7fU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag) 
               | (0x80U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_0_tag));
    }
    if ((0x100U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_0_tag 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag))) {
        ++(vlSymsp->__Vcoverage[2901]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag 
            = ((0x7feffU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag) 
               | (0x100U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_0_tag));
    }
    if ((0x200U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_0_tag 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag))) {
        ++(vlSymsp->__Vcoverage[2902]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag 
            = ((0x7fdffU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag) 
               | (0x200U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_0_tag));
    }
    if ((0x400U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_0_tag 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag))) {
        ++(vlSymsp->__Vcoverage[2903]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag 
            = ((0x7fbffU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag) 
               | (0x400U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_0_tag));
    }
    if ((0x800U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_0_tag 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag))) {
        ++(vlSymsp->__Vcoverage[2904]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag 
            = ((0x7f7ffU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag) 
               | (0x800U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_0_tag));
    }
    if ((0x1000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_0_tag 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag))) {
        ++(vlSymsp->__Vcoverage[2905]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag 
            = ((0x7efffU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag) 
               | (0x1000U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_0_tag));
    }
    if ((0x2000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_0_tag 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag))) {
        ++(vlSymsp->__Vcoverage[2906]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag 
            = ((0x7dfffU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag) 
               | (0x2000U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_0_tag));
    }
    if ((0x4000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_0_tag 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag))) {
        ++(vlSymsp->__Vcoverage[2907]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag 
            = ((0x7bfffU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag) 
               | (0x4000U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_0_tag));
    }
    if ((0x8000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_0_tag 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag))) {
        ++(vlSymsp->__Vcoverage[2908]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag 
            = ((0x77fffU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag) 
               | (0x8000U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_0_tag));
    }
    if ((0x10000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_0_tag 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag))) {
        ++(vlSymsp->__Vcoverage[2909]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag 
            = ((0x6ffffU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag) 
               | (0x10000U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_0_tag));
    }
    if ((0x20000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_0_tag 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag))) {
        ++(vlSymsp->__Vcoverage[2910]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag 
            = ((0x5ffffU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag) 
               | (0x20000U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_0_tag));
    }
    if ((0x40000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_0_tag 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag))) {
        ++(vlSymsp->__Vcoverage[2911]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag 
            = ((0x3ffffU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_tag) 
               | (0x40000U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_0_tag));
    }
    if ((1U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_1_tag 
               ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag))) {
        ++(vlSymsp->__Vcoverage[2913]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag 
            = ((0x7fffeU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag) 
               | (1U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_1_tag));
    }
    if ((2U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_1_tag 
               ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag))) {
        ++(vlSymsp->__Vcoverage[2914]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag 
            = ((0x7fffdU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag) 
               | (2U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_1_tag));
    }
    if ((4U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_1_tag 
               ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag))) {
        ++(vlSymsp->__Vcoverage[2915]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag 
            = ((0x7fffbU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag) 
               | (4U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_1_tag));
    }
    if ((8U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_1_tag 
               ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag))) {
        ++(vlSymsp->__Vcoverage[2916]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag 
            = ((0x7fff7U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag) 
               | (8U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_1_tag));
    }
    if ((0x10U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_1_tag 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag))) {
        ++(vlSymsp->__Vcoverage[2917]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag 
            = ((0x7ffefU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag) 
               | (0x10U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_1_tag));
    }
    if ((0x20U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_1_tag 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag))) {
        ++(vlSymsp->__Vcoverage[2918]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag 
            = ((0x7ffdfU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag) 
               | (0x20U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_1_tag));
    }
    if ((0x40U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_1_tag 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag))) {
        ++(vlSymsp->__Vcoverage[2919]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag 
            = ((0x7ffbfU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag) 
               | (0x40U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_1_tag));
    }
    if ((0x80U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_1_tag 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag))) {
        ++(vlSymsp->__Vcoverage[2920]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag 
            = ((0x7ff7fU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag) 
               | (0x80U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_1_tag));
    }
    if ((0x100U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_1_tag 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag))) {
        ++(vlSymsp->__Vcoverage[2921]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag 
            = ((0x7feffU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag) 
               | (0x100U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_1_tag));
    }
    if ((0x200U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_1_tag 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag))) {
        ++(vlSymsp->__Vcoverage[2922]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag 
            = ((0x7fdffU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag) 
               | (0x200U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_1_tag));
    }
    if ((0x400U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_1_tag 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag))) {
        ++(vlSymsp->__Vcoverage[2923]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag 
            = ((0x7fbffU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag) 
               | (0x400U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_1_tag));
    }
    if ((0x800U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_1_tag 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag))) {
        ++(vlSymsp->__Vcoverage[2924]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag 
            = ((0x7f7ffU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag) 
               | (0x800U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_1_tag));
    }
    if ((0x1000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_1_tag 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag))) {
        ++(vlSymsp->__Vcoverage[2925]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag 
            = ((0x7efffU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag) 
               | (0x1000U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_1_tag));
    }
    if ((0x2000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_1_tag 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag))) {
        ++(vlSymsp->__Vcoverage[2926]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag 
            = ((0x7dfffU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag) 
               | (0x2000U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_1_tag));
    }
    if ((0x4000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_1_tag 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag))) {
        ++(vlSymsp->__Vcoverage[2927]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag 
            = ((0x7bfffU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag) 
               | (0x4000U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_1_tag));
    }
    if ((0x8000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_1_tag 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag))) {
        ++(vlSymsp->__Vcoverage[2928]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag 
            = ((0x77fffU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag) 
               | (0x8000U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_1_tag));
    }
    if ((0x10000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_1_tag 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag))) {
        ++(vlSymsp->__Vcoverage[2929]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag 
            = ((0x6ffffU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag) 
               | (0x10000U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_1_tag));
    }
    if ((0x20000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_1_tag 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag))) {
        ++(vlSymsp->__Vcoverage[2930]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag 
            = ((0x5ffffU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag) 
               | (0x20000U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_1_tag));
    }
    if ((0x40000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_1_tag 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag))) {
        ++(vlSymsp->__Vcoverage[2931]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag 
            = ((0x3ffffU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_tag) 
               | (0x40000U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_1_tag));
    }
    if ((1U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_2_tag 
               ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag))) {
        ++(vlSymsp->__Vcoverage[2933]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag 
            = ((0x7fffeU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag) 
               | (1U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_2_tag));
    }
    if ((2U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_2_tag 
               ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag))) {
        ++(vlSymsp->__Vcoverage[2934]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag 
            = ((0x7fffdU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag) 
               | (2U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_2_tag));
    }
    if ((4U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_2_tag 
               ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag))) {
        ++(vlSymsp->__Vcoverage[2935]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag 
            = ((0x7fffbU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag) 
               | (4U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_2_tag));
    }
    if ((8U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_2_tag 
               ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag))) {
        ++(vlSymsp->__Vcoverage[2936]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag 
            = ((0x7fff7U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag) 
               | (8U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_2_tag));
    }
    if ((0x10U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_2_tag 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag))) {
        ++(vlSymsp->__Vcoverage[2937]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag 
            = ((0x7ffefU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag) 
               | (0x10U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_2_tag));
    }
    if ((0x20U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_2_tag 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag))) {
        ++(vlSymsp->__Vcoverage[2938]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag 
            = ((0x7ffdfU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag) 
               | (0x20U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_2_tag));
    }
    if ((0x40U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_2_tag 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag))) {
        ++(vlSymsp->__Vcoverage[2939]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag 
            = ((0x7ffbfU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag) 
               | (0x40U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_2_tag));
    }
    if ((0x80U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_2_tag 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag))) {
        ++(vlSymsp->__Vcoverage[2940]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag 
            = ((0x7ff7fU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag) 
               | (0x80U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_2_tag));
    }
    if ((0x100U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_2_tag 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag))) {
        ++(vlSymsp->__Vcoverage[2941]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag 
            = ((0x7feffU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag) 
               | (0x100U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_2_tag));
    }
    if ((0x200U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_2_tag 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag))) {
        ++(vlSymsp->__Vcoverage[2942]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag 
            = ((0x7fdffU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag) 
               | (0x200U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_2_tag));
    }
    if ((0x400U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_2_tag 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag))) {
        ++(vlSymsp->__Vcoverage[2943]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag 
            = ((0x7fbffU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag) 
               | (0x400U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_2_tag));
    }
    if ((0x800U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_2_tag 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag))) {
        ++(vlSymsp->__Vcoverage[2944]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag 
            = ((0x7f7ffU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag) 
               | (0x800U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_2_tag));
    }
    if ((0x1000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_2_tag 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag))) {
        ++(vlSymsp->__Vcoverage[2945]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag 
            = ((0x7efffU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag) 
               | (0x1000U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_2_tag));
    }
    if ((0x2000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_2_tag 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag))) {
        ++(vlSymsp->__Vcoverage[2946]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag 
            = ((0x7dfffU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag) 
               | (0x2000U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_2_tag));
    }
    if ((0x4000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_2_tag 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag))) {
        ++(vlSymsp->__Vcoverage[2947]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag 
            = ((0x7bfffU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag) 
               | (0x4000U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_2_tag));
    }
    if ((0x8000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_2_tag 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag))) {
        ++(vlSymsp->__Vcoverage[2948]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag 
            = ((0x77fffU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag) 
               | (0x8000U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_2_tag));
    }
    if ((0x10000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_2_tag 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag))) {
        ++(vlSymsp->__Vcoverage[2949]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag 
            = ((0x6ffffU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag) 
               | (0x10000U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_2_tag));
    }
    if ((0x20000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_2_tag 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag))) {
        ++(vlSymsp->__Vcoverage[2950]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag 
            = ((0x5ffffU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag) 
               | (0x20000U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_2_tag));
    }
    if ((0x40000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_2_tag 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag))) {
        ++(vlSymsp->__Vcoverage[2951]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag 
            = ((0x3ffffU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_tag) 
               | (0x40000U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_2_tag));
    }
    if ((1U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_3_tag 
               ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag))) {
        ++(vlSymsp->__Vcoverage[2953]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag 
            = ((0x7fffeU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag) 
               | (1U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_3_tag));
    }
    if ((2U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_3_tag 
               ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag))) {
        ++(vlSymsp->__Vcoverage[2954]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag 
            = ((0x7fffdU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag) 
               | (2U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_3_tag));
    }
    if ((4U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_3_tag 
               ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag))) {
        ++(vlSymsp->__Vcoverage[2955]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag 
            = ((0x7fffbU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag) 
               | (4U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_3_tag));
    }
    if ((8U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_3_tag 
               ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag))) {
        ++(vlSymsp->__Vcoverage[2956]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag 
            = ((0x7fff7U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag) 
               | (8U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_3_tag));
    }
    if ((0x10U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_3_tag 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag))) {
        ++(vlSymsp->__Vcoverage[2957]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag 
            = ((0x7ffefU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag) 
               | (0x10U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_3_tag));
    }
    if ((0x20U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_3_tag 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag))) {
        ++(vlSymsp->__Vcoverage[2958]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag 
            = ((0x7ffdfU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag) 
               | (0x20U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_3_tag));
    }
    if ((0x40U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_3_tag 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag))) {
        ++(vlSymsp->__Vcoverage[2959]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag 
            = ((0x7ffbfU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag) 
               | (0x40U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_3_tag));
    }
    if ((0x80U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_3_tag 
                  ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag))) {
        ++(vlSymsp->__Vcoverage[2960]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag 
            = ((0x7ff7fU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag) 
               | (0x80U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_3_tag));
    }
    if ((0x100U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_3_tag 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag))) {
        ++(vlSymsp->__Vcoverage[2961]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag 
            = ((0x7feffU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag) 
               | (0x100U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_3_tag));
    }
    if ((0x200U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_3_tag 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag))) {
        ++(vlSymsp->__Vcoverage[2962]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag 
            = ((0x7fdffU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag) 
               | (0x200U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_3_tag));
    }
    if ((0x400U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_3_tag 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag))) {
        ++(vlSymsp->__Vcoverage[2963]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag 
            = ((0x7fbffU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag) 
               | (0x400U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_3_tag));
    }
    if ((0x800U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_3_tag 
                   ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag))) {
        ++(vlSymsp->__Vcoverage[2964]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag 
            = ((0x7f7ffU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag) 
               | (0x800U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_3_tag));
    }
    if ((0x1000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_3_tag 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag))) {
        ++(vlSymsp->__Vcoverage[2965]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag 
            = ((0x7efffU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag) 
               | (0x1000U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_3_tag));
    }
    if ((0x2000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_3_tag 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag))) {
        ++(vlSymsp->__Vcoverage[2966]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag 
            = ((0x7dfffU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag) 
               | (0x2000U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_3_tag));
    }
    if ((0x4000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_3_tag 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag))) {
        ++(vlSymsp->__Vcoverage[2967]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag 
            = ((0x7bfffU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag) 
               | (0x4000U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_3_tag));
    }
    if ((0x8000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_3_tag 
                    ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag))) {
        ++(vlSymsp->__Vcoverage[2968]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag 
            = ((0x77fffU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag) 
               | (0x8000U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_3_tag));
    }
    if ((0x10000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_3_tag 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag))) {
        ++(vlSymsp->__Vcoverage[2969]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag 
            = ((0x6ffffU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag) 
               | (0x10000U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_3_tag));
    }
    if ((0x20000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_3_tag 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag))) {
        ++(vlSymsp->__Vcoverage[2970]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag 
            = ((0x5ffffU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag) 
               | (0x20000U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_3_tag));
    }
    if ((0x40000U & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_3_tag 
                     ^ vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag))) {
        ++(vlSymsp->__Vcoverage[2971]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag 
            = ((0x3ffffU & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_tag) 
               | (0x40000U & vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_3_tag));
    }
    if (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_0_valid) 
         ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_valid))) {
        ++(vlSymsp->__Vcoverage[2912]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_0_valid 
            = vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_0_valid;
    }
    if (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_1_valid) 
         ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_valid))) {
        ++(vlSymsp->__Vcoverage[2932]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_1_valid 
            = vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_1_valid;
    }
    if (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_2_valid) 
         ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_valid))) {
        ++(vlSymsp->__Vcoverage[2952]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_2_valid 
            = vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_2_valid;
    }
    if (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_3_valid) 
         ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_valid))) {
        ++(vlSymsp->__Vcoverage[2972]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__metaWay_3_valid 
            = vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_3_valid;
    }
    vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__hitVec 
        = (((((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_3_valid) 
              & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_3_tag 
                 == (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_bits_r_req_addr 
                     >> 0xdU))) & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__valid)) 
            << 3U) | (((((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_2_valid) 
                         & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_2_tag 
                            == (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_bits_r_req_addr 
                                >> 0xdU))) & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__valid)) 
                       << 2U) | (((((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_1_valid) 
                                    & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_1_tag 
                                       == (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_bits_r_req_addr 
                                           >> 0xdU))) 
                                   & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__valid)) 
                                  << 1U) | (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_0_valid) 
                                             & (vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_0_tag 
                                                == 
                                                (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_bits_r_req_addr 
                                                 >> 0xdU))) 
                                            & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__valid)))));
    vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__invalidVec 
        = ((8U & ((~ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_3_valid)) 
                  << 3U)) | ((4U & ((~ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_2_valid)) 
                                    << 2U)) | ((2U 
                                                & ((~ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_1_valid)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_0_valid))))));
    if (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s1_io_in_ready) 
         ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_ready))) {
        ++(vlSymsp->__Vcoverage[881]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s1_io_in_ready 
            = vlSelf->Cache_top__DOT__Cache__DOT__s1_io_in_ready;
    }
    vlSelf->Cache_top__DOT__io_out_coh_req_ready = vlSelf->Cache_top__DOT__Cache__DOT__s1_io_in_ready;
    vlSelf->Cache_top__DOT__Cache__DOT__arb_io_in_1_ready 
        = ((~ (IData)(vlSelf->Cache_top__DOT__io_out_coh_req_valid)) 
           & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s1_io_in_ready));
    if ((1U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__hitVec) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__hitVec)))) {
        ++(vlSymsp->__Vcoverage[2973]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__hitVec 
            = ((0xeU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__hitVec)) 
               | (1U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__hitVec)));
    }
    if ((2U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__hitVec) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__hitVec)))) {
        ++(vlSymsp->__Vcoverage[2974]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__hitVec 
            = ((0xdU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__hitVec)) 
               | (2U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__hitVec)));
    }
    if ((4U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__hitVec) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__hitVec)))) {
        ++(vlSymsp->__Vcoverage[2975]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__hitVec 
            = ((0xbU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__hitVec)) 
               | (4U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__hitVec)));
    }
    if ((8U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__hitVec) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__hitVec)))) {
        ++(vlSymsp->__Vcoverage[2976]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__hitVec 
            = ((7U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__hitVec)) 
               | (8U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__hitVec)));
    }
    vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_hit 
        = ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__valid) 
           & (0U != (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__hitVec)));
    if (((0U != (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__invalidVec)) 
         ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__hasInvalidWay))) {
        ++(vlSymsp->__Vcoverage[3050]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__hasInvalidWay 
            = (0U != (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__invalidVec));
    }
    if ((1U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__invalidVec) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__invalidVec)))) {
        ++(vlSymsp->__Vcoverage[3046]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__invalidVec 
            = ((0xeU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__invalidVec)) 
               | (1U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__invalidVec)));
    }
    if ((2U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__invalidVec) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__invalidVec)))) {
        ++(vlSymsp->__Vcoverage[3047]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__invalidVec 
            = ((0xdU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__invalidVec)) 
               | (2U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__invalidVec)));
    }
    if ((4U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__invalidVec) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__invalidVec)))) {
        ++(vlSymsp->__Vcoverage[3048]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__invalidVec 
            = ((0xbU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__invalidVec)) 
               | (4U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__invalidVec)));
    }
    if ((8U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__invalidVec) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__invalidVec)))) {
        ++(vlSymsp->__Vcoverage[3049]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__invalidVec 
            = ((7U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__invalidVec)) 
               | (8U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__invalidVec)));
    }
    vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__refillInvalidWaymask 
        = ((8U <= (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__invalidVec))
            ? 8U : ((4U <= (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__invalidVec))
                     ? 4U : ((2U <= (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__invalidVec))
                              ? 2U : 1U)));
    if (((IData)(vlSelf->Cache_top__DOT__io_out_coh_req_ready) 
         ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_req_ready))) {
        ++(vlSymsp->__Vcoverage[402]);
        vlSelf->Cache_top__DOT____Vtogcov__io_out_coh_req_ready 
            = vlSelf->Cache_top__DOT__io_out_coh_req_ready;
    }
    if (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_in_1_ready) 
         ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__arb_io_in_1_ready))) {
        ++(vlSymsp->__Vcoverage[2793]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__arb_io_in_1_ready 
            = vlSelf->Cache_top__DOT__Cache__DOT__arb_io_in_1_ready;
    }
    vlSelf->Cache_top__DOT__io_in_req_ready = vlSelf->Cache_top__DOT__Cache__DOT__arb_io_in_1_ready;
    if (((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_hit) 
         ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_hit))) {
        ++(vlSymsp->__Vcoverage[1565]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_hit 
            = vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_hit;
    }
    if ((1U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__refillInvalidWaymask) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__refillInvalidWaymask)))) {
        ++(vlSymsp->__Vcoverage[3051]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__refillInvalidWaymask 
            = ((0xeU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__refillInvalidWaymask)) 
               | (1U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__refillInvalidWaymask)));
    }
    if ((2U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__refillInvalidWaymask) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__refillInvalidWaymask)))) {
        ++(vlSymsp->__Vcoverage[3052]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__refillInvalidWaymask 
            = ((0xdU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__refillInvalidWaymask)) 
               | (2U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__refillInvalidWaymask)));
    }
    if ((4U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__refillInvalidWaymask) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__refillInvalidWaymask)))) {
        ++(vlSymsp->__Vcoverage[3053]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__refillInvalidWaymask 
            = ((0xbU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__refillInvalidWaymask)) 
               | (4U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__refillInvalidWaymask)));
    }
    if ((8U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__refillInvalidWaymask) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__refillInvalidWaymask)))) {
        ++(vlSymsp->__Vcoverage[3054]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__refillInvalidWaymask 
            = ((7U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__refillInvalidWaymask)) 
               | (8U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__refillInvalidWaymask)));
    }
    Cache_top__DOT__Cache__DOT__s2__DOT___waymask_T 
        = (0xfU & ((0U != (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__invalidVec))
                    ? (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__refillInvalidWaymask)
                    : ((IData)(1U) << (3U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__victimWaymask_lfsr)))));
    if (((IData)(vlSelf->Cache_top__DOT__io_in_req_ready) 
         ^ (IData)(vlSelf->Cache_top__DOT____Vtogcov__io_in_req_ready))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->Cache_top__DOT____Vtogcov__io_in_req_ready 
            = vlSelf->Cache_top__DOT__io_in_req_ready;
    }
    if (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_hit) {
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__waymask 
            = vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__hitVec;
        vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_waymask 
            = vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__hitVec;
    } else {
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__waymask 
            = Cache_top__DOT__Cache__DOT__s2__DOT___waymask_T;
        vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_waymask 
            = Cache_top__DOT__Cache__DOT__s2__DOT___waymask_T;
    }
    if ((1U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__waymask) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__waymask)))) {
        ++(vlSymsp->__Vcoverage[3055]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__waymask 
            = ((0xeU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__waymask)) 
               | (1U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__waymask)));
    }
    if ((2U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__waymask) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__waymask)))) {
        ++(vlSymsp->__Vcoverage[3056]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__waymask 
            = ((0xdU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__waymask)) 
               | (2U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__waymask)));
    }
    if ((4U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__waymask) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__waymask)))) {
        ++(vlSymsp->__Vcoverage[3057]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__waymask 
            = ((0xbU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__waymask)) 
               | (4U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__waymask)));
    }
    if ((8U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__waymask) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__waymask)))) {
        ++(vlSymsp->__Vcoverage[3058]);
        vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__waymask 
            = ((7U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT____Vtogcov__waymask)) 
               | (8U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__waymask)));
    }
    if ((1U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_waymask) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_waymask)))) {
        ++(vlSymsp->__Vcoverage[1566]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_waymask 
            = ((0xeU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_waymask)) 
               | (1U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_waymask)));
    }
    if ((2U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_waymask) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_waymask)))) {
        ++(vlSymsp->__Vcoverage[1567]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_waymask 
            = ((0xdU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_waymask)) 
               | (2U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_waymask)));
    }
    if ((4U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_waymask) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_waymask)))) {
        ++(vlSymsp->__Vcoverage[1568]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_waymask 
            = ((0xbU & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_waymask)) 
               | (4U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_waymask)));
    }
    if ((8U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_waymask) 
               ^ (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_waymask)))) {
        ++(vlSymsp->__Vcoverage[1569]);
        vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_waymask 
            = ((7U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT____Vtogcov__s2_io_out_bits_waymask)) 
               | (8U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_waymask)));
    }
}
