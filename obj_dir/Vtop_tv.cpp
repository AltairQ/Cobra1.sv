// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tv.h for the primary calling header

#include "Vtop_tv.h"           // For This
#include "Vtop_tv__Syms.h"

#include "verilated_dpi.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vtop_tv) {
    Vtop_tv__Syms* __restrict vlSymsp = __VlSymsp = new Vtop_tv__Syms(this, name());
    Vtop_tv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL (__PVT____024unit, Vtop_tv___024unit);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtop_tv::__Vconfigure(Vtop_tv__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtop_tv::~Vtop_tv() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vtop_tv::eval() {
    Vtop_tv__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    Vtop_tv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate Vtop_tv::eval\n"); );
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_PRINTF(" Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void Vtop_tv::_eval_initial_loop(Vtop_tv__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

void Vtop_tv::_initial__TOP__1(Vtop_tv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop_tv::_initial__TOP__1\n"); );
    Vtop_tv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    string __Vfunc_rom_hex_file__0__Vfuncout;
    // Body
    // INITIAL at mem_module.sv:18
    vlTOPp->top_tv__DOT__memory__DOT__i = 0U;
    while (VL_GTES_III(1,32,32, 0xffffU, vlTOPp->top_tv__DOT__memory__DOT__i)) {
	vlTOPp->top_tv__DOT__memory__DOT__memory[(0xffffU 
						  & vlTOPp->top_tv__DOT__memory__DOT__i)] = 0U;
	vlTOPp->top_tv__DOT__memory__DOT__i = ((IData)(1U) 
					       + vlTOPp->top_tv__DOT__memory__DOT__i);
    }
    // Function: rom_hex_file at mem_module.sv:25
    vlSymsp->TOP____024unit.__Vdpiimwrap_rom_hex_file_TOP____024unit(__Vfunc_rom_hex_file__0__Vfuncout);
    VL_READMEM_N (true,8,65536, 0,2, __Vfunc_rom_hex_file__0__Vfuncout
		  , vlTOPp->top_tv__DOT__memory__DOT__memory
		  ,0xc000U,~0);
}

VL_INLINE_OPT void Vtop_tv::_sequent__TOP__2(Vtop_tv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop_tv::_sequent__TOP__2\n"); );
    Vtop_tv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdlyvval__top_tv__DOT__memory__DOT__memory__v0,7,0);
    VL_SIG8(__Vdlyvset__top_tv__DOT__memory__DOT__memory__v0,0,0);
    VL_SIG8(__Vdlyvdim0__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0,2,0);
    VL_SIG8(__Vdlyvval__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0,7,0);
    VL_SIG8(__Vdlyvset__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0,0,0);
    VL_SIG8(__Vdlyvdim0__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0,2,0);
    VL_SIG8(__Vdlyvval__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0,7,0);
    VL_SIG8(__Vdlyvset__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0,0,0);
    VL_SIG16(__Vdlyvdim0__top_tv__DOT__memory__DOT__memory__v0,15,0);
    //char	__VpadToAlign34[2];
    // Body
    __Vdlyvset__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0 = 0U;
    __Vdlyvset__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0 = 0U;
    __Vdlyvset__top_tv__DOT__memory__DOT__memory__v0 = 0U;
    // ALWAYS at tv80_core/tv80_reg.v:47
    if ((1U & (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusAck)))) {
	if (vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegWEH) {
	    __Vdlyvval__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0 
		= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegDIH;
	    __Vdlyvset__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0 = 1U;
	    __Vdlyvdim0__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0 
		= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegAddrA;
	}
	if (vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegWEL) {
	    __Vdlyvval__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0 
		= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegDIL;
	    __Vdlyvset__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0 = 1U;
	    __Vdlyvdim0__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0 
		= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegAddrA;
	}
    }
    // ALWAYS at mem_module.sv:31
    if ((1U & ((((~ (IData)(vlTOPp->top_tv__DOT__wr_n)) 
		 & (~ (IData)(vlTOPp->reset))) & (~ (IData)(vlTOPp->top_tv__DOT__mreq_n))) 
	       & (~ ((0xc000U <= (IData)(vlTOPp->addr)) 
		     & (0xc800U > (IData)(vlTOPp->addr))))))) {
	__Vdlyvval__top_tv__DOT__memory__DOT__memory__v0 
	    = vlTOPp->top_tv__DOT__cpu_dout;
	__Vdlyvset__top_tv__DOT__memory__DOT__memory__v0 = 1U;
	__Vdlyvdim0__top_tv__DOT__memory__DOT__memory__v0 
	    = vlTOPp->addr;
    }
    // ALWAYS at top_tv.sv:27
    if (vlTOPp->reset) {
	vlTOPp->top_tv__DOT__memory_reloc_enable = 1U;
    } else {
	if ((((0x1fU == (0xffU & (IData)(vlTOPp->top_tv__DOT__addr_raw))) 
	      & (~ (IData)(vlTOPp->top_tv__DOT__iorq_n))) 
	     & (~ (IData)(vlTOPp->top_tv__DOT__wr_n)))) {
	    vlTOPp->top_tv__DOT__memory_reloc_enable = 0U;
	}
    }
    // ALWAYSPOST at tv80_core/tv80_reg.v:51
    if (__Vdlyvset__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0) {
	vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH[__Vdlyvdim0__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0] 
	    = __Vdlyvval__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0;
    }
    // ALWAYSPOST at tv80_core/tv80_reg.v:52
    if (__Vdlyvset__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0) {
	vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL[__Vdlyvdim0__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0] 
	    = __Vdlyvval__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0;
    }
    // ALWAYSPOST at mem_module.sv:35
    if (__Vdlyvset__top_tv__DOT__memory__DOT__memory__v0) {
	vlTOPp->top_tv__DOT__memory__DOT__memory[__Vdlyvdim0__top_tv__DOT__memory__DOT__memory__v0] 
	    = __Vdlyvval__top_tv__DOT__memory__DOT__memory__v0;
    }
}

VL_INLINE_OPT void Vtop_tv::_sequent__TOP__3(Vtop_tv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop_tv::_sequent__TOP__3\n"); );
    Vtop_tv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcyc_to_number__1__Vfuncout,2,0);
    VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcyc_to_number__1__mcyc,6,0);
    VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__number_to_bitvec__2__Vfuncout,6,0);
    VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__number_to_bitvec__2__num,2,0);
    VL_SIG8(__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r,3,0);
    VL_SIG8(__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ISet,1,0);
    VL_SIG8(__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR,7,0);
    VL_SIG8(__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BTR_r,0,0);
    VL_SIG8(__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Ap,7,0);
    VL_SIG8(__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Fp,7,0);
    VL_SIG8(__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IStatus,1,0);
    VL_SIG8(__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I,7,0);
    VL_SIG8(__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC_r,0,0);
    VL_SIG8(__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg_r,4,0);
    VL_SIG8(__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Auto_Wait_t1,0,0);
    VL_SIG8(__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Auto_Wait_t2,0,0);
    VL_SIG8(__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntE_FF1,0,0);
    VL_SIG8(__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntE_FF2,0,0);
    VL_SIG8(__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Pre_XY_F_M,2,0);
    VL_SIG8(__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__NMICycle,0,0);
    VL_SIG8(__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__No_BTR,0,0);
    //char	__VpadToAlign77[1];
    VL_SIG16(__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__TmpAddr,15,0);
    // Body
    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Auto_Wait_t2 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Auto_Wait_t2;
    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntE_FF1 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntE_FF1;
    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntE_FF2 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntE_FF2;
    vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusAck 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusAck;
    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Pre_XY_F_M 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Pre_XY_F_M;
    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__No_BTR 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__No_BTR;
    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Auto_Wait_t1 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Auto_Wait_t1;
    vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate;
    vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntCycle 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntCycle;
    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__NMICycle 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__NMICycle;
    vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle;
    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__TmpAddr 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__TmpAddr;
    vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ACC 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ACC;
    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Ap 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Ap;
    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Fp 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Fp;
    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IStatus 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IStatus;
    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I;
    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC_r 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC_r;
    vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__XY_Ind 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__XY_Ind;
    vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PC 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PC;
    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BTR_r 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BTR_r;
    vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SP 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SP;
    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg_r 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg_r;
    vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU_r 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU_r;
    vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__XY_State 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__XY_State;
    vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Alternate 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Alternate;
    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r;
    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ISet 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ISet;
    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR;
    vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
    // ALWAYS at tv80_core/tv80_core.v:375
    if (vlTOPp->top_tv__DOT____Vcellinp__topcore__reset_n) {
	if ((1U & (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusAck)))) {
	    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r = 0U;
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles 
		= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d;
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Arith16_r 
		= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Arith16;
	    vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU_r = 0U;
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Z16_r 
		= ((((2U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ISet)) 
		     & (~ ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op) 
			   >> 2U))) & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op)) 
		   & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle) 
		      >> 2U));
	    if ((1U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle) 
		       & ((((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
			    >> 1U) | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
				      >> 2U)) | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
						 >> 3U))))) {
		if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate))) {
		    if ((1U & (((((~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump)) 
				  & (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Call))) 
				 & (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__NMICycle))) 
				& (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntCycle))) 
			       & (~ ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Halt_FF) 
				     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Halt)))))) {
			vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PC 
			    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PC16;
		    }
		    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ISet = 0U;
		    if ((0U != (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Prefix))) {
			if ((3U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Prefix))) {
			    vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__XY_State 
				= ((0x20U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))
				    ? 2U : 1U);
			} else {
			    if ((2U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Prefix))) {
				vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__XY_State = 0U;
				vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__XY_Ind = 0U;
			    }
			    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ISet 
				= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Prefix;
			}
		    } else {
			vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__XY_State = 0U;
			vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__XY_Ind = 0U;
		    }
		    if (((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntCycle) 
			 & (1U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IStatus)))) {
			__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR = 0xffU;
		    } else {
			if ((((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Halt_FF) 
			      | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntCycle) 
				 & (2U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IStatus)))) 
			     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__NMICycle))) {
			    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR = 0U;
			    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__TmpAddr 
				= ((0xff00U & (IData)(__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__TmpAddr)) 
				   | (IData)(vlTOPp->top_tv__DOT__cpu_din));
			} else {
			    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR 
				= vlTOPp->top_tv__DOT__cpu_din;
			}
		    }
		}
	    } else {
		if (vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ExchangeRS) {
		    vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Alternate 
			= (1U & (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Alternate)));
		}
		if (vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__last_tstate) {
		    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BTR_r 
			= ((((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_BT) 
			     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_BC)) 
			    | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_BTR)) 
			   & (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__No_BTR)));
		    if (vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump) {
			vlTOPp->top_tv__DOT__addr_raw 
			    = ((0xffU & (IData)(vlTOPp->top_tv__DOT__addr_raw)) 
			       | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__di_reg) 
				  << 8U));
			vlTOPp->top_tv__DOT__addr_raw 
			    = ((0xff00U & (IData)(vlTOPp->top_tv__DOT__addr_raw)) 
			       | (0xffU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__TmpAddr)));
			vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PC 
			    = ((0xffU & (IData)(vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PC)) 
			       | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__di_reg) 
				  << 8U));
			vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PC 
			    = ((0xff00U & (IData)(vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PC)) 
			       | (0xffU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__TmpAddr)));
		    } else {
			if (vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__JumpXY) {
			    vlTOPp->top_tv__DOT__addr_raw 
				= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusC;
			    vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PC 
				= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusC;
			} else {
			    if (((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Call) 
				 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RstP))) {
				vlTOPp->top_tv__DOT__addr_raw 
				    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__TmpAddr;
				vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PC 
				    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__TmpAddr;
			    } else {
				if (((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__last_mcycle) 
				     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__NMICycle))) {
				    vlTOPp->top_tv__DOT__addr_raw = 0x66U;
				    vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PC = 0x66U;
				} else {
				    if (((((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle) 
					   >> 2U) & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntCycle)) 
					 & (2U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IStatus)))) {
					vlTOPp->top_tv__DOT__addr_raw 
					    = ((0xffU 
						& (IData)(vlTOPp->top_tv__DOT__addr_raw)) 
					       | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I) 
						  << 8U));
					vlTOPp->top_tv__DOT__addr_raw 
					    = ((0xff00U 
						& (IData)(vlTOPp->top_tv__DOT__addr_raw)) 
					       | (0xffU 
						  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__TmpAddr)));
					vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PC 
					    = ((0xffU 
						& (IData)(vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PC)) 
					       | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I) 
						  << 8U));
					vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PC 
					    = ((0xff00U 
						& (IData)(vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PC)) 
					       | (0xffU 
						  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__TmpAddr)));
				    } else {
					if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To))) {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To))) {
						if (
						    (1U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To))) {
						    vlTOPp->top_tv__DOT__addr_raw 
							= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PC;
						} else {
						    if (vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_WZ) {
							vlTOPp->top_tv__DOT__addr_raw 
							    = 
							    (0xffffU 
							     & ((IData)(1U) 
								+ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__TmpAddr)));
						    } else {
							vlTOPp->top_tv__DOT__addr_raw 
							    = 
							    ((0xffU 
							      & (IData)(vlTOPp->top_tv__DOT__addr_raw)) 
							     | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__di_reg) 
								<< 8U));
							vlTOPp->top_tv__DOT__addr_raw 
							    = 
							    ((0xff00U 
							      & (IData)(vlTOPp->top_tv__DOT__addr_raw)) 
							     | (0xffU 
								& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__TmpAddr)));
						    }
						}
					    } else {
						if (
						    (1U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To))) {
						    vlTOPp->top_tv__DOT__addr_raw 
							= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SP;
						} else {
						    vlTOPp->top_tv__DOT__addr_raw 
							= 
							((0xffU 
							  & (IData)(vlTOPp->top_tv__DOT__addr_raw)) 
							 | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ACC) 
							    << 8U));
						    vlTOPp->top_tv__DOT__addr_raw 
							= 
							((0xff00U 
							  & (IData)(vlTOPp->top_tv__DOT__addr_raw)) 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__di_reg));
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__addr_raw 
						= (
						   (2U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To))
						    ? 
						   ((1U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To))
						     ? (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PC)
						     : 
						    ((0U 
						      == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__XY_State))
						      ? (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusC)
						      : 
						     ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__NextIs_XY_Fetch)
						       ? (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PC)
						       : (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__TmpAddr))))
						    : (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusC));
					}
				    }
				}
			    }
			}
		    }
		    vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU_r 
			= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU;
		    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r 
			= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op;
		    if (vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_CPL) {
			vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ACC 
			    = (0xffU & (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ACC)));
			vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F 
			    = ((0xdfU & (IData)(vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F)) 
			       | (0x20U & ((~ ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ACC) 
					       >> 5U)) 
					   << 5U)));
			vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F 
			    = (0x10U | (IData)(vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F));
			vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F 
			    = ((0xf7U & (IData)(vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F)) 
			       | (8U & ((~ ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ACC) 
					    >> 3U)) 
					<< 3U)));
			vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F 
			    = (2U | (IData)(vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F));
		    }
		    if (vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_CCF) {
			vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F 
			    = ((0xfeU & (IData)(vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F)) 
			       | (1U & (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F))));
			vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F 
			    = ((0xdfU & (IData)(vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F)) 
			       | (0x20U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ACC)));
			vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F 
			    = ((0xefU & (IData)(vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F)) 
			       | (0x10U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F) 
					   << 4U)));
			vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F 
			    = ((0xf7U & (IData)(vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F)) 
			       | (8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ACC)));
			vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F 
			    = (0xfdU & (IData)(vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F));
		    }
		    if (vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_SCF) {
			vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F 
			    = (1U | (IData)(vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F));
			vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F 
			    = ((0xdfU & (IData)(vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F)) 
			       | (0x20U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ACC)));
			vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F 
			    = (0xefU & (IData)(vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F));
			vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F 
			    = ((0xf7U & (IData)(vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F)) 
			       | (8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ACC)));
			vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F 
			    = (0xfdU & (IData)(vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F));
		    }
		}
		if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate))) {
		    if (vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__JumpE) {
			vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PC 
			    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PC16;
		    } else {
			if (vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC) {
			    vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PC 
				= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PC16;
			}
		    }
		    if (vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RstP) {
			__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__TmpAddr 
			    = (0x38U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR));
		    }
		    if (vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BTR_r) {
			vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PC 
			    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PC16;
		    }
		    if (((1U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ISet)) 
			 & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle) 
			    >> 6U))) {
			__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR 
			    = vlTOPp->top_tv__DOT__cpu_din;
		    }
		}
		if ((1U & (((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
			    >> 2U) | (((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
				       >> 4U) & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))))) {
		    if ((7U == (7U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16)))) {
			vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SP 
			    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SP16;
		    }
		}
		if ((1U & (((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
			    >> 3U) & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle) 
				      >> 5U)))) {
		    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__TmpAddr 
			= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SP16;
		}
		if (vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDSPHL) {
		    vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SP 
			= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusC;
		}
		if (vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ExchangeAF) {
		    vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ACC 
			= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Ap;
		    vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F 
			= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Fp;
		    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Ap 
			= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ACC;
		    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Fp 
			= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
		}
		if ((0x20U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
		    vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__XY_Ind = 1U;
		    if ((1U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Prefix))) {
			__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ISet = 1U;
		    }
		}
	    }
	    if ((3U != (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IMode))) {
		__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IStatus 
		    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IMode;
	    }
	    if ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate))) {
		if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Special_LD))) {
		    if ((0U == (3U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Special_LD)))) {
			vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F 
			    = ((0xfbU & (IData)(vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F)) 
			       | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntE_FF2) 
				  << 2U));
			vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ACC 
			    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I;
			vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F 
			    = ((0xbfU & (IData)(vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F)) 
			       | ((0U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I)) 
				  << 6U));
			vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F 
			    = ((0x7fU & (IData)(vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F)) 
			       | (0x80U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I)));
			vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F 
			    = (0xefU & (IData)(vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F));
			vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F 
			    = (0xfdU & (IData)(vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F));
		    } else {
			if ((1U == (3U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Special_LD)))) {
			    vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F 
				= ((0xfbU & (IData)(vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F)) 
				   | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntE_FF2) 
				      << 2U));
			    vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ACC = 0U;
			    vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F 
				= ((0xbfU & (IData)(vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F)) 
				   | ((0U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I)) 
				      << 6U));
			    vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F 
				= ((0x7fU & (IData)(vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F)) 
				   | (0x80U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I)));
			    vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F 
				= (0xefU & (IData)(vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F));
			    vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F 
				= (0xfdU & (IData)(vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F));
			} else {
			    if ((2U == (3U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Special_LD)))) {
				__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I 
				    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ACC;
			    }
			}
		    }
		}
		if (vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ) {
		    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__TmpAddr 
			= ((0xff00U & (IData)(__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__TmpAddr)) 
			   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__di_reg));
		}
		if (vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDW) {
		    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__TmpAddr 
			= ((0xffU & (IData)(__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__TmpAddr)) 
			   | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__di_reg) 
			      << 8U));
		}
	    }
	    if ((((~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_DJNZ)) 
		  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU_r)) 
		 | (9U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r)))) {
		vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F 
		    = ((1U & (IData)(vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F)) 
		       | (0xfeU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)));
		if ((1U & (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC_r)))) {
		    vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F 
			= ((0xfeU & (IData)(vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F)) 
			   | (1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)));
		}
	    }
	    if (((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__last_tstate) 
		 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_INRC))) {
		vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F 
		    = (0xefU & (IData)(vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F));
		vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F 
		    = (0xfdU & (IData)(vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F));
		vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F 
		    = ((0U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__di_reg))
		        ? (0x40U | (IData)(vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F))
		        : (0xbfU & (IData)(vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F)));
		vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F 
		    = ((0x7fU & (IData)(vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F)) 
		       | (0x80U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__di_reg)));
		vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F 
		    = ((0xfbU & (IData)(vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F)) 
		       | (4U & ((~ VL_REDXOR_32((IData)(vlTOPp->top_tv__DOT__topcore__DOT__di_reg))) 
				<< 2U)));
	    }
	    if ((1U & (((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
			>> 1U) & (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Auto_Wait_t1))))) {
		vlTOPp->top_tv__DOT__cpu_dout = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB;
		if (vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_RLD) {
		    vlTOPp->top_tv__DOT__cpu_dout = 
			((0xf0U & (IData)(vlTOPp->top_tv__DOT__cpu_dout)) 
			 | (0xfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA)));
		    vlTOPp->top_tv__DOT__cpu_dout = 
			((0xfU & (IData)(vlTOPp->top_tv__DOT__cpu_dout)) 
			 | (0xf0U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB) 
				     << 4U)));
		}
		if (vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_RRD) {
		    vlTOPp->top_tv__DOT__cpu_dout = 
			((0xf0U & (IData)(vlTOPp->top_tv__DOT__cpu_dout)) 
			 | (0xfU & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB) 
				    >> 4U)));
		    vlTOPp->top_tv__DOT__cpu_dout = 
			((0xfU & (IData)(vlTOPp->top_tv__DOT__cpu_dout)) 
			 | (0xf0U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA) 
				     << 4U)));
		}
	    }
	    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC_r 
		= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC;
	    if ((((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
		  >> 1U) & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_BT))) {
		vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F 
		    = ((0xf7U & (IData)(vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F)) 
		       | (8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Q)));
		vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F 
		    = ((0xdfU & (IData)(vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F)) 
		       | (0x20U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Q) 
				   << 4U)));
		vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F 
		    = (0xefU & (IData)(vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F));
		vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F 
		    = (0xfdU & (IData)(vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F));
	    }
	    if (((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_BC) 
		 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_BT))) {
		vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F 
		    = ((0xfbU & (IData)(vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F)) 
		       | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDecZ) 
			  << 2U));
	    }
	    if ((1U & (((((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
			  >> 1U) & (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU_r))) 
			& (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Auto_Wait_t1))) 
		       | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU_r) 
			  & (7U != (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r)))))) {
		if ((0x10U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
		    if ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
			if ((1U & (~ ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg_r) 
				      >> 2U)))) {
			    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
				if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
				    vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F 
					= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_Mux;
				}
			    } else {
				vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SP 
				    = ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg_r))
				        ? ((0xffU & (IData)(vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SP)) 
					   | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_Mux) 
					      << 8U))
				        : ((0xff00U 
					    & (IData)(vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SP)) 
					   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_Mux)));
			    }
			}
		    } else {
			if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
			    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
				if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
				    vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ACC 
					= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_Mux;
				} else {
				    vlTOPp->top_tv__DOT__cpu_dout 
					= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_Mux;
				}
			    }
			}
		    }
		}
	    }
	    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg_r = 0U;
	    if (vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__last_tstate) {
		__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg_r 
		    = ((0x10U & (IData)(__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg_r)) 
		       | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
		__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg_r 
		    = ((0xfU & (IData)(__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg_r)) 
		       | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg) 
			  << 4U));
		if (vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Acc) {
		    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg_r 
			= (7U | (0x10U & (IData)(__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg_r)));
		    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg_r 
			= (0x10U | (IData)(__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg_r));
		}
	    }
	}
    } else {
	vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PC = 0U;
	vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F = 0xffU;
	vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Alternate = 0U;
	vlTOPp->top_tv__DOT__addr_raw = 0U;
	__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__TmpAddr = 0U;
	__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR = 0U;
	__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ISet = 0U;
	vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__XY_State = 0U;
	__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IStatus = 0U;
	vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles = 0U;
	vlTOPp->top_tv__DOT__cpu_dout = 0U;
	vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ACC = 0xffU;
	__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Ap = 0xffU;
	__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Fp = 0xffU;
	__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I = 0U;
	vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SP = 0xffffU;
	__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg_r = 0U;
	vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Arith16_r = 0U;
	__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BTR_r = 0U;
	vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Z16_r = 0U;
	__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r = 0U;
	vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU_r = 0U;
	__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC_r = 0U;
	vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__XY_Ind = 0U;
    }
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IStatus 
	= __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IStatus;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__TmpAddr 
	= __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__TmpAddr;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I 
	= __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Ap 
	= __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Ap;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Fp 
	= __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Fp;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC_r 
	= __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC_r;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BTR_r 
	= __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BTR_r;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg_r 
	= __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg_r;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r 
	= __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ISet 
	= __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ISet;
    vlTOPp->addr = ((IData)(vlTOPp->top_tv__DOT__memory_reloc_enable)
		     ? (0xc000U | (IData)(vlTOPp->top_tv__DOT__addr_raw))
		     : (IData)(vlTOPp->top_tv__DOT__addr_raw));
    // ALWAYS at tv80_core/tv80_core.v:1194
    if (vlTOPp->top_tv__DOT____Vcellinp__topcore__reset_n) {
	__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Auto_Wait_t1 
	    = ((~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__last_tstate)) 
	       & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Auto_Wait) 
		  | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i) 
		     & (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Auto_Wait_t2)))));
	__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Auto_Wait_t2 
	    = ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Auto_Wait_t1) 
	       & (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__last_tstate)));
	if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate))) {
	    if (vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SetEI) {
		if ((1U & (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__NMICycle)))) {
		    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntE_FF1 = 1U;
		}
		__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntE_FF2 = 1U;
	    }
	    if (vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_RETN) {
		__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntE_FF1 
		    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntE_FF2;
	    }
	}
	if ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate))) {
	    if (vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SetDI) {
		__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntE_FF1 = 0U;
		__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntE_FF2 = 0U;
	    }
	}
	if (((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntCycle) 
	     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__NMICycle))) {
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Halt_FF = 0U;
	}
	if ((1U & (~ ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusReq_s) 
		      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusAck))))) {
	    vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusAck = 0U;
	    if (vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__last_tstate) {
		if (vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Halt) {
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Halt_FF = 1U;
		}
		if (vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusReq_s) {
		    vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusAck = 1U;
		} else {
		    vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate = 2U;
		    if (vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__NextIs_XY_Fetch) {
			// Function: mcyc_to_number at tv80_core/tv80_core.v:1282
			__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcyc_to_number__1__mcyc 
			    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle;
			__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcyc_to_number__1__Vfuncout 
			    = ((0x40U & (IData)(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcyc_to_number__1__mcyc))
			        ? 7U : ((0x20U & (IData)(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcyc_to_number__1__mcyc))
					 ? 6U : ((0x10U 
						  & (IData)(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcyc_to_number__1__mcyc))
						  ? 5U
						  : 
						 ((8U 
						   & (IData)(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcyc_to_number__1__mcyc))
						   ? 4U
						   : 
						  ((4U 
						    & (IData)(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcyc_to_number__1__mcyc))
						    ? 3U
						    : 
						   ((2U 
						     & (IData)(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcyc_to_number__1__mcyc))
						     ? 2U
						     : 1U))))));
			__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Pre_XY_F_M 
			    = __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcyc_to_number__1__Vfuncout;
			vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle = 0x20U;
			if ((0x36U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Pre_XY_F_M = 2U;
			}
		    } else {
			if ((0x40U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
			    // Function: number_to_bitvec at tv80_core/tv80_core.v:1290
			    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__number_to_bitvec__2__num 
				= (7U & ((IData)(1U) 
					 + (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Pre_XY_F_M)));
			    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__number_to_bitvec__2__Vfuncout 
				= ((1U == (IData)(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__number_to_bitvec__2__num))
				    ? 1U : ((2U == (IData)(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__number_to_bitvec__2__num))
					     ? 2U : 
					    ((3U == (IData)(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__number_to_bitvec__2__num))
					      ? 4U : 
					     ((4U == (IData)(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__number_to_bitvec__2__num))
					       ? 8U
					       : ((5U 
						   == (IData)(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__number_to_bitvec__2__num))
						   ? 0x10U
						   : 
						  ((6U 
						    == (IData)(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__number_to_bitvec__2__num))
						    ? 0x20U
						    : 
						   ((7U 
						     == (IData)(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__number_to_bitvec__2__num))
						     ? 0x40U
						     : 0U)))))));
			    vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle 
				= __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__number_to_bitvec__2__Vfuncout;
			} else {
			    if ((((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__last_mcycle) 
				  | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__No_BTR)) 
				 | ((((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle) 
				      >> 1U) & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_DJNZ)) 
				    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDecZ)))) {
				vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle = 1U;
				vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntCycle = 0U;
				__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__NMICycle = 0U;
				if (((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__NMI_s) 
				     & (0U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Prefix)))) {
				    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__NMICycle = 1U;
				    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntE_FF1 = 0U;
				} else {
				    if (((((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntE_FF1) 
					   & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__INT_s)) 
					  & (0U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Prefix))) 
					 & (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SetEI)))) {
					vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntCycle = 1U;
					__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntE_FF1 = 0U;
					__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntE_FF2 = 0U;
				    }
				}
			    } else {
				vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle 
				    = ((0x7eU & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle) 
						 << 1U)) 
				       | (1U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle) 
						>> 6U)));
			    }
			}
		    }
		}
	    } else {
		if ((1U & ((~ ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Auto_Wait) 
			       & (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Auto_Wait_t2)))) 
			   & (~ ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i) 
				 & (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Auto_Wait_t1))))))) {
		    vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate 
			= ((0x7eU & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
				     << 1U)) | (1U 
						& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
						   >> 6U)));
		}
	    }
	}
	__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__No_BTR 
	    = ((((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_BT) 
		 & ((~ ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
			>> 4U)) | (~ ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F) 
				      >> 2U)))) | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_BC) 
						   & (((~ 
							((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							 >> 4U)) 
						       | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F) 
							  >> 6U)) 
						      | (~ 
							 ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F) 
							  >> 2U))))) 
	       | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_BTR) 
		  & ((~ ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
			 >> 4U)) | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F) 
				    >> 6U))));
    } else {
	__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntE_FF1 = 0U;
	vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle = 1U;
	vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate = 1U;
	__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Pre_XY_F_M = 0U;
	vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Halt_FF = 0U;
	vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusAck = 0U;
	__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__NMICycle = 0U;
	vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntCycle = 0U;
	__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntE_FF2 = 0U;
	__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__No_BTR = 0U;
	__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Auto_Wait_t1 = 0U;
	__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Auto_Wait_t2 = 0U;
    }
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Auto_Wait_t2 
	= __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Auto_Wait_t2;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Pre_XY_F_M 
	= __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Pre_XY_F_M;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntE_FF1 
	= __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntE_FF1;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntE_FF2 
	= __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntE_FF2;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__No_BTR 
	= __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__No_BTR;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Auto_Wait_t1 
	= __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Auto_Wait_t1;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR 
	= __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR;
    // ALWAYS at tv80_core/tv80_core.v:1160
    if (vlTOPp->top_tv__DOT____Vcellinp__topcore__reset_n) {
	vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusReq_s = 0U;
	vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__INT_s = 0U;
	if (vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__NMICycle) {
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__NMI_s = 0U;
	}
    } else {
	vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusReq_s = 0U;
	vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__INT_s = 0U;
	vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__NMI_s = 0U;
    }
    // ALWAYS at tv80_core/tv80_alu.v:106
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask 
	= ((0x20U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))
	    ? ((0x10U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))
	        ? ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))
		    ? 0x80U : 0x40U) : ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))
					 ? 0x20U : 0x10U))
	    : ((0x10U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))
	        ? ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))
		    ? 8U : 4U) : ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))
				   ? 2U : 1U)));
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__NMICycle 
	= __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__NMICycle;
}

VL_INLINE_OPT void Vtop_tv::_sequent__TOP__4(Vtop_tv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop_tv::_sequent__TOP__4\n"); );
    Vtop_tv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at tv80_core/tv80_core.v:1043
    if ((1U & (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusAck)))) {
	vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB 
	    = (0xffU & ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To))
			 ? ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To))
			     ? ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To))
				 ? 0U : ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To))
					  ? ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PC) 
					     >> 8U)
					  : (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PC)))
			     : ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To))
				 ? ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To))
				     ? (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F)
				     : 1U) : ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To))
					       ? ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SP) 
						  >> 8U)
					       : (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SP))))
			 : ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To))
			     ? ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To))
				 ? ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To))
				     ? (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ACC)
				     : (IData)(vlTOPp->top_tv__DOT__topcore__DOT__di_reg))
				 : ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To))
				     ? (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusB)
				     : ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusB) 
					>> 8U))) : 
			    ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To))
			      ? (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusB)
			      : ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusB) 
				 >> 8U)))));
	vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA 
	    = (0xffU & ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To))
			 ? ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To))
			     ? 0U : ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To))
				      ? 0U : ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To))
					       ? ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SP) 
						  >> 8U)
					       : (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SP))))
			 : ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To))
			     ? ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To))
				 ? ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To))
				     ? (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ACC)
				     : (IData)(vlTOPp->top_tv__DOT__topcore__DOT__di_reg))
				 : ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To))
				     ? (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusA)
				     : ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusA) 
					>> 8U))) : 
			    ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To))
			      ? (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusA)
			      : ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusA) 
				 >> 8U)))));
    }
    // ALWAYS at tv80_core/tv80_core.v:881
    if ((1U & (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusAck)))) {
	vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegAddrA_r 
	    = (((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Alternate) 
		<< 2U) | (3U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To) 
				>> 1U)));
	vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegAddrB_r 
	    = (((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Alternate) 
		<< 2U) | (3U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To) 
				>> 1U)));
	vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegAddrC 
	    = (((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Alternate) 
		<< 2U) | (3U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To)));
	if (((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_DJNZ) 
	     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU_r))) {
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDecZ 
		= (1U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out) 
			 >> 6U));
	}
	vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusA_r 
	    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusA;
	if ((((~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__XY_Ind)) 
	      & (0U != (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__XY_State))) 
	     & (2U == (3U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To) 
			     >> 1U))))) {
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegAddrA_r 
		= (3U | (4U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__XY_State) 
			       << 1U)));
	}
	if ((((~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__XY_Ind)) 
	      & (0U != (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__XY_State))) 
	     & (2U == (3U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To) 
			     >> 1U))))) {
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegAddrB_r 
		= (3U | (4U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__XY_State) 
			       << 1U)));
	}
	if (((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__JumpXY) 
	     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDSPHL))) {
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegAddrC 
		= (2U | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Alternate) 
			 << 2U));
	}
	if (((((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
	       >> 2U) | (((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
			  >> 3U) & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) 
	     & (4U == (7U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16))))) {
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDecZ 
		= (0U != (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ID16));
	}
	if ((1U & ((((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__JumpXY) 
		     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDSPHL)) 
		    & (0U != (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__XY_State))) 
		   | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle) 
		      >> 5U)))) {
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegAddrC 
		= (3U | (4U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__XY_State) 
			       << 1U)));
	}
    }
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOCH 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
	[vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegAddrC];
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOCL 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
	[vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegAddrC];
}

void Vtop_tv::_settle__TOP__5(Vtop_tv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop_tv::_settle__TOP__5\n"); );
    Vtop_tv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->addr = ((IData)(vlTOPp->top_tv__DOT__memory_reloc_enable)
		     ? (0xc000U | (IData)(vlTOPp->top_tv__DOT__addr_raw))
		     : (IData)(vlTOPp->top_tv__DOT__addr_raw));
    // ALWAYS at tv80_core/tv80_alu.v:106
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask 
	= ((0x20U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))
	    ? ((0x10U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))
	        ? ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))
		    ? 0x80U : 0x40U) : ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))
					 ? 0x20U : 0x10U))
	    : ((0x10U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))
	        ? ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))
		    ? 8U : 4U) : ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))
				   ? 2U : 1U)));
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOCH 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
	[vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegAddrC];
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOCL 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
	[vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegAddrC];
    vlTOPp->top_tv__DOT__mem_dout = vlTOPp->top_tv__DOT__memory__DOT__memory
	[vlTOPp->addr];
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusC 
	= ((0xffU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusC)) 
	   | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOCH) 
	      << 8U));
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusC 
	= ((0xff00U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusC)) 
	   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOCL));
}

VL_INLINE_OPT void Vtop_tv::_sequent__TOP__6(Vtop_tv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop_tv::_sequent__TOP__6\n"); );
    Vtop_tv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ACC 
	= vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ACC;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PC 
	= vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PC;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SP 
	= vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SP;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F 
	= vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusAck 
	= vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusAck;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__XY_Ind 
	= vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__XY_Ind;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU_r 
	= vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU_r;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__XY_State 
	= vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__XY_State;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Alternate 
	= vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Alternate;
    vlTOPp->top_tv__DOT__mem_dout = vlTOPp->top_tv__DOT__memory__DOT__memory
	[vlTOPp->addr];
    // ALWAYS at tv80_core/tv80_alu.v:109
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__UseCarry 
	= (1U & ((~ ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r) 
		     >> 2U)) & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r)));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Carry_In 
	= (1U & (((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r) 
		  >> 1U) ^ ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__UseCarry) 
			    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F))));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Sub 
	= (1U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r) 
		 >> 1U));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__B 
	= (0xfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__A 
	= (0xfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Vfuncout 
	= (0x1fU & (((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__A) 
		     + (0xfU & ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Sub)
				 ? (~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__B))
				 : (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__B)))) 
		    + (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Carry_In)));
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v 
	= (1U & ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Vfuncout) 
		 >> 4U));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__28__Carry_In 
	= (1U & (((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r) 
		  >> 1U) ^ ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__UseCarry) 
			    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F))));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__28__Sub 
	= (1U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r) 
		 >> 1U));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__28__B 
	= (0xfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__28__A 
	= (0xfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__28__Vfuncout 
	= (0x1fU & (((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__28__A) 
		     + (0xfU & ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__28__Sub)
				 ? (~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__28__B))
				 : (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__28__B)))) 
		    + (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__28__Carry_In)));
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v 
	= ((0xf0U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v)) 
	   | (0xfU & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__28__Vfuncout)));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Carry_In 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v;
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Sub 
	= (1U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r) 
		 >> 1U));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__B 
	= (7U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB) 
		 >> 4U));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__A 
	= (7U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA) 
		 >> 4U));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Vfuncout 
	= (0xfU & (((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__A) 
		    + (7U & ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Sub)
			      ? (~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__B))
			      : (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__B)))) 
		   + (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Carry_In)));
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v 
	= (1U & ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Vfuncout) 
		 >> 3U));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__30__Carry_In 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v;
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__30__Sub 
	= (1U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r) 
		 >> 1U));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__30__B 
	= (7U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB) 
		 >> 4U));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__30__A 
	= (7U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA) 
		 >> 4U));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__30__Vfuncout 
	= (0xfU & (((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__30__A) 
		    + (7U & ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__30__Sub)
			      ? (~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__30__B))
			      : (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__30__B)))) 
		   + (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__30__Carry_In)));
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v 
	= ((0x8fU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v)) 
	   | (0x70U & ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__30__Vfuncout) 
		       << 4U)));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Carry_In 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v;
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Sub 
	= (1U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r) 
		 >> 1U));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__B 
	= (1U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB) 
		 >> 7U));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__A 
	= (1U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA) 
		 >> 7U));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Vfuncout 
	= (3U & (((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__A) 
		  + (1U & ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Sub)
			    ? (~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__B))
			    : (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__B)))) 
		 + (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Carry_In)));
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v 
	= (1U & ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Vfuncout) 
		 >> 1U));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__32__Carry_In 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v;
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__32__Sub 
	= (1U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r) 
		 >> 1U));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__32__B 
	= (1U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB) 
		 >> 7U));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__32__A 
	= (1U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA) 
		 >> 7U));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__32__Vfuncout 
	= (3U & (((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__32__A) 
		  + (1U & ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__32__Sub)
			    ? (~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__32__B))
			    : (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__32__B)))) 
		 + (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__32__Carry_In)));
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v 
	= ((0x7fU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v)) 
	   | (0x80U & ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__32__Vfuncout) 
		       << 7U)));
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v 
	= ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v) 
	   ^ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v));
    // ALWAYS at tv80_core/tv80s.v:100
    if (vlTOPp->top_tv__DOT____Vcellinp__topcore__reset_n) {
	vlTOPp->top_tv__DOT__wr_n = 1U;
	if ((1U & ((((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
		     >> 2U) & (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__write))) 
		   & (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__no_read))))) {
	    vlTOPp->top_tv__DOT__topcore__DOT__di_reg 
		= vlTOPp->top_tv__DOT__cpu_din;
	}
	vlTOPp->top_tv__DOT__iorq_n = 1U;
	vlTOPp->top_tv__DOT__mreq_n = 1U;
	if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
	    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate))) {
		vlTOPp->top_tv__DOT__mreq_n = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntCycle;
		vlTOPp->top_tv__DOT__iorq_n = (1U & 
					       (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntCycle)));
	    }
	} else {
	    if ((1U & ((((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
			 >> 1U) & (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__no_read))) 
		       & (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__write))))) {
		vlTOPp->top_tv__DOT__iorq_n = (1U & 
					       (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i)));
		vlTOPp->top_tv__DOT__mreq_n = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i;
	    }
	    if ((((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
		  >> 1U) & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__write))) {
		vlTOPp->top_tv__DOT__wr_n = 0U;
		vlTOPp->top_tv__DOT__iorq_n = (1U & 
					       (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i)));
		vlTOPp->top_tv__DOT__mreq_n = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i;
	    }
	}
    } else {
	vlTOPp->top_tv__DOT__wr_n = 1U;
	vlTOPp->top_tv__DOT__iorq_n = 1U;
	vlTOPp->top_tv__DOT__mreq_n = 1U;
	vlTOPp->top_tv__DOT__topcore__DOT__di_reg = 0U;
    }
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate 
	= vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntCycle 
	= vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntCycle;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle 
	= vlTOPp->__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle;
    vlTOPp->top_tv__DOT__cpu_din = ((IData)(vlTOPp->top_tv__DOT__mreq_n)
				     ? 0xffU : (IData)(vlTOPp->top_tv__DOT__mem_dout));
    // ALWAYS at tv80_core/tv80_core.v:326
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__last_mcycle 
	= (1U & ((1U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles))
		  ? (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle)
		  : ((2U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles))
		      ? ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle) 
			 >> 1U) : ((3U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles))
				    ? ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle) 
				       >> 2U) : ((4U 
						  == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles))
						  ? 
						 ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle) 
						  >> 3U)
						  : 
						 ((5U 
						   == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles))
						   ? 
						  ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle) 
						   >> 4U)
						   : 
						  ((6U 
						    == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles))
						    ? 
						   ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle) 
						    >> 5U)
						    : 
						   ((7U 
						     == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles)) 
						    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle) 
						       >> 6U)))))))));
    // ALWAYS at tv80_core/tv80_core.v:1378
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Auto_Wait = 0U;
    if (((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntCycle) 
	 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__NMICycle))) {
	if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Auto_Wait = 1U;
	}
    }
    // ALWAYS at tv80_core/tv80_mcode.v:202
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD 
	= (7U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
		 >> 3U));
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS 
	= (7U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR));
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR 
	= (3U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
		 >> 4U));
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 1U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates 
	= ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))
	    ? 4U : 3U);
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Prefix = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_WZ = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Acc = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op 
	= (7U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
		 >> 3U));
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Arith16 = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 7U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__JumpE = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__JumpXY = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Call = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RstP = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDW = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDSPHL = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Special_LD = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ExchangeDH = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ExchangeRp = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ExchangeAF = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ExchangeRS = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_DJNZ = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_CPL = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_CCF = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_SCF = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_RETN = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_BT = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_BC = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_BTR = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_RLD = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_RRD = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_INRC = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SetDI = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SetEI = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IMode = 3U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Halt = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__no_read = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__write = 0U;
    if ((0U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ISet))) {
	if ((0x80U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
	    if ((0x40U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
		if ((0x20U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
		    if ((0x10U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			if ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			    if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RstP = 1U;
						}
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (7U 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Prefix = 3U;
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 5U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						// Function: is_cc_true at tv80_core/tv80_mcode.v:1444
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc 
						    = 
						    (7U 
						     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							>> 3U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDW = 1U;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF 
						    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__Vfuncout 
						    = 
						    (1U 
						     & ((4U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
							 ? 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
							   >> 7U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
							    >> 7U)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
							   >> 2U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
							    >> 2U))))
							 : 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
							   ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF)
							   : 
							  (~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
							   >> 6U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
							    >> 6U))))));
						if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__Vfuncout) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
						}
					    } else {
						if (
						    (8U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
						} else {
						    if (
							(0x10U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Call = 1U;
						    }
						}
					    }
					}
				    }
				}
			    } else {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SetEI = 1U;
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						// Function: is_cc_true at tv80_core/tv80_mcode.v:1289
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc 
						    = 
						    (7U 
						     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							>> 3U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF 
						    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__Vfuncout 
						    = 
						    (1U 
						     & ((4U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
							 ? 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF) 
							   >> 7U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF) 
							    >> 7U)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF) 
							   >> 2U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF) 
							    >> 2U))))
							 : 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
							   ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF)
							   : 
							  (~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF) 
							   >> 6U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF) 
							    >> 6U))))));
						if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__Vfuncout) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
						}
					    }
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 6U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDSPHL = 1U;
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    // Function: is_cc_true at tv80_core/tv80_mcode.v:1618
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc 
						= (7U 
						   & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
						      >> 3U));
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF 
						= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__Vfuncout 
						= (1U 
						   & ((4U 
						       & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
						       ? 
						      ((2U 
							& (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
						        ? 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF) 
							 >> 7U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF) 
							  >> 7U)))
						        : 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF) 
							 >> 2U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF) 
							  >> 2U))))
						       : 
						      ((2U 
							& (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
						        ? 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
							 ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF)
							 : 
							(~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF)))
						        : 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF) 
							 >> 6U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF) 
							  >> 6U))))));
					    if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__Vfuncout) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    } else {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 1U;
					    }
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						}
					    }
					}
				    }
				}
			    }
			} else {
			    if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RstP = 1U;
						}
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (7U 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    if ((3U 
						 == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
					    } else {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((9U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
							<< 1U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    (0xeU 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    (7U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
					    }
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						if (
						    (3U 
						     == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xbU;
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							((9U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							 | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
							    << 1U));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(1U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(7U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						}
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						}
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 5U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						// Function: is_cc_true at tv80_core/tv80_mcode.v:1444
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc 
						    = 
						    (7U 
						     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							>> 3U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDW = 1U;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF 
						    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__Vfuncout 
						    = 
						    (1U 
						     & ((4U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
							 ? 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
							   >> 7U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
							    >> 7U)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
							   >> 2U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
							    >> 2U))))
							 : 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
							   ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF)
							   : 
							  (~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
							   >> 6U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
							    >> 6U))))));
						if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__Vfuncout) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
						}
					    } else {
						if (
						    (8U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
						} else {
						    if (
							(0x10U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Call = 1U;
						    }
						}
					    }
					}
				    }
				}
			    } else {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SetDI = 1U;
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						// Function: is_cc_true at tv80_core/tv80_mcode.v:1289
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc 
						    = 
						    (7U 
						     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							>> 3U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF 
						    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__Vfuncout 
						    = 
						    (1U 
						     & ((4U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
							 ? 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF) 
							   >> 7U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF) 
							    >> 7U)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF) 
							   >> 2U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF) 
							    >> 2U))))
							 : 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
							   ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF)
							   : 
							  (~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF) 
							   >> 6U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF) 
							    >> 6U))))));
						if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__Vfuncout) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
						}
					    }
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						if (
						    (3U 
						     == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 0xbU;
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((9U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
							    << 1U));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							(1U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
						}
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    if (
							(3U 
							 == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 7U;
						    } else {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							    = 
							    ((9U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							     | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
								<< 1U));
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							    = 
							    (0xeU 
							     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
						    }
						}
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    // Function: is_cc_true at tv80_core/tv80_mcode.v:1618
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc 
						= (7U 
						   & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
						      >> 3U));
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF 
						= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__Vfuncout 
						= (1U 
						   & ((4U 
						       & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
						       ? 
						      ((2U 
							& (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
						        ? 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF) 
							 >> 7U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF) 
							  >> 7U)))
						        : 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF) 
							 >> 2U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF) 
							  >> 2U))))
						       : 
						      ((2U 
							& (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
						        ? 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
							 ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF)
							 : 
							(~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF)))
						        : 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF) 
							 >> 6U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF) 
							  >> 6U))))));
					    if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__Vfuncout) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    } else {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 1U;
					    }
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						}
					    }
					}
				    }
				}
			    }
			}
		    } else {
			if ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			    if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RstP = 1U;
						}
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (7U 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Prefix = 2U;
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 5U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						// Function: is_cc_true at tv80_core/tv80_mcode.v:1444
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc 
						    = 
						    (7U 
						     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							>> 3U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDW = 1U;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF 
						    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__Vfuncout 
						    = 
						    (1U 
						     & ((4U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
							 ? 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
							   >> 7U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
							    >> 7U)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
							   >> 2U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
							    >> 2U))))
							 : 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
							   ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF)
							   : 
							  (~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
							   >> 6U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
							    >> 6U))))));
						if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__Vfuncout) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
						}
					    } else {
						if (
						    (8U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
						} else {
						    if (
							(0x10U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Call = 1U;
						    }
						}
					    }
					}
				    }
				}
			    } else {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ExchangeDH = 1U;
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						// Function: is_cc_true at tv80_core/tv80_mcode.v:1289
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc 
						    = 
						    (7U 
						     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							>> 3U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF 
						    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__Vfuncout 
						    = 
						    (1U 
						     & ((4U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
							 ? 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF) 
							   >> 7U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF) 
							    >> 7U)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF) 
							   >> 2U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF) 
							    >> 2U))))
							 : 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
							   ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF)
							   : 
							  (~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF) 
							   >> 6U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF) 
							    >> 6U))))));
						if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__Vfuncout) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
						}
					    }
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__JumpXY = 1U;
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    // Function: is_cc_true at tv80_core/tv80_mcode.v:1618
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc 
						= (7U 
						   & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
						      >> 3U));
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF 
						= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__Vfuncout 
						= (1U 
						   & ((4U 
						       & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
						       ? 
						      ((2U 
							& (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
						        ? 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF) 
							 >> 7U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF) 
							  >> 7U)))
						        : 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF) 
							 >> 2U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF) 
							  >> 2U))))
						       : 
						      ((2U 
							& (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
						        ? 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
							 ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF)
							 : 
							(~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF)))
						        : 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF) 
							 >> 6U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF) 
							  >> 6U))))));
					    if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__Vfuncout) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    } else {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 1U;
					    }
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						}
					    }
					}
				    }
				}
			    }
			} else {
			    if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RstP = 1U;
						}
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (7U 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    if ((3U 
						 == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
					    } else {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((9U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
							<< 1U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    (0xeU 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    (7U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
					    }
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						if (
						    (3U 
						     == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xbU;
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							((9U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							 | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
							    << 1U));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(1U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(7U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						}
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						}
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 5U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						// Function: is_cc_true at tv80_core/tv80_mcode.v:1444
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc 
						    = 
						    (7U 
						     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							>> 3U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDW = 1U;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF 
						    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__Vfuncout 
						    = 
						    (1U 
						     & ((4U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
							 ? 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
							   >> 7U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
							    >> 7U)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
							   >> 2U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
							    >> 2U))))
							 : 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
							   ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF)
							   : 
							  (~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
							   >> 6U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
							    >> 6U))))));
						if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__Vfuncout) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
						}
					    } else {
						if (
						    (8U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
						} else {
						    if (
							(0x10U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Call = 1U;
						    }
						}
					    }
					}
				    }
				}
			    } else {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 5U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						} else {
						    if (
							(8U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 4U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 4U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    } else {
							if (
							    (0x10U 
							     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
							    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
							}
						    }
						}
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						// Function: is_cc_true at tv80_core/tv80_mcode.v:1289
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc 
						    = 
						    (7U 
						     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							>> 3U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF 
						    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__Vfuncout 
						    = 
						    (1U 
						     & ((4U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
							 ? 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF) 
							   >> 7U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF) 
							    >> 7U)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF) 
							   >> 2U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF) 
							    >> 2U))))
							 : 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
							   ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF)
							   : 
							  (~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF) 
							   >> 6U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF) 
							    >> 6U))))));
						if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__Vfuncout) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
						}
					    }
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						if (
						    (3U 
						     == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 0xbU;
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((9U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
							    << 1U));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							(1U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
						}
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    if (
							(3U 
							 == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 7U;
						    } else {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							    = 
							    ((9U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							     | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
								<< 1U));
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							    = 
							    (0xeU 
							     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
						    }
						}
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    // Function: is_cc_true at tv80_core/tv80_mcode.v:1618
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc 
						= (7U 
						   & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
						      >> 3U));
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF 
						= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__Vfuncout 
						= (1U 
						   & ((4U 
						       & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
						       ? 
						      ((2U 
							& (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
						        ? 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF) 
							 >> 7U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF) 
							  >> 7U)))
						        : 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF) 
							 >> 2U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF) 
							  >> 2U))))
						       : 
						      ((2U 
							& (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
						        ? 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
							 ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF)
							 : 
							(~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF)))
						        : 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF) 
							 >> 6U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF) 
							  >> 6U))))));
					    if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__Vfuncout) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    } else {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 1U;
					    }
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0x10U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			if ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			    if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RstP = 1U;
						}
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (7U 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Prefix = 3U;
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 5U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						// Function: is_cc_true at tv80_core/tv80_mcode.v:1444
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc 
						    = 
						    (7U 
						     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							>> 3U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDW = 1U;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF 
						    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__Vfuncout 
						    = 
						    (1U 
						     & ((4U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
							 ? 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
							   >> 7U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
							    >> 7U)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
							   >> 2U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
							    >> 2U))))
							 : 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
							   ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF)
							   : 
							  (~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
							   >> 6U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
							    >> 6U))))));
						if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__Vfuncout) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
						}
					    } else {
						if (
						    (8U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
						} else {
						    if (
							(0x10U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Call = 1U;
						    }
						}
					    }
					}
				    }
				}
			    } else {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 4U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i = 1U;
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						// Function: is_cc_true at tv80_core/tv80_mcode.v:1289
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc 
						    = 
						    (7U 
						     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							>> 3U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF 
						    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__Vfuncout 
						    = 
						    (1U 
						     & ((4U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
							 ? 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF) 
							   >> 7U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF) 
							    >> 7U)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF) 
							   >> 2U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF) 
							    >> 2U))))
							 : 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
							   ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF)
							   : 
							  (~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF) 
							   >> 6U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF) 
							    >> 6U))))));
						if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__Vfuncout) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
						}
					    }
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ExchangeRS = 1U;
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    // Function: is_cc_true at tv80_core/tv80_mcode.v:1618
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc 
						= (7U 
						   & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
						      >> 3U));
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF 
						= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__Vfuncout 
						= (1U 
						   & ((4U 
						       & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
						       ? 
						      ((2U 
							& (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
						        ? 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF) 
							 >> 7U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF) 
							  >> 7U)))
						        : 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF) 
							 >> 2U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF) 
							  >> 2U))))
						       : 
						      ((2U 
							& (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
						        ? 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
							 ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF)
							 : 
							(~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF)))
						        : 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF) 
							 >> 6U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF) 
							  >> 6U))))));
					    if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__Vfuncout) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    } else {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 1U;
					    }
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						}
					    }
					}
				    }
				}
			    }
			} else {
			    if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RstP = 1U;
						}
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (7U 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    if ((3U 
						 == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
					    } else {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((9U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
							<< 1U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    (0xeU 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    (7U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
					    }
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						if (
						    (3U 
						     == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xbU;
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							((9U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							 | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
							    << 1U));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(1U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(7U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						}
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						}
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 5U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						// Function: is_cc_true at tv80_core/tv80_mcode.v:1444
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc 
						    = 
						    (7U 
						     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							>> 3U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDW = 1U;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF 
						    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__Vfuncout 
						    = 
						    (1U 
						     & ((4U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
							 ? 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
							   >> 7U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
							    >> 7U)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
							   >> 2U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
							    >> 2U))))
							 : 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
							   ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF)
							   : 
							  (~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
							   >> 6U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
							    >> 6U))))));
						if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__Vfuncout) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
						}
					    } else {
						if (
						    (8U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
						} else {
						    if (
							(0x10U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Call = 1U;
						    }
						}
					    }
					}
				    }
				}
			    } else {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 4U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i = 1U;
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						// Function: is_cc_true at tv80_core/tv80_mcode.v:1289
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc 
						    = 
						    (7U 
						     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							>> 3U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF 
						    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__Vfuncout 
						    = 
						    (1U 
						     & ((4U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
							 ? 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF) 
							   >> 7U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF) 
							    >> 7U)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF) 
							   >> 2U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF) 
							    >> 2U))))
							 : 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
							   ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF)
							   : 
							  (~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF) 
							   >> 6U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF) 
							    >> 6U))))));
						if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__Vfuncout) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
						}
					    }
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						if (
						    (3U 
						     == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 0xbU;
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((9U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
							    << 1U));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							(1U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
						}
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    if (
							(3U 
							 == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 7U;
						    } else {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							    = 
							    ((9U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							     | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
								<< 1U));
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							    = 
							    (0xeU 
							     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
						    }
						}
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    // Function: is_cc_true at tv80_core/tv80_mcode.v:1618
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc 
						= (7U 
						   & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
						      >> 3U));
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF 
						= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__Vfuncout 
						= (1U 
						   & ((4U 
						       & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
						       ? 
						      ((2U 
							& (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
						        ? 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF) 
							 >> 7U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF) 
							  >> 7U)))
						        : 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF) 
							 >> 2U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF) 
							  >> 2U))))
						       : 
						      ((2U 
							& (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
						        ? 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
							 ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF)
							 : 
							(~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF)))
						        : 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF) 
							 >> 6U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF) 
							  >> 6U))))));
					    if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__Vfuncout) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    } else {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 1U;
					    }
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						}
					    }
					}
				    }
				}
			    }
			}
		    } else {
			if ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			    if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RstP = 1U;
						}
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (7U 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 5U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDW = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
					    } else {
						if (
						    (8U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
						} else {
						    if (
							(0x10U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Call = 1U;
						    }
						}
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 5U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						// Function: is_cc_true at tv80_core/tv80_mcode.v:1444
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc 
						    = 
						    (7U 
						     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							>> 3U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDW = 1U;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF 
						    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__Vfuncout 
						    = 
						    (1U 
						     & ((4U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
							 ? 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
							   >> 7U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
							    >> 7U)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
							   >> 2U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
							    >> 2U))))
							 : 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
							   ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF)
							   : 
							  (~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
							   >> 6U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
							    >> 6U))))));
						if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__Vfuncout) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
						}
					    } else {
						if (
						    (8U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
						} else {
						    if (
							(0x10U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Call = 1U;
						    }
						}
					    }
					}
				    }
				}
			    } else {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Prefix = 1U;
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						// Function: is_cc_true at tv80_core/tv80_mcode.v:1289
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc 
						    = 
						    (7U 
						     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							>> 3U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF 
						    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__Vfuncout 
						    = 
						    (1U 
						     & ((4U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
							 ? 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF) 
							   >> 7U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF) 
							    >> 7U)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF) 
							   >> 2U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF) 
							    >> 2U))))
							 : 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
							   ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF)
							   : 
							  (~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF) 
							   >> 6U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF) 
							    >> 6U))))));
						if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__Vfuncout) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
						}
					    }
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						}
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    // Function: is_cc_true at tv80_core/tv80_mcode.v:1618
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc 
						= (7U 
						   & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
						      >> 3U));
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF 
						= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__Vfuncout 
						= (1U 
						   & ((4U 
						       & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
						       ? 
						      ((2U 
							& (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
						        ? 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF) 
							 >> 7U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF) 
							  >> 7U)))
						        : 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF) 
							 >> 2U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF) 
							  >> 2U))))
						       : 
						      ((2U 
							& (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
						        ? 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
							 ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF)
							 : 
							(~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF)))
						        : 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF) 
							 >> 6U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF) 
							  >> 6U))))));
					    if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__Vfuncout) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    } else {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 1U;
					    }
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						}
					    }
					}
				    }
				}
			    }
			} else {
			    if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RstP = 1U;
						}
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (7U 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    if ((3U 
						 == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
					    } else {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((9U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
							<< 1U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    (0xeU 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    (7U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
					    }
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						if (
						    (3U 
						     == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xbU;
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							((9U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							 | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
							    << 1U));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(1U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(7U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						}
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						}
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 5U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						// Function: is_cc_true at tv80_core/tv80_mcode.v:1444
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc 
						    = 
						    (7U 
						     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							>> 3U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDW = 1U;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF 
						    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__Vfuncout 
						    = 
						    (1U 
						     & ((4U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
							 ? 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
							   >> 7U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
							    >> 7U)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
							   >> 2U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
							    >> 2U))))
							 : 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
							   ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF)
							   : 
							  (~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
							   >> 6U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
							    >> 6U))))));
						if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__Vfuncout) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
						}
					    } else {
						if (
						    (8U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
						} else {
						    if (
							(0x10U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Call = 1U;
						    }
						}
					    }
					}
				    }
				}
			    } else {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					}
					if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						// Function: is_cc_true at tv80_core/tv80_mcode.v:1289
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc 
						    = 
						    (7U 
						     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							>> 3U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF 
						    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__Vfuncout 
						    = 
						    (1U 
						     & ((4U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
							 ? 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF) 
							   >> 7U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF) 
							    >> 7U)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF) 
							   >> 2U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF) 
							    >> 2U))))
							 : 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
							   ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF)
							   : 
							  (~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF) 
							   >> 6U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF) 
							    >> 6U))))));
						if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__Vfuncout) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
						}
					    }
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						if (
						    (3U 
						     == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 0xbU;
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((9U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
							    << 1U));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							(1U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
						}
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    if (
							(3U 
							 == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 7U;
						    } else {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							    = 
							    ((9U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							     | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
								<< 1U));
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							    = 
							    (0xeU 
							     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
						    }
						}
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    // Function: is_cc_true at tv80_core/tv80_mcode.v:1618
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__26__cc 
						= (7U 
						   & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
						      >> 3U));
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__26__FF 
						= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__26__Vfuncout 
						= (1U 
						   & ((4U 
						       & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__26__cc))
						       ? 
						      ((2U 
							& (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__26__cc))
						        ? 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__26__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__26__FF) 
							 >> 7U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__26__FF) 
							  >> 7U)))
						        : 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__26__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__26__FF) 
							 >> 2U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__26__FF) 
							  >> 2U))))
						       : 
						      ((2U 
							& (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__26__cc))
						        ? 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__26__cc))
							 ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__26__FF)
							 : 
							(~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__26__FF)))
						        : 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__26__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__26__FF) 
							 >> 6U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__26__FF) 
							  >> 6U))))));
					    if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__26__Vfuncout) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    } else {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 1U;
					    }
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    } else {
		if ((6U == (7U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR)))) {
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
		    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
			vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
		    } else {
			if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
				= ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
				   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
				= (7U | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
			}
		    }
		} else {
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
			= ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
			   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
			= (7U | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
		}
	    }
	} else {
	    if ((0x40U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
		if ((0x36U == (0x3fU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR)))) {
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Halt = 1U;
		} else {
		    if ((6U == (7U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR)))) {
			vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
			if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
			}
			if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
				= ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
				   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
			}
		    } else {
			if ((6U == (7U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					  >> 3U)))) {
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
			    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
				    = ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
				       | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
				    = (7U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
			    }
			    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
				vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
			    }
			} else {
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
				= ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
				   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ExchangeRp = 1U;
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
				= ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
				   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
			}
		    }
		}
	    } else {
		if ((0x20U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
		    if ((0x10U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			if ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			    if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_CCF = 1U;
				    } else {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    (7U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
					    }
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    }
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((8U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
					}
				    } else {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((8U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0U;
					}
				    }
				}
			    } else {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 6U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 
					    = (0xcU 
					       | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16));
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 
					    = ((0xcU 
						& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16)) 
					       | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 4U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					}
					if ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
					}
					if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (5U 
						   | (8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
					    if ((((0U 
						   == 
						   (3U 
						    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
						       >> 4U))) 
						  | (1U 
						     == 
						     (3U 
						      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							 >> 4U)))) 
						 | (2U 
						    == 
						    (3U 
						     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							>> 4U))))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((9U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | (6U 
							& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							   >> 3U)));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    (1U 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
					    } else {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 8U;
					    }
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Arith16 = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    (4U 
						     | (8U 
							& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((((0U 
							== 
							(3U 
							 & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							    >> 4U))) 
						       | (1U 
							  == 
							  (3U 
							   & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							      >> 4U)))) 
						      | (2U 
							 == 
							 (3U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 4U))))
						      ? 
						     ((9U 
						       & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						      | (6U 
							 & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							    >> 3U)))
						      : 9U);
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Arith16 = 1U;
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    if ((0U 
						 == 
						 (3U 
						  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
						     >> 3U)))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d 
						    = 
						    ((0x40U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F))
						      ? 2U
						      : 3U);
					    } else {
						if (
						    (1U 
						     == 
						     (3U 
						      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							 >> 3U)))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d 
							= 
							((0x40U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F))
							  ? 3U
							  : 2U);
						} else {
						    if (
							(2U 
							 == 
							 (3U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 3U)))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d 
							    = 
							    ((1U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F))
							      ? 2U
							      : 3U);
						    } else {
							if (
							    (3U 
							     == 
							     (3U 
							      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								 >> 3U)))) {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d 
								= 
								((1U 
								  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F))
								  ? 3U
								  : 2U);
							}
						    }
						}
					    }
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__JumpE = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    }
					}
				    }
				}
			    }
			} else {
			    if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_SCF = 1U;
				    } else {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    (7U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
					    }
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    }
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((8U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
					}
				    } else {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((8U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0U;
					}
				    }
				}
			    } else {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 6U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 
					    = (4U | 
					       (3U 
						& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16)));
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 
					    = ((0xcU 
						& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16)) 
					       | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 4U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
					    } else {
						if (
						    (8U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						}
					    }
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    if ((3U 
						 == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 8U;
					    } else {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    ((9U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						     | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
							<< 1U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    (1U 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
					    }
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						if (
						    (3U 
						     == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 9U;
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((9U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
							    << 1U));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							(0xeU 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
						}
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    if ((0U 
						 == 
						 (3U 
						  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
						     >> 3U)))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d 
						    = 
						    ((0x40U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F))
						      ? 2U
						      : 3U);
					    } else {
						if (
						    (1U 
						     == 
						     (3U 
						      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							 >> 3U)))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d 
							= 
							((0x40U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F))
							  ? 3U
							  : 2U);
						} else {
						    if (
							(2U 
							 == 
							 (3U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 3U)))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d 
							    = 
							    ((1U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F))
							      ? 2U
							      : 3U);
						    } else {
							if (
							    (3U 
							     == 
							     (3U 
							      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								 >> 3U)))) {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d 
								= 
								((1U 
								  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F))
								  ? 3U
								  : 2U);
							}
						    }
						}
					    }
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__JumpE = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    }
					}
				    }
				}
			    }
			}
		    } else {
			if ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			    if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_CPL = 1U;
				    } else {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    (7U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
					    }
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    }
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((8U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
					}
				    } else {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((8U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0U;
					}
				    }
				}
			    } else {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 6U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 
					    = (0xcU 
					       | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16));
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 
					    = ((0xcU 
						& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16)) 
					       | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 5U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDW = 1U;
					    } else {
						if (
						    (8U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							(5U 
							 | (8U 
							    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
						} else {
						    if (
							(0x10U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							    = 
							    (4U 
							     | (8U 
								& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    }
						}
					    }
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (5U 
						   | (8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
					    if ((((0U 
						   == 
						   (3U 
						    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
						       >> 4U))) 
						  | (1U 
						     == 
						     (3U 
						      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							 >> 4U)))) 
						 | (2U 
						    == 
						    (3U 
						     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							>> 4U))))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((9U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | (6U 
							& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							   >> 3U)));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    (1U 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
					    } else {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 8U;
					    }
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Arith16 = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    (4U 
						     | (8U 
							& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((((0U 
							== 
							(3U 
							 & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							    >> 4U))) 
						       | (1U 
							  == 
							  (3U 
							   & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							      >> 4U)))) 
						      | (2U 
							 == 
							 (3U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 4U))))
						      ? 
						     ((9U 
						       & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						      | (6U 
							 & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							    >> 3U)))
						      : 9U);
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Arith16 = 1U;
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    if ((0U 
						 == 
						 (3U 
						  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
						     >> 3U)))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d 
						    = 
						    ((0x40U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F))
						      ? 2U
						      : 3U);
					    } else {
						if (
						    (1U 
						     == 
						     (3U 
						      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							 >> 3U)))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d 
							= 
							((0x40U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F))
							  ? 3U
							  : 2U);
						} else {
						    if (
							(2U 
							 == 
							 (3U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 3U)))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d 
							    = 
							    ((1U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F))
							      ? 2U
							      : 3U);
						    } else {
							if (
							    (3U 
							     == 
							     (3U 
							      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								 >> 3U)))) {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d 
								= 
								((1U 
								  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F))
								  ? 3U
								  : 2U);
							}
						    }
						}
					    }
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__JumpE = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    }
					}
				    }
				}
			    }
			} else {
			    if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
					    = (7U | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0xcU;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
				    } else {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    (7U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
					    }
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    }
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((8U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
					}
				    } else {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((8U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0U;
					}
				    }
				}
			    } else {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 6U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 
					    = (4U | 
					       (3U 
						& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16)));
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 
					    = ((0xcU 
						& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16)) 
					       | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 5U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDW = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 5U;
					    } else {
						if (
						    (8U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 4U;
						} else {
						    if (
							(0x10U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    }
						}
					    }
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    if ((3U 
						 == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 8U;
					    } else {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    ((9U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						     | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
							<< 1U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    (1U 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
					    }
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						if (
						    (3U 
						     == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 9U;
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((9U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
							    << 1U));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							(0xeU 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
						}
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    if ((0U 
						 == 
						 (3U 
						  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
						     >> 3U)))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d 
						    = 
						    ((0x40U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F))
						      ? 2U
						      : 3U);
					    } else {
						if (
						    (1U 
						     == 
						     (3U 
						      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							 >> 3U)))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d 
							= 
							((0x40U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F))
							  ? 3U
							  : 2U);
						} else {
						    if (
							(2U 
							 == 
							 (3U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 3U)))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d 
							    = 
							    ((1U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F))
							      ? 2U
							      : 3U);
						    } else {
							if (
							    (3U 
							     == 
							     (3U 
							      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								 >> 3U)))) {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d 
								= 
								((1U 
								  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F))
								  ? 3U
								  : 2U);
							}
						    }
						}
					    }
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__JumpE = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    }
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0x10U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			if ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			    if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
					    = (7U | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 8U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
				    } else {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    (7U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
					    }
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    }
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((8U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
					}
				    } else {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((8U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0U;
					}
				    }
				}
			    } else {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 6U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 
					    = (0xcU 
					       | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16));
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 
					    = ((0xcU 
						& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16)) 
					       | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 1U;
					}
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (5U 
						   | (8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
					    if ((((0U 
						   == 
						   (3U 
						    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
						       >> 4U))) 
						  | (1U 
						     == 
						     (3U 
						      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							 >> 4U)))) 
						 | (2U 
						    == 
						    (3U 
						     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							>> 4U))))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((9U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | (6U 
							& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							   >> 3U)));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    (1U 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
					    } else {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 8U;
					    }
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Arith16 = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    (4U 
						     | (8U 
							& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((((0U 
							== 
							(3U 
							 & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							    >> 4U))) 
						       | (1U 
							  == 
							  (3U 
							   & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							      >> 4U)))) 
						      | (2U 
							 == 
							 (3U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 4U))))
						      ? 
						     ((9U 
						       & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						      | (6U 
							 & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							    >> 3U)))
						      : 9U);
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Arith16 = 1U;
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__JumpE = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    }
					}
				    }
				}
			    }
			} else {
			    if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
					    = (7U | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 8U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
				    } else {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    (7U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
					    }
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    }
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((8U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
					}
				    } else {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((8U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0U;
					}
				    }
				}
			    } else {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 6U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 
					    = (4U | 
					       (3U 
						& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16)));
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 
					    = ((0xcU 
						& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16)) 
					       | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
					    }
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    if ((3U 
						 == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 8U;
					    } else {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    ((9U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						     | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
							<< 1U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    (1U 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
					    }
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						if (
						    (3U 
						     == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 9U;
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((9U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
							    << 1U));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							(0xeU 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
						}
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_DJNZ = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (8U 
						   & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_DJNZ = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__JumpE = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
						}
					    }
					}
				    }
				}
			    }
			}
		    } else {
			if ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			    if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
					    = (7U | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 8U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
				    } else {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    (7U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
					    }
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    }
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((8U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
					}
				    } else {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((8U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0U;
					}
				    }
				}
			    } else {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 6U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 
					    = (0xcU 
					       | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16));
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 
					    = ((0xcU 
						& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16)) 
					       | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
					}
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (5U 
						   | (8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
					    if ((((0U 
						   == 
						   (3U 
						    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
						       >> 4U))) 
						  | (1U 
						     == 
						     (3U 
						      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							 >> 4U)))) 
						 | (2U 
						    == 
						    (3U 
						     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							>> 4U))))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((9U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | (6U 
							& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							   >> 3U)));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    (1U 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
					    } else {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 8U;
					    }
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Arith16 = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    (4U 
						     | (8U 
							& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((((0U 
							== 
							(3U 
							 & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							    >> 4U))) 
						       | (1U 
							  == 
							  (3U 
							   & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							      >> 4U)))) 
						      | (2U 
							 == 
							 (3U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 4U))))
						      ? 
						     ((9U 
						       & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						      | (6U 
							 & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							    >> 3U)))
						      : 9U);
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Arith16 = 1U;
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ExchangeAF = 1U;
				    }
				}
			    }
			} else {
			    if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
					    = (7U | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 8U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
				    } else {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    (7U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
					    }
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    }
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((8U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
					}
				    } else {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((8U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0U;
					}
				    }
				}
			    } else {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 6U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 
					    = (4U | 
					       (3U 
						& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16)));
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 
					    = ((0xcU 
						& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16)) 
					       | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
					}
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    if ((3U 
						 == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 8U;
					    } else {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    ((9U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						     | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
							<< 1U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    (1U 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
					    }
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						if (
						    (3U 
						     == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 9U;
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((9U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
							    << 1U));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							(0xeU 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
						}
					    }
					}
				    } else {
					if (vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__NMICycle) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    }
						}
					    }
					} else {
					    if (vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntCycle) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 5U;
						if (
						    (1U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
						} else {
						    if (
							(2U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
						    } else {
							if (
							    (4U 
							     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
							    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
							} else {
							    if (
								(8U 
								 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
								vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
								vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
							    } else {
								if (
								    (0x10U 
								     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
								    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
								}
							    }
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	if ((1U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ISet))) {
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
		= ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
		   | (7U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR)));
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
		= ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
		   | (7U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR)));
	    if ((0x80U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
		if ((0x40U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
		    if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
				    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0xaU;
				    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
				    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
				}
			    } else {
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
				if ((1U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle) 
					   | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle) 
					      >> 6U)))) {
				    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
				} else {
				    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0xaU;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
				    } else {
					if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
					}
				    }
				}
			    }
			} else {
			    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0xaU;
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
			    }
			}
		    } else {
			if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0xaU;
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
			}
		    }
		} else {
		    if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
				    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0xbU;
				    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
				    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
				}
			    } else {
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
				if ((1U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle) 
					   | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle) 
					      >> 6U)))) {
				    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
				} else {
				    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0xbU;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
				    } else {
					if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
					}
				    }
				}
			    }
			} else {
			    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0xbU;
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
			    }
			}
		    } else {
			if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0xbU;
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
			}
		    }
		}
	    } else {
		if ((0x40U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
		    if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
				    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
					= ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
					   | (7U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR)));
				    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 9U;
				}
			    } else {
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
				if ((1U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle) 
					   | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle) 
					      >> 6U)))) {
				    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
				} else {
				    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 9U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
				    }
				}
			    }
			} else {
			    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
				    = ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
				       | (7U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR)));
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 9U;
			    }
			}
		    } else {
			if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
				= ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
				   | (7U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR)));
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 9U;
			}
		    }
		} else {
		    if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
				    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 8U;
				    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
				    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
				}
			    } else {
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
				if ((1U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle) 
					   | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle) 
					      >> 6U)))) {
				    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
				} else {
				    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 8U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
				    } else {
					if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
					}
				    }
				}
			    }
			} else {
			    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 8U;
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
			    }
			}
		    } else {
			if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 8U;
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
			}
		    }
		}
	    }
	} else {
	    if ((0x80U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
		if ((1U & (~ ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
			      >> 6U)))) {
		    if ((0x20U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			if ((1U & (~ ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
				      >> 2U)))) {
			    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 4U;
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 0U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
				    } else {
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))
						    ? 0xeU
						    : 6U);
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))
						      ? 0xaU
						      : 2U);
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_BTR = 1U;
					    } else {
						if (
						    (8U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
						}
					    }
					}
				    }
				} else {
				    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 4U;
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 0U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
				    } else {
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))
						      ? 0xeU
						      : 6U);
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_BTR = 1U;
					    } else {
						if (
						    (8U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
						}
					    }
					}
				    }
				}
			    } else {
				if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 4U;
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xcU;
				    } else {
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (7U 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 7U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))
						    ? 0xeU
						    : 6U);
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_BC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    } else {
						if (
						    (8U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
						}
					    }
					}
				    }
				} else {
				    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 4U;
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xcU;
				    } else {
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (7U 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))
						    ? 0xeU
						    : 6U);
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_BT = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))
						      ? 0xdU
						      : 5U);
					    } else {
						if (
						    (8U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    } else {
		if ((0x40U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
		    if ((0x20U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			if ((0x10U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			    if ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (~ ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
						  >> 1U)))) {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_RETN = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					}
				    }
				} else {
				    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 5U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDW = 1U;
						} else {
						    if (
							(8U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
							if (
							    (3U 
							     == 
							     (3U 
							      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								 >> 4U)))) {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 8U;
							} else {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
								= 
								((9U 
								  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
								 | (6U 
								    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								       >> 3U)));
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
								= 
								(1U 
								 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
							}
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
						    } else {
							if (
							    (0x10U 
							     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
							    if (
								(3U 
								 == 
								 (3U 
								  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								     >> 4U)))) {
								vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 9U;
							    } else {
								vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
								    = 
								    ((9U 
								      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
								     | (6U 
									& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
									   >> 3U)));
								vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
								    = 
								    (0xeU 
								     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
							    }
							}
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    (5U 
						     | (8U 
							& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
						if (
						    (((0U 
						       == 
						       (3U 
							& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							   >> 4U))) 
						      | (1U 
							 == 
							 (3U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 4U)))) 
						     | (2U 
							== 
							(3U 
							 & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							    >> 4U))))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							((9U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							 | (6U 
							    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							       >> 3U)));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(1U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 8U;
						}
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							(4U 
							 | (8U 
							    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
						    if (
							(((0U 
							   == 
							   (3U 
							    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							       >> 4U))) 
							  | (1U 
							     == 
							     (3U 
							      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								 >> 4U)))) 
							 | (2U 
							    == 
							    (3U 
							     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								>> 4U))))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							    = 
							    ((9U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							     | (6U 
								& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								   >> 3U)));
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							    = 
							    (0xeU 
							     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						    } else {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 9U;
						    }
						}
					    }
					}
				    } else {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | (7U 
							& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							   >> 3U)));
						if (
						    (6U 
						     == 
						     (7U 
						      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							 >> 3U)))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(8U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						}
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i = 1U;
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i = 1U;
						    if (
							(6U 
							 != 
							 (7U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 3U)))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							    = 
							    ((8U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							     | (7U 
								& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								   >> 3U)));
						    }
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_INRC = 1U;
						}
					    }
					}
				    }
				}
			    } else {
				if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IMode 
					    = ((1U 
						& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))
					        ? 2U
					        : 1U);
				    } else {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_RETN = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					}
				    }
				} else {
				    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 5U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDW = 1U;
						    if (
							(3U 
							 == 
							 (3U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 4U)))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 8U;
						    } else {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							    = 
							    ((9U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							     | (6U 
								& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								   >> 3U)));
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							    = 
							    (1U 
							     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							    = 
							    (7U 
							     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						    }
						} else {
						    if (
							(8U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
							if (
							    (3U 
							     == 
							     (3U 
							      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								 >> 4U)))) {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 9U;
							} else {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
								= 
								((9U 
								  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
								 | (6U 
								    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								       >> 3U)));
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
								= 
								(0xeU 
								 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
								= 
								(7U 
								 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
							}
						    } else {
							if (
							    (0x10U 
							     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
							}
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 3U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    (5U 
						     | (8U 
							& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
						if (
						    (((0U 
						       == 
						       (3U 
							& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							   >> 4U))) 
						      | (1U 
							 == 
							 (3U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 4U)))) 
						     | (2U 
							== 
							(3U 
							 & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							    >> 4U))))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							((9U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							 | (6U 
							    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							       >> 3U)));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(1U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 8U;
						}
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 3U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							(4U 
							 | (8U 
							    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							((((0U 
							    == 
							    (3U 
							     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								>> 4U))) 
							   | (1U 
							      == 
							      (3U 
							       & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								  >> 4U)))) 
							  | (2U 
							     == 
							     (3U 
							      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								 >> 4U))))
							  ? 
							 ((9U 
							   & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							  | (6U 
							     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								>> 3U)))
							  : 9U);
						}
					    }
					}
				    } else {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | (7U 
							& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							   >> 3U)));
						if (
						    (6U 
						     == 
						     (7U 
						      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							 >> 3U)))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(8U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						}
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i = 1U;
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i = 1U;
						    if (
							(6U 
							 != 
							 (7U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 3U)))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							    = 
							    ((8U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							     | (7U 
								& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								   >> 3U)));
						    }
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_INRC = 1U;
						}
					    }
					}
				    }
				}
			    }
			} else {
			    if ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 4U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(6U 
							 | (8U 
							    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							(7U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0xdU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						} else {
						    if (
							(8U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_RLD = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IMode = 0U;
					}
				    } else {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_RETN = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					}
				    }
				} else {
				    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 5U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDW = 1U;
						} else {
						    if (
							(8U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
							if (
							    (3U 
							     == 
							     (3U 
							      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								 >> 4U)))) {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 8U;
							} else {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
								= 
								((9U 
								  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
								 | (6U 
								    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								       >> 3U)));
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
								= 
								(1U 
								 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
							}
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
						    } else {
							if (
							    (0x10U 
							     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
							    if (
								(3U 
								 == 
								 (3U 
								  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								     >> 4U)))) {
								vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 9U;
							    } else {
								vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
								    = 
								    ((9U 
								      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
								     | (6U 
									& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
									   >> 3U)));
								vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
								    = 
								    (0xeU 
								     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
							    }
							}
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    (5U 
						     | (8U 
							& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
						if (
						    (((0U 
						       == 
						       (3U 
							& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							   >> 4U))) 
						      | (1U 
							 == 
							 (3U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 4U)))) 
						     | (2U 
							== 
							(3U 
							 & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							    >> 4U))))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							((9U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							 | (6U 
							    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							       >> 3U)));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(1U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 8U;
						}
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							(4U 
							 | (8U 
							    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
						    if (
							(((0U 
							   == 
							   (3U 
							    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							       >> 4U))) 
							  | (1U 
							     == 
							     (3U 
							      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								 >> 4U)))) 
							 | (2U 
							    == 
							    (3U 
							     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								>> 4U))))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							    = 
							    ((9U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							     | (6U 
								& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								   >> 3U)));
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							    = 
							    (0xeU 
							     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						    } else {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 9U;
						    }
						}
					    }
					}
				    } else {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | (7U 
							& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							   >> 3U)));
						if (
						    (6U 
						     == 
						     (7U 
						      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							 >> 3U)))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(8U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						}
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i = 1U;
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i = 1U;
						    if (
							(6U 
							 != 
							 (7U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 3U)))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							    = 
							    ((8U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							     | (7U 
								& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								   >> 3U)));
						    }
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_INRC = 1U;
						}
					    }
					}
				    }
				}
			    } else {
				if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 4U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(6U 
							 | (8U 
							    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							(7U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0xeU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						} else {
						    if (
							(8U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_RRD = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IMode = 0U;
					}
				    } else {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_RETN = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					}
				    }
				} else {
				    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 5U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDW = 1U;
						    if (
							(3U 
							 == 
							 (3U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 4U)))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 8U;
						    } else {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							    = 
							    ((9U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							     | (6U 
								& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								   >> 3U)));
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							    = 
							    (1U 
							     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							    = 
							    (7U 
							     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						    }
						} else {
						    if (
							(8U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
							if (
							    (3U 
							     == 
							     (3U 
							      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								 >> 4U)))) {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 9U;
							} else {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
								= 
								((9U 
								  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
								 | (6U 
								    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								       >> 3U)));
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
								= 
								(0xeU 
								 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
								= 
								(7U 
								 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
							}
						    } else {
							if (
							    (0x10U 
							     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
							}
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 3U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    (5U 
						     | (8U 
							& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
						if (
						    (((0U 
						       == 
						       (3U 
							& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							   >> 4U))) 
						      | (1U 
							 == 
							 (3U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 4U)))) 
						     | (2U 
							== 
							(3U 
							 & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							    >> 4U))))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							((9U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							 | (6U 
							    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							       >> 3U)));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(1U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 8U;
						}
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 3U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							(4U 
							 | (8U 
							    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							((((0U 
							    == 
							    (3U 
							     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								>> 4U))) 
							   | (1U 
							      == 
							      (3U 
							       & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								  >> 4U)))) 
							  | (2U 
							     == 
							     (3U 
							      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								 >> 4U))))
							  ? 
							 ((9U 
							   & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							  | (6U 
							     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								>> 3U)))
							  : 9U);
						}
					    }
					}
				    } else {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | (7U 
							& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							   >> 3U)));
						if (
						    (6U 
						     == 
						     (7U 
						      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							 >> 3U)))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(8U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						}
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i = 1U;
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i = 1U;
						    if (
							(6U 
							 != 
							 (7U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 3U)))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							    = 
							    ((8U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							     | (7U 
								& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								   >> 3U)));
						    }
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_INRC = 1U;
						}
					    }
					}
				    }
				}
			    }
			}
		    } else {
			if ((0x10U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			    if ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Special_LD = 5U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IMode = 2U;
					}
				    } else {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_RETN = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					}
				    }
				} else {
				    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 5U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDW = 1U;
						} else {
						    if (
							(8U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
							if (
							    (3U 
							     == 
							     (3U 
							      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								 >> 4U)))) {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 8U;
							} else {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
								= 
								((9U 
								  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
								 | (6U 
								    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								       >> 3U)));
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
								= 
								(1U 
								 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
							}
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
						    } else {
							if (
							    (0x10U 
							     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
							    if (
								(3U 
								 == 
								 (3U 
								  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								     >> 4U)))) {
								vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 9U;
							    } else {
								vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
								    = 
								    ((9U 
								      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
								     | (6U 
									& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
									   >> 3U)));
								vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
								    = 
								    (0xeU 
								     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
							    }
							}
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    (5U 
						     | (8U 
							& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
						if (
						    (((0U 
						       == 
						       (3U 
							& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							   >> 4U))) 
						      | (1U 
							 == 
							 (3U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 4U)))) 
						     | (2U 
							== 
							(3U 
							 & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							    >> 4U))))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							((9U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							 | (6U 
							    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							       >> 3U)));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(1U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 8U;
						}
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							(4U 
							 | (8U 
							    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
						    if (
							(((0U 
							   == 
							   (3U 
							    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							       >> 4U))) 
							  | (1U 
							     == 
							     (3U 
							      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								 >> 4U)))) 
							 | (2U 
							    == 
							    (3U 
							     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								>> 4U))))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							    = 
							    ((9U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							     | (6U 
								& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								   >> 3U)));
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							    = 
							    (0xeU 
							     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						    } else {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 9U;
						    }
						}
					    }
					}
				    } else {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | (7U 
							& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							   >> 3U)));
						if (
						    (6U 
						     == 
						     (7U 
						      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							 >> 3U)))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(8U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						}
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i = 1U;
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i = 1U;
						    if (
							(6U 
							 != 
							 (7U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 3U)))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							    = 
							    ((8U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							     | (7U 
								& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								   >> 3U)));
						    }
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_INRC = 1U;
						}
					    }
					}
				    }
				}
			    } else {
				if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Special_LD = 4U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IMode = 1U;
					}
				    } else {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_RETN = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					}
				    }
				} else {
				    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 5U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDW = 1U;
						    if (
							(3U 
							 == 
							 (3U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 4U)))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 8U;
						    } else {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							    = 
							    ((9U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							     | (6U 
								& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								   >> 3U)));
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							    = 
							    (1U 
							     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							    = 
							    (7U 
							     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						    }
						} else {
						    if (
							(8U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
							if (
							    (3U 
							     == 
							     (3U 
							      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								 >> 4U)))) {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 9U;
							} else {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
								= 
								((9U 
								  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
								 | (6U 
								    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								       >> 3U)));
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
								= 
								(0xeU 
								 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
								= 
								(7U 
								 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
							}
						    } else {
							if (
							    (0x10U 
							     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
							}
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 3U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    (5U 
						     | (8U 
							& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
						if (
						    (((0U 
						       == 
						       (3U 
							& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							   >> 4U))) 
						      | (1U 
							 == 
							 (3U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 4U)))) 
						     | (2U 
							== 
							(3U 
							 & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							    >> 4U))))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							((9U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							 | (6U 
							    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							       >> 3U)));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(1U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 8U;
						}
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 3U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							(4U 
							 | (8U 
							    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							((((0U 
							    == 
							    (3U 
							     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								>> 4U))) 
							   | (1U 
							      == 
							      (3U 
							       & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								  >> 4U)))) 
							  | (2U 
							     == 
							     (3U 
							      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								 >> 4U))))
							  ? 
							 ((9U 
							   & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							  | (6U 
							     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								>> 3U)))
							  : 9U);
						}
					    }
					}
				    } else {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | (7U 
							& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							   >> 3U)));
						if (
						    (6U 
						     == 
						     (7U 
						      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							 >> 3U)))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(8U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						}
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i = 1U;
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i = 1U;
						    if (
							(6U 
							 != 
							 (7U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 3U)))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							    = 
							    ((8U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							     | (7U 
								& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								   >> 3U)));
						    }
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_INRC = 1U;
						}
					    }
					}
				    }
				}
			    }
			} else {
			    if ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Special_LD = 7U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IMode = 0U;
					}
				    } else {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_RETN = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					}
				    }
				} else {
				    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 5U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDW = 1U;
						} else {
						    if (
							(8U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
							if (
							    (3U 
							     == 
							     (3U 
							      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								 >> 4U)))) {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 8U;
							} else {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
								= 
								((9U 
								  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
								 | (6U 
								    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								       >> 3U)));
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
								= 
								(1U 
								 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
							}
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
						    } else {
							if (
							    (0x10U 
							     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
							    if (
								(3U 
								 == 
								 (3U 
								  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								     >> 4U)))) {
								vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 9U;
							    } else {
								vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
								    = 
								    ((9U 
								      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
								     | (6U 
									& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
									   >> 3U)));
								vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
								    = 
								    (0xeU 
								     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
							    }
							}
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    (5U 
						     | (8U 
							& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
						if (
						    (((0U 
						       == 
						       (3U 
							& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							   >> 4U))) 
						      | (1U 
							 == 
							 (3U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 4U)))) 
						     | (2U 
							== 
							(3U 
							 & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							    >> 4U))))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							((9U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							 | (6U 
							    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							       >> 3U)));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(1U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 8U;
						}
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							(4U 
							 | (8U 
							    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
						    if (
							(((0U 
							   == 
							   (3U 
							    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							       >> 4U))) 
							  | (1U 
							     == 
							     (3U 
							      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								 >> 4U)))) 
							 | (2U 
							    == 
							    (3U 
							     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								>> 4U))))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							    = 
							    ((9U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							     | (6U 
								& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								   >> 3U)));
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							    = 
							    (0xeU 
							     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						    } else {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 9U;
						    }
						}
					    }
					}
				    } else {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | (7U 
							& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							   >> 3U)));
						if (
						    (6U 
						     == 
						     (7U 
						      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							 >> 3U)))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(8U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						}
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i = 1U;
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i = 1U;
						    if (
							(6U 
							 != 
							 (7U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 3U)))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							    = 
							    ((8U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							     | (7U 
								& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								   >> 3U)));
						    }
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_INRC = 1U;
						}
					    }
					}
				    }
				}
			    } else {
				if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Special_LD = 6U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IMode = 0U;
					}
				    } else {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_RETN = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					}
				    }
				} else {
				    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 5U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDW = 1U;
						    if (
							(3U 
							 == 
							 (3U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 4U)))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 8U;
						    } else {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							    = 
							    ((9U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							     | (6U 
								& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								   >> 3U)));
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							    = 
							    (1U 
							     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							    = 
							    (7U 
							     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						    }
						} else {
						    if (
							(8U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
							if (
							    (3U 
							     == 
							     (3U 
							      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								 >> 4U)))) {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 9U;
							} else {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
								= 
								((9U 
								  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
								 | (6U 
								    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								       >> 3U)));
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
								= 
								(0xeU 
								 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
								= 
								(7U 
								 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
							}
						    } else {
							if (
							    (0x10U 
							     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
							}
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 3U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    (5U 
						     | (8U 
							& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
						if (
						    (((0U 
						       == 
						       (3U 
							& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							   >> 4U))) 
						      | (1U 
							 == 
							 (3U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 4U)))) 
						     | (2U 
							== 
							(3U 
							 & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							    >> 4U))))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							((9U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							 | (6U 
							    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							       >> 3U)));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(1U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 8U;
						}
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 3U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							(4U 
							 | (8U 
							    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							((((0U 
							    == 
							    (3U 
							     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								>> 4U))) 
							   | (1U 
							      == 
							      (3U 
							       & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								  >> 4U)))) 
							  | (2U 
							     == 
							     (3U 
							      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								 >> 4U))))
							  ? 
							 ((9U 
							   & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							  | (6U 
							     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								>> 3U)))
							  : 9U);
						}
					    }
					}
				    } else {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | (7U 
							& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							   >> 3U)));
						if (
						    (6U 
						     == 
						     (7U 
						      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							 >> 3U)))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(8U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						}
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i = 1U;
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i = 1U;
						    if (
							(6U 
							 != 
							 (7U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 3U)))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							    = 
							    ((8U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							     | (7U 
								& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								   >> 3U)));
						    }
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_INRC = 1U;
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    if ((0x20U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
	vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
	if (((0x36U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR)) 
	     | (0xcbU == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR)))) {
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 7U;
	}
    }
    if ((0x40U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
	vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
	if ((1U != (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ISet))) {
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
	}
	vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
	    = ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
	       | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
	if (((0x36U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR)) 
	     | (1U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ISet)))) {
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
	} else {
	    vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
	}
	vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
	    = (7U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
    }
}

VL_INLINE_OPT void Vtop_tv::_sequent__TOP__7(Vtop_tv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop_tv::_sequent__TOP__7\n"); );
    Vtop_tv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusC 
	= ((0xffU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusC)) 
	   | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOCH) 
	      << 8U));
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusC 
	= ((0xff00U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusC)) 
	   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOCL));
}

void Vtop_tv::_settle__TOP__8(Vtop_tv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop_tv::_settle__TOP__8\n"); );
    Vtop_tv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at tv80_core/tv80_alu.v:109
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__UseCarry 
	= (1U & ((~ ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r) 
		     >> 2U)) & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r)));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Carry_In 
	= (1U & (((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r) 
		  >> 1U) ^ ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__UseCarry) 
			    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F))));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Sub 
	= (1U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r) 
		 >> 1U));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__B 
	= (0xfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__A 
	= (0xfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Vfuncout 
	= (0x1fU & (((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__A) 
		     + (0xfU & ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Sub)
				 ? (~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__B))
				 : (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__B)))) 
		    + (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Carry_In)));
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v 
	= (1U & ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Vfuncout) 
		 >> 4U));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__28__Carry_In 
	= (1U & (((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r) 
		  >> 1U) ^ ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__UseCarry) 
			    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F))));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__28__Sub 
	= (1U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r) 
		 >> 1U));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__28__B 
	= (0xfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__28__A 
	= (0xfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__28__Vfuncout 
	= (0x1fU & (((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__28__A) 
		     + (0xfU & ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__28__Sub)
				 ? (~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__28__B))
				 : (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__28__B)))) 
		    + (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__28__Carry_In)));
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v 
	= ((0xf0U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v)) 
	   | (0xfU & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__28__Vfuncout)));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Carry_In 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v;
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Sub 
	= (1U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r) 
		 >> 1U));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__B 
	= (7U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB) 
		 >> 4U));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__A 
	= (7U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA) 
		 >> 4U));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Vfuncout 
	= (0xfU & (((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__A) 
		    + (7U & ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Sub)
			      ? (~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__B))
			      : (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__B)))) 
		   + (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Carry_In)));
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v 
	= (1U & ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Vfuncout) 
		 >> 3U));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__30__Carry_In 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v;
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__30__Sub 
	= (1U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r) 
		 >> 1U));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__30__B 
	= (7U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB) 
		 >> 4U));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__30__A 
	= (7U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA) 
		 >> 4U));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__30__Vfuncout 
	= (0xfU & (((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__30__A) 
		    + (7U & ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__30__Sub)
			      ? (~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__30__B))
			      : (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__30__B)))) 
		   + (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__30__Carry_In)));
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v 
	= ((0x8fU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v)) 
	   | (0x70U & ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__30__Vfuncout) 
		       << 4U)));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Carry_In 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v;
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Sub 
	= (1U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r) 
		 >> 1U));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__B 
	= (1U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB) 
		 >> 7U));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__A 
	= (1U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA) 
		 >> 7U));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Vfuncout 
	= (3U & (((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__A) 
		  + (1U & ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Sub)
			    ? (~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__B))
			    : (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__B)))) 
		 + (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Carry_In)));
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v 
	= (1U & ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Vfuncout) 
		 >> 1U));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__32__Carry_In 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v;
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__32__Sub 
	= (1U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r) 
		 >> 1U));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__32__B 
	= (1U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB) 
		 >> 7U));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__32__A 
	= (1U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA) 
		 >> 7U));
    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__32__Vfuncout 
	= (3U & (((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__32__A) 
		  + (1U & ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__32__Sub)
			    ? (~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__32__B))
			    : (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__32__B)))) 
		 + (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__32__Carry_In)));
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v 
	= ((0x7fU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v)) 
	   | (0x80U & ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__32__Vfuncout) 
		       << 7U)));
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v 
	= ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v) 
	   ^ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v));
    vlTOPp->top_tv__DOT____Vcellinp__topcore__reset_n 
	= (1U & (~ (IData)(vlTOPp->reset)));
    vlTOPp->top_tv__DOT__cpu_din = ((IData)(vlTOPp->top_tv__DOT__mreq_n)
				     ? 0xffU : (IData)(vlTOPp->top_tv__DOT__mem_dout));
    // ALWAYS at tv80_core/tv80_core.v:326
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__last_mcycle 
	= (1U & ((1U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles))
		  ? (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle)
		  : ((2U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles))
		      ? ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle) 
			 >> 1U) : ((3U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles))
				    ? ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle) 
				       >> 2U) : ((4U 
						  == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles))
						  ? 
						 ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle) 
						  >> 3U)
						  : 
						 ((5U 
						   == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles))
						   ? 
						  ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle) 
						   >> 4U)
						   : 
						  ((6U 
						    == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles))
						    ? 
						   ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle) 
						    >> 5U)
						    : 
						   ((7U 
						     == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles)) 
						    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle) 
						       >> 6U)))))))));
    // ALWAYS at tv80_core/tv80_core.v:1378
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Auto_Wait = 0U;
    if (((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntCycle) 
	 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__NMICycle))) {
	if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Auto_Wait = 1U;
	}
    }
    // ALWAYS at tv80_core/tv80_mcode.v:202
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD 
	= (7U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
		 >> 3U));
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS 
	= (7U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR));
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR 
	= (3U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
		 >> 4U));
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 1U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates 
	= ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))
	    ? 4U : 3U);
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Prefix = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_WZ = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Acc = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op 
	= (7U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
		 >> 3U));
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Arith16 = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 7U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__JumpE = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__JumpXY = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Call = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RstP = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDW = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDSPHL = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Special_LD = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ExchangeDH = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ExchangeRp = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ExchangeAF = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ExchangeRS = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_DJNZ = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_CPL = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_CCF = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_SCF = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_RETN = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_BT = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_BC = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_BTR = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_RLD = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_RRD = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_INRC = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SetDI = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SetEI = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IMode = 3U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Halt = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__no_read = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__write = 0U;
    if ((0U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ISet))) {
	if ((0x80U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
	    if ((0x40U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
		if ((0x20U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
		    if ((0x10U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			if ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			    if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RstP = 1U;
						}
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (7U 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Prefix = 3U;
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 5U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						// Function: is_cc_true at tv80_core/tv80_mcode.v:1444
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc 
						    = 
						    (7U 
						     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							>> 3U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDW = 1U;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF 
						    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__Vfuncout 
						    = 
						    (1U 
						     & ((4U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
							 ? 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
							   >> 7U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
							    >> 7U)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
							   >> 2U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
							    >> 2U))))
							 : 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
							   ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF)
							   : 
							  (~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
							   >> 6U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
							    >> 6U))))));
						if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__Vfuncout) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
						}
					    } else {
						if (
						    (8U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
						} else {
						    if (
							(0x10U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Call = 1U;
						    }
						}
					    }
					}
				    }
				}
			    } else {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SetEI = 1U;
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						// Function: is_cc_true at tv80_core/tv80_mcode.v:1289
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc 
						    = 
						    (7U 
						     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							>> 3U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF 
						    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__Vfuncout 
						    = 
						    (1U 
						     & ((4U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
							 ? 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF) 
							   >> 7U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF) 
							    >> 7U)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF) 
							   >> 2U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF) 
							    >> 2U))))
							 : 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
							   ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF)
							   : 
							  (~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF) 
							   >> 6U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF) 
							    >> 6U))))));
						if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__Vfuncout) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
						}
					    }
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 6U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDSPHL = 1U;
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    // Function: is_cc_true at tv80_core/tv80_mcode.v:1618
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc 
						= (7U 
						   & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
						      >> 3U));
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF 
						= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__Vfuncout 
						= (1U 
						   & ((4U 
						       & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
						       ? 
						      ((2U 
							& (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
						        ? 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF) 
							 >> 7U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF) 
							  >> 7U)))
						        : 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF) 
							 >> 2U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF) 
							  >> 2U))))
						       : 
						      ((2U 
							& (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
						        ? 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
							 ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF)
							 : 
							(~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF)))
						        : 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF) 
							 >> 6U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF) 
							  >> 6U))))));
					    if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__Vfuncout) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    } else {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 1U;
					    }
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						}
					    }
					}
				    }
				}
			    }
			} else {
			    if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RstP = 1U;
						}
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (7U 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    if ((3U 
						 == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
					    } else {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((9U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
							<< 1U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    (0xeU 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    (7U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
					    }
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						if (
						    (3U 
						     == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xbU;
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							((9U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							 | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
							    << 1U));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(1U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(7U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						}
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						}
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 5U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						// Function: is_cc_true at tv80_core/tv80_mcode.v:1444
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc 
						    = 
						    (7U 
						     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							>> 3U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDW = 1U;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF 
						    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__Vfuncout 
						    = 
						    (1U 
						     & ((4U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
							 ? 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
							   >> 7U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
							    >> 7U)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
							   >> 2U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
							    >> 2U))))
							 : 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
							   ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF)
							   : 
							  (~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
							   >> 6U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
							    >> 6U))))));
						if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__Vfuncout) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
						}
					    } else {
						if (
						    (8U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
						} else {
						    if (
							(0x10U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Call = 1U;
						    }
						}
					    }
					}
				    }
				}
			    } else {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SetDI = 1U;
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						// Function: is_cc_true at tv80_core/tv80_mcode.v:1289
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc 
						    = 
						    (7U 
						     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							>> 3U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF 
						    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__Vfuncout 
						    = 
						    (1U 
						     & ((4U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
							 ? 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF) 
							   >> 7U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF) 
							    >> 7U)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF) 
							   >> 2U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF) 
							    >> 2U))))
							 : 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
							   ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF)
							   : 
							  (~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF) 
							   >> 6U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF) 
							    >> 6U))))));
						if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__Vfuncout) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
						}
					    }
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						if (
						    (3U 
						     == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 0xbU;
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((9U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
							    << 1U));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							(1U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
						}
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    if (
							(3U 
							 == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 7U;
						    } else {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							    = 
							    ((9U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							     | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
								<< 1U));
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							    = 
							    (0xeU 
							     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
						    }
						}
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    // Function: is_cc_true at tv80_core/tv80_mcode.v:1618
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc 
						= (7U 
						   & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
						      >> 3U));
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF 
						= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__Vfuncout 
						= (1U 
						   & ((4U 
						       & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
						       ? 
						      ((2U 
							& (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
						        ? 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF) 
							 >> 7U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF) 
							  >> 7U)))
						        : 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF) 
							 >> 2U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF) 
							  >> 2U))))
						       : 
						      ((2U 
							& (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
						        ? 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
							 ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF)
							 : 
							(~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF)))
						        : 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF) 
							 >> 6U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF) 
							  >> 6U))))));
					    if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__Vfuncout) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    } else {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 1U;
					    }
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						}
					    }
					}
				    }
				}
			    }
			}
		    } else {
			if ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			    if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RstP = 1U;
						}
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (7U 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Prefix = 2U;
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 5U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						// Function: is_cc_true at tv80_core/tv80_mcode.v:1444
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc 
						    = 
						    (7U 
						     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							>> 3U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDW = 1U;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF 
						    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__Vfuncout 
						    = 
						    (1U 
						     & ((4U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
							 ? 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
							   >> 7U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
							    >> 7U)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
							   >> 2U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
							    >> 2U))))
							 : 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
							   ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF)
							   : 
							  (~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
							   >> 6U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
							    >> 6U))))));
						if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__Vfuncout) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
						}
					    } else {
						if (
						    (8U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
						} else {
						    if (
							(0x10U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Call = 1U;
						    }
						}
					    }
					}
				    }
				}
			    } else {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ExchangeDH = 1U;
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						// Function: is_cc_true at tv80_core/tv80_mcode.v:1289
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc 
						    = 
						    (7U 
						     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							>> 3U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF 
						    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__Vfuncout 
						    = 
						    (1U 
						     & ((4U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
							 ? 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF) 
							   >> 7U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF) 
							    >> 7U)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF) 
							   >> 2U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF) 
							    >> 2U))))
							 : 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
							   ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF)
							   : 
							  (~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF) 
							   >> 6U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF) 
							    >> 6U))))));
						if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__Vfuncout) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
						}
					    }
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__JumpXY = 1U;
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    // Function: is_cc_true at tv80_core/tv80_mcode.v:1618
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc 
						= (7U 
						   & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
						      >> 3U));
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF 
						= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__Vfuncout 
						= (1U 
						   & ((4U 
						       & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
						       ? 
						      ((2U 
							& (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
						        ? 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF) 
							 >> 7U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF) 
							  >> 7U)))
						        : 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF) 
							 >> 2U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF) 
							  >> 2U))))
						       : 
						      ((2U 
							& (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
						        ? 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
							 ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF)
							 : 
							(~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF)))
						        : 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF) 
							 >> 6U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF) 
							  >> 6U))))));
					    if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__Vfuncout) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    } else {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 1U;
					    }
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						}
					    }
					}
				    }
				}
			    }
			} else {
			    if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RstP = 1U;
						}
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (7U 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    if ((3U 
						 == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
					    } else {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((9U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
							<< 1U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    (0xeU 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    (7U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
					    }
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						if (
						    (3U 
						     == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xbU;
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							((9U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							 | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
							    << 1U));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(1U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(7U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						}
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						}
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 5U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						// Function: is_cc_true at tv80_core/tv80_mcode.v:1444
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc 
						    = 
						    (7U 
						     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							>> 3U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDW = 1U;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF 
						    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__Vfuncout 
						    = 
						    (1U 
						     & ((4U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
							 ? 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
							   >> 7U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
							    >> 7U)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
							   >> 2U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
							    >> 2U))))
							 : 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
							   ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF)
							   : 
							  (~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
							   >> 6U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
							    >> 6U))))));
						if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__Vfuncout) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
						}
					    } else {
						if (
						    (8U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
						} else {
						    if (
							(0x10U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Call = 1U;
						    }
						}
					    }
					}
				    }
				}
			    } else {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 5U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						} else {
						    if (
							(8U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 4U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 4U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    } else {
							if (
							    (0x10U 
							     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
							    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
							}
						    }
						}
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						// Function: is_cc_true at tv80_core/tv80_mcode.v:1289
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc 
						    = 
						    (7U 
						     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							>> 3U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF 
						    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__Vfuncout 
						    = 
						    (1U 
						     & ((4U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
							 ? 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF) 
							   >> 7U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF) 
							    >> 7U)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF) 
							   >> 2U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF) 
							    >> 2U))))
							 : 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
							   ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF)
							   : 
							  (~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF) 
							   >> 6U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF) 
							    >> 6U))))));
						if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__Vfuncout) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
						}
					    }
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						if (
						    (3U 
						     == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 0xbU;
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((9U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
							    << 1U));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							(1U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
						}
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    if (
							(3U 
							 == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 7U;
						    } else {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							    = 
							    ((9U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							     | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
								<< 1U));
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							    = 
							    (0xeU 
							     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
						    }
						}
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    // Function: is_cc_true at tv80_core/tv80_mcode.v:1618
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc 
						= (7U 
						   & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
						      >> 3U));
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF 
						= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__Vfuncout 
						= (1U 
						   & ((4U 
						       & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
						       ? 
						      ((2U 
							& (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
						        ? 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF) 
							 >> 7U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF) 
							  >> 7U)))
						        : 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF) 
							 >> 2U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF) 
							  >> 2U))))
						       : 
						      ((2U 
							& (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
						        ? 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
							 ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF)
							 : 
							(~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF)))
						        : 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF) 
							 >> 6U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF) 
							  >> 6U))))));
					    if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__Vfuncout) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    } else {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 1U;
					    }
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0x10U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			if ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			    if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RstP = 1U;
						}
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (7U 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Prefix = 3U;
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 5U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						// Function: is_cc_true at tv80_core/tv80_mcode.v:1444
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc 
						    = 
						    (7U 
						     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							>> 3U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDW = 1U;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF 
						    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__Vfuncout 
						    = 
						    (1U 
						     & ((4U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
							 ? 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
							   >> 7U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
							    >> 7U)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
							   >> 2U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
							    >> 2U))))
							 : 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
							   ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF)
							   : 
							  (~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
							   >> 6U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
							    >> 6U))))));
						if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__Vfuncout) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
						}
					    } else {
						if (
						    (8U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
						} else {
						    if (
							(0x10U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Call = 1U;
						    }
						}
					    }
					}
				    }
				}
			    } else {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 4U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i = 1U;
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						// Function: is_cc_true at tv80_core/tv80_mcode.v:1289
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc 
						    = 
						    (7U 
						     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							>> 3U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF 
						    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__Vfuncout 
						    = 
						    (1U 
						     & ((4U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
							 ? 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF) 
							   >> 7U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF) 
							    >> 7U)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF) 
							   >> 2U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF) 
							    >> 2U))))
							 : 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
							   ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF)
							   : 
							  (~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF) 
							   >> 6U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF) 
							    >> 6U))))));
						if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__Vfuncout) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
						}
					    }
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ExchangeRS = 1U;
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    // Function: is_cc_true at tv80_core/tv80_mcode.v:1618
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc 
						= (7U 
						   & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
						      >> 3U));
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF 
						= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__Vfuncout 
						= (1U 
						   & ((4U 
						       & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
						       ? 
						      ((2U 
							& (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
						        ? 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF) 
							 >> 7U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF) 
							  >> 7U)))
						        : 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF) 
							 >> 2U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF) 
							  >> 2U))))
						       : 
						      ((2U 
							& (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
						        ? 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
							 ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF)
							 : 
							(~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF)))
						        : 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF) 
							 >> 6U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF) 
							  >> 6U))))));
					    if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__Vfuncout) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    } else {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 1U;
					    }
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						}
					    }
					}
				    }
				}
			    }
			} else {
			    if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RstP = 1U;
						}
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (7U 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    if ((3U 
						 == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
					    } else {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((9U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
							<< 1U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    (0xeU 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    (7U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
					    }
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						if (
						    (3U 
						     == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xbU;
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							((9U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							 | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
							    << 1U));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(1U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(7U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						}
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						}
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 5U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						// Function: is_cc_true at tv80_core/tv80_mcode.v:1444
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc 
						    = 
						    (7U 
						     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							>> 3U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDW = 1U;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF 
						    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__Vfuncout 
						    = 
						    (1U 
						     & ((4U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
							 ? 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
							   >> 7U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
							    >> 7U)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
							   >> 2U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
							    >> 2U))))
							 : 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
							   ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF)
							   : 
							  (~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
							   >> 6U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
							    >> 6U))))));
						if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__Vfuncout) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
						}
					    } else {
						if (
						    (8U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
						} else {
						    if (
							(0x10U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Call = 1U;
						    }
						}
					    }
					}
				    }
				}
			    } else {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 4U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i = 1U;
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						// Function: is_cc_true at tv80_core/tv80_mcode.v:1289
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc 
						    = 
						    (7U 
						     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							>> 3U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF 
						    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__Vfuncout 
						    = 
						    (1U 
						     & ((4U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
							 ? 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF) 
							   >> 7U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF) 
							    >> 7U)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF) 
							   >> 2U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF) 
							    >> 2U))))
							 : 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
							   ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF)
							   : 
							  (~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF) 
							   >> 6U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF) 
							    >> 6U))))));
						if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__Vfuncout) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
						}
					    }
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						if (
						    (3U 
						     == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 0xbU;
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((9U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
							    << 1U));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							(1U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
						}
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    if (
							(3U 
							 == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 7U;
						    } else {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							    = 
							    ((9U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							     | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
								<< 1U));
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							    = 
							    (0xeU 
							     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
						    }
						}
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    // Function: is_cc_true at tv80_core/tv80_mcode.v:1618
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc 
						= (7U 
						   & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
						      >> 3U));
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF 
						= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__Vfuncout 
						= (1U 
						   & ((4U 
						       & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
						       ? 
						      ((2U 
							& (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
						        ? 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF) 
							 >> 7U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF) 
							  >> 7U)))
						        : 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF) 
							 >> 2U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF) 
							  >> 2U))))
						       : 
						      ((2U 
							& (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
						        ? 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
							 ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF)
							 : 
							(~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF)))
						        : 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF) 
							 >> 6U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF) 
							  >> 6U))))));
					    if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__Vfuncout) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    } else {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 1U;
					    }
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						}
					    }
					}
				    }
				}
			    }
			}
		    } else {
			if ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			    if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RstP = 1U;
						}
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (7U 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 5U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDW = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
					    } else {
						if (
						    (8U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
						} else {
						    if (
							(0x10U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Call = 1U;
						    }
						}
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 5U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						// Function: is_cc_true at tv80_core/tv80_mcode.v:1444
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc 
						    = 
						    (7U 
						     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							>> 3U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDW = 1U;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF 
						    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__Vfuncout 
						    = 
						    (1U 
						     & ((4U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
							 ? 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
							   >> 7U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
							    >> 7U)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
							   >> 2U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
							    >> 2U))))
							 : 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
							   ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF)
							   : 
							  (~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
							   >> 6U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
							    >> 6U))))));
						if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__Vfuncout) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
						}
					    } else {
						if (
						    (8U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
						} else {
						    if (
							(0x10U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Call = 1U;
						    }
						}
					    }
					}
				    }
				}
			    } else {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Prefix = 1U;
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						// Function: is_cc_true at tv80_core/tv80_mcode.v:1289
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc 
						    = 
						    (7U 
						     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							>> 3U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF 
						    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__Vfuncout 
						    = 
						    (1U 
						     & ((4U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
							 ? 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF) 
							   >> 7U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF) 
							    >> 7U)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF) 
							   >> 2U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF) 
							    >> 2U))))
							 : 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
							   ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF)
							   : 
							  (~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF) 
							   >> 6U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF) 
							    >> 6U))))));
						if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__Vfuncout) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
						}
					    }
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						}
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    // Function: is_cc_true at tv80_core/tv80_mcode.v:1618
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc 
						= (7U 
						   & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
						      >> 3U));
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF 
						= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__Vfuncout 
						= (1U 
						   & ((4U 
						       & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
						       ? 
						      ((2U 
							& (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
						        ? 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF) 
							 >> 7U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF) 
							  >> 7U)))
						        : 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF) 
							 >> 2U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF) 
							  >> 2U))))
						       : 
						      ((2U 
							& (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
						        ? 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
							 ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF)
							 : 
							(~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF)))
						        : 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF) 
							 >> 6U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF) 
							  >> 6U))))));
					    if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__Vfuncout) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    } else {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 1U;
					    }
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						}
					    }
					}
				    }
				}
			    }
			} else {
			    if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RstP = 1U;
						}
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (7U 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    if ((3U 
						 == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
					    } else {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((9U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
							<< 1U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    (0xeU 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    (7U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
					    }
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						if (
						    (3U 
						     == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xbU;
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							((9U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							 | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
							    << 1U));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(1U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(7U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						}
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						}
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 5U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						// Function: is_cc_true at tv80_core/tv80_mcode.v:1444
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc 
						    = 
						    (7U 
						     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							>> 3U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDW = 1U;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF 
						    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__Vfuncout 
						    = 
						    (1U 
						     & ((4U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
							 ? 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
							   >> 7U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
							    >> 7U)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
							   >> 2U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
							    >> 2U))))
							 : 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
							   ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF)
							   : 
							  (~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
							   >> 6U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
							    >> 6U))))));
						if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__Vfuncout) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
						}
					    } else {
						if (
						    (8U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
						} else {
						    if (
							(0x10U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Call = 1U;
						    }
						}
					    }
					}
				    }
				}
			    } else {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					}
					if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						// Function: is_cc_true at tv80_core/tv80_mcode.v:1289
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc 
						    = 
						    (7U 
						     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							>> 3U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF 
						    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
						vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__Vfuncout 
						    = 
						    (1U 
						     & ((4U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
							 ? 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF) 
							   >> 7U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF) 
							    >> 7U)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF) 
							   >> 2U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF) 
							    >> 2U))))
							 : 
							((2U 
							  & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
							  ? 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
							   ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF)
							   : 
							  (~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF)))
							  : 
							 ((1U 
							   & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
							   ? 
							  ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF) 
							   >> 6U)
							   : 
							  (~ 
							   ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF) 
							    >> 6U))))));
						if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__Vfuncout) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
						}
					    }
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						if (
						    (3U 
						     == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 0xbU;
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((9U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
							    << 1U));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							(1U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
						}
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    if (
							(3U 
							 == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 7U;
						    } else {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							    = 
							    ((9U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							     | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
								<< 1U));
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							    = 
							    (0xeU 
							     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
						    }
						}
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    // Function: is_cc_true at tv80_core/tv80_mcode.v:1618
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__26__cc 
						= (7U 
						   & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
						      >> 3U));
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__26__FF 
						= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__26__Vfuncout 
						= (1U 
						   & ((4U 
						       & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__26__cc))
						       ? 
						      ((2U 
							& (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__26__cc))
						        ? 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__26__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__26__FF) 
							 >> 7U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__26__FF) 
							  >> 7U)))
						        : 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__26__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__26__FF) 
							 >> 2U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__26__FF) 
							  >> 2U))))
						       : 
						      ((2U 
							& (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__26__cc))
						        ? 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__26__cc))
							 ? (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__26__FF)
							 : 
							(~ (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__26__FF)))
						        : 
						       ((1U 
							 & (IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__26__cc))
							 ? 
							((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__26__FF) 
							 >> 6U)
							 : 
							(~ 
							 ((IData)(vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__26__FF) 
							  >> 6U))))));
					    if (vlTOPp->__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__26__Vfuncout) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    } else {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 1U;
					    }
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    } else {
		if ((6U == (7U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR)))) {
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
		    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
			vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
		    } else {
			if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
				= ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
				   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
				= (7U | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
			}
		    }
		} else {
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
			= ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
			   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
			= (7U | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
		}
	    }
	} else {
	    if ((0x40U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
		if ((0x36U == (0x3fU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR)))) {
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Halt = 1U;
		} else {
		    if ((6U == (7U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR)))) {
			vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
			if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
			}
			if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
				= ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
				   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
			}
		    } else {
			if ((6U == (7U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					  >> 3U)))) {
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
			    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
				    = ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
				       | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
				    = (7U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
			    }
			    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
				vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
			    }
			} else {
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
				= ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
				   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ExchangeRp = 1U;
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
				= ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
				   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
			}
		    }
		}
	    } else {
		if ((0x20U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
		    if ((0x10U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			if ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			    if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_CCF = 1U;
				    } else {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    (7U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
					    }
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    }
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((8U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
					}
				    } else {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((8U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0U;
					}
				    }
				}
			    } else {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 6U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 
					    = (0xcU 
					       | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16));
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 
					    = ((0xcU 
						& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16)) 
					       | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 4U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					}
					if ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
					}
					if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (5U 
						   | (8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
					    if ((((0U 
						   == 
						   (3U 
						    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
						       >> 4U))) 
						  | (1U 
						     == 
						     (3U 
						      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							 >> 4U)))) 
						 | (2U 
						    == 
						    (3U 
						     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							>> 4U))))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((9U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | (6U 
							& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							   >> 3U)));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    (1U 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
					    } else {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 8U;
					    }
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Arith16 = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    (4U 
						     | (8U 
							& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((((0U 
							== 
							(3U 
							 & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							    >> 4U))) 
						       | (1U 
							  == 
							  (3U 
							   & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							      >> 4U)))) 
						      | (2U 
							 == 
							 (3U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 4U))))
						      ? 
						     ((9U 
						       & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						      | (6U 
							 & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							    >> 3U)))
						      : 9U);
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Arith16 = 1U;
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    if ((0U 
						 == 
						 (3U 
						  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
						     >> 3U)))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d 
						    = 
						    ((0x40U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F))
						      ? 2U
						      : 3U);
					    } else {
						if (
						    (1U 
						     == 
						     (3U 
						      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							 >> 3U)))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d 
							= 
							((0x40U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F))
							  ? 3U
							  : 2U);
						} else {
						    if (
							(2U 
							 == 
							 (3U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 3U)))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d 
							    = 
							    ((1U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F))
							      ? 2U
							      : 3U);
						    } else {
							if (
							    (3U 
							     == 
							     (3U 
							      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								 >> 3U)))) {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d 
								= 
								((1U 
								  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F))
								  ? 3U
								  : 2U);
							}
						    }
						}
					    }
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__JumpE = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    }
					}
				    }
				}
			    }
			} else {
			    if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_SCF = 1U;
				    } else {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    (7U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
					    }
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    }
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((8U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
					}
				    } else {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((8U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0U;
					}
				    }
				}
			    } else {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 6U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 
					    = (4U | 
					       (3U 
						& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16)));
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 
					    = ((0xcU 
						& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16)) 
					       | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 4U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
					    } else {
						if (
						    (8U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						}
					    }
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    if ((3U 
						 == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 8U;
					    } else {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    ((9U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						     | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
							<< 1U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    (1U 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
					    }
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						if (
						    (3U 
						     == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 9U;
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((9U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
							    << 1U));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							(0xeU 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
						}
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    if ((0U 
						 == 
						 (3U 
						  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
						     >> 3U)))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d 
						    = 
						    ((0x40U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F))
						      ? 2U
						      : 3U);
					    } else {
						if (
						    (1U 
						     == 
						     (3U 
						      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							 >> 3U)))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d 
							= 
							((0x40U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F))
							  ? 3U
							  : 2U);
						} else {
						    if (
							(2U 
							 == 
							 (3U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 3U)))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d 
							    = 
							    ((1U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F))
							      ? 2U
							      : 3U);
						    } else {
							if (
							    (3U 
							     == 
							     (3U 
							      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								 >> 3U)))) {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d 
								= 
								((1U 
								  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F))
								  ? 3U
								  : 2U);
							}
						    }
						}
					    }
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__JumpE = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    }
					}
				    }
				}
			    }
			}
		    } else {
			if ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			    if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_CPL = 1U;
				    } else {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    (7U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
					    }
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    }
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((8U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
					}
				    } else {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((8U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0U;
					}
				    }
				}
			    } else {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 6U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 
					    = (0xcU 
					       | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16));
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 
					    = ((0xcU 
						& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16)) 
					       | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 5U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDW = 1U;
					    } else {
						if (
						    (8U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							(5U 
							 | (8U 
							    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
						} else {
						    if (
							(0x10U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							    = 
							    (4U 
							     | (8U 
								& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    }
						}
					    }
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (5U 
						   | (8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
					    if ((((0U 
						   == 
						   (3U 
						    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
						       >> 4U))) 
						  | (1U 
						     == 
						     (3U 
						      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							 >> 4U)))) 
						 | (2U 
						    == 
						    (3U 
						     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							>> 4U))))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((9U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | (6U 
							& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							   >> 3U)));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    (1U 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
					    } else {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 8U;
					    }
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Arith16 = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    (4U 
						     | (8U 
							& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((((0U 
							== 
							(3U 
							 & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							    >> 4U))) 
						       | (1U 
							  == 
							  (3U 
							   & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							      >> 4U)))) 
						      | (2U 
							 == 
							 (3U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 4U))))
						      ? 
						     ((9U 
						       & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						      | (6U 
							 & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							    >> 3U)))
						      : 9U);
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Arith16 = 1U;
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    if ((0U 
						 == 
						 (3U 
						  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
						     >> 3U)))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d 
						    = 
						    ((0x40U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F))
						      ? 2U
						      : 3U);
					    } else {
						if (
						    (1U 
						     == 
						     (3U 
						      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							 >> 3U)))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d 
							= 
							((0x40U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F))
							  ? 3U
							  : 2U);
						} else {
						    if (
							(2U 
							 == 
							 (3U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 3U)))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d 
							    = 
							    ((1U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F))
							      ? 2U
							      : 3U);
						    } else {
							if (
							    (3U 
							     == 
							     (3U 
							      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								 >> 3U)))) {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d 
								= 
								((1U 
								  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F))
								  ? 3U
								  : 2U);
							}
						    }
						}
					    }
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__JumpE = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    }
					}
				    }
				}
			    }
			} else {
			    if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
					    = (7U | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0xcU;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
				    } else {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    (7U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
					    }
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    }
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((8U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
					}
				    } else {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((8U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0U;
					}
				    }
				}
			    } else {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 6U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 
					    = (4U | 
					       (3U 
						& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16)));
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 
					    = ((0xcU 
						& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16)) 
					       | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 5U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDW = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 5U;
					    } else {
						if (
						    (8U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 4U;
						} else {
						    if (
							(0x10U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    }
						}
					    }
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    if ((3U 
						 == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 8U;
					    } else {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    ((9U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						     | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
							<< 1U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    (1U 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
					    }
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						if (
						    (3U 
						     == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 9U;
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((9U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
							    << 1U));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							(0xeU 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
						}
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    if ((0U 
						 == 
						 (3U 
						  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
						     >> 3U)))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d 
						    = 
						    ((0x40U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F))
						      ? 2U
						      : 3U);
					    } else {
						if (
						    (1U 
						     == 
						     (3U 
						      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							 >> 3U)))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d 
							= 
							((0x40U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F))
							  ? 3U
							  : 2U);
						} else {
						    if (
							(2U 
							 == 
							 (3U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 3U)))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d 
							    = 
							    ((1U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F))
							      ? 2U
							      : 3U);
						    } else {
							if (
							    (3U 
							     == 
							     (3U 
							      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								 >> 3U)))) {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d 
								= 
								((1U 
								  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F))
								  ? 3U
								  : 2U);
							}
						    }
						}
					    }
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__JumpE = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    }
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0x10U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			if ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			    if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
					    = (7U | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 8U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
				    } else {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    (7U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
					    }
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    }
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((8U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
					}
				    } else {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((8U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0U;
					}
				    }
				}
			    } else {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 6U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 
					    = (0xcU 
					       | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16));
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 
					    = ((0xcU 
						& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16)) 
					       | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 1U;
					}
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (5U 
						   | (8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
					    if ((((0U 
						   == 
						   (3U 
						    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
						       >> 4U))) 
						  | (1U 
						     == 
						     (3U 
						      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							 >> 4U)))) 
						 | (2U 
						    == 
						    (3U 
						     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							>> 4U))))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((9U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | (6U 
							& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							   >> 3U)));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    (1U 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
					    } else {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 8U;
					    }
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Arith16 = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    (4U 
						     | (8U 
							& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((((0U 
							== 
							(3U 
							 & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							    >> 4U))) 
						       | (1U 
							  == 
							  (3U 
							   & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							      >> 4U)))) 
						      | (2U 
							 == 
							 (3U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 4U))))
						      ? 
						     ((9U 
						       & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						      | (6U 
							 & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							    >> 3U)))
						      : 9U);
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Arith16 = 1U;
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__JumpE = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    }
					}
				    }
				}
			    }
			} else {
			    if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
					    = (7U | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 8U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
				    } else {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    (7U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
					    }
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    }
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((8U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
					}
				    } else {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((8U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0U;
					}
				    }
				}
			    } else {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 6U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 
					    = (4U | 
					       (3U 
						& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16)));
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 
					    = ((0xcU 
						& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16)) 
					       | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
					    }
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    if ((3U 
						 == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 8U;
					    } else {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    ((9U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						     | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
							<< 1U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    (1U 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
					    }
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						if (
						    (3U 
						     == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 9U;
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((9U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
							    << 1U));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							(0xeU 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
						}
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_DJNZ = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (8U 
						   & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
					} else {
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_DJNZ = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__JumpE = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
						}
					    }
					}
				    }
				}
			    }
			}
		    } else {
			if ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			    if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
					    = (7U | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 8U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
				    } else {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    (7U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
					    }
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    }
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((8U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
					}
				    } else {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((8U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0U;
					}
				    }
				}
			    } else {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 6U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 
					    = (0xcU 
					       | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16));
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 
					    = ((0xcU 
						& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16)) 
					       | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
					}
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (5U 
						   | (8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
					    if ((((0U 
						   == 
						   (3U 
						    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
						       >> 4U))) 
						  | (1U 
						     == 
						     (3U 
						      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							 >> 4U)))) 
						 | (2U 
						    == 
						    (3U 
						     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							>> 4U))))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((9U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | (6U 
							& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							   >> 3U)));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    (1U 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
					    } else {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 8U;
					    }
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Arith16 = 1U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    (4U 
						     | (8U 
							& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((((0U 
							== 
							(3U 
							 & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							    >> 4U))) 
						       | (1U 
							  == 
							  (3U 
							   & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							      >> 4U)))) 
						      | (2U 
							 == 
							 (3U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 4U))))
						      ? 
						     ((9U 
						       & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						      | (6U 
							 & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							    >> 3U)))
						      : 9U);
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Arith16 = 1U;
					    }
					}
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ExchangeAF = 1U;
				    }
				}
			    }
			} else {
			    if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
					    = (7U | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 8U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
				    } else {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    (7U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
					    }
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    }
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((8U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
					}
				    } else {
					if ((6U == 
					     (7U & 
					      ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
					       >> 3U)))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((8U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0U;
					}
				    }
				}
			    } else {
				if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 6U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 
					    = (4U | 
					       (3U 
						& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16)));
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 
					    = ((0xcU 
						& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16)) 
					       | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
				    } else {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
					}
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
					}
				    }
				} else {
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					    if ((3U 
						 == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 8U;
					    } else {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    ((9U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
						     | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
							<< 1U));
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    (1U 
						     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
					    }
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						if (
						    (3U 
						     == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 9U;
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							((9U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							 | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
							    << 1U));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							(0xeU 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
						}
					    }
					}
				    } else {
					if (vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__NMICycle) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    }
						}
					    }
					} else {
					    if (vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntCycle) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 5U;
						if (
						    (1U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
						} else {
						    if (
							(2U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
						    } else {
							if (
							    (4U 
							     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
							    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
							} else {
							    if (
								(8U 
								 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
								vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
								vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
							    } else {
								if (
								    (0x10U 
								     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
								    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
								}
							    }
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	if ((1U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ISet))) {
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
		= ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
		   | (7U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR)));
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
		= ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
		   | (7U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR)));
	    if ((0x80U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
		if ((0x40U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
		    if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
				    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0xaU;
				    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
				    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
				}
			    } else {
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
				if ((1U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle) 
					   | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle) 
					      >> 6U)))) {
				    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
				} else {
				    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0xaU;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
				    } else {
					if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
					}
				    }
				}
			    }
			} else {
			    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0xaU;
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
			    }
			}
		    } else {
			if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0xaU;
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
			}
		    }
		} else {
		    if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
				    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0xbU;
				    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
				    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
				}
			    } else {
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
				if ((1U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle) 
					   | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle) 
					      >> 6U)))) {
				    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
				} else {
				    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0xbU;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
				    } else {
					if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
					}
				    }
				}
			    }
			} else {
			    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0xbU;
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
			    }
			}
		    } else {
			if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0xbU;
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
			}
		    }
		}
	    } else {
		if ((0x40U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
		    if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
				    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
					= ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
					   | (7U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR)));
				    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 9U;
				}
			    } else {
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
				if ((1U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle) 
					   | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle) 
					      >> 6U)))) {
				    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
				} else {
				    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 9U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
				    }
				}
			    }
			} else {
			    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
				    = ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
				       | (7U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR)));
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 9U;
			    }
			}
		    } else {
			if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
				= ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
				   | (7U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR)));
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 9U;
			}
		    }
		} else {
		    if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
				    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 8U;
				    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
				    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
				}
			    } else {
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
				if ((1U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle) 
					   | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle) 
					      >> 6U)))) {
				    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
				} else {
				    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 8U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
				    } else {
					if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
					}
				    }
				}
			    }
			} else {
			    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 8U;
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
			    }
			}
		    } else {
			if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 8U;
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
			}
		    }
		}
	    }
	} else {
	    if ((0x80U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
		if ((1U & (~ ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
			      >> 6U)))) {
		    if ((0x20U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			if ((1U & (~ ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
				      >> 2U)))) {
			    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 4U;
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 0U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
				    } else {
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))
						    ? 0xeU
						    : 6U);
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))
						      ? 0xaU
						      : 2U);
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_BTR = 1U;
					    } else {
						if (
						    (8U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
						}
					    }
					}
				    }
				} else {
				    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 4U;
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 0U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
				    } else {
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))
						      ? 0xeU
						      : 6U);
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_BTR = 1U;
					    } else {
						if (
						    (8U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
						}
					    }
					}
				    }
				}
			    } else {
				if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 4U;
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xcU;
				    } else {
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (7U 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 7U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))
						    ? 0xeU
						    : 6U);
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_BC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					    } else {
						if (
						    (8U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
						}
					    }
					}
				    }
				} else {
				    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 4U;
				    if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 0xcU;
				    } else {
					if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						= (7U 
						   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 
						= (
						   (8U 
						    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))
						    ? 0xeU
						    : 6U);
					} else {
					    if ((4U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_BT = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
						vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))
						      ? 0xdU
						      : 5U);
					    } else {
						if (
						    (8U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    } else {
		if ((0x40U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
		    if ((0x20U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			if ((0x10U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			    if ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((1U & (~ ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
						  >> 1U)))) {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_RETN = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					}
				    }
				} else {
				    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 5U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDW = 1U;
						} else {
						    if (
							(8U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
							if (
							    (3U 
							     == 
							     (3U 
							      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								 >> 4U)))) {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 8U;
							} else {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
								= 
								((9U 
								  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
								 | (6U 
								    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								       >> 3U)));
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
								= 
								(1U 
								 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
							}
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
						    } else {
							if (
							    (0x10U 
							     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
							    if (
								(3U 
								 == 
								 (3U 
								  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								     >> 4U)))) {
								vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 9U;
							    } else {
								vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
								    = 
								    ((9U 
								      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
								     | (6U 
									& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
									   >> 3U)));
								vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
								    = 
								    (0xeU 
								     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
							    }
							}
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    (5U 
						     | (8U 
							& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
						if (
						    (((0U 
						       == 
						       (3U 
							& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							   >> 4U))) 
						      | (1U 
							 == 
							 (3U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 4U)))) 
						     | (2U 
							== 
							(3U 
							 & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							    >> 4U))))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							((9U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							 | (6U 
							    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							       >> 3U)));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(1U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 8U;
						}
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							(4U 
							 | (8U 
							    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
						    if (
							(((0U 
							   == 
							   (3U 
							    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							       >> 4U))) 
							  | (1U 
							     == 
							     (3U 
							      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								 >> 4U)))) 
							 | (2U 
							    == 
							    (3U 
							     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								>> 4U))))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							    = 
							    ((9U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							     | (6U 
								& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								   >> 3U)));
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							    = 
							    (0xeU 
							     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						    } else {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 9U;
						    }
						}
					    }
					}
				    } else {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | (7U 
							& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							   >> 3U)));
						if (
						    (6U 
						     == 
						     (7U 
						      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							 >> 3U)))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(8U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						}
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i = 1U;
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i = 1U;
						    if (
							(6U 
							 != 
							 (7U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 3U)))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							    = 
							    ((8U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							     | (7U 
								& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								   >> 3U)));
						    }
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_INRC = 1U;
						}
					    }
					}
				    }
				}
			    } else {
				if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IMode 
					    = ((1U 
						& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))
					        ? 2U
					        : 1U);
				    } else {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_RETN = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					}
				    }
				} else {
				    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 5U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDW = 1U;
						    if (
							(3U 
							 == 
							 (3U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 4U)))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 8U;
						    } else {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							    = 
							    ((9U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							     | (6U 
								& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								   >> 3U)));
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							    = 
							    (1U 
							     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							    = 
							    (7U 
							     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						    }
						} else {
						    if (
							(8U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
							if (
							    (3U 
							     == 
							     (3U 
							      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								 >> 4U)))) {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 9U;
							} else {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
								= 
								((9U 
								  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
								 | (6U 
								    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								       >> 3U)));
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
								= 
								(0xeU 
								 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
								= 
								(7U 
								 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
							}
						    } else {
							if (
							    (0x10U 
							     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
							}
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 3U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    (5U 
						     | (8U 
							& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
						if (
						    (((0U 
						       == 
						       (3U 
							& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							   >> 4U))) 
						      | (1U 
							 == 
							 (3U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 4U)))) 
						     | (2U 
							== 
							(3U 
							 & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							    >> 4U))))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							((9U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							 | (6U 
							    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							       >> 3U)));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(1U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 8U;
						}
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 3U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							(4U 
							 | (8U 
							    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							((((0U 
							    == 
							    (3U 
							     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								>> 4U))) 
							   | (1U 
							      == 
							      (3U 
							       & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								  >> 4U)))) 
							  | (2U 
							     == 
							     (3U 
							      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								 >> 4U))))
							  ? 
							 ((9U 
							   & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							  | (6U 
							     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								>> 3U)))
							  : 9U);
						}
					    }
					}
				    } else {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | (7U 
							& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							   >> 3U)));
						if (
						    (6U 
						     == 
						     (7U 
						      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							 >> 3U)))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(8U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						}
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i = 1U;
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i = 1U;
						    if (
							(6U 
							 != 
							 (7U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 3U)))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							    = 
							    ((8U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							     | (7U 
								& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								   >> 3U)));
						    }
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_INRC = 1U;
						}
					    }
					}
				    }
				}
			    }
			} else {
			    if ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 4U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(6U 
							 | (8U 
							    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							(7U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0xdU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						} else {
						    if (
							(8U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_RLD = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IMode = 0U;
					}
				    } else {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_RETN = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					}
				    }
				} else {
				    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 5U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDW = 1U;
						} else {
						    if (
							(8U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
							if (
							    (3U 
							     == 
							     (3U 
							      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								 >> 4U)))) {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 8U;
							} else {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
								= 
								((9U 
								  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
								 | (6U 
								    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								       >> 3U)));
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
								= 
								(1U 
								 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
							}
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
						    } else {
							if (
							    (0x10U 
							     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
							    if (
								(3U 
								 == 
								 (3U 
								  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								     >> 4U)))) {
								vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 9U;
							    } else {
								vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
								    = 
								    ((9U 
								      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
								     | (6U 
									& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
									   >> 3U)));
								vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
								    = 
								    (0xeU 
								     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
							    }
							}
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    (5U 
						     | (8U 
							& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
						if (
						    (((0U 
						       == 
						       (3U 
							& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							   >> 4U))) 
						      | (1U 
							 == 
							 (3U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 4U)))) 
						     | (2U 
							== 
							(3U 
							 & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							    >> 4U))))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							((9U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							 | (6U 
							    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							       >> 3U)));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(1U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 8U;
						}
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							(4U 
							 | (8U 
							    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
						    if (
							(((0U 
							   == 
							   (3U 
							    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							       >> 4U))) 
							  | (1U 
							     == 
							     (3U 
							      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								 >> 4U)))) 
							 | (2U 
							    == 
							    (3U 
							     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								>> 4U))))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							    = 
							    ((9U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							     | (6U 
								& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								   >> 3U)));
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							    = 
							    (0xeU 
							     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						    } else {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 9U;
						    }
						}
					    }
					}
				    } else {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | (7U 
							& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							   >> 3U)));
						if (
						    (6U 
						     == 
						     (7U 
						      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							 >> 3U)))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(8U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						}
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i = 1U;
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i = 1U;
						    if (
							(6U 
							 != 
							 (7U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 3U)))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							    = 
							    ((8U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							     | (7U 
								& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								   >> 3U)));
						    }
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_INRC = 1U;
						}
					    }
					}
				    }
				}
			    } else {
				if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 4U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(6U 
							 | (8U 
							    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							(7U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 0xeU;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						} else {
						    if (
							(8U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_RRD = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IMode = 0U;
					}
				    } else {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_RETN = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					}
				    }
				} else {
				    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 5U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDW = 1U;
						    if (
							(3U 
							 == 
							 (3U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 4U)))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 8U;
						    } else {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							    = 
							    ((9U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							     | (6U 
								& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								   >> 3U)));
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							    = 
							    (1U 
							     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							    = 
							    (7U 
							     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						    }
						} else {
						    if (
							(8U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
							if (
							    (3U 
							     == 
							     (3U 
							      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								 >> 4U)))) {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 9U;
							} else {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
								= 
								((9U 
								  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
								 | (6U 
								    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								       >> 3U)));
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
								= 
								(0xeU 
								 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
								= 
								(7U 
								 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
							}
						    } else {
							if (
							    (0x10U 
							     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
							}
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 3U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    (5U 
						     | (8U 
							& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
						if (
						    (((0U 
						       == 
						       (3U 
							& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							   >> 4U))) 
						      | (1U 
							 == 
							 (3U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 4U)))) 
						     | (2U 
							== 
							(3U 
							 & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							    >> 4U))))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							((9U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							 | (6U 
							    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							       >> 3U)));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(1U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 8U;
						}
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 3U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							(4U 
							 | (8U 
							    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							((((0U 
							    == 
							    (3U 
							     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								>> 4U))) 
							   | (1U 
							      == 
							      (3U 
							       & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								  >> 4U)))) 
							  | (2U 
							     == 
							     (3U 
							      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								 >> 4U))))
							  ? 
							 ((9U 
							   & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							  | (6U 
							     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								>> 3U)))
							  : 9U);
						}
					    }
					}
				    } else {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | (7U 
							& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							   >> 3U)));
						if (
						    (6U 
						     == 
						     (7U 
						      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							 >> 3U)))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(8U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						}
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i = 1U;
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i = 1U;
						    if (
							(6U 
							 != 
							 (7U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 3U)))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							    = 
							    ((8U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							     | (7U 
								& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								   >> 3U)));
						    }
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_INRC = 1U;
						}
					    }
					}
				    }
				}
			    }
			}
		    } else {
			if ((0x10U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			    if ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Special_LD = 5U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IMode = 2U;
					}
				    } else {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_RETN = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					}
				    }
				} else {
				    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 5U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDW = 1U;
						} else {
						    if (
							(8U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
							if (
							    (3U 
							     == 
							     (3U 
							      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								 >> 4U)))) {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 8U;
							} else {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
								= 
								((9U 
								  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
								 | (6U 
								    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								       >> 3U)));
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
								= 
								(1U 
								 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
							}
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
						    } else {
							if (
							    (0x10U 
							     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
							    if (
								(3U 
								 == 
								 (3U 
								  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								     >> 4U)))) {
								vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 9U;
							    } else {
								vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
								    = 
								    ((9U 
								      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
								     | (6U 
									& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
									   >> 3U)));
								vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
								    = 
								    (0xeU 
								     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
							    }
							}
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    (5U 
						     | (8U 
							& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
						if (
						    (((0U 
						       == 
						       (3U 
							& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							   >> 4U))) 
						      | (1U 
							 == 
							 (3U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 4U)))) 
						     | (2U 
							== 
							(3U 
							 & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							    >> 4U))))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							((9U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							 | (6U 
							    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							       >> 3U)));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(1U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 8U;
						}
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							(4U 
							 | (8U 
							    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
						    if (
							(((0U 
							   == 
							   (3U 
							    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							       >> 4U))) 
							  | (1U 
							     == 
							     (3U 
							      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								 >> 4U)))) 
							 | (2U 
							    == 
							    (3U 
							     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								>> 4U))))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							    = 
							    ((9U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							     | (6U 
								& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								   >> 3U)));
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							    = 
							    (0xeU 
							     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						    } else {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 9U;
						    }
						}
					    }
					}
				    } else {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | (7U 
							& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							   >> 3U)));
						if (
						    (6U 
						     == 
						     (7U 
						      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							 >> 3U)))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(8U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						}
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i = 1U;
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i = 1U;
						    if (
							(6U 
							 != 
							 (7U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 3U)))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							    = 
							    ((8U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							     | (7U 
								& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								   >> 3U)));
						    }
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_INRC = 1U;
						}
					    }
					}
				    }
				}
			    } else {
				if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Special_LD = 4U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IMode = 1U;
					}
				    } else {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_RETN = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					}
				    }
				} else {
				    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 5U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDW = 1U;
						    if (
							(3U 
							 == 
							 (3U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 4U)))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 8U;
						    } else {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							    = 
							    ((9U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							     | (6U 
								& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								   >> 3U)));
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							    = 
							    (1U 
							     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							    = 
							    (7U 
							     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						    }
						} else {
						    if (
							(8U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
							if (
							    (3U 
							     == 
							     (3U 
							      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								 >> 4U)))) {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 9U;
							} else {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
								= 
								((9U 
								  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
								 | (6U 
								    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								       >> 3U)));
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
								= 
								(0xeU 
								 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
								= 
								(7U 
								 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
							}
						    } else {
							if (
							    (0x10U 
							     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
							}
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 3U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    (5U 
						     | (8U 
							& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
						if (
						    (((0U 
						       == 
						       (3U 
							& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							   >> 4U))) 
						      | (1U 
							 == 
							 (3U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 4U)))) 
						     | (2U 
							== 
							(3U 
							 & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							    >> 4U))))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							((9U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							 | (6U 
							    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							       >> 3U)));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(1U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 8U;
						}
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 3U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							(4U 
							 | (8U 
							    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							((((0U 
							    == 
							    (3U 
							     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								>> 4U))) 
							   | (1U 
							      == 
							      (3U 
							       & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								  >> 4U)))) 
							  | (2U 
							     == 
							     (3U 
							      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								 >> 4U))))
							  ? 
							 ((9U 
							   & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							  | (6U 
							     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								>> 3U)))
							  : 9U);
						}
					    }
					}
				    } else {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | (7U 
							& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							   >> 3U)));
						if (
						    (6U 
						     == 
						     (7U 
						      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							 >> 3U)))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(8U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						}
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i = 1U;
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i = 1U;
						    if (
							(6U 
							 != 
							 (7U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 3U)))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							    = 
							    ((8U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							     | (7U 
								& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								   >> 3U)));
						    }
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_INRC = 1U;
						}
					    }
					}
				    }
				}
			    }
			} else {
			    if ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Special_LD = 7U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IMode = 0U;
					}
				    } else {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_RETN = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					}
				    }
				} else {
				    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 5U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDW = 1U;
						} else {
						    if (
							(8U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
							if (
							    (3U 
							     == 
							     (3U 
							      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								 >> 4U)))) {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 8U;
							} else {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
								= 
								((9U 
								  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
								 | (6U 
								    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								       >> 3U)));
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
								= 
								(1U 
								 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
							}
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
						    } else {
							if (
							    (0x10U 
							     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
							    if (
								(3U 
								 == 
								 (3U 
								  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								     >> 4U)))) {
								vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 9U;
							    } else {
								vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
								    = 
								    ((9U 
								      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
								     | (6U 
									& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
									   >> 3U)));
								vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
								    = 
								    (0xeU 
								     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To));
							    }
							}
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    (5U 
						     | (8U 
							& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
						if (
						    (((0U 
						       == 
						       (3U 
							& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							   >> 4U))) 
						      | (1U 
							 == 
							 (3U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 4U)))) 
						     | (2U 
							== 
							(3U 
							 & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							    >> 4U))))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							((9U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							 | (6U 
							    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							       >> 3U)));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(1U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 8U;
						}
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							(4U 
							 | (8U 
							    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
						    if (
							(((0U 
							   == 
							   (3U 
							    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							       >> 4U))) 
							  | (1U 
							     == 
							     (3U 
							      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								 >> 4U)))) 
							 | (2U 
							    == 
							    (3U 
							     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								>> 4U))))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							    = 
							    ((9U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							     | (6U 
								& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								   >> 3U)));
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							    = 
							    (0xeU 
							     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						    } else {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 9U;
						    }
						}
					    }
					}
				    } else {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | (7U 
							& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							   >> 3U)));
						if (
						    (6U 
						     == 
						     (7U 
						      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							 >> 3U)))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(8U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						}
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i = 1U;
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i = 1U;
						    if (
							(6U 
							 != 
							 (7U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 3U)))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							    = 
							    ((8U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							     | (7U 
								& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								   >> 3U)));
						    }
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_INRC = 1U;
						}
					    }
					}
				    }
				}
			    } else {
				if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Special_LD = 6U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IMode = 0U;
					}
				    } else {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
						} else {
						    if (
							(4U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_RETN = 1U;
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 2U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
					}
				    }
				} else {
				    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 5U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = 1U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDW = 1U;
						    if (
							(3U 
							 == 
							 (3U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 4U)))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 8U;
						    } else {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							    = 
							    ((9U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							     | (6U 
								& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								   >> 3U)));
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							    = 
							    (1U 
							     | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							    = 
							    (7U 
							     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						    }
						} else {
						    if (
							(8U 
							 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
							vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
							if (
							    (3U 
							     == 
							     (3U 
							      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								 >> 4U)))) {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 9U;
							} else {
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
								= 
								((9U 
								  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
								 | (6U 
								    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								       >> 3U)));
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
								= 
								(0xeU 
								 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
							    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
								= 
								(7U 
								 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
							}
						    } else {
							if (
							    (0x10U 
							     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
							    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
							}
						    }
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 3U;
					    if ((2U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 3U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
						    = 
						    (5U 
						     | (8U 
							& (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
						if (
						    (((0U 
						       == 
						       (3U 
							& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							   >> 4U))) 
						      | (1U 
							 == 
							 (3U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 4U)))) 
						     | (2U 
							== 
							(3U 
							 & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							    >> 4U))))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							((9U 
							  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							 | (6U 
							    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							       >> 3U)));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(1U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						} else {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = 8U;
						}
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 4U;
					    } else {
						if (
						    (4U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = 3U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							= 
							(4U 
							 | (8U 
							    & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)));
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							((((0U 
							    == 
							    (3U 
							     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								>> 4U))) 
							   | (1U 
							      == 
							      (3U 
							       & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								  >> 4U)))) 
							  | (2U 
							     == 
							     (3U 
							      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								 >> 4U))))
							  ? 
							 ((9U 
							   & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
							  | (6U 
							     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								>> 3U)))
							  : 9U);
						}
					    }
					}
				    } else {
					if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
						    = 
						    ((8U 
						      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
						     | (7U 
							& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							   >> 3U)));
						if (
						    (6U 
						     == 
						     (7U 
						      & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							 >> 3U)))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
							= 
							(8U 
							 | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
						}
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__write = 1U;
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i = 1U;
						}
					    }
					} else {
					    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = 2U;
					    if ((1U 
						 & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
					    } else {
						if (
						    (2U 
						     & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i = 1U;
						    if (
							(6U 
							 != 
							 (7U 
							  & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
							     >> 3U)))) {
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
							vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To 
							    = 
							    ((8U 
							      & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To)) 
							     | (7U 
								& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR) 
								   >> 3U)));
						    }
						    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_INRC = 1U;
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    if ((0x20U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
	vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
	if (((0x36U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR)) 
	     | (0xcbU == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR)))) {
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 7U;
	}
    }
    if ((0x40U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) {
	vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = 5U;
	if ((1U != (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ISet))) {
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
	}
	vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
	    = ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To)) 
	       | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
	if (((0x36U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR)) 
	     | (1U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ISet)))) {
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = 1U;
	} else {
	    vlTOPp->top_tv__DOT__topcore__DOT__no_read = 1U;
	}
	vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To 
	    = (7U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To));
    }
    // ALWAYS at tv80_core/tv80_alu.v:119
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
    if ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r))) {
	if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r))) {
	    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r))) {
		if ((1U & (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r)))) {
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
			= ((0xfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
			   | (0xf0U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA)));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
			= ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r))
			    ? ((0xf0U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
			       | (0xfU & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB) 
					  >> 4U))) : 
			   ((0xf0U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
			    | (0xfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB))));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= (0xefU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= (0xfdU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0xf7U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | (8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0xdfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | (0x20U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))
			    ? (0x40U | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out))
			    : (0xbfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0x7fU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | (0x80U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0xfbU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | (4U & ((~ VL_REDXOR_32((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))) 
				    << 2U)));
		}
	    } else {
		if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r))) {
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
			= ((0xfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
			   | (0xf0U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA)));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
			= ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r))
			    ? ((0xf0U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
			       | (0xfU & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB) 
					  >> 4U))) : 
			   ((0xf0U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
			    | (0xfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB))));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= (0xefU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= (0xfdU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0xf7U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | (8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0xdfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | (0x20U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))
			    ? (0x40U | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out))
			    : (0xbfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0x7fU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | (0x80U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0xfbU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | (4U & ((~ VL_REDXOR_32((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))) 
				    << 2U)));
		} else {
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0xefU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | (0x10U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F)));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0xfeU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | (1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F)));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q 
			= ((0x100U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)) 
			   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q 
			= (0xffU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q));
		    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F))) {
			if ((1U & ((9U < (0xfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q))) 
				   | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F) 
				      >> 4U)))) {
			    if ((5U < (0xfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)))) {
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
				    = (0xefU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
			    }
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q 
				= ((0x100U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)) 
				   | (0xffU & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q) 
					       - (IData)(6U))));
			}
			if ((1U & ((0x99U < (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA)) 
				   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F)))) {
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q 
				= (0x1ffU & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q) 
					     - (IData)(0x160U)));
			}
		    } else {
			if ((1U & ((9U < (0xfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q))) 
				   | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F) 
				      >> 4U)))) {
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
				= ((9U < (0xfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)))
				    ? (0x10U | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out))
				    : (0xefU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)));
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q 
				= (0x1ffU & ((IData)(6U) 
					     + (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)));
			}
			if ((1U & ((9U < (0x1fU & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q) 
						   >> 4U))) 
				   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F)))) {
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q 
				= (0x1ffU & ((IData)(0x60U) 
					     + (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)));
			}
		    }
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0xf7U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | (8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0xdfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | (0x20U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0xfeU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | (1U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F) 
				    | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q) 
				       >> 8U))));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
			= (0xffU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0U == (0xffU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)))
			    ? (0x40U | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out))
			    : (0xbfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0x7fU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | (0x80U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0xfbU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | (4U & ((~ VL_REDXOR_32((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q))) 
				    << 2U)));
		}
	    }
	} else {
	    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r))) {
		vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
		    = ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r))
		        ? ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB) 
			   & (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask)))
		        : ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB) 
			   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask)));
	    } else {
		if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r))) {
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
			= ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB) 
			   & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0x7fU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | (0x80U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
		    if ((0U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))) {
			vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			    = (0x40U | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
			vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			    = (4U | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
		    } else {
			vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			    = (0xbfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
			vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			    = (0xfbU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
		    }
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= (0x10U | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= (0xfdU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= (0xf7U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= (0xdfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
		    if ((6U != (7U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR)))) {
			vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			    = ((0xf7U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			       | (8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB)));
			vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			    = ((0xdfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			       | (0x20U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB)));
		    }
		} else {
		    if ((0x20U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			if ((0x10U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			    if ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
				    = ((0x80U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
				       | (0x7fU & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA) 
						   >> 1U)));
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
				    = ((0xfeU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
				       | (1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA)));
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
				    = (0x7fU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t));
			    } else {
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
				    = ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
				       | (0xfeU & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA) 
						   << 1U)));
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
				    = ((0xfeU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
				       | (1U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA) 
						>> 7U)));
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
				    = (1U | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t));
			    }
			} else {
			    if ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
				    = ((0x80U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
				       | (0x7fU & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA) 
						   >> 1U)));
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
				    = ((0xfeU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
				       | (1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA)));
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
				    = ((0x7fU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
				       | (0x80U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA)));
			    } else {
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
				    = ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
				       | (0xfeU & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA) 
						   << 1U)));
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
				    = ((0xfeU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
				       | (1U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA) 
						>> 7U)));
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
				    = (0xfeU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t));
			    }
			}
		    } else {
			if ((0x10U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			    if ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
				    = ((0x80U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
				       | (0x7fU & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA) 
						   >> 1U)));
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
				    = ((0xfeU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
				       | (1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA)));
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
				    = ((0x7fU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
				       | (0x80U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F) 
						   << 7U)));
			    } else {
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
				    = ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
				       | (0xfeU & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA) 
						   << 1U)));
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
				    = ((0xfeU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
				       | (1U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA) 
						>> 7U)));
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
				    = ((0xfeU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
				       | (1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F)));
			    }
			} else {
			    if ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
				    = ((0x80U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
				       | (0x7fU & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA) 
						   >> 1U)));
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
				    = ((0xfeU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
				       | (1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA)));
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
				    = ((0x7fU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
				       | (0x80U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA) 
						   << 7U)));
			    } else {
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
				    = ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
				       | (0xfeU & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA) 
						   << 1U)));
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
				    = ((0xfeU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
				       | (1U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA) 
						>> 7U)));
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
				    = ((0xfeU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
				       | (1U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA) 
						>> 7U)));
			    }
			}
		    }
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= (0xefU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= (0xfdU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0xf7U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | (8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0xdfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | (0x20U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0x7fU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | (0x80U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))
			    ? (0x40U | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out))
			    : (0xbfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0xfbU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | (4U & ((~ VL_REDXOR_32((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))) 
				    << 2U)));
		    if ((0U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ISet))) {
			vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			    = ((0xfbU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			       | (4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F)));
			vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			    = ((0x7fU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			       | (0x80U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F)));
			vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			    = ((0xbfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			       | (0x40U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F)));
		    }
		}
	    }
	}
    } else {
	vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
	    = (0xfdU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
	vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
	    = (0xfeU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
	if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r))) {
	    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r))) {
		if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r))) {
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
			= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v;
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= (2U | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0xfeU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | (1U & (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v))));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0xefU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | (0x10U & ((~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v)) 
				       << 4U)));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0xfbU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v) 
			      << 2U));
		} else {
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
			= ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA) 
			   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= (0xefU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
		}
	    } else {
		if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r))) {
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
			= ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA) 
			   ^ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= (0xefU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
		} else {
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
			= ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA) 
			   & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= (0x10U | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
		}
	    }
	} else {
	    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r))) {
		vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
		    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v;
		vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
		    = (2U | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
		vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
		    = ((0xfeU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
		       | (1U & (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v))));
		vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
		    = ((0xefU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
		       | (0x10U & ((~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v)) 
				   << 4U)));
		vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
		    = ((0xfbU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
		       | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v) 
			  << 2U));
	    } else {
		vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
		    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v;
		vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
		    = ((0xfeU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
		       | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v));
		vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
		    = ((0xefU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
		       | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v) 
			  << 4U));
		vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
		    = ((0xfbU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
		       | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v) 
			  << 2U));
	    }
	}
	if ((7U == (7U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r)))) {
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
		= ((0xf7U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
		   | (8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB)));
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
		= ((0xdfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
		   | (0x20U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB)));
	} else {
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
		= ((0xf7U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
		   | (8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
		= ((0xdfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
		   | (0x20U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
	}
	if ((0U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))) {
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
		= (0x40U | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
	    if (vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Z16_r) {
		vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
		    = ((0xbfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
		       | (0x40U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F)));
	    }
	} else {
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
		= (0xbfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
	}
	vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
	    = ((0x7fU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
	       | (0x80U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
	if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r))) {
	    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r))) {
		if ((1U & (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r)))) {
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0xfbU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | (4U & ((~ VL_REDXOR_32((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))) 
				    << 2U)));
		}
	    } else {
		vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
		    = ((0xfbU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
		       | (4U & ((~ VL_REDXOR_32((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))) 
				<< 2U)));
	    }
	}
	if (vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Arith16_r) {
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
		= ((0x7fU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
		   | (0x80U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F)));
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
		= ((0xbfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
		   | (0x40U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F)));
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
		= ((0xfbU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
		   | (4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F)));
	}
    }
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Q 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t;
    // ALWAYS at tv80_core/tv80_core.v:337
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__last_tstate 
	= (1U & ((0U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates))
		  ? (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate)
		  : ((1U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates))
		      ? ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
			 >> 1U) : ((2U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates))
				    ? ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
				       >> 2U) : ((3U 
						  == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates))
						  ? 
						 ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
						  >> 3U)
						  : 
						 ((4U 
						   == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates))
						   ? 
						  ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
						   >> 4U)
						   : 
						  ((5U 
						    == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates))
						    ? 
						   ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
						    >> 5U)
						    : 
						   ((6U 
						     == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates)) 
						    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
						       >> 6U)))))))));
    // ALWAYS at tv80_core/tv80_core.v:363
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__NextIs_XY_Fetch 
	= (((0U != (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__XY_State)) 
	    & (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__XY_Ind))) 
	   & (((2U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To)) 
	       | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle) 
		  & (0xcbU == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR)))) 
	      | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle) 
		 & (0x36U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR)))));
    // ALWAYS at tv80_core/tv80_core.v:1340
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PC16_B 
	= ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__JumpE)
	    ? ((0xff00U & (VL_NEGATE_I((IData)((1U 
						& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__di_reg) 
						   >> 7U)))) 
			   << 8U)) | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__di_reg))
	    : ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BTR_r)
	        ? 0xfffeU : 1U));
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PC16 
	= (0xffffU & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PC) 
		      + (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PC16_B)));
    // ALWAYS at tv80_core/tv80_core.v:954
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegWEH = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegWEL = 0U;
    if ((1U & (((((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
		  >> 1U) & (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU_r))) 
		& (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Auto_Wait_t1))) 
	       | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU_r) 
		  & (7U != (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r)))))) {
	if ((0x10U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
	    if ((1U & (~ ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg_r) 
			  >> 3U)))) {
		if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
		    if ((1U & (~ ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg_r) 
				  >> 1U)))) {
			vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegWEH 
			    = (1U & (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg_r)));
			vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegWEL 
			    = (1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg_r));
		    }
		} else {
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegWEH 
			= (1U & (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg_r)));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegWEL 
			= (1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg_r));
		}
	    }
	}
    }
    if (((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ExchangeDH) 
	 & (((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
	     >> 3U) | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
		       >> 4U)))) {
	vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegWEH = 1U;
	vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegWEL = 1U;
    }
    if ((1U & (((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16) 
		>> 2U) & ((((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
			    >> 2U) & (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) 
			  | (((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
			      >> 3U) & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle)))))) {
	if ((((0U == (3U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16))) 
	      | (1U == (3U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16)))) 
	     | (2U == (3U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16))))) {
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegWEH = 1U;
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegWEL = 1U;
	}
    }
    // ALWAYS at tv80_core/tv80_core.v:937
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegAddrA 
	= (((((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
	      >> 2U) | ((((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
			  >> 3U) & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle)) 
			& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16) 
			   >> 2U))) & (0U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__XY_State)))
	    ? (((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Alternate) 
		<< 2U) | (3U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16)))
	    : (((((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
		  >> 2U) | ((((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
			      >> 3U) & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle)) 
			    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16) 
			       >> 2U))) & (2U == (3U 
						  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16))))
	        ? (3U | (4U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__XY_State) 
			       << 1U))) : (((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ExchangeDH) 
					    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
					       >> 3U))
					    ? (2U | 
					       ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Alternate) 
						<< 2U))
					    : (((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ExchangeDH) 
						& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
						   >> 4U))
					        ? (1U 
						   | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Alternate) 
						      << 2U))
					        : (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegAddrA_r)))));
    // ALWAYS at tv80_core/tv80_core.v:1351
    if ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate))) {
	vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SP16_A 
	    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusC;
	vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SP16_B 
	    = ((0xff00U & (VL_NEGATE_I((IData)((1U 
						& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__di_reg) 
						   >> 7U)))) 
			   << 8U)) | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__di_reg));
    } else {
	vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SP16_A 
	    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SP;
	vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SP16_B 
	    = ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16))
	        ? 0xffffU : 1U);
    }
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SP16 
	= (0xffffU & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SP16_A) 
		      + (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SP16_B)));
    // ALWAYS at tv80_core/tv80_core.v:948
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegAddrB 
	= (((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ExchangeDH) 
	    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
	       >> 3U)) ? (1U | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Alternate) 
				<< 2U)) : (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegAddrB_r));
}

VL_INLINE_OPT void Vtop_tv::_combo__TOP__9(Vtop_tv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop_tv::_combo__TOP__9\n"); );
    Vtop_tv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top_tv__DOT____Vcellinp__topcore__reset_n 
	= (1U & (~ (IData)(vlTOPp->reset)));
}

VL_INLINE_OPT void Vtop_tv::_sequent__TOP__10(Vtop_tv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop_tv::_sequent__TOP__10\n"); );
    Vtop_tv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at tv80_core/tv80_alu.v:119
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F;
    if ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r))) {
	if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r))) {
	    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r))) {
		if ((1U & (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r)))) {
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
			= ((0xfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
			   | (0xf0U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA)));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
			= ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r))
			    ? ((0xf0U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
			       | (0xfU & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB) 
					  >> 4U))) : 
			   ((0xf0U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
			    | (0xfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB))));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= (0xefU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= (0xfdU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0xf7U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | (8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0xdfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | (0x20U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))
			    ? (0x40U | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out))
			    : (0xbfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0x7fU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | (0x80U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0xfbU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | (4U & ((~ VL_REDXOR_32((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))) 
				    << 2U)));
		}
	    } else {
		if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r))) {
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
			= ((0xfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
			   | (0xf0U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA)));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
			= ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r))
			    ? ((0xf0U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
			       | (0xfU & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB) 
					  >> 4U))) : 
			   ((0xf0U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
			    | (0xfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB))));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= (0xefU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= (0xfdU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0xf7U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | (8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0xdfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | (0x20U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))
			    ? (0x40U | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out))
			    : (0xbfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0x7fU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | (0x80U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0xfbU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | (4U & ((~ VL_REDXOR_32((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))) 
				    << 2U)));
		} else {
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0xefU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | (0x10U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F)));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0xfeU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | (1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F)));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q 
			= ((0x100U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)) 
			   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q 
			= (0xffU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q));
		    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F))) {
			if ((1U & ((9U < (0xfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q))) 
				   | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F) 
				      >> 4U)))) {
			    if ((5U < (0xfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)))) {
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
				    = (0xefU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
			    }
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q 
				= ((0x100U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)) 
				   | (0xffU & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q) 
					       - (IData)(6U))));
			}
			if ((1U & ((0x99U < (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA)) 
				   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F)))) {
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q 
				= (0x1ffU & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q) 
					     - (IData)(0x160U)));
			}
		    } else {
			if ((1U & ((9U < (0xfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q))) 
				   | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F) 
				      >> 4U)))) {
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
				= ((9U < (0xfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)))
				    ? (0x10U | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out))
				    : (0xefU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)));
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q 
				= (0x1ffU & ((IData)(6U) 
					     + (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)));
			}
			if ((1U & ((9U < (0x1fU & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q) 
						   >> 4U))) 
				   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F)))) {
			    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q 
				= (0x1ffU & ((IData)(0x60U) 
					     + (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)));
			}
		    }
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0xf7U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | (8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0xdfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | (0x20U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0xfeU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | (1U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F) 
				    | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q) 
				       >> 8U))));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
			= (0xffU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0U == (0xffU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)))
			    ? (0x40U | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out))
			    : (0xbfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0x7fU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | (0x80U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0xfbU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | (4U & ((~ VL_REDXOR_32((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q))) 
				    << 2U)));
		}
	    }
	} else {
	    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r))) {
		vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
		    = ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r))
		        ? ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB) 
			   & (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask)))
		        : ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB) 
			   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask)));
	    } else {
		if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r))) {
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
			= ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB) 
			   & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0x7fU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | (0x80U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
		    if ((0U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))) {
			vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			    = (0x40U | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
			vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			    = (4U | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
		    } else {
			vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			    = (0xbfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
			vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			    = (0xfbU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
		    }
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= (0x10U | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= (0xfdU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= (0xf7U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= (0xdfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
		    if ((6U != (7U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR)))) {
			vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			    = ((0xf7U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			       | (8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB)));
			vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			    = ((0xdfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			       | (0x20U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB)));
		    }
		} else {
		    if ((0x20U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			if ((0x10U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			    if ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
				    = ((0x80U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
				       | (0x7fU & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA) 
						   >> 1U)));
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
				    = ((0xfeU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
				       | (1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA)));
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
				    = (0x7fU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t));
			    } else {
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
				    = ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
				       | (0xfeU & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA) 
						   << 1U)));
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
				    = ((0xfeU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
				       | (1U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA) 
						>> 7U)));
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
				    = (1U | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t));
			    }
			} else {
			    if ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
				    = ((0x80U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
				       | (0x7fU & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA) 
						   >> 1U)));
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
				    = ((0xfeU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
				       | (1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA)));
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
				    = ((0x7fU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
				       | (0x80U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA)));
			    } else {
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
				    = ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
				       | (0xfeU & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA) 
						   << 1U)));
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
				    = ((0xfeU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
				       | (1U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA) 
						>> 7U)));
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
				    = (0xfeU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t));
			    }
			}
		    } else {
			if ((0x10U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
			    if ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
				    = ((0x80U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
				       | (0x7fU & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA) 
						   >> 1U)));
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
				    = ((0xfeU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
				       | (1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA)));
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
				    = ((0x7fU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
				       | (0x80U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F) 
						   << 7U)));
			    } else {
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
				    = ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
				       | (0xfeU & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA) 
						   << 1U)));
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
				    = ((0xfeU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
				       | (1U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA) 
						>> 7U)));
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
				    = ((0xfeU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
				       | (1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F)));
			    }
			} else {
			    if ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR))) {
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
				    = ((0x80U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
				       | (0x7fU & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA) 
						   >> 1U)));
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
				    = ((0xfeU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
				       | (1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA)));
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
				    = ((0x7fU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
				       | (0x80U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA) 
						   << 7U)));
			    } else {
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
				    = ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
				       | (0xfeU & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA) 
						   << 1U)));
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
				    = ((0xfeU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
				       | (1U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA) 
						>> 7U)));
				vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
				    = ((0xfeU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
				       | (1U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA) 
						>> 7U)));
			    }
			}
		    }
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= (0xefU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= (0xfdU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0xf7U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | (8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0xdfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | (0x20U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0x7fU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | (0x80U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))
			    ? (0x40U | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out))
			    : (0xbfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0xfbU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | (4U & ((~ VL_REDXOR_32((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))) 
				    << 2U)));
		    if ((0U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ISet))) {
			vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			    = ((0xfbU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			       | (4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F)));
			vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			    = ((0x7fU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			       | (0x80U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F)));
			vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			    = ((0xbfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			       | (0x40U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F)));
		    }
		}
	    }
	}
    } else {
	vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
	    = (0xfdU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
	vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
	    = (0xfeU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
	if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r))) {
	    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r))) {
		if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r))) {
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
			= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v;
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= (2U | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0xfeU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | (1U & (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v))));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0xefU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | (0x10U & ((~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v)) 
				       << 4U)));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0xfbU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v) 
			      << 2U));
		} else {
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
			= ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA) 
			   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= (0xefU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
		}
	    } else {
		if ((1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r))) {
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
			= ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA) 
			   ^ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= (0xefU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
		} else {
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
			= ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA) 
			   & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= (0x10U | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
		}
	    }
	} else {
	    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r))) {
		vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
		    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v;
		vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
		    = (2U | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
		vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
		    = ((0xfeU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
		       | (1U & (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v))));
		vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
		    = ((0xefU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
		       | (0x10U & ((~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v)) 
				   << 4U)));
		vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
		    = ((0xfbU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
		       | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v) 
			  << 2U));
	    } else {
		vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
		    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v;
		vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
		    = ((0xfeU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
		       | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v));
		vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
		    = ((0xefU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
		       | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v) 
			  << 4U));
		vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
		    = ((0xfbU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
		       | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v) 
			  << 2U));
	    }
	}
	if ((7U == (7U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r)))) {
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
		= ((0xf7U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
		   | (8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB)));
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
		= ((0xdfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
		   | (0x20U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB)));
	} else {
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
		= ((0xf7U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
		   | (8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
		= ((0xdfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
		   | (0x20U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
	}
	if ((0U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))) {
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
		= (0x40U | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
	    if (vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Z16_r) {
		vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
		    = ((0xbfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
		       | (0x40U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F)));
	    }
	} else {
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
		= (0xbfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out));
	}
	vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
	    = ((0x7fU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
	       | (0x80U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
	if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r))) {
	    if ((2U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r))) {
		if ((1U & (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r)))) {
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
			= ((0xfbU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
			   | (4U & ((~ VL_REDXOR_32((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))) 
				    << 2U)));
		}
	    } else {
		vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
		    = ((0xfbU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
		       | (4U & ((~ VL_REDXOR_32((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))) 
				<< 2U)));
	    }
	}
	if (vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Arith16_r) {
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
		= ((0x7fU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
		   | (0x80U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F)));
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
		= ((0xbfU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
		   | (0x40U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F)));
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out 
		= ((0xfbU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out)) 
		   | (4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F)));
	}
    }
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Q 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t;
    // ALWAYS at tv80_core/tv80_core.v:337
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__last_tstate 
	= (1U & ((0U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates))
		  ? (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate)
		  : ((1U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates))
		      ? ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
			 >> 1U) : ((2U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates))
				    ? ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
				       >> 2U) : ((3U 
						  == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates))
						  ? 
						 ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
						  >> 3U)
						  : 
						 ((4U 
						   == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates))
						   ? 
						  ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
						   >> 4U)
						   : 
						  ((5U 
						    == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates))
						    ? 
						   ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
						    >> 5U)
						    : 
						   ((6U 
						     == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates)) 
						    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
						       >> 6U)))))))));
    // ALWAYS at tv80_core/tv80_core.v:363
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__NextIs_XY_Fetch 
	= (((0U != (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__XY_State)) 
	    & (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__XY_Ind))) 
	   & (((2U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To)) 
	       | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle) 
		  & (0xcbU == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR)))) 
	      | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle) 
		 & (0x36U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR)))));
    // ALWAYS at tv80_core/tv80_core.v:1340
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PC16_B 
	= ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__JumpE)
	    ? ((0xff00U & (VL_NEGATE_I((IData)((1U 
						& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__di_reg) 
						   >> 7U)))) 
			   << 8U)) | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__di_reg))
	    : ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BTR_r)
	        ? 0xfffeU : 1U));
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PC16 
	= (0xffffU & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PC) 
		      + (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PC16_B)));
    // ALWAYS at tv80_core/tv80_core.v:954
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegWEH = 0U;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegWEL = 0U;
    if ((1U & (((((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
		  >> 1U) & (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU_r))) 
		& (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Auto_Wait_t1))) 
	       | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU_r) 
		  & (7U != (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r)))))) {
	if ((0x10U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
	    if ((1U & (~ ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg_r) 
			  >> 3U)))) {
		if ((4U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
		    if ((1U & (~ ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg_r) 
				  >> 1U)))) {
			vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegWEH 
			    = (1U & (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg_r)));
			vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegWEL 
			    = (1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg_r));
		    }
		} else {
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegWEH 
			= (1U & (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg_r)));
		    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegWEL 
			= (1U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg_r));
		}
	    }
	}
    }
    if (((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ExchangeDH) 
	 & (((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
	     >> 3U) | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
		       >> 4U)))) {
	vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegWEH = 1U;
	vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegWEL = 1U;
    }
    if ((1U & (((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16) 
		>> 2U) & ((((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
			    >> 2U) & (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) 
			  | (((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
			      >> 3U) & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle)))))) {
	if ((((0U == (3U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16))) 
	      | (1U == (3U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16)))) 
	     | (2U == (3U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16))))) {
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegWEH = 1U;
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegWEL = 1U;
	}
    }
    // ALWAYS at tv80_core/tv80_core.v:937
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegAddrA 
	= (((((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
	      >> 2U) | ((((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
			  >> 3U) & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle)) 
			& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16) 
			   >> 2U))) & (0U == (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__XY_State)))
	    ? (((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Alternate) 
		<< 2U) | (3U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16)))
	    : (((((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
		  >> 2U) | ((((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
			      >> 3U) & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle)) 
			    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16) 
			       >> 2U))) & (2U == (3U 
						  & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16))))
	        ? (3U | (4U & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__XY_State) 
			       << 1U))) : (((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ExchangeDH) 
					    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
					       >> 3U))
					    ? (2U | 
					       ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Alternate) 
						<< 2U))
					    : (((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ExchangeDH) 
						& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
						   >> 4U))
					        ? (1U 
						   | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Alternate) 
						      << 2U))
					        : (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegAddrA_r)))));
    // ALWAYS at tv80_core/tv80_core.v:1351
    if ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate))) {
	vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SP16_A 
	    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusC;
	vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SP16_B 
	    = ((0xff00U & (VL_NEGATE_I((IData)((1U 
						& ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__di_reg) 
						   >> 7U)))) 
			   << 8U)) | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__di_reg));
    } else {
	vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SP16_A 
	    = vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SP;
	vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SP16_B 
	    = ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16))
	        ? 0xffffU : 1U);
    }
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SP16 
	= (0xffffU & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SP16_A) 
		      + (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SP16_B)));
    // ALWAYS at tv80_core/tv80_core.v:948
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegAddrB 
	= (((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ExchangeDH) 
	    & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
	       >> 3U)) ? (1U | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Alternate) 
				<< 2U)) : (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegAddrB_r));
    // ALWAYS at tv80_core/tv80_core.v:368
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_Mux 
	= ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ExchangeRp)
	    ? (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB)
	    : ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU_r)
	        ? (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Q)
	        : (IData)(vlTOPp->top_tv__DOT__topcore__DOT__di_reg)));
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAH 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
	[vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegAddrA];
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAL 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
	[vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegAddrA];
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBH 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
	[vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegAddrB];
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBL 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
	[vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegAddrB];
}

void Vtop_tv::_settle__TOP__11(Vtop_tv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop_tv::_settle__TOP__11\n"); );
    Vtop_tv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at tv80_core/tv80_core.v:368
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_Mux 
	= ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ExchangeRp)
	    ? (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB)
	    : ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU_r)
	        ? (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Q)
	        : (IData)(vlTOPp->top_tv__DOT__topcore__DOT__di_reg)));
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAH 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
	[vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegAddrA];
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAL 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
	[vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegAddrA];
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBH 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
	[vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegAddrB];
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBL 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
	[vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegAddrB];
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusA 
	= ((0xffU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusA)) 
	   | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAH) 
	      << 8U));
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusA 
	= ((0xff00U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusA)) 
	   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAL));
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusB 
	= ((0xffU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusB)) 
	   | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBH) 
	      << 8U));
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusB 
	= ((0xff00U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusB)) 
	   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBL));
}

VL_INLINE_OPT void Vtop_tv::_sequent__TOP__12(Vtop_tv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop_tv::_sequent__TOP__12\n"); );
    Vtop_tv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusA 
	= ((0xffU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusA)) 
	   | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAH) 
	      << 8U));
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusA 
	= ((0xff00U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusA)) 
	   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAL));
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusB 
	= ((0xffU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusB)) 
	   | ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBH) 
	      << 8U));
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusB 
	= ((0xff00U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusB)) 
	   | (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBL));
    // ALWAYS at tv80_core/tv80_core.v:1368
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ID16_B 
	= ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16))
	    ? 0xffffU : 1U);
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ID16 
	= (0xffffU & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusA) 
		      + (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ID16_B)));
}

void Vtop_tv::_settle__TOP__13(Vtop_tv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop_tv::_settle__TOP__13\n"); );
    Vtop_tv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at tv80_core/tv80_core.v:1368
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ID16_B 
	= ((8U & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16))
	    ? 0xffffU : 1U);
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ID16 
	= (0xffffU & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusA) 
		      + (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ID16_B)));
    // ALWAYS at tv80_core/tv80_core.v:995
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegDIH 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_Mux;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegDIL 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_Mux;
    if (((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ExchangeDH) 
	 & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
	    >> 3U))) {
	vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegDIH 
	    = (0xffU & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusB) 
			>> 8U));
	vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegDIL 
	    = (0xffU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusB));
    } else {
	if (((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ExchangeDH) 
	     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
		>> 4U))) {
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegDIH 
		= (0xffU & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusA_r) 
			    >> 8U));
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegDIL 
		= (0xffU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusA_r));
	} else {
	    if ((1U & (((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16) 
			>> 2U) & ((((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
				    >> 2U) & (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) 
				  | (((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
				      >> 3U) & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle)))))) {
		vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegDIH 
		    = (0xffU & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ID16) 
				>> 8U));
		vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegDIL 
		    = (0xffU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ID16));
	    }
	}
    }
}

VL_INLINE_OPT void Vtop_tv::_sequent__TOP__14(Vtop_tv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop_tv::_sequent__TOP__14\n"); );
    Vtop_tv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at tv80_core/tv80_core.v:995
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegDIH 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_Mux;
    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegDIL 
	= vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_Mux;
    if (((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ExchangeDH) 
	 & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
	    >> 3U))) {
	vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegDIH 
	    = (0xffU & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusB) 
			>> 8U));
	vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegDIL 
	    = (0xffU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusB));
    } else {
	if (((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ExchangeDH) 
	     & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
		>> 4U))) {
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegDIH 
		= (0xffU & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusA_r) 
			    >> 8U));
	    vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegDIL 
		= (0xffU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusA_r));
	} else {
	    if ((1U & (((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16) 
			>> 2U) & ((((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
				    >> 2U) & (~ (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle))) 
				  | (((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate) 
				      >> 3U) & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle)))))) {
		vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegDIH 
		    = (0xffU & ((IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ID16) 
				>> 8U));
		vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegDIL 
		    = (0xffU & (IData)(vlTOPp->top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ID16));
	    }
	}
    }
}

void Vtop_tv::_eval(Vtop_tv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop_tv::_eval\n"); );
    Vtop_tv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((~ (IData)(vlTOPp->__VinpClk__TOP__top_tv__DOT____Vcellinp__topcore__reset_n)) 
	    & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__top_tv__DOT____Vcellinp__topcore__reset_n)))) {
	vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((~ (IData)(vlTOPp->__VinpClk__TOP__top_tv__DOT____Vcellinp__topcore__reset_n)) 
	    & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__top_tv__DOT____Vcellinp__topcore__reset_n)))) {
	vlTOPp->_sequent__TOP__6(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__7(vlSymsp);
    }
    vlTOPp->_combo__TOP__9(vlSymsp);
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((~ (IData)(vlTOPp->__VinpClk__TOP__top_tv__DOT____Vcellinp__topcore__reset_n)) 
	    & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__top_tv__DOT____Vcellinp__topcore__reset_n)))) {
	vlTOPp->_sequent__TOP__10(vlSymsp);
	vlTOPp->_sequent__TOP__12(vlSymsp);
	vlTOPp->_sequent__TOP__14(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__top_tv__DOT____Vcellinp__topcore__reset_n 
	= vlTOPp->__VinpClk__TOP__top_tv__DOT____Vcellinp__topcore__reset_n;
    vlTOPp->__VinpClk__TOP__top_tv__DOT____Vcellinp__topcore__reset_n 
	= vlTOPp->top_tv__DOT____Vcellinp__topcore__reset_n;
}

void Vtop_tv::_eval_initial(Vtop_tv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop_tv::_eval_initial\n"); );
    Vtop_tv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
}

void Vtop_tv::final() {
    VL_DEBUG_IF(VL_PRINTF("    Vtop_tv::final\n"); );
    // Variables
    Vtop_tv__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop_tv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop_tv::_eval_settle(Vtop_tv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop_tv::_eval_settle\n"); );
    Vtop_tv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__5(vlSymsp);
    vlTOPp->_settle__TOP__8(vlSymsp);
    vlTOPp->_settle__TOP__11(vlSymsp);
    vlTOPp->_settle__TOP__13(vlSymsp);
}

VL_INLINE_OPT QData Vtop_tv::_change_request(Vtop_tv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop_tv::_change_request\n"); );
    Vtop_tv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->top_tv__DOT____Vcellinp__topcore__reset_n ^ vlTOPp->__Vchglast__TOP__top_tv__DOT____Vcellinp__topcore__reset_n));
    VL_DEBUG_IF( if(__req && ((vlTOPp->top_tv__DOT____Vcellinp__topcore__reset_n ^ vlTOPp->__Vchglast__TOP__top_tv__DOT____Vcellinp__topcore__reset_n))) VL_PRINTF("	CHANGE: tv80_core/tv80s.v:39: top_tv.__Vcellinp__topcore__reset_n\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__top_tv__DOT____Vcellinp__topcore__reset_n 
	= vlTOPp->top_tv__DOT____Vcellinp__topcore__reset_n;
    return __req;
}

void Vtop_tv::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    Vtop_tv::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    addr = VL_RAND_RESET_I(16);
    top_tv__DOT__mem_dout = VL_RAND_RESET_I(8);
    top_tv__DOT__cpu_dout = VL_RAND_RESET_I(8);
    top_tv__DOT__cpu_din = VL_RAND_RESET_I(8);
    top_tv__DOT__wr_n = VL_RAND_RESET_I(1);
    top_tv__DOT__mreq_n = VL_RAND_RESET_I(1);
    top_tv__DOT__iorq_n = VL_RAND_RESET_I(1);
    top_tv__DOT__addr_raw = VL_RAND_RESET_I(16);
    top_tv__DOT__memory_reloc_enable = VL_RAND_RESET_I(1);
    top_tv__DOT____Vcellinp__topcore__reset_n = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<65536; ++__Vi0) {
	    top_tv__DOT__memory__DOT__memory[__Vi0] = VL_RAND_RESET_I(8);
    }}
    top_tv__DOT__memory__DOT__i = VL_RAND_RESET_I(32);
    top_tv__DOT__topcore__DOT__no_read = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__write = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__di_reg = VL_RAND_RESET_I(8);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ACC = VL_RAND_RESET_I(8);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F = VL_RAND_RESET_I(8);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Ap = VL_RAND_RESET_I(8);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Fp = VL_RAND_RESET_I(8);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I = VL_RAND_RESET_I(8);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SP = VL_RAND_RESET_I(16);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PC = VL_RAND_RESET_I(16);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegDIH = VL_RAND_RESET_I(8);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegDIL = VL_RAND_RESET_I(8);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusA = VL_RAND_RESET_I(16);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusB = VL_RAND_RESET_I(16);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusC = VL_RAND_RESET_I(16);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegAddrA_r = VL_RAND_RESET_I(3);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegAddrA = VL_RAND_RESET_I(3);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegAddrB_r = VL_RAND_RESET_I(3);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegAddrB = VL_RAND_RESET_I(3);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegAddrC = VL_RAND_RESET_I(3);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegWEH = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegWEL = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Alternate = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__TmpAddr = VL_RAND_RESET_I(16);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR = VL_RAND_RESET_I(8);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ISet = VL_RAND_RESET_I(2);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusA_r = VL_RAND_RESET_I(16);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ID16 = VL_RAND_RESET_I(16);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_Mux = VL_RAND_RESET_I(8);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate = VL_RAND_RESET_I(7);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle = VL_RAND_RESET_I(7);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__last_mcycle = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__last_tstate = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntE_FF1 = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntE_FF2 = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Halt_FF = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusReq_s = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusAck = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__NMI_s = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__INT_s = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IStatus = VL_RAND_RESET_I(2);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__XY_State = VL_RAND_RESET_I(2);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Pre_XY_F_M = VL_RAND_RESET_I(3);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__NextIs_XY_Fetch = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__XY_Ind = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__No_BTR = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BTR_r = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Auto_Wait = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Auto_Wait_t1 = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Auto_Wait_t2 = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDecZ = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB = VL_RAND_RESET_I(8);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA = VL_RAND_RESET_I(8);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Q = VL_RAND_RESET_I(8);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out = VL_RAND_RESET_I(8);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg_r = VL_RAND_RESET_I(5);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Arith16_r = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Z16_r = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r = VL_RAND_RESET_I(4);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU_r = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC_r = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles = VL_RAND_RESET_I(3);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d = VL_RAND_RESET_I(3);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates = VL_RAND_RESET_I(3);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntCycle = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__NMICycle = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_WZ = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16 = VL_RAND_RESET_I(4);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Prefix = VL_RAND_RESET_I(2);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Acc = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To = VL_RAND_RESET_I(4);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To = VL_RAND_RESET_I(4);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op = VL_RAND_RESET_I(4);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Arith16 = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To = VL_RAND_RESET_I(3);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__JumpE = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__JumpXY = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Call = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RstP = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDW = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDSPHL = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Special_LD = VL_RAND_RESET_I(3);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ExchangeDH = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ExchangeRp = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ExchangeAF = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ExchangeRS = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_DJNZ = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_CPL = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_CCF = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_SCF = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_RETN = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_BT = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_BC = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_BTR = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_RLD = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_RRD = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_INRC = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SetDI = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SetEI = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IMode = VL_RAND_RESET_I(2);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Halt = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PC16 = VL_RAND_RESET_I(16);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PC16_B = VL_RAND_RESET_I(16);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SP16 = VL_RAND_RESET_I(16);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SP16_A = VL_RAND_RESET_I(16);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SP16_B = VL_RAND_RESET_I(16);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ID16_B = VL_RAND_RESET_I(16);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOCL = VL_RAND_RESET_I(8);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOCH = VL_RAND_RESET_I(8);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBL = VL_RAND_RESET_I(8);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOBH = VL_RAND_RESET_I(8);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAL = VL_RAND_RESET_I(8);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT____Vcellout__i_reg__DOAH = VL_RAND_RESET_I(8);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD = VL_RAND_RESET_I(3);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS = VL_RAND_RESET_I(3);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR = VL_RAND_RESET_I(2);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__UseCarry = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v = VL_RAND_RESET_I(1);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v = VL_RAND_RESET_I(8);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask = VL_RAND_RESET_I(8);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t = VL_RAND_RESET_I(8);
    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q = VL_RAND_RESET_I(9);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
	    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
	    top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL[__Vi0] = VL_RAND_RESET_I(8);
    }}
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__Vfuncout = VL_RAND_RESET_I(1);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF = VL_RAND_RESET_I(8);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc = VL_RAND_RESET_I(3);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__Vfuncout = VL_RAND_RESET_I(1);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF = VL_RAND_RESET_I(8);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc = VL_RAND_RESET_I(3);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__Vfuncout = VL_RAND_RESET_I(1);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF = VL_RAND_RESET_I(8);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc = VL_RAND_RESET_I(3);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__Vfuncout = VL_RAND_RESET_I(1);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF = VL_RAND_RESET_I(8);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc = VL_RAND_RESET_I(3);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__Vfuncout = VL_RAND_RESET_I(1);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF = VL_RAND_RESET_I(8);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc = VL_RAND_RESET_I(3);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__Vfuncout = VL_RAND_RESET_I(1);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF = VL_RAND_RESET_I(8);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc = VL_RAND_RESET_I(3);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__Vfuncout = VL_RAND_RESET_I(1);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF = VL_RAND_RESET_I(8);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc = VL_RAND_RESET_I(3);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__Vfuncout = VL_RAND_RESET_I(1);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF = VL_RAND_RESET_I(8);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc = VL_RAND_RESET_I(3);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__Vfuncout = VL_RAND_RESET_I(1);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF = VL_RAND_RESET_I(8);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc = VL_RAND_RESET_I(3);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__Vfuncout = VL_RAND_RESET_I(1);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF = VL_RAND_RESET_I(8);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc = VL_RAND_RESET_I(3);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__Vfuncout = VL_RAND_RESET_I(1);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF = VL_RAND_RESET_I(8);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc = VL_RAND_RESET_I(3);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__Vfuncout = VL_RAND_RESET_I(1);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF = VL_RAND_RESET_I(8);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc = VL_RAND_RESET_I(3);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__Vfuncout = VL_RAND_RESET_I(1);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF = VL_RAND_RESET_I(8);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc = VL_RAND_RESET_I(3);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__Vfuncout = VL_RAND_RESET_I(1);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF = VL_RAND_RESET_I(8);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc = VL_RAND_RESET_I(3);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__Vfuncout = VL_RAND_RESET_I(1);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF = VL_RAND_RESET_I(8);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc = VL_RAND_RESET_I(3);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__Vfuncout = VL_RAND_RESET_I(1);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF = VL_RAND_RESET_I(8);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc = VL_RAND_RESET_I(3);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__Vfuncout = VL_RAND_RESET_I(1);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF = VL_RAND_RESET_I(8);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc = VL_RAND_RESET_I(3);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__Vfuncout = VL_RAND_RESET_I(1);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF = VL_RAND_RESET_I(8);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc = VL_RAND_RESET_I(3);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__Vfuncout = VL_RAND_RESET_I(1);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF = VL_RAND_RESET_I(8);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc = VL_RAND_RESET_I(3);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__Vfuncout = VL_RAND_RESET_I(1);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF = VL_RAND_RESET_I(8);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc = VL_RAND_RESET_I(3);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__Vfuncout = VL_RAND_RESET_I(1);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF = VL_RAND_RESET_I(8);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc = VL_RAND_RESET_I(3);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__Vfuncout = VL_RAND_RESET_I(1);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF = VL_RAND_RESET_I(8);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc = VL_RAND_RESET_I(3);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__Vfuncout = VL_RAND_RESET_I(1);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF = VL_RAND_RESET_I(8);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc = VL_RAND_RESET_I(3);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__26__Vfuncout = VL_RAND_RESET_I(1);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__26__FF = VL_RAND_RESET_I(8);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__26__cc = VL_RAND_RESET_I(3);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Vfuncout = VL_RAND_RESET_I(5);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__A = VL_RAND_RESET_I(4);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__B = VL_RAND_RESET_I(4);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Sub = VL_RAND_RESET_I(1);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Carry_In = VL_RAND_RESET_I(1);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__28__Vfuncout = VL_RAND_RESET_I(5);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__28__A = VL_RAND_RESET_I(4);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__28__B = VL_RAND_RESET_I(4);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__28__Sub = VL_RAND_RESET_I(1);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__28__Carry_In = VL_RAND_RESET_I(1);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Vfuncout = VL_RAND_RESET_I(4);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__A = VL_RAND_RESET_I(3);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__B = VL_RAND_RESET_I(3);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Sub = VL_RAND_RESET_I(1);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Carry_In = VL_RAND_RESET_I(1);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__30__Vfuncout = VL_RAND_RESET_I(4);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__30__A = VL_RAND_RESET_I(3);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__30__B = VL_RAND_RESET_I(3);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__30__Sub = VL_RAND_RESET_I(1);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__30__Carry_In = VL_RAND_RESET_I(1);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Vfuncout = VL_RAND_RESET_I(2);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__A = VL_RAND_RESET_I(1);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__B = VL_RAND_RESET_I(1);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Sub = VL_RAND_RESET_I(1);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Carry_In = VL_RAND_RESET_I(1);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__32__Vfuncout = VL_RAND_RESET_I(2);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__32__A = VL_RAND_RESET_I(1);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__32__B = VL_RAND_RESET_I(1);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__32__Sub = VL_RAND_RESET_I(1);
    __Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__32__Carry_In = VL_RAND_RESET_I(1);
    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU_r = VL_RAND_RESET_I(1);
    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PC = VL_RAND_RESET_I(16);
    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__XY_State = VL_RAND_RESET_I(2);
    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__XY_Ind = VL_RAND_RESET_I(1);
    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Alternate = VL_RAND_RESET_I(1);
    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ACC = VL_RAND_RESET_I(8);
    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F = VL_RAND_RESET_I(8);
    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SP = VL_RAND_RESET_I(16);
    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusAck = VL_RAND_RESET_I(1);
    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate = VL_RAND_RESET_I(7);
    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle = VL_RAND_RESET_I(7);
    __Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntCycle = VL_RAND_RESET_I(1);
    __VinpClk__TOP__top_tv__DOT____Vcellinp__topcore__reset_n = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__top_tv__DOT____Vcellinp__topcore__reset_n = VL_RAND_RESET_I(1);
    __Vchglast__TOP__top_tv__DOT____Vcellinp__topcore__reset_n = VL_RAND_RESET_I(1);
}

void Vtop_tv::_configure_coverage(Vtop_tv__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop_tv::_configure_coverage\n"); );
}
