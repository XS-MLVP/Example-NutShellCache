// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VCache.h"
#include "VCache__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

VCache::VCache(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VCache__Syms(_vcontextp__, _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
}

VCache::VCache(const char* _vcname__)
    : VCache(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VCache::~VCache() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VCache___024root___eval_initial(VCache___024root* vlSelf);
void VCache___024root___eval_settle(VCache___024root* vlSelf);
void VCache___024root___eval(VCache___024root* vlSelf);
#ifdef VL_DEBUG
void VCache___024root___eval_debug_assertions(VCache___024root* vlSelf);
#endif  // VL_DEBUG
void VCache___024root___final(VCache___024root* vlSelf);

static void _eval_initial_loop(VCache__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VCache___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VCache___024root___eval_settle(&(vlSymsp->TOP));
        VCache___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VCache::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCache::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VCache___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VCache___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

void VCache::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step VCache::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Utilities

VerilatedContext* VCache::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VCache::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VCache::final() {
    VCache___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VCache___024root__trace_init_top(VCache___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VCache___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCache___024root*>(voidSelf);
    VCache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VCache___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VCache___024root__trace_register(VCache___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VCache::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VCache___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
