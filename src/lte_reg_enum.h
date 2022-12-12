/*BEGIN_LEGAL 
BSD License 

Copyright (c)2019 Intel Corporation. All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
END_LEGAL */
#ifndef LTE_REG_ENUM_H
#define LTE_REG_ENUM_H

#ifdef INTERNAL_RS
#define LTE_RS(v) v
#else
#define LTE_RS(v)
#endif

#define LTE_REGISTERS_LIST(LTE_REG_MACRO) \
   LTE_REG_MACRO(INVALID) \
   LTE_REG_MACRO(BNDCFGU) \
   LTE_REG_MACRO(BNDSTATUS) \
   LTE_REG_MACRO(B0) \
   LTE_REG_MACRO(B1) \
   LTE_REG_MACRO(B2) \
   LTE_REG_MACRO(B3) \
   LTE_REG_MACRO(CR0) \
   LTE_REG_MACRO(CR1) \
   LTE_REG_MACRO(CR2) \
   LTE_REG_MACRO(CR3) \
   LTE_REG_MACRO(CR4) \
   LTE_REG_MACRO(CR5) \
   LTE_REG_MACRO(CR6) \
   LTE_REG_MACRO(CR7) \
   LTE_REG_MACRO(CR8) \
   LTE_REG_MACRO(CR9) \
   LTE_REG_MACRO(CR10) \
   LTE_REG_MACRO(CR11) \
   LTE_REG_MACRO(CR12) \
   LTE_REG_MACRO(CR13) \
   LTE_REG_MACRO(CR14) \
   LTE_REG_MACRO(CR15) \
   LTE_REG_MACRO(DR0) \
   LTE_REG_MACRO(DR1) \
   LTE_REG_MACRO(DR2) \
   LTE_REG_MACRO(DR3) \
   LTE_REG_MACRO(DR4) \
   LTE_REG_MACRO(DR5) \
   LTE_REG_MACRO(DR6) \
   LTE_REG_MACRO(DR7) \
   LTE_REG_MACRO(DR8) \
   LTE_REG_MACRO(DR9) \
   LTE_REG_MACRO(DR10) \
   LTE_REG_MACRO(DR11) \
   LTE_REG_MACRO(DR12) \
   LTE_REG_MACRO(DR13) \
   LTE_REG_MACRO(DR14) \
   LTE_REG_MACRO(DR15) \
   LTE_REG_MACRO(FLAGS) \
   LTE_REG_MACRO(EFLAGS) \
   LTE_REG_MACRO(RFLAGS) \
   LTE_REG_MACRO(AX) \
   LTE_REG_MACRO(CX) \
   LTE_REG_MACRO(DX) \
   LTE_REG_MACRO(BX) \
   LTE_REG_MACRO(SP) \
   LTE_REG_MACRO(BP) \
   LTE_REG_MACRO(SI) \
   LTE_REG_MACRO(DI) \
   LTE_REG_MACRO(R8W) \
   LTE_REG_MACRO(R9W) \
   LTE_REG_MACRO(R10W) \
   LTE_REG_MACRO(R11W) \
   LTE_REG_MACRO(R12W) \
   LTE_REG_MACRO(R13W) \
   LTE_REG_MACRO(R14W) \
   LTE_REG_MACRO(R15W) \
   LTE_REG_MACRO(EAX) \
   LTE_REG_MACRO(ECX) \
   LTE_REG_MACRO(EDX) \
   LTE_REG_MACRO(EBX) \
   LTE_REG_MACRO(ESP) \
   LTE_REG_MACRO(EBP) \
   LTE_REG_MACRO(ESI) \
   LTE_REG_MACRO(EDI) \
   LTE_REG_MACRO(R8D) \
   LTE_REG_MACRO(R9D) \
   LTE_REG_MACRO(R10D) \
   LTE_REG_MACRO(R11D) \
   LTE_REG_MACRO(R12D) \
   LTE_REG_MACRO(R13D) \
   LTE_REG_MACRO(R14D) \
   LTE_REG_MACRO(R15D) \
   LTE_REG_MACRO(RAX) \
   LTE_REG_MACRO(RCX) \
   LTE_REG_MACRO(RDX) \
   LTE_REG_MACRO(RBX) \
   LTE_REG_MACRO(RSP) \
   LTE_REG_MACRO(RBP) \
   LTE_REG_MACRO(RSI) \
   LTE_REG_MACRO(RDI) \
   LTE_REG_MACRO(R8) \
   LTE_REG_MACRO(R9) \
   LTE_REG_MACRO(R10) \
   LTE_REG_MACRO(R11) \
   LTE_REG_MACRO(R12) \
   LTE_REG_MACRO(R13) \
   LTE_REG_MACRO(R14) \
   LTE_REG_MACRO(R15) \
   LTE_REG_MACRO(AL) \
   LTE_REG_MACRO(CL) \
   LTE_REG_MACRO(DL) \
   LTE_REG_MACRO(BL) \
   LTE_REG_MACRO(SPL) \
   LTE_REG_MACRO(BPL) \
   LTE_REG_MACRO(SIL) \
   LTE_REG_MACRO(DIL) \
   LTE_REG_MACRO(R8B) \
   LTE_REG_MACRO(R9B) \
   LTE_REG_MACRO(R10B) \
   LTE_REG_MACRO(R11B) \
   LTE_REG_MACRO(R12B) \
   LTE_REG_MACRO(R13B) \
   LTE_REG_MACRO(R14B) \
   LTE_REG_MACRO(R15B) \
   LTE_REG_MACRO(AH) \
   LTE_REG_MACRO(CH) \
   LTE_REG_MACRO(DH) \
   LTE_REG_MACRO(BH) \
   LTE_REG_MACRO(RIP) \
   LTE_REG_MACRO(EIP) \
   LTE_REG_MACRO(IP) \
   LTE_REG_MACRO(K0) \
   LTE_REG_MACRO(K1) \
   LTE_REG_MACRO(K2) \
   LTE_REG_MACRO(K3) \
   LTE_REG_MACRO(K4) \
   LTE_REG_MACRO(K5) \
   LTE_REG_MACRO(K6) \
   LTE_REG_MACRO(K7) \
   LTE_RS(LTE_REG_MACRO(MCDCTRL)) \
   LTE_REG_MACRO(MMX0) \
   LTE_REG_MACRO(MMX1) \
   LTE_REG_MACRO(MMX2) \
   LTE_REG_MACRO(MMX3) \
   LTE_REG_MACRO(MMX4) \
   LTE_REG_MACRO(MMX5) \
   LTE_REG_MACRO(MMX6) \
   LTE_REG_MACRO(MMX7) \
   LTE_REG_MACRO(MXCSR) \
   LTE_REG_MACRO(STACKPUSH) \
   LTE_REG_MACRO(STACKPOP) \
   LTE_REG_MACRO(GDTR) \
   LTE_REG_MACRO(LDTR) \
   LTE_REG_MACRO(IDTR) \
   LTE_REG_MACRO(TR) \
   LTE_REG_MACRO(TSC) \
   LTE_REG_MACRO(TSCAUX) \
   LTE_REG_MACRO(MSRS) \
   LTE_REG_MACRO(FSBASE) \
   LTE_REG_MACRO(GSBASE) \
   LTE_REG_MACRO(FCW) \
   LTE_REG_MACRO(FSW) \
   LTE_REG_MACRO(FTW) \
   LTE_REG_MACRO(X87PUSH) \
   LTE_REG_MACRO(X87POP) \
   LTE_REG_MACRO(X87POP2) \
   LTE_REG_MACRO(FOP) \
   LTE_REG_MACRO(X87CS) \
   LTE_REG_MACRO(FPUIP) \
   LTE_REG_MACRO(X87DS) \
   LTE_REG_MACRO(FPUDP) \
   LTE_REG_MACRO(CS) \
   LTE_REG_MACRO(DS) \
   LTE_REG_MACRO(ES) \
   LTE_REG_MACRO(SS) \
   LTE_REG_MACRO(FS) \
   LTE_REG_MACRO(GS) \
   LTE_REG_MACRO(TMP0) \
   LTE_REG_MACRO(TMP1) \
   LTE_REG_MACRO(TMP2) \
   LTE_REG_MACRO(TMP3) \
   LTE_REG_MACRO(TMP4) \
   LTE_REG_MACRO(TMP5) \
   LTE_REG_MACRO(TMP6) \
   LTE_REG_MACRO(TMP7) \
   LTE_REG_MACRO(TMP8) \
   LTE_REG_MACRO(TMP9) \
   LTE_REG_MACRO(TMP10) \
   LTE_REG_MACRO(TMP11) \
   LTE_REG_MACRO(TMP12) \
   LTE_REG_MACRO(TMP13) \
   LTE_REG_MACRO(TMP14) \
   LTE_REG_MACRO(TMP15) \
   LTE_REG_MACRO(ST0) \
   LTE_REG_MACRO(ST1) \
   LTE_REG_MACRO(ST2) \
   LTE_REG_MACRO(ST3) \
   LTE_REG_MACRO(ST4) \
   LTE_REG_MACRO(ST5) \
   LTE_REG_MACRO(ST6) \
   LTE_REG_MACRO(ST7) \
   LTE_REG_MACRO(XCR0) \
   LTE_REG_MACRO(XMM0) \
   LTE_REG_MACRO(XMM1) \
   LTE_REG_MACRO(XMM2) \
   LTE_REG_MACRO(XMM3) \
   LTE_REG_MACRO(XMM4) \
   LTE_REG_MACRO(XMM5) \
   LTE_REG_MACRO(XMM6) \
   LTE_REG_MACRO(XMM7) \
   LTE_REG_MACRO(XMM8) \
   LTE_REG_MACRO(XMM9) \
   LTE_REG_MACRO(XMM10) \
   LTE_REG_MACRO(XMM11) \
   LTE_REG_MACRO(XMM12) \
   LTE_REG_MACRO(XMM13) \
   LTE_REG_MACRO(XMM14) \
   LTE_REG_MACRO(XMM15) \
   LTE_REG_MACRO(XMM16) \
   LTE_REG_MACRO(XMM17) \
   LTE_REG_MACRO(XMM18) \
   LTE_REG_MACRO(XMM19) \
   LTE_REG_MACRO(XMM20) \
   LTE_REG_MACRO(XMM21) \
   LTE_REG_MACRO(XMM22) \
   LTE_REG_MACRO(XMM23) \
   LTE_REG_MACRO(XMM24) \
   LTE_REG_MACRO(XMM25) \
   LTE_REG_MACRO(XMM26) \
   LTE_REG_MACRO(XMM27) \
   LTE_REG_MACRO(XMM28) \
   LTE_REG_MACRO(XMM29) \
   LTE_REG_MACRO(XMM30) \
   LTE_REG_MACRO(XMM31) \
   LTE_REG_MACRO(YMM0) \
   LTE_REG_MACRO(YMM1) \
   LTE_REG_MACRO(YMM2) \
   LTE_REG_MACRO(YMM3) \
   LTE_REG_MACRO(YMM4) \
   LTE_REG_MACRO(YMM5) \
   LTE_REG_MACRO(YMM6) \
   LTE_REG_MACRO(YMM7) \
   LTE_REG_MACRO(YMM8) \
   LTE_REG_MACRO(YMM9) \
   LTE_REG_MACRO(YMM10) \
   LTE_REG_MACRO(YMM11) \
   LTE_REG_MACRO(YMM12) \
   LTE_REG_MACRO(YMM13) \
   LTE_REG_MACRO(YMM14) \
   LTE_REG_MACRO(YMM15) \
   LTE_REG_MACRO(YMM16) \
   LTE_REG_MACRO(YMM17) \
   LTE_REG_MACRO(YMM18) \
   LTE_REG_MACRO(YMM19) \
   LTE_REG_MACRO(YMM20) \
   LTE_REG_MACRO(YMM21) \
   LTE_REG_MACRO(YMM22) \
   LTE_REG_MACRO(YMM23) \
   LTE_REG_MACRO(YMM24) \
   LTE_REG_MACRO(YMM25) \
   LTE_REG_MACRO(YMM26) \
   LTE_REG_MACRO(YMM27) \
   LTE_REG_MACRO(YMM28) \
   LTE_REG_MACRO(YMM29) \
   LTE_REG_MACRO(YMM30) \
   LTE_REG_MACRO(YMM31) \
   LTE_REG_MACRO(ZMM0) \
   LTE_REG_MACRO(ZMM1) \
   LTE_REG_MACRO(ZMM2) \
   LTE_REG_MACRO(ZMM3) \
   LTE_REG_MACRO(ZMM4) \
   LTE_REG_MACRO(ZMM5) \
   LTE_REG_MACRO(ZMM6) \
   LTE_REG_MACRO(ZMM7) \
   LTE_REG_MACRO(ZMM8) \
   LTE_REG_MACRO(ZMM9) \
   LTE_REG_MACRO(ZMM10) \
   LTE_REG_MACRO(ZMM11) \
   LTE_REG_MACRO(ZMM12) \
   LTE_REG_MACRO(ZMM13) \
   LTE_REG_MACRO(ZMM14) \
   LTE_REG_MACRO(ZMM15) \
   LTE_REG_MACRO(ZMM16) \
   LTE_REG_MACRO(ZMM17) \
   LTE_REG_MACRO(ZMM18) \
   LTE_REG_MACRO(ZMM19) \
   LTE_REG_MACRO(ZMM20) \
   LTE_REG_MACRO(ZMM21) \
   LTE_REG_MACRO(ZMM22) \
   LTE_REG_MACRO(ZMM23) \
   LTE_REG_MACRO(ZMM24) \
   LTE_REG_MACRO(ZMM25) \
   LTE_REG_MACRO(ZMM26) \
   LTE_REG_MACRO(ZMM27) \
   LTE_REG_MACRO(ZMM28) \
   LTE_REG_MACRO(ZMM29) \
   LTE_REG_MACRO(ZMM30) \
   LTE_REG_MACRO(ZMM31) \
   LTE_REG_MACRO(XINIT_BV) \
   LTE_REG_MACRO(XMODIFIED_BV) \

#define LTE_REG_ID(NAME) \
   LTE_REG_##NAME

#define DECLARE_LTE_REG_ID(NAME) \
   LTE_REG_ID(NAME),

#define LTE_REG_ENUM_REGISTERS \
   LTE_REGISTERS_LIST(DECLARE_LTE_REG_ID) \
   LTE_REG_LAST

enum lte_reg_enum_t {
   LTE_REG_ENUM_REGISTERS,

   // Aliases
   LTE_REG_BND0 = LTE_REG_B0,
   LTE_REG_BND1 = LTE_REG_B1,
   LTE_REG_BND2 = LTE_REG_B2,
   LTE_REG_BND3 = LTE_REG_B3,
   LTE_REG_X87CONTROL = LTE_REG_FCW,
   LTE_REG_X87STATUS = LTE_REG_FSW,
   LTE_REG_X87TAG = LTE_REG_FTW,
   LTE_REG_X87OPCODE = LTE_REG_FOP,
   LTE_REG_X87LASTCS = LTE_REG_X87CS,
   LTE_REG_X87LASTIP = LTE_REG_FPUIP,
   LTE_REG_X87LASTDS = LTE_REG_X87DS,
   LTE_REG_X87LASTDP = LTE_REG_FPUDP,

   // Preudo
   LTE_REG_BNDCFG_FIRST = LTE_REG_BNDCFGU,
   LTE_REG_BNDCFG_LAST = LTE_REG_BNDCFGU,
   LTE_REG_BNDSTAT_FIRST = LTE_REG_BNDSTATUS,
   LTE_REG_BNDSTAT_LAST = LTE_REG_BNDSTATUS,
   LTE_REG_BOUND_FIRST = LTE_REG_BND0,
   LTE_REG_BOUND_LAST = LTE_REG_BND3,
   LTE_REG_CR_FIRST = LTE_REG_CR0,
   LTE_REG_CR_LAST = LTE_REG_CR15,
   LTE_REG_DR_FIRST = LTE_REG_DR0,
   LTE_REG_DR_LAST = LTE_REG_DR15,
   LTE_REG_FLAGS_FIRST = LTE_REG_FLAGS,
   LTE_REG_FLAGS_LAST = LTE_REG_RFLAGS,
   LTE_REG_GPR16_FIRST = LTE_REG_AX,
   LTE_REG_GPR16_LAST = LTE_REG_R15W,
   LTE_REG_GPR32_FIRST = LTE_REG_EAX,
   LTE_REG_GPR32_LAST = LTE_REG_R15D,
   LTE_REG_GPR64_FIRST = LTE_REG_RAX,
   LTE_REG_GPR64_LAST = LTE_REG_R15,
   LTE_REG_GPR8_FIRST = LTE_REG_AL,
   LTE_REG_GPR8_LAST = LTE_REG_R15B,
   LTE_REG_GPR8H_FIRST = LTE_REG_AH,
   LTE_REG_GPR8H_LAST = LTE_REG_BH,
   LTE_REG_IP_FIRST = LTE_REG_RIP,
   LTE_REG_IP_LAST = LTE_REG_IP,
   LTE_REG_MASK_FIRST = LTE_REG_K0,
   LTE_REG_MASK_LAST = LTE_REG_K7,
   LTE_REG_MMX_FIRST = LTE_REG_MMX0,
   LTE_REG_MMX_LAST = LTE_REG_MMX7,
   LTE_REG_MXCSR_FIRST = LTE_REG_MXCSR,
   LTE_REG_MXCSR_LAST = LTE_REG_MXCSR,
   LTE_REG_SEGBASE_FIRST = LTE_REG_FSBASE,
   LTE_REG_SEGBASE_LAST = LTE_REG_GSBASE,
   LTE_REG_PSEUDOX87_FIRST = LTE_REG_X87CONTROL,
   LTE_REG_PSEUDOX87_LAST = LTE_REG_X87LASTDP,
   LTE_REG_SR_FIRST = LTE_REG_CS,
   LTE_REG_SR_LAST = LTE_REG_GS,
   LTE_REG_X87_FIRST = LTE_REG_ST0,
   LTE_REG_X87_LAST = LTE_REG_ST7,
   LTE_REG_XCR_FIRST = LTE_REG_XCR0,
   LTE_REG_XCR_LAST = LTE_REG_XCR0,
   LTE_REG_XMM_FIRST = LTE_REG_XMM0,
   LTE_REG_XMM_LAST = LTE_REG_XMM31,
   LTE_REG_YMM_FIRST = LTE_REG_YMM0,
   LTE_REG_YMM_LAST = LTE_REG_YMM31,
   LTE_REG_ZMM_FIRST = LTE_REG_ZMM0,
   LTE_REG_ZMM_LAST = LTE_REG_ZMM31
};

lte_reg_enum_t str2lte_reg_enum_t(const char* s);

const char* lte_reg_enum_t2str(const lte_reg_enum_t v);

#endif //LTE_REG_ENUM_H
