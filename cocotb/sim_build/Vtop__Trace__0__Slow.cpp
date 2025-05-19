// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__axi_pkg__0(Vtop___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__ariane_axi__0(Vtop___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__generic_reader_writer_reg_pkg__0(Vtop___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__reg_bus__0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("axi_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__axi_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("ariane_axi", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__ariane_axi__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("generic_reader_writer_reg_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_init_sub__TOP__generic_reader_writer_reg_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"config_aw_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+4,0,"config_aw_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+6,0,"config_aw_len_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"config_aw_size_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+8,0,"config_aw_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+9,0,"config_aw_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"config_w_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+11,0,"config_w_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+13,0,"config_w_strb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+14,0,"config_w_last_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"config_w_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"config_ar_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+17,0,"config_ar_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+19,0,"config_ar_len_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+20,0,"config_ar_size_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+21,0,"config_ar_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+22,0,"config_ar_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"config_r_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+24,0,"config_r_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+26,0,"config_r_resp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+27,0,"config_r_last_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"config_r_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+29,0,"config_r_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"config_b_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"config_b_resp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+32,0,"config_b_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+33,0,"config_b_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"mst_aw_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+35,0,"mst_aw_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+37,0,"mst_aw_len_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+38,0,"mst_aw_size_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+39,0,"mst_aw_wid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+40,0,"mst_aw_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+41,0,"mst_aw_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"mst_w_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+43,0,"mst_w_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+45,0,"mst_w_strb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+46,0,"mst_w_last_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"mst_w_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"mst_ar_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+49,0,"mst_ar_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+51,0,"mst_ar_len_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+52,0,"mst_ar_size_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+53,0,"mst_ar_wid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+54,0,"mst_ar_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+55,0,"mst_ar_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"mst_r_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+57,0,"mst_r_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+59,0,"mst_r_resp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+60,0,"mst_r_last_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"mst_r_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+62,0,"mst_r_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"mst_b_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"mst_b_resp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+65,0,"mst_b_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+66,0,"mst_b_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+67,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"config_aw_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+70,0,"config_aw_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+72,0,"config_aw_len_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+73,0,"config_aw_size_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+74,0,"config_aw_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+75,0,"config_aw_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"config_w_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+77,0,"config_w_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+79,0,"config_w_strb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+80,0,"config_w_last_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"config_w_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"config_ar_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+83,0,"config_ar_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+85,0,"config_ar_len_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+86,0,"config_ar_size_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+87,0,"config_ar_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+88,0,"config_ar_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"config_r_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+90,0,"config_r_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+92,0,"config_r_resp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+93,0,"config_r_last_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+94,0,"config_r_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+95,0,"config_r_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"config_b_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+97,0,"config_b_resp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+98,0,"config_b_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+99,0,"config_b_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"mst_aw_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+101,0,"mst_aw_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+103,0,"mst_aw_len_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+104,0,"mst_aw_size_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+105,0,"mst_aw_wid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+106,0,"mst_aw_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+107,0,"mst_aw_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"mst_w_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+109,0,"mst_w_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+111,0,"mst_w_strb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+112,0,"mst_w_last_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"mst_w_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"mst_ar_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+115,0,"mst_ar_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+117,0,"mst_ar_len_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+118,0,"mst_ar_size_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+119,0,"mst_ar_wid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+120,0,"mst_ar_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+121,0,"mst_ar_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"mst_r_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+123,0,"mst_r_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+125,0,"mst_r_resp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+126,0,"mst_r_last_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+127,0,"mst_r_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+128,0,"mst_r_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"mst_b_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+130,0,"mst_b_resp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+131,0,"mst_b_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+132,0,"mst_b_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("config_rsp", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+133,0,"aw_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"ar_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"w_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"b_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("b", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+137,0,"id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+138,0,"resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+139,0,"user",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->declBit(c+140,0,"r_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("r", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+141,0,"id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+142,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+144,0,"resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+145,0,"last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+146,0,"user",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("config_req", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("aw", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+147,0,"id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+148,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+150,0,"len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+151,0,"size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+152,0,"burst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+153,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+154,0,"cache",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+155,0,"prot",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+156,0,"qos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+157,0,"region",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+158,0,"atop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+159,0,"user",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->declBit(c+160,0,"aw_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("w", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+161,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+163,0,"strb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+164,0,"last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+165,0,"user",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->declBit(c+166,0,"w_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"b_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ar", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+168,0,"id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+169,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+171,0,"len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+172,0,"size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+173,0,"burst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+174,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+175,0,"cache",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+176,0,"prot",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+177,0,"qos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+178,0,"region",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+179,0,"user",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->declBit(c+180,0,"ar_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"r_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mst_rsp", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+182,0,"aw_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"ar_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"w_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"b_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("b", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+186,0,"id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+187,0,"resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+188,0,"user",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->declBit(c+189,0,"r_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("r", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+190,0,"id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+191,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+193,0,"resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+194,0,"last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+195,0,"user",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mst_req", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("aw", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+196,0,"id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+197,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+199,0,"len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+200,0,"size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+201,0,"burst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+202,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+203,0,"cache",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+204,0,"prot",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+205,0,"qos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+206,0,"region",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+207,0,"atop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+208,0,"user",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+209,0,"nsaid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->declBit(c+210,0,"aw_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("w", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+211,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+213,0,"strb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+214,0,"last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+215,0,"user",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->declBit(c+216,0,"w_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"b_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ar", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+218,0,"id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+219,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+221,0,"len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+222,0,"size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+223,0,"burst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+224,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+225,0,"cache",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+226,0,"prot",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+227,0,"qos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+228,0,"region",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+229,0,"user",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+230,0,"nsaid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->declBit(c+231,0,"ar_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+232,0,"r_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("i_generic_reader_writer_top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1767,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1767,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1768,0,"USER_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1768,0,"ID_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1768,0,"ID_SLV_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+233,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("control_req_i", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("aw", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+235,0,"id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+236,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+238,0,"len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+239,0,"size",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+240,0,"burst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+241,0,"lock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+242,0,"cache",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+243,0,"prot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+244,0,"qos",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+245,0,"region",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+246,0,"atop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+247,0,"user",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->declBit(c+248,0,"aw_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("w", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+249,0,"data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+251,0,"strb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+252,0,"last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+253,0,"user",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->declBit(c+254,0,"w_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"b_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ar", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+256,0,"id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+257,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+259,0,"len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+260,0,"size",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+261,0,"burst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+262,0,"lock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+263,0,"cache",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+264,0,"prot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+265,0,"qos",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+266,0,"region",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+267,0,"user",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->declBit(c+268,0,"ar_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"r_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("control_rsp_o", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+270,0,"aw_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"ar_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+272,0,"w_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+273,0,"b_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("b", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+274,0,"id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+275,0,"resp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+276,0,"user",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->declBit(c+277,0,"r_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("r", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+278,0,"id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+279,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+281,0,"resp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+282,0,"last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+283,0,"user",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mst_req_o", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("aw", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+284,0,"id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+285,0,"addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+287,0,"len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+288,0,"size",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+289,0,"burst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+290,0,"lock",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+291,0,"cache",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+292,0,"prot",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+293,0,"qos",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+294,0,"region",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+295,0,"atop",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+296,0,"user",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+297,0,"nsaid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->declBit(c+298,0,"aw_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("w", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+299,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+301,0,"strb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+302,0,"last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+303,0,"user",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->declBit(c+304,0,"w_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+305,0,"b_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ar", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+306,0,"id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+307,0,"addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+309,0,"len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+310,0,"size",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+311,0,"burst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+312,0,"lock",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+313,0,"cache",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+314,0,"prot",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+315,0,"qos",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+316,0,"region",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+317,0,"user",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+318,0,"nsaid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->declBit(c+319,0,"ar_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+320,0,"r_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mst_rsp_i", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+321,0,"aw_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+322,0,"ar_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+323,0,"w_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"b_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("b", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+325,0,"id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+326,0,"resp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+327,0,"user",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->declBit(c+328,0,"r_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("r", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+329,0,"id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+330,0,"data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+332,0,"resp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+333,0,"last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+334,0,"user",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_req", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+335,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+336,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+337,0,"wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+338,0,"wstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+339,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("reg_rsp", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+340,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+341,0,"error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+342,0,"ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("reg2hw", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("control", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("r_ready", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+343,0,"q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("w_ready", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+344,0,"q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("r_enable", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+345,0,"q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("w_enable", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+346,0,"q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("r_burst", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+347,0,"q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("w_burst", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+348,0,"q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("r_burst_len", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+349,0,"q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("w_burst_len", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+350,0,"q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ar_addrl", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+351,0,"q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ar_addrh", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+352,0,"q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ar_cfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("len", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+353,0,"q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("size", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+354,0,"q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("nsaid", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+355,0,"q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("aw_addrl", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+356,0,"q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("aw_addrh", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+357,0,"q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("aw_cfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("len", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+358,0,"q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("size", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+359,0,"q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("nsaid", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+360,0,"q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("hw2reg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("control", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("r_ready", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+361,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+362,0,"de",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("w_ready", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+363,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+364,0,"de",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("r_enable", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+365,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+366,0,"de",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("w_enable", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+367,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+368,0,"de",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("r_burst", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+369,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"de",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("w_burst", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+371,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+372,0,"de",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("r_burst_len", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+373,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+374,0,"de",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("w_burst_len", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+375,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+376,0,"de",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+377,0,"enable_r_pulse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+378,0,"enable_r_prev_state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+379,0,"enable_w_pulse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+380,0,"enable_w_prev_state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+381,0,"w_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+382,0,"aw_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+383,0,"b_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("read_channel", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+384,0,"burst_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+385,0,"len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+386,0,"nsaid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+387,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("write_channel", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+389,0,"burst_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+390,0,"len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+391,0,"nsaid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+392,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("i_ar_handler", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1769,0,"RW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+394,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+395,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+396,0,"ax_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ax_data_o", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+397,0,"id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+398,0,"addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+400,0,"len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+401,0,"size",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+402,0,"burst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+403,0,"lock",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+404,0,"cache",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+405,0,"prot",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+406,0,"qos",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+407,0,"region",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+408,0,"user",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+409,0,"nsaid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->declBit(c+410,0,"ax_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("trans_data_i", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+411,0,"burst_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+412,0,"len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+413,0,"nsaid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+414,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->declBit(c+416,0,"enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+417,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+418,0,"state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+419,0,"state_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("trans_data_q", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+420,0,"burst_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+421,0,"len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+422,0,"nsaid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+423,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("trans_data_d", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+425,0,"burst_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+426,0,"len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+427,0,"nsaid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+428,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->declBus(c+430,0,"issued_trans_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+431,0,"issued_trans_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("i_aw_handler", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1769,0,"RW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+432,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+433,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+434,0,"ax_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ax_data_o", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+435,0,"id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+436,0,"addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+438,0,"len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+439,0,"size",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+440,0,"burst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+441,0,"lock",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+442,0,"cache",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+443,0,"prot",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+444,0,"qos",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+445,0,"region",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+446,0,"atop",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+447,0,"user",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+448,0,"nsaid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->declBit(c+449,0,"ax_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("trans_data_i", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+450,0,"burst_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+451,0,"len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+452,0,"nsaid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+453,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->declBit(c+455,0,"enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+456,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+457,0,"state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+458,0,"state_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("trans_data_q", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+459,0,"burst_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+460,0,"len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+461,0,"nsaid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+462,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("trans_data_d", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+464,0,"burst_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+465,0,"len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+466,0,"nsaid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+467,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->declBus(c+469,0,"issued_trans_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+470,0,"issued_trans_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("i_b_handler", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+471,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+472,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+473,0,"b_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("b_data_i", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+474,0,"id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+475,0,"resp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+476,0,"user",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->declBit(c+477,0,"b_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("trans_data_i", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+478,0,"burst_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+479,0,"len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+480,0,"nsaid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+481,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->declBit(c+483,0,"enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+484,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+485,0,"state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+486,0,"state_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("trans_data_q", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+487,0,"burst_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+488,0,"len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+489,0,"nsaid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+490,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("trans_data_d", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+492,0,"burst_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+493,0,"len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+494,0,"nsaid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+495,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->declBus(c+497,0,"issued_trans_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+498,0,"issued_trans_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("i_generic_reader_writer_prog_if", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1767,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1767,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1768,0,"ID_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1768,0,"USER_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+499,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+500,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("slv_req_i", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("aw", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+501,0,"id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+502,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+504,0,"len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+505,0,"size",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+506,0,"burst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+507,0,"lock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+508,0,"cache",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+509,0,"prot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+510,0,"qos",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+511,0,"region",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+512,0,"atop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+513,0,"user",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->declBit(c+514,0,"aw_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("w", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+515,0,"data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+517,0,"strb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+518,0,"last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+519,0,"user",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->declBit(c+520,0,"w_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+521,0,"b_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ar", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+522,0,"id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+523,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+525,0,"len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+526,0,"size",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+527,0,"burst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+528,0,"lock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+529,0,"cache",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+530,0,"prot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+531,0,"qos",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+532,0,"region",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+533,0,"user",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->declBit(c+534,0,"ar_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+535,0,"r_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("slv_rsp_o", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+536,0,"aw_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+537,0,"ar_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+538,0,"w_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+539,0,"b_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("b", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+540,0,"id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+541,0,"resp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+542,0,"user",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->declBit(c+543,0,"r_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("r", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+544,0,"id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+545,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+547,0,"resp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+548,0,"last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+549,0,"user",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("cfg_req_o", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+550,0,"addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+551,0,"write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+552,0,"wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+553,0,"wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+554,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("cfg_rsp_i", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+555,0,"rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+556,0,"error",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+557,0,"ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("reg_bus", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtop___024root__trace_init_sub__TOP__dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__reg_bus__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+558,0,"penable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+559,0,"pwrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+560,0,"paddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+561,0,"psel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+562,0,"pwdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+563,0,"prdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+564,0,"pready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+565,0,"pslverr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_apb_to_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+566,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+567,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+568,0,"penable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+569,0,"pwrite_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+570,0,"paddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+571,0,"psel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+572,0,"pwdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+573,0,"prdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+574,0,"pready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+575,0,"pslverr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("reg_o", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtop___024root__trace_init_sub__TOP__dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__reg_bus__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_axi2apb_64_32_iopmp", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1767,0,"AXI4_ADDRESS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1767,0,"AXI4_RDATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1767,0,"AXI4_WDATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1768,0,"AXI4_ID_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1768,0,"AXI4_USER_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1770,0,"AXI_NUMBYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1771,0,"BUFF_DEPTH_SLAVE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1770,0,"APB_NUM_SLAVES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1772,0,"APB_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+576,0,"ACLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+577,0,"ARESETn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"test_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+579,0,"AWID_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+580,0,"AWADDR_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+582,0,"AWLEN_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+583,0,"AWSIZE_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+584,0,"AWBURST_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+585,0,"AWLOCK_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+586,0,"AWCACHE_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+587,0,"AWPROT_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+588,0,"AWREGION_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+589,0,"AWUSER_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+590,0,"AWQOS_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+591,0,"AWVALID_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+592,0,"AWREADY_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("WDATA_i", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+593,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+594,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+595,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+596,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+597,0,"[4]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+598,0,"[5]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+599,0,"[6]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+600,0,"[7]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->declBus(c+601,0,"WSTRB_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+602,0,"WLAST_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+603,0,"WUSER_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+604,0,"WVALID_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+605,0,"WREADY_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+606,0,"BID_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+607,0,"BRESP_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+608,0,"BVALID_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+609,0,"BUSER_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+610,0,"BREADY_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+611,0,"ARID_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+612,0,"ARADDR_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+614,0,"ARLEN_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+615,0,"ARSIZE_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+616,0,"ARBURST_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+617,0,"ARLOCK_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+618,0,"ARCACHE_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+619,0,"ARPROT_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+620,0,"ARREGION_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+621,0,"ARUSER_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+622,0,"ARQOS_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+623,0,"ARVALID_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+624,0,"ARREADY_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+625,0,"RID_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+626,0,"RDATA_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+628,0,"RRESP_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+629,0,"RLAST_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+630,0,"RUSER_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+631,0,"RVALID_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+632,0,"RREADY_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+633,0,"PENABLE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+634,0,"PWRITE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+635,0,"PADDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+636,0,"PSEL",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+637,0,"PWDATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+638,0,"PRDATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+639,0,"PREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+640,0,"PSLVERR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+641,0,"AWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+642,0,"AWADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+644,0,"AWLEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+645,0,"AWSIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+646,0,"AWBURST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+647,0,"AWLOCK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+648,0,"AWCACHE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+649,0,"AWPROT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+650,0,"AWREGION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+651,0,"AWUSER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+652,0,"AWQOS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+653,0,"AWVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+654,0,"AWREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("WDATA", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+655,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+656,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->declBus(c+657,0,"WSTRB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+658,0,"WLAST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+659,0,"WUSER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+660,0,"WVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+661,0,"WREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+662,0,"BID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+663,0,"BRESP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+664,0,"BVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+665,0,"BUSER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+666,0,"BREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+667,0,"ARID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+668,0,"ARADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+670,0,"ARLEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+671,0,"ARSIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+672,0,"ARBURST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+673,0,"ARLOCK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+674,0,"ARCACHE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+675,0,"ARPROT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+676,0,"ARREGION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+677,0,"ARUSER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+678,0,"ARQOS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+679,0,"ARVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+680,0,"ARREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+681,0,"RID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("RDATA", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+682,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+683,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->declBus(c+684,0,"RRESP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+685,0,"RLAST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+686,0,"RUSER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+687,0,"RVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+688,0,"RREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+689,0,"CS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+690,0,"NS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+691,0,"W_word_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+692,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+693,0,"read_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+694,0,"write_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+695,0,"sample_AR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+696,0,"ARLEN_Q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+697,0,"decr_ARLEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+698,0,"sample_AW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+699,0,"AWLEN_Q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+700,0,"decr_AWLEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+701,0,"ARADDR_Q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+703,0,"incr_ARADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+704,0,"AWADDR_Q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+706,0,"incr_AWADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+707,0,"sample_RDATA_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+708,0,"sample_RDATA_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+709,0,"RDATA_Q_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+710,0,"RDATA_Q_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("slave_ar_buffer_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1773,0,"ID_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1774,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1773,0,"USER_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1775,0,"BUFFER_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+711,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+712,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+713,0,"test_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+714,0,"slave_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+715,0,"slave_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+717,0,"slave_prot_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+718,0,"slave_region_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+719,0,"slave_len_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+720,0,"slave_size_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+721,0,"slave_burst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+722,0,"slave_lock_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+723,0,"slave_cache_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+724,0,"slave_qos_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+725,0,"slave_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+726,0,"slave_user_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+727,0,"slave_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"master_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+729,0,"master_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+731,0,"master_prot_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+732,0,"master_region_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+733,0,"master_len_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+734,0,"master_size_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+735,0,"master_burst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+736,0,"master_lock_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+737,0,"master_cache_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+738,0,"master_qos_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+739,0,"master_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+740,0,"master_user_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+741,0,"master_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+742,0,"s_data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 100,0);
    tracep->declArray(c+746,0,"s_data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 100,0);
    tracep->pushPrefix("i_axi_single_slice", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1775,0,"BUFFER_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1776,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+750,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+752,0,"testmode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+753,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+754,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+755,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 100,0);
    tracep->declBit(c+759,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+760,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+761,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 100,0);
    tracep->declBit(c+765,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+766,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1777,0,"FALL_THROUGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1778,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1771,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1779,0,"THRESHOLD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+767,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+768,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+769,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+770,0,"testmode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+771,0,"full_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+772,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+773,0,"threshold_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+774,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 100,0);
    tracep->declBit(c+778,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+779,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 100,0);
    tracep->declBit(c+783,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("impl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1777,0,"FALL_THROUGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1778,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1771,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1779,0,"ALM_EMPTY_TH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1779,0,"ALM_FULL_TH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1779,0,"ADDR_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+784,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+786,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+787,0,"testmode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+788,0,"full_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+789,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+790,0,"alm_full_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+791,0,"alm_empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+792,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 100,0);
    tracep->declBit(c+796,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+797,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 100,0);
    tracep->declBit(c+801,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+802,0,"usage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("i_fifo_v3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1777,0,"FALL_THROUGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1778,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1771,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1779,0,"ADDR_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+803,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+804,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+805,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+806,0,"testmode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+807,0,"full_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+808,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+809,0,"usage_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declArray(c+810,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 100,0);
    tracep->declBit(c+814,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+815,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 100,0);
    tracep->declBit(c+819,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1771,0,"FifoDepth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+820,0,"gate_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+821,0,"read_pointer_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+822,0,"read_pointer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+823,0,"write_pointer_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+824,0,"write_pointer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+825,0,"status_cnt_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+826,0,"status_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("mem_n", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declArray(c+827,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 100,0);
    tracep->declArray(c+831,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 100,0);
    tracep->popPrefix();
    tracep->pushPrefix("mem_q", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declArray(c+835,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 100,0);
    tracep->declArray(c+839,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 100,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("slave_aw_buffer_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1773,0,"ID_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1774,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1773,0,"USER_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1775,0,"BUFFER_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+843,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+844,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+845,0,"test_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+846,0,"slave_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+847,0,"slave_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+849,0,"slave_prot_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+850,0,"slave_region_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+851,0,"slave_len_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+852,0,"slave_size_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+853,0,"slave_burst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+854,0,"slave_lock_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+855,0,"slave_cache_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+856,0,"slave_qos_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+857,0,"slave_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+858,0,"slave_user_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+859,0,"slave_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+860,0,"master_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+861,0,"master_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+863,0,"master_prot_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+864,0,"master_region_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+865,0,"master_len_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+866,0,"master_size_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+867,0,"master_burst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+868,0,"master_lock_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+869,0,"master_cache_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+870,0,"master_qos_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+871,0,"master_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+872,0,"master_user_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+873,0,"master_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+874,0,"s_data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 100,0);
    tracep->declArray(c+878,0,"s_data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 100,0);
    tracep->pushPrefix("i_axi_single_slice", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1775,0,"BUFFER_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1776,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+882,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+883,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+884,0,"testmode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+885,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+886,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+887,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 100,0);
    tracep->declBit(c+891,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+892,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+893,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 100,0);
    tracep->declBit(c+897,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+898,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1777,0,"FALL_THROUGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1778,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1771,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1779,0,"THRESHOLD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+899,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+900,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+901,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+902,0,"testmode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+903,0,"full_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+904,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+905,0,"threshold_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+906,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 100,0);
    tracep->declBit(c+910,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+911,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 100,0);
    tracep->declBit(c+915,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("impl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1777,0,"FALL_THROUGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1778,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1771,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1779,0,"ALM_EMPTY_TH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1779,0,"ALM_FULL_TH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1779,0,"ADDR_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+916,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+917,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+918,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+919,0,"testmode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+920,0,"full_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+921,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+922,0,"alm_full_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+923,0,"alm_empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+924,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 100,0);
    tracep->declBit(c+928,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+929,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 100,0);
    tracep->declBit(c+933,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+934,0,"usage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("i_fifo_v3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1777,0,"FALL_THROUGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1778,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1771,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1779,0,"ADDR_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+935,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+937,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+938,0,"testmode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+939,0,"full_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+940,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+941,0,"usage_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declArray(c+942,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 100,0);
    tracep->declBit(c+946,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+947,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 100,0);
    tracep->declBit(c+951,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1771,0,"FifoDepth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+952,0,"gate_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+953,0,"read_pointer_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+954,0,"read_pointer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+955,0,"write_pointer_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+956,0,"write_pointer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+957,0,"status_cnt_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+958,0,"status_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("mem_n", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declArray(c+959,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 100,0);
    tracep->declArray(c+963,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 100,0);
    tracep->popPrefix();
    tracep->pushPrefix("mem_q", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declArray(c+967,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 100,0);
    tracep->declArray(c+971,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 100,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("slave_b_buffer_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1773,0,"ID_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1773,0,"USER_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1775,0,"BUFFER_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+975,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+976,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+977,0,"test_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+978,0,"slave_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+979,0,"slave_resp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+980,0,"slave_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+981,0,"slave_user_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+982,0,"slave_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+983,0,"master_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+984,0,"master_resp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+985,0,"master_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+986,0,"master_user_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+987,0,"master_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+988,0,"s_data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+989,0,"s_data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->pushPrefix("i_axi_single_slice", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1775,0,"BUFFER_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1780,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+990,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+991,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+992,0,"testmode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+993,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+994,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+995,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+996,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+997,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+998,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+999,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1000,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1777,0,"FALL_THROUGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1781,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1771,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1779,0,"THRESHOLD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1001,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1002,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1003,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1004,0,"testmode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1005,0,"full_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1006,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1007,0,"threshold_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1008,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+1009,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1010,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+1011,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("impl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1777,0,"FALL_THROUGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1781,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1771,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1779,0,"ALM_EMPTY_TH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1779,0,"ALM_FULL_TH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1779,0,"ADDR_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1012,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1013,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1014,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1015,0,"testmode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1016,0,"full_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1017,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1018,0,"alm_full_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1019,0,"alm_empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1020,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+1021,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1022,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+1023,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1024,0,"usage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("i_fifo_v3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1777,0,"FALL_THROUGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1781,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1771,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1779,0,"ADDR_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1025,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1026,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1027,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1028,0,"testmode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1029,0,"full_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1030,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1031,0,"usage_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1032,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+1033,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1034,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+1035,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1771,0,"FifoDepth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1036,0,"gate_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1037,0,"read_pointer_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1038,0,"read_pointer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1039,0,"write_pointer_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1040,0,"write_pointer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1041,0,"status_cnt_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1042,0,"status_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("mem_n", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+1043,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1044,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->pushPrefix("mem_q", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+1045,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1046,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("slave_r_buffer_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1782,0,"ID_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1783,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1782,0,"USER_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1784,0,"BUFFER_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1785,0,"STRB_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1047,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1048,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1049,0,"test_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1050,0,"slave_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1051,0,"slave_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1053,0,"slave_resp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1054,0,"slave_user_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1055,0,"slave_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1056,0,"slave_last_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1057,0,"slave_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1058,0,"master_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1059,0,"master_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1061,0,"master_resp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1062,0,"master_user_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1063,0,"master_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1064,0,"master_last_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1065,0,"master_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1066,0,"s_data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 74,0);
    tracep->declArray(c+1069,0,"s_data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 74,0);
    tracep->pushPrefix("i_axi_single_slice", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1775,0,"BUFFER_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1786,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1072,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1073,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1074,0,"testmode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1075,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1076,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1077,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 74,0);
    tracep->declBit(c+1080,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1081,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1082,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 74,0);
    tracep->declBit(c+1085,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1086,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1777,0,"FALL_THROUGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1787,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1771,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1779,0,"THRESHOLD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1087,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1088,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1089,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1090,0,"testmode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1091,0,"full_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1092,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1093,0,"threshold_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1094,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 74,0);
    tracep->declBit(c+1097,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1098,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 74,0);
    tracep->declBit(c+1101,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("impl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1777,0,"FALL_THROUGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1787,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1771,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1779,0,"ALM_EMPTY_TH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1779,0,"ALM_FULL_TH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1779,0,"ADDR_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1102,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1103,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1104,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1105,0,"testmode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1106,0,"full_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1107,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1108,0,"alm_full_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1109,0,"alm_empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1110,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 74,0);
    tracep->declBit(c+1113,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1114,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 74,0);
    tracep->declBit(c+1117,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1118,0,"usage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("i_fifo_v3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1777,0,"FALL_THROUGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1787,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1771,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1779,0,"ADDR_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1119,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1120,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1121,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1122,0,"testmode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1123,0,"full_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1124,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1125,0,"usage_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declArray(c+1126,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 74,0);
    tracep->declBit(c+1129,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1130,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 74,0);
    tracep->declBit(c+1133,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1771,0,"FifoDepth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1134,0,"gate_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1135,0,"read_pointer_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1136,0,"read_pointer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1137,0,"write_pointer_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1138,0,"write_pointer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1139,0,"status_cnt_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1140,0,"status_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("mem_n", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declArray(c+1141,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 74,0);
    tracep->declArray(c+1144,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 74,0);
    tracep->popPrefix();
    tracep->pushPrefix("mem_q", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declArray(c+1147,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 74,0);
    tracep->declArray(c+1150,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 74,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("slave_w_buffer_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1774,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1773,0,"USER_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1775,0,"BUFFER_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1788,0,"STRB_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1153,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1154,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1155,0,"test_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1156,0,"slave_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1157,0,"slave_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1159,0,"slave_strb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1160,0,"slave_user_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1161,0,"slave_last_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1162,0,"slave_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1163,0,"master_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1164,0,"master_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1166,0,"master_strb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1167,0,"master_user_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1168,0,"master_last_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1169,0,"master_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1170,0,"s_data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 76,0);
    tracep->declArray(c+1173,0,"s_data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 76,0);
    tracep->pushPrefix("i_axi_single_slice", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1775,0,"BUFFER_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1789,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1176,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1177,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1178,0,"testmode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1179,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1180,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1181,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 76,0);
    tracep->declBit(c+1184,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1185,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1186,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 76,0);
    tracep->declBit(c+1189,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1190,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1777,0,"FALL_THROUGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1790,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1771,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1779,0,"THRESHOLD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1191,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1192,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1193,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1194,0,"testmode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1195,0,"full_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1196,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1197,0,"threshold_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1198,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 76,0);
    tracep->declBit(c+1201,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1202,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 76,0);
    tracep->declBit(c+1205,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("impl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1777,0,"FALL_THROUGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1790,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1771,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1779,0,"ALM_EMPTY_TH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1779,0,"ALM_FULL_TH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1779,0,"ADDR_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1206,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1207,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1208,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1209,0,"testmode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1210,0,"full_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1211,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1212,0,"alm_full_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1213,0,"alm_empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1214,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 76,0);
    tracep->declBit(c+1217,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1218,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 76,0);
    tracep->declBit(c+1221,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1222,0,"usage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("i_fifo_v3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1777,0,"FALL_THROUGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1790,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1771,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1779,0,"ADDR_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1223,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1224,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1225,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1226,0,"testmode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1227,0,"full_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1228,0,"empty_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1229,0,"usage_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declArray(c+1230,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 76,0);
    tracep->declBit(c+1233,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1234,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 76,0);
    tracep->declBit(c+1237,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1771,0,"FifoDepth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1238,0,"gate_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1239,0,"read_pointer_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1240,0,"read_pointer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1241,0,"write_pointer_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1242,0,"write_pointer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1243,0,"status_cnt_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1244,0,"status_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("mem_n", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declArray(c+1245,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 76,0);
    tracep->declArray(c+1248,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 76,0);
    tracep->popPrefix();
    tracep->pushPrefix("mem_q", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declArray(c+1251,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 76,0);
    tracep->declArray(c+1254,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 76,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_regmap", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1791,0,"AW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1257,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1258,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("reg_req_i", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+1259,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+1260,0,"write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1261,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1262,0,"wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1263,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("reg_rsp_o", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+1264,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1265,0,"error",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1266,0,"ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("reg2hw", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("control", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("r_ready", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1267,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("w_ready", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1268,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("r_enable", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1269,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("w_enable", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1270,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("r_burst", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1271,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("w_burst", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1272,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("r_burst_len", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+1273,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("w_burst_len", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+1274,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ar_addrl", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+1275,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ar_addrh", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+1276,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ar_cfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("len", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+1277,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("size", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+1278,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("nsaid", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+1279,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("aw_addrl", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+1280,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("aw_addrh", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+1281,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("aw_cfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("len", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+1282,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("size", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+1283,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("nsaid", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+1284,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("hw2reg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("control", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("r_ready", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1285,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1286,0,"de",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("w_ready", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1287,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1288,0,"de",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("r_enable", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1289,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1290,0,"de",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("w_enable", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1291,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1292,0,"de",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("r_burst", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1293,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1294,0,"de",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("w_burst", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1295,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1296,0,"de",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("r_burst_len", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+1297,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1298,0,"de",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("w_burst_len", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+1299,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1300,0,"de",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+1301,0,"devmode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1792,0,"DW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1773,0,"DBW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1302,0,"reg_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1303,0,"reg_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1304,0,"reg_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1305,0,"reg_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1306,0,"reg_be",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1307,0,"reg_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1308,0,"reg_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1309,0,"addrmiss",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1310,0,"wr_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1311,0,"reg_rdata_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("reg_intf_req", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+1312,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+1313,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1314,0,"wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1315,0,"wstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1316,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("reg_intf_rsp", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+1317,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1318,0,"error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1319,0,"ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+1320,0,"control_r_ready_qs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1321,0,"control_w_ready_qs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1322,0,"control_r_enable_qs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1323,0,"control_r_enable_wd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1324,0,"control_r_enable_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1325,0,"control_w_enable_qs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1326,0,"control_w_enable_wd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1327,0,"control_w_enable_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1328,0,"control_r_burst_qs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1329,0,"control_r_burst_wd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1330,0,"control_r_burst_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1331,0,"control_w_burst_qs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1332,0,"control_w_burst_wd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1333,0,"control_w_burst_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1334,0,"control_r_burst_len_qs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1335,0,"control_r_burst_len_wd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1336,0,"control_r_burst_len_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1337,0,"control_w_burst_len_qs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1338,0,"control_w_burst_len_wd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1339,0,"control_w_burst_len_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1340,0,"ar_addrl_qs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1341,0,"ar_addrl_wd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1342,0,"ar_addrl_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1343,0,"ar_addrh_qs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1344,0,"ar_addrh_wd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1345,0,"ar_addrh_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1346,0,"ar_cfg_len_qs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1347,0,"ar_cfg_len_wd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1348,0,"ar_cfg_len_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1349,0,"ar_cfg_size_qs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1350,0,"ar_cfg_size_wd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1351,0,"ar_cfg_size_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1352,0,"ar_cfg_nsaid_qs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1353,0,"ar_cfg_nsaid_wd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1354,0,"ar_cfg_nsaid_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1355,0,"aw_addrl_qs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1356,0,"aw_addrl_wd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1357,0,"aw_addrl_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1358,0,"aw_addrh_qs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1359,0,"aw_addrh_wd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1360,0,"aw_addrh_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1361,0,"aw_cfg_len_qs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1362,0,"aw_cfg_len_wd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1363,0,"aw_cfg_len_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1364,0,"aw_cfg_size_qs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1365,0,"aw_cfg_size_wd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1366,0,"aw_cfg_size_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1367,0,"aw_cfg_nsaid_qs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1368,0,"aw_cfg_nsaid_wd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1369,0,"aw_cfg_nsaid_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1370,0,"addr_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+1371,0,"unused_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1372,0,"unused_be",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_ar_addrh", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1792,0,"DW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1793,0,"SWACCESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1794,0,"RESVAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1373,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1374,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1375,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1376,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1377,0,"de",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1378,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1379,0,"qe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1380,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1381,0,"qs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1382,0,"wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1383,0,"wr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("wr_en_data_arb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1792,0,"DW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1793,0,"SWACCESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1384,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1385,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1386,0,"de",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1387,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1388,0,"q",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1389,0,"wr_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1390,0,"wr_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("gen_w", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1391,0,"unused_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_ar_addrl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1792,0,"DW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1793,0,"SWACCESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1794,0,"RESVAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1392,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1393,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1394,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1395,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1396,0,"de",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1397,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1398,0,"qe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1399,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1400,0,"qs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1401,0,"wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1402,0,"wr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("wr_en_data_arb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1792,0,"DW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1793,0,"SWACCESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1403,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1404,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1405,0,"de",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1406,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1407,0,"q",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1408,0,"wr_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1409,0,"wr_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("gen_w", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1410,0,"unused_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_ar_cfg_len", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1788,0,"DW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1793,0,"SWACCESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1795,0,"RESVAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1411,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1412,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1413,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1414,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1415,0,"de",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1416,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1417,0,"qe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1418,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1419,0,"qs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1420,0,"wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1421,0,"wr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("wr_en_data_arb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1788,0,"DW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1793,0,"SWACCESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1422,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1423,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1424,0,"de",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1425,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1426,0,"q",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1427,0,"wr_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1428,0,"wr_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("gen_w", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1429,0,"unused_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_ar_cfg_nsaid", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1773,0,"DW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1793,0,"SWACCESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1796,0,"RESVAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1430,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1431,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1432,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1433,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1434,0,"de",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1435,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1436,0,"qe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1437,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1438,0,"qs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1439,0,"wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1440,0,"wr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("wr_en_data_arb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1773,0,"DW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1793,0,"SWACCESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1441,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1442,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1443,0,"de",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1444,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1445,0,"q",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1446,0,"wr_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1447,0,"wr_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("gen_w", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1448,0,"unused_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_ar_cfg_size", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1797,0,"DW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1793,0,"SWACCESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1798,0,"RESVAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1449,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1450,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1451,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1452,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1453,0,"de",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1454,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1455,0,"qe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1456,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1457,0,"qs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1458,0,"wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1459,0,"wr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("wr_en_data_arb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1797,0,"DW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1793,0,"SWACCESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1460,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1461,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1462,0,"de",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1463,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1464,0,"q",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1465,0,"wr_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1466,0,"wr_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("gen_w", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1467,0,"unused_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_aw_addrh", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1792,0,"DW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1793,0,"SWACCESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1794,0,"RESVAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1468,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1469,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1470,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1471,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1472,0,"de",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1473,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1474,0,"qe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1475,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1476,0,"qs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1477,0,"wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1478,0,"wr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("wr_en_data_arb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1792,0,"DW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1793,0,"SWACCESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1479,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1480,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1481,0,"de",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1482,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1483,0,"q",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1484,0,"wr_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1485,0,"wr_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("gen_w", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1486,0,"unused_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_aw_addrl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1792,0,"DW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1793,0,"SWACCESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1794,0,"RESVAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1487,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1488,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1489,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1490,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1491,0,"de",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1492,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1493,0,"qe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1494,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1495,0,"qs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1496,0,"wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1497,0,"wr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("wr_en_data_arb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1792,0,"DW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1793,0,"SWACCESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1498,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1499,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1500,0,"de",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1501,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1502,0,"q",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1503,0,"wr_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1504,0,"wr_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("gen_w", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1505,0,"unused_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_aw_cfg_len", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1788,0,"DW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1793,0,"SWACCESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1795,0,"RESVAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1506,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1507,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1508,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1509,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1510,0,"de",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1511,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1512,0,"qe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1513,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1514,0,"qs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1515,0,"wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1516,0,"wr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("wr_en_data_arb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1788,0,"DW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1793,0,"SWACCESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1517,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1518,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1519,0,"de",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1520,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1521,0,"q",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1522,0,"wr_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1523,0,"wr_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("gen_w", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1524,0,"unused_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_aw_cfg_nsaid", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1773,0,"DW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1793,0,"SWACCESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1796,0,"RESVAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1525,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1526,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1527,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1528,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1529,0,"de",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1530,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1531,0,"qe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1532,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1533,0,"qs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1534,0,"wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1535,0,"wr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("wr_en_data_arb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1773,0,"DW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1793,0,"SWACCESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1536,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1537,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1538,0,"de",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1539,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1540,0,"q",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1541,0,"wr_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1542,0,"wr_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("gen_w", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1543,0,"unused_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_aw_cfg_size", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1797,0,"DW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1793,0,"SWACCESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1798,0,"RESVAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1544,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1545,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1546,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1547,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1548,0,"de",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1549,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1550,0,"qe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1551,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1552,0,"qs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1553,0,"wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1554,0,"wr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("wr_en_data_arb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1797,0,"DW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1793,0,"SWACCESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1555,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1556,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1557,0,"de",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1558,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1559,0,"q",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1560,0,"wr_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1561,0,"wr_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("gen_w", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1562,0,"unused_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_control_r_burst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1799,0,"DW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1793,0,"SWACCESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1800,0,"RESVAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1563,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1564,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1565,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1566,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1567,0,"de",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1568,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1569,0,"qe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1570,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1571,0,"qs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1572,0,"wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1573,0,"wr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("wr_en_data_arb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1799,0,"DW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1793,0,"SWACCESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1574,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1575,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1576,0,"de",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1577,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1578,0,"q",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1579,0,"wr_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1580,0,"wr_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("gen_w", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1581,0,"unused_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_control_r_burst_len", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1788,0,"DW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1793,0,"SWACCESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1795,0,"RESVAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1582,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1583,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1584,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1585,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1586,0,"de",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1587,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1588,0,"qe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1589,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1590,0,"qs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1591,0,"wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1592,0,"wr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("wr_en_data_arb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1788,0,"DW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1793,0,"SWACCESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1593,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1594,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1595,0,"de",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1596,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1597,0,"q",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1598,0,"wr_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1599,0,"wr_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("gen_w", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1600,0,"unused_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_control_r_enable", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1799,0,"DW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1793,0,"SWACCESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1800,0,"RESVAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1601,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1602,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1603,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1604,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1605,0,"de",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1606,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1607,0,"qe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1608,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1609,0,"qs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1610,0,"wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1611,0,"wr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("wr_en_data_arb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1799,0,"DW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1793,0,"SWACCESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1612,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1613,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1614,0,"de",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1615,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1616,0,"q",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1617,0,"wr_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1618,0,"wr_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("gen_w", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1619,0,"unused_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_control_r_ready", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1799,0,"DW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1801,0,"SWACCESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1800,0,"RESVAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1620,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1621,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1622,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1623,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1624,0,"de",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1625,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1626,0,"qe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1627,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1628,0,"qs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1629,0,"wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1630,0,"wr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("wr_en_data_arb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1799,0,"DW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1801,0,"SWACCESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1631,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1632,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1633,0,"de",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1634,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1635,0,"q",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1636,0,"wr_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1637,0,"wr_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("gen_ro", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1638,0,"unused_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1639,0,"unused_wd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1640,0,"unused_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_control_w_burst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1799,0,"DW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1793,0,"SWACCESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1800,0,"RESVAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1641,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1642,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1643,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1644,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1645,0,"de",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1646,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1647,0,"qe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1648,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1649,0,"qs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1650,0,"wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1651,0,"wr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("wr_en_data_arb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1799,0,"DW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1793,0,"SWACCESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1652,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1653,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1654,0,"de",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1655,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1656,0,"q",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1657,0,"wr_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1658,0,"wr_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("gen_w", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1659,0,"unused_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_control_w_burst_len", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1788,0,"DW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1793,0,"SWACCESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1795,0,"RESVAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1660,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1661,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1662,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1663,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1664,0,"de",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1665,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1666,0,"qe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1667,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1668,0,"qs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1669,0,"wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1670,0,"wr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("wr_en_data_arb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1788,0,"DW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1793,0,"SWACCESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1671,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1672,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1673,0,"de",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1674,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1675,0,"q",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1676,0,"wr_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1677,0,"wr_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("gen_w", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1678,0,"unused_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_control_w_enable", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1799,0,"DW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1793,0,"SWACCESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1800,0,"RESVAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1679,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1680,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1681,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1682,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1683,0,"de",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1684,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1685,0,"qe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1686,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1687,0,"qs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1688,0,"wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1689,0,"wr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("wr_en_data_arb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1799,0,"DW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1793,0,"SWACCESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1690,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1691,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1692,0,"de",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1693,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1694,0,"q",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1695,0,"wr_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1696,0,"wr_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("gen_w", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1697,0,"unused_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_control_w_ready", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1799,0,"DW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1801,0,"SWACCESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1800,0,"RESVAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1698,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1699,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1700,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1701,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1702,0,"de",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1703,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1704,0,"qe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1705,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1706,0,"qs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1707,0,"wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1708,0,"wr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("wr_en_data_arb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1799,0,"DW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1801,0,"SWACCESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1709,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1710,0,"wd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1711,0,"de",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1712,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1713,0,"q",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1714,0,"wr_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1715,0,"wr_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("gen_ro", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1716,0,"unused_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1717,0,"unused_wd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1718,0,"unused_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i_w_handler", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1719,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1720,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1721,0,"w_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("w_data_o", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declQuad(c+1722,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1724,0,"strb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1725,0,"last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1726,0,"user",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->declBit(c+1727,0,"w_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("trans_data_i", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+1728,0,"burst_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1729,0,"len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1730,0,"nsaid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+1731,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->declBit(c+1733,0,"enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1734,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1735,0,"state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1736,0,"state_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("trans_data_q", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+1737,0,"burst_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1738,0,"len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1739,0,"nsaid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+1740,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("trans_data_d", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+1742,0,"burst_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1743,0,"len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1744,0,"nsaid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+1745,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->declBus(c+1747,0,"issued_trans_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1748,0,"issued_trans_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1749,0,"issued_data_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1750,0,"issued_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__axi_pkg__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__axi_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1802,0,"BURST_FIXED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1803,0,"BURST_INCR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1804,0,"BURST_WRAP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1802,0,"RESP_OKAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1803,0,"RESP_EXOKAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1804,0,"RESP_SLVERR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1805,0,"RESP_DECERR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1806,0,"CACHE_BUFFERABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1807,0,"CACHE_MODIFIABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1808,0,"CACHE_RD_ALLOC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1809,0,"CACHE_WR_ALLOC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1810,0,"ATOP_ATOMICSWAP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1811,0,"ATOP_ATOMICCMP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1802,0,"ATOP_NONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1803,0,"ATOP_ATOMICSTORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1804,0,"ATOP_ATOMICLOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1800,0,"ATOP_LITTLE_END",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1812,0,"ATOP_BIG_END",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1798,0,"ATOP_ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1813,0,"ATOP_CLR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1814,0,"ATOP_EOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1815,0,"ATOP_SET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1816,0,"ATOP_SMAX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1817,0,"ATOP_SMIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1818,0,"ATOP_UMAX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1819,0,"ATOP_UMIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1820,0,"ATOP_R_RESP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1821,0,"DemuxAw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1822,0,"DemuxW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1823,0,"DemuxB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1824,0,"DemuxAr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1825,0,"DemuxR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1826,0,"MuxAw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1827,0,"MuxW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1828,0,"MuxB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1829,0,"MuxAr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1830,0,"MuxR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__ariane_axi__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__ariane_axi__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1831,0,"IdWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1831,0,"UserWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1832,0,"AddrWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1832,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1833,0,"StrbWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__generic_reader_writer_reg_pkg__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__generic_reader_writer_reg_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1791,0,"BlockAw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1834,0,"GENERIC_READER_WRITER_CONTROL_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1835,0,"GENERIC_READER_WRITER_AR_ADDRL_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1836,0,"GENERIC_READER_WRITER_AR_ADDRH_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1837,0,"GENERIC_READER_WRITER_AR_CFG_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1838,0,"GENERIC_READER_WRITER_AW_ADDRL_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1839,0,"GENERIC_READER_WRITER_AW_ADDRH_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1840,0,"GENERIC_READER_WRITER_AW_CFG_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->pushPrefix("GENERIC_READER_WRITER_PERMIT", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+1751+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__reg_bus__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__reg_bus__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1791,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1792,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1758,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1759,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+1760,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1761,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1762,0,"wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1763,0,"wstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1764,0,"error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1765,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1766,0,"ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1767,(0x40U),32);
    bufp->fullIData(oldp+1768,(4U),32);
    bufp->fullBit(oldp+1769,(0U));
    bufp->fullIData(oldp+1770,(8U),32);
    bufp->fullIData(oldp+1771,(2U),32);
    bufp->fullIData(oldp+1772,(0x20U),32);
    bufp->fullIData(oldp+1773,(4U),32);
    bufp->fullIData(oldp+1774,(0x40U),32);
    bufp->fullIData(oldp+1775,(2U),32);
    bufp->fullIData(oldp+1776,(0x65U),32);
    bufp->fullBit(oldp+1777,(0U));
    bufp->fullIData(oldp+1778,(0x65U),32);
    bufp->fullIData(oldp+1779,(1U),32);
    bufp->fullIData(oldp+1780,(0xaU),32);
    bufp->fullIData(oldp+1781,(0xaU),32);
    bufp->fullIData(oldp+1782,(4U),32);
    bufp->fullIData(oldp+1783,(0x40U),32);
    bufp->fullIData(oldp+1784,(2U),32);
    bufp->fullIData(oldp+1785,(8U),32);
    bufp->fullIData(oldp+1786,(0x4bU),32);
    bufp->fullIData(oldp+1787,(0x4bU),32);
    bufp->fullIData(oldp+1788,(8U),32);
    bufp->fullIData(oldp+1789,(0x4dU),32);
    bufp->fullIData(oldp+1790,(0x4dU),32);
    bufp->fullIData(oldp+1791,(6U),32);
    bufp->fullIData(oldp+1792,(0x20U),32);
    bufp->fullSData(oldp+1793,(0x5257U),16);
    bufp->fullIData(oldp+1794,(0U),32);
    bufp->fullCData(oldp+1795,(0U),8);
    bufp->fullCData(oldp+1796,(0U),4);
    bufp->fullIData(oldp+1797,(3U),32);
    bufp->fullCData(oldp+1798,(0U),3);
    bufp->fullIData(oldp+1799,(1U),32);
    bufp->fullBit(oldp+1800,(0U));
    bufp->fullSData(oldp+1801,(0x524fU),16);
    bufp->fullCData(oldp+1802,(0U),2);
    bufp->fullCData(oldp+1803,(1U),2);
    bufp->fullCData(oldp+1804,(2U),2);
    bufp->fullCData(oldp+1805,(3U),2);
    bufp->fullCData(oldp+1806,(1U),4);
    bufp->fullCData(oldp+1807,(2U),4);
    bufp->fullCData(oldp+1808,(4U),4);
    bufp->fullCData(oldp+1809,(8U),4);
    bufp->fullCData(oldp+1810,(0x30U),6);
    bufp->fullCData(oldp+1811,(0x31U),6);
    bufp->fullBit(oldp+1812,(1U));
    bufp->fullCData(oldp+1813,(1U),3);
    bufp->fullCData(oldp+1814,(2U),3);
    bufp->fullCData(oldp+1815,(3U),3);
    bufp->fullCData(oldp+1816,(4U),3);
    bufp->fullCData(oldp+1817,(5U),3);
    bufp->fullCData(oldp+1818,(6U),3);
    bufp->fullCData(oldp+1819,(7U),3);
    bufp->fullIData(oldp+1820,(5U),32);
    bufp->fullSData(oldp+1821,(0x200U),10);
    bufp->fullSData(oldp+1822,(0x100U),10);
    bufp->fullSData(oldp+1823,(0x80U),10);
    bufp->fullSData(oldp+1824,(0x40U),10);
    bufp->fullSData(oldp+1825,(0x20U),10);
    bufp->fullSData(oldp+1826,(0x10U),10);
    bufp->fullSData(oldp+1827,(8U),10);
    bufp->fullSData(oldp+1828,(4U),10);
    bufp->fullSData(oldp+1829,(2U),10);
    bufp->fullSData(oldp+1830,(1U),10);
    bufp->fullIData(oldp+1831,(4U),32);
    bufp->fullIData(oldp+1832,(0x40U),32);
    bufp->fullIData(oldp+1833,(8U),32);
    bufp->fullCData(oldp+1834,(0U),6);
    bufp->fullCData(oldp+1835,(8U),6);
    bufp->fullCData(oldp+1836,(0xcU),6);
    bufp->fullCData(oldp+1837,(0x10U),6);
    bufp->fullCData(oldp+1838,(0x18U),6);
    bufp->fullCData(oldp+1839,(0x1cU),6);
    bufp->fullCData(oldp+1840,(0x20U),6);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
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
    bufp->fullBit(oldp+1,(vlSelf->clk_i));
    bufp->fullBit(oldp+2,(vlSelf->rst_ni));
    bufp->fullBit(oldp+3,(vlSelf->config_aw_valid_i));
    bufp->fullQData(oldp+4,(vlSelf->config_aw_addr_i),64);
    bufp->fullCData(oldp+6,(vlSelf->config_aw_len_i),8);
    bufp->fullCData(oldp+7,(vlSelf->config_aw_size_i),3);
    bufp->fullCData(oldp+8,(vlSelf->config_aw_id_i),4);
    bufp->fullBit(oldp+9,(vlSelf->config_aw_ready_o));
    bufp->fullBit(oldp+10,(vlSelf->config_w_valid_i));
    bufp->fullQData(oldp+11,(vlSelf->config_w_data_i),64);
    bufp->fullCData(oldp+13,(vlSelf->config_w_strb_i),8);
    bufp->fullBit(oldp+14,(vlSelf->config_w_last_i));
    bufp->fullBit(oldp+15,(vlSelf->config_w_ready_o));
    bufp->fullBit(oldp+16,(vlSelf->config_ar_valid_i));
    bufp->fullQData(oldp+17,(vlSelf->config_ar_addr_i),64);
    bufp->fullCData(oldp+19,(vlSelf->config_ar_len_i),8);
    bufp->fullCData(oldp+20,(vlSelf->config_ar_size_i),3);
    bufp->fullCData(oldp+21,(vlSelf->config_ar_id_i),4);
    bufp->fullBit(oldp+22,(vlSelf->config_ar_ready_o));
    bufp->fullBit(oldp+23,(vlSelf->config_r_valid_o));
    bufp->fullQData(oldp+24,(vlSelf->config_r_data_o),64);
    bufp->fullCData(oldp+26,(vlSelf->config_r_resp_o),2);
    bufp->fullBit(oldp+27,(vlSelf->config_r_last_o));
    bufp->fullCData(oldp+28,(vlSelf->config_r_id_o),4);
    bufp->fullBit(oldp+29,(vlSelf->config_r_ready_i));
    bufp->fullBit(oldp+30,(vlSelf->config_b_valid_o));
    bufp->fullCData(oldp+31,(vlSelf->config_b_resp_o),2);
    bufp->fullCData(oldp+32,(vlSelf->config_b_id_o),4);
    bufp->fullBit(oldp+33,(vlSelf->config_b_ready_i));
    bufp->fullBit(oldp+34,(vlSelf->mst_aw_valid_o));
    bufp->fullQData(oldp+35,(vlSelf->mst_aw_addr_o),64);
    bufp->fullCData(oldp+37,(vlSelf->mst_aw_len_o),8);
    bufp->fullCData(oldp+38,(vlSelf->mst_aw_size_o),3);
    bufp->fullCData(oldp+39,(vlSelf->mst_aw_wid_o),4);
    bufp->fullCData(oldp+40,(vlSelf->mst_aw_id_o),4);
    bufp->fullBit(oldp+41,(vlSelf->mst_aw_ready_i));
    bufp->fullBit(oldp+42,(vlSelf->mst_w_valid_o));
    bufp->fullQData(oldp+43,(vlSelf->mst_w_data_o),64);
    bufp->fullCData(oldp+45,(vlSelf->mst_w_strb_o),8);
    bufp->fullBit(oldp+46,(vlSelf->mst_w_last_o));
    bufp->fullBit(oldp+47,(vlSelf->mst_w_ready_i));
    bufp->fullBit(oldp+48,(vlSelf->mst_ar_valid_o));
    bufp->fullQData(oldp+49,(vlSelf->mst_ar_addr_o),64);
    bufp->fullCData(oldp+51,(vlSelf->mst_ar_len_o),8);
    bufp->fullCData(oldp+52,(vlSelf->mst_ar_size_o),3);
    bufp->fullCData(oldp+53,(vlSelf->mst_ar_wid_o),4);
    bufp->fullCData(oldp+54,(vlSelf->mst_ar_id_o),4);
    bufp->fullBit(oldp+55,(vlSelf->mst_ar_ready_i));
    bufp->fullBit(oldp+56,(vlSelf->mst_r_valid_i));
    bufp->fullQData(oldp+57,(vlSelf->mst_r_data_i),64);
    bufp->fullCData(oldp+59,(vlSelf->mst_r_resp_i),2);
    bufp->fullBit(oldp+60,(vlSelf->mst_r_last_i));
    bufp->fullCData(oldp+61,(vlSelf->mst_r_id_i),4);
    bufp->fullBit(oldp+62,(vlSelf->mst_r_ready_o));
    bufp->fullBit(oldp+63,(vlSelf->mst_b_valid_i));
    bufp->fullCData(oldp+64,(vlSelf->mst_b_resp_i),2);
    bufp->fullCData(oldp+65,(vlSelf->mst_b_id_i),4);
    bufp->fullBit(oldp+66,(vlSelf->mst_b_ready_o));
    bufp->fullBit(oldp+67,(vlSelf->dut__DOT__clk_i));
    bufp->fullBit(oldp+68,(vlSelf->dut__DOT__rst_ni));
    bufp->fullBit(oldp+69,(vlSelf->dut__DOT__config_aw_valid_i));
    bufp->fullQData(oldp+70,(vlSelf->dut__DOT__config_aw_addr_i),64);
    bufp->fullCData(oldp+72,(vlSelf->dut__DOT__config_aw_len_i),8);
    bufp->fullCData(oldp+73,(vlSelf->dut__DOT__config_aw_size_i),3);
    bufp->fullCData(oldp+74,(vlSelf->dut__DOT__config_aw_id_i),4);
    bufp->fullBit(oldp+75,(vlSelf->dut__DOT__config_aw_ready_o));
    bufp->fullBit(oldp+76,(vlSelf->dut__DOT__config_w_valid_i));
    bufp->fullQData(oldp+77,(vlSelf->dut__DOT__config_w_data_i),64);
    bufp->fullCData(oldp+79,(vlSelf->dut__DOT__config_w_strb_i),8);
    bufp->fullBit(oldp+80,(vlSelf->dut__DOT__config_w_last_i));
    bufp->fullBit(oldp+81,(vlSelf->dut__DOT__config_w_ready_o));
    bufp->fullBit(oldp+82,(vlSelf->dut__DOT__config_ar_valid_i));
    bufp->fullQData(oldp+83,(vlSelf->dut__DOT__config_ar_addr_i),64);
    bufp->fullCData(oldp+85,(vlSelf->dut__DOT__config_ar_len_i),8);
    bufp->fullCData(oldp+86,(vlSelf->dut__DOT__config_ar_size_i),3);
    bufp->fullCData(oldp+87,(vlSelf->dut__DOT__config_ar_id_i),4);
    bufp->fullBit(oldp+88,(vlSelf->dut__DOT__config_ar_ready_o));
    bufp->fullBit(oldp+89,(vlSelf->dut__DOT__config_r_valid_o));
    bufp->fullQData(oldp+90,(vlSelf->dut__DOT__config_r_data_o),64);
    bufp->fullCData(oldp+92,(vlSelf->dut__DOT__config_r_resp_o),2);
    bufp->fullBit(oldp+93,(vlSelf->dut__DOT__config_r_last_o));
    bufp->fullCData(oldp+94,(vlSelf->dut__DOT__config_r_id_o),4);
    bufp->fullBit(oldp+95,(vlSelf->dut__DOT__config_r_ready_i));
    bufp->fullBit(oldp+96,(vlSelf->dut__DOT__config_b_valid_o));
    bufp->fullCData(oldp+97,(vlSelf->dut__DOT__config_b_resp_o),2);
    bufp->fullCData(oldp+98,(vlSelf->dut__DOT__config_b_id_o),4);
    bufp->fullBit(oldp+99,(vlSelf->dut__DOT__config_b_ready_i));
    bufp->fullBit(oldp+100,(vlSelf->dut__DOT__mst_aw_valid_o));
    bufp->fullQData(oldp+101,(vlSelf->dut__DOT__mst_aw_addr_o),64);
    bufp->fullCData(oldp+103,(vlSelf->dut__DOT__mst_aw_len_o),8);
    bufp->fullCData(oldp+104,(vlSelf->dut__DOT__mst_aw_size_o),3);
    bufp->fullCData(oldp+105,(vlSelf->dut__DOT__mst_aw_wid_o),4);
    bufp->fullCData(oldp+106,(vlSelf->dut__DOT__mst_aw_id_o),4);
    bufp->fullBit(oldp+107,(vlSelf->dut__DOT__mst_aw_ready_i));
    bufp->fullBit(oldp+108,(vlSelf->dut__DOT__mst_w_valid_o));
    bufp->fullQData(oldp+109,(vlSelf->dut__DOT__mst_w_data_o),64);
    bufp->fullCData(oldp+111,(vlSelf->dut__DOT__mst_w_strb_o),8);
    bufp->fullBit(oldp+112,(vlSelf->dut__DOT__mst_w_last_o));
    bufp->fullBit(oldp+113,(vlSelf->dut__DOT__mst_w_ready_i));
    bufp->fullBit(oldp+114,(vlSelf->dut__DOT__mst_ar_valid_o));
    bufp->fullQData(oldp+115,(vlSelf->dut__DOT__mst_ar_addr_o),64);
    bufp->fullCData(oldp+117,(vlSelf->dut__DOT__mst_ar_len_o),8);
    bufp->fullCData(oldp+118,(vlSelf->dut__DOT__mst_ar_size_o),3);
    bufp->fullCData(oldp+119,(vlSelf->dut__DOT__mst_ar_wid_o),4);
    bufp->fullCData(oldp+120,(vlSelf->dut__DOT__mst_ar_id_o),4);
    bufp->fullBit(oldp+121,(vlSelf->dut__DOT__mst_ar_ready_i));
    bufp->fullBit(oldp+122,(vlSelf->dut__DOT__mst_r_valid_i));
    bufp->fullQData(oldp+123,(vlSelf->dut__DOT__mst_r_data_i),64);
    bufp->fullCData(oldp+125,(vlSelf->dut__DOT__mst_r_resp_i),2);
    bufp->fullBit(oldp+126,(vlSelf->dut__DOT__mst_r_last_i));
    bufp->fullCData(oldp+127,(vlSelf->dut__DOT__mst_r_id_i),4);
    bufp->fullBit(oldp+128,(vlSelf->dut__DOT__mst_r_ready_o));
    bufp->fullBit(oldp+129,(vlSelf->dut__DOT__mst_b_valid_i));
    bufp->fullCData(oldp+130,(vlSelf->dut__DOT__mst_b_resp_i),2);
    bufp->fullCData(oldp+131,(vlSelf->dut__DOT__mst_b_id_i),4);
    bufp->fullBit(oldp+132,(vlSelf->dut__DOT__mst_b_ready_o));
    bufp->fullBit(oldp+133,((1U & (vlSelf->dut__DOT__config_rsp[2U] 
                                   >> 0x19U))));
    bufp->fullBit(oldp+134,((1U & (vlSelf->dut__DOT__config_rsp[2U] 
                                   >> 0x18U))));
    bufp->fullBit(oldp+135,((1U & (vlSelf->dut__DOT__config_rsp[2U] 
                                   >> 0x17U))));
    bufp->fullBit(oldp+136,((1U & (vlSelf->dut__DOT__config_rsp[2U] 
                                   >> 0x16U))));
    bufp->fullCData(oldp+137,((0xfU & (vlSelf->dut__DOT__config_rsp[2U] 
                                       >> 0x12U))),4);
    bufp->fullCData(oldp+138,((3U & (vlSelf->dut__DOT__config_rsp[2U] 
                                     >> 0x10U))),2);
    bufp->fullCData(oldp+139,((0xfU & (vlSelf->dut__DOT__config_rsp[2U] 
                                       >> 0xcU))),4);
    bufp->fullBit(oldp+140,((1U & (vlSelf->dut__DOT__config_rsp[2U] 
                                   >> 0xbU))));
    bufp->fullCData(oldp+141,((0xfU & (vlSelf->dut__DOT__config_rsp[2U] 
                                       >> 7U))),4);
    bufp->fullQData(oldp+142,((((QData)((IData)(vlSelf->dut__DOT__config_rsp[2U])) 
                                << 0x39U) | (((QData)((IData)(
                                                              vlSelf->dut__DOT__config_rsp[1U])) 
                                              << 0x19U) 
                                             | ((QData)((IData)(
                                                                vlSelf->dut__DOT__config_rsp[0U])) 
                                                >> 7U)))),64);
    bufp->fullCData(oldp+144,((3U & (vlSelf->dut__DOT__config_rsp[0U] 
                                     >> 5U))),2);
    bufp->fullBit(oldp+145,((1U & (vlSelf->dut__DOT__config_rsp[0U] 
                                   >> 4U))));
    bufp->fullCData(oldp+146,((0xfU & vlSelf->dut__DOT__config_rsp[0U])),4);
    bufp->fullCData(oldp+147,((0xfU & ((vlSelf->dut__DOT__config_req[9U] 
                                        << 2U) | (vlSelf->dut__DOT__config_req[8U] 
                                                  >> 0x1eU)))),4);
    bufp->fullQData(oldp+148,((((QData)((IData)(vlSelf->dut__DOT__config_req[8U])) 
                                << 0x22U) | (((QData)((IData)(
                                                              vlSelf->dut__DOT__config_req[7U])) 
                                              << 2U) 
                                             | ((QData)((IData)(
                                                                vlSelf->dut__DOT__config_req[6U])) 
                                                >> 0x1eU)))),64);
    bufp->fullCData(oldp+150,((0xffU & (vlSelf->dut__DOT__config_req[6U] 
                                        >> 0x16U))),8);
    bufp->fullCData(oldp+151,((7U & (vlSelf->dut__DOT__config_req[6U] 
                                     >> 0x13U))),3);
    bufp->fullCData(oldp+152,((3U & (vlSelf->dut__DOT__config_req[6U] 
                                     >> 0x11U))),2);
    bufp->fullBit(oldp+153,((1U & (vlSelf->dut__DOT__config_req[6U] 
                                   >> 0x10U))));
    bufp->fullCData(oldp+154,((0xfU & (vlSelf->dut__DOT__config_req[6U] 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+155,((7U & (vlSelf->dut__DOT__config_req[6U] 
                                     >> 9U))),3);
    bufp->fullCData(oldp+156,((0xfU & (vlSelf->dut__DOT__config_req[6U] 
                                       >> 5U))),4);
    bufp->fullCData(oldp+157,((0xfU & (vlSelf->dut__DOT__config_req[6U] 
                                       >> 1U))),4);
    bufp->fullCData(oldp+158,((0x3fU & ((vlSelf->dut__DOT__config_req[6U] 
                                         << 5U) | (
                                                   vlSelf->dut__DOT__config_req[5U] 
                                                   >> 0x1bU)))),6);
    bufp->fullCData(oldp+159,((0xfU & (vlSelf->dut__DOT__config_req[5U] 
                                       >> 0x17U))),4);
    bufp->fullBit(oldp+160,((1U & (vlSelf->dut__DOT__config_req[5U] 
                                   >> 0x16U))));
    bufp->fullQData(oldp+161,((((QData)((IData)(vlSelf->dut__DOT__config_req[5U])) 
                                << 0x2aU) | (((QData)((IData)(
                                                              vlSelf->dut__DOT__config_req[4U])) 
                                              << 0xaU) 
                                             | ((QData)((IData)(
                                                                vlSelf->dut__DOT__config_req[3U])) 
                                                >> 0x16U)))),64);
    bufp->fullCData(oldp+163,((0xffU & (vlSelf->dut__DOT__config_req[3U] 
                                        >> 0xeU))),8);
    bufp->fullBit(oldp+164,((1U & (vlSelf->dut__DOT__config_req[3U] 
                                   >> 0xdU))));
    bufp->fullCData(oldp+165,((0xfU & (vlSelf->dut__DOT__config_req[3U] 
                                       >> 9U))),4);
    bufp->fullBit(oldp+166,((1U & (vlSelf->dut__DOT__config_req[3U] 
                                   >> 8U))));
    bufp->fullBit(oldp+167,((1U & (vlSelf->dut__DOT__config_req[3U] 
                                   >> 7U))));
    bufp->fullCData(oldp+168,((0xfU & (vlSelf->dut__DOT__config_req[3U] 
                                       >> 3U))),4);
    bufp->fullQData(oldp+169,((((QData)((IData)(vlSelf->dut__DOT__config_req[3U])) 
                                << 0x3dU) | (((QData)((IData)(
                                                              vlSelf->dut__DOT__config_req[2U])) 
                                              << 0x1dU) 
                                             | ((QData)((IData)(
                                                                vlSelf->dut__DOT__config_req[1U])) 
                                                >> 3U)))),64);
    bufp->fullCData(oldp+171,((0xffU & ((vlSelf->dut__DOT__config_req[1U] 
                                         << 5U) | (
                                                   vlSelf->dut__DOT__config_req[0U] 
                                                   >> 0x1bU)))),8);
    bufp->fullCData(oldp+172,((7U & (vlSelf->dut__DOT__config_req[0U] 
                                     >> 0x18U))),3);
    bufp->fullCData(oldp+173,((3U & (vlSelf->dut__DOT__config_req[0U] 
                                     >> 0x16U))),2);
    bufp->fullBit(oldp+174,((1U & (vlSelf->dut__DOT__config_req[0U] 
                                   >> 0x15U))));
    bufp->fullCData(oldp+175,((0xfU & (vlSelf->dut__DOT__config_req[0U] 
                                       >> 0x11U))),4);
    bufp->fullCData(oldp+176,((7U & (vlSelf->dut__DOT__config_req[0U] 
                                     >> 0xeU))),3);
    bufp->fullCData(oldp+177,((0xfU & (vlSelf->dut__DOT__config_req[0U] 
                                       >> 0xaU))),4);
    bufp->fullCData(oldp+178,((0xfU & (vlSelf->dut__DOT__config_req[0U] 
                                       >> 6U))),4);
    bufp->fullCData(oldp+179,((0xfU & (vlSelf->dut__DOT__config_req[0U] 
                                       >> 2U))),4);
    bufp->fullBit(oldp+180,((1U & (vlSelf->dut__DOT__config_req[0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+181,((1U & vlSelf->dut__DOT__config_req[0U])));
    bufp->fullBit(oldp+182,((1U & (vlSelf->dut__DOT__mst_rsp[2U] 
                                   >> 0x19U))));
    bufp->fullBit(oldp+183,((1U & (vlSelf->dut__DOT__mst_rsp[2U] 
                                   >> 0x18U))));
    bufp->fullBit(oldp+184,((1U & (vlSelf->dut__DOT__mst_rsp[2U] 
                                   >> 0x17U))));
    bufp->fullBit(oldp+185,((1U & (vlSelf->dut__DOT__mst_rsp[2U] 
                                   >> 0x16U))));
    bufp->fullCData(oldp+186,((0xfU & (vlSelf->dut__DOT__mst_rsp[2U] 
                                       >> 0x12U))),4);
    bufp->fullCData(oldp+187,((3U & (vlSelf->dut__DOT__mst_rsp[2U] 
                                     >> 0x10U))),2);
    bufp->fullCData(oldp+188,((0xfU & (vlSelf->dut__DOT__mst_rsp[2U] 
                                       >> 0xcU))),4);
    bufp->fullBit(oldp+189,((1U & (vlSelf->dut__DOT__mst_rsp[2U] 
                                   >> 0xbU))));
    bufp->fullCData(oldp+190,((0xfU & (vlSelf->dut__DOT__mst_rsp[2U] 
                                       >> 7U))),4);
    bufp->fullQData(oldp+191,((((QData)((IData)(vlSelf->dut__DOT__mst_rsp[2U])) 
                                << 0x39U) | (((QData)((IData)(
                                                              vlSelf->dut__DOT__mst_rsp[1U])) 
                                              << 0x19U) 
                                             | ((QData)((IData)(
                                                                vlSelf->dut__DOT__mst_rsp[0U])) 
                                                >> 7U)))),64);
    bufp->fullCData(oldp+193,((3U & (vlSelf->dut__DOT__mst_rsp[0U] 
                                     >> 5U))),2);
    bufp->fullBit(oldp+194,((1U & (vlSelf->dut__DOT__mst_rsp[0U] 
                                   >> 4U))));
    bufp->fullCData(oldp+195,((0xfU & vlSelf->dut__DOT__mst_rsp[0U])),4);
    bufp->fullCData(oldp+196,((0xfU & (vlSelf->dut__DOT__mst_req[9U] 
                                       >> 6U))),4);
    bufp->fullQData(oldp+197,((((QData)((IData)(vlSelf->dut__DOT__mst_req[9U])) 
                                << 0x3aU) | (((QData)((IData)(
                                                              vlSelf->dut__DOT__mst_req[8U])) 
                                              << 0x1aU) 
                                             | ((QData)((IData)(
                                                                vlSelf->dut__DOT__mst_req[7U])) 
                                                >> 6U)))),64);
    bufp->fullCData(oldp+199,((0xffU & ((vlSelf->dut__DOT__mst_req[7U] 
                                         << 2U) | (
                                                   vlSelf->dut__DOT__mst_req[6U] 
                                                   >> 0x1eU)))),8);
    bufp->fullCData(oldp+200,((7U & (vlSelf->dut__DOT__mst_req[6U] 
                                     >> 0x1bU))),3);
    bufp->fullCData(oldp+201,((3U & (vlSelf->dut__DOT__mst_req[6U] 
                                     >> 0x19U))),2);
    bufp->fullBit(oldp+202,((1U & (vlSelf->dut__DOT__mst_req[6U] 
                                   >> 0x18U))));
    bufp->fullCData(oldp+203,((0xfU & (vlSelf->dut__DOT__mst_req[6U] 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+204,((7U & (vlSelf->dut__DOT__mst_req[6U] 
                                     >> 0x11U))),3);
    bufp->fullCData(oldp+205,((0xfU & (vlSelf->dut__DOT__mst_req[6U] 
                                       >> 0xdU))),4);
    bufp->fullCData(oldp+206,((0xfU & (vlSelf->dut__DOT__mst_req[6U] 
                                       >> 9U))),4);
    bufp->fullCData(oldp+207,((0x3fU & (vlSelf->dut__DOT__mst_req[6U] 
                                        >> 3U))),6);
    bufp->fullCData(oldp+208,((0xfU & ((vlSelf->dut__DOT__mst_req[6U] 
                                        << 1U) | (vlSelf->dut__DOT__mst_req[5U] 
                                                  >> 0x1fU)))),4);
    bufp->fullCData(oldp+209,((0xfU & (vlSelf->dut__DOT__mst_req[5U] 
                                       >> 0x1bU))),4);
    bufp->fullBit(oldp+210,((1U & (vlSelf->dut__DOT__mst_req[5U] 
                                   >> 0x1aU))));
    bufp->fullQData(oldp+211,((((QData)((IData)(vlSelf->dut__DOT__mst_req[5U])) 
                                << 0x26U) | (((QData)((IData)(
                                                              vlSelf->dut__DOT__mst_req[4U])) 
                                              << 6U) 
                                             | ((QData)((IData)(
                                                                vlSelf->dut__DOT__mst_req[3U])) 
                                                >> 0x1aU)))),64);
    bufp->fullCData(oldp+213,((0xffU & (vlSelf->dut__DOT__mst_req[3U] 
                                        >> 0x12U))),8);
    bufp->fullBit(oldp+214,((1U & (vlSelf->dut__DOT__mst_req[3U] 
                                   >> 0x11U))));
    bufp->fullCData(oldp+215,((0xfU & (vlSelf->dut__DOT__mst_req[3U] 
                                       >> 0xdU))),4);
    bufp->fullBit(oldp+216,((1U & (vlSelf->dut__DOT__mst_req[3U] 
                                   >> 0xcU))));
    bufp->fullBit(oldp+217,((1U & (vlSelf->dut__DOT__mst_req[3U] 
                                   >> 0xbU))));
    bufp->fullCData(oldp+218,((0xfU & (vlSelf->dut__DOT__mst_req[3U] 
                                       >> 7U))),4);
    bufp->fullQData(oldp+219,((((QData)((IData)(vlSelf->dut__DOT__mst_req[3U])) 
                                << 0x39U) | (((QData)((IData)(
                                                              vlSelf->dut__DOT__mst_req[2U])) 
                                              << 0x19U) 
                                             | ((QData)((IData)(
                                                                vlSelf->dut__DOT__mst_req[1U])) 
                                                >> 7U)))),64);
    bufp->fullCData(oldp+221,((0xffU & ((vlSelf->dut__DOT__mst_req[1U] 
                                         << 1U) | (
                                                   vlSelf->dut__DOT__mst_req[0U] 
                                                   >> 0x1fU)))),8);
    bufp->fullCData(oldp+222,((7U & (vlSelf->dut__DOT__mst_req[0U] 
                                     >> 0x1cU))),3);
    bufp->fullCData(oldp+223,((3U & (vlSelf->dut__DOT__mst_req[0U] 
                                     >> 0x1aU))),2);
    bufp->fullBit(oldp+224,((1U & (vlSelf->dut__DOT__mst_req[0U] 
                                   >> 0x19U))));
    bufp->fullCData(oldp+225,((0xfU & (vlSelf->dut__DOT__mst_req[0U] 
                                       >> 0x15U))),4);
    bufp->fullCData(oldp+226,((7U & (vlSelf->dut__DOT__mst_req[0U] 
                                     >> 0x12U))),3);
    bufp->fullCData(oldp+227,((0xfU & (vlSelf->dut__DOT__mst_req[0U] 
                                       >> 0xeU))),4);
    bufp->fullCData(oldp+228,((0xfU & (vlSelf->dut__DOT__mst_req[0U] 
                                       >> 0xaU))),4);
    bufp->fullCData(oldp+229,((0xfU & (vlSelf->dut__DOT__mst_req[0U] 
                                       >> 6U))),4);
    bufp->fullCData(oldp+230,((0xfU & (vlSelf->dut__DOT__mst_req[0U] 
                                       >> 2U))),4);
    bufp->fullBit(oldp+231,((1U & (vlSelf->dut__DOT__mst_req[0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+232,((1U & vlSelf->dut__DOT__mst_req[0U])));
    bufp->fullBit(oldp+233,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__clk_i));
    bufp->fullBit(oldp+234,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__rst_ni));
    bufp->fullCData(oldp+235,((0xfU & ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[9U] 
                                        << 2U) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[8U] 
                                                  >> 0x1eU)))),4);
    bufp->fullQData(oldp+236,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[8U])) 
                                << 0x22U) | (((QData)((IData)(
                                                              vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[7U])) 
                                              << 2U) 
                                             | ((QData)((IData)(
                                                                vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[6U])) 
                                                >> 0x1eU)))),64);
    bufp->fullCData(oldp+238,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[6U] 
                                        >> 0x16U))),8);
    bufp->fullCData(oldp+239,((7U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[6U] 
                                     >> 0x13U))),3);
    bufp->fullCData(oldp+240,((3U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[6U] 
                                     >> 0x11U))),2);
    bufp->fullBit(oldp+241,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[6U] 
                                   >> 0x10U))));
    bufp->fullCData(oldp+242,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[6U] 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+243,((7U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[6U] 
                                     >> 9U))),3);
    bufp->fullCData(oldp+244,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[6U] 
                                       >> 5U))),4);
    bufp->fullCData(oldp+245,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[6U] 
                                       >> 1U))),4);
    bufp->fullCData(oldp+246,((0x3fU & ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[6U] 
                                         << 5U) | (
                                                   vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[5U] 
                                                   >> 0x1bU)))),6);
    bufp->fullCData(oldp+247,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[5U] 
                                       >> 0x17U))),4);
    bufp->fullBit(oldp+248,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[5U] 
                                   >> 0x16U))));
    bufp->fullQData(oldp+249,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[5U])) 
                                << 0x2aU) | (((QData)((IData)(
                                                              vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[4U])) 
                                              << 0xaU) 
                                             | ((QData)((IData)(
                                                                vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[3U])) 
                                                >> 0x16U)))),64);
    bufp->fullCData(oldp+251,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[3U] 
                                        >> 0xeU))),8);
    bufp->fullBit(oldp+252,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[3U] 
                                   >> 0xdU))));
    bufp->fullCData(oldp+253,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[3U] 
                                       >> 9U))),4);
    bufp->fullBit(oldp+254,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[3U] 
                                   >> 8U))));
    bufp->fullBit(oldp+255,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[3U] 
                                   >> 7U))));
    bufp->fullCData(oldp+256,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[3U] 
                                       >> 3U))),4);
    bufp->fullQData(oldp+257,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[3U])) 
                                << 0x3dU) | (((QData)((IData)(
                                                              vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[2U])) 
                                              << 0x1dU) 
                                             | ((QData)((IData)(
                                                                vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[1U])) 
                                                >> 3U)))),64);
    bufp->fullCData(oldp+259,((0xffU & ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[1U] 
                                         << 5U) | (
                                                   vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[0U] 
                                                   >> 0x1bU)))),8);
    bufp->fullCData(oldp+260,((7U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[0U] 
                                     >> 0x18U))),3);
    bufp->fullCData(oldp+261,((3U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[0U] 
                                     >> 0x16U))),2);
    bufp->fullBit(oldp+262,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[0U] 
                                   >> 0x15U))));
    bufp->fullCData(oldp+263,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[0U] 
                                       >> 0x11U))),4);
    bufp->fullCData(oldp+264,((7U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[0U] 
                                     >> 0xeU))),3);
    bufp->fullCData(oldp+265,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[0U] 
                                       >> 0xaU))),4);
    bufp->fullCData(oldp+266,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[0U] 
                                       >> 6U))),4);
    bufp->fullCData(oldp+267,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[0U] 
                                       >> 2U))),4);
    bufp->fullBit(oldp+268,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+269,((1U & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_req_i[0U])));
    bufp->fullBit(oldp+270,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_rsp_o[2U] 
                                   >> 0x19U))));
    bufp->fullBit(oldp+271,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_rsp_o[2U] 
                                   >> 0x18U))));
    bufp->fullBit(oldp+272,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_rsp_o[2U] 
                                   >> 0x17U))));
    bufp->fullBit(oldp+273,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_rsp_o[2U] 
                                   >> 0x16U))));
    bufp->fullCData(oldp+274,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_rsp_o[2U] 
                                       >> 0x12U))),4);
    bufp->fullCData(oldp+275,((3U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_rsp_o[2U] 
                                     >> 0x10U))),2);
    bufp->fullCData(oldp+276,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_rsp_o[2U] 
                                       >> 0xcU))),4);
    bufp->fullBit(oldp+277,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_rsp_o[2U] 
                                   >> 0xbU))));
    bufp->fullCData(oldp+278,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_rsp_o[2U] 
                                       >> 7U))),4);
    bufp->fullQData(oldp+279,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_rsp_o[2U])) 
                                << 0x39U) | (((QData)((IData)(
                                                              vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_rsp_o[1U])) 
                                              << 0x19U) 
                                             | ((QData)((IData)(
                                                                vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_rsp_o[0U])) 
                                                >> 7U)))),64);
    bufp->fullCData(oldp+281,((3U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_rsp_o[0U] 
                                     >> 5U))),2);
    bufp->fullBit(oldp+282,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_rsp_o[0U] 
                                   >> 4U))));
    bufp->fullCData(oldp+283,((0xfU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__control_rsp_o[0U])),4);
    bufp->fullCData(oldp+284,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[9U] 
                                       >> 6U))),4);
    bufp->fullQData(oldp+285,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[9U])) 
                                << 0x3aU) | (((QData)((IData)(
                                                              vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[8U])) 
                                              << 0x1aU) 
                                             | ((QData)((IData)(
                                                                vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[7U])) 
                                                >> 6U)))),64);
    bufp->fullCData(oldp+287,((0xffU & ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[7U] 
                                         << 2U) | (
                                                   vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[6U] 
                                                   >> 0x1eU)))),8);
    bufp->fullCData(oldp+288,((7U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[6U] 
                                     >> 0x1bU))),3);
    bufp->fullCData(oldp+289,((3U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[6U] 
                                     >> 0x19U))),2);
    bufp->fullBit(oldp+290,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[6U] 
                                   >> 0x18U))));
    bufp->fullCData(oldp+291,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[6U] 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+292,((7U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[6U] 
                                     >> 0x11U))),3);
    bufp->fullCData(oldp+293,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[6U] 
                                       >> 0xdU))),4);
    bufp->fullCData(oldp+294,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[6U] 
                                       >> 9U))),4);
    bufp->fullCData(oldp+295,((0x3fU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[6U] 
                                        >> 3U))),6);
    bufp->fullCData(oldp+296,((0xfU & ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[6U] 
                                        << 1U) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[5U] 
                                                  >> 0x1fU)))),4);
    bufp->fullCData(oldp+297,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[5U] 
                                       >> 0x1bU))),4);
    bufp->fullBit(oldp+298,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[5U] 
                                   >> 0x1aU))));
    bufp->fullQData(oldp+299,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[5U])) 
                                << 0x26U) | (((QData)((IData)(
                                                              vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[4U])) 
                                              << 6U) 
                                             | ((QData)((IData)(
                                                                vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[3U])) 
                                                >> 0x1aU)))),64);
    bufp->fullCData(oldp+301,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[3U] 
                                        >> 0x12U))),8);
    bufp->fullBit(oldp+302,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[3U] 
                                   >> 0x11U))));
    bufp->fullCData(oldp+303,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[3U] 
                                       >> 0xdU))),4);
    bufp->fullBit(oldp+304,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[3U] 
                                   >> 0xcU))));
    bufp->fullBit(oldp+305,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[3U] 
                                   >> 0xbU))));
    bufp->fullCData(oldp+306,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[3U] 
                                       >> 7U))),4);
    bufp->fullQData(oldp+307,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[3U])) 
                                << 0x39U) | (((QData)((IData)(
                                                              vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[2U])) 
                                              << 0x19U) 
                                             | ((QData)((IData)(
                                                                vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[1U])) 
                                                >> 7U)))),64);
    bufp->fullCData(oldp+309,((0xffU & ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[1U] 
                                         << 1U) | (
                                                   vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[0U] 
                                                   >> 0x1fU)))),8);
    bufp->fullCData(oldp+310,((7U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[0U] 
                                     >> 0x1cU))),3);
    bufp->fullCData(oldp+311,((3U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[0U] 
                                     >> 0x1aU))),2);
    bufp->fullBit(oldp+312,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[0U] 
                                   >> 0x19U))));
    bufp->fullCData(oldp+313,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[0U] 
                                       >> 0x15U))),4);
    bufp->fullCData(oldp+314,((7U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[0U] 
                                     >> 0x12U))),3);
    bufp->fullCData(oldp+315,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[0U] 
                                       >> 0xeU))),4);
    bufp->fullCData(oldp+316,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[0U] 
                                       >> 0xaU))),4);
    bufp->fullCData(oldp+317,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[0U] 
                                       >> 6U))),4);
    bufp->fullCData(oldp+318,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[0U] 
                                       >> 2U))),4);
    bufp->fullBit(oldp+319,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+320,((1U & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_req_o[0U])));
    bufp->fullBit(oldp+321,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_rsp_i[2U] 
                                   >> 0x19U))));
    bufp->fullBit(oldp+322,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_rsp_i[2U] 
                                   >> 0x18U))));
    bufp->fullBit(oldp+323,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_rsp_i[2U] 
                                   >> 0x17U))));
    bufp->fullBit(oldp+324,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_rsp_i[2U] 
                                   >> 0x16U))));
    bufp->fullCData(oldp+325,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_rsp_i[2U] 
                                       >> 0x12U))),4);
    bufp->fullCData(oldp+326,((3U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_rsp_i[2U] 
                                     >> 0x10U))),2);
    bufp->fullCData(oldp+327,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_rsp_i[2U] 
                                       >> 0xcU))),4);
    bufp->fullBit(oldp+328,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_rsp_i[2U] 
                                   >> 0xbU))));
    bufp->fullCData(oldp+329,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_rsp_i[2U] 
                                       >> 7U))),4);
    bufp->fullQData(oldp+330,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_rsp_i[2U])) 
                                << 0x39U) | (((QData)((IData)(
                                                              vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_rsp_i[1U])) 
                                              << 0x19U) 
                                             | ((QData)((IData)(
                                                                vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_rsp_i[0U])) 
                                                >> 7U)))),64);
    bufp->fullCData(oldp+332,((3U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_rsp_i[0U] 
                                     >> 5U))),2);
    bufp->fullBit(oldp+333,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_rsp_i[0U] 
                                   >> 4U))));
    bufp->fullCData(oldp+334,((0xfU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__mst_rsp_i[0U])),4);
    bufp->fullCData(oldp+335,((0x3fU & (IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg_req 
                                                >> 0x26U)))),6);
    bufp->fullBit(oldp+336,((1U & (IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg_req 
                                           >> 0x25U)))));
    bufp->fullIData(oldp+337,((IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg_req 
                                       >> 5U))),32);
    bufp->fullCData(oldp+338,((0xfU & (IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg_req 
                                               >> 1U)))),4);
    bufp->fullBit(oldp+339,((1U & (IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg_req))));
    bufp->fullIData(oldp+340,((IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg_rsp 
                                       >> 2U))),32);
    bufp->fullBit(oldp+341,((1U & (IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg_rsp 
                                           >> 1U)))));
    bufp->fullBit(oldp+342,((1U & (IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg_rsp))));
    bufp->fullBit(oldp+343,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg2hw[5U] 
                                   >> 0x13U))));
    bufp->fullBit(oldp+344,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg2hw[5U] 
                                   >> 0x12U))));
    bufp->fullBit(oldp+345,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg2hw[5U] 
                                   >> 0x11U))));
    bufp->fullBit(oldp+346,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg2hw[5U] 
                                   >> 0x10U))));
    bufp->fullBit(oldp+347,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg2hw[5U] 
                                   >> 0xfU))));
    bufp->fullBit(oldp+348,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg2hw[5U] 
                                   >> 0xeU))));
    bufp->fullCData(oldp+349,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg2hw[5U] 
                                        >> 6U))),8);
    bufp->fullCData(oldp+350,((0xffU & ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg2hw[5U] 
                                         << 2U) | (
                                                   vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg2hw[4U] 
                                                   >> 0x1eU)))),8);
    bufp->fullIData(oldp+351,(((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg2hw[4U] 
                                << 2U) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg2hw[3U] 
                                          >> 0x1eU))),32);
    bufp->fullIData(oldp+352,(((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg2hw[3U] 
                                << 2U) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg2hw[2U] 
                                          >> 0x1eU))),32);
    bufp->fullCData(oldp+353,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg2hw[2U] 
                                        >> 0x16U))),8);
    bufp->fullCData(oldp+354,((7U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg2hw[2U] 
                                     >> 0x13U))),3);
    bufp->fullCData(oldp+355,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg2hw[2U] 
                                       >> 0xfU))),4);
    bufp->fullIData(oldp+356,(((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg2hw[2U] 
                                << 0x11U) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg2hw[1U] 
                                             >> 0xfU))),32);
    bufp->fullIData(oldp+357,(((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg2hw[1U] 
                                << 0x11U) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg2hw[0U] 
                                             >> 0xfU))),32);
    bufp->fullCData(oldp+358,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg2hw[0U] 
                                        >> 7U))),8);
    bufp->fullCData(oldp+359,((7U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg2hw[0U] 
                                     >> 4U))),3);
    bufp->fullCData(oldp+360,((0xfU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__reg2hw[0U])),4);
    bufp->fullBit(oldp+361,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__hw2reg 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+362,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__hw2reg 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+363,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__hw2reg 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+364,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__hw2reg 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+365,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__hw2reg 
                                   >> 0x19U))));
    bufp->fullBit(oldp+366,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__hw2reg 
                                   >> 0x18U))));
    bufp->fullBit(oldp+367,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__hw2reg 
                                   >> 0x17U))));
    bufp->fullBit(oldp+368,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__hw2reg 
                                   >> 0x16U))));
    bufp->fullBit(oldp+369,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__hw2reg 
                                   >> 0x15U))));
    bufp->fullBit(oldp+370,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__hw2reg 
                                   >> 0x14U))));
    bufp->fullBit(oldp+371,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__hw2reg 
                                   >> 0x13U))));
    bufp->fullBit(oldp+372,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__hw2reg 
                                   >> 0x12U))));
    bufp->fullCData(oldp+373,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__hw2reg 
                                        >> 0xaU))),8);
    bufp->fullBit(oldp+374,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__hw2reg 
                                   >> 9U))));
    bufp->fullCData(oldp+375,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__hw2reg 
                                        >> 1U))),8);
    bufp->fullBit(oldp+376,((1U & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__hw2reg)));
    bufp->fullBit(oldp+377,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__enable_r_pulse));
    bufp->fullBit(oldp+378,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__enable_r_prev_state_q));
    bufp->fullBit(oldp+379,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__enable_w_pulse));
    bufp->fullBit(oldp+380,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__enable_w_prev_state_q));
    bufp->fullBit(oldp+381,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__w_ready));
    bufp->fullBit(oldp+382,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__aw_ready));
    bufp->fullBit(oldp+383,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__b_ready));
    bufp->fullCData(oldp+384,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__read_channel[2U] 
                                        >> 0xcU))),8);
    bufp->fullCData(oldp+385,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__read_channel[2U] 
                                        >> 4U))),8);
    bufp->fullCData(oldp+386,((0xfU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__read_channel[2U])),4);
    bufp->fullQData(oldp+387,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__read_channel[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__read_channel[0U])))),64);
    bufp->fullCData(oldp+389,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__write_channel[2U] 
                                        >> 0xcU))),8);
    bufp->fullCData(oldp+390,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__write_channel[2U] 
                                        >> 4U))),8);
    bufp->fullCData(oldp+391,((0xfU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__write_channel[2U])),4);
    bufp->fullQData(oldp+392,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__write_channel[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__write_channel[0U])))),64);
    bufp->fullBit(oldp+394,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__clk_i));
    bufp->fullBit(oldp+395,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__rst_ni));
    bufp->fullBit(oldp+396,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__ax_valid_o));
    bufp->fullCData(oldp+397,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__ax_data_o[3U] 
                                       >> 5U))),4);
    bufp->fullQData(oldp+398,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__ax_data_o[3U])) 
                                << 0x3bU) | (((QData)((IData)(
                                                              vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__ax_data_o[2U])) 
                                              << 0x1bU) 
                                             | ((QData)((IData)(
                                                                vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__ax_data_o[1U])) 
                                                >> 5U)))),64);
    bufp->fullCData(oldp+400,((0xffU & ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__ax_data_o[1U] 
                                         << 3U) | (
                                                   vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__ax_data_o[0U] 
                                                   >> 0x1dU)))),8);
    bufp->fullCData(oldp+401,((7U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__ax_data_o[0U] 
                                     >> 0x1aU))),3);
    bufp->fullCData(oldp+402,((3U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__ax_data_o[0U] 
                                     >> 0x18U))),2);
    bufp->fullBit(oldp+403,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__ax_data_o[0U] 
                                   >> 0x17U))));
    bufp->fullCData(oldp+404,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__ax_data_o[0U] 
                                       >> 0x13U))),4);
    bufp->fullCData(oldp+405,((7U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__ax_data_o[0U] 
                                     >> 0x10U))),3);
    bufp->fullCData(oldp+406,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__ax_data_o[0U] 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+407,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__ax_data_o[0U] 
                                       >> 8U))),4);
    bufp->fullCData(oldp+408,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__ax_data_o[0U] 
                                       >> 4U))),4);
    bufp->fullCData(oldp+409,((0xfU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__ax_data_o[0U])),4);
    bufp->fullBit(oldp+410,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__ax_ready_i));
    bufp->fullCData(oldp+411,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__trans_data_i[2U] 
                                        >> 0xcU))),8);
    bufp->fullCData(oldp+412,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__trans_data_i[2U] 
                                        >> 4U))),8);
    bufp->fullCData(oldp+413,((0xfU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__trans_data_i[2U])),4);
    bufp->fullQData(oldp+414,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__trans_data_i[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__trans_data_i[0U])))),64);
    bufp->fullBit(oldp+416,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__enable_i));
    bufp->fullBit(oldp+417,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__ready_o));
    bufp->fullBit(oldp+418,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__state_q));
    bufp->fullBit(oldp+419,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__state_d));
    bufp->fullCData(oldp+420,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__trans_data_q[2U] 
                                        >> 0xcU))),8);
    bufp->fullCData(oldp+421,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__trans_data_q[2U] 
                                        >> 4U))),8);
    bufp->fullCData(oldp+422,((0xfU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__trans_data_q[2U])),4);
    bufp->fullQData(oldp+423,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__trans_data_q[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__trans_data_q[0U])))),64);
    bufp->fullCData(oldp+425,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__trans_data_d[2U] 
                                        >> 0xcU))),8);
    bufp->fullCData(oldp+426,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__trans_data_d[2U] 
                                        >> 4U))),8);
    bufp->fullCData(oldp+427,((0xfU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__trans_data_d[2U])),4);
    bufp->fullQData(oldp+428,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__trans_data_d[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__trans_data_d[0U])))),64);
    bufp->fullCData(oldp+430,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__issued_trans_d),8);
    bufp->fullCData(oldp+431,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_ar_handler__DOT__issued_trans_q),8);
    bufp->fullBit(oldp+432,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__clk_i));
    bufp->fullBit(oldp+433,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__rst_ni));
    bufp->fullBit(oldp+434,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__ax_valid_o));
    bufp->fullCData(oldp+435,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__ax_data_o[3U] 
                                       >> 0xbU))),4);
    bufp->fullQData(oldp+436,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__ax_data_o[3U])) 
                                << 0x35U) | (((QData)((IData)(
                                                              vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__ax_data_o[2U])) 
                                              << 0x15U) 
                                             | ((QData)((IData)(
                                                                vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__ax_data_o[1U])) 
                                                >> 0xbU)))),64);
    bufp->fullCData(oldp+438,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__ax_data_o[1U] 
                                        >> 3U))),8);
    bufp->fullCData(oldp+439,((7U & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__ax_data_o[1U])),3);
    bufp->fullCData(oldp+440,((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__ax_data_o[0U] 
                               >> 0x1eU)),2);
    bufp->fullBit(oldp+441,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__ax_data_o[0U] 
                                   >> 0x1dU))));
    bufp->fullCData(oldp+442,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__ax_data_o[0U] 
                                       >> 0x19U))),4);
    bufp->fullCData(oldp+443,((7U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__ax_data_o[0U] 
                                     >> 0x16U))),3);
    bufp->fullCData(oldp+444,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__ax_data_o[0U] 
                                       >> 0x12U))),4);
    bufp->fullCData(oldp+445,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__ax_data_o[0U] 
                                       >> 0xeU))),4);
    bufp->fullCData(oldp+446,((0x3fU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__ax_data_o[0U] 
                                        >> 8U))),6);
    bufp->fullCData(oldp+447,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__ax_data_o[0U] 
                                       >> 4U))),4);
    bufp->fullCData(oldp+448,((0xfU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__ax_data_o[0U])),4);
    bufp->fullBit(oldp+449,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__ax_ready_i));
    bufp->fullCData(oldp+450,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__trans_data_i[2U] 
                                        >> 0xcU))),8);
    bufp->fullCData(oldp+451,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__trans_data_i[2U] 
                                        >> 4U))),8);
    bufp->fullCData(oldp+452,((0xfU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__trans_data_i[2U])),4);
    bufp->fullQData(oldp+453,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__trans_data_i[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__trans_data_i[0U])))),64);
    bufp->fullBit(oldp+455,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__enable_i));
    bufp->fullBit(oldp+456,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__ready_o));
    bufp->fullBit(oldp+457,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__state_q));
    bufp->fullBit(oldp+458,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__state_d));
    bufp->fullCData(oldp+459,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__trans_data_q[2U] 
                                        >> 0xcU))),8);
    bufp->fullCData(oldp+460,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__trans_data_q[2U] 
                                        >> 4U))),8);
    bufp->fullCData(oldp+461,((0xfU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__trans_data_q[2U])),4);
    bufp->fullQData(oldp+462,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__trans_data_q[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__trans_data_q[0U])))),64);
    bufp->fullCData(oldp+464,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__trans_data_d[2U] 
                                        >> 0xcU))),8);
    bufp->fullCData(oldp+465,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__trans_data_d[2U] 
                                        >> 4U))),8);
    bufp->fullCData(oldp+466,((0xfU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__trans_data_d[2U])),4);
    bufp->fullQData(oldp+467,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__trans_data_d[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__trans_data_d[0U])))),64);
    bufp->fullCData(oldp+469,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__issued_trans_d),8);
    bufp->fullCData(oldp+470,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_aw_handler__DOT__issued_trans_q),8);
    bufp->fullBit(oldp+471,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__clk_i));
    bufp->fullBit(oldp+472,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__rst_ni));
    bufp->fullBit(oldp+473,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__b_valid_i));
    bufp->fullCData(oldp+474,((0xfU & ((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__b_data_i) 
                                       >> 6U))),4);
    bufp->fullCData(oldp+475,((3U & ((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__b_data_i) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+476,((0xfU & (IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__b_data_i))),4);
    bufp->fullBit(oldp+477,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__b_ready_o));
    bufp->fullCData(oldp+478,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__trans_data_i[2U] 
                                        >> 0xcU))),8);
    bufp->fullCData(oldp+479,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__trans_data_i[2U] 
                                        >> 4U))),8);
    bufp->fullCData(oldp+480,((0xfU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__trans_data_i[2U])),4);
    bufp->fullQData(oldp+481,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__trans_data_i[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__trans_data_i[0U])))),64);
    bufp->fullBit(oldp+483,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__enable_i));
    bufp->fullBit(oldp+484,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__ready_o));
    bufp->fullBit(oldp+485,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__state_q));
    bufp->fullBit(oldp+486,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__state_d));
    bufp->fullCData(oldp+487,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__trans_data_q[2U] 
                                        >> 0xcU))),8);
    bufp->fullCData(oldp+488,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__trans_data_q[2U] 
                                        >> 4U))),8);
    bufp->fullCData(oldp+489,((0xfU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__trans_data_q[2U])),4);
    bufp->fullQData(oldp+490,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__trans_data_q[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__trans_data_q[0U])))),64);
    bufp->fullCData(oldp+492,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__trans_data_d[2U] 
                                        >> 0xcU))),8);
    bufp->fullCData(oldp+493,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__trans_data_d[2U] 
                                        >> 4U))),8);
    bufp->fullCData(oldp+494,((0xfU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__trans_data_d[2U])),4);
    bufp->fullQData(oldp+495,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__trans_data_d[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__trans_data_d[0U])))),64);
    bufp->fullCData(oldp+497,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__issued_trans_d),8);
    bufp->fullCData(oldp+498,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_b_handler__DOT__issued_trans_q),8);
    bufp->fullBit(oldp+499,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__clk_i));
    bufp->fullBit(oldp+500,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__rst_ni));
    bufp->fullCData(oldp+501,((0xfU & ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[9U] 
                                        << 2U) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[8U] 
                                                  >> 0x1eU)))),4);
    bufp->fullQData(oldp+502,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[8U])) 
                                << 0x22U) | (((QData)((IData)(
                                                              vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[7U])) 
                                              << 2U) 
                                             | ((QData)((IData)(
                                                                vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[6U])) 
                                                >> 0x1eU)))),64);
    bufp->fullCData(oldp+504,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[6U] 
                                        >> 0x16U))),8);
    bufp->fullCData(oldp+505,((7U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[6U] 
                                     >> 0x13U))),3);
    bufp->fullCData(oldp+506,((3U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[6U] 
                                     >> 0x11U))),2);
    bufp->fullBit(oldp+507,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[6U] 
                                   >> 0x10U))));
    bufp->fullCData(oldp+508,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[6U] 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+509,((7U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[6U] 
                                     >> 9U))),3);
    bufp->fullCData(oldp+510,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[6U] 
                                       >> 5U))),4);
    bufp->fullCData(oldp+511,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[6U] 
                                       >> 1U))),4);
    bufp->fullCData(oldp+512,((0x3fU & ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[6U] 
                                         << 5U) | (
                                                   vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[5U] 
                                                   >> 0x1bU)))),6);
    bufp->fullCData(oldp+513,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[5U] 
                                       >> 0x17U))),4);
    bufp->fullBit(oldp+514,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[5U] 
                                   >> 0x16U))));
    bufp->fullQData(oldp+515,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[5U])) 
                                << 0x2aU) | (((QData)((IData)(
                                                              vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[4U])) 
                                              << 0xaU) 
                                             | ((QData)((IData)(
                                                                vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[3U])) 
                                                >> 0x16U)))),64);
    bufp->fullCData(oldp+517,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[3U] 
                                        >> 0xeU))),8);
    bufp->fullBit(oldp+518,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[3U] 
                                   >> 0xdU))));
    bufp->fullCData(oldp+519,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[3U] 
                                       >> 9U))),4);
    bufp->fullBit(oldp+520,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[3U] 
                                   >> 8U))));
    bufp->fullBit(oldp+521,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[3U] 
                                   >> 7U))));
    bufp->fullCData(oldp+522,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[3U] 
                                       >> 3U))),4);
    bufp->fullQData(oldp+523,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[3U])) 
                                << 0x3dU) | (((QData)((IData)(
                                                              vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[2U])) 
                                              << 0x1dU) 
                                             | ((QData)((IData)(
                                                                vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[1U])) 
                                                >> 3U)))),64);
    bufp->fullCData(oldp+525,((0xffU & ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[1U] 
                                         << 5U) | (
                                                   vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[0U] 
                                                   >> 0x1bU)))),8);
    bufp->fullCData(oldp+526,((7U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[0U] 
                                     >> 0x18U))),3);
    bufp->fullCData(oldp+527,((3U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[0U] 
                                     >> 0x16U))),2);
    bufp->fullBit(oldp+528,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[0U] 
                                   >> 0x15U))));
    bufp->fullCData(oldp+529,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[0U] 
                                       >> 0x11U))),4);
    bufp->fullCData(oldp+530,((7U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[0U] 
                                     >> 0xeU))),3);
    bufp->fullCData(oldp+531,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[0U] 
                                       >> 0xaU))),4);
    bufp->fullCData(oldp+532,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[0U] 
                                       >> 6U))),4);
    bufp->fullCData(oldp+533,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[0U] 
                                       >> 2U))),4);
    bufp->fullBit(oldp+534,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+535,((1U & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_req_i[0U])));
    bufp->fullBit(oldp+536,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_rsp_o[2U] 
                                   >> 0x19U))));
    bufp->fullBit(oldp+537,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_rsp_o[2U] 
                                   >> 0x18U))));
    bufp->fullBit(oldp+538,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_rsp_o[2U] 
                                   >> 0x17U))));
    bufp->fullBit(oldp+539,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_rsp_o[2U] 
                                   >> 0x16U))));
    bufp->fullCData(oldp+540,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_rsp_o[2U] 
                                       >> 0x12U))),4);
    bufp->fullCData(oldp+541,((3U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_rsp_o[2U] 
                                     >> 0x10U))),2);
    bufp->fullCData(oldp+542,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_rsp_o[2U] 
                                       >> 0xcU))),4);
    bufp->fullBit(oldp+543,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_rsp_o[2U] 
                                   >> 0xbU))));
    bufp->fullCData(oldp+544,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_rsp_o[2U] 
                                       >> 7U))),4);
    bufp->fullQData(oldp+545,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_rsp_o[2U])) 
                                << 0x39U) | (((QData)((IData)(
                                                              vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_rsp_o[1U])) 
                                              << 0x19U) 
                                             | ((QData)((IData)(
                                                                vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_rsp_o[0U])) 
                                                >> 7U)))),64);
    bufp->fullCData(oldp+547,((3U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_rsp_o[0U] 
                                     >> 5U))),2);
    bufp->fullBit(oldp+548,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_rsp_o[0U] 
                                   >> 4U))));
    bufp->fullCData(oldp+549,((0xfU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__slv_rsp_o[0U])),4);
    bufp->fullCData(oldp+550,((0x3fU & (IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__cfg_req_o 
                                                >> 0x26U)))),6);
    bufp->fullBit(oldp+551,((1U & (IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__cfg_req_o 
                                           >> 0x25U)))));
    bufp->fullIData(oldp+552,((IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__cfg_req_o 
                                       >> 5U))),32);
    bufp->fullCData(oldp+553,((0xfU & (IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__cfg_req_o 
                                               >> 1U)))),4);
    bufp->fullBit(oldp+554,((1U & (IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__cfg_req_o))));
    bufp->fullIData(oldp+555,((IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__cfg_rsp_i 
                                       >> 2U))),32);
    bufp->fullBit(oldp+556,((1U & (IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__cfg_rsp_i 
                                           >> 1U)))));
    bufp->fullBit(oldp+557,((1U & (IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__cfg_rsp_i))));
    bufp->fullBit(oldp+558,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__penable));
    bufp->fullBit(oldp+559,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__pwrite));
    bufp->fullIData(oldp+560,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__paddr),32);
    bufp->fullBit(oldp+561,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__psel));
    bufp->fullIData(oldp+562,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__pwdata),32);
    bufp->fullIData(oldp+563,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__prdata),32);
    bufp->fullBit(oldp+564,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__pready));
    bufp->fullBit(oldp+565,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__pslverr));
    bufp->fullBit(oldp+566,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_apb_to_reg__DOT__clk_i));
    bufp->fullBit(oldp+567,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_apb_to_reg__DOT__rst_ni));
    bufp->fullBit(oldp+568,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_apb_to_reg__DOT__penable_i));
    bufp->fullBit(oldp+569,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_apb_to_reg__DOT__pwrite_i));
    bufp->fullIData(oldp+570,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_apb_to_reg__DOT__paddr_i),32);
    bufp->fullBit(oldp+571,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_apb_to_reg__DOT__psel_i));
    bufp->fullIData(oldp+572,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_apb_to_reg__DOT__pwdata_i),32);
    bufp->fullIData(oldp+573,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_apb_to_reg__DOT__prdata_o),32);
    bufp->fullBit(oldp+574,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_apb_to_reg__DOT__pready_o));
    bufp->fullBit(oldp+575,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_apb_to_reg__DOT__pslverr_o));
    bufp->fullBit(oldp+576,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ACLK));
    bufp->fullBit(oldp+577,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARESETn));
    bufp->fullBit(oldp+578,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__test_en_i));
    bufp->fullCData(oldp+579,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWID_i),4);
    bufp->fullQData(oldp+580,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWADDR_i),64);
    bufp->fullCData(oldp+582,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWLEN_i),8);
    bufp->fullCData(oldp+583,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWSIZE_i),3);
    bufp->fullCData(oldp+584,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWBURST_i),2);
    bufp->fullBit(oldp+585,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWLOCK_i));
    bufp->fullCData(oldp+586,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWCACHE_i),4);
    bufp->fullCData(oldp+587,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWPROT_i),3);
    bufp->fullCData(oldp+588,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWREGION_i),4);
    bufp->fullCData(oldp+589,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWUSER_i),4);
    bufp->fullCData(oldp+590,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWQOS_i),4);
    bufp->fullBit(oldp+591,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWVALID_i));
    bufp->fullBit(oldp+592,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWREADY_o));
    bufp->fullCData(oldp+593,((0xffU & (IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__WDATA_i))),8);
    bufp->fullCData(oldp+594,((0xffU & (IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__WDATA_i 
                                                >> 8U)))),8);
    bufp->fullCData(oldp+595,((0xffU & (IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__WDATA_i 
                                                >> 0x10U)))),8);
    bufp->fullCData(oldp+596,((0xffU & (IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__WDATA_i 
                                                >> 0x18U)))),8);
    bufp->fullCData(oldp+597,((0xffU & (IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__WDATA_i 
                                                >> 0x20U)))),8);
    bufp->fullCData(oldp+598,((0xffU & (IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__WDATA_i 
                                                >> 0x28U)))),8);
    bufp->fullCData(oldp+599,((0xffU & (IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__WDATA_i 
                                                >> 0x30U)))),8);
    bufp->fullCData(oldp+600,((0xffU & (IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__WDATA_i 
                                                >> 0x38U)))),8);
    bufp->fullCData(oldp+601,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__WSTRB_i),8);
    bufp->fullBit(oldp+602,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__WLAST_i));
    bufp->fullCData(oldp+603,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__WUSER_i),4);
    bufp->fullBit(oldp+604,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__WVALID_i));
    bufp->fullBit(oldp+605,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__WREADY_o));
    bufp->fullCData(oldp+606,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__BID_o),4);
    bufp->fullCData(oldp+607,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__BRESP_o),2);
    bufp->fullBit(oldp+608,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__BVALID_o));
    bufp->fullCData(oldp+609,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__BUSER_o),4);
    bufp->fullBit(oldp+610,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__BREADY_i));
    bufp->fullCData(oldp+611,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARID_i),4);
    bufp->fullQData(oldp+612,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARADDR_i),64);
    bufp->fullCData(oldp+614,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARLEN_i),8);
    bufp->fullCData(oldp+615,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARSIZE_i),3);
    bufp->fullCData(oldp+616,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARBURST_i),2);
    bufp->fullBit(oldp+617,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARLOCK_i));
    bufp->fullCData(oldp+618,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARCACHE_i),4);
    bufp->fullCData(oldp+619,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARPROT_i),3);
    bufp->fullCData(oldp+620,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARREGION_i),4);
    bufp->fullCData(oldp+621,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARUSER_i),4);
    bufp->fullCData(oldp+622,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARQOS_i),4);
    bufp->fullBit(oldp+623,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARVALID_i));
    bufp->fullBit(oldp+624,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARREADY_o));
    bufp->fullCData(oldp+625,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__RID_o),4);
    bufp->fullQData(oldp+626,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__RDATA_o),64);
    bufp->fullCData(oldp+628,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__RRESP_o),2);
    bufp->fullBit(oldp+629,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__RLAST_o));
    bufp->fullCData(oldp+630,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__RUSER_o),4);
    bufp->fullBit(oldp+631,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__RVALID_o));
    bufp->fullBit(oldp+632,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__RREADY_i));
    bufp->fullBit(oldp+633,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__PENABLE));
    bufp->fullBit(oldp+634,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__PWRITE));
    bufp->fullIData(oldp+635,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__PADDR),32);
    bufp->fullBit(oldp+636,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__PSEL));
    bufp->fullIData(oldp+637,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__PWDATA),32);
    bufp->fullIData(oldp+638,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__PRDATA),32);
    bufp->fullBit(oldp+639,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__PREADY));
    bufp->fullBit(oldp+640,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__PSLVERR));
    bufp->fullCData(oldp+641,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWID),4);
    bufp->fullQData(oldp+642,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWADDR),64);
    bufp->fullCData(oldp+644,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWLEN),8);
    bufp->fullCData(oldp+645,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWSIZE),3);
    bufp->fullCData(oldp+646,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWBURST),2);
    bufp->fullBit(oldp+647,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWLOCK));
    bufp->fullCData(oldp+648,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWCACHE),4);
    bufp->fullCData(oldp+649,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWPROT),3);
    bufp->fullCData(oldp+650,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWREGION),4);
    bufp->fullCData(oldp+651,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWUSER),4);
    bufp->fullCData(oldp+652,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWQOS),4);
    bufp->fullBit(oldp+653,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWVALID));
    bufp->fullBit(oldp+654,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWREADY));
    bufp->fullIData(oldp+655,((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__WDATA)),32);
    bufp->fullIData(oldp+656,((IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__WDATA 
                                       >> 0x20U))),32);
    bufp->fullCData(oldp+657,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__WSTRB),8);
    bufp->fullBit(oldp+658,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__WLAST));
    bufp->fullCData(oldp+659,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__WUSER),4);
    bufp->fullBit(oldp+660,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__WVALID));
    bufp->fullBit(oldp+661,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__WREADY));
    bufp->fullCData(oldp+662,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__BID),4);
    bufp->fullCData(oldp+663,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__BRESP),2);
    bufp->fullBit(oldp+664,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__BVALID));
    bufp->fullCData(oldp+665,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__BUSER),4);
    bufp->fullBit(oldp+666,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__BREADY));
    bufp->fullCData(oldp+667,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARID),4);
    bufp->fullQData(oldp+668,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARADDR),64);
    bufp->fullCData(oldp+670,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARLEN),8);
    bufp->fullCData(oldp+671,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARSIZE),3);
    bufp->fullCData(oldp+672,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARBURST),2);
    bufp->fullBit(oldp+673,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARLOCK));
    bufp->fullCData(oldp+674,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARCACHE),4);
    bufp->fullCData(oldp+675,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARPROT),3);
    bufp->fullCData(oldp+676,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARREGION),4);
    bufp->fullCData(oldp+677,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARUSER),4);
    bufp->fullCData(oldp+678,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARQOS),4);
    bufp->fullBit(oldp+679,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARVALID));
    bufp->fullBit(oldp+680,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARREADY));
    bufp->fullCData(oldp+681,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__RID),4);
    bufp->fullIData(oldp+682,((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__RDATA)),32);
    bufp->fullIData(oldp+683,((IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__RDATA 
                                       >> 0x20U))),32);
    bufp->fullCData(oldp+684,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__RRESP),2);
    bufp->fullBit(oldp+685,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__RLAST));
    bufp->fullCData(oldp+686,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__RUSER),4);
    bufp->fullBit(oldp+687,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__RVALID));
    bufp->fullBit(oldp+688,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__RREADY));
    bufp->fullCData(oldp+689,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__CS),4);
    bufp->fullCData(oldp+690,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__NS),4);
    bufp->fullBit(oldp+691,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__W_word_sel));
    bufp->fullIData(oldp+692,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__address),32);
    bufp->fullBit(oldp+693,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__read_req));
    bufp->fullBit(oldp+694,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__write_req));
    bufp->fullBit(oldp+695,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__sample_AR));
    bufp->fullSData(oldp+696,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARLEN_Q),9);
    bufp->fullBit(oldp+697,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__decr_ARLEN));
    bufp->fullBit(oldp+698,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__sample_AW));
    bufp->fullSData(oldp+699,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWLEN_Q),9);
    bufp->fullBit(oldp+700,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__decr_AWLEN));
    bufp->fullQData(oldp+701,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__ARADDR_Q),64);
    bufp->fullBit(oldp+703,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__incr_ARADDR));
    bufp->fullQData(oldp+704,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__AWADDR_Q),64);
    bufp->fullBit(oldp+706,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__incr_AWADDR));
    bufp->fullBit(oldp+707,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__sample_RDATA_0));
    bufp->fullBit(oldp+708,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__sample_RDATA_1));
    bufp->fullIData(oldp+709,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__RDATA_Q_0),32);
    bufp->fullIData(oldp+710,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__RDATA_Q_1),32);
    bufp->fullBit(oldp+711,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__clk_i));
    bufp->fullBit(oldp+712,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__rst_ni));
    bufp->fullBit(oldp+713,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__test_en_i));
    bufp->fullBit(oldp+714,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__slave_valid_i));
    bufp->fullQData(oldp+715,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__slave_addr_i),64);
    bufp->fullCData(oldp+717,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__slave_prot_i),3);
    bufp->fullCData(oldp+718,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__slave_region_i),4);
    bufp->fullCData(oldp+719,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__slave_len_i),8);
    bufp->fullCData(oldp+720,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__slave_size_i),3);
    bufp->fullCData(oldp+721,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__slave_burst_i),2);
    bufp->fullBit(oldp+722,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__slave_lock_i));
    bufp->fullCData(oldp+723,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__slave_cache_i),4);
    bufp->fullCData(oldp+724,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__slave_qos_i),4);
    bufp->fullCData(oldp+725,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__slave_id_i),4);
    bufp->fullCData(oldp+726,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__slave_user_i),4);
    bufp->fullBit(oldp+727,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__slave_ready_o));
    bufp->fullBit(oldp+728,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__master_valid_o));
    bufp->fullQData(oldp+729,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__master_addr_o),64);
    bufp->fullCData(oldp+731,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__master_prot_o),3);
    bufp->fullCData(oldp+732,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__master_region_o),4);
    bufp->fullCData(oldp+733,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__master_len_o),8);
    bufp->fullCData(oldp+734,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__master_size_o),3);
    bufp->fullCData(oldp+735,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__master_burst_o),2);
    bufp->fullBit(oldp+736,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__master_lock_o));
    bufp->fullCData(oldp+737,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__master_cache_o),4);
    bufp->fullCData(oldp+738,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__master_qos_o),4);
    bufp->fullCData(oldp+739,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__master_id_o),4);
    bufp->fullCData(oldp+740,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__master_user_o),4);
    bufp->fullBit(oldp+741,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__master_ready_i));
    bufp->fullWData(oldp+742,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__s_data_in),101);
    bufp->fullWData(oldp+746,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__s_data_out),101);
    bufp->fullBit(oldp+750,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__clk_i));
    bufp->fullBit(oldp+751,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__rst_ni));
    bufp->fullBit(oldp+752,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__testmode_i));
    bufp->fullBit(oldp+753,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__valid_i));
    bufp->fullBit(oldp+754,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__ready_o));
    bufp->fullWData(oldp+755,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__data_i),101);
    bufp->fullBit(oldp+759,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__ready_i));
    bufp->fullBit(oldp+760,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__valid_o));
    bufp->fullWData(oldp+761,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__data_o),101);
    bufp->fullBit(oldp+765,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__full));
    bufp->fullBit(oldp+766,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__empty));
    bufp->fullBit(oldp+767,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__clk_i));
    bufp->fullBit(oldp+768,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__rst_ni));
    bufp->fullBit(oldp+769,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__flush_i));
    bufp->fullBit(oldp+770,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__testmode_i));
    bufp->fullBit(oldp+771,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__full_o));
    bufp->fullBit(oldp+772,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__empty_o));
    bufp->fullBit(oldp+773,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__threshold_o));
    bufp->fullWData(oldp+774,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__data_i),101);
    bufp->fullBit(oldp+778,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__push_i));
    bufp->fullWData(oldp+779,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__data_o),101);
    bufp->fullBit(oldp+783,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__pop_i));
    bufp->fullBit(oldp+784,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__clk_i));
    bufp->fullBit(oldp+785,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__rst_ni));
    bufp->fullBit(oldp+786,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__flush_i));
    bufp->fullBit(oldp+787,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__testmode_i));
    bufp->fullBit(oldp+788,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__full_o));
    bufp->fullBit(oldp+789,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__empty_o));
    bufp->fullBit(oldp+790,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__alm_full_o));
    bufp->fullBit(oldp+791,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__alm_empty_o));
    bufp->fullWData(oldp+792,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__data_i),101);
    bufp->fullBit(oldp+796,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__push_i));
    bufp->fullWData(oldp+797,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__data_o),101);
    bufp->fullBit(oldp+801,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__pop_i));
    bufp->fullBit(oldp+802,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__usage));
    bufp->fullBit(oldp+803,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__clk_i));
    bufp->fullBit(oldp+804,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__rst_ni));
    bufp->fullBit(oldp+805,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__flush_i));
    bufp->fullBit(oldp+806,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__testmode_i));
    bufp->fullBit(oldp+807,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__full_o));
    bufp->fullBit(oldp+808,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__empty_o));
    bufp->fullBit(oldp+809,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__usage_o));
    bufp->fullWData(oldp+810,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__data_i),101);
    bufp->fullBit(oldp+814,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__push_i));
    bufp->fullWData(oldp+815,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__data_o),101);
    bufp->fullBit(oldp+819,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__pop_i));
    bufp->fullBit(oldp+820,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__gate_clock));
    bufp->fullBit(oldp+821,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__read_pointer_n));
    bufp->fullBit(oldp+822,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__read_pointer_q));
    bufp->fullBit(oldp+823,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__write_pointer_n));
    bufp->fullBit(oldp+824,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__write_pointer_q));
    bufp->fullCData(oldp+825,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__status_cnt_n),2);
    bufp->fullCData(oldp+826,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__status_cnt_q),2);
    __Vtemp_3[0U] = vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[0U];
    __Vtemp_3[1U] = vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[1U];
    __Vtemp_3[2U] = vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[2U];
    __Vtemp_3[3U] = (0x1fU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[3U]);
    bufp->fullWData(oldp+827,(__Vtemp_3),101);
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
    bufp->fullWData(oldp+831,(__Vtemp_6),101);
    __Vtemp_9[0U] = vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[0U];
    __Vtemp_9[1U] = vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[1U];
    __Vtemp_9[2U] = vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[2U];
    __Vtemp_9[3U] = (0x1fU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[3U]);
    bufp->fullWData(oldp+835,(__Vtemp_9),101);
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
    bufp->fullWData(oldp+839,(__Vtemp_12),101);
    bufp->fullBit(oldp+843,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__clk_i));
    bufp->fullBit(oldp+844,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__rst_ni));
    bufp->fullBit(oldp+845,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__test_en_i));
    bufp->fullBit(oldp+846,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__slave_valid_i));
    bufp->fullQData(oldp+847,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__slave_addr_i),64);
    bufp->fullCData(oldp+849,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__slave_prot_i),3);
    bufp->fullCData(oldp+850,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__slave_region_i),4);
    bufp->fullCData(oldp+851,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__slave_len_i),8);
    bufp->fullCData(oldp+852,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__slave_size_i),3);
    bufp->fullCData(oldp+853,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__slave_burst_i),2);
    bufp->fullBit(oldp+854,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__slave_lock_i));
    bufp->fullCData(oldp+855,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__slave_cache_i),4);
    bufp->fullCData(oldp+856,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__slave_qos_i),4);
    bufp->fullCData(oldp+857,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__slave_id_i),4);
    bufp->fullCData(oldp+858,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__slave_user_i),4);
    bufp->fullBit(oldp+859,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__slave_ready_o));
    bufp->fullBit(oldp+860,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__master_valid_o));
    bufp->fullQData(oldp+861,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__master_addr_o),64);
    bufp->fullCData(oldp+863,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__master_prot_o),3);
    bufp->fullCData(oldp+864,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__master_region_o),4);
    bufp->fullCData(oldp+865,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__master_len_o),8);
    bufp->fullCData(oldp+866,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__master_size_o),3);
    bufp->fullCData(oldp+867,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__master_burst_o),2);
    bufp->fullBit(oldp+868,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__master_lock_o));
    bufp->fullCData(oldp+869,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__master_cache_o),4);
    bufp->fullCData(oldp+870,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__master_qos_o),4);
    bufp->fullCData(oldp+871,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__master_id_o),4);
    bufp->fullCData(oldp+872,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__master_user_o),4);
    bufp->fullBit(oldp+873,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__master_ready_i));
    bufp->fullWData(oldp+874,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__s_data_in),101);
    bufp->fullWData(oldp+878,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__s_data_out),101);
    bufp->fullBit(oldp+882,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__clk_i));
    bufp->fullBit(oldp+883,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__rst_ni));
    bufp->fullBit(oldp+884,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__testmode_i));
    bufp->fullBit(oldp+885,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__valid_i));
    bufp->fullBit(oldp+886,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__ready_o));
    bufp->fullWData(oldp+887,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__data_i),101);
    bufp->fullBit(oldp+891,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__ready_i));
    bufp->fullBit(oldp+892,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__valid_o));
    bufp->fullWData(oldp+893,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__data_o),101);
    bufp->fullBit(oldp+897,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__full));
    bufp->fullBit(oldp+898,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__empty));
    bufp->fullBit(oldp+899,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__clk_i));
    bufp->fullBit(oldp+900,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__rst_ni));
    bufp->fullBit(oldp+901,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__flush_i));
    bufp->fullBit(oldp+902,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__testmode_i));
    bufp->fullBit(oldp+903,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__full_o));
    bufp->fullBit(oldp+904,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__empty_o));
    bufp->fullBit(oldp+905,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__threshold_o));
    bufp->fullWData(oldp+906,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__data_i),101);
    bufp->fullBit(oldp+910,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__push_i));
    bufp->fullWData(oldp+911,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__data_o),101);
    bufp->fullBit(oldp+915,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__pop_i));
    bufp->fullBit(oldp+916,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__clk_i));
    bufp->fullBit(oldp+917,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__rst_ni));
    bufp->fullBit(oldp+918,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__flush_i));
    bufp->fullBit(oldp+919,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__testmode_i));
    bufp->fullBit(oldp+920,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__full_o));
    bufp->fullBit(oldp+921,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__empty_o));
    bufp->fullBit(oldp+922,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__alm_full_o));
    bufp->fullBit(oldp+923,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__alm_empty_o));
    bufp->fullWData(oldp+924,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__data_i),101);
    bufp->fullBit(oldp+928,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__push_i));
    bufp->fullWData(oldp+929,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__data_o),101);
    bufp->fullBit(oldp+933,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__pop_i));
    bufp->fullBit(oldp+934,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__usage));
    bufp->fullBit(oldp+935,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__clk_i));
    bufp->fullBit(oldp+936,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__rst_ni));
    bufp->fullBit(oldp+937,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__flush_i));
    bufp->fullBit(oldp+938,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__testmode_i));
    bufp->fullBit(oldp+939,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__full_o));
    bufp->fullBit(oldp+940,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__empty_o));
    bufp->fullBit(oldp+941,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__usage_o));
    bufp->fullWData(oldp+942,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__data_i),101);
    bufp->fullBit(oldp+946,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__push_i));
    bufp->fullWData(oldp+947,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__data_o),101);
    bufp->fullBit(oldp+951,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__pop_i));
    bufp->fullBit(oldp+952,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__gate_clock));
    bufp->fullBit(oldp+953,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__read_pointer_n));
    bufp->fullBit(oldp+954,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__read_pointer_q));
    bufp->fullBit(oldp+955,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__write_pointer_n));
    bufp->fullBit(oldp+956,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__write_pointer_q));
    bufp->fullCData(oldp+957,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__status_cnt_n),2);
    bufp->fullCData(oldp+958,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__status_cnt_q),2);
    __Vtemp_15[0U] = vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[0U];
    __Vtemp_15[1U] = vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[1U];
    __Vtemp_15[2U] = vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[2U];
    __Vtemp_15[3U] = (0x1fU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[3U]);
    bufp->fullWData(oldp+959,(__Vtemp_15),101);
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
    bufp->fullWData(oldp+963,(__Vtemp_18),101);
    __Vtemp_21[0U] = vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[0U];
    __Vtemp_21[1U] = vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[1U];
    __Vtemp_21[2U] = vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[2U];
    __Vtemp_21[3U] = (0x1fU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[3U]);
    bufp->fullWData(oldp+967,(__Vtemp_21),101);
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
    bufp->fullWData(oldp+971,(__Vtemp_24),101);
    bufp->fullBit(oldp+975,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__clk_i));
    bufp->fullBit(oldp+976,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__rst_ni));
    bufp->fullBit(oldp+977,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__test_en_i));
    bufp->fullBit(oldp+978,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__slave_valid_i));
    bufp->fullCData(oldp+979,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__slave_resp_i),2);
    bufp->fullCData(oldp+980,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__slave_id_i),4);
    bufp->fullCData(oldp+981,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__slave_user_i),4);
    bufp->fullBit(oldp+982,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__slave_ready_o));
    bufp->fullBit(oldp+983,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__master_valid_o));
    bufp->fullCData(oldp+984,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__master_resp_o),2);
    bufp->fullCData(oldp+985,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__master_id_o),4);
    bufp->fullCData(oldp+986,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__master_user_o),4);
    bufp->fullBit(oldp+987,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__master_ready_i));
    bufp->fullSData(oldp+988,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__s_data_in),10);
    bufp->fullSData(oldp+989,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__s_data_out),10);
    bufp->fullBit(oldp+990,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__clk_i));
    bufp->fullBit(oldp+991,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__rst_ni));
    bufp->fullBit(oldp+992,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__testmode_i));
    bufp->fullBit(oldp+993,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__valid_i));
    bufp->fullBit(oldp+994,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__ready_o));
    bufp->fullSData(oldp+995,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__data_i),10);
    bufp->fullBit(oldp+996,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__ready_i));
    bufp->fullBit(oldp+997,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__valid_o));
    bufp->fullSData(oldp+998,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__data_o),10);
    bufp->fullBit(oldp+999,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__full));
    bufp->fullBit(oldp+1000,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__empty));
    bufp->fullBit(oldp+1001,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__clk_i));
    bufp->fullBit(oldp+1002,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__rst_ni));
    bufp->fullBit(oldp+1003,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__flush_i));
    bufp->fullBit(oldp+1004,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__testmode_i));
    bufp->fullBit(oldp+1005,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__full_o));
    bufp->fullBit(oldp+1006,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__empty_o));
    bufp->fullBit(oldp+1007,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__threshold_o));
    bufp->fullSData(oldp+1008,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__data_i),10);
    bufp->fullBit(oldp+1009,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__push_i));
    bufp->fullSData(oldp+1010,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__data_o),10);
    bufp->fullBit(oldp+1011,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__pop_i));
    bufp->fullBit(oldp+1012,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__clk_i));
    bufp->fullBit(oldp+1013,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__rst_ni));
    bufp->fullBit(oldp+1014,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__flush_i));
    bufp->fullBit(oldp+1015,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__testmode_i));
    bufp->fullBit(oldp+1016,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__full_o));
    bufp->fullBit(oldp+1017,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__empty_o));
    bufp->fullBit(oldp+1018,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__alm_full_o));
    bufp->fullBit(oldp+1019,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__alm_empty_o));
    bufp->fullSData(oldp+1020,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__data_i),10);
    bufp->fullBit(oldp+1021,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__push_i));
    bufp->fullSData(oldp+1022,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__data_o),10);
    bufp->fullBit(oldp+1023,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__pop_i));
    bufp->fullBit(oldp+1024,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__usage));
    bufp->fullBit(oldp+1025,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__clk_i));
    bufp->fullBit(oldp+1026,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__rst_ni));
    bufp->fullBit(oldp+1027,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__flush_i));
    bufp->fullBit(oldp+1028,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__testmode_i));
    bufp->fullBit(oldp+1029,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__full_o));
    bufp->fullBit(oldp+1030,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__empty_o));
    bufp->fullBit(oldp+1031,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__usage_o));
    bufp->fullSData(oldp+1032,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__data_i),10);
    bufp->fullBit(oldp+1033,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__push_i));
    bufp->fullSData(oldp+1034,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__data_o),10);
    bufp->fullBit(oldp+1035,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__pop_i));
    bufp->fullBit(oldp+1036,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__gate_clock));
    bufp->fullBit(oldp+1037,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__read_pointer_n));
    bufp->fullBit(oldp+1038,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__read_pointer_q));
    bufp->fullBit(oldp+1039,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__write_pointer_n));
    bufp->fullBit(oldp+1040,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__write_pointer_q));
    bufp->fullCData(oldp+1041,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__status_cnt_n),2);
    bufp->fullCData(oldp+1042,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__status_cnt_q),2);
    bufp->fullSData(oldp+1043,((0x3ffU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n)),10);
    bufp->fullSData(oldp+1044,((0x3ffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n 
                                          >> 0xaU))),10);
    bufp->fullSData(oldp+1045,((0x3ffU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q)),10);
    bufp->fullSData(oldp+1046,((0x3ffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q 
                                          >> 0xaU))),10);
    bufp->fullBit(oldp+1047,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__clk_i));
    bufp->fullBit(oldp+1048,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__rst_ni));
    bufp->fullBit(oldp+1049,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__test_en_i));
    bufp->fullBit(oldp+1050,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__slave_valid_i));
    bufp->fullQData(oldp+1051,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__slave_data_i),64);
    bufp->fullCData(oldp+1053,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__slave_resp_i),2);
    bufp->fullCData(oldp+1054,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__slave_user_i),4);
    bufp->fullCData(oldp+1055,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__slave_id_i),4);
    bufp->fullBit(oldp+1056,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__slave_last_i));
    bufp->fullBit(oldp+1057,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__slave_ready_o));
    bufp->fullBit(oldp+1058,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__master_valid_o));
    bufp->fullQData(oldp+1059,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__master_data_o),64);
    bufp->fullCData(oldp+1061,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__master_resp_o),2);
    bufp->fullCData(oldp+1062,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__master_user_o),4);
    bufp->fullCData(oldp+1063,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__master_id_o),4);
    bufp->fullBit(oldp+1064,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__master_last_o));
    bufp->fullBit(oldp+1065,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__master_ready_i));
    bufp->fullWData(oldp+1066,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__s_data_in),75);
    bufp->fullWData(oldp+1069,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__s_data_out),75);
    bufp->fullBit(oldp+1072,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__clk_i));
    bufp->fullBit(oldp+1073,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__rst_ni));
    bufp->fullBit(oldp+1074,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__testmode_i));
    bufp->fullBit(oldp+1075,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__valid_i));
    bufp->fullBit(oldp+1076,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__ready_o));
    bufp->fullWData(oldp+1077,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__data_i),75);
    bufp->fullBit(oldp+1080,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__ready_i));
    bufp->fullBit(oldp+1081,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__valid_o));
    bufp->fullWData(oldp+1082,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__data_o),75);
    bufp->fullBit(oldp+1085,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__full));
    bufp->fullBit(oldp+1086,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__empty));
    bufp->fullBit(oldp+1087,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__clk_i));
    bufp->fullBit(oldp+1088,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__rst_ni));
    bufp->fullBit(oldp+1089,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__flush_i));
    bufp->fullBit(oldp+1090,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__testmode_i));
    bufp->fullBit(oldp+1091,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__full_o));
    bufp->fullBit(oldp+1092,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__empty_o));
    bufp->fullBit(oldp+1093,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__threshold_o));
    bufp->fullWData(oldp+1094,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__data_i),75);
    bufp->fullBit(oldp+1097,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__push_i));
    bufp->fullWData(oldp+1098,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__data_o),75);
    bufp->fullBit(oldp+1101,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__pop_i));
    bufp->fullBit(oldp+1102,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__clk_i));
    bufp->fullBit(oldp+1103,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__rst_ni));
    bufp->fullBit(oldp+1104,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__flush_i));
    bufp->fullBit(oldp+1105,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__testmode_i));
    bufp->fullBit(oldp+1106,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__full_o));
    bufp->fullBit(oldp+1107,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__empty_o));
    bufp->fullBit(oldp+1108,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__alm_full_o));
    bufp->fullBit(oldp+1109,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__alm_empty_o));
    bufp->fullWData(oldp+1110,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__data_i),75);
    bufp->fullBit(oldp+1113,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__push_i));
    bufp->fullWData(oldp+1114,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__data_o),75);
    bufp->fullBit(oldp+1117,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__pop_i));
    bufp->fullBit(oldp+1118,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__usage));
    bufp->fullBit(oldp+1119,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__clk_i));
    bufp->fullBit(oldp+1120,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__rst_ni));
    bufp->fullBit(oldp+1121,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__flush_i));
    bufp->fullBit(oldp+1122,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__testmode_i));
    bufp->fullBit(oldp+1123,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__full_o));
    bufp->fullBit(oldp+1124,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__empty_o));
    bufp->fullBit(oldp+1125,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__usage_o));
    bufp->fullWData(oldp+1126,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__data_i),75);
    bufp->fullBit(oldp+1129,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__push_i));
    bufp->fullWData(oldp+1130,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__data_o),75);
    bufp->fullBit(oldp+1133,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__pop_i));
    bufp->fullBit(oldp+1134,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__gate_clock));
    bufp->fullBit(oldp+1135,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__read_pointer_n));
    bufp->fullBit(oldp+1136,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__read_pointer_q));
    bufp->fullBit(oldp+1137,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__write_pointer_n));
    bufp->fullBit(oldp+1138,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__write_pointer_q));
    bufp->fullCData(oldp+1139,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__status_cnt_n),2);
    bufp->fullCData(oldp+1140,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__status_cnt_q),2);
    __Vtemp_27[0U] = vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[0U];
    __Vtemp_27[1U] = vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[1U];
    __Vtemp_27[2U] = (0x7ffU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[2U]);
    bufp->fullWData(oldp+1141,(__Vtemp_27),75);
    __Vtemp_30[0U] = ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[3U] 
                       << 0x15U) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[2U] 
                                    >> 0xbU));
    __Vtemp_30[1U] = ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[4U] 
                       << 0x15U) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[3U] 
                                    >> 0xbU));
    __Vtemp_30[2U] = (0x7ffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[4U] 
                                >> 0xbU));
    bufp->fullWData(oldp+1144,(__Vtemp_30),75);
    __Vtemp_33[0U] = vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[0U];
    __Vtemp_33[1U] = vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[1U];
    __Vtemp_33[2U] = (0x7ffU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[2U]);
    bufp->fullWData(oldp+1147,(__Vtemp_33),75);
    __Vtemp_36[0U] = ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[3U] 
                       << 0x15U) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[2U] 
                                    >> 0xbU));
    __Vtemp_36[1U] = ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[4U] 
                       << 0x15U) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[3U] 
                                    >> 0xbU));
    __Vtemp_36[2U] = (0x7ffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[4U] 
                                >> 0xbU));
    bufp->fullWData(oldp+1150,(__Vtemp_36),75);
    bufp->fullBit(oldp+1153,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__clk_i));
    bufp->fullBit(oldp+1154,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__rst_ni));
    bufp->fullBit(oldp+1155,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__test_en_i));
    bufp->fullBit(oldp+1156,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__slave_valid_i));
    bufp->fullQData(oldp+1157,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__slave_data_i),64);
    bufp->fullCData(oldp+1159,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__slave_strb_i),8);
    bufp->fullCData(oldp+1160,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__slave_user_i),4);
    bufp->fullBit(oldp+1161,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__slave_last_i));
    bufp->fullBit(oldp+1162,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__slave_ready_o));
    bufp->fullBit(oldp+1163,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__master_valid_o));
    bufp->fullQData(oldp+1164,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__master_data_o),64);
    bufp->fullCData(oldp+1166,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__master_strb_o),8);
    bufp->fullCData(oldp+1167,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__master_user_o),4);
    bufp->fullBit(oldp+1168,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__master_last_o));
    bufp->fullBit(oldp+1169,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__master_ready_i));
    bufp->fullWData(oldp+1170,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__s_data_in),77);
    bufp->fullWData(oldp+1173,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__s_data_out),77);
    bufp->fullBit(oldp+1176,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__clk_i));
    bufp->fullBit(oldp+1177,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__rst_ni));
    bufp->fullBit(oldp+1178,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__testmode_i));
    bufp->fullBit(oldp+1179,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__valid_i));
    bufp->fullBit(oldp+1180,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__ready_o));
    bufp->fullWData(oldp+1181,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__data_i),77);
    bufp->fullBit(oldp+1184,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__ready_i));
    bufp->fullBit(oldp+1185,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__valid_o));
    bufp->fullWData(oldp+1186,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__data_o),77);
    bufp->fullBit(oldp+1189,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__full));
    bufp->fullBit(oldp+1190,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__empty));
    bufp->fullBit(oldp+1191,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__clk_i));
    bufp->fullBit(oldp+1192,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__rst_ni));
    bufp->fullBit(oldp+1193,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__flush_i));
    bufp->fullBit(oldp+1194,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__testmode_i));
    bufp->fullBit(oldp+1195,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__full_o));
    bufp->fullBit(oldp+1196,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__empty_o));
    bufp->fullBit(oldp+1197,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__threshold_o));
    bufp->fullWData(oldp+1198,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__data_i),77);
    bufp->fullBit(oldp+1201,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__push_i));
    bufp->fullWData(oldp+1202,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__data_o),77);
    bufp->fullBit(oldp+1205,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__pop_i));
    bufp->fullBit(oldp+1206,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__clk_i));
    bufp->fullBit(oldp+1207,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__rst_ni));
    bufp->fullBit(oldp+1208,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__flush_i));
    bufp->fullBit(oldp+1209,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__testmode_i));
    bufp->fullBit(oldp+1210,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__full_o));
    bufp->fullBit(oldp+1211,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__empty_o));
    bufp->fullBit(oldp+1212,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__alm_full_o));
    bufp->fullBit(oldp+1213,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__alm_empty_o));
    bufp->fullWData(oldp+1214,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__data_i),77);
    bufp->fullBit(oldp+1217,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__push_i));
    bufp->fullWData(oldp+1218,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__data_o),77);
    bufp->fullBit(oldp+1221,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__pop_i));
    bufp->fullBit(oldp+1222,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__usage));
    bufp->fullBit(oldp+1223,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__clk_i));
    bufp->fullBit(oldp+1224,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__rst_ni));
    bufp->fullBit(oldp+1225,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__flush_i));
    bufp->fullBit(oldp+1226,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__testmode_i));
    bufp->fullBit(oldp+1227,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__full_o));
    bufp->fullBit(oldp+1228,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__empty_o));
    bufp->fullBit(oldp+1229,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__usage_o));
    bufp->fullWData(oldp+1230,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__data_i),77);
    bufp->fullBit(oldp+1233,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__push_i));
    bufp->fullWData(oldp+1234,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__data_o),77);
    bufp->fullBit(oldp+1237,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__pop_i));
    bufp->fullBit(oldp+1238,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__gate_clock));
    bufp->fullBit(oldp+1239,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__read_pointer_n));
    bufp->fullBit(oldp+1240,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__read_pointer_q));
    bufp->fullBit(oldp+1241,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__write_pointer_n));
    bufp->fullBit(oldp+1242,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__write_pointer_q));
    bufp->fullCData(oldp+1243,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__status_cnt_n),2);
    bufp->fullCData(oldp+1244,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__status_cnt_q),2);
    __Vtemp_39[0U] = vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[0U];
    __Vtemp_39[1U] = vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[1U];
    __Vtemp_39[2U] = (0x1fffU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[2U]);
    bufp->fullWData(oldp+1245,(__Vtemp_39),77);
    __Vtemp_42[0U] = ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[3U] 
                       << 0x13U) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[2U] 
                                    >> 0xdU));
    __Vtemp_42[1U] = ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[4U] 
                       << 0x13U) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[3U] 
                                    >> 0xdU));
    __Vtemp_42[2U] = (0x1fffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_n[4U] 
                                 >> 0xdU));
    bufp->fullWData(oldp+1248,(__Vtemp_42),77);
    __Vtemp_45[0U] = vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[0U];
    __Vtemp_45[1U] = vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[1U];
    __Vtemp_45[2U] = (0x1fffU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[2U]);
    bufp->fullWData(oldp+1251,(__Vtemp_45),77);
    __Vtemp_48[0U] = ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[3U] 
                       << 0x13U) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[2U] 
                                    >> 0xdU));
    __Vtemp_48[1U] = ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[4U] 
                       << 0x13U) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[3U] 
                                    >> 0xdU));
    __Vtemp_48[2U] = (0x1fffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__i_fifo_v3__DOT__mem_q[4U] 
                                 >> 0xdU));
    bufp->fullWData(oldp+1254,(__Vtemp_48),77);
    bufp->fullBit(oldp+1257,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__clk_i));
    bufp->fullBit(oldp+1258,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__rst_ni));
    bufp->fullCData(oldp+1259,((0x3fU & (IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_req_i 
                                                 >> 0x26U)))),6);
    bufp->fullBit(oldp+1260,((1U & (IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_req_i 
                                            >> 0x25U)))));
    bufp->fullIData(oldp+1261,((IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_req_i 
                                        >> 5U))),32);
    bufp->fullCData(oldp+1262,((0xfU & (IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_req_i 
                                                >> 1U)))),4);
    bufp->fullBit(oldp+1263,((1U & (IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_req_i))));
    bufp->fullIData(oldp+1264,((IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_rsp_o 
                                        >> 2U))),32);
    bufp->fullBit(oldp+1265,((1U & (IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_rsp_o 
                                            >> 1U)))));
    bufp->fullBit(oldp+1266,((1U & (IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_rsp_o))));
    bufp->fullBit(oldp+1267,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg2hw[5U] 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1268,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg2hw[5U] 
                                    >> 0x12U))));
    bufp->fullBit(oldp+1269,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg2hw[5U] 
                                    >> 0x11U))));
    bufp->fullBit(oldp+1270,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg2hw[5U] 
                                    >> 0x10U))));
    bufp->fullBit(oldp+1271,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg2hw[5U] 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1272,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg2hw[5U] 
                                    >> 0xeU))));
    bufp->fullCData(oldp+1273,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg2hw[5U] 
                                         >> 6U))),8);
    bufp->fullCData(oldp+1274,((0xffU & ((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg2hw[5U] 
                                          << 2U) | 
                                         (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg2hw[4U] 
                                          >> 0x1eU)))),8);
    bufp->fullIData(oldp+1275,(((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg2hw[4U] 
                                 << 2U) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg2hw[3U] 
                                           >> 0x1eU))),32);
    bufp->fullIData(oldp+1276,(((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg2hw[3U] 
                                 << 2U) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg2hw[2U] 
                                           >> 0x1eU))),32);
    bufp->fullCData(oldp+1277,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg2hw[2U] 
                                         >> 0x16U))),8);
    bufp->fullCData(oldp+1278,((7U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg2hw[2U] 
                                      >> 0x13U))),3);
    bufp->fullCData(oldp+1279,((0xfU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg2hw[2U] 
                                        >> 0xfU))),4);
    bufp->fullIData(oldp+1280,(((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg2hw[2U] 
                                 << 0x11U) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg2hw[1U] 
                                              >> 0xfU))),32);
    bufp->fullIData(oldp+1281,(((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg2hw[1U] 
                                 << 0x11U) | (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg2hw[0U] 
                                              >> 0xfU))),32);
    bufp->fullCData(oldp+1282,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg2hw[0U] 
                                         >> 7U))),8);
    bufp->fullCData(oldp+1283,((7U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg2hw[0U] 
                                      >> 4U))),3);
    bufp->fullCData(oldp+1284,((0xfU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg2hw[0U])),4);
    bufp->fullBit(oldp+1285,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__hw2reg 
                                    >> 0x1dU))));
    bufp->fullBit(oldp+1286,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__hw2reg 
                                    >> 0x1cU))));
    bufp->fullBit(oldp+1287,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__hw2reg 
                                    >> 0x1bU))));
    bufp->fullBit(oldp+1288,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__hw2reg 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+1289,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__hw2reg 
                                    >> 0x19U))));
    bufp->fullBit(oldp+1290,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__hw2reg 
                                    >> 0x18U))));
    bufp->fullBit(oldp+1291,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__hw2reg 
                                    >> 0x17U))));
    bufp->fullBit(oldp+1292,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__hw2reg 
                                    >> 0x16U))));
    bufp->fullBit(oldp+1293,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__hw2reg 
                                    >> 0x15U))));
    bufp->fullBit(oldp+1294,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__hw2reg 
                                    >> 0x14U))));
    bufp->fullBit(oldp+1295,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__hw2reg 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1296,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__hw2reg 
                                    >> 0x12U))));
    bufp->fullCData(oldp+1297,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__hw2reg 
                                         >> 0xaU))),8);
    bufp->fullBit(oldp+1298,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__hw2reg 
                                    >> 9U))));
    bufp->fullCData(oldp+1299,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__hw2reg 
                                         >> 1U))),8);
    bufp->fullBit(oldp+1300,((1U & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__hw2reg)));
    bufp->fullBit(oldp+1301,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__devmode_i));
    bufp->fullBit(oldp+1302,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_we));
    bufp->fullBit(oldp+1303,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_re));
    bufp->fullCData(oldp+1304,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_addr),6);
    bufp->fullIData(oldp+1305,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_wdata),32);
    bufp->fullCData(oldp+1306,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_be),4);
    bufp->fullIData(oldp+1307,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_rdata),32);
    bufp->fullBit(oldp+1308,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_error));
    bufp->fullBit(oldp+1309,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__addrmiss));
    bufp->fullBit(oldp+1310,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__wr_err));
    bufp->fullIData(oldp+1311,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_rdata_next),32);
    bufp->fullCData(oldp+1312,((0x3fU & (IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_intf_req 
                                                 >> 0x26U)))),6);
    bufp->fullBit(oldp+1313,((1U & (IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_intf_req 
                                            >> 0x25U)))));
    bufp->fullIData(oldp+1314,((IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_intf_req 
                                        >> 5U))),32);
    bufp->fullCData(oldp+1315,((0xfU & (IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_intf_req 
                                                >> 1U)))),4);
    bufp->fullBit(oldp+1316,((1U & (IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_intf_req))));
    bufp->fullIData(oldp+1317,((IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_intf_rsp 
                                        >> 2U))),32);
    bufp->fullBit(oldp+1318,((1U & (IData)((vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_intf_rsp 
                                            >> 1U)))));
    bufp->fullBit(oldp+1319,((1U & (IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__reg_intf_rsp))));
    bufp->fullBit(oldp+1320,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__control_r_ready_qs));
    bufp->fullBit(oldp+1321,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__control_w_ready_qs));
    bufp->fullBit(oldp+1322,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__control_r_enable_qs));
    bufp->fullBit(oldp+1323,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__control_r_enable_wd));
    bufp->fullBit(oldp+1324,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__control_r_enable_we));
    bufp->fullBit(oldp+1325,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__control_w_enable_qs));
    bufp->fullBit(oldp+1326,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__control_w_enable_wd));
    bufp->fullBit(oldp+1327,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__control_w_enable_we));
    bufp->fullBit(oldp+1328,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__control_r_burst_qs));
    bufp->fullBit(oldp+1329,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__control_r_burst_wd));
    bufp->fullBit(oldp+1330,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__control_r_burst_we));
    bufp->fullBit(oldp+1331,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__control_w_burst_qs));
    bufp->fullBit(oldp+1332,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__control_w_burst_wd));
    bufp->fullBit(oldp+1333,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__control_w_burst_we));
    bufp->fullCData(oldp+1334,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__control_r_burst_len_qs),8);
    bufp->fullCData(oldp+1335,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__control_r_burst_len_wd),8);
    bufp->fullBit(oldp+1336,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__control_r_burst_len_we));
    bufp->fullCData(oldp+1337,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__control_w_burst_len_qs),8);
    bufp->fullCData(oldp+1338,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__control_w_burst_len_wd),8);
    bufp->fullBit(oldp+1339,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__control_w_burst_len_we));
    bufp->fullIData(oldp+1340,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__ar_addrl_qs),32);
    bufp->fullIData(oldp+1341,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__ar_addrl_wd),32);
    bufp->fullBit(oldp+1342,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__ar_addrl_we));
    bufp->fullIData(oldp+1343,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__ar_addrh_qs),32);
    bufp->fullIData(oldp+1344,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__ar_addrh_wd),32);
    bufp->fullBit(oldp+1345,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__ar_addrh_we));
    bufp->fullCData(oldp+1346,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__ar_cfg_len_qs),8);
    bufp->fullCData(oldp+1347,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__ar_cfg_len_wd),8);
    bufp->fullBit(oldp+1348,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__ar_cfg_len_we));
    bufp->fullCData(oldp+1349,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__ar_cfg_size_qs),3);
    bufp->fullCData(oldp+1350,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__ar_cfg_size_wd),3);
    bufp->fullBit(oldp+1351,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__ar_cfg_size_we));
    bufp->fullCData(oldp+1352,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__ar_cfg_nsaid_qs),4);
    bufp->fullCData(oldp+1353,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__ar_cfg_nsaid_wd),4);
    bufp->fullBit(oldp+1354,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__ar_cfg_nsaid_we));
    bufp->fullIData(oldp+1355,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__aw_addrl_qs),32);
    bufp->fullIData(oldp+1356,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__aw_addrl_wd),32);
    bufp->fullBit(oldp+1357,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__aw_addrl_we));
    bufp->fullIData(oldp+1358,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__aw_addrh_qs),32);
    bufp->fullIData(oldp+1359,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__aw_addrh_wd),32);
    bufp->fullBit(oldp+1360,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__aw_addrh_we));
    bufp->fullCData(oldp+1361,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__aw_cfg_len_qs),8);
    bufp->fullCData(oldp+1362,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__aw_cfg_len_wd),8);
    bufp->fullBit(oldp+1363,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__aw_cfg_len_we));
    bufp->fullCData(oldp+1364,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__aw_cfg_size_qs),3);
    bufp->fullCData(oldp+1365,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__aw_cfg_size_wd),3);
    bufp->fullBit(oldp+1366,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__aw_cfg_size_we));
    bufp->fullCData(oldp+1367,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__aw_cfg_nsaid_qs),4);
    bufp->fullCData(oldp+1368,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__aw_cfg_nsaid_wd),4);
    bufp->fullBit(oldp+1369,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__aw_cfg_nsaid_we));
    bufp->fullCData(oldp+1370,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__addr_hit),7);
    bufp->fullBit(oldp+1371,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__unused_wdata));
    bufp->fullBit(oldp+1372,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__unused_be));
    bufp->fullBit(oldp+1373,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrh__DOT__clk_i));
    bufp->fullBit(oldp+1374,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrh__DOT__rst_ni));
    bufp->fullBit(oldp+1375,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrh__DOT__we));
    bufp->fullIData(oldp+1376,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrh__DOT__wd),32);
    bufp->fullBit(oldp+1377,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrh__DOT__de));
    bufp->fullIData(oldp+1378,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrh__DOT__d),32);
    bufp->fullBit(oldp+1379,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrh__DOT__qe));
    bufp->fullIData(oldp+1380,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrh__DOT__q),32);
    bufp->fullIData(oldp+1381,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrh__DOT__qs),32);
    bufp->fullBit(oldp+1382,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrh__DOT__wr_en));
    bufp->fullIData(oldp+1383,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrh__DOT__wr_data),32);
    bufp->fullBit(oldp+1384,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrh__DOT__wr_en_data_arb__DOT__we));
    bufp->fullIData(oldp+1385,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrh__DOT__wr_en_data_arb__DOT__wd),32);
    bufp->fullBit(oldp+1386,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrh__DOT__wr_en_data_arb__DOT__de));
    bufp->fullIData(oldp+1387,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrh__DOT__wr_en_data_arb__DOT__d),32);
    bufp->fullIData(oldp+1388,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrh__DOT__wr_en_data_arb__DOT__q),32);
    bufp->fullBit(oldp+1389,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrh__DOT__wr_en_data_arb__DOT__wr_en));
    bufp->fullIData(oldp+1390,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrh__DOT__wr_en_data_arb__DOT__wr_data),32);
    bufp->fullIData(oldp+1391,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrh__DOT__wr_en_data_arb__DOT__gen_w__DOT__unused_q),32);
    bufp->fullBit(oldp+1392,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrl__DOT__clk_i));
    bufp->fullBit(oldp+1393,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrl__DOT__rst_ni));
    bufp->fullBit(oldp+1394,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrl__DOT__we));
    bufp->fullIData(oldp+1395,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrl__DOT__wd),32);
    bufp->fullBit(oldp+1396,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrl__DOT__de));
    bufp->fullIData(oldp+1397,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrl__DOT__d),32);
    bufp->fullBit(oldp+1398,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrl__DOT__qe));
    bufp->fullIData(oldp+1399,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrl__DOT__q),32);
    bufp->fullIData(oldp+1400,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrl__DOT__qs),32);
    bufp->fullBit(oldp+1401,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrl__DOT__wr_en));
    bufp->fullIData(oldp+1402,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrl__DOT__wr_data),32);
    bufp->fullBit(oldp+1403,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrl__DOT__wr_en_data_arb__DOT__we));
    bufp->fullIData(oldp+1404,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrl__DOT__wr_en_data_arb__DOT__wd),32);
    bufp->fullBit(oldp+1405,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrl__DOT__wr_en_data_arb__DOT__de));
    bufp->fullIData(oldp+1406,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrl__DOT__wr_en_data_arb__DOT__d),32);
    bufp->fullIData(oldp+1407,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrl__DOT__wr_en_data_arb__DOT__q),32);
    bufp->fullBit(oldp+1408,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrl__DOT__wr_en_data_arb__DOT__wr_en));
    bufp->fullIData(oldp+1409,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrl__DOT__wr_en_data_arb__DOT__wr_data),32);
    bufp->fullIData(oldp+1410,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrl__DOT__wr_en_data_arb__DOT__gen_w__DOT__unused_q),32);
    bufp->fullBit(oldp+1411,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_len__DOT__clk_i));
    bufp->fullBit(oldp+1412,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_len__DOT__rst_ni));
    bufp->fullBit(oldp+1413,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_len__DOT__we));
    bufp->fullCData(oldp+1414,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_len__DOT__wd),8);
    bufp->fullBit(oldp+1415,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_len__DOT__de));
    bufp->fullCData(oldp+1416,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_len__DOT__d),8);
    bufp->fullBit(oldp+1417,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_len__DOT__qe));
    bufp->fullCData(oldp+1418,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_len__DOT__q),8);
    bufp->fullCData(oldp+1419,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_len__DOT__qs),8);
    bufp->fullBit(oldp+1420,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_len__DOT__wr_en));
    bufp->fullCData(oldp+1421,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_len__DOT__wr_data),8);
    bufp->fullBit(oldp+1422,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_len__DOT__wr_en_data_arb__DOT__we));
    bufp->fullCData(oldp+1423,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_len__DOT__wr_en_data_arb__DOT__wd),8);
    bufp->fullBit(oldp+1424,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_len__DOT__wr_en_data_arb__DOT__de));
    bufp->fullCData(oldp+1425,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_len__DOT__wr_en_data_arb__DOT__d),8);
    bufp->fullCData(oldp+1426,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_len__DOT__wr_en_data_arb__DOT__q),8);
    bufp->fullBit(oldp+1427,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_len__DOT__wr_en_data_arb__DOT__wr_en));
    bufp->fullCData(oldp+1428,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_len__DOT__wr_en_data_arb__DOT__wr_data),8);
    bufp->fullCData(oldp+1429,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_len__DOT__wr_en_data_arb__DOT__gen_w__DOT__unused_q),8);
    bufp->fullBit(oldp+1430,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_nsaid__DOT__clk_i));
    bufp->fullBit(oldp+1431,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_nsaid__DOT__rst_ni));
    bufp->fullBit(oldp+1432,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_nsaid__DOT__we));
    bufp->fullCData(oldp+1433,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_nsaid__DOT__wd),4);
    bufp->fullBit(oldp+1434,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_nsaid__DOT__de));
    bufp->fullCData(oldp+1435,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_nsaid__DOT__d),4);
    bufp->fullBit(oldp+1436,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_nsaid__DOT__qe));
    bufp->fullCData(oldp+1437,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_nsaid__DOT__q),4);
    bufp->fullCData(oldp+1438,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_nsaid__DOT__qs),4);
    bufp->fullBit(oldp+1439,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_nsaid__DOT__wr_en));
    bufp->fullCData(oldp+1440,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_nsaid__DOT__wr_data),4);
    bufp->fullBit(oldp+1441,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_nsaid__DOT__wr_en_data_arb__DOT__we));
    bufp->fullCData(oldp+1442,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_nsaid__DOT__wr_en_data_arb__DOT__wd),4);
    bufp->fullBit(oldp+1443,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_nsaid__DOT__wr_en_data_arb__DOT__de));
    bufp->fullCData(oldp+1444,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_nsaid__DOT__wr_en_data_arb__DOT__d),4);
    bufp->fullCData(oldp+1445,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_nsaid__DOT__wr_en_data_arb__DOT__q),4);
    bufp->fullBit(oldp+1446,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_nsaid__DOT__wr_en_data_arb__DOT__wr_en));
    bufp->fullCData(oldp+1447,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_nsaid__DOT__wr_en_data_arb__DOT__wr_data),4);
    bufp->fullCData(oldp+1448,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_nsaid__DOT__wr_en_data_arb__DOT__gen_w__DOT__unused_q),4);
    bufp->fullBit(oldp+1449,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_size__DOT__clk_i));
    bufp->fullBit(oldp+1450,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_size__DOT__rst_ni));
    bufp->fullBit(oldp+1451,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_size__DOT__we));
    bufp->fullCData(oldp+1452,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_size__DOT__wd),3);
    bufp->fullBit(oldp+1453,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_size__DOT__de));
    bufp->fullCData(oldp+1454,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_size__DOT__d),3);
    bufp->fullBit(oldp+1455,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_size__DOT__qe));
    bufp->fullCData(oldp+1456,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_size__DOT__q),3);
    bufp->fullCData(oldp+1457,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_size__DOT__qs),3);
    bufp->fullBit(oldp+1458,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_size__DOT__wr_en));
    bufp->fullCData(oldp+1459,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_size__DOT__wr_data),3);
    bufp->fullBit(oldp+1460,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_size__DOT__wr_en_data_arb__DOT__we));
    bufp->fullCData(oldp+1461,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_size__DOT__wr_en_data_arb__DOT__wd),3);
    bufp->fullBit(oldp+1462,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_size__DOT__wr_en_data_arb__DOT__de));
    bufp->fullCData(oldp+1463,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_size__DOT__wr_en_data_arb__DOT__d),3);
    bufp->fullCData(oldp+1464,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_size__DOT__wr_en_data_arb__DOT__q),3);
    bufp->fullBit(oldp+1465,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_size__DOT__wr_en_data_arb__DOT__wr_en));
    bufp->fullCData(oldp+1466,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_size__DOT__wr_en_data_arb__DOT__wr_data),3);
    bufp->fullCData(oldp+1467,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_size__DOT__wr_en_data_arb__DOT__gen_w__DOT__unused_q),3);
    bufp->fullBit(oldp+1468,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrh__DOT__clk_i));
    bufp->fullBit(oldp+1469,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrh__DOT__rst_ni));
    bufp->fullBit(oldp+1470,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrh__DOT__we));
    bufp->fullIData(oldp+1471,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrh__DOT__wd),32);
    bufp->fullBit(oldp+1472,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrh__DOT__de));
    bufp->fullIData(oldp+1473,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrh__DOT__d),32);
    bufp->fullBit(oldp+1474,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrh__DOT__qe));
    bufp->fullIData(oldp+1475,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrh__DOT__q),32);
    bufp->fullIData(oldp+1476,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrh__DOT__qs),32);
    bufp->fullBit(oldp+1477,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrh__DOT__wr_en));
    bufp->fullIData(oldp+1478,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrh__DOT__wr_data),32);
    bufp->fullBit(oldp+1479,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrh__DOT__wr_en_data_arb__DOT__we));
    bufp->fullIData(oldp+1480,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrh__DOT__wr_en_data_arb__DOT__wd),32);
    bufp->fullBit(oldp+1481,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrh__DOT__wr_en_data_arb__DOT__de));
    bufp->fullIData(oldp+1482,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrh__DOT__wr_en_data_arb__DOT__d),32);
    bufp->fullIData(oldp+1483,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrh__DOT__wr_en_data_arb__DOT__q),32);
    bufp->fullBit(oldp+1484,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrh__DOT__wr_en_data_arb__DOT__wr_en));
    bufp->fullIData(oldp+1485,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrh__DOT__wr_en_data_arb__DOT__wr_data),32);
    bufp->fullIData(oldp+1486,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrh__DOT__wr_en_data_arb__DOT__gen_w__DOT__unused_q),32);
    bufp->fullBit(oldp+1487,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrl__DOT__clk_i));
    bufp->fullBit(oldp+1488,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrl__DOT__rst_ni));
    bufp->fullBit(oldp+1489,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrl__DOT__we));
    bufp->fullIData(oldp+1490,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrl__DOT__wd),32);
    bufp->fullBit(oldp+1491,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrl__DOT__de));
    bufp->fullIData(oldp+1492,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrl__DOT__d),32);
    bufp->fullBit(oldp+1493,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrl__DOT__qe));
    bufp->fullIData(oldp+1494,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrl__DOT__q),32);
    bufp->fullIData(oldp+1495,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrl__DOT__qs),32);
    bufp->fullBit(oldp+1496,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrl__DOT__wr_en));
    bufp->fullIData(oldp+1497,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrl__DOT__wr_data),32);
    bufp->fullBit(oldp+1498,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrl__DOT__wr_en_data_arb__DOT__we));
    bufp->fullIData(oldp+1499,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrl__DOT__wr_en_data_arb__DOT__wd),32);
    bufp->fullBit(oldp+1500,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrl__DOT__wr_en_data_arb__DOT__de));
    bufp->fullIData(oldp+1501,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrl__DOT__wr_en_data_arb__DOT__d),32);
    bufp->fullIData(oldp+1502,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrl__DOT__wr_en_data_arb__DOT__q),32);
    bufp->fullBit(oldp+1503,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrl__DOT__wr_en_data_arb__DOT__wr_en));
    bufp->fullIData(oldp+1504,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrl__DOT__wr_en_data_arb__DOT__wr_data),32);
    bufp->fullIData(oldp+1505,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrl__DOT__wr_en_data_arb__DOT__gen_w__DOT__unused_q),32);
    bufp->fullBit(oldp+1506,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_len__DOT__clk_i));
    bufp->fullBit(oldp+1507,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_len__DOT__rst_ni));
    bufp->fullBit(oldp+1508,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_len__DOT__we));
    bufp->fullCData(oldp+1509,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_len__DOT__wd),8);
    bufp->fullBit(oldp+1510,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_len__DOT__de));
    bufp->fullCData(oldp+1511,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_len__DOT__d),8);
    bufp->fullBit(oldp+1512,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_len__DOT__qe));
    bufp->fullCData(oldp+1513,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_len__DOT__q),8);
    bufp->fullCData(oldp+1514,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_len__DOT__qs),8);
    bufp->fullBit(oldp+1515,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_len__DOT__wr_en));
    bufp->fullCData(oldp+1516,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_len__DOT__wr_data),8);
    bufp->fullBit(oldp+1517,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_len__DOT__wr_en_data_arb__DOT__we));
    bufp->fullCData(oldp+1518,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_len__DOT__wr_en_data_arb__DOT__wd),8);
    bufp->fullBit(oldp+1519,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_len__DOT__wr_en_data_arb__DOT__de));
    bufp->fullCData(oldp+1520,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_len__DOT__wr_en_data_arb__DOT__d),8);
    bufp->fullCData(oldp+1521,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_len__DOT__wr_en_data_arb__DOT__q),8);
    bufp->fullBit(oldp+1522,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_len__DOT__wr_en_data_arb__DOT__wr_en));
    bufp->fullCData(oldp+1523,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_len__DOT__wr_en_data_arb__DOT__wr_data),8);
    bufp->fullCData(oldp+1524,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_len__DOT__wr_en_data_arb__DOT__gen_w__DOT__unused_q),8);
    bufp->fullBit(oldp+1525,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_nsaid__DOT__clk_i));
    bufp->fullBit(oldp+1526,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_nsaid__DOT__rst_ni));
    bufp->fullBit(oldp+1527,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_nsaid__DOT__we));
    bufp->fullCData(oldp+1528,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_nsaid__DOT__wd),4);
    bufp->fullBit(oldp+1529,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_nsaid__DOT__de));
    bufp->fullCData(oldp+1530,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_nsaid__DOT__d),4);
    bufp->fullBit(oldp+1531,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_nsaid__DOT__qe));
    bufp->fullCData(oldp+1532,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_nsaid__DOT__q),4);
    bufp->fullCData(oldp+1533,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_nsaid__DOT__qs),4);
    bufp->fullBit(oldp+1534,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_nsaid__DOT__wr_en));
    bufp->fullCData(oldp+1535,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_nsaid__DOT__wr_data),4);
    bufp->fullBit(oldp+1536,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_nsaid__DOT__wr_en_data_arb__DOT__we));
    bufp->fullCData(oldp+1537,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_nsaid__DOT__wr_en_data_arb__DOT__wd),4);
    bufp->fullBit(oldp+1538,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_nsaid__DOT__wr_en_data_arb__DOT__de));
    bufp->fullCData(oldp+1539,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_nsaid__DOT__wr_en_data_arb__DOT__d),4);
    bufp->fullCData(oldp+1540,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_nsaid__DOT__wr_en_data_arb__DOT__q),4);
    bufp->fullBit(oldp+1541,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_nsaid__DOT__wr_en_data_arb__DOT__wr_en));
    bufp->fullCData(oldp+1542,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_nsaid__DOT__wr_en_data_arb__DOT__wr_data),4);
    bufp->fullCData(oldp+1543,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_nsaid__DOT__wr_en_data_arb__DOT__gen_w__DOT__unused_q),4);
    bufp->fullBit(oldp+1544,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_size__DOT__clk_i));
    bufp->fullBit(oldp+1545,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_size__DOT__rst_ni));
    bufp->fullBit(oldp+1546,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_size__DOT__we));
    bufp->fullCData(oldp+1547,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_size__DOT__wd),3);
    bufp->fullBit(oldp+1548,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_size__DOT__de));
    bufp->fullCData(oldp+1549,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_size__DOT__d),3);
    bufp->fullBit(oldp+1550,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_size__DOT__qe));
    bufp->fullCData(oldp+1551,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_size__DOT__q),3);
    bufp->fullCData(oldp+1552,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_size__DOT__qs),3);
    bufp->fullBit(oldp+1553,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_size__DOT__wr_en));
    bufp->fullCData(oldp+1554,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_size__DOT__wr_data),3);
    bufp->fullBit(oldp+1555,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_size__DOT__wr_en_data_arb__DOT__we));
    bufp->fullCData(oldp+1556,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_size__DOT__wr_en_data_arb__DOT__wd),3);
    bufp->fullBit(oldp+1557,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_size__DOT__wr_en_data_arb__DOT__de));
    bufp->fullCData(oldp+1558,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_size__DOT__wr_en_data_arb__DOT__d),3);
    bufp->fullCData(oldp+1559,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_size__DOT__wr_en_data_arb__DOT__q),3);
    bufp->fullBit(oldp+1560,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_size__DOT__wr_en_data_arb__DOT__wr_en));
    bufp->fullCData(oldp+1561,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_size__DOT__wr_en_data_arb__DOT__wr_data),3);
    bufp->fullCData(oldp+1562,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_size__DOT__wr_en_data_arb__DOT__gen_w__DOT__unused_q),3);
    bufp->fullBit(oldp+1563,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst__DOT__clk_i));
    bufp->fullBit(oldp+1564,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst__DOT__rst_ni));
    bufp->fullBit(oldp+1565,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst__DOT__we));
    bufp->fullBit(oldp+1566,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst__DOT__wd));
    bufp->fullBit(oldp+1567,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst__DOT__de));
    bufp->fullBit(oldp+1568,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst__DOT__d));
    bufp->fullBit(oldp+1569,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst__DOT__qe));
    bufp->fullBit(oldp+1570,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst__DOT__q));
    bufp->fullBit(oldp+1571,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst__DOT__qs));
    bufp->fullBit(oldp+1572,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst__DOT__wr_en));
    bufp->fullBit(oldp+1573,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst__DOT__wr_data));
    bufp->fullBit(oldp+1574,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst__DOT__wr_en_data_arb__DOT__we));
    bufp->fullBit(oldp+1575,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst__DOT__wr_en_data_arb__DOT__wd));
    bufp->fullBit(oldp+1576,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst__DOT__wr_en_data_arb__DOT__de));
    bufp->fullBit(oldp+1577,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst__DOT__wr_en_data_arb__DOT__d));
    bufp->fullBit(oldp+1578,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst__DOT__wr_en_data_arb__DOT__q));
    bufp->fullBit(oldp+1579,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst__DOT__wr_en_data_arb__DOT__wr_en));
    bufp->fullBit(oldp+1580,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst__DOT__wr_en_data_arb__DOT__wr_data));
    bufp->fullBit(oldp+1581,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst__DOT__wr_en_data_arb__DOT__gen_w__DOT__unused_q));
    bufp->fullBit(oldp+1582,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst_len__DOT__clk_i));
    bufp->fullBit(oldp+1583,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst_len__DOT__rst_ni));
    bufp->fullBit(oldp+1584,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst_len__DOT__we));
    bufp->fullCData(oldp+1585,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst_len__DOT__wd),8);
    bufp->fullBit(oldp+1586,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst_len__DOT__de));
    bufp->fullCData(oldp+1587,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst_len__DOT__d),8);
    bufp->fullBit(oldp+1588,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst_len__DOT__qe));
    bufp->fullCData(oldp+1589,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst_len__DOT__q),8);
    bufp->fullCData(oldp+1590,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst_len__DOT__qs),8);
    bufp->fullBit(oldp+1591,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst_len__DOT__wr_en));
    bufp->fullCData(oldp+1592,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst_len__DOT__wr_data),8);
    bufp->fullBit(oldp+1593,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst_len__DOT__wr_en_data_arb__DOT__we));
    bufp->fullCData(oldp+1594,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst_len__DOT__wr_en_data_arb__DOT__wd),8);
    bufp->fullBit(oldp+1595,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst_len__DOT__wr_en_data_arb__DOT__de));
    bufp->fullCData(oldp+1596,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst_len__DOT__wr_en_data_arb__DOT__d),8);
    bufp->fullCData(oldp+1597,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst_len__DOT__wr_en_data_arb__DOT__q),8);
    bufp->fullBit(oldp+1598,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst_len__DOT__wr_en_data_arb__DOT__wr_en));
    bufp->fullCData(oldp+1599,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst_len__DOT__wr_en_data_arb__DOT__wr_data),8);
    bufp->fullCData(oldp+1600,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_burst_len__DOT__wr_en_data_arb__DOT__gen_w__DOT__unused_q),8);
    bufp->fullBit(oldp+1601,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_enable__DOT__clk_i));
    bufp->fullBit(oldp+1602,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_enable__DOT__rst_ni));
    bufp->fullBit(oldp+1603,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_enable__DOT__we));
    bufp->fullBit(oldp+1604,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_enable__DOT__wd));
    bufp->fullBit(oldp+1605,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_enable__DOT__de));
    bufp->fullBit(oldp+1606,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_enable__DOT__d));
    bufp->fullBit(oldp+1607,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_enable__DOT__qe));
    bufp->fullBit(oldp+1608,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_enable__DOT__q));
    bufp->fullBit(oldp+1609,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_enable__DOT__qs));
    bufp->fullBit(oldp+1610,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_enable__DOT__wr_en));
    bufp->fullBit(oldp+1611,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_enable__DOT__wr_data));
    bufp->fullBit(oldp+1612,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_enable__DOT__wr_en_data_arb__DOT__we));
    bufp->fullBit(oldp+1613,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_enable__DOT__wr_en_data_arb__DOT__wd));
    bufp->fullBit(oldp+1614,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_enable__DOT__wr_en_data_arb__DOT__de));
    bufp->fullBit(oldp+1615,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_enable__DOT__wr_en_data_arb__DOT__d));
    bufp->fullBit(oldp+1616,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_enable__DOT__wr_en_data_arb__DOT__q));
    bufp->fullBit(oldp+1617,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_enable__DOT__wr_en_data_arb__DOT__wr_en));
    bufp->fullBit(oldp+1618,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_enable__DOT__wr_en_data_arb__DOT__wr_data));
    bufp->fullBit(oldp+1619,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_enable__DOT__wr_en_data_arb__DOT__gen_w__DOT__unused_q));
    bufp->fullBit(oldp+1620,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_ready__DOT__clk_i));
    bufp->fullBit(oldp+1621,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_ready__DOT__rst_ni));
    bufp->fullBit(oldp+1622,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_ready__DOT__we));
    bufp->fullBit(oldp+1623,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_ready__DOT__wd));
    bufp->fullBit(oldp+1624,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_ready__DOT__de));
    bufp->fullBit(oldp+1625,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_ready__DOT__d));
    bufp->fullBit(oldp+1626,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_ready__DOT__qe));
    bufp->fullBit(oldp+1627,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_ready__DOT__q));
    bufp->fullBit(oldp+1628,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_ready__DOT__qs));
    bufp->fullBit(oldp+1629,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_ready__DOT__wr_en));
    bufp->fullBit(oldp+1630,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_ready__DOT__wr_data));
    bufp->fullBit(oldp+1631,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_ready__DOT__wr_en_data_arb__DOT__we));
    bufp->fullBit(oldp+1632,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_ready__DOT__wr_en_data_arb__DOT__wd));
    bufp->fullBit(oldp+1633,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_ready__DOT__wr_en_data_arb__DOT__de));
    bufp->fullBit(oldp+1634,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_ready__DOT__wr_en_data_arb__DOT__d));
    bufp->fullBit(oldp+1635,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_ready__DOT__wr_en_data_arb__DOT__q));
    bufp->fullBit(oldp+1636,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_ready__DOT__wr_en_data_arb__DOT__wr_en));
    bufp->fullBit(oldp+1637,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_ready__DOT__wr_en_data_arb__DOT__wr_data));
    bufp->fullBit(oldp+1638,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_ready__DOT__wr_en_data_arb__DOT__gen_ro__DOT__unused_we));
    bufp->fullBit(oldp+1639,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_ready__DOT__wr_en_data_arb__DOT__gen_ro__DOT__unused_wd));
    bufp->fullBit(oldp+1640,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_ready__DOT__wr_en_data_arb__DOT__gen_ro__DOT__unused_q));
    bufp->fullBit(oldp+1641,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst__DOT__clk_i));
    bufp->fullBit(oldp+1642,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst__DOT__rst_ni));
    bufp->fullBit(oldp+1643,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst__DOT__we));
    bufp->fullBit(oldp+1644,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst__DOT__wd));
    bufp->fullBit(oldp+1645,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst__DOT__de));
    bufp->fullBit(oldp+1646,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst__DOT__d));
    bufp->fullBit(oldp+1647,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst__DOT__qe));
    bufp->fullBit(oldp+1648,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst__DOT__q));
    bufp->fullBit(oldp+1649,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst__DOT__qs));
    bufp->fullBit(oldp+1650,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst__DOT__wr_en));
    bufp->fullBit(oldp+1651,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst__DOT__wr_data));
    bufp->fullBit(oldp+1652,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst__DOT__wr_en_data_arb__DOT__we));
    bufp->fullBit(oldp+1653,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst__DOT__wr_en_data_arb__DOT__wd));
    bufp->fullBit(oldp+1654,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst__DOT__wr_en_data_arb__DOT__de));
    bufp->fullBit(oldp+1655,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst__DOT__wr_en_data_arb__DOT__d));
    bufp->fullBit(oldp+1656,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst__DOT__wr_en_data_arb__DOT__q));
    bufp->fullBit(oldp+1657,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst__DOT__wr_en_data_arb__DOT__wr_en));
    bufp->fullBit(oldp+1658,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst__DOT__wr_en_data_arb__DOT__wr_data));
    bufp->fullBit(oldp+1659,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst__DOT__wr_en_data_arb__DOT__gen_w__DOT__unused_q));
    bufp->fullBit(oldp+1660,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst_len__DOT__clk_i));
    bufp->fullBit(oldp+1661,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst_len__DOT__rst_ni));
    bufp->fullBit(oldp+1662,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst_len__DOT__we));
    bufp->fullCData(oldp+1663,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst_len__DOT__wd),8);
    bufp->fullBit(oldp+1664,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst_len__DOT__de));
    bufp->fullCData(oldp+1665,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst_len__DOT__d),8);
    bufp->fullBit(oldp+1666,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst_len__DOT__qe));
    bufp->fullCData(oldp+1667,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst_len__DOT__q),8);
    bufp->fullCData(oldp+1668,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst_len__DOT__qs),8);
    bufp->fullBit(oldp+1669,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst_len__DOT__wr_en));
    bufp->fullCData(oldp+1670,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst_len__DOT__wr_data),8);
    bufp->fullBit(oldp+1671,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst_len__DOT__wr_en_data_arb__DOT__we));
    bufp->fullCData(oldp+1672,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst_len__DOT__wr_en_data_arb__DOT__wd),8);
    bufp->fullBit(oldp+1673,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst_len__DOT__wr_en_data_arb__DOT__de));
    bufp->fullCData(oldp+1674,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst_len__DOT__wr_en_data_arb__DOT__d),8);
    bufp->fullCData(oldp+1675,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst_len__DOT__wr_en_data_arb__DOT__q),8);
    bufp->fullBit(oldp+1676,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst_len__DOT__wr_en_data_arb__DOT__wr_en));
    bufp->fullCData(oldp+1677,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst_len__DOT__wr_en_data_arb__DOT__wr_data),8);
    bufp->fullCData(oldp+1678,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_burst_len__DOT__wr_en_data_arb__DOT__gen_w__DOT__unused_q),8);
    bufp->fullBit(oldp+1679,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_enable__DOT__clk_i));
    bufp->fullBit(oldp+1680,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_enable__DOT__rst_ni));
    bufp->fullBit(oldp+1681,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_enable__DOT__we));
    bufp->fullBit(oldp+1682,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_enable__DOT__wd));
    bufp->fullBit(oldp+1683,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_enable__DOT__de));
    bufp->fullBit(oldp+1684,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_enable__DOT__d));
    bufp->fullBit(oldp+1685,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_enable__DOT__qe));
    bufp->fullBit(oldp+1686,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_enable__DOT__q));
    bufp->fullBit(oldp+1687,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_enable__DOT__qs));
    bufp->fullBit(oldp+1688,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_enable__DOT__wr_en));
    bufp->fullBit(oldp+1689,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_enable__DOT__wr_data));
    bufp->fullBit(oldp+1690,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_enable__DOT__wr_en_data_arb__DOT__we));
    bufp->fullBit(oldp+1691,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_enable__DOT__wr_en_data_arb__DOT__wd));
    bufp->fullBit(oldp+1692,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_enable__DOT__wr_en_data_arb__DOT__de));
    bufp->fullBit(oldp+1693,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_enable__DOT__wr_en_data_arb__DOT__d));
    bufp->fullBit(oldp+1694,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_enable__DOT__wr_en_data_arb__DOT__q));
    bufp->fullBit(oldp+1695,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_enable__DOT__wr_en_data_arb__DOT__wr_en));
    bufp->fullBit(oldp+1696,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_enable__DOT__wr_en_data_arb__DOT__wr_data));
    bufp->fullBit(oldp+1697,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_enable__DOT__wr_en_data_arb__DOT__gen_w__DOT__unused_q));
    bufp->fullBit(oldp+1698,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_ready__DOT__clk_i));
    bufp->fullBit(oldp+1699,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_ready__DOT__rst_ni));
    bufp->fullBit(oldp+1700,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_ready__DOT__we));
    bufp->fullBit(oldp+1701,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_ready__DOT__wd));
    bufp->fullBit(oldp+1702,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_ready__DOT__de));
    bufp->fullBit(oldp+1703,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_ready__DOT__d));
    bufp->fullBit(oldp+1704,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_ready__DOT__qe));
    bufp->fullBit(oldp+1705,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_ready__DOT__q));
    bufp->fullBit(oldp+1706,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_ready__DOT__qs));
    bufp->fullBit(oldp+1707,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_ready__DOT__wr_en));
    bufp->fullBit(oldp+1708,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_ready__DOT__wr_data));
    bufp->fullBit(oldp+1709,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_ready__DOT__wr_en_data_arb__DOT__we));
    bufp->fullBit(oldp+1710,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_ready__DOT__wr_en_data_arb__DOT__wd));
    bufp->fullBit(oldp+1711,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_ready__DOT__wr_en_data_arb__DOT__de));
    bufp->fullBit(oldp+1712,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_ready__DOT__wr_en_data_arb__DOT__d));
    bufp->fullBit(oldp+1713,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_ready__DOT__wr_en_data_arb__DOT__q));
    bufp->fullBit(oldp+1714,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_ready__DOT__wr_en_data_arb__DOT__wr_en));
    bufp->fullBit(oldp+1715,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_ready__DOT__wr_en_data_arb__DOT__wr_data));
    bufp->fullBit(oldp+1716,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_ready__DOT__wr_en_data_arb__DOT__gen_ro__DOT__unused_we));
    bufp->fullBit(oldp+1717,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_ready__DOT__wr_en_data_arb__DOT__gen_ro__DOT__unused_wd));
    bufp->fullBit(oldp+1718,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_ready__DOT__wr_en_data_arb__DOT__gen_ro__DOT__unused_q));
    bufp->fullBit(oldp+1719,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__clk_i));
    bufp->fullBit(oldp+1720,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__rst_ni));
    bufp->fullBit(oldp+1721,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__w_valid_o));
    bufp->fullQData(oldp+1722,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__w_data_o[2U])) 
                                 << 0x33U) | (((QData)((IData)(
                                                               vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__w_data_o[1U])) 
                                               << 0x13U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__w_data_o[0U])) 
                                                 >> 0xdU)))),64);
    bufp->fullCData(oldp+1724,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__w_data_o[0U] 
                                         >> 5U))),8);
    bufp->fullBit(oldp+1725,((1U & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__w_data_o[0U] 
                                    >> 4U))));
    bufp->fullCData(oldp+1726,((0xfU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__w_data_o[0U])),4);
    bufp->fullBit(oldp+1727,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__w_ready_i));
    bufp->fullCData(oldp+1728,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__trans_data_i[2U] 
                                         >> 0xcU))),8);
    bufp->fullCData(oldp+1729,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__trans_data_i[2U] 
                                         >> 4U))),8);
    bufp->fullCData(oldp+1730,((0xfU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__trans_data_i[2U])),4);
    bufp->fullQData(oldp+1731,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__trans_data_i[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__trans_data_i[0U])))),64);
    bufp->fullBit(oldp+1733,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__enable_i));
    bufp->fullBit(oldp+1734,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__ready_o));
    bufp->fullCData(oldp+1735,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__state_q),2);
    bufp->fullCData(oldp+1736,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__state_d),2);
    bufp->fullCData(oldp+1737,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__trans_data_q[2U] 
                                         >> 0xcU))),8);
    bufp->fullCData(oldp+1738,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__trans_data_q[2U] 
                                         >> 4U))),8);
    bufp->fullCData(oldp+1739,((0xfU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__trans_data_q[2U])),4);
    bufp->fullQData(oldp+1740,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__trans_data_q[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__trans_data_q[0U])))),64);
    bufp->fullCData(oldp+1742,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__trans_data_d[2U] 
                                         >> 0xcU))),8);
    bufp->fullCData(oldp+1743,((0xffU & (vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__trans_data_d[2U] 
                                         >> 4U))),8);
    bufp->fullCData(oldp+1744,((0xfU & vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__trans_data_d[2U])),4);
    bufp->fullQData(oldp+1745,((((QData)((IData)(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__trans_data_d[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__trans_data_d[0U])))),64);
    bufp->fullCData(oldp+1747,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__issued_trans_d),8);
    bufp->fullCData(oldp+1748,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__issued_trans_q),8);
    bufp->fullCData(oldp+1749,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__issued_data_d),8);
    bufp->fullCData(oldp+1750,(vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_w_handler__DOT__issued_data_q),8);
    bufp->fullCData(oldp+1751,(vlSymsp->TOP__generic_reader_writer_reg_pkg.GENERIC_READER_WRITER_PERMIT[0]),4);
    bufp->fullCData(oldp+1752,(vlSymsp->TOP__generic_reader_writer_reg_pkg.GENERIC_READER_WRITER_PERMIT[1]),4);
    bufp->fullCData(oldp+1753,(vlSymsp->TOP__generic_reader_writer_reg_pkg.GENERIC_READER_WRITER_PERMIT[2]),4);
    bufp->fullCData(oldp+1754,(vlSymsp->TOP__generic_reader_writer_reg_pkg.GENERIC_READER_WRITER_PERMIT[3]),4);
    bufp->fullCData(oldp+1755,(vlSymsp->TOP__generic_reader_writer_reg_pkg.GENERIC_READER_WRITER_PERMIT[4]),4);
    bufp->fullCData(oldp+1756,(vlSymsp->TOP__generic_reader_writer_reg_pkg.GENERIC_READER_WRITER_PERMIT[5]),4);
    bufp->fullCData(oldp+1757,(vlSymsp->TOP__generic_reader_writer_reg_pkg.GENERIC_READER_WRITER_PERMIT[6]),4);
    bufp->fullBit(oldp+1758,(vlSymsp->TOP__dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__reg_bus.clk_i));
    bufp->fullCData(oldp+1759,(vlSymsp->TOP__dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__reg_bus.addr),6);
    bufp->fullBit(oldp+1760,(vlSymsp->TOP__dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__reg_bus.write));
    bufp->fullIData(oldp+1761,(vlSymsp->TOP__dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__reg_bus.rdata),32);
    bufp->fullIData(oldp+1762,(vlSymsp->TOP__dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__reg_bus.wdata),32);
    bufp->fullCData(oldp+1763,(vlSymsp->TOP__dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__reg_bus.wstrb),4);
    bufp->fullBit(oldp+1764,(vlSymsp->TOP__dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__reg_bus.error));
    bufp->fullBit(oldp+1765,(vlSymsp->TOP__dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__reg_bus.valid));
    bufp->fullBit(oldp+1766,(vlSymsp->TOP__dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__reg_bus.ready));
}
