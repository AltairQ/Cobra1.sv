// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tv.h for the primary calling header

#include "Vtop_tv___024unit.h" // For This
#include "Vtop_tv__Syms.h"

#include "verilated_dpi.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vtop_tv___024unit) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtop_tv___024unit::__Vconfigure(Vtop_tv__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtop_tv___024unit::~Vtop_tv___024unit() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vtop_tv___024unit::__Vdpiimwrap_rom_hex_file_TOP____024unit(string& rom_hex_file__Vfuncrtn) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop_tv___024unit::__Vdpiimwrap_rom_hex_file_TOP____024unit\n"); );
    // Body
    const char* rom_hex_file__Vfuncrtn__Vcvt = rom_hex_file();
    rom_hex_file__Vfuncrtn = rom_hex_file__Vfuncrtn__Vcvt;
}

void Vtop_tv___024unit::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("        Vtop_tv___024unit::_ctor_var_reset\n"); );
}

void Vtop_tv___024unit::_configure_coverage(Vtop_tv__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("        Vtop_tv___024unit::_configure_coverage\n"); );
}
