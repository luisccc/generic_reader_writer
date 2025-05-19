// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTOP_H_
#define VERILATED_VTOP_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vtop__Syms;
class Vtop___024root;
class VerilatedVcdC;
class Vtop_REG_BUS__A6_D20;
class Vtop_ariane_axi;
class Vtop_axi_pkg;
class Vtop_generic_reader_writer_reg_pkg;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vtop VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vtop__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk_i,0,0);
    VL_IN8(&rst_ni,0,0);
    VL_IN8(&config_aw_valid_i,0,0);
    VL_IN8(&config_aw_len_i,7,0);
    VL_IN8(&config_aw_size_i,2,0);
    VL_IN8(&config_aw_id_i,3,0);
    VL_OUT8(&config_aw_ready_o,0,0);
    VL_IN8(&config_w_valid_i,0,0);
    VL_IN8(&config_w_strb_i,7,0);
    VL_IN8(&config_w_last_i,0,0);
    VL_OUT8(&config_w_ready_o,0,0);
    VL_IN8(&config_ar_valid_i,0,0);
    VL_IN8(&config_ar_len_i,7,0);
    VL_IN8(&config_ar_size_i,2,0);
    VL_IN8(&config_ar_id_i,3,0);
    VL_OUT8(&config_ar_ready_o,0,0);
    VL_OUT8(&config_r_valid_o,0,0);
    VL_OUT8(&config_r_resp_o,1,0);
    VL_OUT8(&config_r_last_o,0,0);
    VL_OUT8(&config_r_id_o,3,0);
    VL_IN8(&config_r_ready_i,0,0);
    VL_OUT8(&config_b_valid_o,0,0);
    VL_OUT8(&config_b_resp_o,1,0);
    VL_OUT8(&config_b_id_o,3,0);
    VL_IN8(&config_b_ready_i,0,0);
    VL_OUT8(&mst_aw_valid_o,0,0);
    VL_OUT8(&mst_aw_len_o,7,0);
    VL_OUT8(&mst_aw_size_o,2,0);
    VL_OUT8(&mst_aw_wid_o,3,0);
    VL_OUT8(&mst_aw_id_o,3,0);
    VL_IN8(&mst_aw_ready_i,0,0);
    VL_OUT8(&mst_w_valid_o,0,0);
    VL_OUT8(&mst_w_strb_o,7,0);
    VL_OUT8(&mst_w_last_o,0,0);
    VL_IN8(&mst_w_ready_i,0,0);
    VL_OUT8(&mst_ar_valid_o,0,0);
    VL_OUT8(&mst_ar_len_o,7,0);
    VL_OUT8(&mst_ar_size_o,2,0);
    VL_OUT8(&mst_ar_wid_o,3,0);
    VL_OUT8(&mst_ar_id_o,3,0);
    VL_IN8(&mst_ar_ready_i,0,0);
    VL_IN8(&mst_r_valid_i,0,0);
    VL_IN8(&mst_r_resp_i,1,0);
    VL_IN8(&mst_r_last_i,0,0);
    VL_IN8(&mst_r_id_i,3,0);
    VL_OUT8(&mst_r_ready_o,0,0);
    VL_IN8(&mst_b_valid_i,0,0);
    VL_IN8(&mst_b_resp_i,1,0);
    VL_IN8(&mst_b_id_i,3,0);
    VL_OUT8(&mst_b_ready_o,0,0);
    VL_IN64(&config_aw_addr_i,63,0);
    VL_IN64(&config_w_data_i,63,0);
    VL_IN64(&config_ar_addr_i,63,0);
    VL_OUT64(&config_r_data_o,63,0);
    VL_OUT64(&mst_aw_addr_o,63,0);
    VL_OUT64(&mst_w_data_o,63,0);
    VL_OUT64(&mst_ar_addr_o,63,0);
    VL_IN64(&mst_r_data_i,63,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vtop_axi_pkg* const __PVT__axi_pkg;
    Vtop_ariane_axi* const __PVT__ariane_axi;
    Vtop_generic_reader_writer_reg_pkg* const __PVT__generic_reader_writer_reg_pkg;
    Vtop_REG_BUS__A6_D20* const __PVT__dut__DOT__i_generic_reader_writer_top__DOT__i_generic_reader_writer_prog_if__DOT__reg_bus;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vtop___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vtop(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vtop(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vtop();
  private:
    VL_UNCOPYABLE(Vtop);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
};

#endif  // guard
