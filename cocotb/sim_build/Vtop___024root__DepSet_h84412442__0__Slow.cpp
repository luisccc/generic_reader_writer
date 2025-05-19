// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->dut__DOT__mst_ar_wid_o = 0U;
    vlSelf->dut__DOT__mst_aw_wid_o = 0U;
    vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__BRESP = 0U;
    vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__RRESP = 0U;
    vlSymsp->TOP__dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__reg_bus.wstrb = 0xfU;
    vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__PSEL = 1U;
    vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__alm_empty_o = 1U;
    vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__alm_empty_o = 1U;
    vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__alm_empty_o = 1U;
    vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__alm_empty_o = 1U;
    vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__impl__DOT__alm_empty_o = 1U;
    vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__test_en_i = 0U;
    vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_aw_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__flush_i = 0U;
    vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_ar_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__flush_i = 0U;
    vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_w_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__flush_i = 0U;
    vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_r_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__flush_i = 0U;
    vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__i_axi2apb_64_32_iopmp__DOT__slave_b_buffer_i__DOT__i_axi_single_slice__DOT__i_fifo__DOT__flush_i = 0U;
    vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__devmode_i = 0U;
    vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_ready__DOT__we = 0U;
    vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_ready__DOT__wd = 0U;
    vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_ready__DOT__wr_en_data_arb__DOT__gen_ro__DOT__unused_we = 0U;
    vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_r_ready__DOT__wr_en_data_arb__DOT__gen_ro__DOT__unused_wd = 0U;
    vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_ready__DOT__we = 0U;
    vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_ready__DOT__wd = 0U;
    vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_ready__DOT__wr_en_data_arb__DOT__gen_ro__DOT__unused_we = 0U;
    vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_control_w_ready__DOT__wr_en_data_arb__DOT__gen_ro__DOT__unused_wd = 0U;
    vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrl__DOT__de = 0U;
    vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrl__DOT__d = 0U;
    vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrh__DOT__de = 0U;
    vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_addrh__DOT__d = 0U;
    vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_len__DOT__de = 0U;
    vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_len__DOT__d = 0U;
    vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_size__DOT__de = 0U;
    vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_size__DOT__d = 0U;
    vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_nsaid__DOT__de = 0U;
    vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_ar_cfg_nsaid__DOT__d = 0U;
    vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrl__DOT__de = 0U;
    vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrl__DOT__d = 0U;
    vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrh__DOT__de = 0U;
    vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_addrh__DOT__d = 0U;
    vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_len__DOT__de = 0U;
    vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_len__DOT__d = 0U;
    vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_size__DOT__de = 0U;
    vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_size__DOT__d = 0U;
    vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_nsaid__DOT__de = 0U;
    vlSelf->dut__DOT__i_generic_reader_writer_top__DOT__i_regmap__DOT__u_aw_cfg_nsaid__DOT__d = 0U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
