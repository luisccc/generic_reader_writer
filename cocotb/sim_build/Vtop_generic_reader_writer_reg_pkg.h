// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_GENERIC_READER_WRITER_REG_PKG_H_
#define VERILATED_VTOP_GENERIC_READER_WRITER_REG_PKG_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_generic_reader_writer_reg_pkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr CData/*5:0*/ GENERIC_READER_WRITER_CONTROL_OFFSET = 0U;
    static constexpr CData/*5:0*/ GENERIC_READER_WRITER_AR_ADDRL_OFFSET = 8U;
    static constexpr CData/*5:0*/ GENERIC_READER_WRITER_AR_ADDRH_OFFSET = 0x0cU;
    static constexpr CData/*5:0*/ GENERIC_READER_WRITER_AR_CFG_OFFSET = 0x10U;
    static constexpr CData/*5:0*/ GENERIC_READER_WRITER_AW_ADDRL_OFFSET = 0x18U;
    static constexpr CData/*5:0*/ GENERIC_READER_WRITER_AW_ADDRH_OFFSET = 0x1cU;
    static constexpr CData/*5:0*/ GENERIC_READER_WRITER_AW_CFG_OFFSET = 0x20U;
    static constexpr IData/*31:0*/ BlockAw = 6U;
    static constexpr VlUnpacked<CData/*3:0*/, 7> GENERIC_READER_WRITER_PERMIT = {{
        0x07U, 0x0fU, 0x0fU, 0x03U, 0x0fU, 0x0fU, 0x03U
    }};

    // CONSTRUCTORS
    Vtop_generic_reader_writer_reg_pkg(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_generic_reader_writer_reg_pkg();
    VL_UNCOPYABLE(Vtop_generic_reader_writer_reg_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
