// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCache__Syms.h"


void VCache___024root__trace_chg_sub_0(VCache___024root* vlSelf, VerilatedVcd* tracep);

void VCache___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root__trace_chg_top_0\n"); );
    // Init
    VCache___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCache___024root*>(voidSelf);
    VCache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VCache___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VCache___024root__trace_chg_sub_0(VCache___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgIData(oldp+0,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray_io_r_0_resp_data_0_tag),19);
        tracep->chgBit(oldp+1,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray_io_r_0_resp_data_0_valid));
        tracep->chgBit(oldp+2,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray_io_r_0_resp_data_0_dirty));
        tracep->chgIData(oldp+3,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray_io_r_0_resp_data_1_tag),19);
        tracep->chgBit(oldp+4,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray_io_r_0_resp_data_1_valid));
        tracep->chgBit(oldp+5,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray_io_r_0_resp_data_1_dirty));
        tracep->chgIData(oldp+6,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray_io_r_0_resp_data_2_tag),19);
        tracep->chgBit(oldp+7,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray_io_r_0_resp_data_2_valid));
        tracep->chgBit(oldp+8,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray_io_r_0_resp_data_2_dirty));
        tracep->chgIData(oldp+9,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray_io_r_0_resp_data_3_tag),19);
        tracep->chgBit(oldp+10,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray_io_r_0_resp_data_3_valid));
        tracep->chgBit(oldp+11,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray_io_r_0_resp_data_3_dirty));
        tracep->chgQData(oldp+12,(vlSelf->Cache_top__DOT__Cache__DOT__dataArray_io_r_0_resp_data_0_data),64);
        tracep->chgQData(oldp+14,(vlSelf->Cache_top__DOT__Cache__DOT__dataArray_io_r_0_resp_data_1_data),64);
        tracep->chgQData(oldp+16,(vlSelf->Cache_top__DOT__Cache__DOT__dataArray_io_r_0_resp_data_2_data),64);
        tracep->chgQData(oldp+18,(vlSelf->Cache_top__DOT__Cache__DOT__dataArray_io_r_0_resp_data_3_data),64);
        tracep->chgBit(oldp+20,(vlSelf->Cache_top__DOT__Cache__DOT__valid));
        tracep->chgIData(oldp+21,(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_bits_r_req_addr),32);
        tracep->chgCData(oldp+22,(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_bits_r_req_size),3);
        tracep->chgCData(oldp+23,(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_bits_r_req_cmd),4);
        tracep->chgCData(oldp+24,(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_bits_r_req_wmask),8);
        tracep->chgQData(oldp+25,(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_bits_r_req_wdata),64);
        tracep->chgSData(oldp+27,(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_bits_r_req_user),16);
        tracep->chgBit(oldp+28,(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_mmio));
        tracep->chgCData(oldp+29,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_setIdx),7);
        tracep->chgIData(oldp+30,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_data_tag),19);
        tracep->chgBit(oldp+31,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_bits_data_dirty));
        tracep->chgCData(oldp+32,(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_bits_r_waymask),4);
        tracep->chgSData(oldp+33,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_setIdx),10);
        tracep->chgBit(oldp+34,(vlSelf->Cache_top__DOT__Cache__DOT__valid_1));
        tracep->chgIData(oldp+35,(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_bits_r_req_addr),32);
        tracep->chgCData(oldp+36,(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_bits_r_req_size),3);
        tracep->chgCData(oldp+37,(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_bits_r_req_cmd),4);
        tracep->chgCData(oldp+38,(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_bits_r_req_wmask),8);
        tracep->chgQData(oldp+39,(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_bits_r_req_wdata),64);
        tracep->chgSData(oldp+41,(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_bits_r_req_user),16);
        tracep->chgIData(oldp+42,(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_bits_r_metas_0_tag),19);
        tracep->chgBit(oldp+43,(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_bits_r_metas_0_dirty));
        tracep->chgIData(oldp+44,(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_bits_r_metas_1_tag),19);
        tracep->chgBit(oldp+45,(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_bits_r_metas_1_dirty));
        tracep->chgIData(oldp+46,(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_bits_r_metas_2_tag),19);
        tracep->chgBit(oldp+47,(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_bits_r_metas_2_dirty));
        tracep->chgIData(oldp+48,(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_bits_r_metas_3_tag),19);
        tracep->chgBit(oldp+49,(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_bits_r_metas_3_dirty));
        tracep->chgQData(oldp+50,(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_bits_r_datas_0_data),64);
        tracep->chgQData(oldp+52,(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_bits_r_datas_1_data),64);
        tracep->chgQData(oldp+54,(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_bits_r_datas_2_data),64);
        tracep->chgQData(oldp+56,(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_bits_r_datas_3_data),64);
        tracep->chgBit(oldp+58,(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_bits_r_hit));
        tracep->chgBit(oldp+59,(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_bits_r_mmio));
        tracep->chgBit(oldp+60,(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_bits_r_isForwardData));
        tracep->chgQData(oldp+61,(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_bits_r_forwardData_data_data),64);
        tracep->chgCData(oldp+63,(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_bits_r_forwardData_waymask),4);
        tracep->chgBit(oldp+64,(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_valid));
        tracep->chgCData(oldp+65,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT___io_out_bits_cmd_T_7),4);
        tracep->chgQData(oldp+66,(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_out_bits_rdata),64);
        tracep->chgBit(oldp+68,(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_dataReadBus_req_valid));
        tracep->chgSData(oldp+69,(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_dataReadBus_req_bits_setIdx),10);
        tracep->chgQData(oldp+70,(vlSelf->Cache_top__DOT__Cache__DOT__dataArray_io_r_1_resp_data_0_data),64);
        tracep->chgQData(oldp+72,(vlSelf->Cache_top__DOT__Cache__DOT__dataArray_io_r_1_resp_data_1_data),64);
        tracep->chgQData(oldp+74,(vlSelf->Cache_top__DOT__Cache__DOT__dataArray_io_r_1_resp_data_2_data),64);
        tracep->chgQData(oldp+76,(vlSelf->Cache_top__DOT__Cache__DOT__dataArray_io_r_1_resp_data_3_data),64);
        tracep->chgBit(oldp+78,(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_valid));
        tracep->chgIData(oldp+79,(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_addr),32);
        tracep->chgCData(oldp+80,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__cmd),4);
        tracep->chgQData(oldp+81,(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_mem_req_bits_wdata),64);
        tracep->chgBit(oldp+83,((5U == (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state))));
        tracep->chgBit(oldp+84,(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_cohResp_valid));
        tracep->chgQData(oldp+85,(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_cohResp_bits_rdata),64);
        tracep->chgQData(oldp+87,(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__ram__DOT__array_0_rdata_MPORT_data),64);
        tracep->chgQData(oldp+89,(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__ram__DOT__array_1_rdata_MPORT_data),64);
        tracep->chgQData(oldp+91,(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__ram__DOT__array_2_rdata_MPORT_data),64);
        tracep->chgQData(oldp+93,(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__ram__DOT__array_3_rdata_MPORT_data),64);
        tracep->chgBit(oldp+95,(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__REG));
        tracep->chgQData(oldp+96,(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__r___05F0_data),64);
        tracep->chgQData(oldp+98,(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__r___05F1_data),64);
        tracep->chgQData(oldp+100,(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__r___05F2_data),64);
        tracep->chgQData(oldp+102,(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__r___05F3_data),64);
        tracep->chgBit(oldp+104,(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__REG_1));
        tracep->chgQData(oldp+105,(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__r_1_0_data),64);
        tracep->chgQData(oldp+107,(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__r_1_1_data),64);
        tracep->chgQData(oldp+109,(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__r_1_2_data),64);
        tracep->chgQData(oldp+111,(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__r_1_3_data),64);
        tracep->chgBit(oldp+113,(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__ram__DOT__array_0_rdata_MPORT_en_pipe_0));
        tracep->chgSData(oldp+114,(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__ram__DOT__array_0_rdata_MPORT_addr_pipe_0),10);
        tracep->chgBit(oldp+115,((1U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_bits_r_waymask))));
        tracep->chgBit(oldp+116,(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__ram__DOT__array_1_rdata_MPORT_en_pipe_0));
        tracep->chgSData(oldp+117,(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__ram__DOT__array_1_rdata_MPORT_addr_pipe_0),10);
        tracep->chgBit(oldp+118,((1U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_bits_r_waymask) 
                                        >> 1U))));
        tracep->chgBit(oldp+119,(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__ram__DOT__array_2_rdata_MPORT_en_pipe_0));
        tracep->chgSData(oldp+120,(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__ram__DOT__array_2_rdata_MPORT_addr_pipe_0),10);
        tracep->chgBit(oldp+121,((1U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_bits_r_waymask) 
                                        >> 2U))));
        tracep->chgBit(oldp+122,(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__ram__DOT__array_3_rdata_MPORT_en_pipe_0));
        tracep->chgSData(oldp+123,(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__ram__DOT__array_3_rdata_MPORT_addr_pipe_0),10);
        tracep->chgBit(oldp+124,((1U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_bits_r_waymask) 
                                        >> 3U))));
        tracep->chgIData(oldp+125,((0x7ffffU & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_rdata_MPORT_data 
                                                >> 2U))),19);
        tracep->chgBit(oldp+126,((1U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_rdata_MPORT_data 
                                        >> 1U))));
        tracep->chgBit(oldp+127,((1U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_rdata_MPORT_data)));
        tracep->chgIData(oldp+128,((0x7ffffU & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_rdata_MPORT_data 
                                                >> 2U))),19);
        tracep->chgBit(oldp+129,((1U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_rdata_MPORT_data 
                                        >> 1U))));
        tracep->chgBit(oldp+130,((1U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_rdata_MPORT_data)));
        tracep->chgIData(oldp+131,((0x7ffffU & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_rdata_MPORT_data 
                                                >> 2U))),19);
        tracep->chgBit(oldp+132,((1U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_rdata_MPORT_data 
                                        >> 1U))));
        tracep->chgBit(oldp+133,((1U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_rdata_MPORT_data)));
        tracep->chgIData(oldp+134,((0x7ffffU & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_rdata_MPORT_data 
                                                >> 2U))),19);
        tracep->chgBit(oldp+135,((1U & (vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_rdata_MPORT_data 
                                        >> 1U))));
        tracep->chgBit(oldp+136,((1U & vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_rdata_MPORT_data)));
        tracep->chgBit(oldp+137,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__REG));
        tracep->chgIData(oldp+138,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__r_0_tag),19);
        tracep->chgBit(oldp+139,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__r_0_valid));
        tracep->chgBit(oldp+140,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__r_0_dirty));
        tracep->chgIData(oldp+141,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__r_1_tag),19);
        tracep->chgBit(oldp+142,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__r_1_valid));
        tracep->chgBit(oldp+143,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__r_1_dirty));
        tracep->chgIData(oldp+144,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__r_2_tag),19);
        tracep->chgBit(oldp+145,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__r_2_valid));
        tracep->chgBit(oldp+146,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__r_2_dirty));
        tracep->chgIData(oldp+147,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__r_3_tag),19);
        tracep->chgBit(oldp+148,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__r_3_valid));
        tracep->chgBit(oldp+149,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__r_3_dirty));
        tracep->chgBit(oldp+150,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_rdata_MPORT_en_pipe_0));
        tracep->chgCData(oldp+151,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_rdata_MPORT_addr_pipe_0),7);
        tracep->chgIData(oldp+152,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_rdata_MPORT_data),21);
        tracep->chgIData(oldp+153,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_data),21);
        tracep->chgCData(oldp+154,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_addr),7);
        tracep->chgBit(oldp+155,((1U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__waymask))));
        tracep->chgBit(oldp+156,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_rdata_MPORT_en_pipe_0));
        tracep->chgCData(oldp+157,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_rdata_MPORT_addr_pipe_0),7);
        tracep->chgIData(oldp+158,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_rdata_MPORT_data),21);
        tracep->chgIData(oldp+159,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_data),21);
        tracep->chgCData(oldp+160,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_addr),7);
        tracep->chgBit(oldp+161,((1U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__waymask) 
                                        >> 1U))));
        tracep->chgBit(oldp+162,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_rdata_MPORT_en_pipe_0));
        tracep->chgCData(oldp+163,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_rdata_MPORT_addr_pipe_0),7);
        tracep->chgIData(oldp+164,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_rdata_MPORT_data),21);
        tracep->chgIData(oldp+165,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_data),21);
        tracep->chgCData(oldp+166,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_addr),7);
        tracep->chgBit(oldp+167,((1U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__waymask) 
                                        >> 2U))));
        tracep->chgBit(oldp+168,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_rdata_MPORT_en_pipe_0));
        tracep->chgCData(oldp+169,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_rdata_MPORT_addr_pipe_0),7);
        tracep->chgIData(oldp+170,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_rdata_MPORT_data),21);
        tracep->chgIData(oldp+171,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_data),21);
        tracep->chgCData(oldp+172,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_addr),7);
        tracep->chgBit(oldp+173,((1U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__waymask) 
                                        >> 3U))));
        tracep->chgBit(oldp+174,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__resetState));
        tracep->chgCData(oldp+175,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__resetSet),7);
        tracep->chgBit(oldp+176,((0x7fU == (IData)(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__resetSet))));
        tracep->chgBit(oldp+177,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__resetFinish));
        tracep->chgCData(oldp+178,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__waymask),4);
        tracep->chgCData(oldp+179,((7U & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_bits_r_req_addr 
                                          >> 3U))),3);
        tracep->chgCData(oldp+180,((0x7fU & (vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_bits_r_req_addr 
                                             >> 6U))),7);
        tracep->chgIData(oldp+181,((vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_bits_r_req_addr 
                                    >> 0xdU)),19);
        tracep->chgBit(oldp+182,(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__isForwardMetaReg));
        tracep->chgIData(oldp+183,(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__forwardMetaReg_data_tag),19);
        tracep->chgBit(oldp+184,(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__forwardMetaReg_data_dirty));
        tracep->chgCData(oldp+185,(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__forwardMetaReg_waymask),4);
        tracep->chgQData(oldp+186,(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__victimWaymask_lfsr),64);
        tracep->chgBit(oldp+188,(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__victimWaymask_xor));
        tracep->chgCData(oldp+189,((0xfU & ((IData)(1U) 
                                            << (3U 
                                                & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__victimWaymask_lfsr))))),4);
        tracep->chgBit(oldp+190,(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__isForwardDataReg));
        tracep->chgQData(oldp+191,(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__forwardDataReg_data_data),64);
        tracep->chgCData(oldp+193,(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__forwardDataReg_waymask),4);
        tracep->chgBit(oldp+194,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_in_0_valid));
        tracep->chgCData(oldp+195,((0x7fU & (vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_bits_r_req_addr 
                                             >> 6U))),7);
        tracep->chgIData(oldp+196,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_in_0_bits_data_tag),19);
        tracep->chgIData(oldp+197,((vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_bits_r_req_addr 
                                    >> 0xdU)),19);
        tracep->chgBit(oldp+198,((1U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_bits_r_req_cmd))));
        tracep->chgBit(oldp+199,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_valid));
        tracep->chgSData(oldp+200,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_setIdx),10);
        tracep->chgQData(oldp+201,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_bits_data_data),64);
        tracep->chgSData(oldp+203,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_setIdx),10);
        tracep->chgCData(oldp+204,((7U & (vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_bits_r_req_addr 
                                          >> 3U))),3);
        tracep->chgBit(oldp+205,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__mmio));
        tracep->chgBit(oldp+206,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__hit));
        tracep->chgBit(oldp+207,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__miss));
        tracep->chgBit(oldp+208,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__probe));
        tracep->chgBit(oldp+209,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__hitReadBurst));
        tracep->chgBit(oldp+210,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__meta_dirty));
        tracep->chgIData(oldp+211,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__meta_tag),19);
        tracep->chgBit(oldp+212,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__useForwardData));
        tracep->chgQData(oldp+213,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataRead),64);
        tracep->chgQData(oldp+215,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__wordMask),64);
        tracep->chgCData(oldp+217,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__writeL2BeatCnt_value),3);
        tracep->chgBit(oldp+218,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__hitWrite));
        tracep->chgBit(oldp+219,(((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__hitWrite) 
                                  & (~ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__meta_dirty)))));
        tracep->chgCData(oldp+220,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state),4);
        tracep->chgBit(oldp+221,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__needFlush));
        tracep->chgCData(oldp+222,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__readBeatCnt_value),3);
        tracep->chgCData(oldp+223,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__writeBeatCnt_value),3);
        tracep->chgCData(oldp+224,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__state2),2);
        tracep->chgQData(oldp+225,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWay_0_data),64);
        tracep->chgQData(oldp+227,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWay_1_data),64);
        tracep->chgQData(oldp+229,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWay_2_data),64);
        tracep->chgQData(oldp+231,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWay_3_data),64);
        tracep->chgIData(oldp+233,((0xfffffff8U & vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_bits_r_req_addr)),32);
        tracep->chgIData(oldp+234,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__waddr),32);
        tracep->chgCData(oldp+235,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__cmd),3);
        tracep->chgBit(oldp+236,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__afterFirstRead));
        tracep->chgBit(oldp+237,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__alreadyOutFire));
        tracep->chgQData(oldp+238,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__inRdataRegDemand),64);
        tracep->chgCData(oldp+240,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__releaseLast_c_value),3);
        tracep->chgBit(oldp+241,((7U == (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__releaseLast_c_value))));
        tracep->chgCData(oldp+242,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__respToL1Last_c_value),3);
        tracep->chgBit(oldp+243,((7U == (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__respToL1Last_c_value))));
        tracep->chgBit(oldp+244,((1U & (~ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_0_valid)))));
        tracep->chgBit(oldp+245,((1U & (~ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_in_0_valid)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgBit(oldp+246,(vlSelf->Cache_top__DOT__Cache__DOT__s1_io_in_ready));
        tracep->chgBit(oldp+247,(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_in_ready));
        tracep->chgBit(oldp+248,(vlSelf->Cache_top__DOT__Cache__DOT__s1_io_out_valid));
        tracep->chgBit(oldp+249,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram_io_r_req_ready));
        tracep->chgBit(oldp+250,(vlSelf->Cache_top__DOT__Cache__DOT__s1_io_metaReadBus_req_valid));
        tracep->chgBit(oldp+251,((1U & (~ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_valid)))));
        tracep->chgBit(oldp+252,(vlSelf->Cache_top__DOT__Cache__DOT__s1_io_dataReadBus_req_valid));
        tracep->chgBit(oldp+253,(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_in_ready));
        tracep->chgIData(oldp+254,(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_0_tag),19);
        tracep->chgBit(oldp+255,(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_0_dirty));
        tracep->chgIData(oldp+256,(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_1_tag),19);
        tracep->chgBit(oldp+257,(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_1_dirty));
        tracep->chgIData(oldp+258,(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_2_tag),19);
        tracep->chgBit(oldp+259,(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_2_dirty));
        tracep->chgIData(oldp+260,(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_3_tag),19);
        tracep->chgBit(oldp+261,(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_metas_3_dirty));
        tracep->chgBit(oldp+262,(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_hit));
        tracep->chgCData(oldp+263,(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_waymask),4);
        tracep->chgBit(oldp+264,(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_isForwardData));
        tracep->chgQData(oldp+265,(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_data_data),64);
        tracep->chgCData(oldp+267,(vlSelf->Cache_top__DOT__Cache__DOT__s2_io_out_bits_forwardData_waymask),4);
        tracep->chgBit(oldp+268,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_out_valid));
        tracep->chgBit(oldp+269,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_valid));
        tracep->chgQData(oldp+270,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_out_bits_data_data),64);
        tracep->chgBit(oldp+272,(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_isFinish));
        tracep->chgBit(oldp+273,(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__readArb_io_in_1_ready));
        tracep->chgCData(oldp+274,(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_cohResp_bits_cmd),4);
        tracep->chgBit(oldp+275,(vlSelf->Cache_top__DOT__Cache__DOT__s3_io_dataReadRespToL1));
        tracep->chgBit(oldp+276,(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_in_1_ready));
        tracep->chgBit(oldp+277,(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__readArb_io_out_valid));
        tracep->chgBit(oldp+278,((1U & (~ (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s1_io_dataReadBus_req_valid)))));
        tracep->chgBit(oldp+279,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_0_MPORT_en));
        tracep->chgBit(oldp+280,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_1_MPORT_en));
        tracep->chgBit(oldp+281,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_2_MPORT_en));
        tracep->chgBit(oldp+282,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__array_3_MPORT_en));
        tracep->chgBit(oldp+283,(vlSelf->Cache_top__DOT__Cache__DOT__metaArray__DOT__ram__DOT__wen));
        tracep->chgBit(oldp+284,(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__isForwardMeta));
        tracep->chgBit(oldp+285,(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__pickForwardMeta));
        tracep->chgBit(oldp+286,((1U & (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT___GEN_6))));
        tracep->chgBit(oldp+287,((1U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT___GEN_6) 
                                        >> 1U))));
        tracep->chgBit(oldp+288,((1U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT___GEN_6) 
                                        >> 2U))));
        tracep->chgBit(oldp+289,((1U & ((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT___GEN_6) 
                                        >> 3U))));
        tracep->chgIData(oldp+290,(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_0_tag),19);
        tracep->chgBit(oldp+291,(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_0_valid));
        tracep->chgIData(oldp+292,(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_1_tag),19);
        tracep->chgBit(oldp+293,(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_1_valid));
        tracep->chgIData(oldp+294,(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_2_tag),19);
        tracep->chgBit(oldp+295,(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_2_valid));
        tracep->chgIData(oldp+296,(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_3_tag),19);
        tracep->chgBit(oldp+297,(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__metaWay_3_valid));
        tracep->chgCData(oldp+298,(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__hitVec),4);
        tracep->chgCData(oldp+299,(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__invalidVec),4);
        tracep->chgBit(oldp+300,((0U != (IData)(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__invalidVec))));
        tracep->chgCData(oldp+301,(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__refillInvalidWaymask),4);
        tracep->chgCData(oldp+302,(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__waymask),4);
        tracep->chgBit(oldp+303,(vlSelf->Cache_top__DOT__Cache__DOT__s2__DOT__isForwardData));
        tracep->chgBit(oldp+304,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__metaWriteArb_io_in_1_valid));
        tracep->chgBit(oldp+305,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_valid));
        tracep->chgQData(oldp+306,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataWriteArb_io_in_1_bits_data_data),64);
        tracep->chgBit(oldp+308,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__readingFirst));
        tracep->chgBit(oldp+309,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__releaseLast));
        tracep->chgBit(oldp+310,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__respToL1Fire));
        tracep->chgBit(oldp+311,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__respToL1Last));
        tracep->chgBit(oldp+312,(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataRefillWriteBus_x9));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        tracep->chgIData(oldp+313,(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr),32);
        tracep->chgCData(oldp+314,(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_size),3);
        tracep->chgCData(oldp+315,(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_cmd),4);
        tracep->chgCData(oldp+316,(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wmask),8);
        tracep->chgQData(oldp+317,(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_wdata),64);
        tracep->chgSData(oldp+319,(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_user),16);
        tracep->chgCData(oldp+320,((0x7fU & (vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr 
                                             >> 6U))),7);
        tracep->chgSData(oldp+321,((0x3ffU & (vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_bits_addr 
                                              >> 3U))),10);
    }
    tracep->chgBit(oldp+322,(vlSelf->Cache_top__DOT__clock));
    tracep->chgBit(oldp+323,(vlSelf->Cache_top__DOT__reset));
    tracep->chgBit(oldp+324,(vlSelf->Cache_top__DOT__io_in_req_ready));
    tracep->chgBit(oldp+325,(vlSelf->Cache_top__DOT__io_in_req_valid));
    tracep->chgIData(oldp+326,(vlSelf->Cache_top__DOT__io_in_req_bits_addr),32);
    tracep->chgCData(oldp+327,(vlSelf->Cache_top__DOT__io_in_req_bits_size),3);
    tracep->chgCData(oldp+328,(vlSelf->Cache_top__DOT__io_in_req_bits_cmd),4);
    tracep->chgCData(oldp+329,(vlSelf->Cache_top__DOT__io_in_req_bits_wmask),8);
    tracep->chgQData(oldp+330,(vlSelf->Cache_top__DOT__io_in_req_bits_wdata),64);
    tracep->chgSData(oldp+332,(vlSelf->Cache_top__DOT__io_in_req_bits_user),16);
    tracep->chgBit(oldp+333,(vlSelf->Cache_top__DOT__io_in_resp_ready));
    tracep->chgBit(oldp+334,(vlSelf->Cache_top__DOT__io_in_resp_valid));
    tracep->chgCData(oldp+335,(vlSelf->Cache_top__DOT__io_in_resp_bits_cmd),4);
    tracep->chgQData(oldp+336,(vlSelf->Cache_top__DOT__io_in_resp_bits_rdata),64);
    tracep->chgSData(oldp+338,(vlSelf->Cache_top__DOT__io_in_resp_bits_user),16);
    tracep->chgCData(oldp+339,(vlSelf->Cache_top__DOT__io_flush),2);
    tracep->chgBit(oldp+340,(vlSelf->Cache_top__DOT__io_out_mem_req_ready));
    tracep->chgBit(oldp+341,(vlSelf->Cache_top__DOT__io_out_mem_req_valid));
    tracep->chgIData(oldp+342,(vlSelf->Cache_top__DOT__io_out_mem_req_bits_addr),32);
    tracep->chgCData(oldp+343,(vlSelf->Cache_top__DOT__io_out_mem_req_bits_size),3);
    tracep->chgCData(oldp+344,(vlSelf->Cache_top__DOT__io_out_mem_req_bits_cmd),4);
    tracep->chgCData(oldp+345,(vlSelf->Cache_top__DOT__io_out_mem_req_bits_wmask),8);
    tracep->chgQData(oldp+346,(vlSelf->Cache_top__DOT__io_out_mem_req_bits_wdata),64);
    tracep->chgBit(oldp+348,(vlSelf->Cache_top__DOT__io_out_mem_resp_ready));
    tracep->chgBit(oldp+349,(vlSelf->Cache_top__DOT__io_out_mem_resp_valid));
    tracep->chgCData(oldp+350,(vlSelf->Cache_top__DOT__io_out_mem_resp_bits_cmd),4);
    tracep->chgQData(oldp+351,(vlSelf->Cache_top__DOT__io_out_mem_resp_bits_rdata),64);
    tracep->chgBit(oldp+353,(vlSelf->Cache_top__DOT__io_out_coh_req_ready));
    tracep->chgBit(oldp+354,(vlSelf->Cache_top__DOT__io_out_coh_req_valid));
    tracep->chgIData(oldp+355,(vlSelf->Cache_top__DOT__io_out_coh_req_bits_addr),32);
    tracep->chgCData(oldp+356,(vlSelf->Cache_top__DOT__io_out_coh_req_bits_size),3);
    tracep->chgCData(oldp+357,(vlSelf->Cache_top__DOT__io_out_coh_req_bits_cmd),4);
    tracep->chgCData(oldp+358,(vlSelf->Cache_top__DOT__io_out_coh_req_bits_wmask),8);
    tracep->chgQData(oldp+359,(vlSelf->Cache_top__DOT__io_out_coh_req_bits_wdata),64);
    tracep->chgBit(oldp+361,(vlSelf->Cache_top__DOT__io_out_coh_resp_ready));
    tracep->chgBit(oldp+362,(vlSelf->Cache_top__DOT__io_out_coh_resp_valid));
    tracep->chgCData(oldp+363,(vlSelf->Cache_top__DOT__io_out_coh_resp_bits_cmd),4);
    tracep->chgQData(oldp+364,(vlSelf->Cache_top__DOT__io_out_coh_resp_bits_rdata),64);
    tracep->chgBit(oldp+366,(vlSelf->Cache_top__DOT__io_mmio_req_ready));
    tracep->chgBit(oldp+367,(vlSelf->Cache_top__DOT__io_mmio_req_valid));
    tracep->chgIData(oldp+368,(vlSelf->Cache_top__DOT__io_mmio_req_bits_addr),32);
    tracep->chgCData(oldp+369,(vlSelf->Cache_top__DOT__io_mmio_req_bits_size),3);
    tracep->chgCData(oldp+370,(vlSelf->Cache_top__DOT__io_mmio_req_bits_cmd),4);
    tracep->chgCData(oldp+371,(vlSelf->Cache_top__DOT__io_mmio_req_bits_wmask),8);
    tracep->chgQData(oldp+372,(vlSelf->Cache_top__DOT__io_mmio_req_bits_wdata),64);
    tracep->chgBit(oldp+374,(vlSelf->Cache_top__DOT__io_mmio_resp_ready));
    tracep->chgBit(oldp+375,(vlSelf->Cache_top__DOT__io_mmio_resp_valid));
    tracep->chgCData(oldp+376,(vlSelf->Cache_top__DOT__io_mmio_resp_bits_cmd),4);
    tracep->chgQData(oldp+377,(vlSelf->Cache_top__DOT__io_mmio_resp_bits_rdata),64);
    tracep->chgBit(oldp+379,(vlSelf->Cache_top__DOT__io_empty));
    tracep->chgBit(oldp+380,(vlSelf->Cache_top__DOT__victim_way_mask_valid));
    tracep->chgCData(oldp+381,(vlSelf->Cache_top__DOT__victim_way_mask),4);
    tracep->chgBit(oldp+382,(vlSelf->Cache_top__DOT__Cache__DOT__arb_io_out_valid));
    tracep->chgBit(oldp+383,((1U & ((IData)(vlSelf->Cache_top__DOT__io_flush) 
                                    >> 1U))));
    tracep->chgBit(oldp+384,((1U & (~ (IData)(vlSelf->Cache_top__DOT__io_out_coh_req_valid)))));
    tracep->chgSData(oldp+385,(vlSelf->Cache_top__DOT__Cache__DOT__dataArray__DOT__readArb_io_out_bits_setIdx),10);
    tracep->chgBit(oldp+386,(((IData)(vlSelf->Cache_top__DOT__Cache__DOT__s3__DOT__dataRefillWriteBus_x9) 
                              & (6U == (IData)(vlSelf->Cache_top__DOT__io_out_mem_resp_bits_cmd)))));
}

void VCache___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCache___024root__trace_cleanup\n"); );
    // Init
    VCache___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCache___024root*>(voidSelf);
    VCache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
