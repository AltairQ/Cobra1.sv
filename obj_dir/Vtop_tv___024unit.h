// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_tv.h for the primary calling header

#ifndef _Vtop_tv___024unit_H_
#define _Vtop_tv___024unit_H_

#include "verilated_heavy.h"
#include "Vtop_tv__Dpi.h"

class Vtop_tv__Syms;

//----------

VL_MODULE(Vtop_tv___024unit) {
  public:
    // CELLS
    
    // PORTS
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign12[4];
    Vtop_tv__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vtop_tv___024unit& operator= (const Vtop_tv___024unit&);	///< Copying not allowed
    Vtop_tv___024unit(const Vtop_tv___024unit&);	///< Copying not allowed
  public:
    Vtop_tv___024unit(const char* name="TOP");
    ~Vtop_tv___024unit();
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vtop_tv__Syms* symsp, bool first);
    void	__Vdpiimwrap_rom_hex_file_TOP____024unit(string& rom_hex_file__Vfuncrtn);
  private:
    void	_configure_coverage(Vtop_tv__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
