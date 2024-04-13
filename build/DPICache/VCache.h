// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VCACHE_H_
#define VERILATED_VCACHE_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "svdpi.h"

class VCache__Syms;
class VCache___024root;
class VerilatedVcdC;

// This class is the main interface to the Verilated model
class VCache VL_NOT_FINAL {
  private:
    // Symbol table holding complete model state (owned by this class)
    VCache__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VCache___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VCache(VerilatedContext* contextp, const char* name = "TOP");
    explicit VCache(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VCache();
  private:
    VL_UNCOPYABLE(VCache);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); eval_end_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp() const;
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    /// DPI Export functions
    static void get_clock(svLogic* value);
    static void get_io_empty(svLogic* value);
    static void get_io_flush(svLogicVecVal* value);
    static void get_io_in_req_bits_addr(svLogicVecVal* value);
    static void get_io_in_req_bits_cmd(svLogicVecVal* value);
    static void get_io_in_req_bits_size(svLogicVecVal* value);
    static void get_io_in_req_bits_user(svLogicVecVal* value);
    static void get_io_in_req_bits_wdata(svLogicVecVal* value);
    static void get_io_in_req_bits_wmask(svLogicVecVal* value);
    static void get_io_in_req_ready(svLogic* value);
    static void get_io_in_req_valid(svLogic* value);
    static void get_io_in_resp_bits_cmd(svLogicVecVal* value);
    static void get_io_in_resp_bits_rdata(svLogicVecVal* value);
    static void get_io_in_resp_bits_user(svLogicVecVal* value);
    static void get_io_in_resp_ready(svLogic* value);
    static void get_io_in_resp_valid(svLogic* value);
    static void get_io_mmio_req_bits_addr(svLogicVecVal* value);
    static void get_io_mmio_req_bits_cmd(svLogicVecVal* value);
    static void get_io_mmio_req_bits_size(svLogicVecVal* value);
    static void get_io_mmio_req_bits_wdata(svLogicVecVal* value);
    static void get_io_mmio_req_bits_wmask(svLogicVecVal* value);
    static void get_io_mmio_req_ready(svLogic* value);
    static void get_io_mmio_req_valid(svLogic* value);
    static void get_io_mmio_resp_bits_cmd(svLogicVecVal* value);
    static void get_io_mmio_resp_bits_rdata(svLogicVecVal* value);
    static void get_io_mmio_resp_ready(svLogic* value);
    static void get_io_mmio_resp_valid(svLogic* value);
    static void get_io_out_coh_req_bits_addr(svLogicVecVal* value);
    static void get_io_out_coh_req_bits_cmd(svLogicVecVal* value);
    static void get_io_out_coh_req_bits_size(svLogicVecVal* value);
    static void get_io_out_coh_req_bits_wdata(svLogicVecVal* value);
    static void get_io_out_coh_req_bits_wmask(svLogicVecVal* value);
    static void get_io_out_coh_req_ready(svLogic* value);
    static void get_io_out_coh_req_valid(svLogic* value);
    static void get_io_out_coh_resp_bits_cmd(svLogicVecVal* value);
    static void get_io_out_coh_resp_bits_rdata(svLogicVecVal* value);
    static void get_io_out_coh_resp_ready(svLogic* value);
    static void get_io_out_coh_resp_valid(svLogic* value);
    static void get_io_out_mem_req_bits_addr(svLogicVecVal* value);
    static void get_io_out_mem_req_bits_cmd(svLogicVecVal* value);
    static void get_io_out_mem_req_bits_size(svLogicVecVal* value);
    static void get_io_out_mem_req_bits_wdata(svLogicVecVal* value);
    static void get_io_out_mem_req_bits_wmask(svLogicVecVal* value);
    static void get_io_out_mem_req_ready(svLogic* value);
    static void get_io_out_mem_req_valid(svLogic* value);
    static void get_io_out_mem_resp_bits_cmd(svLogicVecVal* value);
    static void get_io_out_mem_resp_bits_rdata(svLogicVecVal* value);
    static void get_io_out_mem_resp_ready(svLogic* value);
    static void get_io_out_mem_resp_valid(svLogic* value);
    static void get_reset(svLogic* value);
    static void get_victim_way_mask(svLogicVecVal* value);
    static void get_victim_way_mask_valid(svLogic* value);
    static void set_clock(svLogic value);
    static void set_io_empty(svLogic value);
    static void set_io_flush(const svLogicVecVal* value);
    static void set_io_in_req_bits_addr(const svLogicVecVal* value);
    static void set_io_in_req_bits_cmd(const svLogicVecVal* value);
    static void set_io_in_req_bits_size(const svLogicVecVal* value);
    static void set_io_in_req_bits_user(const svLogicVecVal* value);
    static void set_io_in_req_bits_wdata(const svLogicVecVal* value);
    static void set_io_in_req_bits_wmask(const svLogicVecVal* value);
    static void set_io_in_req_ready(svLogic value);
    static void set_io_in_req_valid(svLogic value);
    static void set_io_in_resp_bits_cmd(const svLogicVecVal* value);
    static void set_io_in_resp_bits_rdata(const svLogicVecVal* value);
    static void set_io_in_resp_bits_user(const svLogicVecVal* value);
    static void set_io_in_resp_ready(svLogic value);
    static void set_io_in_resp_valid(svLogic value);
    static void set_io_mmio_req_bits_addr(const svLogicVecVal* value);
    static void set_io_mmio_req_bits_cmd(const svLogicVecVal* value);
    static void set_io_mmio_req_bits_size(const svLogicVecVal* value);
    static void set_io_mmio_req_bits_wdata(const svLogicVecVal* value);
    static void set_io_mmio_req_bits_wmask(const svLogicVecVal* value);
    static void set_io_mmio_req_ready(svLogic value);
    static void set_io_mmio_req_valid(svLogic value);
    static void set_io_mmio_resp_bits_cmd(const svLogicVecVal* value);
    static void set_io_mmio_resp_bits_rdata(const svLogicVecVal* value);
    static void set_io_mmio_resp_ready(svLogic value);
    static void set_io_mmio_resp_valid(svLogic value);
    static void set_io_out_coh_req_bits_addr(const svLogicVecVal* value);
    static void set_io_out_coh_req_bits_cmd(const svLogicVecVal* value);
    static void set_io_out_coh_req_bits_size(const svLogicVecVal* value);
    static void set_io_out_coh_req_bits_wdata(const svLogicVecVal* value);
    static void set_io_out_coh_req_bits_wmask(const svLogicVecVal* value);
    static void set_io_out_coh_req_ready(svLogic value);
    static void set_io_out_coh_req_valid(svLogic value);
    static void set_io_out_coh_resp_bits_cmd(const svLogicVecVal* value);
    static void set_io_out_coh_resp_bits_rdata(const svLogicVecVal* value);
    static void set_io_out_coh_resp_ready(svLogic value);
    static void set_io_out_coh_resp_valid(svLogic value);
    static void set_io_out_mem_req_bits_addr(const svLogicVecVal* value);
    static void set_io_out_mem_req_bits_cmd(const svLogicVecVal* value);
    static void set_io_out_mem_req_bits_size(const svLogicVecVal* value);
    static void set_io_out_mem_req_bits_wdata(const svLogicVecVal* value);
    static void set_io_out_mem_req_bits_wmask(const svLogicVecVal* value);
    static void set_io_out_mem_req_ready(svLogic value);
    static void set_io_out_mem_req_valid(svLogic value);
    static void set_io_out_mem_resp_bits_cmd(const svLogicVecVal* value);
    static void set_io_out_mem_resp_bits_rdata(const svLogicVecVal* value);
    static void set_io_out_mem_resp_ready(svLogic value);
    static void set_io_out_mem_resp_valid(svLogic value);
    static void set_reset(svLogic value);
    static void set_victim_way_mask(const svLogicVecVal* value);
    static void set_victim_way_mask_valid(svLogic value);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
