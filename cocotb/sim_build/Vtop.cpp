// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtop__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtop::Vtop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtop__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_ni{vlSymsp->TOP.rst_ni}
    , config_aw_valid_i{vlSymsp->TOP.config_aw_valid_i}
    , config_aw_len_i{vlSymsp->TOP.config_aw_len_i}
    , config_aw_size_i{vlSymsp->TOP.config_aw_size_i}
    , config_aw_id_i{vlSymsp->TOP.config_aw_id_i}
    , config_aw_ready_o{vlSymsp->TOP.config_aw_ready_o}
    , config_w_valid_i{vlSymsp->TOP.config_w_valid_i}
    , config_w_strb_i{vlSymsp->TOP.config_w_strb_i}
    , config_w_last_i{vlSymsp->TOP.config_w_last_i}
    , config_w_ready_o{vlSymsp->TOP.config_w_ready_o}
    , config_ar_valid_i{vlSymsp->TOP.config_ar_valid_i}
    , config_ar_len_i{vlSymsp->TOP.config_ar_len_i}
    , config_ar_size_i{vlSymsp->TOP.config_ar_size_i}
    , config_ar_id_i{vlSymsp->TOP.config_ar_id_i}
    , config_ar_ready_o{vlSymsp->TOP.config_ar_ready_o}
    , config_r_valid_o{vlSymsp->TOP.config_r_valid_o}
    , config_r_resp_o{vlSymsp->TOP.config_r_resp_o}
    , config_r_last_o{vlSymsp->TOP.config_r_last_o}
    , config_r_id_o{vlSymsp->TOP.config_r_id_o}
    , config_r_ready_i{vlSymsp->TOP.config_r_ready_i}
    , config_b_valid_o{vlSymsp->TOP.config_b_valid_o}
    , config_b_resp_o{vlSymsp->TOP.config_b_resp_o}
    , config_b_id_o{vlSymsp->TOP.config_b_id_o}
    , config_b_ready_i{vlSymsp->TOP.config_b_ready_i}
    , mst_aw_valid_o{vlSymsp->TOP.mst_aw_valid_o}
    , mst_aw_len_o{vlSymsp->TOP.mst_aw_len_o}
    , mst_aw_size_o{vlSymsp->TOP.mst_aw_size_o}
    , mst_aw_wid_o{vlSymsp->TOP.mst_aw_wid_o}
    , mst_aw_id_o{vlSymsp->TOP.mst_aw_id_o}
    , mst_aw_ready_i{vlSymsp->TOP.mst_aw_ready_i}
    , mst_w_valid_o{vlSymsp->TOP.mst_w_valid_o}
    , mst_w_strb_o{vlSymsp->TOP.mst_w_strb_o}
    , mst_w_last_o{vlSymsp->TOP.mst_w_last_o}
    , mst_w_ready_i{vlSymsp->TOP.mst_w_ready_i}
    , mst_ar_valid_o{vlSymsp->TOP.mst_ar_valid_o}
    , mst_ar_len_o{vlSymsp->TOP.mst_ar_len_o}
    , mst_ar_size_o{vlSymsp->TOP.mst_ar_size_o}
    , mst_ar_wid_o{vlSymsp->TOP.mst_ar_wid_o}
    , mst_ar_id_o{vlSymsp->TOP.mst_ar_id_o}
    , mst_ar_ready_i{vlSymsp->TOP.mst_ar_ready_i}
    , mst_r_valid_i{vlSymsp->TOP.mst_r_valid_i}
    , mst_r_resp_i{vlSymsp->TOP.mst_r_resp_i}
    , mst_r_last_i{vlSymsp->TOP.mst_r_last_i}
    , mst_r_id_i{vlSymsp->TOP.mst_r_id_i}
    , mst_r_ready_o{vlSymsp->TOP.mst_r_ready_o}
    , mst_b_valid_i{vlSymsp->TOP.mst_b_valid_i}
    , mst_b_resp_i{vlSymsp->TOP.mst_b_resp_i}
    , mst_b_id_i{vlSymsp->TOP.mst_b_id_i}
    , mst_b_ready_o{vlSymsp->TOP.mst_b_ready_o}
    , config_aw_addr_i{vlSymsp->TOP.config_aw_addr_i}
    , config_w_data_i{vlSymsp->TOP.config_w_data_i}
    , config_ar_addr_i{vlSymsp->TOP.config_ar_addr_i}
    , config_r_data_o{vlSymsp->TOP.config_r_data_o}
    , mst_aw_addr_o{vlSymsp->TOP.mst_aw_addr_o}
    , mst_w_data_o{vlSymsp->TOP.mst_w_data_o}
    , mst_ar_addr_o{vlSymsp->TOP.mst_ar_addr_o}
    , mst_r_data_i{vlSymsp->TOP.mst_r_data_i}
    , __PVT__axi_pkg{vlSymsp->TOP.__PVT__axi_pkg}
    , __PVT__ariane_axi{vlSymsp->TOP.__PVT__ariane_axi}
    , __PVT__generic_reader_writer_reg_pkg{vlSymsp->TOP.__PVT__generic_reader_writer_reg_pkg}
    , __PVT__dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__reg_bus{vlSymsp->TOP.__PVT__dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__reg_bus}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtop::Vtop(const char* _vcname__)
    : Vtop(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtop::~Vtop() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_static(Vtop___024root* vlSelf);
void Vtop___024root___eval_initial(Vtop___024root* vlSelf);
void Vtop___024root___eval_settle(Vtop___024root* vlSelf);
void Vtop___024root___eval(Vtop___024root* vlSelf);

void Vtop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtop___024root___eval_static(&(vlSymsp->TOP));
        Vtop___024root___eval_initial(&(vlSymsp->TOP));
        Vtop___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtop___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtop::eventsPending() { return false; }

uint64_t Vtop::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtop::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtop___024root___eval_final(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop::final() {
    Vtop___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtop::hierName() const { return vlSymsp->name(); }
const char* Vtop::modelName() const { return "Vtop"; }
unsigned Vtop::threads() const { return 1; }
void Vtop::prepareClone() const { contextp()->prepareClone(); }
void Vtop::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtop::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtop___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop___024root__trace_decl_types(tracep);
    Vtop___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtop::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    (void)levels; (void)options; // Prevent unused variable warning
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtop___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
