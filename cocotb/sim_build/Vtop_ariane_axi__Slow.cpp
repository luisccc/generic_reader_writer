// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_ariane_axi.h"

// Parameter definitions for Vtop_ariane_axi
constexpr IData/*31:0*/ Vtop_ariane_axi::IdWidth;
constexpr IData/*31:0*/ Vtop_ariane_axi::UserWidth;
constexpr IData/*31:0*/ Vtop_ariane_axi::AddrWidth;
constexpr IData/*31:0*/ Vtop_ariane_axi::DataWidth;
constexpr IData/*31:0*/ Vtop_ariane_axi::StrbWidth;


void Vtop_ariane_axi___ctor_var_reset(Vtop_ariane_axi* vlSelf);

Vtop_ariane_axi::Vtop_ariane_axi(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_ariane_axi___ctor_var_reset(this);
}

void Vtop_ariane_axi::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_ariane_axi::~Vtop_ariane_axi() {
}
