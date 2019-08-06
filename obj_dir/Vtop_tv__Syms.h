// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _Vtop_tv__Syms_H_
#define _Vtop_tv__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vtop_tv.h"

// SYMS CLASS
class Vtop_tv__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vtop_tv*                       TOPp;
    
    // CREATORS
    Vtop_tv__Syms(Vtop_tv* topp, const char* namep);
    ~Vtop_tv__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
