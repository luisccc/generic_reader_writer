// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_REG_BUS__A6_D20.h"
#include "Vtop__Syms.h"

// Parameter definitions for Vtop_REG_BUS__A6_D20
constexpr IData/*31:0*/ Vtop_REG_BUS__A6_D20::ADDR_WIDTH;
constexpr IData/*31:0*/ Vtop_REG_BUS__A6_D20::DATA_WIDTH;


void Vtop_REG_BUS__A6_D20___ctor_var_reset(Vtop_REG_BUS__A6_D20* vlSelf);

Vtop_REG_BUS__A6_D20::Vtop_REG_BUS__A6_D20(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_REG_BUS__A6_D20___ctor_var_reset(this);
}

void Vtop_REG_BUS__A6_D20::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_REG_BUS__A6_D20::~Vtop_REG_BUS__A6_D20() {
}
