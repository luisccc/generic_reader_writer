// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_axi_pkg.h"

// Parameter definitions for Vtop_axi_pkg
constexpr CData/*1:0*/ Vtop_axi_pkg::BURST_FIXED;
constexpr CData/*1:0*/ Vtop_axi_pkg::BURST_INCR;
constexpr CData/*1:0*/ Vtop_axi_pkg::BURST_WRAP;
constexpr CData/*1:0*/ Vtop_axi_pkg::RESP_OKAY;
constexpr CData/*1:0*/ Vtop_axi_pkg::RESP_EXOKAY;
constexpr CData/*1:0*/ Vtop_axi_pkg::RESP_SLVERR;
constexpr CData/*1:0*/ Vtop_axi_pkg::RESP_DECERR;
constexpr CData/*3:0*/ Vtop_axi_pkg::CACHE_BUFFERABLE;
constexpr CData/*3:0*/ Vtop_axi_pkg::CACHE_MODIFIABLE;
constexpr CData/*3:0*/ Vtop_axi_pkg::CACHE_RD_ALLOC;
constexpr CData/*3:0*/ Vtop_axi_pkg::CACHE_WR_ALLOC;
constexpr CData/*5:0*/ Vtop_axi_pkg::ATOP_ATOMICSWAP;
constexpr CData/*5:0*/ Vtop_axi_pkg::ATOP_ATOMICCMP;
constexpr CData/*1:0*/ Vtop_axi_pkg::ATOP_NONE;
constexpr CData/*1:0*/ Vtop_axi_pkg::ATOP_ATOMICSTORE;
constexpr CData/*1:0*/ Vtop_axi_pkg::ATOP_ATOMICLOAD;
constexpr CData/*0:0*/ Vtop_axi_pkg::ATOP_LITTLE_END;
constexpr CData/*0:0*/ Vtop_axi_pkg::ATOP_BIG_END;
constexpr CData/*2:0*/ Vtop_axi_pkg::ATOP_ADD;
constexpr CData/*2:0*/ Vtop_axi_pkg::ATOP_CLR;
constexpr CData/*2:0*/ Vtop_axi_pkg::ATOP_EOR;
constexpr CData/*2:0*/ Vtop_axi_pkg::ATOP_SET;
constexpr CData/*2:0*/ Vtop_axi_pkg::ATOP_SMAX;
constexpr CData/*2:0*/ Vtop_axi_pkg::ATOP_SMIN;
constexpr CData/*2:0*/ Vtop_axi_pkg::ATOP_UMAX;
constexpr CData/*2:0*/ Vtop_axi_pkg::ATOP_UMIN;
constexpr SData/*9:0*/ Vtop_axi_pkg::DemuxAw;
constexpr SData/*9:0*/ Vtop_axi_pkg::DemuxW;
constexpr SData/*9:0*/ Vtop_axi_pkg::DemuxB;
constexpr SData/*9:0*/ Vtop_axi_pkg::DemuxAr;
constexpr SData/*9:0*/ Vtop_axi_pkg::DemuxR;
constexpr SData/*9:0*/ Vtop_axi_pkg::MuxAw;
constexpr SData/*9:0*/ Vtop_axi_pkg::MuxW;
constexpr SData/*9:0*/ Vtop_axi_pkg::MuxB;
constexpr SData/*9:0*/ Vtop_axi_pkg::MuxAr;
constexpr SData/*9:0*/ Vtop_axi_pkg::MuxR;
constexpr IData/*31:0*/ Vtop_axi_pkg::ATOP_R_RESP;


void Vtop_axi_pkg___ctor_var_reset(Vtop_axi_pkg* vlSelf);

Vtop_axi_pkg::Vtop_axi_pkg(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_axi_pkg___ctor_var_reset(this);
}

void Vtop_axi_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_axi_pkg::~Vtop_axi_pkg() {
}
