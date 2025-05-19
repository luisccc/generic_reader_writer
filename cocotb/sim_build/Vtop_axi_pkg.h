// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_AXI_PKG_H_
#define VERILATED_VTOP_AXI_PKG_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_axi_pkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr CData/*1:0*/ BURST_FIXED = 0U;
    static constexpr CData/*1:0*/ BURST_INCR = 1U;
    static constexpr CData/*1:0*/ BURST_WRAP = 2U;
    static constexpr CData/*1:0*/ RESP_OKAY = 0U;
    static constexpr CData/*1:0*/ RESP_EXOKAY = 1U;
    static constexpr CData/*1:0*/ RESP_SLVERR = 2U;
    static constexpr CData/*1:0*/ RESP_DECERR = 3U;
    static constexpr CData/*3:0*/ CACHE_BUFFERABLE = 1U;
    static constexpr CData/*3:0*/ CACHE_MODIFIABLE = 2U;
    static constexpr CData/*3:0*/ CACHE_RD_ALLOC = 4U;
    static constexpr CData/*3:0*/ CACHE_WR_ALLOC = 8U;
    static constexpr CData/*5:0*/ ATOP_ATOMICSWAP = 0x30U;
    static constexpr CData/*5:0*/ ATOP_ATOMICCMP = 0x31U;
    static constexpr CData/*1:0*/ ATOP_NONE = 0U;
    static constexpr CData/*1:0*/ ATOP_ATOMICSTORE = 1U;
    static constexpr CData/*1:0*/ ATOP_ATOMICLOAD = 2U;
    static constexpr CData/*0:0*/ ATOP_LITTLE_END = 0U;
    static constexpr CData/*0:0*/ ATOP_BIG_END = 1U;
    static constexpr CData/*2:0*/ ATOP_ADD = 0U;
    static constexpr CData/*2:0*/ ATOP_CLR = 1U;
    static constexpr CData/*2:0*/ ATOP_EOR = 2U;
    static constexpr CData/*2:0*/ ATOP_SET = 3U;
    static constexpr CData/*2:0*/ ATOP_SMAX = 4U;
    static constexpr CData/*2:0*/ ATOP_SMIN = 5U;
    static constexpr CData/*2:0*/ ATOP_UMAX = 6U;
    static constexpr CData/*2:0*/ ATOP_UMIN = 7U;
    static constexpr SData/*9:0*/ DemuxAw = 0x0200U;
    static constexpr SData/*9:0*/ DemuxW = 0x0100U;
    static constexpr SData/*9:0*/ DemuxB = 0x0080U;
    static constexpr SData/*9:0*/ DemuxAr = 0x0040U;
    static constexpr SData/*9:0*/ DemuxR = 0x0020U;
    static constexpr SData/*9:0*/ MuxAw = 0x0010U;
    static constexpr SData/*9:0*/ MuxW = 8U;
    static constexpr SData/*9:0*/ MuxB = 4U;
    static constexpr SData/*9:0*/ MuxAr = 2U;
    static constexpr SData/*9:0*/ MuxR = 1U;
    static constexpr IData/*31:0*/ ATOP_R_RESP = 5U;

    // CONSTRUCTORS
    Vtop_axi_pkg(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_axi_pkg();
    VL_UNCOPYABLE(Vtop_axi_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
