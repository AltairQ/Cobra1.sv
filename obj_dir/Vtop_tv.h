// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vtop_tv_H_
#define _Vtop_tv_H_

#include "verilated.h"

class Vtop_tv__Syms;

//----------

VL_MODULE(Vtop_tv) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    // Begin mtask footprint  all: 
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT16(addr,15,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
	// Begin mtask footprint  all: 
	VL_SIG8(top_tv__DOT__mem_dout,7,0);
	VL_SIG8(top_tv__DOT__mem_din,7,0);
	VL_SIG8(top_tv__DOT__wr_n,0,0);
	VL_SIG8(top_tv__DOT__memory_reloc_enable,0,0);
	VL_SIG8(top_tv__DOT__mreq_n,0,0);
	VL_SIG8(top_tv__DOT__iorq_n,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__no_read,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__write,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__di_reg,7,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ACC,7,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F,7,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Ap,7,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Fp,7,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I,7,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegDIH,7,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegDIL,7,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegAddrA_r,2,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegAddrA,2,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegAddrB_r,2,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegAddrB,2,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegAddrC,2,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegWEH,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegWEL,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Alternate,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR,7,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ISet,1,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_Mux,7,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate,6,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle,6,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__last_mcycle,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__last_tstate,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntE_FF1,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntE_FF2,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Halt_FF,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusReq_s,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusAck,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__NMI_s,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__INT_s,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IStatus,1,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__XY_State,1,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Pre_XY_F_M,2,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__NextIs_XY_Fetch,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__XY_Ind,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__No_BTR,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BTR_r,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Auto_Wait,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Auto_Wait_t1,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Auto_Wait_t2,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDecZ,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusB,7,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusA,7,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Q,7,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F_Out,7,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg_r,4,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Arith16_r,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Z16_r,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op_r,3,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU_r,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC_r,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles,2,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycles_d,2,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstates,2,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntCycle,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__NMICycle,0,0);
    };
    struct {
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_PC,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Inc_WZ,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IncDec_16,3,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Prefix,1,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Acc,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Read_To_Reg,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusB_To,3,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_BusA_To,3,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ALU_Op,3,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Save_ALU,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PreserveC,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Arith16,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Set_Addr_To,2,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Jump,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__JumpE,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__JumpXY,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Call,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RstP,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDZ,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDW,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__LDSPHL,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__iorq_i,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Special_LD,2,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ExchangeDH,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ExchangeRp,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ExchangeAF,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ExchangeRS,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_DJNZ,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_CPL,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_CCF,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_SCF,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_RETN,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_BT,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_BC,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_BTR,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_RLD,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_RRD,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__I_INRC,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SetDI,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SetEI,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IMode,1,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Halt,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD,2,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS,2,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR,1,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__UseCarry,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v,0,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v,7,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask,7,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t,7,0);
	VL_SIG16(top_tv__DOT__addr_raw,15,0);
	VL_SIG16(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SP,15,0);
	VL_SIG16(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PC,15,0);
	VL_SIG16(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusA,15,0);
	VL_SIG16(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusB,15,0);
	VL_SIG16(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusC,15,0);
	VL_SIG16(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__TmpAddr,15,0);
	VL_SIG16(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__RegBusA_r,15,0);
	VL_SIG16(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ID16,15,0);
	VL_SIG16(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PC16,15,0);
	VL_SIG16(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PC16_B,15,0);
    };
    struct {
	VL_SIG16(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SP16,15,0);
	VL_SIG16(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SP16_A,15,0);
	VL_SIG16(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SP16_B,15,0);
	VL_SIG16(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ID16_B,15,0);
	VL_SIG16(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q,8,0);
	VL_SIG(top_tv__DOT__memory__DOT__i,31,0);
	VL_SIG8(top_tv__DOT__memory__DOT__memory[65536],7,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH[8],7,0);
	VL_SIG8(top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL[8],7,0);
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
	// Begin mtask footprint  all: 
	VL_SIG8(top_tv__DOT____Vcellinp__topcore__reset_n,0,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__Vfuncout,0,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF,7,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc,2,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__Vfuncout,0,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF,7,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc,2,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__Vfuncout,0,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF,7,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc,2,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__Vfuncout,0,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF,7,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc,2,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__Vfuncout,0,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF,7,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc,2,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__Vfuncout,0,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF,7,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc,2,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__Vfuncout,0,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF,7,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc,2,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__Vfuncout,0,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF,7,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc,2,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__Vfuncout,0,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF,7,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc,2,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__Vfuncout,0,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF,7,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc,2,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__Vfuncout,0,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF,7,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc,2,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__Vfuncout,0,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF,7,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc,2,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__Vfuncout,0,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF,7,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc,2,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__Vfuncout,0,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF,7,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc,2,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__Vfuncout,0,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF,7,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc,2,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__Vfuncout,0,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF,7,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc,2,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__Vfuncout,0,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF,7,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc,2,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__Vfuncout,0,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF,7,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc,2,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__Vfuncout,0,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF,7,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc,2,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__Vfuncout,0,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF,7,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc,2,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__Vfuncout,0,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF,7,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc,2,0);
    };
    struct {
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__Vfuncout,0,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF,7,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc,2,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__Vfuncout,0,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF,7,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc,2,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__Vfuncout,0,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF,7,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc,2,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Vfuncout,4,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__A,3,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__B,3,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Sub,0,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Carry_In,0,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Vfuncout,4,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__A,3,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__B,3,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Sub,0,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Carry_In,0,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Vfuncout,3,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__A,2,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__B,2,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Sub,0,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Carry_In,0,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Vfuncout,3,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__A,2,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__B,2,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Sub,0,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Carry_In,0,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Vfuncout,1,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__A,0,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__B,0,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Sub,0,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Carry_In,0,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Vfuncout,1,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__A,0,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__B,0,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Sub,0,0);
	VL_SIG8(__Vfunc_top_tv__DOT__topcore__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Carry_In,0,0);
	VL_SIG8(__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Alternate,0,0);
	VL_SIG8(__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__XY_State,1,0);
	VL_SIG8(__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IR,7,0);
	VL_SIG8(__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__ACC,7,0);
	VL_SIG8(__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__F,7,0);
	VL_SIG8(__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Auto_Wait_t1,0,0);
	VL_SIG8(__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Auto_Wait_t2,0,0);
	VL_SIG8(__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntE_FF1,0,0);
	VL_SIG8(__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__IntE_FF2,0,0);
	VL_SIG8(__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__BusAck,0,0);
	VL_SIG8(__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__tstate,6,0);
	VL_SIG8(__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__Pre_XY_F_M,2,0);
	VL_SIG8(__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__mcycle,6,0);
	VL_SIG8(__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__NMICycle,0,0);
	VL_SIG8(__VinpClk__TOP__top_tv__DOT____Vcellinp__topcore__reset_n,0,0);
	VL_SIG8(__Vclklast__TOP__clk,0,0);
	VL_SIG8(__Vclklast__TOP____VinpClk__TOP__top_tv__DOT____Vcellinp__topcore__reset_n,0,0);
	VL_SIG8(__Vchglast__TOP__top_tv__DOT____Vcellinp__topcore__reset_n,0,0);
	VL_SIG16(__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__PC,15,0);
	VL_SIG16(__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__TmpAddr,15,0);
	VL_SIG16(__Vdly__top_tv__DOT__topcore__DOT__i_tv80_core__DOT__SP,15,0);
    };
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vtop_tv__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop_tv);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vtop_tv(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vtop_tv();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vtop_tv__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vtop_tv__Syms* symsp, bool first);
  private:
    static QData _change_request(Vtop_tv__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__8(Vtop_tv__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vtop_tv__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(Vtop_tv__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vtop_tv__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Vtop_tv__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(Vtop_tv__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(Vtop_tv__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(Vtop_tv__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(Vtop_tv__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(Vtop_tv__Syms* __restrict vlSymsp);
    static void _settle__TOP__4(Vtop_tv__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(128);

#endif // guard
