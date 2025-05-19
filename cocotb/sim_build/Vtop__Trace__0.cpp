// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_9;
    VlWide<4>/*127:0*/ __Vtemp_12;
    VlWide<4>/*127:0*/ __Vtemp_15;
    VlWide<4>/*127:0*/ __Vtemp_18;
    VlWide<4>/*127:0*/ __Vtemp_21;
    VlWide<4>/*127:0*/ __Vtemp_24;
    VlWide<3>/*95:0*/ __Vtemp_27;
    VlWide<3>/*95:0*/ __Vtemp_30;
    VlWide<3>/*95:0*/ __Vtemp_33;
    VlWide<3>/*95:0*/ __Vtemp_36;
    VlWide<3>/*95:0*/ __Vtemp_39;
    VlWide<3>/*95:0*/ __Vtemp_42;
    VlWide<3>/*95:0*/ __Vtemp_45;
    VlWide<3>/*95:0*/ __Vtemp_48;
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk_i));
    bufp->chgBit(oldp+1,(vlSelf->rst_ni));
    bufp->chgBit(oldp+2,(vlSelf->config_aw_valid_i));
    bufp->chgQData(oldp+3,(vlSelf->config_aw_addr_i),64);
    bufp->chgCData(oldp+5,(vlSelf->config_aw_len_i),8);
    bufp->chgCData(oldp+6,(vlSelf->config_aw_size_i),3);
    bufp->chgCData(oldp+7,(vlSelf->config_aw_id_i),4);
    bufp->chgBit(oldp+8,(vlSelf->config_aw_ready_o));
    bufp->chgBit(oldp+9,(vlSelf->config_w_valid_i));
    bufp->chgQData(oldp+10,(vlSelf->config_w_data_i),64);
    bufp->chgCData(oldp+12,(vlSelf->config_w_strb_i),8);
    bufp->chgBit(oldp+13,(vlSelf->config_w_last_i));
    bufp->chgBit(oldp+14,(vlSelf->config_w_ready_o));
    bufp->chgBit(oldp+15,(vlSelf->config_ar_valid_i));
    bufp->chgQData(oldp+16,(vlSelf->config_ar_addr_i),64);
    bufp->chgCData(oldp+18,(vlSelf->config_ar_len_i),8);
    bufp->chgCData(oldp+19,(vlSelf->config_ar_size_i),3);
    bufp->chgCData(oldp+20,(vlSelf->config_ar_id_i),4);
    bufp->chgBit(oldp+21,(vlSelf->config_ar_ready_o));
    bufp->chgBit(oldp+22,(vlSelf->config_r_valid_o));
    bufp->chgQData(oldp+23,(vlSelf->config_r_data_o),64);
    bufp->chgCData(oldp+25,(vlSelf->config_r_resp_o),2);
    bufp->chgBit(oldp+26,(vlSelf->config_r_last_o));
    bufp->chgCData(oldp+27,(vlSelf->config_r_id_o),4);
    bufp->chgBit(oldp+28,(vlSelf->config_r_ready_i));
    bufp->chgBit(oldp+29,(vlSelf->config_b_valid_o));
    bufp->chgCData(oldp+30,(vlSelf->config_b_resp_o),2);
    bufp->chgCData(oldp+31,(vlSelf->config_b_id_o),4);
    bufp->chgBit(oldp+32,(vlSelf->config_b_ready_i));
    bufp->chgBit(oldp+33,(vlSelf->mst_aw_valid_o));
    bufp->chgQData(oldp+34,(vlSelf->mst_aw_addr_o),64);
    bufp->chgCData(oldp+36,(vlSelf->mst_aw_len_o),8);
    bufp->chgCData(oldp+37,(vlSelf->mst_aw_size_o),3);
    bufp->chgCData(oldp+38,(vlSelf->mst_aw_wid_o),4);
    bufp->chgCData(oldp+39,(vlSelf->mst_aw_id_o),4);
    bufp->chgBit(oldp+40,(vlSelf->mst_aw_ready_i));
    bufp->chgBit(oldp+41,(vlSelf->mst_w_valid_o));
    bufp->chgQData(oldp+42,(vlSelf->mst_w_data_o),64);
    bufp->chgCData(oldp+44,(vlSelf->mst_w_strb_o),8);
    bufp->chgBit(oldp+45,(vlSelf->mst_w_last_o));
    bufp->chgBit(oldp+46,(vlSelf->mst_w_ready_i));
    bufp->chgBit(oldp+47,(vlSelf->mst_ar_valid_o));
    bufp->chgQData(oldp+48,(vlSelf->mst_ar_addr_o),64);
    bufp->chgCData(oldp+50,(vlSelf->mst_ar_len_o),8);
    bufp->chgCData(oldp+51,(vlSelf->mst_ar_size_o),3);
    bufp->chgCData(oldp+52,(vlSelf->mst_ar_wid_o),4);
    bufp->chgCData(oldp+53,(vlSelf->mst_ar_id_o),4);
    bufp->chgBit(oldp+54,(vlSelf->mst_ar_ready_i));
    bufp->chgBit(oldp+55,(vlSelf->mst_r_valid_i));
    bufp->chgQData(oldp+56,(vlSelf->mst_r_data_i),64);
    bufp->chgCData(oldp+58,(vlSelf->mst_r_resp_i),2);
    bufp->chgBit(oldp+59,(vlSelf->mst_r_last_i));
    bufp->chgCData(oldp+60,(vlSelf->mst_r_id_i),4);
    bufp->chgBit(oldp+61,(vlSelf->mst_r_ready_o));
    bufp->chgBit(oldp+62,(vlSelf->mst_b_valid_i));
    bufp->chgCData(oldp+63,(vlSelf->mst_b_resp_i),2);
    bufp->chgCData(oldp+64,(vlSelf->mst_b_id_i),4);
    bufp->chgBit(oldp+65,(vlSelf->mst_b_ready_o));
    bufp->chgBit(oldp+66,(vlSelf->dut__DOT__clk_i));
    bufp->chgBit(oldp+67,(vlSelf->dut__DOT__rst_ni));
    bufp->chgBit(oldp+68,(vlSelf->dut__DOT__config_aw_valid_i));
    bufp->chgQData(oldp+69,(vlSelf->dut__DOT__config_aw_addr_i),64);
    bufp->chgCData(oldp+71,(vlSelf->dut__DOT__config_aw_len_i),8);
    bufp->chgCData(oldp+72,(vlSelf->dut__DOT__config_aw_size_i),3);
    bufp->chgCData(oldp+73,(vlSelf->dut__DOT__config_aw_id_i),4);
    bufp->chgBit(oldp+74,(vlSelf->dut__DOT__config_aw_ready_o));
    bufp->chgBit(oldp+75,(vlSelf->dut__DOT__config_w_valid_i));
    bufp->chgQData(oldp+76,(vlSelf->dut__DOT__config_w_data_i),64);
    bufp->chgCData(oldp+78,(vlSelf->dut__DOT__config_w_strb_i),8);
    bufp->chgBit(oldp+79,(vlSelf->dut__DOT__config_w_last_i));
    bufp->chgBit(oldp+80,(vlSelf->dut__DOT__config_w_ready_o));
    bufp->chgBit(oldp+81,(vlSelf->dut__DOT__config_ar_valid_i));
    bufp->chgQData(oldp+82,(vlSelf->dut__DOT__config_ar_addr_i),64);
    bufp->chgCData(oldp+84,(vlSelf->dut__DOT__config_ar_len_i),8);
    bufp->chgCData(oldp+85,(vlSelf->dut__DOT__config_ar_size_i),3);
    bufp->chgCData(oldp+86,(vlSelf->dut__DOT__config_ar_id_i),4);
    bufp->chgBit(oldp+87,(vlSelf->dut__DOT__config_ar_ready_o));
    bufp->chgBit(oldp+88,(vlSelf->dut__DOT__config_r_valid_o));
    bufp->chgQData(oldp+89,(vlSelf->dut__DOT__config_r_data_o),64);
    bufp->chgCData(oldp+91,(vlSelf->dut__DOT__config_r_resp_o),2);
    bufp->chgBit(oldp+92,(vlSelf->dut__DOT__config_r_last_o));
    bufp->chgCData(oldp+93,(vlSelf->dut__DOT__config_r_id_o),4);
    bufp->chgBit(oldp+94,(vlSelf->dut__DOT__config_r_ready_i));
    bufp->chgBit(oldp+95,(vlSelf->dut__DOT__config_b_valid_o));
    bufp->chgCData(oldp+96,(vlSelf->dut__DOT__config_b_resp_o),2);
    bufp->chgCData(oldp+97,(vlSelf->dut__DOT__config_b_id_o),4);
    bufp->chgBit(oldp+98,(vlSelf->dut__DOT__config_b_ready_i));
    bufp->chgBit(oldp+99,(vlSelf->dut__DOT__mst_aw_valid_o));
    bufp->chgQData(oldp+100,(vlSelf->dut__DOT__mst_aw_addr_o),64);
    bufp->chgCData(oldp+102,(vlSelf->dut__DOT__mst_aw_len_o),8);
    bufp->chgCData(oldp+103,(vlSelf->dut__DOT__mst_aw_size_o),3);
    bufp->chgCData(oldp+104,(vlSelf->dut__DOT__mst_aw_wid_o),4);
    bufp->chgCData(oldp+105,(vlSelf->dut__DOT__mst_aw_id_o),4);
    bufp->chgBit(oldp+106,(vlSelf->dut__DOT__mst_aw_ready_i));
    bufp->chgBit(oldp+107,(vlSelf->dut__DOT__mst_w_valid_o));
    bufp->chgQData(oldp+108,(vlSelf->dut__DOT__mst_w_data_o),64);
    bufp->chgCData(oldp+110,(vlSelf->dut__DOT__mst_w_strb_o),8);
    bufp->chgBit(oldp+111,(vlSelf->dut__DOT__mst_w_last_o));
    bufp->chgBit(oldp+112,(vlSelf->dut__DOT__mst_w_ready_i));
    bufp->chgBit(oldp+113,(vlSelf->dut__DOT__mst_ar_valid_o));
    bufp->chgQData(oldp+114,(vlSelf->dut__DOT__mst_ar_addr_o),64);
    bufp->chgCData(oldp+116,(vlSelf->dut__DOT__mst_ar_len_o),8);
    bufp->chgCData(oldp+117,(vlSelf->dut__DOT__mst_ar_size_o),3);
    bufp->chgCData(oldp+118,(vlSelf->dut__DOT__mst_ar_wid_o),4);
    bufp->chgCData(oldp+119,(vlSelf->dut__DOT__mst_ar_id_o),4);
    bufp->chgBit(oldp+120,(vlSelf->dut__DOT__mst_ar_ready_i));
    bufp->chgBit(oldp+121,(vlSelf->dut__DOT__mst_r_valid_i));
    bufp->chgQData(oldp+122,(vlSelf->dut__DOT__mst_r_data_i),64);
    bufp->chgCData(oldp+124,(vlSelf->dut__DOT__mst_r_resp_i),2);
    bufp->chgBit(oldp+125,(vlSelf->dut__DOT__mst_r_last_i));
    bufp->chgCData(oldp+126,(vlSelf->dut__DOT__mst_r_id_i),4);
    bufp->chgBit(oldp+127,(vlSelf->dut__DOT__mst_r_ready_o));
    bufp->chgBit(oldp+128,(vlSelf->dut__DOT__mst_b_valid_i));
    bufp->chgCData(oldp+129,(vlSelf->dut__DOT__mst_b_resp_i),2);
    bufp->chgCData(oldp+130,(vlSelf->dut__DOT__mst_b_id_i),4);
    bufp->chgBit(oldp+131,(vlSelf->dut__DOT__mst_b_ready_o));
    bufp->chgBit(oldp+132,((1U & (vlSelf->dut__DOT__config_rsp[2U] 
                                  >> 0x19U))));
    bufp->chgBit(oldp+133,((1U & (vlSelf->dut__DOT__config_rsp[2U] 
                                  >> 0x18U))));
    bufp->chgBit(oldp+134,((1U & (vlSelf->dut__DOT__config_rsp[2U] 
                                  >> 0x17U))));
    bufp->chgBit(oldp+135,((1U & (vlSelf->dut__DOT__config_rsp[2U] 
                                  >> 0x16U))));
    bufp->chgCData(oldp+136,((0xfU & (vlSelf->dut__DOT__config_rsp[2U] 
                                      >> 0x12U))),4);
    bufp->chgCData(oldp+137,((3U & (vlSelf->dut__DOT__config_rsp[2U] 
                                    >> 0x10U))),2);
    bufp->chgCData(oldp+138,((0xfU & (vlSelf->dut__DOT__config_rsp[2U] 
                                      >> 0xcU))),4);
    bufp->chgBit(oldp+139,((1U & (vlSelf->dut__DOT__config_rsp[2U] 
                                  >> 0xbU))));
    bufp->chgCData(oldp+140,((0xfU & (vlSelf->dut__DOT__config_rsp[2U] 
                                      >> 7U))),4);
    bufp->chgQData(oldp+141,((((QData)((IData)(vlSelf->dut__DOT__config_rsp[2U])) 
                               << 0x39U) | (((QData)((IData)(
                                                             vlSelf->dut__DOT__config_rsp[1U])) 
                                             << 0x19U) 
                                            | ((QData)((IData)(
                                                               vlSelf->dut__DOT__config_rsp[0U])) 
                                               >> 7U)))),64);
    bufp->chgCData(oldp+143,((3U & (vlSelf->dut__DOT__config_rsp[0U] 
                                    >> 5U))),2);
    bufp->chgBit(oldp+144,((1U & (vlSelf->dut__DOT__config_rsp[0U] 
                                  >> 4U))));
    bufp->chgCData(oldp+145,((0xfU & vlSelf->dut__DOT__config_rsp[0U])),4);
    bufp->chgCData(oldp+146,((0xfU & ((vlSelf->dut__DOT__config_req[9U] 
                                       << 2U) | (vlSelf->dut__DOT__config_req[8U] 
                                                 >> 0x1eU)))),4);
    bufp->chgQData(oldp+147,((((QData)((IData)(vlSelf->dut__DOT__config_req[8U])) 
                               << 0x22U) | (((QData)((IData)(
                                                             vlSelf->dut__DOT__config_req[7U])) 
                                             << 2U) 
                                            | ((QData)((IData)(
                                                               vlSelf->dut__DOT__config_req[6U])) 
                                               >> 0x1eU)))),64);
    bufp->chgCData(oldp+149,((0xffU & (vlSelf->dut__DOT__config_req[6U] 
                                       >> 0x16U))),8);
    bufp->chgCData(oldp+150,((7U & (vlSelf->dut__DOT__config_req[6U] 
                                    >> 0x13U))),3);
    bufp->chgCData(oldp+151,((3U & (vlSelf->dut__DOT__config_req[6U] 
                                    >> 0x11U))),2);
    bufp->chgBit(oldp+152,((1U & (vlSelf->dut__DOT__config_req[6U] 
                                  >> 0x10U))));
    bufp->chgCData(oldp+153,((0xfU & (vlSelf->dut__DOT__config_req[6U] 
                                      >> 0xcU))),4);
    bufp->chgCData(oldp+154,((7U & (vlSelf->dut__DOT__config_req[6U] 
                                    >> 9U))),3);
    bufp->chgCData(oldp+155,((0xfU & (vlSelf->dut__DOT__config_req[6U] 
                                      >> 5U))),4);
    bufp->chgCData(oldp+156,((0xfU & (vlSelf->dut__DOT__config_req[6U] 
                                      >> 1U))),4);
    bufp->chgCData(oldp+157,((0x3fU & ((vlSelf->dut__DOT__config_req[6U] 
                                        << 5U) | (vlSelf->dut__DOT__config_req[5U] 
                                                  >> 0x1bU)))),6);
    bufp->chgCData(oldp+158,((0xfU & (vlSelf->dut__DOT__config_req[5U] 
                                      >> 0x17U))),4);
    bufp->chgBit(oldp+159,((1U & (vlSelf->dut__DOT__config_req[5U] 
                                  >> 0x16U))));
    bufp->chgQData(oldp+160,((((QData)((IData)(vlSelf->dut__DOT__config_req[5U])) 
                               << 0x2aU) | (((QData)((IData)(
                                                             vlSelf->dut__DOT__config_req[4U])) 
                                             << 0xaU) 
                                            | ((QData)((IData)(
                                                               vlSelf->dut__DOT__config_req[3U])) 
                                               >> 0x16U)))),64);
    bufp->chgCData(oldp+162,((0xffU & (vlSelf->dut__DOT__config_req[3U] 
                                       >> 0xeU))),8);
    bufp->chgBit(oldp+163,((1U & (vlSelf->dut__DOT__config_req[3U] 
                                  >> 0xdU))));
    bufp->chgCData(oldp+164,((0xfU & (vlSelf->dut__DOT__config_req[3U] 
                                      >> 9U))),4);
    bufp->chgBit(oldp+165,((1U & (vlSelf->dut__DOT__config_req[3U] 
                                  >> 8U))));
    bufp->chgBit(oldp+166,((1U & (vlSelf->dut__DOT__config_req[3U] 
                                  >> 7U))));
    bufp->chgCData(oldp+167,((0xfU & (vlSelf->dut__DOT__config_req[3U] 
                                      >> 3U))),4);
    bufp->chgQData(oldp+168,((((QData)((IData)(vlSelf->dut__DOT__config_req[3U])) 
                               << 0x3dU) | (((QData)((IData)(
                                                             vlSelf->dut__DOT__config_req[2U])) 
                                             << 0x1dU) 
                                            | ((QData)((IData)(
                                                               vlSelf->dut__DOT__config_req[1U])) 
                                               >> 3U)))),64);
    bufp->chgCData(oldp+170,((0xffU & ((vlSelf->dut__DOT__config_req[1U] 
                                        << 5U) | (vlSelf->dut__DOT__config_req[0U] 
                                                  >> 0x1bU)))),8);
    bufp->chgCData(oldp+171,((7U & (vlSelf->dut__DOT__config_req[0U] 
                                    >> 0x18U))),3);
    bufp->chgCData(oldp+172,((3U & (vlSelf->dut__DOT__config_req[0U] 
                                    >> 0x16U))),2);
    bufp->chgBit(oldp+173,((1U & (vlSelf->dut__DOT__config_req[0U] 
                                  >> 0x15U))));
    bufp->chgCData(oldp+174,((0xfU & (vlSelf->dut__DOT__config_req[0U] 
                                      >> 0x11U))),4);
    bufp->chgCData(oldp+175,((7U & (vlSelf->dut__DOT__config_req[0U] 
                                    >> 0xeU))),3);
    bufp->chgCData(oldp+176,((0xfU & (vlSelf->dut__DOT__config_req[0U] 
                                      >> 0xaU))),4);
    bufp->chgCData(oldp+177,((0xfU & (vlSelf->dut__DOT__config_req[0U] 
                                      >> 6U))),4);
    bufp->chgCData(oldp+178,((0xfU & (vlSelf->dut__DOT__config_req[0U] 
                                      >> 2U))),4);
    bufp->chgBit(oldp+179,((1U & (vlSelf->dut__DOT__config_req[0U] 
                                  >> 1U))));
    bufp->chgBit(oldp+180,((1U & vlSelf->dut__DOT__config_req[0U])));
    bufp->chgBit(oldp+181,((1U & (vlSelf->dut__DOT__mst_rsp[2U] 
                                  >> 0x19U))));
    bufp->chgBit(oldp+182,((1U & (vlSelf->dut__DOT__mst_rsp[2U] 
                                  >> 0x18U))));
    bufp->chgBit(oldp+183,((1U & (vlSelf->dut__DOT__mst_rsp[2U] 
                                  >> 0x17U))));
    bufp->chgBit(oldp+184,((1U & (vlSelf->dut__DOT__mst_rsp[2U] 
                                  >> 0x16U))));
    bufp->chgCData(oldp+185,((0xfU & (vlSelf->dut__DOT__mst_rsp[2U] 
                                      >> 0x12U))),4);
    bufp->chgCData(oldp+186,((3U & (vlSelf->dut__DOT__mst_rsp[2U] 
                                    >> 0x10U))),2);
    bufp->chgCData(oldp+187,((0xfU & (vlSelf->dut__DOT__mst_rsp[2U] 
                                      >> 0xcU))),4);
    bufp->chgBit(oldp+188,((1U & (vlSelf->dut__DOT__mst_rsp[2U] 
                                  >> 0xbU))));
    bufp->chgCData(oldp+189,((0xfU & (vlSelf->dut__DOT__mst_rsp[2U] 
                                      >> 7U))),4);
    bufp->chgQData(oldp+190,((((QData)((IData)(vlSelf->dut__DOT__mst_rsp[2U])) 
                               << 0x39U) | (((QData)((IData)(
                                                             vlSelf->dut__DOT__mst_rsp[1U])) 
                                             << 0x19U) 
                                            | ((QData)((IData)(
                                                               vlSelf->dut__DOT__mst_rsp[0U])) 
                                               >> 7U)))),64);
    bufp->chgCData(oldp+192,((3U & (vlSelf->dut__DOT__mst_rsp[0U] 
                                    >> 5U))),2);
    bufp->chgBit(oldp+193,((1U & (vlSelf->dut__DOT__mst_rsp[0U] 
                                  >> 4U))));
    bufp->chgCData(oldp+194,((0xfU & vlSelf->dut__DOT__mst_rsp[0U])),4);
    bufp->chgCData(oldp+195,((0xfU & (vlSelf->dut__DOT__mst_req[9U] 
                                      >> 6U))),4);
    bufp->chgQData(oldp+196,((((QData)((IData)(vlSelf->dut__DOT__mst_req[9U])) 
                               << 0x3aU) | (((QData)((IData)(
                                                             vlSelf->dut__DOT__mst_req[8U])) 
                                             << 0x1aU) 
                                            | ((QData)((IData)(
                                                               vlSelf->dut__DOT__mst_req[7U])) 
                                               >> 6U)))),64);
    bufp->chgCData(oldp+198,((0xffU & ((vlSelf->dut__DOT__mst_req[7U] 
                                        << 2U) | (vlSelf->dut__DOT__mst_req[6U] 
                                                  >> 0x1eU)))),8);
    bufp->chgCData(oldp+199,((7U & (vlSelf->dut__DOT__mst_req[6U] 
                                    >> 0x1bU))),3);
    bufp->chgCData(oldp+200,((3U & (vlSelf->dut__DOT__mst_req[6U] 
                                    >> 0x19U))),2);
    bufp->chgBit(oldp+201,((1U & (vlSelf->dut__DOT__mst_req[6U] 
                                  >> 0x18U))));
    bufp->chgCData(oldp+202,((0xfU & (vlSelf->dut__DOT__mst_req[6U] 
                                      >> 0x14U))),4);
    bufp->chgCData(oldp+203,((7U & (vlSelf->dut__DOT__mst_req[6U] 
                                    >> 0x11U))),3);
    bufp->chgCData(oldp+204,((0xfU & (vlSelf->dut__DOT__mst_req[6U] 
                                      >> 0xdU))),4);
    bufp->chgCData(oldp+205,((0xfU & (vlSelf->dut__DOT__mst_req[6U] 
                                      >> 9U))),4);
    bufp->chgCData(oldp+206,((0x3fU & (vlSelf->dut__DOT__mst_req[6U] 
                                       >> 3U))),6);
    bufp->chgCData(oldp+207,((0xfU & ((vlSelf->dut__DOT__mst_req[6U] 
                                       << 1U) | (vlSelf->dut__DOT__mst_req[5U] 
                                                 >> 0x1fU)))),4);
    bufp->chgCData(oldp+208,((0xfU & (vlSelf->dut__DOT__mst_req[5U] 
                                      >> 0x1bU))),4);
    bufp->chgBit(oldp+209,((1U & (vlSelf->dut__DOT__mst_req[5U] 
                                  >> 0x1aU))));
    bufp->chgQData(oldp+210,((((QData)((IData)(vlSelf->dut__DOT__mst_req[5U])) 
                               << 0x26U) | (((QData)((IData)(
                                                             vlSelf->dut__DOT__mst_req[4U])) 
                                             << 6U) 
                                            | ((QData)((IData)(
                                                               vlSelf->dut__DOT__mst_req[3U])) 
                                               >> 0x1aU)))),64);
    bufp->chgCData(oldp+212,((0xffU & (vlSelf->dut__DOT__mst_req[3U] 
                                       >> 0x12U))),8);
    bufp->chgBit(oldp+213,((1U & (vlSelf->dut__DOT__mst_req[3U] 
                                  >> 0x11U))));
    bufp->chgCData(oldp+214,((0xfU & (vlSelf->dut__DOT__mst_req[3U] 
                                      >> 0xdU))),4);
    bufp->chgBit(oldp+215,((1U & (vlSelf->dut__DOT__mst_req[3U] 
                                  >> 0xcU))));
    bufp->chgBit(oldp+216,((1U & (vlSelf->dut__DOT__mst_req[3U] 
                                  >> 0xbU))));
    bufp->chgCData(oldp+217,((0xfU & (vlSelf->dut__DOT__mst_req[3U] 
                                      >> 7U))),4);
    bufp->chgQData(oldp+218,((((QData)((IData)(vlSelf->dut__DOT__mst_req[3U])) 
                               << 0x39U) | (((QData)((IData)(
                                                             vlSelf->dut__DOT__mst_req[2U])) 
                                             << 0x19U) 
                                            | ((QData)((IData)(
                                                               vlSelf->dut__DOT__mst_req[1U])) 
                                               >> 7U)))),64);
    bufp->chgCData(oldp+220,((0xffU & ((vlSelf->dut__DOT__mst_req[1U] 
                                        << 1U) | (vlSelf->dut__DOT__mst_req[0U] 
                                                  >> 0x1fU)))),8);
    bufp->chgCData(oldp+221,((7U & (vlSelf->dut__DOT__mst_req[0U] 
                                    >> 0x1cU))),3);
    bufp->chgCData(oldp+222,((3U & (vlSelf->dut__DOT__mst_req[0U] 
                                    >> 0x1aU))),2);
    bufp->chgBit(oldp+223,((1U & (vlSelf->dut__DOT__mst_req[0U] 
                                  >> 0x19U))));
    bufp->chgCData(oldp+224,((0xfU & (vlSelf->dut__DOT__mst_req[0U] 
                                      >> 0x15U))),4);
    bufp->chgCData(oldp+225,((7U & (vlSelf->dut__DOT__mst_req[0U] 
                                    >> 0x12U))),3);
    bufp->chgCData(oldp+226,((0xfU & (vlSelf->dut__DOT__mst_req[0U] 
                                      >> 0xeU))),4);
    bufp->chgCData(oldp+227,((0xfU & (vlSelf->dut__DOT__mst_req[0U] 
                                      >> 0xaU))),4);
    bufp->chgCData(oldp+228,((0xfU & (vlSelf->dut__DOT__mst_req[0U] 
                                      >> 6U))),4);
    bufp->chgCData(oldp+229,((0xfU & (vlSelf->dut__DOT__mst_req[0U] 
                                      >> 2U))),4);
    bufp->chgBit(oldp+230,((1U & (vlSelf->dut__DOT__mst_req[0U] 
                                  >> 1U))));
    bufp->chgBit(oldp+231,((1U & vlSelf->dut__DOT__mst_req[0U])));
    bufp->chgBit(oldp+232,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__clk_i));
    bufp->chgBit(oldp+233,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__rst_ni));
    bufp->chgCData(oldp+234,((0xfU & ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[9U] 
                                       << 2U) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[8U] 
                                                 >> 0x1eU)))),4);
    bufp->chgQData(oldp+235,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[8U])) 
                               << 0x22U) | (((QData)((IData)(
                                                             vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[7U])) 
                                             << 2U) 
                                            | ((QData)((IData)(
                                                               vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[6U])) 
                                               >> 0x1eU)))),64);
    bufp->chgCData(oldp+237,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[6U] 
                                       >> 0x16U))),8);
    bufp->chgCData(oldp+238,((7U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[6U] 
                                    >> 0x13U))),3);
    bufp->chgCData(oldp+239,((3U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[6U] 
                                    >> 0x11U))),2);
    bufp->chgBit(oldp+240,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[6U] 
                                  >> 0x10U))));
    bufp->chgCData(oldp+241,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[6U] 
                                      >> 0xcU))),4);
    bufp->chgCData(oldp+242,((7U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[6U] 
                                    >> 9U))),3);
    bufp->chgCData(oldp+243,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[6U] 
                                      >> 5U))),4);
    bufp->chgCData(oldp+244,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[6U] 
                                      >> 1U))),4);
    bufp->chgCData(oldp+245,((0x3fU & ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[6U] 
                                        << 5U) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[5U] 
                                                  >> 0x1bU)))),6);
    bufp->chgCData(oldp+246,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[5U] 
                                      >> 0x17U))),4);
    bufp->chgBit(oldp+247,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[5U] 
                                  >> 0x16U))));
    bufp->chgQData(oldp+248,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[5U])) 
                               << 0x2aU) | (((QData)((IData)(
                                                             vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[4U])) 
                                             << 0xaU) 
                                            | ((QData)((IData)(
                                                               vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[3U])) 
                                               >> 0x16U)))),64);
    bufp->chgCData(oldp+250,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[3U] 
                                       >> 0xeU))),8);
    bufp->chgBit(oldp+251,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[3U] 
                                  >> 0xdU))));
    bufp->chgCData(oldp+252,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[3U] 
                                      >> 9U))),4);
    bufp->chgBit(oldp+253,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[3U] 
                                  >> 8U))));
    bufp->chgBit(oldp+254,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[3U] 
                                  >> 7U))));
    bufp->chgCData(oldp+255,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[3U] 
                                      >> 3U))),4);
    bufp->chgQData(oldp+256,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[3U])) 
                               << 0x3dU) | (((QData)((IData)(
                                                             vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[2U])) 
                                             << 0x1dU) 
                                            | ((QData)((IData)(
                                                               vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[1U])) 
                                               >> 3U)))),64);
    bufp->chgCData(oldp+258,((0xffU & ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[1U] 
                                        << 5U) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[0U] 
                                                  >> 0x1bU)))),8);
    bufp->chgCData(oldp+259,((7U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[0U] 
                                    >> 0x18U))),3);
    bufp->chgCData(oldp+260,((3U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[0U] 
                                    >> 0x16U))),2);
    bufp->chgBit(oldp+261,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[0U] 
                                  >> 0x15U))));
    bufp->chgCData(oldp+262,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[0U] 
                                      >> 0x11U))),4);
    bufp->chgCData(oldp+263,((7U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[0U] 
                                    >> 0xeU))),3);
    bufp->chgCData(oldp+264,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[0U] 
                                      >> 0xaU))),4);
    bufp->chgCData(oldp+265,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[0U] 
                                      >> 6U))),4);
    bufp->chgCData(oldp+266,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[0U] 
                                      >> 2U))),4);
    bufp->chgBit(oldp+267,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[0U] 
                                  >> 1U))));
    bufp->chgBit(oldp+268,((1U & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[0U])));
    bufp->chgBit(oldp+269,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_rsp_o[2U] 
                                  >> 0x19U))));
    bufp->chgBit(oldp+270,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_rsp_o[2U] 
                                  >> 0x18U))));
    bufp->chgBit(oldp+271,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_rsp_o[2U] 
                                  >> 0x17U))));
    bufp->chgBit(oldp+272,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_rsp_o[2U] 
                                  >> 0x16U))));
    bufp->chgCData(oldp+273,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_rsp_o[2U] 
                                      >> 0x12U))),4);
    bufp->chgCData(oldp+274,((3U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_rsp_o[2U] 
                                    >> 0x10U))),2);
    bufp->chgCData(oldp+275,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_rsp_o[2U] 
                                      >> 0xcU))),4);
    bufp->chgBit(oldp+276,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_rsp_o[2U] 
                                  >> 0xbU))));
    bufp->chgCData(oldp+277,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_rsp_o[2U] 
                                      >> 7U))),4);
    bufp->chgQData(oldp+278,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_rsp_o[2U])) 
                               << 0x39U) | (((QData)((IData)(
                                                             vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_rsp_o[1U])) 
                                             << 0x19U) 
                                            | ((QData)((IData)(
                                                               vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_rsp_o[0U])) 
                                               >> 7U)))),64);
    bufp->chgCData(oldp+280,((3U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_rsp_o[0U] 
                                    >> 5U))),2);
    bufp->chgBit(oldp+281,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_rsp_o[0U] 
                                  >> 4U))));
    bufp->chgCData(oldp+282,((0xfU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_rsp_o[0U])),4);
    bufp->chgCData(oldp+283,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[9U] 
                                      >> 6U))),4);
    bufp->chgQData(oldp+284,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[9U])) 
                               << 0x3aU) | (((QData)((IData)(
                                                             vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[8U])) 
                                             << 0x1aU) 
                                            | ((QData)((IData)(
                                                               vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[7U])) 
                                               >> 6U)))),64);
    bufp->chgCData(oldp+286,((0xffU & ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[7U] 
                                        << 2U) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[6U] 
                                                  >> 0x1eU)))),8);
    bufp->chgCData(oldp+287,((7U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[6U] 
                                    >> 0x1bU))),3);
    bufp->chgCData(oldp+288,((3U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[6U] 
                                    >> 0x19U))),2);
    bufp->chgBit(oldp+289,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[6U] 
                                  >> 0x18U))));
    bufp->chgCData(oldp+290,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[6U] 
                                      >> 0x14U))),4);
    bufp->chgCData(oldp+291,((7U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[6U] 
                                    >> 0x11U))),3);
    bufp->chgCData(oldp+292,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[6U] 
                                      >> 0xdU))),4);
    bufp->chgCData(oldp+293,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[6U] 
                                      >> 9U))),4);
    bufp->chgCData(oldp+294,((0x3fU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[6U] 
                                       >> 3U))),6);
    bufp->chgCData(oldp+295,((0xfU & ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[6U] 
                                       << 1U) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[5U] 
                                                 >> 0x1fU)))),4);
    bufp->chgCData(oldp+296,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[5U] 
                                      >> 0x1bU))),4);
    bufp->chgBit(oldp+297,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[5U] 
                                  >> 0x1aU))));
    bufp->chgQData(oldp+298,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[5U])) 
                               << 0x26U) | (((QData)((IData)(
                                                             vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[4U])) 
                                             << 6U) 
                                            | ((QData)((IData)(
                                                               vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[3U])) 
                                               >> 0x1aU)))),64);
    bufp->chgCData(oldp+300,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[3U] 
                                       >> 0x12U))),8);
    bufp->chgBit(oldp+301,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[3U] 
                                  >> 0x11U))));
    bufp->chgCData(oldp+302,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[3U] 
                                      >> 0xdU))),4);
    bufp->chgBit(oldp+303,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[3U] 
                                  >> 0xcU))));
    bufp->chgBit(oldp+304,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[3U] 
                                  >> 0xbU))));
    bufp->chgCData(oldp+305,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[3U] 
                                      >> 7U))),4);
    bufp->chgQData(oldp+306,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[3U])) 
                               << 0x39U) | (((QData)((IData)(
                                                             vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[2U])) 
                                             << 0x19U) 
                                            | ((QData)((IData)(
                                                               vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[1U])) 
                                               >> 7U)))),64);
    bufp->chgCData(oldp+308,((0xffU & ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[1U] 
                                        << 1U) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[0U] 
                                                  >> 0x1fU)))),8);
    bufp->chgCData(oldp+309,((7U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[0U] 
                                    >> 0x1cU))),3);
    bufp->chgCData(oldp+310,((3U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[0U] 
                                    >> 0x1aU))),2);
    bufp->chgBit(oldp+311,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[0U] 
                                  >> 0x19U))));
    bufp->chgCData(oldp+312,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[0U] 
                                      >> 0x15U))),4);
    bufp->chgCData(oldp+313,((7U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[0U] 
                                    >> 0x12U))),3);
    bufp->chgCData(oldp+314,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[0U] 
                                      >> 0xeU))),4);
    bufp->chgCData(oldp+315,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[0U] 
                                      >> 0xaU))),4);
    bufp->chgCData(oldp+316,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[0U] 
                                      >> 6U))),4);
    bufp->chgCData(oldp+317,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[0U] 
                                      >> 2U))),4);
    bufp->chgBit(oldp+318,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[0U] 
                                  >> 1U))));
    bufp->chgBit(oldp+319,((1U & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[0U])));
    bufp->chgBit(oldp+320,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_rsp_i[2U] 
                                  >> 0x19U))));
    bufp->chgBit(oldp+321,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_rsp_i[2U] 
                                  >> 0x18U))));
    bufp->chgBit(oldp+322,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_rsp_i[2U] 
                                  >> 0x17U))));
    bufp->chgBit(oldp+323,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_rsp_i[2U] 
                                  >> 0x16U))));
    bufp->chgCData(oldp+324,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_rsp_i[2U] 
                                      >> 0x12U))),4);
    bufp->chgCData(oldp+325,((3U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_rsp_i[2U] 
                                    >> 0x10U))),2);
    bufp->chgCData(oldp+326,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_rsp_i[2U] 
                                      >> 0xcU))),4);
    bufp->chgBit(oldp+327,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_rsp_i[2U] 
                                  >> 0xbU))));
    bufp->chgCData(oldp+328,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_rsp_i[2U] 
                                      >> 7U))),4);
    bufp->chgQData(oldp+329,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_rsp_i[2U])) 
                               << 0x39U) | (((QData)((IData)(
                                                             vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_rsp_i[1U])) 
                                             << 0x19U) 
                                            | ((QData)((IData)(
                                                               vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_rsp_i[0U])) 
                                               >> 7U)))),64);
    bufp->chgCData(oldp+331,((3U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_rsp_i[0U] 
                                    >> 5U))),2);
    bufp->chgBit(oldp+332,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_rsp_i[0U] 
                                  >> 4U))));
    bufp->chgCData(oldp+333,((0xfU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_rsp_i[0U])),4);
    bufp->chgCData(oldp+334,((0x3fU & (IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg_req 
                                               >> 0x26U)))),6);
    bufp->chgBit(oldp+335,((1U & (IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg_req 
                                          >> 0x25U)))));
    bufp->chgIData(oldp+336,((IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg_req 
                                      >> 5U))),32);
    bufp->chgCData(oldp+337,((0xfU & (IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg_req 
                                              >> 1U)))),4);
    bufp->chgBit(oldp+338,((1U & (IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg_req))));
    bufp->chgIData(oldp+339,((IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg_rsp 
                                      >> 2U))),32);
    bufp->chgBit(oldp+340,((1U & (IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg_rsp 
                                          >> 1U)))));
    bufp->chgBit(oldp+341,((1U & (IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg_rsp))));
    bufp->chgBit(oldp+342,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg2hw[5U] 
                                  >> 0x13U))));
    bufp->chgBit(oldp+343,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg2hw[5U] 
                                  >> 0x12U))));
    bufp->chgBit(oldp+344,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg2hw[5U] 
                                  >> 0x11U))));
    bufp->chgBit(oldp+345,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg2hw[5U] 
                                  >> 0x10U))));
    bufp->chgBit(oldp+346,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg2hw[5U] 
                                  >> 0xfU))));
    bufp->chgBit(oldp+347,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg2hw[5U] 
                                  >> 0xeU))));
    bufp->chgCData(oldp+348,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg2hw[5U] 
                                       >> 6U))),8);
    bufp->chgCData(oldp+349,((0xffU & ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg2hw[5U] 
                                        << 2U) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg2hw[4U] 
                                                  >> 0x1eU)))),8);
    bufp->chgIData(oldp+350,(((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg2hw[4U] 
                               << 2U) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg2hw[3U] 
                                         >> 0x1eU))),32);
    bufp->chgIData(oldp+351,(((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg2hw[3U] 
                               << 2U) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg2hw[2U] 
                                         >> 0x1eU))),32);
    bufp->chgCData(oldp+352,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg2hw[2U] 
                                       >> 0x16U))),8);
    bufp->chgCData(oldp+353,((7U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg2hw[2U] 
                                    >> 0x13U))),3);
    bufp->chgCData(oldp+354,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg2hw[2U] 
                                      >> 0xfU))),4);
    bufp->chgIData(oldp+355,(((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg2hw[2U] 
                               << 0x11U) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg2hw[1U] 
                                            >> 0xfU))),32);
    bufp->chgIData(oldp+356,(((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg2hw[1U] 
                               << 0x11U) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg2hw[0U] 
                                            >> 0xfU))),32);
    bufp->chgCData(oldp+357,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg2hw[0U] 
                                       >> 7U))),8);
    bufp->chgCData(oldp+358,((7U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg2hw[0U] 
                                    >> 4U))),3);
    bufp->chgCData(oldp+359,((0xfU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg2hw[0U])),4);
    bufp->chgBit(oldp+360,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__hw2reg 
                                  >> 0x1dU))));
    bufp->chgBit(oldp+361,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__hw2reg 
                                  >> 0x1cU))));
    bufp->chgBit(oldp+362,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__hw2reg 
                                  >> 0x1bU))));
    bufp->chgBit(oldp+363,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__hw2reg 
                                  >> 0x1aU))));
    bufp->chgBit(oldp+364,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__hw2reg 
                                  >> 0x19U))));
    bufp->chgBit(oldp+365,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__hw2reg 
                                  >> 0x18U))));
    bufp->chgBit(oldp+366,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__hw2reg 
                                  >> 0x17U))));
    bufp->chgBit(oldp+367,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__hw2reg 
                                  >> 0x16U))));
    bufp->chgBit(oldp+368,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__hw2reg 
                                  >> 0x15U))));
    bufp->chgBit(oldp+369,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__hw2reg 
                                  >> 0x14U))));
    bufp->chgBit(oldp+370,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__hw2reg 
                                  >> 0x13U))));
    bufp->chgBit(oldp+371,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__hw2reg 
                                  >> 0x12U))));
    bufp->chgCData(oldp+372,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__hw2reg 
                                       >> 0xaU))),8);
    bufp->chgBit(oldp+373,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__hw2reg 
                                  >> 9U))));
    bufp->chgCData(oldp+374,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__hw2reg 
                                       >> 1U))),8);
    bufp->chgBit(oldp+375,((1U & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__hw2reg)));
    bufp->chgBit(oldp+376,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__enable_r_pulse));
    bufp->chgBit(oldp+377,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__enable_r_prev_state_q));
    bufp->chgBit(oldp+378,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__enable_w_pulse));
    bufp->chgBit(oldp+379,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__enable_w_prev_state_q));
    bufp->chgBit(oldp+380,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__w_ready));
    bufp->chgBit(oldp+381,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__aw_ready));
    bufp->chgBit(oldp+382,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__b_ready));
    bufp->chgCData(oldp+383,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__read_channel[2U] 
                                       >> 0xcU))),8);
    bufp->chgCData(oldp+384,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__read_channel[2U] 
                                       >> 4U))),8);
    bufp->chgCData(oldp+385,((0xfU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__read_channel[2U])),4);
    bufp->chgQData(oldp+386,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__read_channel[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__read_channel[0U])))),64);
    bufp->chgCData(oldp+388,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__write_channel[2U] 
                                       >> 0xcU))),8);
    bufp->chgCData(oldp+389,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__write_channel[2U] 
                                       >> 4U))),8);
    bufp->chgCData(oldp+390,((0xfU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__write_channel[2U])),4);
    bufp->chgQData(oldp+391,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__write_channel[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__write_channel[0U])))),64);
    bufp->chgBit(oldp+393,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__clk_i));
    bufp->chgBit(oldp+394,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__rst_ni));
    bufp->chgBit(oldp+395,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__ax_valid_o));
    bufp->chgCData(oldp+396,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__ax_data_o[3U] 
                                      >> 5U))),4);
    bufp->chgQData(oldp+397,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__ax_data_o[3U])) 
                               << 0x3bU) | (((QData)((IData)(
                                                             vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__ax_data_o[2U])) 
                                             << 0x1bU) 
                                            | ((QData)((IData)(
                                                               vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__ax_data_o[1U])) 
                                               >> 5U)))),64);
    bufp->chgCData(oldp+399,((0xffU & ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__ax_data_o[1U] 
                                        << 3U) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__ax_data_o[0U] 
                                                  >> 0x1dU)))),8);
    bufp->chgCData(oldp+400,((7U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__ax_data_o[0U] 
                                    >> 0x1aU))),3);
    bufp->chgCData(oldp+401,((3U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__ax_data_o[0U] 
                                    >> 0x18U))),2);
    bufp->chgBit(oldp+402,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__ax_data_o[0U] 
                                  >> 0x17U))));
    bufp->chgCData(oldp+403,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__ax_data_o[0U] 
                                      >> 0x13U))),4);
    bufp->chgCData(oldp+404,((7U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__ax_data_o[0U] 
                                    >> 0x10U))),3);
    bufp->chgCData(oldp+405,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__ax_data_o[0U] 
                                      >> 0xcU))),4);
    bufp->chgCData(oldp+406,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__ax_data_o[0U] 
                                      >> 8U))),4);
    bufp->chgCData(oldp+407,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__ax_data_o[0U] 
                                      >> 4U))),4);
    bufp->chgCData(oldp+408,((0xfU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__ax_data_o[0U])),4);
    bufp->chgBit(oldp+409,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__ax_ready_i));
    bufp->chgCData(oldp+410,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__trans_data_i[2U] 
                                       >> 0xcU))),8);
    bufp->chgCData(oldp+411,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__trans_data_i[2U] 
                                       >> 4U))),8);
    bufp->chgCData(oldp+412,((0xfU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__trans_data_i[2U])),4);
    bufp->chgQData(oldp+413,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__trans_data_i[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__trans_data_i[0U])))),64);
    bufp->chgBit(oldp+415,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__enable_i));
    bufp->chgBit(oldp+416,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__ready_o));
    bufp->chgBit(oldp+417,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__state_q));
    bufp->chgBit(oldp+418,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__state_d));
    bufp->chgCData(oldp+419,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__trans_data_q[2U] 
                                       >> 0xcU))),8);
    bufp->chgCData(oldp+420,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__trans_data_q[2U] 
                                       >> 4U))),8);
    bufp->chgCData(oldp+421,((0xfU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__trans_data_q[2U])),4);
    bufp->chgQData(oldp+422,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__trans_data_q[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__trans_data_q[0U])))),64);
    bufp->chgCData(oldp+424,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__trans_data_d[2U] 
                                       >> 0xcU))),8);
    bufp->chgCData(oldp+425,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__trans_data_d[2U] 
                                       >> 4U))),8);
    bufp->chgCData(oldp+426,((0xfU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__trans_data_d[2U])),4);
    bufp->chgQData(oldp+427,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__trans_data_d[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__trans_data_d[0U])))),64);
    bufp->chgCData(oldp+429,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__issued_trans_d),8);
    bufp->chgCData(oldp+430,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__issued_trans_q),8);
    bufp->chgBit(oldp+431,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__clk_i));
    bufp->chgBit(oldp+432,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__rst_ni));
    bufp->chgBit(oldp+433,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__ax_valid_o));
    bufp->chgCData(oldp+434,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__ax_data_o[3U] 
                                      >> 0xbU))),4);
    bufp->chgQData(oldp+435,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__ax_data_o[3U])) 
                               << 0x35U) | (((QData)((IData)(
                                                             vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__ax_data_o[2U])) 
                                             << 0x15U) 
                                            | ((QData)((IData)(
                                                               vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__ax_data_o[1U])) 
                                               >> 0xbU)))),64);
    bufp->chgCData(oldp+437,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__ax_data_o[1U] 
                                       >> 3U))),8);
    bufp->chgCData(oldp+438,((7U & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__ax_data_o[1U])),3);
    bufp->chgCData(oldp+439,((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__ax_data_o[0U] 
                              >> 0x1eU)),2);
    bufp->chgBit(oldp+440,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__ax_data_o[0U] 
                                  >> 0x1dU))));
    bufp->chgCData(oldp+441,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__ax_data_o[0U] 
                                      >> 0x19U))),4);
    bufp->chgCData(oldp+442,((7U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__ax_data_o[0U] 
                                    >> 0x16U))),3);
    bufp->chgCData(oldp+443,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__ax_data_o[0U] 
                                      >> 0x12U))),4);
    bufp->chgCData(oldp+444,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__ax_data_o[0U] 
                                      >> 0xeU))),4);
    bufp->chgCData(oldp+445,((0x3fU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__ax_data_o[0U] 
                                       >> 8U))),6);
    bufp->chgCData(oldp+446,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__ax_data_o[0U] 
                                      >> 4U))),4);
    bufp->chgCData(oldp+447,((0xfU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__ax_data_o[0U])),4);
    bufp->chgBit(oldp+448,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__ax_ready_i));
    bufp->chgCData(oldp+449,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__trans_data_i[2U] 
                                       >> 0xcU))),8);
    bufp->chgCData(oldp+450,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__trans_data_i[2U] 
                                       >> 4U))),8);
    bufp->chgCData(oldp+451,((0xfU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__trans_data_i[2U])),4);
    bufp->chgQData(oldp+452,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__trans_data_i[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__trans_data_i[0U])))),64);
    bufp->chgBit(oldp+454,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__enable_i));
    bufp->chgBit(oldp+455,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__ready_o));
    bufp->chgBit(oldp+456,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__state_q));
    bufp->chgBit(oldp+457,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__state_d));
    bufp->chgCData(oldp+458,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__trans_data_q[2U] 
                                       >> 0xcU))),8);
    bufp->chgCData(oldp+459,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__trans_data_q[2U] 
                                       >> 4U))),8);
    bufp->chgCData(oldp+460,((0xfU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__trans_data_q[2U])),4);
    bufp->chgQData(oldp+461,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__trans_data_q[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__trans_data_q[0U])))),64);
    bufp->chgCData(oldp+463,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__trans_data_d[2U] 
                                       >> 0xcU))),8);
    bufp->chgCData(oldp+464,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__trans_data_d[2U] 
                                       >> 4U))),8);
    bufp->chgCData(oldp+465,((0xfU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__trans_data_d[2U])),4);
    bufp->chgQData(oldp+466,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__trans_data_d[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__trans_data_d[0U])))),64);
    bufp->chgCData(oldp+468,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__issued_trans_d),8);
    bufp->chgCData(oldp+469,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__issued_trans_q),8);
    bufp->chgBit(oldp+470,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__clk_i));
    bufp->chgBit(oldp+471,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__rst_ni));
    bufp->chgBit(oldp+472,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__b_valid_i));
    bufp->chgCData(oldp+473,((0xfU & ((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__b_data_i) 
                                      >> 6U))),4);
    bufp->chgCData(oldp+474,((3U & ((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__b_data_i) 
                                    >> 4U))),2);
    bufp->chgCData(oldp+475,((0xfU & (IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__b_data_i))),4);
    bufp->chgBit(oldp+476,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__b_ready_o));
    bufp->chgCData(oldp+477,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__trans_data_i[2U] 
                                       >> 0xcU))),8);
    bufp->chgCData(oldp+478,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__trans_data_i[2U] 
                                       >> 4U))),8);
    bufp->chgCData(oldp+479,((0xfU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__trans_data_i[2U])),4);
    bufp->chgQData(oldp+480,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__trans_data_i[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__trans_data_i[0U])))),64);
    bufp->chgBit(oldp+482,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__enable_i));
    bufp->chgBit(oldp+483,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__ready_o));
    bufp->chgBit(oldp+484,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__state_q));
    bufp->chgBit(oldp+485,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__state_d));
    bufp->chgCData(oldp+486,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__trans_data_q[2U] 
                                       >> 0xcU))),8);
    bufp->chgCData(oldp+487,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__trans_data_q[2U] 
                                       >> 4U))),8);
    bufp->chgCData(oldp+488,((0xfU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__trans_data_q[2U])),4);
    bufp->chgQData(oldp+489,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__trans_data_q[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__trans_data_q[0U])))),64);
    bufp->chgCData(oldp+491,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__trans_data_d[2U] 
                                       >> 0xcU))),8);
    bufp->chgCData(oldp+492,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__trans_data_d[2U] 
                                       >> 4U))),8);
    bufp->chgCData(oldp+493,((0xfU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__trans_data_d[2U])),4);
    bufp->chgQData(oldp+494,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__trans_data_d[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__trans_data_d[0U])))),64);
    bufp->chgCData(oldp+496,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__issued_trans_d),8);
    bufp->chgCData(oldp+497,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__issued_trans_q),8);
    bufp->chgBit(oldp+498,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__clk_i));
    bufp->chgBit(oldp+499,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__rst_ni));
    bufp->chgCData(oldp+500,((0xfU & ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[9U] 
                                       << 2U) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[8U] 
                                                 >> 0x1eU)))),4);
    bufp->chgQData(oldp+501,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[8U])) 
                               << 0x22U) | (((QData)((IData)(
                                                             vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[7U])) 
                                             << 2U) 
                                            | ((QData)((IData)(
                                                               vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[6U])) 
                                               >> 0x1eU)))),64);
    bufp->chgCData(oldp+503,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[6U] 
                                       >> 0x16U))),8);
    bufp->chgCData(oldp+504,((7U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[6U] 
                                    >> 0x13U))),3);
    bufp->chgCData(oldp+505,((3U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[6U] 
                                    >> 0x11U))),2);
    bufp->chgBit(oldp+506,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[6U] 
                                  >> 0x10U))));
    bufp->chgCData(oldp+507,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[6U] 
                                      >> 0xcU))),4);
    bufp->chgCData(oldp+508,((7U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[6U] 
                                    >> 9U))),3);
    bufp->chgCData(oldp+509,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[6U] 
                                      >> 5U))),4);
    bufp->chgCData(oldp+510,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[6U] 
                                      >> 1U))),4);
    bufp->chgCData(oldp+511,((0x3fU & ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[6U] 
                                        << 5U) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[5U] 
                                                  >> 0x1bU)))),6);
    bufp->chgCData(oldp+512,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[5U] 
                                      >> 0x17U))),4);
    bufp->chgBit(oldp+513,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[5U] 
                                  >> 0x16U))));
    bufp->chgQData(oldp+514,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[5U])) 
                               << 0x2aU) | (((QData)((IData)(
                                                             vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[4U])) 
                                             << 0xaU) 
                                            | ((QData)((IData)(
                                                               vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[3U])) 
                                               >> 0x16U)))),64);
    bufp->chgCData(oldp+516,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[3U] 
                                       >> 0xeU))),8);
    bufp->chgBit(oldp+517,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[3U] 
                                  >> 0xdU))));
    bufp->chgCData(oldp+518,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[3U] 
                                      >> 9U))),4);
    bufp->chgBit(oldp+519,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[3U] 
                                  >> 8U))));
    bufp->chgBit(oldp+520,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[3U] 
                                  >> 7U))));
    bufp->chgCData(oldp+521,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[3U] 
                                      >> 3U))),4);
    bufp->chgQData(oldp+522,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[3U])) 
                               << 0x3dU) | (((QData)((IData)(
                                                             vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[2U])) 
                                             << 0x1dU) 
                                            | ((QData)((IData)(
                                                               vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[1U])) 
                                               >> 3U)))),64);
    bufp->chgCData(oldp+524,((0xffU & ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[1U] 
                                        << 5U) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[0U] 
                                                  >> 0x1bU)))),8);
    bufp->chgCData(oldp+525,((7U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[0U] 
                                    >> 0x18U))),3);
    bufp->chgCData(oldp+526,((3U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[0U] 
                                    >> 0x16U))),2);
    bufp->chgBit(oldp+527,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[0U] 
                                  >> 0x15U))));
    bufp->chgCData(oldp+528,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[0U] 
                                      >> 0x11U))),4);
    bufp->chgCData(oldp+529,((7U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[0U] 
                                    >> 0xeU))),3);
    bufp->chgCData(oldp+530,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[0U] 
                                      >> 0xaU))),4);
    bufp->chgCData(oldp+531,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[0U] 
                                      >> 6U))),4);
    bufp->chgCData(oldp+532,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[0U] 
                                      >> 2U))),4);
    bufp->chgBit(oldp+533,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[0U] 
                                  >> 1U))));
    bufp->chgBit(oldp+534,((1U & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[0U])));
    bufp->chgBit(oldp+535,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_rsp_o[2U] 
                                  >> 0x19U))));
    bufp->chgBit(oldp+536,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_rsp_o[2U] 
                                  >> 0x18U))));
    bufp->chgBit(oldp+537,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_rsp_o[2U] 
                                  >> 0x17U))));
    bufp->chgBit(oldp+538,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_rsp_o[2U] 
                                  >> 0x16U))));
    bufp->chgCData(oldp+539,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_rsp_o[2U] 
                                      >> 0x12U))),4);
    bufp->chgCData(oldp+540,((3U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_rsp_o[2U] 
                                    >> 0x10U))),2);
    bufp->chgCData(oldp+541,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_rsp_o[2U] 
                                      >> 0xcU))),4);
    bufp->chgBit(oldp+542,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_rsp_o[2U] 
                                  >> 0xbU))));
    bufp->chgCData(oldp+543,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_rsp_o[2U] 
                                      >> 7U))),4);
    bufp->chgQData(oldp+544,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_rsp_o[2U])) 
                               << 0x39U) | (((QData)((IData)(
                                                             vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_rsp_o[1U])) 
                                             << 0x19U) 
                                            | ((QData)((IData)(
                                                               vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_rsp_o[0U])) 
                                               >> 7U)))),64);
    bufp->chgCData(oldp+546,((3U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_rsp_o[0U] 
                                    >> 5U))),2);
    bufp->chgBit(oldp+547,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_rsp_o[0U] 
                                  >> 4U))));
    bufp->chgCData(oldp+548,((0xfU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_rsp_o[0U])),4);
    bufp->chgCData(oldp+549,((0x3fU & (IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__cfg_req_o 
                                               >> 0x26U)))),6);
    bufp->chgBit(oldp+550,((1U & (IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__cfg_req_o 
                                          >> 0x25U)))));
    bufp->chgIData(oldp+551,((IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__cfg_req_o 
                                      >> 5U))),32);
    bufp->chgCData(oldp+552,((0xfU & (IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__cfg_req_o 
                                              >> 1U)))),4);
    bufp->chgBit(oldp+553,((1U & (IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__cfg_req_o))));
    bufp->chgIData(oldp+554,((IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__cfg_rsp_i 
                                      >> 2U))),32);
    bufp->chgBit(oldp+555,((1U & (IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__cfg_rsp_i 
                                          >> 1U)))));
    bufp->chgBit(oldp+556,((1U & (IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__cfg_rsp_i))));
    bufp->chgBit(oldp+557,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__penable));
    bufp->chgBit(oldp+558,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__pwrite));
    bufp->chgIData(oldp+559,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__paddr),32);
    bufp->chgBit(oldp+560,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__psel));
    bufp->chgIData(oldp+561,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__pwdata),32);
    bufp->chgIData(oldp+562,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__prdata),32);
    bufp->chgBit(oldp+563,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__pready));
    bufp->chgBit(oldp+564,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__pslverr));
    bufp->chgBit(oldp+565,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_apb_to_reg__DOT__clk_i));
    bufp->chgBit(oldp+566,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_apb_to_reg__DOT__rst_ni));
    bufp->chgBit(oldp+567,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_apb_to_reg__DOT__penable_i));
    bufp->chgBit(oldp+568,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_apb_to_reg__DOT__pwrite_i));
    bufp->chgIData(oldp+569,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_apb_to_reg__DOT__paddr_i),32);
    bufp->chgBit(oldp+570,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_apb_to_reg__DOT__psel_i));
    bufp->chgIData(oldp+571,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_apb_to_reg__DOT__pwdata_i),32);
    bufp->chgIData(oldp+572,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_apb_to_reg__DOT__prdata_o),32);
    bufp->chgBit(oldp+573,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_apb_to_reg__DOT__pready_o));
    bufp->chgBit(oldp+574,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_apb_to_reg__DOT__pslverr_o));
    bufp->chgBit(oldp+575,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ACLK));
    bufp->chgBit(oldp+576,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARESETn));
    bufp->chgBit(oldp+577,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__test_en_i));
    bufp->chgCData(oldp+578,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWID_i),4);
    bufp->chgQData(oldp+579,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWADDR_i),64);
    bufp->chgCData(oldp+581,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWLEN_i),8);
    bufp->chgCData(oldp+582,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWSIZE_i),3);
    bufp->chgCData(oldp+583,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWBURST_i),2);
    bufp->chgBit(oldp+584,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWLOCK_i));
    bufp->chgCData(oldp+585,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWCACHE_i),4);
    bufp->chgCData(oldp+586,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWPROT_i),3);
    bufp->chgCData(oldp+587,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWREGION_i),4);
    bufp->chgCData(oldp+588,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWUSER_i),4);
    bufp->chgCData(oldp+589,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWQOS_i),4);
    bufp->chgBit(oldp+590,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWVALID_i));
    bufp->chgBit(oldp+591,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWREADY_o));
    bufp->chgCData(oldp+592,((0xffU & (IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__WDATA_i))),8);
    bufp->chgCData(oldp+593,((0xffU & (IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__WDATA_i 
                                               >> 8U)))),8);
    bufp->chgCData(oldp+594,((0xffU & (IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__WDATA_i 
                                               >> 0x10U)))),8);
    bufp->chgCData(oldp+595,((0xffU & (IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__WDATA_i 
                                               >> 0x18U)))),8);
    bufp->chgCData(oldp+596,((0xffU & (IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__WDATA_i 
                                               >> 0x20U)))),8);
    bufp->chgCData(oldp+597,((0xffU & (IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__WDATA_i 
                                               >> 0x28U)))),8);
    bufp->chgCData(oldp+598,((0xffU & (IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__WDATA_i 
                                               >> 0x30U)))),8);
    bufp->chgCData(oldp+599,((0xffU & (IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__WDATA_i 
                                               >> 0x38U)))),8);
    bufp->chgCData(oldp+600,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__WSTRB_i),8);
    bufp->chgBit(oldp+601,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__WLAST_i));
    bufp->chgCData(oldp+602,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__WUSER_i),4);
    bufp->chgBit(oldp+603,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__WVALID_i));
    bufp->chgBit(oldp+604,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__WREADY_o));
    bufp->chgCData(oldp+605,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__BID_o),4);
    bufp->chgCData(oldp+606,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__BRESP_o),2);
    bufp->chgBit(oldp+607,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__BVALID_o));
    bufp->chgCData(oldp+608,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__BUSER_o),4);
    bufp->chgBit(oldp+609,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__BREADY_i));
    bufp->chgCData(oldp+610,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARID_i),4);
    bufp->chgQData(oldp+611,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARADDR_i),64);
    bufp->chgCData(oldp+613,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARLEN_i),8);
    bufp->chgCData(oldp+614,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARSIZE_i),3);
    bufp->chgCData(oldp+615,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARBURST_i),2);
    bufp->chgBit(oldp+616,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARLOCK_i));
    bufp->chgCData(oldp+617,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARCACHE_i),4);
    bufp->chgCData(oldp+618,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARPROT_i),3);
    bufp->chgCData(oldp+619,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARREGION_i),4);
    bufp->chgCData(oldp+620,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARUSER_i),4);
    bufp->chgCData(oldp+621,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARQOS_i),4);
    bufp->chgBit(oldp+622,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARVALID_i));
    bufp->chgBit(oldp+623,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARREADY_o));
    bufp->chgCData(oldp+624,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__RID_o),4);
    bufp->chgQData(oldp+625,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__RDATA_o),64);
    bufp->chgCData(oldp+627,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__RRESP_o),2);
    bufp->chgBit(oldp+628,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__RLAST_o));
    bufp->chgCData(oldp+629,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__RUSER_o),4);
    bufp->chgBit(oldp+630,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__RVALID_o));
    bufp->chgBit(oldp+631,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__RREADY_i));
    bufp->chgBit(oldp+632,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__PENABLE));
    bufp->chgBit(oldp+633,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__PWRITE));
    bufp->chgIData(oldp+634,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__PADDR),32);
    bufp->chgBit(oldp+635,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__PSEL));
    bufp->chgIData(oldp+636,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__PWDATA),32);
    bufp->chgIData(oldp+637,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__PRDATA),32);
    bufp->chgBit(oldp+638,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__PREADY));
    bufp->chgBit(oldp+639,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__PSLVERR));
    bufp->chgCData(oldp+640,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWID),4);
    bufp->chgQData(oldp+641,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWADDR),64);
    bufp->chgCData(oldp+643,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWLEN),8);
    bufp->chgCData(oldp+644,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWSIZE),3);
    bufp->chgCData(oldp+645,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWBURST),2);
    bufp->chgBit(oldp+646,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWLOCK));
    bufp->chgCData(oldp+647,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWCACHE),4);
    bufp->chgCData(oldp+648,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWPROT),3);
    bufp->chgCData(oldp+649,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWREGION),4);
    bufp->chgCData(oldp+650,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWUSER),4);
    bufp->chgCData(oldp+651,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWQOS),4);
    bufp->chgBit(oldp+652,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWVALID));
    bufp->chgBit(oldp+653,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWREADY));
    bufp->chgIData(oldp+654,((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__WDATA)),32);
    bufp->chgIData(oldp+655,((IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__WDATA 
                                      >> 0x20U))),32);
    bufp->chgCData(oldp+656,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__WSTRB),8);
    bufp->chgBit(oldp+657,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__WLAST));
    bufp->chgCData(oldp+658,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__WUSER),4);
    bufp->chgBit(oldp+659,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__WVALID));
    bufp->chgBit(oldp+660,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__WREADY));
    bufp->chgCData(oldp+661,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__BID),4);
    bufp->chgCData(oldp+662,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__BRESP),2);
    bufp->chgBit(oldp+663,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__BVALID));
    bufp->chgCData(oldp+664,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__BUSER),4);
    bufp->chgBit(oldp+665,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__BREADY));
    bufp->chgCData(oldp+666,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARID),4);
    bufp->chgQData(oldp+667,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARADDR),64);
    bufp->chgCData(oldp+669,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARLEN),8);
    bufp->chgCData(oldp+670,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARSIZE),3);
    bufp->chgCData(oldp+671,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARBURST),2);
    bufp->chgBit(oldp+672,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARLOCK));
    bufp->chgCData(oldp+673,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARCACHE),4);
    bufp->chgCData(oldp+674,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARPROT),3);
    bufp->chgCData(oldp+675,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARREGION),4);
    bufp->chgCData(oldp+676,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARUSER),4);
    bufp->chgCData(oldp+677,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARQOS),4);
    bufp->chgBit(oldp+678,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARVALID));
    bufp->chgBit(oldp+679,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARREADY));
    bufp->chgCData(oldp+680,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__RID),4);
    bufp->chgIData(oldp+681,((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__RDATA)),32);
    bufp->chgIData(oldp+682,((IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__RDATA 
                                      >> 0x20U))),32);
    bufp->chgCData(oldp+683,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__RRESP),2);
    bufp->chgBit(oldp+684,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__RLAST));
    bufp->chgCData(oldp+685,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__RUSER),4);
    bufp->chgBit(oldp+686,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__RVALID));
    bufp->chgBit(oldp+687,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__RREADY));
    bufp->chgCData(oldp+688,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__CS),4);
    bufp->chgCData(oldp+689,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__NS),4);
    bufp->chgBit(oldp+690,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__W_word_sel));
    bufp->chgIData(oldp+691,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__address),32);
    bufp->chgBit(oldp+692,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__read_req));
    bufp->chgBit(oldp+693,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__write_req));
    bufp->chgBit(oldp+694,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__sample_AR));
    bufp->chgSData(oldp+695,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARLEN_Q),9);
    bufp->chgBit(oldp+696,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__decr_ARLEN));
    bufp->chgBit(oldp+697,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__sample_AW));
    bufp->chgSData(oldp+698,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWLEN_Q),9);
    bufp->chgBit(oldp+699,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__decr_AWLEN));
    bufp->chgQData(oldp+700,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARADDR_Q),64);
    bufp->chgBit(oldp+702,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__incr_ARADDR));
    bufp->chgQData(oldp+703,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWADDR_Q),64);
    bufp->chgBit(oldp+705,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__incr_AWADDR));
    bufp->chgBit(oldp+706,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__sample_RDATA_0));
    bufp->chgBit(oldp+707,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__sample_RDATA_1));
    bufp->chgIData(oldp+708,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__RDATA_Q_0),32);
    bufp->chgIData(oldp+709,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__RDATA_Q_1),32);
    bufp->chgBit(oldp+710,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__clk_i));
    bufp->chgBit(oldp+711,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__rst_ni));
    bufp->chgBit(oldp+712,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__test_en_i));
    bufp->chgBit(oldp+713,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__slave_valid_i));
    bufp->chgQData(oldp+714,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__slave_addr_i),64);
    bufp->chgCData(oldp+716,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__slave_prot_i),3);
    bufp->chgCData(oldp+717,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__slave_region_i),4);
    bufp->chgCData(oldp+718,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__slave_len_i),8);
    bufp->chgCData(oldp+719,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__slave_size_i),3);
    bufp->chgCData(oldp+720,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__slave_burst_i),2);
    bufp->chgBit(oldp+721,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__slave_lock_i));
    bufp->chgCData(oldp+722,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__slave_cache_i),4);
    bufp->chgCData(oldp+723,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__slave_qos_i),4);
    bufp->chgCData(oldp+724,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__slave_id_i),4);
    bufp->chgCData(oldp+725,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__slave_user_i),4);
    bufp->chgBit(oldp+726,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__slave_ready_o));
    bufp->chgBit(oldp+727,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__master_valid_o));
    bufp->chgQData(oldp+728,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__master_addr_o),64);
    bufp->chgCData(oldp+730,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__master_prot_o),3);
    bufp->chgCData(oldp+731,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__master_region_o),4);
    bufp->chgCData(oldp+732,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__master_len_o),8);
    bufp->chgCData(oldp+733,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__master_size_o),3);
    bufp->chgCData(oldp+734,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__master_burst_o),2);
    bufp->chgBit(oldp+735,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__master_lock_o));
    bufp->chgCData(oldp+736,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__master_cache_o),4);
    bufp->chgCData(oldp+737,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__master_qos_o),4);
    bufp->chgCData(oldp+738,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__master_id_o),4);
    bufp->chgCData(oldp+739,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__master_user_o),4);
    bufp->chgBit(oldp+740,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__master_ready_i));
    bufp->chgWData(oldp+741,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__s_data_in),101);
    bufp->chgWData(oldp+745,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__s_data_out),101);
    bufp->chgBit(oldp+749,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__clk_i));
    bufp->chgBit(oldp+750,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__rst_ni));
    bufp->chgBit(oldp+751,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__testmode_i));
    bufp->chgBit(oldp+752,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__valid_i));
    bufp->chgBit(oldp+753,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__ready_o));
    bufp->chgWData(oldp+754,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__data_i),101);
    bufp->chgBit(oldp+758,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__ready_i));
    bufp->chgBit(oldp+759,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__valid_o));
    bufp->chgWData(oldp+760,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__data_o),101);
    bufp->chgBit(oldp+764,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__full));
    bufp->chgBit(oldp+765,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__empty));
    bufp->chgBit(oldp+766,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__clk_i));
    bufp->chgBit(oldp+767,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__rst_ni));
    bufp->chgBit(oldp+768,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__flush_i));
    bufp->chgBit(oldp+769,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__testmode_i));
    bufp->chgBit(oldp+770,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__full_o));
    bufp->chgBit(oldp+771,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__empty_o));
    bufp->chgBit(oldp+772,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__threshold_o));
    bufp->chgWData(oldp+773,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__data_i),101);
    bufp->chgBit(oldp+777,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__push_i));
    bufp->chgWData(oldp+778,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__data_o),101);
    bufp->chgBit(oldp+782,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__pop_i));
    bufp->chgBit(oldp+783,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__clk_i));
    bufp->chgBit(oldp+784,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__rst_ni));
    bufp->chgBit(oldp+785,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__flush_i));
    bufp->chgBit(oldp+786,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__testmode_i));
    bufp->chgBit(oldp+787,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__full_o));
    bufp->chgBit(oldp+788,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__empty_o));
    bufp->chgBit(oldp+789,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__alm_full_o));
    bufp->chgBit(oldp+790,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__alm_empty_o));
    bufp->chgWData(oldp+791,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__data_i),101);
    bufp->chgBit(oldp+795,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__push_i));
    bufp->chgWData(oldp+796,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__data_o),101);
    bufp->chgBit(oldp+800,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__pop_i));
    bufp->chgBit(oldp+801,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__usage));
    bufp->chgBit(oldp+802,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__clk_i));
    bufp->chgBit(oldp+803,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__rst_ni));
    bufp->chgBit(oldp+804,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__flush_i));
    bufp->chgBit(oldp+805,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__testmode_i));
    bufp->chgBit(oldp+806,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__full_o));
    bufp->chgBit(oldp+807,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__empty_o));
    bufp->chgBit(oldp+808,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__usage_o));
    bufp->chgWData(oldp+809,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__data_i),101);
    bufp->chgBit(oldp+813,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__push_i));
    bufp->chgWData(oldp+814,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__data_o),101);
    bufp->chgBit(oldp+818,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__pop_i));
    bufp->chgBit(oldp+819,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__gate_clock));
    bufp->chgBit(oldp+820,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__read_pointer_n));
    bufp->chgBit(oldp+821,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__read_pointer_q));
    bufp->chgBit(oldp+822,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__write_pointer_n));
    bufp->chgBit(oldp+823,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__write_pointer_q));
    bufp->chgCData(oldp+824,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__status_cnt_n),2);
    bufp->chgCData(oldp+825,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__status_cnt_q),2);
    __Vtemp_3[0U] = vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[0U];
    __Vtemp_3[1U] = vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[1U];
    __Vtemp_3[2U] = vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[2U];
    __Vtemp_3[3U] = (0x1fU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[3U]);
    bufp->chgWData(oldp+826,(__Vtemp_3),101);
    __Vtemp_6[0U] = ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[4U] 
                      << 0x1bU) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[3U] 
                                   >> 5U));
    __Vtemp_6[1U] = ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[5U] 
                      << 0x1bU) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[4U] 
                                   >> 5U));
    __Vtemp_6[2U] = ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[6U] 
                      << 0x1bU) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[5U] 
                                   >> 5U));
    __Vtemp_6[3U] = (0x1fU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[6U] 
                              >> 5U));
    bufp->chgWData(oldp+830,(__Vtemp_6),101);
    __Vtemp_9[0U] = vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[0U];
    __Vtemp_9[1U] = vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[1U];
    __Vtemp_9[2U] = vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[2U];
    __Vtemp_9[3U] = (0x1fU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[3U]);
    bufp->chgWData(oldp+834,(__Vtemp_9),101);
    __Vtemp_12[0U] = ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[4U] 
                       << 0x1bU) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[3U] 
                                    >> 5U));
    __Vtemp_12[1U] = ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[5U] 
                       << 0x1bU) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[4U] 
                                    >> 5U));
    __Vtemp_12[2U] = ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[6U] 
                       << 0x1bU) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[5U] 
                                    >> 5U));
    __Vtemp_12[3U] = (0x1fU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[6U] 
                               >> 5U));
    bufp->chgWData(oldp+838,(__Vtemp_12),101);
    bufp->chgBit(oldp+842,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__clk_i));
    bufp->chgBit(oldp+843,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__rst_ni));
    bufp->chgBit(oldp+844,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__test_en_i));
    bufp->chgBit(oldp+845,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__slave_valid_i));
    bufp->chgQData(oldp+846,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__slave_addr_i),64);
    bufp->chgCData(oldp+848,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__slave_prot_i),3);
    bufp->chgCData(oldp+849,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__slave_region_i),4);
    bufp->chgCData(oldp+850,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__slave_len_i),8);
    bufp->chgCData(oldp+851,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__slave_size_i),3);
    bufp->chgCData(oldp+852,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__slave_burst_i),2);
    bufp->chgBit(oldp+853,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__slave_lock_i));
    bufp->chgCData(oldp+854,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__slave_cache_i),4);
    bufp->chgCData(oldp+855,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__slave_qos_i),4);
    bufp->chgCData(oldp+856,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__slave_id_i),4);
    bufp->chgCData(oldp+857,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__slave_user_i),4);
    bufp->chgBit(oldp+858,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__slave_ready_o));
    bufp->chgBit(oldp+859,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__master_valid_o));
    bufp->chgQData(oldp+860,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__master_addr_o),64);
    bufp->chgCData(oldp+862,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__master_prot_o),3);
    bufp->chgCData(oldp+863,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__master_region_o),4);
    bufp->chgCData(oldp+864,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__master_len_o),8);
    bufp->chgCData(oldp+865,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__master_size_o),3);
    bufp->chgCData(oldp+866,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__master_burst_o),2);
    bufp->chgBit(oldp+867,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__master_lock_o));
    bufp->chgCData(oldp+868,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__master_cache_o),4);
    bufp->chgCData(oldp+869,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__master_qos_o),4);
    bufp->chgCData(oldp+870,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__master_id_o),4);
    bufp->chgCData(oldp+871,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__master_user_o),4);
    bufp->chgBit(oldp+872,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__master_ready_i));
    bufp->chgWData(oldp+873,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__s_data_in),101);
    bufp->chgWData(oldp+877,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__s_data_out),101);
    bufp->chgBit(oldp+881,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__clk_i));
    bufp->chgBit(oldp+882,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__rst_ni));
    bufp->chgBit(oldp+883,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__testmode_i));
    bufp->chgBit(oldp+884,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__valid_i));
    bufp->chgBit(oldp+885,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__ready_o));
    bufp->chgWData(oldp+886,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__data_i),101);
    bufp->chgBit(oldp+890,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__ready_i));
    bufp->chgBit(oldp+891,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__valid_o));
    bufp->chgWData(oldp+892,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__data_o),101);
    bufp->chgBit(oldp+896,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__full));
    bufp->chgBit(oldp+897,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__empty));
    bufp->chgBit(oldp+898,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__clk_i));
    bufp->chgBit(oldp+899,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__rst_ni));
    bufp->chgBit(oldp+900,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__flush_i));
    bufp->chgBit(oldp+901,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__testmode_i));
    bufp->chgBit(oldp+902,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__full_o));
    bufp->chgBit(oldp+903,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__empty_o));
    bufp->chgBit(oldp+904,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__threshold_o));
    bufp->chgWData(oldp+905,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__data_i),101);
    bufp->chgBit(oldp+909,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__push_i));
    bufp->chgWData(oldp+910,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__data_o),101);
    bufp->chgBit(oldp+914,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__pop_i));
    bufp->chgBit(oldp+915,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__clk_i));
    bufp->chgBit(oldp+916,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__rst_ni));
    bufp->chgBit(oldp+917,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__flush_i));
    bufp->chgBit(oldp+918,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__testmode_i));
    bufp->chgBit(oldp+919,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__full_o));
    bufp->chgBit(oldp+920,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__empty_o));
    bufp->chgBit(oldp+921,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__alm_full_o));
    bufp->chgBit(oldp+922,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__alm_empty_o));
    bufp->chgWData(oldp+923,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__data_i),101);
    bufp->chgBit(oldp+927,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__push_i));
    bufp->chgWData(oldp+928,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__data_o),101);
    bufp->chgBit(oldp+932,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__pop_i));
    bufp->chgBit(oldp+933,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__usage));
    bufp->chgBit(oldp+934,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__clk_i));
    bufp->chgBit(oldp+935,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__rst_ni));
    bufp->chgBit(oldp+936,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__flush_i));
    bufp->chgBit(oldp+937,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__testmode_i));
    bufp->chgBit(oldp+938,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__full_o));
    bufp->chgBit(oldp+939,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__empty_o));
    bufp->chgBit(oldp+940,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__usage_o));
    bufp->chgWData(oldp+941,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__data_i),101);
    bufp->chgBit(oldp+945,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__push_i));
    bufp->chgWData(oldp+946,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__data_o),101);
    bufp->chgBit(oldp+950,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__pop_i));
    bufp->chgBit(oldp+951,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__gate_clock));
    bufp->chgBit(oldp+952,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__read_pointer_n));
    bufp->chgBit(oldp+953,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__read_pointer_q));
    bufp->chgBit(oldp+954,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__write_pointer_n));
    bufp->chgBit(oldp+955,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__write_pointer_q));
    bufp->chgCData(oldp+956,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__status_cnt_n),2);
    bufp->chgCData(oldp+957,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__status_cnt_q),2);
    __Vtemp_15[0U] = vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[0U];
    __Vtemp_15[1U] = vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[1U];
    __Vtemp_15[2U] = vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[2U];
    __Vtemp_15[3U] = (0x1fU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[3U]);
    bufp->chgWData(oldp+958,(__Vtemp_15),101);
    __Vtemp_18[0U] = ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[4U] 
                       << 0x1bU) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[3U] 
                                    >> 5U));
    __Vtemp_18[1U] = ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[5U] 
                       << 0x1bU) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[4U] 
                                    >> 5U));
    __Vtemp_18[2U] = ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[6U] 
                       << 0x1bU) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[5U] 
                                    >> 5U));
    __Vtemp_18[3U] = (0x1fU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[6U] 
                               >> 5U));
    bufp->chgWData(oldp+962,(__Vtemp_18),101);
    __Vtemp_21[0U] = vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[0U];
    __Vtemp_21[1U] = vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[1U];
    __Vtemp_21[2U] = vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[2U];
    __Vtemp_21[3U] = (0x1fU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[3U]);
    bufp->chgWData(oldp+966,(__Vtemp_21),101);
    __Vtemp_24[0U] = ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[4U] 
                       << 0x1bU) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[3U] 
                                    >> 5U));
    __Vtemp_24[1U] = ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[5U] 
                       << 0x1bU) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[4U] 
                                    >> 5U));
    __Vtemp_24[2U] = ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[6U] 
                       << 0x1bU) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[5U] 
                                    >> 5U));
    __Vtemp_24[3U] = (0x1fU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[6U] 
                               >> 5U));
    bufp->chgWData(oldp+970,(__Vtemp_24),101);
    bufp->chgBit(oldp+974,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__clk_i));
    bufp->chgBit(oldp+975,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__rst_ni));
    bufp->chgBit(oldp+976,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__test_en_i));
    bufp->chgBit(oldp+977,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__slave_valid_i));
    bufp->chgCData(oldp+978,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__slave_resp_i),2);
    bufp->chgCData(oldp+979,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__slave_id_i),4);
    bufp->chgCData(oldp+980,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__slave_user_i),4);
    bufp->chgBit(oldp+981,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__slave_ready_o));
    bufp->chgBit(oldp+982,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__master_valid_o));
    bufp->chgCData(oldp+983,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__master_resp_o),2);
    bufp->chgCData(oldp+984,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__master_id_o),4);
    bufp->chgCData(oldp+985,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__master_user_o),4);
    bufp->chgBit(oldp+986,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__master_ready_i));
    bufp->chgSData(oldp+987,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__s_data_in),10);
    bufp->chgSData(oldp+988,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__s_data_out),10);
    bufp->chgBit(oldp+989,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__clk_i));
    bufp->chgBit(oldp+990,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__rst_ni));
    bufp->chgBit(oldp+991,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__testmode_i));
    bufp->chgBit(oldp+992,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__valid_i));
    bufp->chgBit(oldp+993,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__ready_o));
    bufp->chgSData(oldp+994,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__data_i),10);
    bufp->chgBit(oldp+995,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__ready_i));
    bufp->chgBit(oldp+996,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__valid_o));
    bufp->chgSData(oldp+997,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__data_o),10);
    bufp->chgBit(oldp+998,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__full));
    bufp->chgBit(oldp+999,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__empty));
    bufp->chgBit(oldp+1000,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__clk_i));
    bufp->chgBit(oldp+1001,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__rst_ni));
    bufp->chgBit(oldp+1002,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__flush_i));
    bufp->chgBit(oldp+1003,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__testmode_i));
    bufp->chgBit(oldp+1004,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__full_o));
    bufp->chgBit(oldp+1005,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__empty_o));
    bufp->chgBit(oldp+1006,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__threshold_o));
    bufp->chgSData(oldp+1007,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__data_i),10);
    bufp->chgBit(oldp+1008,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__push_i));
    bufp->chgSData(oldp+1009,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__data_o),10);
    bufp->chgBit(oldp+1010,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__pop_i));
    bufp->chgBit(oldp+1011,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__clk_i));
    bufp->chgBit(oldp+1012,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__rst_ni));
    bufp->chgBit(oldp+1013,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__flush_i));
    bufp->chgBit(oldp+1014,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__testmode_i));
    bufp->chgBit(oldp+1015,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__full_o));
    bufp->chgBit(oldp+1016,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__empty_o));
    bufp->chgBit(oldp+1017,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__alm_full_o));
    bufp->chgBit(oldp+1018,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__alm_empty_o));
    bufp->chgSData(oldp+1019,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__data_i),10);
    bufp->chgBit(oldp+1020,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__push_i));
    bufp->chgSData(oldp+1021,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__data_o),10);
    bufp->chgBit(oldp+1022,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__pop_i));
    bufp->chgBit(oldp+1023,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__usage));
    bufp->chgBit(oldp+1024,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__clk_i));
    bufp->chgBit(oldp+1025,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__rst_ni));
    bufp->chgBit(oldp+1026,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__flush_i));
    bufp->chgBit(oldp+1027,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__testmode_i));
    bufp->chgBit(oldp+1028,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__full_o));
    bufp->chgBit(oldp+1029,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__empty_o));
    bufp->chgBit(oldp+1030,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__usage_o));
    bufp->chgSData(oldp+1031,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__data_i),10);
    bufp->chgBit(oldp+1032,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__push_i));
    bufp->chgSData(oldp+1033,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__data_o),10);
    bufp->chgBit(oldp+1034,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__pop_i));
    bufp->chgBit(oldp+1035,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__gate_clock));
    bufp->chgBit(oldp+1036,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__read_pointer_n));
    bufp->chgBit(oldp+1037,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__read_pointer_q));
    bufp->chgBit(oldp+1038,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__write_pointer_n));
    bufp->chgBit(oldp+1039,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__write_pointer_q));
    bufp->chgCData(oldp+1040,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__status_cnt_n),2);
    bufp->chgCData(oldp+1041,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__status_cnt_q),2);
    bufp->chgSData(oldp+1042,((0x3ffU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n)),10);
    bufp->chgSData(oldp+1043,((0x3ffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n 
                                         >> 0xaU))),10);
    bufp->chgSData(oldp+1044,((0x3ffU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q)),10);
    bufp->chgSData(oldp+1045,((0x3ffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q 
                                         >> 0xaU))),10);
    bufp->chgBit(oldp+1046,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__clk_i));
    bufp->chgBit(oldp+1047,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__rst_ni));
    bufp->chgBit(oldp+1048,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__test_en_i));
    bufp->chgBit(oldp+1049,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__slave_valid_i));
    bufp->chgQData(oldp+1050,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__slave_data_i),64);
    bufp->chgCData(oldp+1052,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__slave_resp_i),2);
    bufp->chgCData(oldp+1053,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__slave_user_i),4);
    bufp->chgCData(oldp+1054,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__slave_id_i),4);
    bufp->chgBit(oldp+1055,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__slave_last_i));
    bufp->chgBit(oldp+1056,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__slave_ready_o));
    bufp->chgBit(oldp+1057,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__master_valid_o));
    bufp->chgQData(oldp+1058,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__master_data_o),64);
    bufp->chgCData(oldp+1060,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__master_resp_o),2);
    bufp->chgCData(oldp+1061,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__master_user_o),4);
    bufp->chgCData(oldp+1062,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__master_id_o),4);
    bufp->chgBit(oldp+1063,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__master_last_o));
    bufp->chgBit(oldp+1064,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__master_ready_i));
    bufp->chgWData(oldp+1065,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__s_data_in),75);
    bufp->chgWData(oldp+1068,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__s_data_out),75);
    bufp->chgBit(oldp+1071,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__clk_i));
    bufp->chgBit(oldp+1072,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__rst_ni));
    bufp->chgBit(oldp+1073,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__testmode_i));
    bufp->chgBit(oldp+1074,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__valid_i));
    bufp->chgBit(oldp+1075,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__ready_o));
    bufp->chgWData(oldp+1076,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__data_i),75);
    bufp->chgBit(oldp+1079,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__ready_i));
    bufp->chgBit(oldp+1080,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__valid_o));
    bufp->chgWData(oldp+1081,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__data_o),75);
    bufp->chgBit(oldp+1084,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__full));
    bufp->chgBit(oldp+1085,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__empty));
    bufp->chgBit(oldp+1086,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__clk_i));
    bufp->chgBit(oldp+1087,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__rst_ni));
    bufp->chgBit(oldp+1088,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__flush_i));
    bufp->chgBit(oldp+1089,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__testmode_i));
    bufp->chgBit(oldp+1090,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__full_o));
    bufp->chgBit(oldp+1091,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__empty_o));
    bufp->chgBit(oldp+1092,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__threshold_o));
    bufp->chgWData(oldp+1093,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__data_i),75);
    bufp->chgBit(oldp+1096,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__push_i));
    bufp->chgWData(oldp+1097,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__data_o),75);
    bufp->chgBit(oldp+1100,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__pop_i));
    bufp->chgBit(oldp+1101,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__clk_i));
    bufp->chgBit(oldp+1102,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__rst_ni));
    bufp->chgBit(oldp+1103,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__flush_i));
    bufp->chgBit(oldp+1104,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__testmode_i));
    bufp->chgBit(oldp+1105,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__full_o));
    bufp->chgBit(oldp+1106,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__empty_o));
    bufp->chgBit(oldp+1107,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__alm_full_o));
    bufp->chgBit(oldp+1108,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__alm_empty_o));
    bufp->chgWData(oldp+1109,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__data_i),75);
    bufp->chgBit(oldp+1112,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__push_i));
    bufp->chgWData(oldp+1113,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__data_o),75);
    bufp->chgBit(oldp+1116,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__pop_i));
    bufp->chgBit(oldp+1117,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__usage));
    bufp->chgBit(oldp+1118,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__clk_i));
    bufp->chgBit(oldp+1119,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__rst_ni));
    bufp->chgBit(oldp+1120,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__flush_i));
    bufp->chgBit(oldp+1121,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__testmode_i));
    bufp->chgBit(oldp+1122,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__full_o));
    bufp->chgBit(oldp+1123,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__empty_o));
    bufp->chgBit(oldp+1124,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__usage_o));
    bufp->chgWData(oldp+1125,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__data_i),75);
    bufp->chgBit(oldp+1128,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__push_i));
    bufp->chgWData(oldp+1129,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__data_o),75);
    bufp->chgBit(oldp+1132,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__pop_i));
    bufp->chgBit(oldp+1133,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__gate_clock));
    bufp->chgBit(oldp+1134,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__read_pointer_n));
    bufp->chgBit(oldp+1135,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__read_pointer_q));
    bufp->chgBit(oldp+1136,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__write_pointer_n));
    bufp->chgBit(oldp+1137,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__write_pointer_q));
    bufp->chgCData(oldp+1138,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__status_cnt_n),2);
    bufp->chgCData(oldp+1139,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__status_cnt_q),2);
    __Vtemp_27[0U] = vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[0U];
    __Vtemp_27[1U] = vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[1U];
    __Vtemp_27[2U] = (0x7ffU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[2U]);
    bufp->chgWData(oldp+1140,(__Vtemp_27),75);
    __Vtemp_30[0U] = ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[3U] 
                       << 0x15U) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[2U] 
                                    >> 0xbU));
    __Vtemp_30[1U] = ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[4U] 
                       << 0x15U) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[3U] 
                                    >> 0xbU));
    __Vtemp_30[2U] = (0x7ffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[4U] 
                                >> 0xbU));
    bufp->chgWData(oldp+1143,(__Vtemp_30),75);
    __Vtemp_33[0U] = vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[0U];
    __Vtemp_33[1U] = vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[1U];
    __Vtemp_33[2U] = (0x7ffU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[2U]);
    bufp->chgWData(oldp+1146,(__Vtemp_33),75);
    __Vtemp_36[0U] = ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[3U] 
                       << 0x15U) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[2U] 
                                    >> 0xbU));
    __Vtemp_36[1U] = ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[4U] 
                       << 0x15U) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[3U] 
                                    >> 0xbU));
    __Vtemp_36[2U] = (0x7ffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[4U] 
                                >> 0xbU));
    bufp->chgWData(oldp+1149,(__Vtemp_36),75);
    bufp->chgBit(oldp+1152,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__clk_i));
    bufp->chgBit(oldp+1153,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__rst_ni));
    bufp->chgBit(oldp+1154,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__test_en_i));
    bufp->chgBit(oldp+1155,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__slave_valid_i));
    bufp->chgQData(oldp+1156,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__slave_data_i),64);
    bufp->chgCData(oldp+1158,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__slave_strb_i),8);
    bufp->chgCData(oldp+1159,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__slave_user_i),4);
    bufp->chgBit(oldp+1160,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__slave_last_i));
    bufp->chgBit(oldp+1161,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__slave_ready_o));
    bufp->chgBit(oldp+1162,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__master_valid_o));
    bufp->chgQData(oldp+1163,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__master_data_o),64);
    bufp->chgCData(oldp+1165,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__master_strb_o),8);
    bufp->chgCData(oldp+1166,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__master_user_o),4);
    bufp->chgBit(oldp+1167,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__master_last_o));
    bufp->chgBit(oldp+1168,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__master_ready_i));
    bufp->chgWData(oldp+1169,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__s_data_in),77);
    bufp->chgWData(oldp+1172,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__s_data_out),77);
    bufp->chgBit(oldp+1175,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__clk_i));
    bufp->chgBit(oldp+1176,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__rst_ni));
    bufp->chgBit(oldp+1177,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__testmode_i));
    bufp->chgBit(oldp+1178,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__valid_i));
    bufp->chgBit(oldp+1179,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__ready_o));
    bufp->chgWData(oldp+1180,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__data_i),77);
    bufp->chgBit(oldp+1183,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__ready_i));
    bufp->chgBit(oldp+1184,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__valid_o));
    bufp->chgWData(oldp+1185,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__data_o),77);
    bufp->chgBit(oldp+1188,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__full));
    bufp->chgBit(oldp+1189,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__empty));
    bufp->chgBit(oldp+1190,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__clk_i));
    bufp->chgBit(oldp+1191,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__rst_ni));
    bufp->chgBit(oldp+1192,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__flush_i));
    bufp->chgBit(oldp+1193,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__testmode_i));
    bufp->chgBit(oldp+1194,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__full_o));
    bufp->chgBit(oldp+1195,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__empty_o));
    bufp->chgBit(oldp+1196,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__threshold_o));
    bufp->chgWData(oldp+1197,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__data_i),77);
    bufp->chgBit(oldp+1200,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__push_i));
    bufp->chgWData(oldp+1201,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__data_o),77);
    bufp->chgBit(oldp+1204,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__pop_i));
    bufp->chgBit(oldp+1205,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__clk_i));
    bufp->chgBit(oldp+1206,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__rst_ni));
    bufp->chgBit(oldp+1207,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__flush_i));
    bufp->chgBit(oldp+1208,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__testmode_i));
    bufp->chgBit(oldp+1209,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__full_o));
    bufp->chgBit(oldp+1210,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__empty_o));
    bufp->chgBit(oldp+1211,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__alm_full_o));
    bufp->chgBit(oldp+1212,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__alm_empty_o));
    bufp->chgWData(oldp+1213,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__data_i),77);
    bufp->chgBit(oldp+1216,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__push_i));
    bufp->chgWData(oldp+1217,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__data_o),77);
    bufp->chgBit(oldp+1220,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__pop_i));
    bufp->chgBit(oldp+1221,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__usage));
    bufp->chgBit(oldp+1222,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__clk_i));
    bufp->chgBit(oldp+1223,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__rst_ni));
    bufp->chgBit(oldp+1224,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__flush_i));
    bufp->chgBit(oldp+1225,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__testmode_i));
    bufp->chgBit(oldp+1226,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__full_o));
    bufp->chgBit(oldp+1227,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__empty_o));
    bufp->chgBit(oldp+1228,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__usage_o));
    bufp->chgWData(oldp+1229,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__data_i),77);
    bufp->chgBit(oldp+1232,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__push_i));
    bufp->chgWData(oldp+1233,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__data_o),77);
    bufp->chgBit(oldp+1236,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__pop_i));
    bufp->chgBit(oldp+1237,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__gate_clock));
    bufp->chgBit(oldp+1238,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__read_pointer_n));
    bufp->chgBit(oldp+1239,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__read_pointer_q));
    bufp->chgBit(oldp+1240,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__write_pointer_n));
    bufp->chgBit(oldp+1241,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__write_pointer_q));
    bufp->chgCData(oldp+1242,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__status_cnt_n),2);
    bufp->chgCData(oldp+1243,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__status_cnt_q),2);
    __Vtemp_39[0U] = vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[0U];
    __Vtemp_39[1U] = vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[1U];
    __Vtemp_39[2U] = (0x1fffU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[2U]);
    bufp->chgWData(oldp+1244,(__Vtemp_39),77);
    __Vtemp_42[0U] = ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[3U] 
                       << 0x13U) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[2U] 
                                    >> 0xdU));
    __Vtemp_42[1U] = ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[4U] 
                       << 0x13U) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[3U] 
                                    >> 0xdU));
    __Vtemp_42[2U] = (0x1fffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[4U] 
                                 >> 0xdU));
    bufp->chgWData(oldp+1247,(__Vtemp_42),77);
    __Vtemp_45[0U] = vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[0U];
    __Vtemp_45[1U] = vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[1U];
    __Vtemp_45[2U] = (0x1fffU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[2U]);
    bufp->chgWData(oldp+1250,(__Vtemp_45),77);
    __Vtemp_48[0U] = ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[3U] 
                       << 0x13U) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[2U] 
                                    >> 0xdU));
    __Vtemp_48[1U] = ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[4U] 
                       << 0x13U) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[3U] 
                                    >> 0xdU));
    __Vtemp_48[2U] = (0x1fffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[4U] 
                                 >> 0xdU));
    bufp->chgWData(oldp+1253,(__Vtemp_48),77);
    bufp->chgBit(oldp+1256,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__clk_i));
    bufp->chgBit(oldp+1257,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__rst_ni));
    bufp->chgCData(oldp+1258,((0x3fU & (IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_req_i 
                                                >> 0x26U)))),6);
    bufp->chgBit(oldp+1259,((1U & (IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_req_i 
                                           >> 0x25U)))));
    bufp->chgIData(oldp+1260,((IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_req_i 
                                       >> 5U))),32);
    bufp->chgCData(oldp+1261,((0xfU & (IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_req_i 
                                               >> 1U)))),4);
    bufp->chgBit(oldp+1262,((1U & (IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_req_i))));
    bufp->chgIData(oldp+1263,((IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_rsp_o 
                                       >> 2U))),32);
    bufp->chgBit(oldp+1264,((1U & (IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_rsp_o 
                                           >> 1U)))));
    bufp->chgBit(oldp+1265,((1U & (IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_rsp_o))));
    bufp->chgBit(oldp+1266,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg2hw[5U] 
                                   >> 0x13U))));
    bufp->chgBit(oldp+1267,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg2hw[5U] 
                                   >> 0x12U))));
    bufp->chgBit(oldp+1268,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg2hw[5U] 
                                   >> 0x11U))));
    bufp->chgBit(oldp+1269,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg2hw[5U] 
                                   >> 0x10U))));
    bufp->chgBit(oldp+1270,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg2hw[5U] 
                                   >> 0xfU))));
    bufp->chgBit(oldp+1271,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg2hw[5U] 
                                   >> 0xeU))));
    bufp->chgCData(oldp+1272,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg2hw[5U] 
                                        >> 6U))),8);
    bufp->chgCData(oldp+1273,((0xffU & ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg2hw[5U] 
                                         << 2U) | (
                                                   vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg2hw[4U] 
                                                   >> 0x1eU)))),8);
    bufp->chgIData(oldp+1274,(((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg2hw[4U] 
                                << 2U) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg2hw[3U] 
                                          >> 0x1eU))),32);
    bufp->chgIData(oldp+1275,(((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg2hw[3U] 
                                << 2U) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg2hw[2U] 
                                          >> 0x1eU))),32);
    bufp->chgCData(oldp+1276,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg2hw[2U] 
                                        >> 0x16U))),8);
    bufp->chgCData(oldp+1277,((7U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg2hw[2U] 
                                     >> 0x13U))),3);
    bufp->chgCData(oldp+1278,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg2hw[2U] 
                                       >> 0xfU))),4);
    bufp->chgIData(oldp+1279,(((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg2hw[2U] 
                                << 0x11U) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg2hw[1U] 
                                             >> 0xfU))),32);
    bufp->chgIData(oldp+1280,(((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg2hw[1U] 
                                << 0x11U) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg2hw[0U] 
                                             >> 0xfU))),32);
    bufp->chgCData(oldp+1281,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg2hw[0U] 
                                        >> 7U))),8);
    bufp->chgCData(oldp+1282,((7U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg2hw[0U] 
                                     >> 4U))),3);
    bufp->chgCData(oldp+1283,((0xfU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg2hw[0U])),4);
    bufp->chgBit(oldp+1284,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__hw2reg 
                                   >> 0x1dU))));
    bufp->chgBit(oldp+1285,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__hw2reg 
                                   >> 0x1cU))));
    bufp->chgBit(oldp+1286,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__hw2reg 
                                   >> 0x1bU))));
    bufp->chgBit(oldp+1287,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__hw2reg 
                                   >> 0x1aU))));
    bufp->chgBit(oldp+1288,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__hw2reg 
                                   >> 0x19U))));
    bufp->chgBit(oldp+1289,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__hw2reg 
                                   >> 0x18U))));
    bufp->chgBit(oldp+1290,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__hw2reg 
                                   >> 0x17U))));
    bufp->chgBit(oldp+1291,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__hw2reg 
                                   >> 0x16U))));
    bufp->chgBit(oldp+1292,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__hw2reg 
                                   >> 0x15U))));
    bufp->chgBit(oldp+1293,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__hw2reg 
                                   >> 0x14U))));
    bufp->chgBit(oldp+1294,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__hw2reg 
                                   >> 0x13U))));
    bufp->chgBit(oldp+1295,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__hw2reg 
                                   >> 0x12U))));
    bufp->chgCData(oldp+1296,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__hw2reg 
                                        >> 0xaU))),8);
    bufp->chgBit(oldp+1297,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__hw2reg 
                                   >> 9U))));
    bufp->chgCData(oldp+1298,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__hw2reg 
                                        >> 1U))),8);
    bufp->chgBit(oldp+1299,((1U & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__hw2reg)));
    bufp->chgBit(oldp+1300,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__devmode_i));
    bufp->chgBit(oldp+1301,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_we));
    bufp->chgBit(oldp+1302,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_re));
    bufp->chgCData(oldp+1303,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_addr),6);
    bufp->chgIData(oldp+1304,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_wdata),32);
    bufp->chgCData(oldp+1305,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_be),4);
    bufp->chgIData(oldp+1306,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_rdata),32);
    bufp->chgBit(oldp+1307,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_error));
    bufp->chgBit(oldp+1308,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__addrmiss));
    bufp->chgBit(oldp+1309,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__wr_err));
    bufp->chgIData(oldp+1310,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_rdata_next),32);
    bufp->chgCData(oldp+1311,((0x3fU & (IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_intf_req 
                                                >> 0x26U)))),6);
    bufp->chgBit(oldp+1312,((1U & (IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_intf_req 
                                           >> 0x25U)))));
    bufp->chgIData(oldp+1313,((IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_intf_req 
                                       >> 5U))),32);
    bufp->chgCData(oldp+1314,((0xfU & (IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_intf_req 
                                               >> 1U)))),4);
    bufp->chgBit(oldp+1315,((1U & (IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_intf_req))));
    bufp->chgIData(oldp+1316,((IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_intf_rsp 
                                       >> 2U))),32);
    bufp->chgBit(oldp+1317,((1U & (IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_intf_rsp 
                                           >> 1U)))));
    bufp->chgBit(oldp+1318,((1U & (IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_intf_rsp))));
    bufp->chgBit(oldp+1319,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__control_r_ready_qs));
    bufp->chgBit(oldp+1320,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__control_w_ready_qs));
    bufp->chgBit(oldp+1321,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__control_r_enable_qs));
    bufp->chgBit(oldp+1322,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__control_r_enable_wd));
    bufp->chgBit(oldp+1323,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__control_r_enable_we));
    bufp->chgBit(oldp+1324,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__control_w_enable_qs));
    bufp->chgBit(oldp+1325,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__control_w_enable_wd));
    bufp->chgBit(oldp+1326,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__control_w_enable_we));
    bufp->chgBit(oldp+1327,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__control_r_burst_qs));
    bufp->chgBit(oldp+1328,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__control_r_burst_wd));
    bufp->chgBit(oldp+1329,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__control_r_burst_we));
    bufp->chgBit(oldp+1330,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__control_w_burst_qs));
    bufp->chgBit(oldp+1331,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__control_w_burst_wd));
    bufp->chgBit(oldp+1332,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__control_w_burst_we));
    bufp->chgCData(oldp+1333,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__control_r_burst_len_qs),8);
    bufp->chgCData(oldp+1334,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__control_r_burst_len_wd),8);
    bufp->chgBit(oldp+1335,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__control_r_burst_len_we));
    bufp->chgCData(oldp+1336,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__control_w_burst_len_qs),8);
    bufp->chgCData(oldp+1337,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__control_w_burst_len_wd),8);
    bufp->chgBit(oldp+1338,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__control_w_burst_len_we));
    bufp->chgIData(oldp+1339,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__ar_addrl_qs),32);
    bufp->chgIData(oldp+1340,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__ar_addrl_wd),32);
    bufp->chgBit(oldp+1341,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__ar_addrl_we));
    bufp->chgIData(oldp+1342,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__ar_addrh_qs),32);
    bufp->chgIData(oldp+1343,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__ar_addrh_wd),32);
    bufp->chgBit(oldp+1344,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__ar_addrh_we));
    bufp->chgCData(oldp+1345,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__ar_cfg_len_qs),8);
    bufp->chgCData(oldp+1346,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__ar_cfg_len_wd),8);
    bufp->chgBit(oldp+1347,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__ar_cfg_len_we));
    bufp->chgCData(oldp+1348,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__ar_cfg_size_qs),3);
    bufp->chgCData(oldp+1349,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__ar_cfg_size_wd),3);
    bufp->chgBit(oldp+1350,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__ar_cfg_size_we));
    bufp->chgCData(oldp+1351,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__ar_cfg_nsaid_qs),4);
    bufp->chgCData(oldp+1352,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__ar_cfg_nsaid_wd),4);
    bufp->chgBit(oldp+1353,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__ar_cfg_nsaid_we));
    bufp->chgIData(oldp+1354,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__aw_addrl_qs),32);
    bufp->chgIData(oldp+1355,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__aw_addrl_wd),32);
    bufp->chgBit(oldp+1356,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__aw_addrl_we));
    bufp->chgIData(oldp+1357,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__aw_addrh_qs),32);
    bufp->chgIData(oldp+1358,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__aw_addrh_wd),32);
    bufp->chgBit(oldp+1359,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__aw_addrh_we));
    bufp->chgCData(oldp+1360,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__aw_cfg_len_qs),8);
    bufp->chgCData(oldp+1361,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__aw_cfg_len_wd),8);
    bufp->chgBit(oldp+1362,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__aw_cfg_len_we));
    bufp->chgCData(oldp+1363,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__aw_cfg_size_qs),3);
    bufp->chgCData(oldp+1364,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__aw_cfg_size_wd),3);
    bufp->chgBit(oldp+1365,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__aw_cfg_size_we));
    bufp->chgCData(oldp+1366,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__aw_cfg_nsaid_qs),4);
    bufp->chgCData(oldp+1367,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__aw_cfg_nsaid_wd),4);
    bufp->chgBit(oldp+1368,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__aw_cfg_nsaid_we));
    bufp->chgCData(oldp+1369,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__addr_hit),7);
    bufp->chgBit(oldp+1370,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__unused_wdata));
    bufp->chgBit(oldp+1371,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__unused_be));
    bufp->chgBit(oldp+1372,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrh__DOT__clk_i));
    bufp->chgBit(oldp+1373,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrh__DOT__rst_ni));
    bufp->chgBit(oldp+1374,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrh__DOT__we));
    bufp->chgIData(oldp+1375,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrh__DOT__wd),32);
    bufp->chgBit(oldp+1376,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrh__DOT__de));
    bufp->chgIData(oldp+1377,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrh__DOT__d),32);
    bufp->chgBit(oldp+1378,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrh__DOT__qe));
    bufp->chgIData(oldp+1379,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrh__DOT__q),32);
    bufp->chgIData(oldp+1380,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrh__DOT__qs),32);
    bufp->chgBit(oldp+1381,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrh__DOT__wr_en));
    bufp->chgIData(oldp+1382,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrh__DOT__wr_data),32);
    bufp->chgBit(oldp+1383,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrh__DOT__wr_en_data_arb__DOT__we));
    bufp->chgIData(oldp+1384,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrh__DOT__wr_en_data_arb__DOT__wd),32);
    bufp->chgBit(oldp+1385,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrh__DOT__wr_en_data_arb__DOT__de));
    bufp->chgIData(oldp+1386,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrh__DOT__wr_en_data_arb__DOT__d),32);
    bufp->chgIData(oldp+1387,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrh__DOT__wr_en_data_arb__DOT__q),32);
    bufp->chgBit(oldp+1388,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrh__DOT__wr_en_data_arb__DOT__wr_en));
    bufp->chgIData(oldp+1389,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrh__DOT__wr_en_data_arb__DOT__wr_data),32);
    bufp->chgIData(oldp+1390,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrh__DOT__wr_en_data_arb__DOT__gen_w__DOT__unused_q),32);
    bufp->chgBit(oldp+1391,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrl__DOT__clk_i));
    bufp->chgBit(oldp+1392,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrl__DOT__rst_ni));
    bufp->chgBit(oldp+1393,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrl__DOT__we));
    bufp->chgIData(oldp+1394,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrl__DOT__wd),32);
    bufp->chgBit(oldp+1395,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrl__DOT__de));
    bufp->chgIData(oldp+1396,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrl__DOT__d),32);
    bufp->chgBit(oldp+1397,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrl__DOT__qe));
    bufp->chgIData(oldp+1398,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrl__DOT__q),32);
    bufp->chgIData(oldp+1399,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrl__DOT__qs),32);
    bufp->chgBit(oldp+1400,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrl__DOT__wr_en));
    bufp->chgIData(oldp+1401,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrl__DOT__wr_data),32);
    bufp->chgBit(oldp+1402,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrl__DOT__wr_en_data_arb__DOT__we));
    bufp->chgIData(oldp+1403,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrl__DOT__wr_en_data_arb__DOT__wd),32);
    bufp->chgBit(oldp+1404,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrl__DOT__wr_en_data_arb__DOT__de));
    bufp->chgIData(oldp+1405,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrl__DOT__wr_en_data_arb__DOT__d),32);
    bufp->chgIData(oldp+1406,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrl__DOT__wr_en_data_arb__DOT__q),32);
    bufp->chgBit(oldp+1407,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrl__DOT__wr_en_data_arb__DOT__wr_en));
    bufp->chgIData(oldp+1408,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrl__DOT__wr_en_data_arb__DOT__wr_data),32);
    bufp->chgIData(oldp+1409,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrl__DOT__wr_en_data_arb__DOT__gen_w__DOT__unused_q),32);
    bufp->chgBit(oldp+1410,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_len__DOT__clk_i));
    bufp->chgBit(oldp+1411,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_len__DOT__rst_ni));
    bufp->chgBit(oldp+1412,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_len__DOT__we));
    bufp->chgCData(oldp+1413,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_len__DOT__wd),8);
    bufp->chgBit(oldp+1414,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_len__DOT__de));
    bufp->chgCData(oldp+1415,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_len__DOT__d),8);
    bufp->chgBit(oldp+1416,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_len__DOT__qe));
    bufp->chgCData(oldp+1417,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_len__DOT__q),8);
    bufp->chgCData(oldp+1418,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_len__DOT__qs),8);
    bufp->chgBit(oldp+1419,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_len__DOT__wr_en));
    bufp->chgCData(oldp+1420,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_len__DOT__wr_data),8);
    bufp->chgBit(oldp+1421,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_len__DOT__wr_en_data_arb__DOT__we));
    bufp->chgCData(oldp+1422,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_len__DOT__wr_en_data_arb__DOT__wd),8);
    bufp->chgBit(oldp+1423,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_len__DOT__wr_en_data_arb__DOT__de));
    bufp->chgCData(oldp+1424,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_len__DOT__wr_en_data_arb__DOT__d),8);
    bufp->chgCData(oldp+1425,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_len__DOT__wr_en_data_arb__DOT__q),8);
    bufp->chgBit(oldp+1426,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_len__DOT__wr_en_data_arb__DOT__wr_en));
    bufp->chgCData(oldp+1427,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_len__DOT__wr_en_data_arb__DOT__wr_data),8);
    bufp->chgCData(oldp+1428,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_len__DOT__wr_en_data_arb__DOT__gen_w__DOT__unused_q),8);
    bufp->chgBit(oldp+1429,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_nsaid__DOT__clk_i));
    bufp->chgBit(oldp+1430,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_nsaid__DOT__rst_ni));
    bufp->chgBit(oldp+1431,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_nsaid__DOT__we));
    bufp->chgCData(oldp+1432,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_nsaid__DOT__wd),4);
    bufp->chgBit(oldp+1433,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_nsaid__DOT__de));
    bufp->chgCData(oldp+1434,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_nsaid__DOT__d),4);
    bufp->chgBit(oldp+1435,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_nsaid__DOT__qe));
    bufp->chgCData(oldp+1436,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_nsaid__DOT__q),4);
    bufp->chgCData(oldp+1437,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_nsaid__DOT__qs),4);
    bufp->chgBit(oldp+1438,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_nsaid__DOT__wr_en));
    bufp->chgCData(oldp+1439,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_nsaid__DOT__wr_data),4);
    bufp->chgBit(oldp+1440,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_nsaid__DOT__wr_en_data_arb__DOT__we));
    bufp->chgCData(oldp+1441,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_nsaid__DOT__wr_en_data_arb__DOT__wd),4);
    bufp->chgBit(oldp+1442,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_nsaid__DOT__wr_en_data_arb__DOT__de));
    bufp->chgCData(oldp+1443,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_nsaid__DOT__wr_en_data_arb__DOT__d),4);
    bufp->chgCData(oldp+1444,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_nsaid__DOT__wr_en_data_arb__DOT__q),4);
    bufp->chgBit(oldp+1445,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_nsaid__DOT__wr_en_data_arb__DOT__wr_en));
    bufp->chgCData(oldp+1446,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_nsaid__DOT__wr_en_data_arb__DOT__wr_data),4);
    bufp->chgCData(oldp+1447,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_nsaid__DOT__wr_en_data_arb__DOT__gen_w__DOT__unused_q),4);
    bufp->chgBit(oldp+1448,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_size__DOT__clk_i));
    bufp->chgBit(oldp+1449,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_size__DOT__rst_ni));
    bufp->chgBit(oldp+1450,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_size__DOT__we));
    bufp->chgCData(oldp+1451,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_size__DOT__wd),3);
    bufp->chgBit(oldp+1452,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_size__DOT__de));
    bufp->chgCData(oldp+1453,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_size__DOT__d),3);
    bufp->chgBit(oldp+1454,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_size__DOT__qe));
    bufp->chgCData(oldp+1455,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_size__DOT__q),3);
    bufp->chgCData(oldp+1456,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_size__DOT__qs),3);
    bufp->chgBit(oldp+1457,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_size__DOT__wr_en));
    bufp->chgCData(oldp+1458,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_size__DOT__wr_data),3);
    bufp->chgBit(oldp+1459,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_size__DOT__wr_en_data_arb__DOT__we));
    bufp->chgCData(oldp+1460,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_size__DOT__wr_en_data_arb__DOT__wd),3);
    bufp->chgBit(oldp+1461,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_size__DOT__wr_en_data_arb__DOT__de));
    bufp->chgCData(oldp+1462,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_size__DOT__wr_en_data_arb__DOT__d),3);
    bufp->chgCData(oldp+1463,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_size__DOT__wr_en_data_arb__DOT__q),3);
    bufp->chgBit(oldp+1464,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_size__DOT__wr_en_data_arb__DOT__wr_en));
    bufp->chgCData(oldp+1465,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_size__DOT__wr_en_data_arb__DOT__wr_data),3);
    bufp->chgCData(oldp+1466,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_size__DOT__wr_en_data_arb__DOT__gen_w__DOT__unused_q),3);
    bufp->chgBit(oldp+1467,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrh__DOT__clk_i));
    bufp->chgBit(oldp+1468,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrh__DOT__rst_ni));
    bufp->chgBit(oldp+1469,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrh__DOT__we));
    bufp->chgIData(oldp+1470,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrh__DOT__wd),32);
    bufp->chgBit(oldp+1471,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrh__DOT__de));
    bufp->chgIData(oldp+1472,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrh__DOT__d),32);
    bufp->chgBit(oldp+1473,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrh__DOT__qe));
    bufp->chgIData(oldp+1474,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrh__DOT__q),32);
    bufp->chgIData(oldp+1475,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrh__DOT__qs),32);
    bufp->chgBit(oldp+1476,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrh__DOT__wr_en));
    bufp->chgIData(oldp+1477,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrh__DOT__wr_data),32);
    bufp->chgBit(oldp+1478,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrh__DOT__wr_en_data_arb__DOT__we));
    bufp->chgIData(oldp+1479,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrh__DOT__wr_en_data_arb__DOT__wd),32);
    bufp->chgBit(oldp+1480,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrh__DOT__wr_en_data_arb__DOT__de));
    bufp->chgIData(oldp+1481,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrh__DOT__wr_en_data_arb__DOT__d),32);
    bufp->chgIData(oldp+1482,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrh__DOT__wr_en_data_arb__DOT__q),32);
    bufp->chgBit(oldp+1483,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrh__DOT__wr_en_data_arb__DOT__wr_en));
    bufp->chgIData(oldp+1484,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrh__DOT__wr_en_data_arb__DOT__wr_data),32);
    bufp->chgIData(oldp+1485,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrh__DOT__wr_en_data_arb__DOT__gen_w__DOT__unused_q),32);
    bufp->chgBit(oldp+1486,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrl__DOT__clk_i));
    bufp->chgBit(oldp+1487,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrl__DOT__rst_ni));
    bufp->chgBit(oldp+1488,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrl__DOT__we));
    bufp->chgIData(oldp+1489,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrl__DOT__wd),32);
    bufp->chgBit(oldp+1490,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrl__DOT__de));
    bufp->chgIData(oldp+1491,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrl__DOT__d),32);
    bufp->chgBit(oldp+1492,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrl__DOT__qe));
    bufp->chgIData(oldp+1493,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrl__DOT__q),32);
    bufp->chgIData(oldp+1494,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrl__DOT__qs),32);
    bufp->chgBit(oldp+1495,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrl__DOT__wr_en));
    bufp->chgIData(oldp+1496,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrl__DOT__wr_data),32);
    bufp->chgBit(oldp+1497,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrl__DOT__wr_en_data_arb__DOT__we));
    bufp->chgIData(oldp+1498,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrl__DOT__wr_en_data_arb__DOT__wd),32);
    bufp->chgBit(oldp+1499,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrl__DOT__wr_en_data_arb__DOT__de));
    bufp->chgIData(oldp+1500,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrl__DOT__wr_en_data_arb__DOT__d),32);
    bufp->chgIData(oldp+1501,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrl__DOT__wr_en_data_arb__DOT__q),32);
    bufp->chgBit(oldp+1502,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrl__DOT__wr_en_data_arb__DOT__wr_en));
    bufp->chgIData(oldp+1503,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrl__DOT__wr_en_data_arb__DOT__wr_data),32);
    bufp->chgIData(oldp+1504,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrl__DOT__wr_en_data_arb__DOT__gen_w__DOT__unused_q),32);
    bufp->chgBit(oldp+1505,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_len__DOT__clk_i));
    bufp->chgBit(oldp+1506,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_len__DOT__rst_ni));
    bufp->chgBit(oldp+1507,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_len__DOT__we));
    bufp->chgCData(oldp+1508,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_len__DOT__wd),8);
    bufp->chgBit(oldp+1509,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_len__DOT__de));
    bufp->chgCData(oldp+1510,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_len__DOT__d),8);
    bufp->chgBit(oldp+1511,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_len__DOT__qe));
    bufp->chgCData(oldp+1512,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_len__DOT__q),8);
    bufp->chgCData(oldp+1513,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_len__DOT__qs),8);
    bufp->chgBit(oldp+1514,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_len__DOT__wr_en));
    bufp->chgCData(oldp+1515,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_len__DOT__wr_data),8);
    bufp->chgBit(oldp+1516,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_len__DOT__wr_en_data_arb__DOT__we));
    bufp->chgCData(oldp+1517,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_len__DOT__wr_en_data_arb__DOT__wd),8);
    bufp->chgBit(oldp+1518,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_len__DOT__wr_en_data_arb__DOT__de));
    bufp->chgCData(oldp+1519,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_len__DOT__wr_en_data_arb__DOT__d),8);
    bufp->chgCData(oldp+1520,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_len__DOT__wr_en_data_arb__DOT__q),8);
    bufp->chgBit(oldp+1521,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_len__DOT__wr_en_data_arb__DOT__wr_en));
    bufp->chgCData(oldp+1522,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_len__DOT__wr_en_data_arb__DOT__wr_data),8);
    bufp->chgCData(oldp+1523,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_len__DOT__wr_en_data_arb__DOT__gen_w__DOT__unused_q),8);
    bufp->chgBit(oldp+1524,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_nsaid__DOT__clk_i));
    bufp->chgBit(oldp+1525,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_nsaid__DOT__rst_ni));
    bufp->chgBit(oldp+1526,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_nsaid__DOT__we));
    bufp->chgCData(oldp+1527,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_nsaid__DOT__wd),4);
    bufp->chgBit(oldp+1528,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_nsaid__DOT__de));
    bufp->chgCData(oldp+1529,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_nsaid__DOT__d),4);
    bufp->chgBit(oldp+1530,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_nsaid__DOT__qe));
    bufp->chgCData(oldp+1531,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_nsaid__DOT__q),4);
    bufp->chgCData(oldp+1532,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_nsaid__DOT__qs),4);
    bufp->chgBit(oldp+1533,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_nsaid__DOT__wr_en));
    bufp->chgCData(oldp+1534,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_nsaid__DOT__wr_data),4);
    bufp->chgBit(oldp+1535,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_nsaid__DOT__wr_en_data_arb__DOT__we));
    bufp->chgCData(oldp+1536,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_nsaid__DOT__wr_en_data_arb__DOT__wd),4);
    bufp->chgBit(oldp+1537,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_nsaid__DOT__wr_en_data_arb__DOT__de));
    bufp->chgCData(oldp+1538,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_nsaid__DOT__wr_en_data_arb__DOT__d),4);
    bufp->chgCData(oldp+1539,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_nsaid__DOT__wr_en_data_arb__DOT__q),4);
    bufp->chgBit(oldp+1540,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_nsaid__DOT__wr_en_data_arb__DOT__wr_en));
    bufp->chgCData(oldp+1541,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_nsaid__DOT__wr_en_data_arb__DOT__wr_data),4);
    bufp->chgCData(oldp+1542,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_nsaid__DOT__wr_en_data_arb__DOT__gen_w__DOT__unused_q),4);
    bufp->chgBit(oldp+1543,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_size__DOT__clk_i));
    bufp->chgBit(oldp+1544,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_size__DOT__rst_ni));
    bufp->chgBit(oldp+1545,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_size__DOT__we));
    bufp->chgCData(oldp+1546,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_size__DOT__wd),3);
    bufp->chgBit(oldp+1547,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_size__DOT__de));
    bufp->chgCData(oldp+1548,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_size__DOT__d),3);
    bufp->chgBit(oldp+1549,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_size__DOT__qe));
    bufp->chgCData(oldp+1550,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_size__DOT__q),3);
    bufp->chgCData(oldp+1551,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_size__DOT__qs),3);
    bufp->chgBit(oldp+1552,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_size__DOT__wr_en));
    bufp->chgCData(oldp+1553,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_size__DOT__wr_data),3);
    bufp->chgBit(oldp+1554,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_size__DOT__wr_en_data_arb__DOT__we));
    bufp->chgCData(oldp+1555,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_size__DOT__wr_en_data_arb__DOT__wd),3);
    bufp->chgBit(oldp+1556,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_size__DOT__wr_en_data_arb__DOT__de));
    bufp->chgCData(oldp+1557,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_size__DOT__wr_en_data_arb__DOT__d),3);
    bufp->chgCData(oldp+1558,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_size__DOT__wr_en_data_arb__DOT__q),3);
    bufp->chgBit(oldp+1559,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_size__DOT__wr_en_data_arb__DOT__wr_en));
    bufp->chgCData(oldp+1560,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_size__DOT__wr_en_data_arb__DOT__wr_data),3);
    bufp->chgCData(oldp+1561,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_size__DOT__wr_en_data_arb__DOT__gen_w__DOT__unused_q),3);
    bufp->chgBit(oldp+1562,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst__DOT__clk_i));
    bufp->chgBit(oldp+1563,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst__DOT__rst_ni));
    bufp->chgBit(oldp+1564,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst__DOT__we));
    bufp->chgBit(oldp+1565,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst__DOT__wd));
    bufp->chgBit(oldp+1566,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst__DOT__de));
    bufp->chgBit(oldp+1567,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst__DOT__d));
    bufp->chgBit(oldp+1568,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst__DOT__qe));
    bufp->chgBit(oldp+1569,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst__DOT__q));
    bufp->chgBit(oldp+1570,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst__DOT__qs));
    bufp->chgBit(oldp+1571,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst__DOT__wr_en));
    bufp->chgBit(oldp+1572,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst__DOT__wr_data));
    bufp->chgBit(oldp+1573,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst__DOT__wr_en_data_arb__DOT__we));
    bufp->chgBit(oldp+1574,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst__DOT__wr_en_data_arb__DOT__wd));
    bufp->chgBit(oldp+1575,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst__DOT__wr_en_data_arb__DOT__de));
    bufp->chgBit(oldp+1576,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst__DOT__wr_en_data_arb__DOT__d));
    bufp->chgBit(oldp+1577,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst__DOT__wr_en_data_arb__DOT__q));
    bufp->chgBit(oldp+1578,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst__DOT__wr_en_data_arb__DOT__wr_en));
    bufp->chgBit(oldp+1579,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst__DOT__wr_en_data_arb__DOT__wr_data));
    bufp->chgBit(oldp+1580,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst__DOT__wr_en_data_arb__DOT__gen_w__DOT__unused_q));
    bufp->chgBit(oldp+1581,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst_len__DOT__clk_i));
    bufp->chgBit(oldp+1582,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst_len__DOT__rst_ni));
    bufp->chgBit(oldp+1583,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst_len__DOT__we));
    bufp->chgCData(oldp+1584,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst_len__DOT__wd),8);
    bufp->chgBit(oldp+1585,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst_len__DOT__de));
    bufp->chgCData(oldp+1586,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst_len__DOT__d),8);
    bufp->chgBit(oldp+1587,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst_len__DOT__qe));
    bufp->chgCData(oldp+1588,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst_len__DOT__q),8);
    bufp->chgCData(oldp+1589,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst_len__DOT__qs),8);
    bufp->chgBit(oldp+1590,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst_len__DOT__wr_en));
    bufp->chgCData(oldp+1591,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst_len__DOT__wr_data),8);
    bufp->chgBit(oldp+1592,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst_len__DOT__wr_en_data_arb__DOT__we));
    bufp->chgCData(oldp+1593,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst_len__DOT__wr_en_data_arb__DOT__wd),8);
    bufp->chgBit(oldp+1594,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst_len__DOT__wr_en_data_arb__DOT__de));
    bufp->chgCData(oldp+1595,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst_len__DOT__wr_en_data_arb__DOT__d),8);
    bufp->chgCData(oldp+1596,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst_len__DOT__wr_en_data_arb__DOT__q),8);
    bufp->chgBit(oldp+1597,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst_len__DOT__wr_en_data_arb__DOT__wr_en));
    bufp->chgCData(oldp+1598,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst_len__DOT__wr_en_data_arb__DOT__wr_data),8);
    bufp->chgCData(oldp+1599,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst_len__DOT__wr_en_data_arb__DOT__gen_w__DOT__unused_q),8);
    bufp->chgBit(oldp+1600,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_enable__DOT__clk_i));
    bufp->chgBit(oldp+1601,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_enable__DOT__rst_ni));
    bufp->chgBit(oldp+1602,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_enable__DOT__we));
    bufp->chgBit(oldp+1603,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_enable__DOT__wd));
    bufp->chgBit(oldp+1604,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_enable__DOT__de));
    bufp->chgBit(oldp+1605,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_enable__DOT__d));
    bufp->chgBit(oldp+1606,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_enable__DOT__qe));
    bufp->chgBit(oldp+1607,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_enable__DOT__q));
    bufp->chgBit(oldp+1608,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_enable__DOT__qs));
    bufp->chgBit(oldp+1609,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_enable__DOT__wr_en));
    bufp->chgBit(oldp+1610,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_enable__DOT__wr_data));
    bufp->chgBit(oldp+1611,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_enable__DOT__wr_en_data_arb__DOT__we));
    bufp->chgBit(oldp+1612,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_enable__DOT__wr_en_data_arb__DOT__wd));
    bufp->chgBit(oldp+1613,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_enable__DOT__wr_en_data_arb__DOT__de));
    bufp->chgBit(oldp+1614,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_enable__DOT__wr_en_data_arb__DOT__d));
    bufp->chgBit(oldp+1615,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_enable__DOT__wr_en_data_arb__DOT__q));
    bufp->chgBit(oldp+1616,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_enable__DOT__wr_en_data_arb__DOT__wr_en));
    bufp->chgBit(oldp+1617,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_enable__DOT__wr_en_data_arb__DOT__wr_data));
    bufp->chgBit(oldp+1618,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_enable__DOT__wr_en_data_arb__DOT__gen_w__DOT__unused_q));
    bufp->chgBit(oldp+1619,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_ready__DOT__clk_i));
    bufp->chgBit(oldp+1620,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_ready__DOT__rst_ni));
    bufp->chgBit(oldp+1621,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_ready__DOT__we));
    bufp->chgBit(oldp+1622,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_ready__DOT__wd));
    bufp->chgBit(oldp+1623,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_ready__DOT__de));
    bufp->chgBit(oldp+1624,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_ready__DOT__d));
    bufp->chgBit(oldp+1625,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_ready__DOT__qe));
    bufp->chgBit(oldp+1626,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_ready__DOT__q));
    bufp->chgBit(oldp+1627,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_ready__DOT__qs));
    bufp->chgBit(oldp+1628,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_ready__DOT__wr_en));
    bufp->chgBit(oldp+1629,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_ready__DOT__wr_data));
    bufp->chgBit(oldp+1630,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_ready__DOT__wr_en_data_arb__DOT__we));
    bufp->chgBit(oldp+1631,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_ready__DOT__wr_en_data_arb__DOT__wd));
    bufp->chgBit(oldp+1632,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_ready__DOT__wr_en_data_arb__DOT__de));
    bufp->chgBit(oldp+1633,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_ready__DOT__wr_en_data_arb__DOT__d));
    bufp->chgBit(oldp+1634,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_ready__DOT__wr_en_data_arb__DOT__q));
    bufp->chgBit(oldp+1635,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_ready__DOT__wr_en_data_arb__DOT__wr_en));
    bufp->chgBit(oldp+1636,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_ready__DOT__wr_en_data_arb__DOT__wr_data));
    bufp->chgBit(oldp+1637,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_ready__DOT__wr_en_data_arb__DOT__gen_ro__DOT__unused_we));
    bufp->chgBit(oldp+1638,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_ready__DOT__wr_en_data_arb__DOT__gen_ro__DOT__unused_wd));
    bufp->chgBit(oldp+1639,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_ready__DOT__wr_en_data_arb__DOT__gen_ro__DOT__unused_q));
    bufp->chgBit(oldp+1640,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst__DOT__clk_i));
    bufp->chgBit(oldp+1641,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst__DOT__rst_ni));
    bufp->chgBit(oldp+1642,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst__DOT__we));
    bufp->chgBit(oldp+1643,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst__DOT__wd));
    bufp->chgBit(oldp+1644,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst__DOT__de));
    bufp->chgBit(oldp+1645,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst__DOT__d));
    bufp->chgBit(oldp+1646,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst__DOT__qe));
    bufp->chgBit(oldp+1647,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst__DOT__q));
    bufp->chgBit(oldp+1648,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst__DOT__qs));
    bufp->chgBit(oldp+1649,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst__DOT__wr_en));
    bufp->chgBit(oldp+1650,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst__DOT__wr_data));
    bufp->chgBit(oldp+1651,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst__DOT__wr_en_data_arb__DOT__we));
    bufp->chgBit(oldp+1652,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst__DOT__wr_en_data_arb__DOT__wd));
    bufp->chgBit(oldp+1653,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst__DOT__wr_en_data_arb__DOT__de));
    bufp->chgBit(oldp+1654,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst__DOT__wr_en_data_arb__DOT__d));
    bufp->chgBit(oldp+1655,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst__DOT__wr_en_data_arb__DOT__q));
    bufp->chgBit(oldp+1656,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst__DOT__wr_en_data_arb__DOT__wr_en));
    bufp->chgBit(oldp+1657,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst__DOT__wr_en_data_arb__DOT__wr_data));
    bufp->chgBit(oldp+1658,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst__DOT__wr_en_data_arb__DOT__gen_w__DOT__unused_q));
    bufp->chgBit(oldp+1659,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst_len__DOT__clk_i));
    bufp->chgBit(oldp+1660,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst_len__DOT__rst_ni));
    bufp->chgBit(oldp+1661,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst_len__DOT__we));
    bufp->chgCData(oldp+1662,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst_len__DOT__wd),8);
    bufp->chgBit(oldp+1663,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst_len__DOT__de));
    bufp->chgCData(oldp+1664,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst_len__DOT__d),8);
    bufp->chgBit(oldp+1665,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst_len__DOT__qe));
    bufp->chgCData(oldp+1666,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst_len__DOT__q),8);
    bufp->chgCData(oldp+1667,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst_len__DOT__qs),8);
    bufp->chgBit(oldp+1668,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst_len__DOT__wr_en));
    bufp->chgCData(oldp+1669,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst_len__DOT__wr_data),8);
    bufp->chgBit(oldp+1670,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst_len__DOT__wr_en_data_arb__DOT__we));
    bufp->chgCData(oldp+1671,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst_len__DOT__wr_en_data_arb__DOT__wd),8);
    bufp->chgBit(oldp+1672,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst_len__DOT__wr_en_data_arb__DOT__de));
    bufp->chgCData(oldp+1673,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst_len__DOT__wr_en_data_arb__DOT__d),8);
    bufp->chgCData(oldp+1674,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst_len__DOT__wr_en_data_arb__DOT__q),8);
    bufp->chgBit(oldp+1675,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst_len__DOT__wr_en_data_arb__DOT__wr_en));
    bufp->chgCData(oldp+1676,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst_len__DOT__wr_en_data_arb__DOT__wr_data),8);
    bufp->chgCData(oldp+1677,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst_len__DOT__wr_en_data_arb__DOT__gen_w__DOT__unused_q),8);
    bufp->chgBit(oldp+1678,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_enable__DOT__clk_i));
    bufp->chgBit(oldp+1679,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_enable__DOT__rst_ni));
    bufp->chgBit(oldp+1680,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_enable__DOT__we));
    bufp->chgBit(oldp+1681,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_enable__DOT__wd));
    bufp->chgBit(oldp+1682,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_enable__DOT__de));
    bufp->chgBit(oldp+1683,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_enable__DOT__d));
    bufp->chgBit(oldp+1684,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_enable__DOT__qe));
    bufp->chgBit(oldp+1685,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_enable__DOT__q));
    bufp->chgBit(oldp+1686,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_enable__DOT__qs));
    bufp->chgBit(oldp+1687,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_enable__DOT__wr_en));
    bufp->chgBit(oldp+1688,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_enable__DOT__wr_data));
    bufp->chgBit(oldp+1689,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_enable__DOT__wr_en_data_arb__DOT__we));
    bufp->chgBit(oldp+1690,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_enable__DOT__wr_en_data_arb__DOT__wd));
    bufp->chgBit(oldp+1691,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_enable__DOT__wr_en_data_arb__DOT__de));
    bufp->chgBit(oldp+1692,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_enable__DOT__wr_en_data_arb__DOT__d));
    bufp->chgBit(oldp+1693,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_enable__DOT__wr_en_data_arb__DOT__q));
    bufp->chgBit(oldp+1694,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_enable__DOT__wr_en_data_arb__DOT__wr_en));
    bufp->chgBit(oldp+1695,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_enable__DOT__wr_en_data_arb__DOT__wr_data));
    bufp->chgBit(oldp+1696,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_enable__DOT__wr_en_data_arb__DOT__gen_w__DOT__unused_q));
    bufp->chgBit(oldp+1697,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_ready__DOT__clk_i));
    bufp->chgBit(oldp+1698,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_ready__DOT__rst_ni));
    bufp->chgBit(oldp+1699,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_ready__DOT__we));
    bufp->chgBit(oldp+1700,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_ready__DOT__wd));
    bufp->chgBit(oldp+1701,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_ready__DOT__de));
    bufp->chgBit(oldp+1702,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_ready__DOT__d));
    bufp->chgBit(oldp+1703,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_ready__DOT__qe));
    bufp->chgBit(oldp+1704,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_ready__DOT__q));
    bufp->chgBit(oldp+1705,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_ready__DOT__qs));
    bufp->chgBit(oldp+1706,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_ready__DOT__wr_en));
    bufp->chgBit(oldp+1707,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_ready__DOT__wr_data));
    bufp->chgBit(oldp+1708,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_ready__DOT__wr_en_data_arb__DOT__we));
    bufp->chgBit(oldp+1709,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_ready__DOT__wr_en_data_arb__DOT__wd));
    bufp->chgBit(oldp+1710,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_ready__DOT__wr_en_data_arb__DOT__de));
    bufp->chgBit(oldp+1711,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_ready__DOT__wr_en_data_arb__DOT__d));
    bufp->chgBit(oldp+1712,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_ready__DOT__wr_en_data_arb__DOT__q));
    bufp->chgBit(oldp+1713,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_ready__DOT__wr_en_data_arb__DOT__wr_en));
    bufp->chgBit(oldp+1714,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_ready__DOT__wr_en_data_arb__DOT__wr_data));
    bufp->chgBit(oldp+1715,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_ready__DOT__wr_en_data_arb__DOT__gen_ro__DOT__unused_we));
    bufp->chgBit(oldp+1716,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_ready__DOT__wr_en_data_arb__DOT__gen_ro__DOT__unused_wd));
    bufp->chgBit(oldp+1717,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_ready__DOT__wr_en_data_arb__DOT__gen_ro__DOT__unused_q));
    bufp->chgBit(oldp+1718,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__clk_i));
    bufp->chgBit(oldp+1719,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__rst_ni));
    bufp->chgBit(oldp+1720,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__w_valid_o));
    bufp->chgQData(oldp+1721,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__w_data_o[2U])) 
                                << 0x33U) | (((QData)((IData)(
                                                              vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__w_data_o[1U])) 
                                              << 0x13U) 
                                             | ((QData)((IData)(
                                                                vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__w_data_o[0U])) 
                                                >> 0xdU)))),64);
    bufp->chgCData(oldp+1723,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__w_data_o[0U] 
                                        >> 5U))),8);
    bufp->chgBit(oldp+1724,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__w_data_o[0U] 
                                   >> 4U))));
    bufp->chgCData(oldp+1725,((0xfU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__w_data_o[0U])),4);
    bufp->chgBit(oldp+1726,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__w_ready_i));
    bufp->chgCData(oldp+1727,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__trans_data_i[2U] 
                                        >> 0xcU))),8);
    bufp->chgCData(oldp+1728,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__trans_data_i[2U] 
                                        >> 4U))),8);
    bufp->chgCData(oldp+1729,((0xfU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__trans_data_i[2U])),4);
    bufp->chgQData(oldp+1730,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__trans_data_i[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__trans_data_i[0U])))),64);
    bufp->chgBit(oldp+1732,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__enable_i));
    bufp->chgBit(oldp+1733,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__ready_o));
    bufp->chgCData(oldp+1734,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__state_q),2);
    bufp->chgCData(oldp+1735,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__state_d),2);
    bufp->chgCData(oldp+1736,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__trans_data_q[2U] 
                                        >> 0xcU))),8);
    bufp->chgCData(oldp+1737,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__trans_data_q[2U] 
                                        >> 4U))),8);
    bufp->chgCData(oldp+1738,((0xfU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__trans_data_q[2U])),4);
    bufp->chgQData(oldp+1739,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__trans_data_q[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__trans_data_q[0U])))),64);
    bufp->chgCData(oldp+1741,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__trans_data_d[2U] 
                                        >> 0xcU))),8);
    bufp->chgCData(oldp+1742,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__trans_data_d[2U] 
                                        >> 4U))),8);
    bufp->chgCData(oldp+1743,((0xfU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__trans_data_d[2U])),4);
    bufp->chgQData(oldp+1744,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__trans_data_d[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__trans_data_d[0U])))),64);
    bufp->chgCData(oldp+1746,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__issued_trans_d),8);
    bufp->chgCData(oldp+1747,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__issued_trans_q),8);
    bufp->chgCData(oldp+1748,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__issued_data_d),8);
    bufp->chgCData(oldp+1749,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__issued_data_q),8);
    bufp->chgCData(oldp+1750,(vlSymsp->TOP__generic_reader_writer_reg_pkg.GENERIC_READER_WRITER_PERMIT[0]),4);
    bufp->chgCData(oldp+1751,(vlSymsp->TOP__generic_reader_writer_reg_pkg.GENERIC_READER_WRITER_PERMIT[1]),4);
    bufp->chgCData(oldp+1752,(vlSymsp->TOP__generic_reader_writer_reg_pkg.GENERIC_READER_WRITER_PERMIT[2]),4);
    bufp->chgCData(oldp+1753,(vlSymsp->TOP__generic_reader_writer_reg_pkg.GENERIC_READER_WRITER_PERMIT[3]),4);
    bufp->chgCData(oldp+1754,(vlSymsp->TOP__generic_reader_writer_reg_pkg.GENERIC_READER_WRITER_PERMIT[4]),4);
    bufp->chgCData(oldp+1755,(vlSymsp->TOP__generic_reader_writer_reg_pkg.GENERIC_READER_WRITER_PERMIT[5]),4);
    bufp->chgCData(oldp+1756,(vlSymsp->TOP__generic_reader_writer_reg_pkg.GENERIC_READER_WRITER_PERMIT[6]),4);
    bufp->chgBit(oldp+1757,(vlSymsp->TOP__dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__reg_bus.clk_i));
    bufp->chgCData(oldp+1758,(vlSymsp->TOP__dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__reg_bus.addr),6);
    bufp->chgBit(oldp+1759,(vlSymsp->TOP__dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__reg_bus.write));
    bufp->chgIData(oldp+1760,(vlSymsp->TOP__dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__reg_bus.rdata),32);
    bufp->chgIData(oldp+1761,(vlSymsp->TOP__dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__reg_bus.wdata),32);
    bufp->chgCData(oldp+1762,(vlSymsp->TOP__dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__reg_bus.wstrb),4);
    bufp->chgBit(oldp+1763,(vlSymsp->TOP__dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__reg_bus.error));
    bufp->chgBit(oldp+1764,(vlSymsp->TOP__dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__reg_bus.valid));
    bufp->chgBit(oldp+1765,(vlSymsp->TOP__dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__reg_bus.ready));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
