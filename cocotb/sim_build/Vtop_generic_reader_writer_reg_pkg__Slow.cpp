// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_generic_reader_writer_reg_pkg.h"

// Parameter definitions for Vtop_generic_reader_writer_reg_pkg
constexpr CData/*5:0*/ Vtop_generic_reader_writer_reg_pkg::GENERIC_READER_WRITER_CONTROL_OFFSET;
constexpr CData/*5:0*/ Vtop_generic_reader_writer_reg_pkg::GENERIC_READER_WRITER_AR_ADDRL_OFFSET;
constexpr CData/*5:0*/ Vtop_generic_reader_writer_reg_pkg::GENERIC_READER_WRITER_AR_ADDRH_OFFSET;
constexpr CData/*5:0*/ Vtop_generic_reader_writer_reg_pkg::GENERIC_READER_WRITER_AR_CFG_OFFSET;
constexpr CData/*5:0*/ Vtop_generic_reader_writer_reg_pkg::GENERIC_READER_WRITER_AW_ADDRL_OFFSET;
constexpr CData/*5:0*/ Vtop_generic_reader_writer_reg_pkg::GENERIC_READER_WRITER_AW_ADDRH_OFFSET;
constexpr CData/*5:0*/ Vtop_generic_reader_writer_reg_pkg::GENERIC_READER_WRITER_AW_CFG_OFFSET;
constexpr IData/*31:0*/ Vtop_generic_reader_writer_reg_pkg::BlockAw;
constexpr VlUnpacked<CData/*3:0*/, 7> Vtop_generic_reader_writer_reg_pkg::GENERIC_READER_WRITER_PERMIT;


void Vtop_generic_reader_writer_reg_pkg___ctor_var_reset(Vtop_generic_reader_writer_reg_pkg* vlSelf);

Vtop_generic_reader_writer_reg_pkg::Vtop_generic_reader_writer_reg_pkg(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_generic_reader_writer_reg_pkg___ctor_var_reset(this);
}

void Vtop_generic_reader_writer_reg_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_generic_reader_writer_reg_pkg::~Vtop_generic_reader_writer_reg_pkg() {
}
