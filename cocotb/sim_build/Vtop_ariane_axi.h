// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_ARIANE_AXI_H_
#define VERILATED_VTOP_ARIANE_AXI_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_ariane_axi final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ IdWidth = 4U;
    static constexpr IData/*31:0*/ UserWidth = 4U;
    static constexpr IData/*31:0*/ AddrWidth = 0x00000040U;
    static constexpr IData/*31:0*/ DataWidth = 0x00000040U;
    static constexpr IData/*31:0*/ StrbWidth = 8U;

    // CONSTRUCTORS
    Vtop_ariane_axi(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_ariane_axi();
    VL_UNCOPYABLE(Vtop_ariane_axi);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
