// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_REG_BUS__A6_D20_H_
#define VERILATED_VTOP_REG_BUS__A6_D20_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_REG_BUS__A6_D20 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    CData/*5:0*/ addr;
    CData/*0:0*/ write;
    CData/*3:0*/ wstrb;
    CData/*0:0*/ error;
    CData/*0:0*/ valid;
    CData/*0:0*/ ready;
    IData/*31:0*/ rdata;
    IData/*31:0*/ wdata;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ ADDR_WIDTH = 6U;
    static constexpr IData/*31:0*/ DATA_WIDTH = 0x00000020U;

    // CONSTRUCTORS
    Vtop_REG_BUS__A6_D20(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_REG_BUS__A6_D20();
    VL_UNCOPYABLE(Vtop_REG_BUS__A6_D20);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vtop_REG_BUS__A6_D20* obj);

#endif  // guard
