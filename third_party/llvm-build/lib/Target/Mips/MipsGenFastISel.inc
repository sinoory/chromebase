/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*"Fast" Instruction Selector for the Mips target                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


// FastEmit Immediate Predicate functions.
static bool Predicate_immZExt5(int64_t Imm) {
return Imm == (Imm & 0x1f);
}
static bool Predicate_immZExt6(int64_t Imm) {
return Imm == (Imm & 0x3f);
}
static bool Predicate_immSExt6(int64_t Imm) {
return isInt<6>(Imm);
}
static bool Predicate_immZExt4(int64_t Imm) {
return isUInt<4>(Imm);
}
static bool Predicate_immZExt8(int64_t Imm) {
return isUInt<8>(Imm);
}


// FastEmit functions for ISD::ANY_EXTEND.

unsigned FastEmit_ISD_ANY_EXTEND_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  if ((Subtarget->hasStandardEncoding())) {
    return FastEmitInst_r(Mips::SLL64_32, &Mips::GPR64RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_ANY_EXTEND_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_ANY_EXTEND_MVT_i32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::BITCAST.

unsigned FastEmit_ISD_BITCAST_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((Subtarget->hasStandardEncoding())) {
    return FastEmitInst_r(Mips::MTC1, &Mips::FGR32RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_BITCAST_MVT_i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->hasMips3())) {
    return FastEmitInst_r(Mips::DMTC1, &Mips::FGR64RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_BITCAST_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasStandardEncoding())) {
    return FastEmitInst_r(Mips::MFC1, &Mips::GPR32RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_BITCAST_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->hasMips3())) {
    return FastEmitInst_r(Mips::DMFC1, &Mips::GPR64RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_BITCAST_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_BITCAST_MVT_i32_r(RetVT, Op0, Op0IsKill);
  case MVT::i64: return FastEmit_ISD_BITCAST_MVT_i64_r(RetVT, Op0, Op0IsKill);
  case MVT::f32: return FastEmit_ISD_BITCAST_MVT_f32_r(RetVT, Op0, Op0IsKill);
  case MVT::f64: return FastEmit_ISD_BITCAST_MVT_f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::BRIND.

unsigned FastEmit_ISD_BRIND_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  return FastEmitInst_r(Mips::PseudoIndirectBranch, &Mips::GPR32RegClass, Op0, Op0IsKill);
  if ((Subtarget->inMips16Mode())) {
    return FastEmitInst_r(Mips::JrcRx16, &Mips::CPU16RegsRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_BRIND_MVT_i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  return FastEmitInst_r(Mips::PseudoIndirectBranch64, &Mips::GPR64RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_ISD_BRIND_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_BRIND_MVT_i32_r(RetVT, Op0, Op0IsKill);
  case MVT::i64: return FastEmit_ISD_BRIND_MVT_i64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::CTLZ.

unsigned FastEmit_ISD_CTLZ_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->hasMips32()) && (!Subtarget->hasMips32r6()) && (!Subtarget->hasMips64r6())) {
    return FastEmitInst_r(Mips::CLZ, &Mips::GPR32RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->hasMips32r6())) {
    return FastEmitInst_r(Mips::CLZ_R6, &Mips::GPR32RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_CTLZ_MVT_i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->hasMips64()) && (!Subtarget->hasMips64r6())) {
    return FastEmitInst_r(Mips::DCLZ, &Mips::GPR64RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->hasMips64r6())) {
    return FastEmitInst_r(Mips::DCLZ_R6, &Mips::GPR64RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_CTLZ_MVT_v16i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_r(Mips::NLZC_B, &Mips::MSA128BRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_CTLZ_MVT_v8i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_r(Mips::NLZC_H, &Mips::MSA128HRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_CTLZ_MVT_v4i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_r(Mips::NLZC_W, &Mips::MSA128WRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_CTLZ_MVT_v2i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_r(Mips::NLZC_D, &Mips::MSA128DRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_CTLZ_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_CTLZ_MVT_i32_r(RetVT, Op0, Op0IsKill);
  case MVT::i64: return FastEmit_ISD_CTLZ_MVT_i64_r(RetVT, Op0, Op0IsKill);
  case MVT::v16i8: return FastEmit_ISD_CTLZ_MVT_v16i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v8i16: return FastEmit_ISD_CTLZ_MVT_v8i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i32: return FastEmit_ISD_CTLZ_MVT_v4i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2i64: return FastEmit_ISD_CTLZ_MVT_v2i64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::CTPOP.

unsigned FastEmit_ISD_CTPOP_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasCnMips())) {
    return FastEmitInst_r(Mips::POP, &Mips::GPR32RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_CTPOP_MVT_i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  if ((Subtarget->hasCnMips())) {
    return FastEmitInst_r(Mips::DPOP, &Mips::GPR64RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_CTPOP_MVT_v16i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_r(Mips::PCNT_B, &Mips::MSA128BRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_CTPOP_MVT_v8i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_r(Mips::PCNT_H, &Mips::MSA128HRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_CTPOP_MVT_v4i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_r(Mips::PCNT_W, &Mips::MSA128WRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_CTPOP_MVT_v2i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_r(Mips::PCNT_D, &Mips::MSA128DRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_CTPOP_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_CTPOP_MVT_i32_r(RetVT, Op0, Op0IsKill);
  case MVT::i64: return FastEmit_ISD_CTPOP_MVT_i64_r(RetVT, Op0, Op0IsKill);
  case MVT::v16i8: return FastEmit_ISD_CTPOP_MVT_v16i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v8i16: return FastEmit_ISD_CTPOP_MVT_v8i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i32: return FastEmit_ISD_CTPOP_MVT_v4i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2i64: return FastEmit_ISD_CTPOP_MVT_v2i64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FABS.

unsigned FastEmit_ISD_FABS_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((Subtarget->hasStandardEncoding())) {
    return FastEmitInst_r(Mips::FABS_S, &Mips::FGR32RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FABS_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (!Subtarget->isFP64bit())) {
    return FastEmitInst_r(Mips::FABS_D32, &Mips::AFGR64RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->isFP64bit())) {
    return FastEmitInst_r(Mips::FABS_D64, &Mips::FGR64RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FABS_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_r(Mips::FABS_W, &Mips::MSA128WRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FABS_MVT_v2f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_r(Mips::FABS_D, &Mips::MSA128DRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FABS_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FABS_MVT_f32_r(RetVT, Op0, Op0IsKill);
  case MVT::f64: return FastEmit_ISD_FABS_MVT_f64_r(RetVT, Op0, Op0IsKill);
  case MVT::v4f32: return FastEmit_ISD_FABS_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2f64: return FastEmit_ISD_FABS_MVT_v2f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FEXP2.

unsigned FastEmit_ISD_FEXP2_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_r(Mips::FEXP2_W_1_PSEUDO, &Mips::MSA128WRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FEXP2_MVT_v2f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_r(Mips::FEXP2_D_1_PSEUDO, &Mips::MSA128DRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FEXP2_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v4f32: return FastEmit_ISD_FEXP2_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2f64: return FastEmit_ISD_FEXP2_MVT_v2f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FLOG2.

unsigned FastEmit_ISD_FLOG2_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_r(Mips::FLOG2_W, &Mips::MSA128WRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FLOG2_MVT_v2f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_r(Mips::FLOG2_D, &Mips::MSA128DRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FLOG2_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v4f32: return FastEmit_ISD_FLOG2_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2f64: return FastEmit_ISD_FLOG2_MVT_v2f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FNEG.

unsigned FastEmit_ISD_FNEG_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((Subtarget->hasStandardEncoding())) {
    return FastEmitInst_r(Mips::FNEG_S, &Mips::FGR32RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FNEG_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (!Subtarget->isFP64bit())) {
    return FastEmitInst_r(Mips::FNEG_D32, &Mips::AFGR64RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->isFP64bit())) {
    return FastEmitInst_r(Mips::FNEG_D64, &Mips::FGR64RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FNEG_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FNEG_MVT_f32_r(RetVT, Op0, Op0IsKill);
  case MVT::f64: return FastEmit_ISD_FNEG_MVT_f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FP_EXTEND.

unsigned FastEmit_ISD_FP_EXTEND_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (!Subtarget->isFP64bit())) {
    return FastEmitInst_r(Mips::CVT_D32_S, &Mips::AFGR64RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->isFP64bit())) {
    return FastEmitInst_r(Mips::CVT_D64_S, &Mips::FGR64RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FP_EXTEND_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FP_EXTEND_MVT_f32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FP_ROUND.

unsigned FastEmit_ISD_FP_ROUND_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (!Subtarget->isFP64bit())) {
    return FastEmitInst_r(Mips::CVT_S_D32, &Mips::FGR32RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->isFP64bit())) {
    return FastEmitInst_r(Mips::CVT_S_D64, &Mips::FGR32RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FP_ROUND_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f64: return FastEmit_ISD_FP_ROUND_MVT_f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FP_TO_SINT.

unsigned FastEmit_ISD_FP_TO_SINT_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_r(Mips::FTRUNC_S_W, &Mips::MSA128WRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FP_TO_SINT_MVT_v2f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_r(Mips::FTRUNC_S_D, &Mips::MSA128DRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FP_TO_SINT_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v4f32: return FastEmit_ISD_FP_TO_SINT_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2f64: return FastEmit_ISD_FP_TO_SINT_MVT_v2f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FP_TO_UINT.

unsigned FastEmit_ISD_FP_TO_UINT_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_r(Mips::FTRUNC_U_W, &Mips::MSA128WRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FP_TO_UINT_MVT_v2f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_r(Mips::FTRUNC_U_D, &Mips::MSA128DRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FP_TO_UINT_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v4f32: return FastEmit_ISD_FP_TO_UINT_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2f64: return FastEmit_ISD_FP_TO_UINT_MVT_v2f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FRINT.

unsigned FastEmit_ISD_FRINT_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_r(Mips::FRINT_W, &Mips::MSA128WRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FRINT_MVT_v2f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_r(Mips::FRINT_D, &Mips::MSA128DRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FRINT_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v4f32: return FastEmit_ISD_FRINT_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2f64: return FastEmit_ISD_FRINT_MVT_v2f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FSQRT.

unsigned FastEmit_ISD_FSQRT_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->hasMips2())) {
    return FastEmitInst_r(Mips::FSQRT_S, &Mips::FGR32RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FSQRT_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->hasMips2()) && (!Subtarget->isFP64bit())) {
    return FastEmitInst_r(Mips::FSQRT_D32, &Mips::AFGR64RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->hasMips2()) && (Subtarget->isFP64bit())) {
    return FastEmitInst_r(Mips::FSQRT_D64, &Mips::FGR64RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FSQRT_MVT_v4f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_r(Mips::FSQRT_W, &Mips::MSA128WRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FSQRT_MVT_v2f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_r(Mips::FSQRT_D, &Mips::MSA128DRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FSQRT_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FSQRT_MVT_f32_r(RetVT, Op0, Op0IsKill);
  case MVT::f64: return FastEmit_ISD_FSQRT_MVT_f64_r(RetVT, Op0, Op0IsKill);
  case MVT::v4f32: return FastEmit_ISD_FSQRT_MVT_v4f32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2f64: return FastEmit_ISD_FSQRT_MVT_v2f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::SIGN_EXTEND.

unsigned FastEmit_ISD_SIGN_EXTEND_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  if ((Subtarget->hasStandardEncoding())) {
    return FastEmitInst_r(Mips::SLL64_32, &Mips::GPR64RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SIGN_EXTEND_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_SIGN_EXTEND_MVT_i32_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::SINT_TO_FP.

unsigned FastEmit_ISD_SINT_TO_FP_MVT_i32_MVT_f32_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasStandardEncoding())) {
    return FastEmitInst_r(Mips::PseudoCVT_S_W, &Mips::FGR32RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SINT_TO_FP_MVT_i32_MVT_f64_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasStandardEncoding()) && (!Subtarget->isFP64bit())) {
    return FastEmitInst_r(Mips::PseudoCVT_D32_W, &Mips::AFGR64RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->isFP64bit())) {
    return FastEmitInst_r(Mips::PseudoCVT_D64_W, &Mips::FGR64RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SINT_TO_FP_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
switch (RetVT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_SINT_TO_FP_MVT_i32_MVT_f32_r(Op0, Op0IsKill);
  case MVT::f64: return FastEmit_ISD_SINT_TO_FP_MVT_i32_MVT_f64_r(Op0, Op0IsKill);
  default: return 0;
}
}

unsigned FastEmit_ISD_SINT_TO_FP_MVT_i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->isFP64bit())) {
    return FastEmitInst_r(Mips::PseudoCVT_D64_L, &Mips::FGR64RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SINT_TO_FP_MVT_v4i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_r(Mips::FFINT_S_W, &Mips::MSA128WRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SINT_TO_FP_MVT_v2i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_r(Mips::FFINT_S_D, &Mips::MSA128DRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SINT_TO_FP_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_SINT_TO_FP_MVT_i32_r(RetVT, Op0, Op0IsKill);
  case MVT::i64: return FastEmit_ISD_SINT_TO_FP_MVT_i64_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i32: return FastEmit_ISD_SINT_TO_FP_MVT_v4i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2i64: return FastEmit_ISD_SINT_TO_FP_MVT_v2i64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::UINT_TO_FP.

unsigned FastEmit_ISD_UINT_TO_FP_MVT_v4i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_r(Mips::FFINT_U_W, &Mips::MSA128WRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_UINT_TO_FP_MVT_v2i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_r(Mips::FFINT_U_D, &Mips::MSA128DRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_UINT_TO_FP_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v4i32: return FastEmit_ISD_UINT_TO_FP_MVT_v4i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2i64: return FastEmit_ISD_UINT_TO_FP_MVT_v2i64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for MipsISD::JmpLink.

unsigned FastEmit_MipsISD_JmpLink_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (!Subtarget->inMicroMipsMode())) {
    return FastEmitInst_r(Mips::JALRPseudo, &Mips::GPR32RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->inMicroMipsMode())) {
    return FastEmitInst_r(Mips::JALR16_MM, &Mips::GPR32RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->inMips16Mode())) {
    return FastEmitInst_r(Mips::JumpLinkReg16, &Mips::CPU16RegsRegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_JmpLink_MVT_i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  if ((Subtarget->hasStandardEncoding())) {
    return FastEmitInst_r(Mips::JALR64Pseudo, &Mips::GPR64RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_JmpLink_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_MipsISD_JmpLink_MVT_i32_r(RetVT, Op0, Op0IsKill);
  case MVT::i64: return FastEmit_MipsISD_JmpLink_MVT_i64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for MipsISD::MFHI.

unsigned FastEmit_MipsISD_MFHI_MVT_Untyped_MVT_i32_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasDSP())) {
    return FastEmitInst_r(Mips::MFHI_DSP, &Mips::GPR32RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasStandardEncoding()) && (!Subtarget->hasMips32r6()) && (!Subtarget->hasMips64r6()) && (!Subtarget->hasDSP())) {
    return FastEmitInst_r(Mips::PseudoMFHI, &Mips::GPR32RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_MFHI_MVT_Untyped_MVT_i64_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->hasMips3()) && (!Subtarget->hasMips32r6()) && (!Subtarget->hasMips64r6())) {
    return FastEmitInst_r(Mips::PseudoMFHI64, &Mips::GPR64RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_MFHI_MVT_Untyped_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
switch (RetVT.SimpleTy) {
  case MVT::i32: return FastEmit_MipsISD_MFHI_MVT_Untyped_MVT_i32_r(Op0, Op0IsKill);
  case MVT::i64: return FastEmit_MipsISD_MFHI_MVT_Untyped_MVT_i64_r(Op0, Op0IsKill);
  default: return 0;
}
}

unsigned FastEmit_MipsISD_MFHI_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::Untyped: return FastEmit_MipsISD_MFHI_MVT_Untyped_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for MipsISD::MFLO.

unsigned FastEmit_MipsISD_MFLO_MVT_Untyped_MVT_i32_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasDSP())) {
    return FastEmitInst_r(Mips::MFLO_DSP, &Mips::GPR32RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasStandardEncoding()) && (!Subtarget->hasMips32r6()) && (!Subtarget->hasMips64r6()) && (!Subtarget->hasDSP())) {
    return FastEmitInst_r(Mips::PseudoMFLO, &Mips::GPR32RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_MFLO_MVT_Untyped_MVT_i64_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->hasMips3()) && (!Subtarget->hasMips32r6()) && (!Subtarget->hasMips64r6())) {
    return FastEmitInst_r(Mips::PseudoMFLO64, &Mips::GPR64RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_MFLO_MVT_Untyped_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
switch (RetVT.SimpleTy) {
  case MVT::i32: return FastEmit_MipsISD_MFLO_MVT_Untyped_MVT_i32_r(Op0, Op0IsKill);
  case MVT::i64: return FastEmit_MipsISD_MFLO_MVT_Untyped_MVT_i64_r(Op0, Op0IsKill);
  default: return 0;
}
}

unsigned FastEmit_MipsISD_MFLO_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::Untyped: return FastEmit_MipsISD_MFLO_MVT_Untyped_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for MipsISD::TailCall.

unsigned FastEmit_MipsISD_TailCall_MVT_i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  if ((Subtarget->hasStandardEncoding())) {
    return FastEmitInst_r(Mips::TAILCALL_R, &Mips::GPR32RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_TailCall_MVT_i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  if ((Subtarget->hasStandardEncoding())) {
    return FastEmitInst_r(Mips::TAILCALL64_R, &Mips::GPR64RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_TailCall_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_MipsISD_TailCall_MVT_i32_r(RetVT, Op0, Op0IsKill);
  case MVT::i64: return FastEmit_MipsISD_TailCall_MVT_i64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for MipsISD::TruncIntFP.

unsigned FastEmit_MipsISD_TruncIntFP_MVT_f32_MVT_f32_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasStandardEncoding())) {
    return FastEmitInst_r(Mips::TRUNC_W_S, &Mips::FGR32RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_TruncIntFP_MVT_f32_MVT_f64_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->isFP64bit())) {
    return FastEmitInst_r(Mips::TRUNC_L_S, &Mips::FGR64RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_TruncIntFP_MVT_f32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
switch (RetVT.SimpleTy) {
  case MVT::f32: return FastEmit_MipsISD_TruncIntFP_MVT_f32_MVT_f32_r(Op0, Op0IsKill);
  case MVT::f64: return FastEmit_MipsISD_TruncIntFP_MVT_f32_MVT_f64_r(Op0, Op0IsKill);
  default: return 0;
}
}

unsigned FastEmit_MipsISD_TruncIntFP_MVT_f64_MVT_f32_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasStandardEncoding()) && (!Subtarget->isFP64bit())) {
    return FastEmitInst_r(Mips::TRUNC_W_D32, &Mips::FGR32RegClass, Op0, Op0IsKill);
  }
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->isFP64bit())) {
    return FastEmitInst_r(Mips::TRUNC_W_D64, &Mips::FGR32RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_TruncIntFP_MVT_f64_MVT_f64_r(unsigned Op0, bool Op0IsKill) {
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->isFP64bit())) {
    return FastEmitInst_r(Mips::TRUNC_L_D64, &Mips::FGR64RegClass, Op0, Op0IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_TruncIntFP_MVT_f64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
switch (RetVT.SimpleTy) {
  case MVT::f32: return FastEmit_MipsISD_TruncIntFP_MVT_f64_MVT_f32_r(Op0, Op0IsKill);
  case MVT::f64: return FastEmit_MipsISD_TruncIntFP_MVT_f64_MVT_f64_r(Op0, Op0IsKill);
  default: return 0;
}
}

unsigned FastEmit_MipsISD_TruncIntFP_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_MipsISD_TruncIntFP_MVT_f32_r(RetVT, Op0, Op0IsKill);
  case MVT::f64: return FastEmit_MipsISD_TruncIntFP_MVT_f64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for MipsISD::VALL_NONZERO.

unsigned FastEmit_MipsISD_VALL_NONZERO_MVT_v16i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_r(Mips::SNZ_B_PSEUDO, &Mips::GPR32RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_MipsISD_VALL_NONZERO_MVT_v8i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_r(Mips::SNZ_H_PSEUDO, &Mips::GPR32RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_MipsISD_VALL_NONZERO_MVT_v4i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_r(Mips::SNZ_W_PSEUDO, &Mips::GPR32RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_MipsISD_VALL_NONZERO_MVT_v2i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_r(Mips::SNZ_D_PSEUDO, &Mips::GPR32RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_MipsISD_VALL_NONZERO_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v16i8: return FastEmit_MipsISD_VALL_NONZERO_MVT_v16i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v8i16: return FastEmit_MipsISD_VALL_NONZERO_MVT_v8i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i32: return FastEmit_MipsISD_VALL_NONZERO_MVT_v4i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2i64: return FastEmit_MipsISD_VALL_NONZERO_MVT_v2i64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for MipsISD::VALL_ZERO.

unsigned FastEmit_MipsISD_VALL_ZERO_MVT_v16i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_r(Mips::SZ_B_PSEUDO, &Mips::GPR32RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_MipsISD_VALL_ZERO_MVT_v8i16_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_r(Mips::SZ_H_PSEUDO, &Mips::GPR32RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_MipsISD_VALL_ZERO_MVT_v4i32_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_r(Mips::SZ_W_PSEUDO, &Mips::GPR32RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_MipsISD_VALL_ZERO_MVT_v2i64_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_r(Mips::SZ_D_PSEUDO, &Mips::GPR32RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_MipsISD_VALL_ZERO_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v16i8: return FastEmit_MipsISD_VALL_ZERO_MVT_v16i8_r(RetVT, Op0, Op0IsKill);
  case MVT::v8i16: return FastEmit_MipsISD_VALL_ZERO_MVT_v8i16_r(RetVT, Op0, Op0IsKill);
  case MVT::v4i32: return FastEmit_MipsISD_VALL_ZERO_MVT_v4i32_r(RetVT, Op0, Op0IsKill);
  case MVT::v2i64: return FastEmit_MipsISD_VALL_ZERO_MVT_v2i64_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for MipsISD::VANY_NONZERO.

unsigned FastEmit_MipsISD_VANY_NONZERO_MVT_v16i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_r(Mips::SNZ_V_PSEUDO, &Mips::GPR32RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_MipsISD_VANY_NONZERO_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v16i8: return FastEmit_MipsISD_VANY_NONZERO_MVT_v16i8_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for MipsISD::VANY_ZERO.

unsigned FastEmit_MipsISD_VANY_ZERO_MVT_v16i8_r(MVT RetVT, unsigned Op0, bool Op0IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  return FastEmitInst_r(Mips::SZ_V_PSEUDO, &Mips::GPR32RegClass, Op0, Op0IsKill);
}

unsigned FastEmit_MipsISD_VANY_ZERO_r(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v16i8: return FastEmit_MipsISD_VANY_ZERO_MVT_v16i8_r(RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_r(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill) {
  switch (Opcode) {
  case ISD::ANY_EXTEND: return FastEmit_ISD_ANY_EXTEND_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::BITCAST: return FastEmit_ISD_BITCAST_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::BRIND: return FastEmit_ISD_BRIND_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::CTLZ: return FastEmit_ISD_CTLZ_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::CTPOP: return FastEmit_ISD_CTPOP_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FABS: return FastEmit_ISD_FABS_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FEXP2: return FastEmit_ISD_FEXP2_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FLOG2: return FastEmit_ISD_FLOG2_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FNEG: return FastEmit_ISD_FNEG_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FP_EXTEND: return FastEmit_ISD_FP_EXTEND_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FP_ROUND: return FastEmit_ISD_FP_ROUND_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FP_TO_SINT: return FastEmit_ISD_FP_TO_SINT_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FP_TO_UINT: return FastEmit_ISD_FP_TO_UINT_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FRINT: return FastEmit_ISD_FRINT_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::FSQRT: return FastEmit_ISD_FSQRT_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::SIGN_EXTEND: return FastEmit_ISD_SIGN_EXTEND_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::SINT_TO_FP: return FastEmit_ISD_SINT_TO_FP_r(VT, RetVT, Op0, Op0IsKill);
  case ISD::UINT_TO_FP: return FastEmit_ISD_UINT_TO_FP_r(VT, RetVT, Op0, Op0IsKill);
  case MipsISD::JmpLink: return FastEmit_MipsISD_JmpLink_r(VT, RetVT, Op0, Op0IsKill);
  case MipsISD::MFHI: return FastEmit_MipsISD_MFHI_r(VT, RetVT, Op0, Op0IsKill);
  case MipsISD::MFLO: return FastEmit_MipsISD_MFLO_r(VT, RetVT, Op0, Op0IsKill);
  case MipsISD::TailCall: return FastEmit_MipsISD_TailCall_r(VT, RetVT, Op0, Op0IsKill);
  case MipsISD::TruncIntFP: return FastEmit_MipsISD_TruncIntFP_r(VT, RetVT, Op0, Op0IsKill);
  case MipsISD::VALL_NONZERO: return FastEmit_MipsISD_VALL_NONZERO_r(VT, RetVT, Op0, Op0IsKill);
  case MipsISD::VALL_ZERO: return FastEmit_MipsISD_VALL_ZERO_r(VT, RetVT, Op0, Op0IsKill);
  case MipsISD::VANY_NONZERO: return FastEmit_MipsISD_VANY_NONZERO_r(VT, RetVT, Op0, Op0IsKill);
  case MipsISD::VANY_ZERO: return FastEmit_MipsISD_VANY_ZERO_r(VT, RetVT, Op0, Op0IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::ADD.

unsigned FastEmit_ISD_ADD_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasStandardEncoding())) {
    return FastEmitInst_rr(Mips::ADDu, &Mips::GPR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->inMips16Mode())) {
    return FastEmitInst_rr(Mips::AdduRxRyRz16, &Mips::CPU16RegsRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_ADD_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->hasMips3())) {
    return FastEmitInst_rr(Mips::DADDu, &Mips::GPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_ADD_MVT_v4i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i8)
    return 0;
  if ((Subtarget->hasDSP())) {
    return FastEmitInst_rr(Mips::ADDU_QB, &Mips::DSPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_ADD_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::ADDV_B, &Mips::MSA128BRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_ADD_MVT_v2i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i16)
    return 0;
  if ((Subtarget->hasDSP())) {
    return FastEmitInst_rr(Mips::ADDQ_PH, &Mips::DSPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_ADD_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::ADDV_H, &Mips::MSA128HRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_ADD_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::ADDV_W, &Mips::MSA128WRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_ADD_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::ADDV_D, &Mips::MSA128DRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_ADD_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_ADD_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_ISD_ADD_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i8: return FastEmit_ISD_ADD_MVT_v4i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i8: return FastEmit_ISD_ADD_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i16: return FastEmit_ISD_ADD_MVT_v2i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_ISD_ADD_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ISD_ADD_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_ISD_ADD_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::ADDC.

unsigned FastEmit_ISD_ADDC_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasDSP())) {
    return FastEmitInst_rr(Mips::ADDSC, &Mips::GPR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasStandardEncoding()) && (!Subtarget->hasDSP())) {
    return FastEmitInst_rr(Mips::ADDu, &Mips::GPR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->inMips16Mode())) {
    return FastEmitInst_rr(Mips::AdduRxRyRz16, &Mips::CPU16RegsRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_ADDC_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_ADDC_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::ADDE.

unsigned FastEmit_ISD_ADDE_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasDSP())) {
    return FastEmitInst_rr(Mips::ADDWC, &Mips::GPR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_ADDE_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_ADDE_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::AND.

unsigned FastEmit_ISD_AND_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasStandardEncoding())) {
    return FastEmitInst_rr(Mips::AND, &Mips::GPR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->inMips16Mode())) {
    return FastEmitInst_rr(Mips::AndRxRxRy16, &Mips::CPU16RegsRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_AND_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  if ((Subtarget->hasStandardEncoding())) {
    return FastEmitInst_rr(Mips::AND64, &Mips::GPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_AND_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::AND_V, &Mips::MSA128BRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_AND_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::AND_V_H_PSEUDO, &Mips::MSA128HRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_AND_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::AND_V_W_PSEUDO, &Mips::MSA128WRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_AND_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::AND_V_D_PSEUDO, &Mips::MSA128DRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_AND_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_AND_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_ISD_AND_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i8: return FastEmit_ISD_AND_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_ISD_AND_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ISD_AND_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_ISD_AND_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FADD.

unsigned FastEmit_ISD_FADD_MVT_f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((Subtarget->hasStandardEncoding())) {
    return FastEmitInst_rr(Mips::FADD_S, &Mips::FGR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FADD_MVT_f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (!Subtarget->isFP64bit())) {
    return FastEmitInst_rr(Mips::FADD_D32, &Mips::AFGR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->isFP64bit())) {
    return FastEmitInst_rr(Mips::FADD_D64, &Mips::FGR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FADD_MVT_v4f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::FADD_W, &Mips::MSA128WRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FADD_MVT_v2f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::FADD_D, &Mips::MSA128DRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FADD_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FADD_MVT_f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::f64: return FastEmit_ISD_FADD_MVT_f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f32: return FastEmit_ISD_FADD_MVT_v4f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f64: return FastEmit_ISD_FADD_MVT_v2f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FDIV.

unsigned FastEmit_ISD_FDIV_MVT_f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((Subtarget->hasStandardEncoding())) {
    return FastEmitInst_rr(Mips::FDIV_S, &Mips::FGR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FDIV_MVT_f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (!Subtarget->isFP64bit())) {
    return FastEmitInst_rr(Mips::FDIV_D32, &Mips::AFGR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->isFP64bit())) {
    return FastEmitInst_rr(Mips::FDIV_D64, &Mips::FGR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FDIV_MVT_v4f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::FDIV_W, &Mips::MSA128WRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FDIV_MVT_v2f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::FDIV_D, &Mips::MSA128DRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FDIV_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FDIV_MVT_f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::f64: return FastEmit_ISD_FDIV_MVT_f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f32: return FastEmit_ISD_FDIV_MVT_v4f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f64: return FastEmit_ISD_FDIV_MVT_v2f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FMUL.

unsigned FastEmit_ISD_FMUL_MVT_f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((Subtarget->hasStandardEncoding())) {
    return FastEmitInst_rr(Mips::FMUL_S, &Mips::FGR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FMUL_MVT_f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (!Subtarget->isFP64bit())) {
    return FastEmitInst_rr(Mips::FMUL_D32, &Mips::AFGR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->isFP64bit())) {
    return FastEmitInst_rr(Mips::FMUL_D64, &Mips::FGR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FMUL_MVT_v4f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::FMUL_W, &Mips::MSA128WRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FMUL_MVT_v2f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::FMUL_D, &Mips::MSA128DRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FMUL_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FMUL_MVT_f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::f64: return FastEmit_ISD_FMUL_MVT_f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f32: return FastEmit_ISD_FMUL_MVT_v4f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f64: return FastEmit_ISD_FMUL_MVT_v2f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FSUB.

unsigned FastEmit_ISD_FSUB_MVT_f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((Subtarget->hasStandardEncoding())) {
    return FastEmitInst_rr(Mips::FSUB_S, &Mips::FGR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FSUB_MVT_f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (!Subtarget->isFP64bit())) {
    return FastEmitInst_rr(Mips::FSUB_D32, &Mips::AFGR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->isFP64bit())) {
    return FastEmitInst_rr(Mips::FSUB_D64, &Mips::FGR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FSUB_MVT_v4f32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::FSUB_W, &Mips::MSA128WRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FSUB_MVT_v2f64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::FSUB_D, &Mips::MSA128DRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FSUB_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_ISD_FSUB_MVT_f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::f64: return FastEmit_ISD_FSUB_MVT_f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4f32: return FastEmit_ISD_FSUB_MVT_v4f32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2f64: return FastEmit_ISD_FSUB_MVT_v2f64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::MUL.

unsigned FastEmit_ISD_MUL_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->hasMips32()) && (!Subtarget->hasMips32r6()) && (!Subtarget->hasMips64r6())) {
    return FastEmitInst_rr(Mips::MUL, &Mips::GPR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->hasMips32r6())) {
    return FastEmitInst_rr(Mips::MUL_R6, &Mips::GPR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->inMips16Mode())) {
    return FastEmitInst_rr(Mips::MultRxRyRz16, &Mips::CPU16RegsRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_MUL_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  if ((Subtarget->hasCnMips())) {
    return FastEmitInst_rr(Mips::DMUL, &Mips::GPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->hasMips64r6())) {
    return FastEmitInst_rr(Mips::DMUL_R6, &Mips::GPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_MUL_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::MULV_B, &Mips::MSA128BRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_MUL_MVT_v2i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i16)
    return 0;
  if ((Subtarget->hasDSPR2())) {
    return FastEmitInst_rr(Mips::MUL_PH, &Mips::DSPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_MUL_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::MULV_H, &Mips::MSA128HRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_MUL_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::MULV_W, &Mips::MSA128WRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_MUL_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::MULV_D, &Mips::MSA128DRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_MUL_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_MUL_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_ISD_MUL_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i8: return FastEmit_ISD_MUL_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i16: return FastEmit_ISD_MUL_MVT_v2i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_ISD_MUL_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ISD_MUL_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_ISD_MUL_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::MULHS.

unsigned FastEmit_ISD_MULHS_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->hasMips32r6())) {
    return FastEmitInst_rr(Mips::MUH, &Mips::GPR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_MULHS_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->hasMips64r6())) {
    return FastEmitInst_rr(Mips::DMUH, &Mips::GPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_MULHS_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_MULHS_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_ISD_MULHS_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::MULHU.

unsigned FastEmit_ISD_MULHU_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->hasMips32r6())) {
    return FastEmitInst_rr(Mips::MUHU, &Mips::GPR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_MULHU_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->hasMips64r6())) {
    return FastEmitInst_rr(Mips::DMUHU, &Mips::GPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_MULHU_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_MULHU_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_ISD_MULHU_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::OR.

unsigned FastEmit_ISD_OR_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasStandardEncoding())) {
    return FastEmitInst_rr(Mips::OR, &Mips::GPR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->inMips16Mode())) {
    return FastEmitInst_rr(Mips::OrRxRxRy16, &Mips::CPU16RegsRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_OR_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  if ((Subtarget->hasStandardEncoding())) {
    return FastEmitInst_rr(Mips::OR64, &Mips::GPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_OR_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::OR_V, &Mips::MSA128BRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_OR_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::OR_V_H_PSEUDO, &Mips::MSA128HRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_OR_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::OR_V_W_PSEUDO, &Mips::MSA128WRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_OR_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::OR_V_D_PSEUDO, &Mips::MSA128DRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_OR_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_OR_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_ISD_OR_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i8: return FastEmit_ISD_OR_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_ISD_OR_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ISD_OR_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_ISD_OR_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::ROTR.

unsigned FastEmit_ISD_ROTR_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->hasMips32r2())) {
    return FastEmitInst_rr(Mips::ROTRV, &Mips::GPR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_ROTR_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_ROTR_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::SDIV.

unsigned FastEmit_ISD_SDIV_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->hasMips32r6())) {
    return FastEmitInst_rr(Mips::DIV, &Mips::GPR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SDIV_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->hasMips64r6())) {
    return FastEmitInst_rr(Mips::DDIV, &Mips::GPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SDIV_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::DIV_S_B, &Mips::MSA128BRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SDIV_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::DIV_S_H, &Mips::MSA128HRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SDIV_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::DIV_S_W, &Mips::MSA128WRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SDIV_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::DIV_S_D, &Mips::MSA128DRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SDIV_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_SDIV_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_ISD_SDIV_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i8: return FastEmit_ISD_SDIV_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_ISD_SDIV_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ISD_SDIV_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_ISD_SDIV_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::SHL.

unsigned FastEmit_ISD_SHL_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasStandardEncoding())) {
    return FastEmitInst_rr(Mips::SLLV, &Mips::GPR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->inMips16Mode())) {
    return FastEmitInst_rr(Mips::SllvRxRy16, &Mips::CPU16RegsRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SHL_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::SLL_B, &Mips::MSA128BRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SHL_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::SLL_H, &Mips::MSA128HRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SHL_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::SLL_W, &Mips::MSA128WRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SHL_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::SLL_D, &Mips::MSA128DRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SHL_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_SHL_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i8: return FastEmit_ISD_SHL_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_ISD_SHL_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ISD_SHL_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_ISD_SHL_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::SRA.

unsigned FastEmit_ISD_SRA_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasStandardEncoding())) {
    return FastEmitInst_rr(Mips::SRAV, &Mips::GPR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->inMips16Mode())) {
    return FastEmitInst_rr(Mips::SravRxRy16, &Mips::CPU16RegsRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SRA_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::SRA_B, &Mips::MSA128BRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SRA_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::SRA_H, &Mips::MSA128HRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SRA_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::SRA_W, &Mips::MSA128WRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SRA_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::SRA_D, &Mips::MSA128DRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SRA_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_SRA_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i8: return FastEmit_ISD_SRA_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_ISD_SRA_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ISD_SRA_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_ISD_SRA_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::SREM.

unsigned FastEmit_ISD_SREM_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->hasMips32r6())) {
    return FastEmitInst_rr(Mips::MOD, &Mips::GPR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SREM_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->hasMips64r6())) {
    return FastEmitInst_rr(Mips::DMOD, &Mips::GPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SREM_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::MOD_S_B, &Mips::MSA128BRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SREM_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::MOD_S_H, &Mips::MSA128HRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SREM_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::MOD_S_W, &Mips::MSA128WRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SREM_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::MOD_S_D, &Mips::MSA128DRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SREM_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_SREM_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_ISD_SREM_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i8: return FastEmit_ISD_SREM_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_ISD_SREM_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ISD_SREM_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_ISD_SREM_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::SRL.

unsigned FastEmit_ISD_SRL_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasStandardEncoding())) {
    return FastEmitInst_rr(Mips::SRLV, &Mips::GPR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->inMips16Mode())) {
    return FastEmitInst_rr(Mips::SrlvRxRy16, &Mips::CPU16RegsRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SRL_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::SRL_B, &Mips::MSA128BRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SRL_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::SRL_H, &Mips::MSA128HRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SRL_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::SRL_W, &Mips::MSA128WRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SRL_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::SRL_D, &Mips::MSA128DRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SRL_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_SRL_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i8: return FastEmit_ISD_SRL_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_ISD_SRL_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ISD_SRL_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_ISD_SRL_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::SUB.

unsigned FastEmit_ISD_SUB_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasStandardEncoding())) {
    return FastEmitInst_rr(Mips::SUBu, &Mips::GPR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->inMips16Mode())) {
    return FastEmitInst_rr(Mips::SubuRxRyRz16, &Mips::CPU16RegsRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SUB_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->hasMips3())) {
    return FastEmitInst_rr(Mips::DSUBu, &Mips::GPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SUB_MVT_v4i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i8)
    return 0;
  if ((Subtarget->hasDSP())) {
    return FastEmitInst_rr(Mips::SUBU_QB, &Mips::DSPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SUB_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::SUBV_B, &Mips::MSA128BRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SUB_MVT_v2i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i16)
    return 0;
  if ((Subtarget->hasDSP())) {
    return FastEmitInst_rr(Mips::SUBQ_PH, &Mips::DSPRRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SUB_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::SUBV_H, &Mips::MSA128HRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SUB_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::SUBV_W, &Mips::MSA128WRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SUB_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::SUBV_D, &Mips::MSA128DRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SUB_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_SUB_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_ISD_SUB_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i8: return FastEmit_ISD_SUB_MVT_v4i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i8: return FastEmit_ISD_SUB_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i16: return FastEmit_ISD_SUB_MVT_v2i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_ISD_SUB_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ISD_SUB_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_ISD_SUB_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::SUBC.

unsigned FastEmit_ISD_SUBC_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasStandardEncoding())) {
    return FastEmitInst_rr(Mips::SUBu, &Mips::GPR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->inMips16Mode())) {
    return FastEmitInst_rr(Mips::SubuRxRyRz16, &Mips::CPU16RegsRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_SUBC_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_SUBC_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::UDIV.

unsigned FastEmit_ISD_UDIV_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->hasMips32r6())) {
    return FastEmitInst_rr(Mips::DIVU, &Mips::GPR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_UDIV_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->hasMips64r6())) {
    return FastEmitInst_rr(Mips::DDIVU, &Mips::GPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_UDIV_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::DIV_U_B, &Mips::MSA128BRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_UDIV_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::DIV_U_H, &Mips::MSA128HRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_UDIV_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::DIV_U_W, &Mips::MSA128WRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_UDIV_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::DIV_U_D, &Mips::MSA128DRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_UDIV_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_UDIV_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_ISD_UDIV_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i8: return FastEmit_ISD_UDIV_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_ISD_UDIV_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ISD_UDIV_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_ISD_UDIV_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::UREM.

unsigned FastEmit_ISD_UREM_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->hasMips32r6())) {
    return FastEmitInst_rr(Mips::MODU, &Mips::GPR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_UREM_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->hasMips64r6())) {
    return FastEmitInst_rr(Mips::DMODU, &Mips::GPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_UREM_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::MOD_U_B, &Mips::MSA128BRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_UREM_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::MOD_U_H, &Mips::MSA128HRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_UREM_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::MOD_U_W, &Mips::MSA128WRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_UREM_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::MOD_U_D, &Mips::MSA128DRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_UREM_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_UREM_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_ISD_UREM_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i8: return FastEmit_ISD_UREM_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_ISD_UREM_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ISD_UREM_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_ISD_UREM_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::XOR.

unsigned FastEmit_ISD_XOR_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasStandardEncoding())) {
    return FastEmitInst_rr(Mips::XOR, &Mips::GPR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->inMips16Mode())) {
    return FastEmitInst_rr(Mips::XorRxRxRy16, &Mips::CPU16RegsRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_XOR_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  if ((Subtarget->hasStandardEncoding())) {
    return FastEmitInst_rr(Mips::XOR64, &Mips::GPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_XOR_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::XOR_V, &Mips::MSA128BRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_XOR_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::XOR_V_H_PSEUDO, &Mips::MSA128HRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_XOR_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::XOR_V_W_PSEUDO, &Mips::MSA128WRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_XOR_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::XOR_V_D_PSEUDO, &Mips::MSA128DRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_XOR_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_XOR_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_ISD_XOR_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v16i8: return FastEmit_ISD_XOR_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_ISD_XOR_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_ISD_XOR_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_ISD_XOR_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for MipsISD::BuildPairF64.

unsigned FastEmit_MipsISD_BuildPairF64_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (!Subtarget->isFP64bit())) {
    return FastEmitInst_rr(Mips::BuildPairF64, &Mips::AFGR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->isFP64bit())) {
    return FastEmitInst_rr(Mips::BuildPairF64_64, &Mips::FGR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_BuildPairF64_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_MipsISD_BuildPairF64_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for MipsISD::DivRem.

unsigned FastEmit_MipsISD_DivRem_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::Untyped)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (!Subtarget->hasMips32r6()) && (!Subtarget->hasMips64r6())) {
    return FastEmitInst_rr(Mips::PseudoSDIV, &Mips::ACC64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_DivRem_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::Untyped)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->hasMips3()) && (!Subtarget->hasMips32r6()) && (!Subtarget->hasMips64r6())) {
    return FastEmitInst_rr(Mips::PseudoDSDIV, &Mips::ACC128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_DivRem_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_MipsISD_DivRem_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_MipsISD_DivRem_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for MipsISD::DivRem16.

unsigned FastEmit_MipsISD_DivRem16_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  if ((Subtarget->inMips16Mode())) {
    return FastEmitInst_rr(Mips::DivRxRy16, &Mips::CPU16RegsRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_DivRem16_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_MipsISD_DivRem16_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for MipsISD::DivRemU.

unsigned FastEmit_MipsISD_DivRemU_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::Untyped)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (!Subtarget->hasMips32r6()) && (!Subtarget->hasMips64r6())) {
    return FastEmitInst_rr(Mips::PseudoUDIV, &Mips::ACC64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_DivRemU_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::Untyped)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->hasMips3()) && (!Subtarget->hasMips32r6()) && (!Subtarget->hasMips64r6())) {
    return FastEmitInst_rr(Mips::PseudoDUDIV, &Mips::ACC128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_DivRemU_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_MipsISD_DivRemU_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_MipsISD_DivRemU_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for MipsISD::DivRemU16.

unsigned FastEmit_MipsISD_DivRemU16_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  if ((Subtarget->inMips16Mode())) {
    return FastEmitInst_rr(Mips::DivuRxRy16, &Mips::CPU16RegsRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_DivRemU16_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_MipsISD_DivRemU16_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for MipsISD::EH_RETURN.

unsigned FastEmit_MipsISD_EH_RETURN_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  return FastEmitInst_rr(Mips::MIPSeh_return32, &Mips::GPR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_MipsISD_EH_RETURN_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  return FastEmitInst_rr(Mips::MIPSeh_return64, &Mips::GPR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
}

unsigned FastEmit_MipsISD_EH_RETURN_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_MipsISD_EH_RETURN_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_MipsISD_EH_RETURN_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for MipsISD::ILVEV.

unsigned FastEmit_MipsISD_ILVEV_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::ILVEV_B, &Mips::MSA128BRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_ILVEV_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::ILVEV_H, &Mips::MSA128HRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_ILVEV_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::ILVEV_W, &Mips::MSA128WRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_ILVEV_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::ILVEV_D, &Mips::MSA128DRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_ILVEV_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v16i8: return FastEmit_MipsISD_ILVEV_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_MipsISD_ILVEV_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_MipsISD_ILVEV_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_MipsISD_ILVEV_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for MipsISD::ILVL.

unsigned FastEmit_MipsISD_ILVL_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::ILVL_B, &Mips::MSA128BRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_ILVL_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::ILVL_H, &Mips::MSA128HRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_ILVL_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::ILVL_W, &Mips::MSA128WRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_ILVL_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::ILVL_D, &Mips::MSA128DRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_ILVL_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v16i8: return FastEmit_MipsISD_ILVL_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_MipsISD_ILVL_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_MipsISD_ILVL_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_MipsISD_ILVL_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for MipsISD::ILVOD.

unsigned FastEmit_MipsISD_ILVOD_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::ILVOD_B, &Mips::MSA128BRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_ILVOD_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::ILVOD_H, &Mips::MSA128HRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_ILVOD_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::ILVOD_W, &Mips::MSA128WRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_ILVOD_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::ILVOD_D, &Mips::MSA128DRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_ILVOD_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v16i8: return FastEmit_MipsISD_ILVOD_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_MipsISD_ILVOD_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_MipsISD_ILVOD_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_MipsISD_ILVOD_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for MipsISD::ILVR.

unsigned FastEmit_MipsISD_ILVR_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::ILVR_B, &Mips::MSA128BRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_ILVR_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::ILVR_H, &Mips::MSA128HRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_ILVR_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::ILVR_W, &Mips::MSA128WRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_ILVR_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::ILVR_D, &Mips::MSA128DRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_ILVR_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v16i8: return FastEmit_MipsISD_ILVR_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_MipsISD_ILVR_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_MipsISD_ILVR_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_MipsISD_ILVR_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for MipsISD::MTLOHI.

unsigned FastEmit_MipsISD_MTLOHI_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::Untyped)
    return 0;
  if ((Subtarget->hasStandardEncoding())) {
    return FastEmitInst_rr(Mips::PseudoMTLOHI_DSP, &Mips::ACC64DSPRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasStandardEncoding()) && (!Subtarget->hasMips32r6()) && (!Subtarget->hasMips64r6()) && (!Subtarget->hasDSP())) {
    return FastEmitInst_rr(Mips::PseudoMTLOHI, &Mips::ACC64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_MTLOHI_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::Untyped)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->hasMips3()) && (!Subtarget->hasMips32r6()) && (!Subtarget->hasMips64r6())) {
    return FastEmitInst_rr(Mips::PseudoMTLOHI64, &Mips::ACC128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_MTLOHI_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_MipsISD_MTLOHI_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_MipsISD_MTLOHI_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for MipsISD::Mult.

unsigned FastEmit_MipsISD_Mult_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::Untyped)
    return 0;
  if ((Subtarget->hasDSP())) {
    return FastEmitInst_rr(Mips::MULT_DSP, &Mips::ACC64DSPRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasStandardEncoding()) && (!Subtarget->hasMips32r6()) && (!Subtarget->hasMips64r6()) && (!Subtarget->hasDSP())) {
    return FastEmitInst_rr(Mips::PseudoMULT, &Mips::ACC64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_Mult_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::Untyped)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->hasMips3()) && (!Subtarget->hasMips32r6()) && (!Subtarget->hasMips64r6())) {
    return FastEmitInst_rr(Mips::PseudoDMULT, &Mips::ACC128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_Mult_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_MipsISD_Mult_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_MipsISD_Mult_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for MipsISD::Multu.

unsigned FastEmit_MipsISD_Multu_MVT_i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::Untyped)
    return 0;
  if ((Subtarget->hasDSP())) {
    return FastEmitInst_rr(Mips::MULTU_DSP, &Mips::ACC64DSPRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  if ((Subtarget->hasStandardEncoding()) && (!Subtarget->hasMips32r6()) && (!Subtarget->hasMips64r6()) && (!Subtarget->hasDSP())) {
    return FastEmitInst_rr(Mips::PseudoMULTu, &Mips::ACC64RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_Multu_MVT_i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::Untyped)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->hasMips3()) && (!Subtarget->hasMips32r6()) && (!Subtarget->hasMips64r6())) {
    return FastEmitInst_rr(Mips::PseudoDMULTu, &Mips::ACC128RegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_Multu_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_MipsISD_Multu_MVT_i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::i64: return FastEmit_MipsISD_Multu_MVT_i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for MipsISD::PCKEV.

unsigned FastEmit_MipsISD_PCKEV_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::PCKEV_B, &Mips::MSA128BRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_PCKEV_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::PCKEV_H, &Mips::MSA128HRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_PCKEV_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::PCKEV_W, &Mips::MSA128WRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_PCKEV_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::PCKEV_D, &Mips::MSA128DRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_PCKEV_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v16i8: return FastEmit_MipsISD_PCKEV_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_MipsISD_PCKEV_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_MipsISD_PCKEV_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_MipsISD_PCKEV_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for MipsISD::PCKOD.

unsigned FastEmit_MipsISD_PCKOD_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::PCKOD_B, &Mips::MSA128BRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_PCKOD_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::PCKOD_H, &Mips::MSA128HRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_PCKOD_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::PCKOD_W, &Mips::MSA128WRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_PCKOD_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::PCKOD_D, &Mips::MSA128DRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_PCKOD_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v16i8: return FastEmit_MipsISD_PCKOD_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_MipsISD_PCKOD_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_MipsISD_PCKOD_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_MipsISD_PCKOD_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for MipsISD::VNOR.

unsigned FastEmit_MipsISD_VNOR_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::NOR_V, &Mips::MSA128BRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_VNOR_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::NOR_V_H_PSEUDO, &Mips::MSA128HRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_VNOR_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::NOR_V_W_PSEUDO, &Mips::MSA128WRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_VNOR_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::NOR_V_D_PSEUDO, &Mips::MSA128DRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_VNOR_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v16i8: return FastEmit_MipsISD_VNOR_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_MipsISD_VNOR_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_MipsISD_VNOR_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_MipsISD_VNOR_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for MipsISD::VSMAX.

unsigned FastEmit_MipsISD_VSMAX_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::MAX_S_B, &Mips::MSA128BRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_VSMAX_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::MAX_S_H, &Mips::MSA128HRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_VSMAX_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::MAX_S_W, &Mips::MSA128WRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_VSMAX_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::MAX_S_D, &Mips::MSA128DRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_VSMAX_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v16i8: return FastEmit_MipsISD_VSMAX_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_MipsISD_VSMAX_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_MipsISD_VSMAX_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_MipsISD_VSMAX_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for MipsISD::VSMIN.

unsigned FastEmit_MipsISD_VSMIN_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::MIN_S_B, &Mips::MSA128BRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_VSMIN_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::MIN_S_H, &Mips::MSA128HRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_VSMIN_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::MIN_S_W, &Mips::MSA128WRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_VSMIN_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::MIN_S_D, &Mips::MSA128DRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_VSMIN_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v16i8: return FastEmit_MipsISD_VSMIN_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_MipsISD_VSMIN_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_MipsISD_VSMIN_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_MipsISD_VSMIN_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for MipsISD::VUMAX.

unsigned FastEmit_MipsISD_VUMAX_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::MAX_U_B, &Mips::MSA128BRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_VUMAX_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::MAX_U_H, &Mips::MSA128HRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_VUMAX_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::MAX_U_W, &Mips::MSA128WRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_VUMAX_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::MAX_U_D, &Mips::MSA128DRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_VUMAX_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v16i8: return FastEmit_MipsISD_VUMAX_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_MipsISD_VUMAX_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_MipsISD_VUMAX_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_MipsISD_VUMAX_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for MipsISD::VUMIN.

unsigned FastEmit_MipsISD_VUMIN_MVT_v16i8_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::MIN_U_B, &Mips::MSA128BRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_VUMIN_MVT_v8i16_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::MIN_U_H, &Mips::MSA128HRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_VUMIN_MVT_v4i32_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::MIN_U_W, &Mips::MSA128WRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_VUMIN_MVT_v2i64_rr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rr(Mips::MIN_U_D, &Mips::MSA128DRegClass, Op0, Op0IsKill, Op1, Op1IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_VUMIN_rr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v16i8: return FastEmit_MipsISD_VUMIN_MVT_v16i8_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v8i16: return FastEmit_MipsISD_VUMIN_MVT_v8i16_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v4i32: return FastEmit_MipsISD_VUMIN_MVT_v4i32_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MVT::v2i64: return FastEmit_MipsISD_VUMIN_MVT_v2i64_rr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_rr(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill) {
  switch (Opcode) {
  case ISD::ADD: return FastEmit_ISD_ADD_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::ADDC: return FastEmit_ISD_ADDC_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::ADDE: return FastEmit_ISD_ADDE_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::AND: return FastEmit_ISD_AND_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::FADD: return FastEmit_ISD_FADD_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::FDIV: return FastEmit_ISD_FDIV_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::FMUL: return FastEmit_ISD_FMUL_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::FSUB: return FastEmit_ISD_FSUB_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::MUL: return FastEmit_ISD_MUL_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::MULHS: return FastEmit_ISD_MULHS_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::MULHU: return FastEmit_ISD_MULHU_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::OR: return FastEmit_ISD_OR_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::ROTR: return FastEmit_ISD_ROTR_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::SDIV: return FastEmit_ISD_SDIV_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::SHL: return FastEmit_ISD_SHL_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::SRA: return FastEmit_ISD_SRA_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::SREM: return FastEmit_ISD_SREM_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::SRL: return FastEmit_ISD_SRL_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::SUB: return FastEmit_ISD_SUB_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::SUBC: return FastEmit_ISD_SUBC_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::UDIV: return FastEmit_ISD_UDIV_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::UREM: return FastEmit_ISD_UREM_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case ISD::XOR: return FastEmit_ISD_XOR_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MipsISD::BuildPairF64: return FastEmit_MipsISD_BuildPairF64_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MipsISD::DivRem: return FastEmit_MipsISD_DivRem_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MipsISD::DivRem16: return FastEmit_MipsISD_DivRem16_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MipsISD::DivRemU: return FastEmit_MipsISD_DivRemU_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MipsISD::DivRemU16: return FastEmit_MipsISD_DivRemU16_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MipsISD::EH_RETURN: return FastEmit_MipsISD_EH_RETURN_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MipsISD::ILVEV: return FastEmit_MipsISD_ILVEV_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MipsISD::ILVL: return FastEmit_MipsISD_ILVL_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MipsISD::ILVOD: return FastEmit_MipsISD_ILVOD_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MipsISD::ILVR: return FastEmit_MipsISD_ILVR_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MipsISD::MTLOHI: return FastEmit_MipsISD_MTLOHI_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MipsISD::Mult: return FastEmit_MipsISD_Mult_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MipsISD::Multu: return FastEmit_MipsISD_Multu_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MipsISD::PCKEV: return FastEmit_MipsISD_PCKEV_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MipsISD::PCKOD: return FastEmit_MipsISD_PCKOD_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MipsISD::VNOR: return FastEmit_MipsISD_VNOR_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MipsISD::VSMAX: return FastEmit_MipsISD_VSMAX_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MipsISD::VSMIN: return FastEmit_MipsISD_VSMIN_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MipsISD::VUMAX: return FastEmit_MipsISD_VUMAX_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  case MipsISD::VUMIN: return FastEmit_MipsISD_VUMIN_rr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::FMA.

unsigned FastEmit_ISD_FMA_MVT_v4f32_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::v4f32)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rrr(Mips::FMADD_W, &Mips::MSA128WRegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FMA_MVT_v2f64_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::v2f64)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rrr(Mips::FMADD_D, &Mips::MSA128DRegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  }
  return 0;
}

unsigned FastEmit_ISD_FMA_rrr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v4f32: return FastEmit_ISD_FMA_MVT_v4f32_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case MVT::v2f64: return FastEmit_ISD_FMA_MVT_v2f64_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  default: return 0;
  }
}

// FastEmit functions for MipsISD::VSHF.

unsigned FastEmit_MipsISD_VSHF_MVT_v16i8_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::v16i8)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rrr(Mips::VSHF_B, &Mips::MSA128BRegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_VSHF_MVT_v8i16_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::v8i16)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rrr(Mips::VSHF_H, &Mips::MSA128HRegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_VSHF_MVT_v4i32_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::v4i32)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rrr(Mips::VSHF_W, &Mips::MSA128WRegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_VSHF_MVT_v2i64_rrr(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  if (RetVT.SimpleTy != MVT::v2i64)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_rrr(Mips::VSHF_D, &Mips::MSA128DRegClass, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_VSHF_rrr(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  switch (VT.SimpleTy) {
  case MVT::v16i8: return FastEmit_MipsISD_VSHF_MVT_v16i8_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case MVT::v8i16: return FastEmit_MipsISD_VSHF_MVT_v8i16_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case MVT::v4i32: return FastEmit_MipsISD_VSHF_MVT_v4i32_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case MVT::v2i64: return FastEmit_MipsISD_VSHF_MVT_v2i64_rrr(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_rrr(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, unsigned Op2, bool Op2IsKill) {
  switch (Opcode) {
  case ISD::FMA: return FastEmit_ISD_FMA_rrr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  case MipsISD::VSHF: return FastEmit_MipsISD_VSHF_rrr(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill, Op2, Op2IsKill);
  default: return 0;
  }
}

// FastEmit functions for MipsISD::FPCmp.

unsigned FastEmit_MipsISD_FPCmp_MVT_f32_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (!Subtarget->hasMips32r6()) && (!Subtarget->hasMips64r6())) {
    return FastEmitInst_rri(Mips::FCMP_S32, &Mips::FGR32RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_MipsISD_FPCmp_MVT_f64_rri(MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::isVoid)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (!Subtarget->hasMips32r6()) && (!Subtarget->hasMips64r6()) && (!Subtarget->isFP64bit())) {
    return FastEmitInst_rri(Mips::FCMP_D32, &Mips::AFGR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  if ((Subtarget->hasStandardEncoding()) && (!Subtarget->hasMips32r6()) && (!Subtarget->hasMips64r6()) && (Subtarget->isFP64bit())) {
    return FastEmitInst_rri(Mips::FCMP_D64, &Mips::FGR64RegClass, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  }
  return 0;
}

unsigned FastEmit_MipsISD_FPCmp_rri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  switch (VT.SimpleTy) {
  case MVT::f32: return FastEmit_MipsISD_FPCmp_MVT_f32_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  case MVT::f64: return FastEmit_MipsISD_FPCmp_MVT_f64_rri(RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_rri(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, unsigned Op1, bool Op1IsKill, uint64_t imm2) {
  switch (Opcode) {
  case MipsISD::FPCmp: return FastEmit_MipsISD_FPCmp_rri(VT, RetVT, Op0, Op0IsKill, Op1, Op1IsKill, imm2);
  default: return 0;
  }
}

// FastEmit functions for MipsISD::ExtractElementF64.

unsigned FastEmit_MipsISD_ExtractElementF64_MVT_f64_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (!Subtarget->isFP64bit())) {
    return FastEmitInst_ri(Mips::ExtractElementF64, &Mips::GPR32RegClass, Op0, Op0IsKill, imm1);
  }
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->isFP64bit())) {
    return FastEmitInst_ri(Mips::ExtractElementF64_64, &Mips::GPR32RegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_MipsISD_ExtractElementF64_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::f64: return FastEmit_MipsISD_ExtractElementF64_MVT_f64_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for MipsISD::SHLL_DSP.

unsigned FastEmit_MipsISD_SHLL_DSP_MVT_v4i8_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4i8)
    return 0;
  if ((Subtarget->hasDSP())) {
    return FastEmitInst_ri(Mips::SHLL_QB, &Mips::DSPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_MipsISD_SHLL_DSP_MVT_v2i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v2i16)
    return 0;
  if ((Subtarget->hasDSP())) {
    return FastEmitInst_ri(Mips::SHLL_PH, &Mips::DSPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_MipsISD_SHLL_DSP_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v4i8: return FastEmit_MipsISD_SHLL_DSP_MVT_v4i8_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v2i16: return FastEmit_MipsISD_SHLL_DSP_MVT_v2i16_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for MipsISD::SHRA_DSP.

unsigned FastEmit_MipsISD_SHRA_DSP_MVT_v4i8_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4i8)
    return 0;
  if ((Subtarget->hasDSPR2())) {
    return FastEmitInst_ri(Mips::SHRA_QB, &Mips::DSPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_MipsISD_SHRA_DSP_MVT_v2i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v2i16)
    return 0;
  if ((Subtarget->hasDSP())) {
    return FastEmitInst_ri(Mips::SHRA_PH, &Mips::DSPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_MipsISD_SHRA_DSP_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v4i8: return FastEmit_MipsISD_SHRA_DSP_MVT_v4i8_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v2i16: return FastEmit_MipsISD_SHRA_DSP_MVT_v2i16_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for MipsISD::SHRL_DSP.

unsigned FastEmit_MipsISD_SHRL_DSP_MVT_v4i8_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v4i8)
    return 0;
  if ((Subtarget->hasDSP())) {
    return FastEmitInst_ri(Mips::SHRL_QB, &Mips::DSPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_MipsISD_SHRL_DSP_MVT_v2i16_ri(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::v2i16)
    return 0;
  if ((Subtarget->hasDSPR2())) {
    return FastEmitInst_ri(Mips::SHRL_PH, &Mips::DSPRRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_MipsISD_SHRL_DSP_ri(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v4i8: return FastEmit_MipsISD_SHRL_DSP_MVT_v4i8_ri(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v2i16: return FastEmit_MipsISD_SHRL_DSP_MVT_v2i16_ri(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_ri(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (VT == MVT::i32 && Predicate_immZExt5(imm1))
    if (unsigned Reg = FastEmit_ri_Predicate_immZExt5(VT, RetVT, Opcode, Op0, Op0IsKill, imm1))
      return Reg;

  if (VT == MVT::i32 && Predicate_immZExt6(imm1))
    if (unsigned Reg = FastEmit_ri_Predicate_immZExt6(VT, RetVT, Opcode, Op0, Op0IsKill, imm1))
      return Reg;

  if (VT == MVT::i32 && Predicate_immZExt4(imm1))
    if (unsigned Reg = FastEmit_ri_Predicate_immZExt4(VT, RetVT, Opcode, Op0, Op0IsKill, imm1))
      return Reg;

  switch (Opcode) {
  case MipsISD::ExtractElementF64: return FastEmit_MipsISD_ExtractElementF64_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case MipsISD::SHLL_DSP: return FastEmit_MipsISD_SHLL_DSP_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case MipsISD::SHRA_DSP: return FastEmit_MipsISD_SHRA_DSP_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  case MipsISD::SHRL_DSP: return FastEmit_MipsISD_SHRL_DSP_ri(VT, RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for MipsISD::Ext.

unsigned FastEmit_MipsISD_Ext_MVT_i32_rii(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->hasMips32r2())) {
    return FastEmitInst_rii(Mips::EXT, &Mips::GPR32RegClass, Op0, Op0IsKill, imm1, imm2);
  }
  return 0;
}

unsigned FastEmit_MipsISD_Ext_MVT_i64_rii(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1, uint64_t imm2) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->hasMips32r2())) {
    return FastEmitInst_rii(Mips::DEXT, &Mips::GPR64RegClass, Op0, Op0IsKill, imm1, imm2);
  }
  return 0;
}

unsigned FastEmit_MipsISD_Ext_rii(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1, uint64_t imm2) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_MipsISD_Ext_MVT_i32_rii(RetVT, Op0, Op0IsKill, imm1, imm2);
  case MVT::i64: return FastEmit_MipsISD_Ext_MVT_i64_rii(RetVT, Op0, Op0IsKill, imm1, imm2);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_rii(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, uint64_t imm1, uint64_t imm2) {
  switch (Opcode) {
  case MipsISD::Ext: return FastEmit_MipsISD_Ext_rii(VT, RetVT, Op0, Op0IsKill, imm1, imm2);
  default: return 0;
  }
}

// FastEmit functions for MipsISD::Ins.

unsigned FastEmit_MipsISD_Ins_MVT_i32_riir(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1, uint64_t imm2, unsigned Op3, bool Op3IsKill) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->hasMips32r2())) {
    return FastEmitInst_riir(Mips::INS, &Mips::GPR32RegClass, Op0, Op0IsKill, imm1, imm2, Op3, Op3IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_Ins_MVT_i64_riir(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1, uint64_t imm2, unsigned Op3, bool Op3IsKill) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->hasMips32r2())) {
    return FastEmitInst_riir(Mips::DINS, &Mips::GPR64RegClass, Op0, Op0IsKill, imm1, imm2, Op3, Op3IsKill);
  }
  return 0;
}

unsigned FastEmit_MipsISD_Ins_riir(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1, uint64_t imm2, unsigned Op3, bool Op3IsKill) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_MipsISD_Ins_MVT_i32_riir(RetVT, Op0, Op0IsKill, imm1, imm2, Op3, Op3IsKill);
  case MVT::i64: return FastEmit_MipsISD_Ins_MVT_i64_riir(RetVT, Op0, Op0IsKill, imm1, imm2, Op3, Op3IsKill);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_riir(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, uint64_t imm1, uint64_t imm2, unsigned Op3, bool Op3IsKill) {
  switch (Opcode) {
  case MipsISD::Ins: return FastEmit_MipsISD_Ins_riir(VT, RetVT, Op0, Op0IsKill, imm1, imm2, Op3, Op3IsKill);
  default: return 0;
  }
}

// FastEmit functions for ISD::ROTR.

unsigned FastEmit_ISD_ROTR_MVT_i32_ri_Predicate_immZExt5(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->hasMips32r2())) {
    return FastEmitInst_ri(Mips::ROTR, &Mips::GPR32RegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ISD_ROTR_ri_Predicate_immZExt5(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_ROTR_MVT_i32_ri_Predicate_immZExt5(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::SHL.

unsigned FastEmit_ISD_SHL_MVT_i32_ri_Predicate_immZExt5(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasStandardEncoding())) {
    return FastEmitInst_ri(Mips::SLL, &Mips::GPR32RegClass, Op0, Op0IsKill, imm1);
  }
  if ((Subtarget->inMips16Mode())) {
    return FastEmitInst_ri(Mips::SllX16, &Mips::CPU16RegsRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ISD_SHL_ri_Predicate_immZExt5(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_SHL_MVT_i32_ri_Predicate_immZExt5(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::SRA.

unsigned FastEmit_ISD_SRA_MVT_i32_ri_Predicate_immZExt5(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasStandardEncoding())) {
    return FastEmitInst_ri(Mips::SRA, &Mips::GPR32RegClass, Op0, Op0IsKill, imm1);
  }
  if ((Subtarget->inMips16Mode())) {
    return FastEmitInst_ri(Mips::SraX16, &Mips::CPU16RegsRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ISD_SRA_ri_Predicate_immZExt5(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_SRA_MVT_i32_ri_Predicate_immZExt5(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::SRL.

unsigned FastEmit_ISD_SRL_MVT_i32_ri_Predicate_immZExt5(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasStandardEncoding())) {
    return FastEmitInst_ri(Mips::SRL, &Mips::GPR32RegClass, Op0, Op0IsKill, imm1);
  }
  if ((Subtarget->inMips16Mode())) {
    return FastEmitInst_ri(Mips::SrlX16, &Mips::CPU16RegsRegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ISD_SRL_ri_Predicate_immZExt5(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_SRL_MVT_i32_ri_Predicate_immZExt5(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_ri_Predicate_immZExt5(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (Opcode) {
  case ISD::ROTR: return FastEmit_ISD_ROTR_ri_Predicate_immZExt5(VT, RetVT, Op0, Op0IsKill, imm1);
  case ISD::SHL: return FastEmit_ISD_SHL_ri_Predicate_immZExt5(VT, RetVT, Op0, Op0IsKill, imm1);
  case ISD::SRA: return FastEmit_ISD_SRA_ri_Predicate_immZExt5(VT, RetVT, Op0, Op0IsKill, imm1);
  case ISD::SRL: return FastEmit_ISD_SRL_ri_Predicate_immZExt5(VT, RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::ROTR.

unsigned FastEmit_ISD_ROTR_MVT_i64_ri_Predicate_immZExt6(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->hasMips64r2())) {
    return FastEmitInst_ri(Mips::DROTR, &Mips::GPR64RegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ISD_ROTR_ri_Predicate_immZExt6(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i64: return FastEmit_ISD_ROTR_MVT_i64_ri_Predicate_immZExt6(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::SHL.

unsigned FastEmit_ISD_SHL_MVT_i64_ri_Predicate_immZExt6(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->hasMips3())) {
    return FastEmitInst_ri(Mips::DSLL, &Mips::GPR64RegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ISD_SHL_ri_Predicate_immZExt6(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i64: return FastEmit_ISD_SHL_MVT_i64_ri_Predicate_immZExt6(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::SRA.

unsigned FastEmit_ISD_SRA_MVT_i64_ri_Predicate_immZExt6(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->hasMips3())) {
    return FastEmitInst_ri(Mips::DSRA, &Mips::GPR64RegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ISD_SRA_ri_Predicate_immZExt6(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i64: return FastEmit_ISD_SRA_MVT_i64_ri_Predicate_immZExt6(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::SRL.

unsigned FastEmit_ISD_SRL_MVT_i64_ri_Predicate_immZExt6(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i64)
    return 0;
  if ((Subtarget->hasStandardEncoding()) && (Subtarget->hasMips3())) {
    return FastEmitInst_ri(Mips::DSRL, &Mips::GPR64RegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ISD_SRL_ri_Predicate_immZExt6(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::i64: return FastEmit_ISD_SRL_MVT_i64_ri_Predicate_immZExt6(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_ri_Predicate_immZExt6(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (Opcode) {
  case ISD::ROTR: return FastEmit_ISD_ROTR_ri_Predicate_immZExt6(VT, RetVT, Op0, Op0IsKill, imm1);
  case ISD::SHL: return FastEmit_ISD_SHL_ri_Predicate_immZExt6(VT, RetVT, Op0, Op0IsKill, imm1);
  case ISD::SRA: return FastEmit_ISD_SRA_ri_Predicate_immZExt6(VT, RetVT, Op0, Op0IsKill, imm1);
  case ISD::SRL: return FastEmit_ISD_SRL_ri_Predicate_immZExt6(VT, RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::EXTRACT_VECTOR_ELT.

unsigned FastEmit_ISD_EXTRACT_VECTOR_ELT_MVT_v4i32_ri_Predicate_immZExt4(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_ri(Mips::COPY_S_W, &Mips::GPR32RegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ISD_EXTRACT_VECTOR_ELT_MVT_v4f32_ri_Predicate_immZExt4(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::f32)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_ri(Mips::COPY_FW_PSEUDO, &Mips::FGR32RegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ISD_EXTRACT_VECTOR_ELT_MVT_v2f64_ri_Predicate_immZExt4(MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  if (RetVT.SimpleTy != MVT::f64)
    return 0;
  if ((Subtarget->hasMSA())) {
    return FastEmitInst_ri(Mips::COPY_FD_PSEUDO, &Mips::FGR64RegClass, Op0, Op0IsKill, imm1);
  }
  return 0;
}

unsigned FastEmit_ISD_EXTRACT_VECTOR_ELT_ri_Predicate_immZExt4(MVT VT, MVT RetVT, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (VT.SimpleTy) {
  case MVT::v4i32: return FastEmit_ISD_EXTRACT_VECTOR_ELT_MVT_v4i32_ri_Predicate_immZExt4(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v4f32: return FastEmit_ISD_EXTRACT_VECTOR_ELT_MVT_v4f32_ri_Predicate_immZExt4(RetVT, Op0, Op0IsKill, imm1);
  case MVT::v2f64: return FastEmit_ISD_EXTRACT_VECTOR_ELT_MVT_v2f64_ri_Predicate_immZExt4(RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_ri_Predicate_immZExt4(MVT VT, MVT RetVT, unsigned Opcode, unsigned Op0, bool Op0IsKill, uint64_t imm1) {
  switch (Opcode) {
  case ISD::EXTRACT_VECTOR_ELT: return FastEmit_ISD_EXTRACT_VECTOR_ELT_ri_Predicate_immZExt4(VT, RetVT, Op0, Op0IsKill, imm1);
  default: return 0;
  }
}

// FastEmit functions for ISD::Constant.

unsigned FastEmit_ISD_Constant_MVT_i32_i(MVT RetVT, uint64_t imm0) {
  if (RetVT.SimpleTy != MVT::i32)
    return 0;
  if ((Subtarget->inMips16Mode())) {
    return FastEmitInst_i(Mips::LwConstant32, &Mips::CPU16RegsRegClass, imm0);
  }
  return 0;
}

unsigned FastEmit_ISD_Constant_i(MVT VT, MVT RetVT, uint64_t imm0) {
  switch (VT.SimpleTy) {
  case MVT::i32: return FastEmit_ISD_Constant_MVT_i32_i(RetVT, imm0);
  default: return 0;
  }
}

// Top-level FastEmit function.

unsigned FastEmit_i(MVT VT, MVT RetVT, unsigned Opcode, uint64_t imm0) {
  switch (Opcode) {
  case ISD::Constant: return FastEmit_ISD_Constant_i(VT, RetVT, imm0);
  default: return 0;
  }
}

