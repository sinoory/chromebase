/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Subtarget Enumeration Source Fragment                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_SUBTARGETINFO_ENUM
#undef GET_SUBTARGETINFO_ENUM
namespace llvm {
namespace PPC {
  const uint64_t DeprecatedDST = 1ULL << 0;
  const uint64_t DeprecatedMFTB = 1ULL << 1;
  const uint64_t Directive32 = 1ULL << 2;
  const uint64_t Directive64 = 1ULL << 3;
  const uint64_t Directive440 = 1ULL << 4;
  const uint64_t Directive601 = 1ULL << 5;
  const uint64_t Directive602 = 1ULL << 6;
  const uint64_t Directive603 = 1ULL << 7;
  const uint64_t Directive604 = 1ULL << 8;
  const uint64_t Directive620 = 1ULL << 9;
  const uint64_t Directive750 = 1ULL << 10;
  const uint64_t Directive970 = 1ULL << 11;
  const uint64_t Directive7400 = 1ULL << 12;
  const uint64_t DirectiveA2 = 1ULL << 13;
  const uint64_t DirectiveE500mc = 1ULL << 14;
  const uint64_t DirectiveE5500 = 1ULL << 15;
  const uint64_t DirectivePwr3 = 1ULL << 16;
  const uint64_t DirectivePwr4 = 1ULL << 17;
  const uint64_t DirectivePwr5 = 1ULL << 18;
  const uint64_t DirectivePwr5x = 1ULL << 19;
  const uint64_t DirectivePwr6 = 1ULL << 20;
  const uint64_t DirectivePwr6x = 1ULL << 21;
  const uint64_t DirectivePwr7 = 1ULL << 22;
  const uint64_t DirectivePwr8 = 1ULL << 23;
  const uint64_t Feature64Bit = 1ULL << 24;
  const uint64_t Feature64BitRegs = 1ULL << 25;
  const uint64_t FeatureAltivec = 1ULL << 26;
  const uint64_t FeatureBookE = 1ULL << 27;
  const uint64_t FeatureCRBits = 1ULL << 28;
  const uint64_t FeatureFCPSGN = 1ULL << 29;
  const uint64_t FeatureFPCVT = 1ULL << 30;
  const uint64_t FeatureFPRND = 1ULL << 31;
  const uint64_t FeatureFRE = 1ULL << 32;
  const uint64_t FeatureFRES = 1ULL << 33;
  const uint64_t FeatureFRSQRTE = 1ULL << 34;
  const uint64_t FeatureFRSQRTES = 1ULL << 35;
  const uint64_t FeatureFSqrt = 1ULL << 36;
  const uint64_t FeatureISEL = 1ULL << 37;
  const uint64_t FeatureLDBRX = 1ULL << 38;
  const uint64_t FeatureLFIWAX = 1ULL << 39;
  const uint64_t FeatureMFOCRF = 1ULL << 40;
  const uint64_t FeaturePOPCNTD = 1ULL << 41;
  const uint64_t FeatureQPX = 1ULL << 42;
  const uint64_t FeatureRecipPrec = 1ULL << 43;
  const uint64_t FeatureSTFIWX = 1ULL << 44;
  const uint64_t FeatureVSX = 1ULL << 45;
}
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC
namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV PPCFeatureKV[] = {
  { "64bit", "Enable 64-bit instructions", PPC::Feature64Bit, 0ULL },
  { "64bitregs", "Enable 64-bit registers usage for ppc32 [beta]", PPC::Feature64BitRegs, 0ULL },
  { "altivec", "Enable Altivec instructions", PPC::FeatureAltivec, 0ULL },
  { "booke", "Enable Book E instructions", PPC::FeatureBookE, 0ULL },
  { "crbits", "Use condition-register bits individually", PPC::FeatureCRBits, 0ULL },
  { "fcpsgn", "Enable the fcpsgn instruction", PPC::FeatureFCPSGN, 0ULL },
  { "fpcvt", "Enable fc[ft]* (unsigned and single-precision) and lfiwzx instructions", PPC::FeatureFPCVT, 0ULL },
  { "fprnd", "Enable the fri[mnpz] instructions", PPC::FeatureFPRND, 0ULL },
  { "fre", "Enable the fre instruction", PPC::FeatureFRE, 0ULL },
  { "fres", "Enable the fres instruction", PPC::FeatureFRES, 0ULL },
  { "frsqrte", "Enable the frsqrte instruction", PPC::FeatureFRSQRTE, 0ULL },
  { "frsqrtes", "Enable the frsqrtes instruction", PPC::FeatureFRSQRTES, 0ULL },
  { "fsqrt", "Enable the fsqrt instruction", PPC::FeatureFSqrt, 0ULL },
  { "isel", "Enable the isel instruction", PPC::FeatureISEL, 0ULL },
  { "ldbrx", "Enable the ldbrx instruction", PPC::FeatureLDBRX, 0ULL },
  { "lfiwax", "Enable the lfiwax instruction", PPC::FeatureLFIWAX, 0ULL },
  { "mfocrf", "Enable the MFOCRF instruction", PPC::FeatureMFOCRF, 0ULL },
  { "popcntd", "Enable the popcnt[dw] instructions", PPC::FeaturePOPCNTD, 0ULL },
  { "qpx", "Enable QPX instructions", PPC::FeatureQPX, 0ULL },
  { "recipprec", "Assume higher precision reciprocal estimates", PPC::FeatureRecipPrec, 0ULL },
  { "stfiwx", "Enable the stfiwx instruction", PPC::FeatureSTFIWX, 0ULL },
  { "vsx", "Enable VSX instructions", PPC::FeatureVSX, PPC::FeatureAltivec }
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV PPCSubTypeKV[] = {
  { "440", "Select the 440 processor", PPC::Directive440 | PPC::FeatureISEL | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureBookE | PPC::DeprecatedMFTB, 0ULL },
  { "450", "Select the 450 processor", PPC::Directive440 | PPC::FeatureISEL | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureBookE | PPC::DeprecatedMFTB, 0ULL },
  { "601", "Select the 601 processor", PPC::Directive601, 0ULL },
  { "602", "Select the 602 processor", PPC::Directive602, 0ULL },
  { "603", "Select the 603 processor", PPC::Directive603 | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "603e", "Select the 603e processor", PPC::Directive603 | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "603ev", "Select the 603ev processor", PPC::Directive603 | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "604", "Select the 604 processor", PPC::Directive604 | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "604e", "Select the 604e processor", PPC::Directive604 | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "620", "Select the 620 processor", PPC::Directive620 | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "7400", "Select the 7400 processor", PPC::Directive7400 | PPC::FeatureAltivec | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "7450", "Select the 7450 processor", PPC::Directive7400 | PPC::FeatureAltivec | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "750", "Select the 750 processor", PPC::Directive750 | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "970", "Select the 970 processor", PPC::Directive970 | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureSTFIWX | PPC::Feature64Bit, 0ULL },
  { "a2", "Select the a2 processor", PPC::DirectiveA2 | PPC::FeatureBookE | PPC::FeatureMFOCRF | PPC::FeatureFCPSGN | PPC::FeatureFSqrt | PPC::FeatureFRE | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureFRSQRTES | PPC::FeatureRecipPrec | PPC::FeatureSTFIWX | PPC::FeatureLFIWAX | PPC::FeatureFPRND | PPC::FeatureFPCVT | PPC::FeatureISEL | PPC::FeaturePOPCNTD | PPC::FeatureLDBRX | PPC::Feature64Bit | PPC::DeprecatedMFTB, 0ULL },
  { "a2q", "Select the a2q processor", PPC::DirectiveA2 | PPC::FeatureBookE | PPC::FeatureMFOCRF | PPC::FeatureFCPSGN | PPC::FeatureFSqrt | PPC::FeatureFRE | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureFRSQRTES | PPC::FeatureRecipPrec | PPC::FeatureSTFIWX | PPC::FeatureLFIWAX | PPC::FeatureFPRND | PPC::FeatureFPCVT | PPC::FeatureISEL | PPC::FeaturePOPCNTD | PPC::FeatureLDBRX | PPC::Feature64Bit | PPC::FeatureQPX | PPC::DeprecatedMFTB, 0ULL },
  { "e500mc", "Select the e500mc processor", PPC::DirectiveE500mc | PPC::FeatureMFOCRF | PPC::FeatureSTFIWX | PPC::FeatureBookE | PPC::FeatureISEL | PPC::DeprecatedMFTB, 0ULL },
  { "e5500", "Select the e5500 processor", PPC::DirectiveE5500 | PPC::FeatureMFOCRF | PPC::Feature64Bit | PPC::FeatureSTFIWX | PPC::FeatureBookE | PPC::FeatureISEL | PPC::DeprecatedMFTB, 0ULL },
  { "g3", "Select the g3 processor", PPC::Directive750 | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "g4", "Select the g4 processor", PPC::Directive7400 | PPC::FeatureAltivec | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "g4+", "Select the g4+ processor", PPC::Directive7400 | PPC::FeatureAltivec | PPC::FeatureFRES | PPC::FeatureFRSQRTE, 0ULL },
  { "g5", "Select the g5 processor", PPC::Directive970 | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureSTFIWX | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::Feature64Bit | PPC::DeprecatedMFTB | PPC::DeprecatedDST, 0ULL },
  { "generic", "Select the generic processor", PPC::Directive32, 0ULL },
  { "ppc", "Select the ppc processor", PPC::Directive32, 0ULL },
  { "ppc64", "Select the ppc64 processor", PPC::Directive64 | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureSTFIWX | PPC::Feature64Bit, 0ULL },
  { "ppc64le", "Select the ppc64le processor", PPC::Directive64 | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureSTFIWX | PPC::Feature64Bit, 0ULL },
  { "pwr3", "Select the pwr3 processor", PPC::DirectivePwr3 | PPC::FeatureAltivec | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureMFOCRF | PPC::FeatureSTFIWX | PPC::Feature64Bit, 0ULL },
  { "pwr4", "Select the pwr4 processor", PPC::DirectivePwr4 | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureSTFIWX | PPC::Feature64Bit, 0ULL },
  { "pwr5", "Select the pwr5 processor", PPC::DirectivePwr5 | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureFRE | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureFRSQRTES | PPC::FeatureSTFIWX | PPC::Feature64Bit | PPC::DeprecatedMFTB | PPC::DeprecatedDST, 0ULL },
  { "pwr5x", "Select the pwr5x processor", PPC::DirectivePwr5x | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFSqrt | PPC::FeatureFRE | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureFRSQRTES | PPC::FeatureSTFIWX | PPC::FeatureFPRND | PPC::Feature64Bit | PPC::DeprecatedMFTB | PPC::DeprecatedDST, 0ULL },
  { "pwr6", "Select the pwr6 processor", PPC::DirectivePwr6 | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFCPSGN | PPC::FeatureFSqrt | PPC::FeatureFRE | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureFRSQRTES | PPC::FeatureRecipPrec | PPC::FeatureSTFIWX | PPC::FeatureLFIWAX | PPC::FeatureFPRND | PPC::Feature64Bit | PPC::DeprecatedMFTB | PPC::DeprecatedDST, 0ULL },
  { "pwr6x", "Select the pwr6x processor", PPC::DirectivePwr5x | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFCPSGN | PPC::FeatureFSqrt | PPC::FeatureFRE | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureFRSQRTES | PPC::FeatureRecipPrec | PPC::FeatureSTFIWX | PPC::FeatureLFIWAX | PPC::FeatureFPRND | PPC::Feature64Bit | PPC::DeprecatedMFTB | PPC::DeprecatedDST, 0ULL },
  { "pwr7", "Select the pwr7 processor", PPC::DirectivePwr7 | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFCPSGN | PPC::FeatureFSqrt | PPC::FeatureFRE | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureFRSQRTES | PPC::FeatureRecipPrec | PPC::FeatureSTFIWX | PPC::FeatureLFIWAX | PPC::FeatureFPRND | PPC::FeatureFPCVT | PPC::FeatureISEL | PPC::FeaturePOPCNTD | PPC::FeatureLDBRX | PPC::Feature64Bit | PPC::DeprecatedMFTB | PPC::DeprecatedDST, 0ULL },
  { "pwr8", "Select the pwr8 processor", PPC::DirectivePwr8 | PPC::FeatureAltivec | PPC::FeatureMFOCRF | PPC::FeatureFCPSGN | PPC::FeatureFSqrt | PPC::FeatureFRE | PPC::FeatureFRES | PPC::FeatureFRSQRTE | PPC::FeatureFRSQRTES | PPC::FeatureRecipPrec | PPC::FeatureSTFIWX | PPC::FeatureLFIWAX | PPC::FeatureFPRND | PPC::FeatureFPCVT | PPC::FeatureISEL | PPC::FeaturePOPCNTD | PPC::FeatureLDBRX | PPC::Feature64Bit | PPC::DeprecatedMFTB | PPC::DeprecatedDST, 0ULL }
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#ifndef NDEBUG
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// Functional units for "PPC440Itineraries"
namespace PPC440ItinerariesFU {
  const unsigned P440_DISS1 = 1 << 0;
  const unsigned P440_DISS2 = 1 << 1;
  const unsigned P440_FRACC = 1 << 2;
  const unsigned P440_IRACC = 1 << 3;
  const unsigned P440_IEXE1 = 1 << 4;
  const unsigned P440_IEXE2 = 1 << 5;
  const unsigned P440_IWB = 1 << 6;
  const unsigned P440_LRACC = 1 << 7;
  const unsigned P440_JEXE1 = 1 << 8;
  const unsigned P440_JEXE2 = 1 << 9;
  const unsigned P440_JWB = 1 << 10;
  const unsigned P440_AGEN = 1 << 11;
  const unsigned P440_CRD = 1 << 12;
  const unsigned P440_LWB = 1 << 13;
  const unsigned P440_FEXE1 = 1 << 14;
  const unsigned P440_FEXE2 = 1 << 15;
  const unsigned P440_FEXE3 = 1 << 16;
  const unsigned P440_FEXE4 = 1 << 17;
  const unsigned P440_FEXE5 = 1 << 18;
  const unsigned P440_FEXE6 = 1 << 19;
  const unsigned P440_FWB = 1 << 20;
  const unsigned P440_LWARX_Hold = 1 << 21;
}

// Pipeline forwarding pathes for itineraries "PPC440Itineraries"
namespace PPC440ItinerariesBypass {
  const unsigned NoBypass = 0;
  const unsigned P440_GPR_Bypass = 1 << 0;
  const unsigned P440_FPR_Bypass = 1 << 1;
}

// Functional units for "G3Itineraries"
namespace G3ItinerariesFU {
  const unsigned G3_IU1 = 1 << 0;
  const unsigned G3_IU2 = 1 << 1;
  const unsigned G3_FPU1 = 1 << 2;
  const unsigned G3_BPU = 1 << 3;
  const unsigned G3_SRU = 1 << 4;
  const unsigned G3_SLU = 1 << 5;
}

// Functional units for "G4Itineraries"
namespace G4ItinerariesFU {
  const unsigned G4_IU1 = 1 << 0;
  const unsigned G4_IU2 = 1 << 1;
  const unsigned G4_SLU = 1 << 2;
  const unsigned G4_SRU = 1 << 3;
  const unsigned G4_BPU = 1 << 4;
  const unsigned G4_FPU1 = 1 << 5;
  const unsigned G4_VIU1 = 1 << 6;
  const unsigned G4_VIU2 = 1 << 7;
  const unsigned G4_VPU = 1 << 8;
  const unsigned G4_VFPU = 1 << 9;
}

// Functional units for "G4PlusItineraries"
namespace G4PlusItinerariesFU {
  const unsigned G4P_IU1 = 1 << 0;
  const unsigned G4P_IU2 = 1 << 1;
  const unsigned G4P_IU3 = 1 << 2;
  const unsigned G4P_IU4 = 1 << 3;
  const unsigned G4P_BPU = 1 << 4;
  const unsigned G4P_SLU = 1 << 5;
  const unsigned G4P_FPU1 = 1 << 6;
  const unsigned G4P_VFPU = 1 << 7;
  const unsigned G4P_VIU1 = 1 << 8;
  const unsigned G4P_VIU2 = 1 << 9;
  const unsigned G4P_VPU = 1 << 10;
}

// Functional units for "G5Itineraries"
namespace G5ItinerariesFU {
  const unsigned G5_IU1 = 1 << 0;
  const unsigned G5_IU2 = 1 << 1;
  const unsigned G5_SLU = 1 << 2;
  const unsigned G5_BPU = 1 << 3;
  const unsigned G5_FPU1 = 1 << 4;
  const unsigned G5_FPU2 = 1 << 5;
  const unsigned G5_VFPU = 1 << 6;
  const unsigned G5_VIU1 = 1 << 7;
  const unsigned G5_VIU2 = 1 << 8;
  const unsigned G5_VPU = 1 << 9;
}

// Functional units for "PPCA2Itineraries"
namespace PPCA2ItinerariesFU {
  const unsigned A2_XU = 1 << 0;
  const unsigned A2_FU = 1 << 1;
}

// Functional units for "PPCE500mcItineraries"
namespace PPCE500mcItinerariesFU {
  const unsigned E500_DIS0 = 1 << 0;
  const unsigned E500_DIS1 = 1 << 1;
  const unsigned E500_SFX0 = 1 << 2;
  const unsigned E500_SFX1 = 1 << 3;
  const unsigned E500_BU = 1 << 4;
  const unsigned E500_CFX_DivBypass = 1 << 5;
  const unsigned E500_CFX_0 = 1 << 6;
  const unsigned E500_LSU_0 = 1 << 7;
  const unsigned E500_FPU_0 = 1 << 8;
}

// Pipeline forwarding pathes for itineraries "PPCE500mcItineraries"
namespace PPCE500mcItinerariesBypass {
  const unsigned NoBypass = 0;
  const unsigned E500_CR_Bypass = 1 << 0;
  const unsigned E500_GPR_Bypass = 1 << 1;
  const unsigned E500_FPR_Bypass = 1 << 2;
}

// Functional units for "PPCE5500Itineraries"
namespace PPCE5500ItinerariesFU {
  const unsigned E5500_DIS0 = 1 << 0;
  const unsigned E5500_DIS1 = 1 << 1;
  const unsigned E5500_SFX0 = 1 << 2;
  const unsigned E5500_SFX1 = 1 << 3;
  const unsigned E5500_BU = 1 << 4;
  const unsigned E5500_CFX_DivBypass = 1 << 5;
  const unsigned E5500_CFX_0 = 1 << 6;
  const unsigned E5500_CFX_1 = 1 << 7;
  const unsigned E5500_LSU_0 = 1 << 8;
  const unsigned E5500_FPU_0 = 1 << 9;
}

// Pipeline forwarding pathes for itineraries "PPCE5500Itineraries"
namespace PPCE5500ItinerariesBypass {
  const unsigned NoBypass = 0;
  const unsigned E5500_CR_Bypass = 1 << 0;
  const unsigned E5500_GPR_Bypass = 1 << 1;
  const unsigned E5500_FPR_Bypass = 1 << 2;
}

// Functional units for "P7Itineraries"
namespace P7ItinerariesFU {
  const unsigned P7_DU1 = 1 << 0;
  const unsigned P7_DU2 = 1 << 1;
  const unsigned P7_DU3 = 1 << 2;
  const unsigned P7_DU4 = 1 << 3;
  const unsigned P7_DU5 = 1 << 4;
  const unsigned P7_DU6 = 1 << 5;
  const unsigned P7_LS1 = 1 << 6;
  const unsigned P7_LS2 = 1 << 7;
  const unsigned P7_FX1 = 1 << 8;
  const unsigned P7_FX2 = 1 << 9;
  const unsigned P7_VS1 = 1 << 10;
  const unsigned P7_VS2 = 1 << 11;
  const unsigned P7_CRU = 1 << 12;
  const unsigned P7_BRU = 1 << 13;
}

extern const llvm::InstrStage PPCStages[] = {
  { 0, 0, 0, llvm::InstrStage::Required }, // No itinerary
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IRACC | PPC440ItinerariesFU::P440_LRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE1 | PPC440ItinerariesFU::P440_JEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE2 | PPC440ItinerariesFU::P440_JEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IWB | PPC440ItinerariesFU::P440_JWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 1-5
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 6-10
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_AGEN, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_CRD, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 11-15
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 33, PPC440ItinerariesFU::P440_IWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 16-20
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_AGEN, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_CRD, -1, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPC440ItinerariesFU::P440_LWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 21-25
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE4, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 26-34
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE4, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 25, PPC440ItinerariesFU::P440_FWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 35-43
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE4, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 13, PPC440ItinerariesFU::P440_FWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 44-52
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FRACC, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LRACC, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_AGEN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_JEXE1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_CRD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_JEXE2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 6, PPC440ItinerariesFU::P440_FEXE3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 6, PPC440ItinerariesFU::P440_LWB, 0, (llvm::InstrStage::ReservationKinds)0 },   { 6, PPC440ItinerariesFU::P440_JWB, 0, (llvm::InstrStage::ReservationKinds)0 },   { 6, PPC440ItinerariesFU::P440_IWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 53-68
  { 1, PPC440ItinerariesFU::P440_DISS1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IRACC, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPC440ItinerariesFU::P440_LWARX_Hold, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_AGEN, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_CRD, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 69-75
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 3, PPC440ItinerariesFU::P440_IWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 76-80
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 3, PPC440ItinerariesFU::P440_AGEN, 1, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPC440ItinerariesFU::P440_CRD, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 81-85
  { 1, G3ItinerariesFU::G3_IU1 | G3ItinerariesFU::G3_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 86
  { 1, G3ItinerariesFU::G3_BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 87
  { 1, G3ItinerariesFU::G3_SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 88
  { 3, G3ItinerariesFU::G3_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 89
  { 19, G3ItinerariesFU::G3_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 90
  { 2, G3ItinerariesFU::G3_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 91
  { 1, G3ItinerariesFU::G3_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 92
  { 31, G3ItinerariesFU::G3_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 93
  { 17, G3ItinerariesFU::G3_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 94
  { 2, G3ItinerariesFU::G3_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 95
  { 2, G3ItinerariesFU::G3_SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 96
  { 34, G3ItinerariesFU::G3_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 97
  { 3, G3ItinerariesFU::G3_SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 98
  { 3, G3ItinerariesFU::G3_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 99
  { 5, G3ItinerariesFU::G3_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 100
  { 6, G3ItinerariesFU::G3_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 101
  { 3, G3ItinerariesFU::G3_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 102
  { 8, G3ItinerariesFU::G3_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 103
  { 2, G3ItinerariesFU::G3_IU1 | G3ItinerariesFU::G3_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 104
  { 1, G4ItinerariesFU::G4_IU1 | G4ItinerariesFU::G4_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 105
  { 1, G4ItinerariesFU::G4_BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 106
  { 1, G4ItinerariesFU::G4_SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 107
  { 2, G4ItinerariesFU::G4_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 108
  { 19, G4ItinerariesFU::G4_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 109
  { 1, G4ItinerariesFU::G4_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 110
  { 31, G4ItinerariesFU::G4_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 111
  { 17, G4ItinerariesFU::G4_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 112
  { 2, G4ItinerariesFU::G4_SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 113
  { 34, G4ItinerariesFU::G4_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 114
  { 3, G4ItinerariesFU::G4_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 115
  { 3, G4ItinerariesFU::G4_SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 116
  { 3, G4ItinerariesFU::G4_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 117
  { 8, G4ItinerariesFU::G4_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 118
  { 5, G4ItinerariesFU::G4_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 119
  { 6, G4ItinerariesFU::G4_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 120
  { 3, G4ItinerariesFU::G4_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 121
  { 5, G4ItinerariesFU::G4_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 122
  { 8, G4ItinerariesFU::G4_SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 123
  { 2, G4ItinerariesFU::G4_IU1 | G4ItinerariesFU::G4_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 124
  { 4, G4ItinerariesFU::G4_VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 125
  { 1, G4ItinerariesFU::G4_VIU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 126
  { 1, G4ItinerariesFU::G4_VPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 127
  { 1, G4PlusItinerariesFU::G4P_IU1 | G4PlusItinerariesFU::G4P_IU2 | G4PlusItinerariesFU::G4P_IU3 | G4PlusItinerariesFU::G4P_IU4, -1, (llvm::InstrStage::ReservationKinds)0 }, // 128
  { 1, G4PlusItinerariesFU::G4P_BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 129
  { 2, G4PlusItinerariesFU::G4P_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 130
  { 3, G4PlusItinerariesFU::G4P_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 131
  { 23, G4PlusItinerariesFU::G4P_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 132
  { 5, G4PlusItinerariesFU::G4P_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 133
  { 35, G4PlusItinerariesFU::G4P_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 134
  { 21, G4PlusItinerariesFU::G4P_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 135
  { 3, G4PlusItinerariesFU::G4P_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 136
  { 0, G4PlusItinerariesFU::G4P_IU1 | G4PlusItinerariesFU::G4P_IU2 | G4PlusItinerariesFU::G4P_IU3 | G4PlusItinerariesFU::G4P_IU4, -1, (llvm::InstrStage::ReservationKinds)0 }, // 137
  { 4, G4PlusItinerariesFU::G4P_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 138
  { 37, G4PlusItinerariesFU::G4P_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 139
  { 4, G4PlusItinerariesFU::G4P_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 140
  { 5, G4PlusItinerariesFU::G4P_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 141
  { 35, G4PlusItinerariesFU::G4P_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 142
  { 2, G4PlusItinerariesFU::G4P_IU1 | G4PlusItinerariesFU::G4P_IU2 | G4PlusItinerariesFU::G4P_IU3 | G4PlusItinerariesFU::G4P_IU4, -1, (llvm::InstrStage::ReservationKinds)0 }, // 143
  { 4, G4PlusItinerariesFU::G4P_VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 144
  { 1, G4PlusItinerariesFU::G4P_VIU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 145
  { 2, G4PlusItinerariesFU::G4P_VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 146
  { 2, G4PlusItinerariesFU::G4P_VPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 147
  { 2, G5ItinerariesFU::G5_IU1 | G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 148
  { 1, G5ItinerariesFU::G5_BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 149
  { 3, G5ItinerariesFU::G5_IU1 | G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 150
  { 4, G5ItinerariesFU::G5_BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 151
  { 3, G5ItinerariesFU::G5_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 152
  { 68, G5ItinerariesFU::G5_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 153
  { 36, G5ItinerariesFU::G5_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 154
  { 6, G5ItinerariesFU::G5_FPU1 | G5ItinerariesFU::G5_FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 155
  { 8, G5ItinerariesFU::G5_FPU1 | G5ItinerariesFU::G5_FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 156
  { 33, G5ItinerariesFU::G5_FPU1 | G5ItinerariesFU::G5_FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 157
  { 40, G5ItinerariesFU::G5_FPU1 | G5ItinerariesFU::G5_FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 158
  { 40, G5ItinerariesFU::G5_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 159
  { 11, G5ItinerariesFU::G5_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 160
  { 5, G5ItinerariesFU::G5_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 161
  { 64, G5ItinerariesFU::G5_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 162
  { 2, G5ItinerariesFU::G5_BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 163
  { 2, G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 164
  { 3, G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 165
  { 6, G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 166
  { 10, G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 167
  { 35, G5ItinerariesFU::G5_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 168
  { 3, G5ItinerariesFU::G5_BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 169
  { 8, G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 170
  { 5, G5ItinerariesFU::G5_IU1 | G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 171
  { 7, G5ItinerariesFU::G5_IU1 | G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 172
  { 4, G5ItinerariesFU::G5_IU1 | G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 173
  { 4, G5ItinerariesFU::G5_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 174
  { 1, G5ItinerariesFU::G5_IU1 | G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 175
  { 8, G5ItinerariesFU::G5_VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 176
  { 2, G5ItinerariesFU::G5_VIU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 177
  { 2, G5ItinerariesFU::G5_VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 178
  { 3, G5ItinerariesFU::G5_VPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 179
  { 1, PPCA2ItinerariesFU::A2_XU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 180
  { 1, PPCA2ItinerariesFU::A2_FU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 181
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500_SFX0 | PPCE500mcItinerariesFU::E500_SFX1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 182-183
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500_BU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 184-185
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500_LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 186-187
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500_CFX_0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 14, PPCE500mcItinerariesFU::E500_CFX_DivBypass, -1, (llvm::InstrStage::ReservationKinds)0 }, // 188-190
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE500mcItinerariesFU::E500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 191-192
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPCE500mcItinerariesFU::E500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 193-194
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 68, PPCE500mcItinerariesFU::E500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 195-196
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 38, PPCE500mcItinerariesFU::E500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 197-198
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500_SFX0 | PPCE500mcItinerariesFU::E500_SFX1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500_LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 199-201
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, PPCE500mcItinerariesFU::E500_LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 202-203
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, PPCE500mcItinerariesFU::E500_SFX0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 204-205
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 8, PPCE500mcItinerariesFU::E500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 206-207
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPCE500mcItinerariesFU::E500_SFX0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 208-209
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE500mcItinerariesFU::E500_SFX0 | PPCE500mcItinerariesFU::E500_SFX1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 210-211
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500_CFX_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 212-213
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500_LSU_0, 0, (llvm::InstrStage::ReservationKinds)0 }, // 214-215
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE500mcItinerariesFU::E500_SFX0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 216-217
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_SFX0 | PPCE5500ItinerariesFU::E5500_SFX1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 218-219
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_BU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 220-221
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 222-223
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_CFX_0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 26, PPCE5500ItinerariesFU::E5500_CFX_DivBypass, -1, (llvm::InstrStage::ReservationKinds)0 }, // 224-226
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_CFX_0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 16, PPCE5500ItinerariesFU::E5500_CFX_DivBypass, -1, (llvm::InstrStage::ReservationKinds)0 }, // 227-229
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 230-231
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 31, PPCE5500ItinerariesFU::E5500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 232-233
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 16, PPCE5500ItinerariesFU::E5500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 234-235
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_SFX0 | PPCE5500ItinerariesFU::E5500_SFX1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 236-238
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, PPCE5500ItinerariesFU::E5500_LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 239-240
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPCE5500ItinerariesFU::E5500_LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 241-242
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, PPCE5500ItinerariesFU::E5500_CFX_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 243-244
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_CFX_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 245-246
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPCE5500ItinerariesFU::E5500_SFX0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 247-248
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPCE5500ItinerariesFU::E5500_CFX_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 249-250
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 7, PPCE5500ItinerariesFU::E5500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 251-252
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE5500ItinerariesFU::E5500_CFX_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 253-254
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_CFX_0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_CFX_1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 255-257
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_CFX_0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE5500ItinerariesFU::E5500_CFX_1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 258-260
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE5500ItinerariesFU::E5500_SFX0 | PPCE5500ItinerariesFU::E5500_SFX1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 261-262
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_LSU_0, 0, (llvm::InstrStage::ReservationKinds)0 }, // 263-264
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE5500ItinerariesFU::E5500_SFX0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 265-266
  { 1, P7ItinerariesFU::P7_DU1 | P7ItinerariesFU::P7_DU2 | P7ItinerariesFU::P7_DU3 | P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2 | P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 267-268
  { 1, P7ItinerariesFU::P7_DU1 | P7ItinerariesFU::P7_DU2 | P7ItinerariesFU::P7_DU3 | P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 269-270
  { 1, P7ItinerariesFU::P7_DU5 | P7ItinerariesFU::P7_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_BRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 271-272
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_CRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 273-274
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 68, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 275-277
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 36, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 278-280
  { 1, P7ItinerariesFU::P7_DU1 | P7ItinerariesFU::P7_DU2 | P7ItinerariesFU::P7_DU3 | P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 281-282
  { 1, P7ItinerariesFU::P7_DU1 | P7ItinerariesFU::P7_DU2 | P7ItinerariesFU::P7_DU3 | P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_VS1 | P7ItinerariesFU::P7_VS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 283-284
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 285-288
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 289-295
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 296-300
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 301-304
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 305-309
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 310-317
  { 1, P7ItinerariesFU::P7_DU1 | P7ItinerariesFU::P7_DU2 | P7ItinerariesFU::P7_DU3 | P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 318-320
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_CRU, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 321-326
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 327-328
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 329-335
  { 1, P7ItinerariesFU::P7_DU1 | P7ItinerariesFU::P7_DU2 | P7ItinerariesFU::P7_DU3 | P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_VS1 | P7ItinerariesFU::P7_VS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 336-338
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_VS1 | P7ItinerariesFU::P7_VS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 339-343
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_VS1 | P7ItinerariesFU::P7_VS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 344-345
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_VS1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 346-347
  { 1, P7ItinerariesFU::P7_DU1 | P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_VS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 348-349
  { 0, 0, 0, llvm::InstrStage::Required } // End stages
};
extern const unsigned PPCOperandCycles[] = {
  0, // No itinerary
  2,   0,   0, // 1-3
  2,   0,   0, // 4-6
  4,   0, // 7-8
  2,   0,   0, // 9-11
  4,   0,   0, // 12-14
  1,   1, // 15-16
  36,   0,   0, // 17-19
  5,   1,   1, // 20-22
  6,   0,   0, // 23-25
  6,   0,   0, // 26-28
  6,   0,   0, // 29-31
  31,   0,   0, // 32-34
  19,   0,   0, // 35-37
  6,   0,   0,   0, // 38-41
  4,   1,   1, // 42-44
  5,   2,   1,   1, // 45-48
  5,   2,   1,   1, // 49-52
  5,   1,   1, // 53-55
  5,   2,   1,   1, // 56-59
  5,   2,   1,   1, // 60-63
  4,   1,   1, // 64-66
  4,   1,   1, // 67-69
  4,   1,   1, // 70-72
  4,   1,   1, // 73-75
  4,   1,   1, // 76-78
  4,   0,   0, // 79-81
  4,   0, // 82-83
  6,   0, // 84-85
  3,   0,   0, // 86-88
  3,   0, // 89-90
  6,   0, // 91-92
  1,   1,   1, // 93-95
  4,   0,   0, // 96-98
  6,   0, // 99-100
  3,   0,   0, // 101-103
  2,   0, // 104-105
  4,   0,   0, // 106-108
  4,   0,   0, // 109-111
  4,   0,   0, // 112-114
  2,   0,   0, // 115-117
  2,   0,   0, // 118-120
  2,   1,   1,   1, // 121-124
  4,   1,   1, // 125-127
  4,   1,   1, // 128-130
  2,   1,   1,   1, // 131-134
  2,   1,   1,   1, // 135-138
  1,   1,   1, // 139-141
  2,   1,   1,   1, // 142-145
  4,   1,   1, // 146-148
  2,   0, // 149-150
  1,   0,   0, // 151-153
  2,   0,   0, // 154-156
  6,   0,   0, // 157-159
  2,   0,   0, // 160-162
  1,   0,   0, // 163-165
  1,   0,   0, // 166-168
  71,   0,   0, // 169-171
  39,   0,   0, // 172-174
  6,   0,   0, // 175-177
  6,   0,   0, // 178-180
  6,   0,   0, // 181-183
  5,   0,   0, // 184-186
  72,   0,   0, // 187-189
  59,   0,   0, // 190-192
  6,   0,   0,   0, // 193-196
  69,   0,   0, // 197-199
  65,   0,   0, // 200-202
  16,   0,   0, // 203-205
  16, // 206
  6,   8,   0,   0, // 207-210
  6,   8,   0,   0, // 211-214
  6,   0,   0, // 215-217
  6,   0,   0, // 218-220
  7,   0,   0, // 221-223
  7,   9,   0,   0, // 224-227
  7,   9,   0,   0, // 228-231
  6,   0,   0, // 232-234
  6,   8,   0,   0, // 235-238
  6,   8,   0,   0, // 239-242
  82,   0,   0, // 243-245
  5,   0,   0, // 246-248
  6,   0, // 249-250
  6,   0, // 251-252
  4,   0, // 253-254
  1,   0, // 255-256
  4,   0, // 257-258
  0,   0,   0, // 259-261
  6, // 262
  1,   0,   0, // 263-265
  6,   0, // 266-267
  16,   0, // 268-269
  5,   0,   0, // 270-272
  5,   0,   0, // 273-275
  6,   0,   0, // 276-278
  2,   0,   0, // 279-281
  2,   0,   0, // 282-284
  2,   0,   0, // 285-287
  2,   0,   0, // 288-290
  2,   0,   0,   0, // 291-294
  0,   0,   0, // 295-297
  82,   0,   0, // 298-300
  2,   0,   0,   0, // 301-304
  2,   0,   0,   0, // 305-308
  0,   0,   0, // 309-311
  2,   0,   0,   0, // 312-315
  82,   0,   0, // 316-318
  2,   0, // 319-320
  2,   0, // 321-322
  4,   1,   1, // 323-325
  4,   1,   1, // 326-328
  4,   1, // 329-330
  5,   1,   1, // 331-333
  4,   1,   1, // 334-336
  6,   1, // 337-338
  17,   1,   1, // 339-341
  6,   1, // 342-343
  11,   1,   1, // 344-346
  13,   1,   1, // 347-349
  11,   1,   1, // 350-352
  71,   1,   1, // 353-355
  41,   1,   1, // 356-358
  13,   1,   1,   1, // 359-362
  6,   1, // 363-364
  6,   1, // 365-366
  6,   1, // 367-368
  7,   1,   1, // 369-371
  7,   1,   1, // 372-374
  7,   1,   1, // 375-377
  6,   1, // 378-379
  6,   1, // 380-381
  6,   1, // 382-383
  7,   1, // 384-385
  6,   1,   1, // 386-388
  4,   1, // 389-390
  8,   1, // 391-392
  4,   1, // 393-394
  11, // 395
  7,   1, // 396-397
  8,   1, // 398-399
  7,   1, // 400-401
  6,   1, // 402-403
  4,   1,   1, // 404-406
  4,   1, // 407-408
  11,   1,   1, // 409-411
  5,   1, // 412-413
  7,   1,   1, // 414-416
  7,   1,   1, // 417-419
  7,   1,   1, // 420-422
  4,   1,   1, // 423-425
  4,   1,   1, // 426-428
  6,   1, // 429-430
  6,   1,   1, // 431-433
  6,   1,   1, // 434-436
  6,   1, // 437-438
  5,   1, // 439-440
  5,   2,   2, // 441-443
  5,   2,   2, // 444-446
  5,   2, // 447-448
  6,   2,   2, // 449-451
  5,   2,   2, // 452-454
  7,   2, // 455-456
  30,   2,   2, // 457-459
  20,   2,   2, // 460-462
  7,   2, // 463-464
  11,   2,   2, // 465-467
  11,   2,   2, // 468-470
  11,   2,   2, // 471-473
  39,   2,   2, // 474-476
  24,   2,   2, // 477-479
  11,   2,   2,   2, // 480-483
  7,   2, // 484-485
  7,   2, // 486-487
  7,   2, // 488-489
  7,   2, // 490-491
  7,   2, // 492-493
  7,   2, // 494-495
  7,   2, // 496-497
  8,   2,   2, // 498-500
  8,   2,   2, // 501-503
  8,   2,   2, // 504-506
  7,   2, // 507-508
  7,   2, // 509-510
  7,   2, // 511-512
  8,   2, // 513-514
  7,   2,   2, // 515-517
  5,   2, // 518-519
  9,   2, // 520-521
  5, // 522
  11, // 523
  8,   2, // 524-525
  9,   2, // 526-527
  8,   2, // 528-529
  7,   2, // 530-531
  5,   2,   2, // 532-534
  5, // 535
  11,   2,   2, // 536-538
  6,   2, // 539-540
  8,   2,   2, // 541-543
  8,   2,   2, // 544-546
  9,   2,   2, // 547-549
  8,   2,   2, // 550-552
  6,   2,   2, // 553-555
  5,   2,   2, // 556-558
  5,   2,   2, // 559-561
  6,   2,   2, // 562-564
  7,   2, // 565-566
  7,   2, // 567-568
  7,   2, // 569-570
  7,   2, // 571-572
  7,   2, // 573-574
  7,   2,   2, // 575-577
  7,   2,   2, // 578-580
  7,   2, // 581-582
  6,   2, // 583-584
  1,   1,   1, // 585-587
  1,   1,   1, // 588-590
  3,   1,   1, // 591-593
  1,   1,   1, // 594-596
  3,   1,   1, // 597-599
  68,   1,   1, // 600-602
  36,   1,   1, // 603-605
  2,   1,   1, // 606-608
  5,   1,   1, // 609-611
  8,   1,   1, // 612-614
  33,   1,   1, // 615-617
  27,   1,   1, // 618-620
  5,   1,   1,   1, // 621-624
  44,   1,   1, // 625-627
  32,   1,   1, // 628-630
  2,   2,   1,   1, // 631-634
  3,   3,   1,   1, // 635-638
  2,   1,   1, // 639-641
  3,   1,   1, // 642-644
  2,   2,   1,   1, // 645-648
  3,   3,   1,   1, // 649-652
  3,   1,   1, // 653-655
  3,   3,   1,   1, // 656-659
  3,   3,   1,   1, // 660-663
  3,   1,   1, // 664-666
  4,   4,   1,   1, // 667-670
  4,   4,   1,   1, // 671-674
  2,   1,   1, // 675-677
  3,   1,   1, // 678-680
  3,   1,   1, // 681-683
  3,   1,   1, // 684-686
  6,   1, // 687-688
  3,   1, // 689-690
  1,   1,   1, // 691-693
  3,   1, // 694-695
  4,   1, // 696-697
  4,   1,   1, // 698-700
  4,   1,   1, // 701-703
  4,   1,   1, // 704-706
  1,   1,   1, // 707-709
  1,   1,   1, // 710-712
  1,   1,   1, // 713-715
  1,   1,   1, // 716-718
  1,   1,   1, // 719-721
  2,   1,   1,   1, // 722-725
  2,   1,   1,   1, // 726-729
  1,   1,   1, // 730-732
  2,   1,   1,   1, // 733-736
  1,   1,   1, // 737-739
  1,   1, // 740-741
  1,   1, // 742-743
  6,   1,   1, // 744-746
  2,   1,   1, // 747-749
  6,   1,   1, // 750-752
  3,   1,   1, // 753-755
  0 // End operand cycles
};
extern const unsigned PPCForwardingPaths[] = {
 0, // No itinerary
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 1-3
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 4-6
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 7-8
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 9-11
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 12-14
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 15-16
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 17-19
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 20-22
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 23-25
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 26-28
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 29-31
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 32-34
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 35-37
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 38-41
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 42-44
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0,  0, // 45-48
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0,  0, // 49-52
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 53-55
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 56-59
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 60-63
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 64-66
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 67-69
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 70-72
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 73-75
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 76-78
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 79-81
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 82-83
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 84-85
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 86-88
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 89-90
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 91-92
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 93-95
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 96-98
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 99-100
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 101-103
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 104-105
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 106-108
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 109-111
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 112-114
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 115-117
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 118-120
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0,  0, // 121-124
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 125-127
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 128-130
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0,  0, // 131-134
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0,  0, // 135-138
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 139-141
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 142-145
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 146-148
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 149-150
 0,  0,  0, // 151-153
 0,  0,  0, // 154-156
 0,  0,  0, // 157-159
 0,  0,  0, // 160-162
 0,  0,  0, // 163-165
 0,  0,  0, // 166-168
 0,  0,  0, // 169-171
 0,  0,  0, // 172-174
 0,  0,  0, // 175-177
 0,  0,  0, // 178-180
 0,  0,  0, // 181-183
 0,  0,  0, // 184-186
 0,  0,  0, // 187-189
 0,  0,  0, // 190-192
 0,  0,  0,  0, // 193-196
 0,  0,  0, // 197-199
 0,  0,  0, // 200-202
 0,  0,  0, // 203-205
 0, // 206
 0,  0,  0,  0, // 207-210
 0,  0,  0,  0, // 211-214
 0,  0,  0, // 215-217
 0,  0,  0, // 218-220
 0,  0,  0, // 221-223
 0,  0,  0,  0, // 224-227
 0,  0,  0,  0, // 228-231
 0,  0,  0, // 232-234
 0,  0,  0,  0, // 235-238
 0,  0,  0,  0, // 239-242
 0,  0,  0, // 243-245
 0,  0,  0, // 246-248
 0,  0, // 249-250
 0,  0, // 251-252
 0,  0, // 253-254
 0,  0, // 255-256
 0,  0, // 257-258
 0,  0,  0, // 259-261
 0, // 262
 0,  0,  0, // 263-265
 0,  0, // 266-267
 0,  0, // 268-269
 0,  0,  0, // 270-272
 0,  0,  0, // 273-275
 0,  0,  0, // 276-278
 0,  0,  0, // 279-281
 0,  0,  0, // 282-284
 0,  0,  0, // 285-287
 0,  0,  0, // 288-290
 0,  0,  0,  0, // 291-294
 0,  0,  0, // 295-297
 0,  0,  0, // 298-300
 0,  0,  0,  0, // 301-304
 0,  0,  0,  0, // 305-308
 0,  0,  0, // 309-311
 0,  0,  0,  0, // 312-315
 0,  0,  0, // 316-318
 0,  0, // 319-320
 0,  0, // 321-322
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 323-325
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 326-328
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 329-330
PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 331-333
PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_CR_Bypass, // 334-336
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 337-338
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 339-341
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 342-343
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 344-346
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 347-349
PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 350-352
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 353-355
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 356-358
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 359-362
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 363-364
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 365-366
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 367-368
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 369-371
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 372-374
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 375-377
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 378-379
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 380-381
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 382-383
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 384-385
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 386-388
PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_CR_Bypass, // 389-390
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_CR_Bypass, // 391-392
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_CR_Bypass, // 393-394
PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 395
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 396-397
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_CR_Bypass, // 398-399
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 400-401
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 402-403
PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass,  0, // 404-406
PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 407-408
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::NoBypass, // 409-411
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 412-413
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 414-416
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 417-419
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 420-422
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 423-425
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 426-428
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 429-430
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 431-433
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 434-436
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 437-438
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 439-440
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 441-443
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 444-446
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 447-448
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 449-451
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_CR_Bypass, // 452-454
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 455-456
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 457-459
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 460-462
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 463-464
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 465-467
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 468-470
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 471-473
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 474-476
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 477-479
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 480-483
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 484-485
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 486-487
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 488-489
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 490-491
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 492-493
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 494-495
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 496-497
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 498-500
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 501-503
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 504-506
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 507-508
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 509-510
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 511-512
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 513-514
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 515-517
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_CR_Bypass, // 518-519
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_CR_Bypass, // 520-521
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 522
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 523
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 524-525
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_CR_Bypass, // 526-527
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 528-529
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 530-531
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass,  0, // 532-534
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 535
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::NoBypass, // 536-538
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 539-540
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 541-543
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 544-546
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 547-549
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 550-552
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 553-555
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 556-558
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 559-561
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 562-564
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 565-566
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 567-568
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 569-570
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 571-572
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 573-574
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 575-577
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 578-580
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 581-582
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 583-584
 0,  0,  0, // 585-587
 0,  0,  0, // 588-590
 0,  0,  0, // 591-593
 0,  0,  0, // 594-596
 0,  0,  0, // 597-599
 0,  0,  0, // 600-602
 0,  0,  0, // 603-605
 0,  0,  0, // 606-608
 0,  0,  0, // 609-611
 0,  0,  0, // 612-614
 0,  0,  0, // 615-617
 0,  0,  0, // 618-620
 0,  0,  0,  0, // 621-624
 0,  0,  0, // 625-627
 0,  0,  0, // 628-630
 0,  0,  0,  0, // 631-634
 0,  0,  0,  0, // 635-638
 0,  0,  0, // 639-641
 0,  0,  0, // 642-644
 0,  0,  0,  0, // 645-648
 0,  0,  0,  0, // 649-652
 0,  0,  0, // 653-655
 0,  0,  0,  0, // 656-659
 0,  0,  0,  0, // 660-663
 0,  0,  0, // 664-666
 0,  0,  0,  0, // 667-670
 0,  0,  0,  0, // 671-674
 0,  0,  0, // 675-677
 0,  0,  0, // 678-680
 0,  0,  0, // 681-683
 0,  0,  0, // 684-686
 0,  0, // 687-688
 0,  0, // 689-690
 0,  0,  0, // 691-693
 0,  0, // 694-695
 0,  0, // 696-697
 0,  0,  0, // 698-700
 0,  0,  0, // 701-703
 0,  0,  0, // 704-706
 0,  0,  0, // 707-709
 0,  0,  0, // 710-712
 0,  0,  0, // 713-715
 0,  0,  0, // 716-718
 0,  0,  0, // 719-721
 0,  0,  0,  0, // 722-725
 0,  0,  0,  0, // 726-729
 0,  0,  0, // 730-732
 0,  0,  0,  0, // 733-736
 0,  0,  0, // 737-739
 0,  0, // 740-741
 0,  0, // 742-743
 0,  0,  0, // 744-746
 0,  0,  0, // 747-749
 0,  0,  0, // 750-752
 0,  0,  0, // 753-755
 0 // End bypass tables
};

static const llvm::InstrItinerary *NoItineraries = nullptr;

static const llvm::InstrItinerary PPC440Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 1, 6, 1, 4 }, // 1 IIC_IntSimple
  { 1, 1, 6, 4, 7 }, // 2 IIC_IntGeneral
  { 1, 6, 11, 7, 9 }, // 3 IIC_BrB
  { 1, 1, 6, 9, 12 }, // 4 IIC_IntCompare
  { 1, 6, 11, 12, 15 }, // 5 IIC_BrCR
  { 1, 11, 16, 15, 17 }, // 6 IIC_LdStDCBF
  { 0, 0, 0, 0, 0 }, // 7 IIC_IntDivD
  { 1, 16, 21, 17, 20 }, // 8 IIC_IntDivW
  { 1, 21, 26, 20, 23 }, // 9 IIC_LdStLoad
  { 1, 26, 35, 23, 26 }, // 10 IIC_FPGeneral
  { 1, 26, 35, 26, 29 }, // 11 IIC_FPAddSub
  { 1, 26, 35, 29, 32 }, // 12 IIC_FPCompare
  { 1, 35, 44, 32, 35 }, // 13 IIC_FPDivD
  { 1, 44, 53, 35, 38 }, // 14 IIC_FPDivS
  { 1, 26, 35, 38, 42 }, // 15 IIC_FPFused
  { 0, 0, 0, 0, 0 }, // 16 IIC_FPSqrtD
  { 0, 0, 0, 0, 0 }, // 17 IIC_FPSqrtS
  { 1, 11, 16, 42, 45 }, // 18 IIC_LdStICBI
  { 1, 53, 69, 0, 0 }, // 19 IIC_SprISYNC
  { 1, 21, 26, 45, 49 }, // 20 IIC_LdStLoadUpd
  { 1, 21, 26, 49, 53 }, // 21 IIC_LdStLoadUpdX
  { 0, 0, 0, 0, 0 }, // 22 IIC_LdStLD
  { 0, 0, 0, 0, 0 }, // 23 IIC_LdStLDARX
  { 0, 0, 0, 0, 0 }, // 24 IIC_LdStLDU
  { 0, 0, 0, 0, 0 }, // 25 IIC_LdStLDUX
  { 1, 21, 26, 53, 56 }, // 26 IIC_LdStLFD
  { 1, 11, 16, 56, 60 }, // 27 IIC_LdStLFDU
  { 1, 11, 16, 60, 64 }, // 28 IIC_LdStLFDUX
  { 1, 11, 16, 64, 67 }, // 29 IIC_LdStLHA
  { 1, 11, 16, 67, 70 }, // 30 IIC_LdStLHAU
  { 1, 11, 16, 70, 73 }, // 31 IIC_LdStLHAUX
  { 1, 11, 16, 73, 76 }, // 32 IIC_LdStLMW
  { 0, 0, 0, 0, 0 }, // 33 IIC_LdStLWA
  { 1, 69, 76, 76, 79 }, // 34 IIC_LdStLWARX
  { 1, 6, 11, 79, 82 }, // 35 IIC_BrMCR
  { 1, 6, 11, 82, 84 }, // 36 IIC_SprMFCR
  { 1, 76, 81, 84, 86 }, // 37 IIC_SprMFSPR
  { 1, 6, 11, 86, 89 }, // 38 IIC_IntMFFS
  { 1, 6, 11, 89, 91 }, // 39 IIC_SprMFMSR
  { 0, 0, 0, 0, 0 }, // 40 IIC_SprMFCRF
  { 1, 76, 81, 91, 93 }, // 41 IIC_SprMFTB
  { 1, 21, 26, 93, 96 }, // 42 IIC_LdStStore
  { 1, 81, 86, 0, 0 }, // 43 IIC_LdStSync
  { 1, 6, 11, 96, 99 }, // 44 IIC_BrMCRX
  { 1, 76, 81, 99, 101 }, // 45 IIC_SprMTSPR
  { 1, 6, 11, 101, 104 }, // 46 IIC_IntMTFSB0
  { 1, 6, 11, 104, 106 }, // 47 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 48 IIC_SprMTMSRD
  { 1, 6, 11, 106, 109 }, // 49 IIC_IntMulHW
  { 1, 6, 11, 109, 112 }, // 50 IIC_IntMulHWU
  { 0, 0, 0, 0, 0 }, // 51 IIC_IntMulHD
  { 1, 6, 11, 112, 115 }, // 52 IIC_IntMulLI
  { 0, 0, 0, 0, 0 }, // 53 IIC_IntRotateD
  { 0, 0, 0, 0, 0 }, // 54 IIC_IntRotateDI
  { 1, 1, 6, 115, 118 }, // 55 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 56 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 57 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 58 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 59 IIC_SprSLBMTE
  { 1, 1, 6, 118, 121 }, // 60 IIC_IntShift
  { 1, 21, 26, 121, 125 }, // 61 IIC_LdStStoreUpd
  { 1, 21, 26, 125, 128 }, // 62 IIC_LdStSTD
  { 1, 69, 76, 128, 131 }, // 63 IIC_LdStSTDCX
  { 1, 21, 26, 131, 135 }, // 64 IIC_LdStSTDU
  { 1, 21, 26, 135, 139 }, // 65 IIC_LdStSTDUX
  { 1, 11, 16, 139, 142 }, // 66 IIC_LdStSTFD
  { 1, 11, 16, 142, 146 }, // 67 IIC_LdStSTFDU
  { 1, 69, 76, 146, 149 }, // 68 IIC_LdStSTWCX
  { 0, 0, 0, 0, 0 }, // 69 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 70 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 71 IIC_SprTLBIEL
  { 1, 6, 11, 0, 0 }, // 72 IIC_SprTLBSYNC
  { 1, 6, 11, 149, 151 }, // 73 IIC_IntTrapW
  { 0, 0, 0, 0, 0 }, // 74 IIC_VecFP
  { 0, 0, 0, 0, 0 }, // 75 IIC_VecGeneral
  { 0, 0, 0, 0, 0 }, // 76 IIC_VecFPCompare
  { 0, 0, 0, 0, 0 }, // 77 IIC_VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary G3Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 86, 87, 0, 0 }, // 1 IIC_IntSimple
  { 1, 86, 87, 0, 0 }, // 2 IIC_IntGeneral
  { 1, 87, 88, 0, 0 }, // 3 IIC_BrB
  { 1, 86, 87, 0, 0 }, // 4 IIC_IntCompare
  { 1, 88, 89, 0, 0 }, // 5 IIC_BrCR
  { 1, 89, 90, 0, 0 }, // 6 IIC_LdStDCBF
  { 0, 0, 0, 0, 0 }, // 7 IIC_IntDivD
  { 1, 90, 91, 0, 0 }, // 8 IIC_IntDivW
  { 1, 91, 92, 0, 0 }, // 9 IIC_LdStLoad
  { 1, 92, 93, 0, 0 }, // 10 IIC_FPGeneral
  { 1, 92, 93, 0, 0 }, // 11 IIC_FPAddSub
  { 1, 92, 93, 0, 0 }, // 12 IIC_FPCompare
  { 1, 93, 94, 0, 0 }, // 13 IIC_FPDivD
  { 1, 94, 95, 0, 0 }, // 14 IIC_FPDivS
  { 1, 95, 96, 0, 0 }, // 15 IIC_FPFused
  { 0, 0, 0, 0, 0 }, // 16 IIC_FPSqrtD
  { 0, 0, 0, 0, 0 }, // 17 IIC_FPSqrtS
  { 1, 89, 90, 0, 0 }, // 18 IIC_LdStICBI
  { 1, 96, 97, 0, 0 }, // 19 IIC_SprISYNC
  { 1, 91, 92, 0, 0 }, // 20 IIC_LdStLoadUpd
  { 1, 91, 92, 0, 0 }, // 21 IIC_LdStLoadUpdX
  { 0, 0, 0, 0, 0 }, // 22 IIC_LdStLD
  { 0, 0, 0, 0, 0 }, // 23 IIC_LdStLDARX
  { 0, 0, 0, 0, 0 }, // 24 IIC_LdStLDU
  { 0, 0, 0, 0, 0 }, // 25 IIC_LdStLDUX
  { 1, 91, 92, 0, 0 }, // 26 IIC_LdStLFD
  { 1, 91, 92, 0, 0 }, // 27 IIC_LdStLFDU
  { 1, 91, 92, 0, 0 }, // 28 IIC_LdStLFDUX
  { 1, 91, 92, 0, 0 }, // 29 IIC_LdStLHA
  { 1, 91, 92, 0, 0 }, // 30 IIC_LdStLHAU
  { 1, 91, 92, 0, 0 }, // 31 IIC_LdStLHAUX
  { 1, 97, 98, 0, 0 }, // 32 IIC_LdStLMW
  { 0, 0, 0, 0, 0 }, // 33 IIC_LdStLWA
  { 1, 89, 90, 0, 0 }, // 34 IIC_LdStLWARX
  { 1, 88, 89, 0, 0 }, // 35 IIC_BrMCR
  { 1, 88, 89, 0, 0 }, // 36 IIC_SprMFCR
  { 1, 98, 99, 0, 0 }, // 37 IIC_SprMFSPR
  { 1, 92, 93, 0, 0 }, // 38 IIC_IntMFFS
  { 1, 88, 89, 0, 0 }, // 39 IIC_SprMFMSR
  { 0, 0, 0, 0, 0 }, // 40 IIC_SprMFCRF
  { 1, 98, 99, 0, 0 }, // 41 IIC_SprMFTB
  { 1, 91, 92, 0, 0 }, // 42 IIC_LdStStore
  { 1, 89, 90, 0, 0 }, // 43 IIC_LdStSync
  { 1, 88, 89, 0, 0 }, // 44 IIC_BrMCRX
  { 1, 96, 97, 0, 0 }, // 45 IIC_SprMTSPR
  { 1, 99, 100, 0, 0 }, // 46 IIC_IntMTFSB0
  { 1, 88, 89, 0, 0 }, // 47 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 48 IIC_SprMTMSRD
  { 1, 100, 101, 0, 0 }, // 49 IIC_IntMulHW
  { 1, 101, 102, 0, 0 }, // 50 IIC_IntMulHWU
  { 0, 0, 0, 0, 0 }, // 51 IIC_IntMulHD
  { 1, 102, 103, 0, 0 }, // 52 IIC_IntMulLI
  { 0, 0, 0, 0, 0 }, // 53 IIC_IntRotateD
  { 0, 0, 0, 0, 0 }, // 54 IIC_IntRotateDI
  { 1, 86, 87, 0, 0 }, // 55 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 56 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 57 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 58 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 59 IIC_SprSLBMTE
  { 1, 86, 87, 0, 0 }, // 60 IIC_IntShift
  { 1, 91, 92, 0, 0 }, // 61 IIC_LdStStoreUpd
  { 0, 0, 0, 0, 0 }, // 62 IIC_LdStSTD
  { 0, 0, 0, 0, 0 }, // 63 IIC_LdStSTDCX
  { 0, 0, 0, 0, 0 }, // 64 IIC_LdStSTDU
  { 0, 0, 0, 0, 0 }, // 65 IIC_LdStSTDUX
  { 1, 91, 92, 0, 0 }, // 66 IIC_LdStSTFD
  { 1, 91, 92, 0, 0 }, // 67 IIC_LdStSTFDU
  { 1, 103, 104, 0, 0 }, // 68 IIC_LdStSTWCX
  { 0, 0, 0, 0, 0 }, // 69 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 70 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 71 IIC_SprTLBIEL
  { 1, 98, 99, 0, 0 }, // 72 IIC_SprTLBSYNC
  { 1, 104, 105, 0, 0 }, // 73 IIC_IntTrapW
  { 0, 0, 0, 0, 0 }, // 74 IIC_VecFP
  { 0, 0, 0, 0, 0 }, // 75 IIC_VecGeneral
  { 0, 0, 0, 0, 0 }, // 76 IIC_VecFPCompare
  { 0, 0, 0, 0, 0 }, // 77 IIC_VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary G4Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 105, 106, 0, 0 }, // 1 IIC_IntSimple
  { 1, 105, 106, 0, 0 }, // 2 IIC_IntGeneral
  { 1, 106, 107, 0, 0 }, // 3 IIC_BrB
  { 1, 105, 106, 0, 0 }, // 4 IIC_IntCompare
  { 1, 107, 108, 0, 0 }, // 5 IIC_BrCR
  { 1, 108, 109, 0, 0 }, // 6 IIC_LdStDCBF
  { 0, 0, 0, 0, 0 }, // 7 IIC_IntDivD
  { 1, 109, 110, 0, 0 }, // 8 IIC_IntDivW
  { 1, 108, 109, 0, 0 }, // 9 IIC_LdStLoad
  { 1, 110, 111, 0, 0 }, // 10 IIC_FPGeneral
  { 1, 110, 111, 0, 0 }, // 11 IIC_FPAddSub
  { 1, 110, 111, 0, 0 }, // 12 IIC_FPCompare
  { 1, 111, 112, 0, 0 }, // 13 IIC_FPDivD
  { 1, 112, 113, 0, 0 }, // 14 IIC_FPDivS
  { 1, 110, 111, 0, 0 }, // 15 IIC_FPFused
  { 0, 0, 0, 0, 0 }, // 16 IIC_FPSqrtD
  { 0, 0, 0, 0, 0 }, // 17 IIC_FPSqrtS
  { 1, 108, 109, 0, 0 }, // 18 IIC_LdStICBI
  { 1, 113, 114, 0, 0 }, // 19 IIC_SprISYNC
  { 1, 108, 109, 0, 0 }, // 20 IIC_LdStLoadUpd
  { 1, 108, 109, 0, 0 }, // 21 IIC_LdStLoadUpdX
  { 0, 0, 0, 0, 0 }, // 22 IIC_LdStLD
  { 0, 0, 0, 0, 0 }, // 23 IIC_LdStLDARX
  { 0, 0, 0, 0, 0 }, // 24 IIC_LdStLDU
  { 0, 0, 0, 0, 0 }, // 25 IIC_LdStLDUX
  { 1, 108, 109, 0, 0 }, // 26 IIC_LdStLFD
  { 1, 108, 109, 0, 0 }, // 27 IIC_LdStLFDU
  { 1, 108, 109, 0, 0 }, // 28 IIC_LdStLFDUX
  { 1, 108, 109, 0, 0 }, // 29 IIC_LdStLHA
  { 1, 108, 109, 0, 0 }, // 30 IIC_LdStLHAU
  { 1, 108, 109, 0, 0 }, // 31 IIC_LdStLHAUX
  { 1, 114, 115, 0, 0 }, // 32 IIC_LdStLMW
  { 0, 0, 0, 0, 0 }, // 33 IIC_LdStLWA
  { 1, 115, 116, 0, 0 }, // 34 IIC_LdStLWARX
  { 1, 107, 108, 0, 0 }, // 35 IIC_BrMCR
  { 1, 107, 108, 0, 0 }, // 36 IIC_SprMFCR
  { 1, 116, 117, 0, 0 }, // 37 IIC_SprMFSPR
  { 1, 117, 118, 0, 0 }, // 38 IIC_IntMFFS
  { 1, 107, 108, 0, 0 }, // 39 IIC_SprMFMSR
  { 0, 0, 0, 0, 0 }, // 40 IIC_SprMFCRF
  { 1, 107, 108, 0, 0 }, // 41 IIC_SprMFTB
  { 1, 108, 109, 0, 0 }, // 42 IIC_LdStStore
  { 1, 118, 119, 0, 0 }, // 43 IIC_LdStSync
  { 1, 107, 108, 0, 0 }, // 44 IIC_BrMCRX
  { 1, 113, 114, 0, 0 }, // 45 IIC_SprMTSPR
  { 1, 117, 118, 0, 0 }, // 46 IIC_IntMTFSB0
  { 1, 107, 108, 0, 0 }, // 47 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 48 IIC_SprMTMSRD
  { 1, 119, 120, 0, 0 }, // 49 IIC_IntMulHW
  { 1, 120, 121, 0, 0 }, // 50 IIC_IntMulHWU
  { 0, 0, 0, 0, 0 }, // 51 IIC_IntMulHD
  { 1, 121, 122, 0, 0 }, // 52 IIC_IntMulLI
  { 0, 0, 0, 0, 0 }, // 53 IIC_IntRotateD
  { 0, 0, 0, 0, 0 }, // 54 IIC_IntRotateDI
  { 1, 105, 106, 0, 0 }, // 55 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 56 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 57 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 58 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 59 IIC_SprSLBMTE
  { 1, 105, 106, 0, 0 }, // 60 IIC_IntShift
  { 1, 108, 109, 0, 0 }, // 61 IIC_LdStStoreUpd
  { 0, 0, 0, 0, 0 }, // 62 IIC_LdStSTD
  { 0, 0, 0, 0, 0 }, // 63 IIC_LdStSTDCX
  { 0, 0, 0, 0, 0 }, // 64 IIC_LdStSTDU
  { 0, 0, 0, 0, 0 }, // 65 IIC_LdStSTDUX
  { 1, 108, 109, 0, 0 }, // 66 IIC_LdStSTFD
  { 1, 108, 109, 0, 0 }, // 67 IIC_LdStSTFDU
  { 1, 122, 123, 0, 0 }, // 68 IIC_LdStSTWCX
  { 0, 0, 0, 0, 0 }, // 69 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 70 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 71 IIC_SprTLBIEL
  { 1, 123, 124, 0, 0 }, // 72 IIC_SprTLBSYNC
  { 1, 124, 125, 0, 0 }, // 73 IIC_IntTrapW
  { 1, 125, 126, 0, 0 }, // 74 IIC_VecFP
  { 1, 126, 127, 0, 0 }, // 75 IIC_VecGeneral
  { 1, 126, 127, 0, 0 }, // 76 IIC_VecFPCompare
  { 1, 127, 128, 0, 0 }, // 77 IIC_VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary G4PlusItineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 128, 129, 0, 0 }, // 1 IIC_IntSimple
  { 1, 128, 129, 0, 0 }, // 2 IIC_IntGeneral
  { 1, 129, 130, 0, 0 }, // 3 IIC_BrB
  { 1, 128, 129, 0, 0 }, // 4 IIC_IntCompare
  { 1, 130, 131, 0, 0 }, // 5 IIC_BrCR
  { 1, 131, 132, 0, 0 }, // 6 IIC_LdStDCBF
  { 0, 0, 0, 0, 0 }, // 7 IIC_IntDivD
  { 1, 132, 133, 0, 0 }, // 8 IIC_IntDivW
  { 1, 131, 132, 0, 0 }, // 9 IIC_LdStLoad
  { 1, 133, 134, 0, 0 }, // 10 IIC_FPGeneral
  { 1, 133, 134, 0, 0 }, // 11 IIC_FPAddSub
  { 1, 133, 134, 0, 0 }, // 12 IIC_FPCompare
  { 1, 134, 135, 0, 0 }, // 13 IIC_FPDivD
  { 1, 135, 136, 0, 0 }, // 14 IIC_FPDivS
  { 1, 133, 134, 0, 0 }, // 15 IIC_FPFused
  { 0, 0, 0, 0, 0 }, // 16 IIC_FPSqrtD
  { 0, 0, 0, 0, 0 }, // 17 IIC_FPSqrtS
  { 1, 136, 137, 0, 0 }, // 18 IIC_LdStICBI
  { 1, 137, 138, 0, 0 }, // 19 IIC_SprISYNC
  { 1, 131, 132, 0, 0 }, // 20 IIC_LdStLoadUpd
  { 1, 131, 132, 0, 0 }, // 21 IIC_LdStLoadUpdX
  { 0, 0, 0, 0, 0 }, // 22 IIC_LdStLD
  { 0, 0, 0, 0, 0 }, // 23 IIC_LdStLDARX
  { 0, 0, 0, 0, 0 }, // 24 IIC_LdStLDU
  { 0, 0, 0, 0, 0 }, // 25 IIC_LdStLDUX
  { 1, 138, 139, 0, 0 }, // 26 IIC_LdStLFD
  { 1, 138, 139, 0, 0 }, // 27 IIC_LdStLFDU
  { 1, 138, 139, 0, 0 }, // 28 IIC_LdStLFDUX
  { 1, 131, 132, 0, 0 }, // 29 IIC_LdStLHA
  { 1, 131, 132, 0, 0 }, // 30 IIC_LdStLHAU
  { 1, 131, 132, 0, 0 }, // 31 IIC_LdStLHAUX
  { 1, 139, 140, 0, 0 }, // 32 IIC_LdStLMW
  { 1, 131, 132, 0, 0 }, // 33 IIC_LdStLWA
  { 1, 131, 132, 0, 0 }, // 34 IIC_LdStLWARX
  { 1, 130, 131, 0, 0 }, // 35 IIC_BrMCR
  { 1, 130, 131, 0, 0 }, // 36 IIC_SprMFCR
  { 1, 140, 141, 0, 0 }, // 37 IIC_SprMFSPR
  { 1, 133, 134, 0, 0 }, // 38 IIC_IntMFFS
  { 1, 136, 137, 0, 0 }, // 39 IIC_SprMFMSR
  { 0, 0, 0, 0, 0 }, // 40 IIC_SprMFCRF
  { 1, 141, 142, 0, 0 }, // 41 IIC_SprMFTB
  { 1, 131, 132, 0, 0 }, // 42 IIC_LdStStore
  { 1, 142, 143, 0, 0 }, // 43 IIC_LdStSync
  { 1, 130, 131, 0, 0 }, // 44 IIC_BrMCRX
  { 1, 130, 131, 0, 0 }, // 45 IIC_SprMTSPR
  { 1, 133, 134, 0, 0 }, // 46 IIC_IntMTFSB0
  { 1, 130, 131, 0, 0 }, // 47 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 48 IIC_SprMTMSRD
  { 1, 140, 141, 0, 0 }, // 49 IIC_IntMulHW
  { 1, 140, 141, 0, 0 }, // 50 IIC_IntMulHWU
  { 0, 0, 0, 0, 0 }, // 51 IIC_IntMulHD
  { 1, 136, 137, 0, 0 }, // 52 IIC_IntMulLI
  { 0, 0, 0, 0, 0 }, // 53 IIC_IntRotateD
  { 0, 0, 0, 0, 0 }, // 54 IIC_IntRotateDI
  { 1, 128, 129, 0, 0 }, // 55 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 56 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 57 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 58 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 59 IIC_SprSLBMTE
  { 1, 143, 144, 0, 0 }, // 60 IIC_IntShift
  { 1, 131, 132, 0, 0 }, // 61 IIC_LdStStoreUpd
  { 1, 131, 132, 0, 0 }, // 62 IIC_LdStSTD
  { 1, 131, 132, 0, 0 }, // 63 IIC_LdStSTDCX
  { 1, 131, 132, 0, 0 }, // 64 IIC_LdStSTDU
  { 1, 131, 132, 0, 0 }, // 65 IIC_LdStSTDUX
  { 1, 131, 132, 0, 0 }, // 66 IIC_LdStSTFD
  { 1, 131, 132, 0, 0 }, // 67 IIC_LdStSTFDU
  { 1, 131, 132, 0, 0 }, // 68 IIC_LdStSTWCX
  { 0, 0, 0, 0, 0 }, // 69 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 70 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 71 IIC_SprTLBIEL
  { 1, 131, 132, 0, 0 }, // 72 IIC_SprTLBSYNC
  { 1, 143, 144, 0, 0 }, // 73 IIC_IntTrapW
  { 1, 144, 145, 0, 0 }, // 74 IIC_VecFP
  { 1, 145, 146, 0, 0 }, // 75 IIC_VecGeneral
  { 1, 146, 147, 0, 0 }, // 76 IIC_VecFPCompare
  { 1, 147, 148, 0, 0 }, // 77 IIC_VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary G5Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 148, 149, 0, 0 }, // 1 IIC_IntSimple
  { 1, 148, 149, 0, 0 }, // 2 IIC_IntGeneral
  { 1, 149, 150, 0, 0 }, // 3 IIC_BrB
  { 1, 150, 151, 0, 0 }, // 4 IIC_IntCompare
  { 1, 151, 152, 0, 0 }, // 5 IIC_BrCR
  { 1, 152, 153, 0, 0 }, // 6 IIC_LdStDCBF
  { 1, 153, 154, 0, 0 }, // 7 IIC_IntDivD
  { 1, 154, 155, 0, 0 }, // 8 IIC_IntDivW
  { 1, 152, 153, 0, 0 }, // 9 IIC_LdStLoad
  { 1, 155, 156, 0, 0 }, // 10 IIC_FPGeneral
  { 1, 155, 156, 0, 0 }, // 11 IIC_FPAddSub
  { 1, 156, 157, 0, 0 }, // 12 IIC_FPCompare
  { 1, 157, 158, 0, 0 }, // 13 IIC_FPDivD
  { 1, 157, 158, 0, 0 }, // 14 IIC_FPDivS
  { 1, 155, 156, 0, 0 }, // 15 IIC_FPFused
  { 1, 158, 159, 0, 0 }, // 16 IIC_FPSqrtD
  { 1, 158, 159, 0, 0 }, // 17 IIC_FPSqrtS
  { 1, 159, 160, 0, 0 }, // 18 IIC_LdStICBI
  { 1, 159, 160, 0, 0 }, // 19 IIC_SprISYNC
  { 1, 152, 153, 0, 0 }, // 20 IIC_LdStLoadUpd
  { 1, 152, 153, 0, 0 }, // 21 IIC_LdStLoadUpdX
  { 1, 152, 153, 0, 0 }, // 22 IIC_LdStLD
  { 1, 160, 161, 0, 0 }, // 23 IIC_LdStLDARX
  { 1, 152, 153, 0, 0 }, // 24 IIC_LdStLDU
  { 1, 152, 153, 0, 0 }, // 25 IIC_LdStLDUX
  { 1, 152, 153, 0, 0 }, // 26 IIC_LdStLFD
  { 1, 161, 162, 0, 0 }, // 27 IIC_LdStLFDU
  { 1, 161, 162, 0, 0 }, // 28 IIC_LdStLFDUX
  { 1, 161, 162, 0, 0 }, // 29 IIC_LdStLHA
  { 1, 161, 162, 0, 0 }, // 30 IIC_LdStLHAU
  { 1, 161, 162, 0, 0 }, // 31 IIC_LdStLHAUX
  { 1, 162, 163, 0, 0 }, // 32 IIC_LdStLMW
  { 1, 161, 162, 0, 0 }, // 33 IIC_LdStLWA
  { 1, 160, 161, 0, 0 }, // 34 IIC_LdStLWARX
  { 1, 163, 164, 0, 0 }, // 35 IIC_BrMCR
  { 1, 164, 165, 0, 0 }, // 36 IIC_SprMFCR
  { 1, 165, 166, 0, 0 }, // 37 IIC_SprMFSPR
  { 1, 166, 167, 0, 0 }, // 38 IIC_IntMFFS
  { 1, 165, 166, 0, 0 }, // 39 IIC_SprMFMSR
  { 1, 164, 165, 0, 0 }, // 40 IIC_SprMFCRF
  { 1, 167, 168, 0, 0 }, // 41 IIC_SprMFTB
  { 1, 152, 153, 0, 0 }, // 42 IIC_LdStStore
  { 1, 168, 169, 0, 0 }, // 43 IIC_LdStSync
  { 1, 169, 170, 0, 0 }, // 44 IIC_BrMCRX
  { 1, 170, 171, 0, 0 }, // 45 IIC_SprMTSPR
  { 1, 155, 156, 0, 0 }, // 46 IIC_IntMTFSB0
  { 1, 152, 153, 0, 0 }, // 47 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 48 IIC_SprMTMSRD
  { 1, 171, 172, 0, 0 }, // 49 IIC_IntMulHW
  { 1, 171, 172, 0, 0 }, // 50 IIC_IntMulHWU
  { 1, 172, 173, 0, 0 }, // 51 IIC_IntMulHD
  { 1, 173, 174, 0, 0 }, // 52 IIC_IntMulLI
  { 1, 148, 149, 0, 0 }, // 53 IIC_IntRotateD
  { 1, 148, 149, 0, 0 }, // 54 IIC_IntRotateDI
  { 1, 173, 174, 0, 0 }, // 55 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 56 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 57 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 58 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 59 IIC_SprSLBMTE
  { 1, 148, 149, 0, 0 }, // 60 IIC_IntShift
  { 1, 152, 153, 0, 0 }, // 61 IIC_LdStStoreUpd
  { 1, 152, 153, 0, 0 }, // 62 IIC_LdStSTD
  { 1, 160, 161, 0, 0 }, // 63 IIC_LdStSTDCX
  { 1, 152, 153, 0, 0 }, // 64 IIC_LdStSTDU
  { 1, 152, 153, 0, 0 }, // 65 IIC_LdStSTDUX
  { 1, 174, 175, 0, 0 }, // 66 IIC_LdStSTFD
  { 1, 174, 175, 0, 0 }, // 67 IIC_LdStSTFDU
  { 1, 160, 161, 0, 0 }, // 68 IIC_LdStSTWCX
  { 1, 175, 176, 0, 0 }, // 69 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 70 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 71 IIC_SprTLBIEL
  { 1, 152, 153, 0, 0 }, // 72 IIC_SprTLBSYNC
  { 1, 175, 176, 0, 0 }, // 73 IIC_IntTrapW
  { 1, 176, 177, 0, 0 }, // 74 IIC_VecFP
  { 1, 177, 178, 0, 0 }, // 75 IIC_VecGeneral
  { 1, 178, 179, 0, 0 }, // 76 IIC_VecFPCompare
  { 1, 179, 180, 0, 0 }, // 77 IIC_VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary PPCA2Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 180, 181, 151, 154 }, // 1 IIC_IntSimple
  { 1, 180, 181, 154, 157 }, // 2 IIC_IntGeneral
  { 1, 180, 181, 157, 160 }, // 3 IIC_BrB
  { 1, 180, 181, 160, 163 }, // 4 IIC_IntCompare
  { 1, 180, 181, 163, 166 }, // 5 IIC_BrCR
  { 1, 180, 181, 166, 169 }, // 6 IIC_LdStDCBF
  { 1, 180, 181, 169, 172 }, // 7 IIC_IntDivD
  { 1, 180, 181, 172, 175 }, // 8 IIC_IntDivW
  { 1, 180, 181, 175, 178 }, // 9 IIC_LdStLoad
  { 1, 181, 182, 178, 181 }, // 10 IIC_FPGeneral
  { 1, 181, 182, 181, 184 }, // 11 IIC_FPAddSub
  { 1, 181, 182, 184, 187 }, // 12 IIC_FPCompare
  { 1, 181, 182, 187, 190 }, // 13 IIC_FPDivD
  { 1, 181, 182, 190, 193 }, // 14 IIC_FPDivS
  { 1, 181, 182, 193, 197 }, // 15 IIC_FPFused
  { 1, 181, 182, 197, 200 }, // 16 IIC_FPSqrtD
  { 1, 181, 182, 200, 203 }, // 17 IIC_FPSqrtS
  { 1, 180, 181, 203, 206 }, // 18 IIC_LdStICBI
  { 1, 180, 181, 206, 207 }, // 19 IIC_SprISYNC
  { 1, 180, 181, 207, 211 }, // 20 IIC_LdStLoadUpd
  { 1, 180, 181, 211, 215 }, // 21 IIC_LdStLoadUpdX
  { 0, 0, 0, 0, 0 }, // 22 IIC_LdStLD
  { 0, 0, 0, 0, 0 }, // 23 IIC_LdStLDARX
  { 1, 180, 181, 215, 218 }, // 24 IIC_LdStLDU
  { 1, 180, 181, 218, 221 }, // 25 IIC_LdStLDUX
  { 1, 180, 181, 221, 224 }, // 26 IIC_LdStLFD
  { 1, 180, 181, 224, 228 }, // 27 IIC_LdStLFDU
  { 1, 180, 181, 228, 232 }, // 28 IIC_LdStLFDUX
  { 1, 180, 181, 232, 235 }, // 29 IIC_LdStLHA
  { 1, 180, 181, 235, 239 }, // 30 IIC_LdStLHAU
  { 1, 180, 181, 239, 243 }, // 31 IIC_LdStLHAUX
  { 0, 0, 0, 0, 0 }, // 32 IIC_LdStLMW
  { 0, 0, 0, 0, 0 }, // 33 IIC_LdStLWA
  { 1, 180, 181, 243, 246 }, // 34 IIC_LdStLWARX
  { 1, 180, 181, 246, 249 }, // 35 IIC_BrMCR
  { 1, 180, 181, 249, 251 }, // 36 IIC_SprMFCR
  { 1, 180, 181, 251, 253 }, // 37 IIC_SprMFSPR
  { 0, 0, 0, 0, 0 }, // 38 IIC_IntMFFS
  { 1, 180, 181, 253, 255 }, // 39 IIC_SprMFMSR
  { 1, 180, 181, 255, 257 }, // 40 IIC_SprMFCRF
  { 1, 180, 181, 257, 259 }, // 41 IIC_SprMFTB
  { 1, 180, 181, 259, 262 }, // 42 IIC_LdStStore
  { 1, 180, 181, 262, 263 }, // 43 IIC_LdStSync
  { 1, 180, 181, 263, 266 }, // 44 IIC_BrMCRX
  { 1, 180, 181, 266, 268 }, // 45 IIC_SprMTSPR
  { 0, 0, 0, 0, 0 }, // 46 IIC_IntMTFSB0
  { 1, 180, 181, 268, 270 }, // 47 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 48 IIC_SprMTMSRD
  { 1, 180, 181, 270, 273 }, // 49 IIC_IntMulHW
  { 1, 180, 181, 273, 276 }, // 50 IIC_IntMulHWU
  { 0, 0, 0, 0, 0 }, // 51 IIC_IntMulHD
  { 1, 180, 181, 276, 279 }, // 52 IIC_IntMulLI
  { 1, 180, 181, 279, 282 }, // 53 IIC_IntRotateD
  { 1, 180, 181, 282, 285 }, // 54 IIC_IntRotateDI
  { 1, 180, 181, 285, 288 }, // 55 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 56 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 57 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 58 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 59 IIC_SprSLBMTE
  { 1, 180, 181, 288, 291 }, // 60 IIC_IntShift
  { 1, 180, 181, 291, 295 }, // 61 IIC_LdStStoreUpd
  { 1, 180, 181, 295, 298 }, // 62 IIC_LdStSTD
  { 1, 180, 181, 298, 301 }, // 63 IIC_LdStSTDCX
  { 1, 180, 181, 301, 305 }, // 64 IIC_LdStSTDU
  { 1, 180, 181, 305, 309 }, // 65 IIC_LdStSTDUX
  { 1, 180, 181, 309, 312 }, // 66 IIC_LdStSTFD
  { 1, 180, 181, 312, 316 }, // 67 IIC_LdStSTFDU
  { 1, 180, 181, 316, 319 }, // 68 IIC_LdStSTWCX
  { 1, 180, 181, 319, 321 }, // 69 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 70 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 71 IIC_SprTLBIEL
  { 0, 0, 0, 0, 0 }, // 72 IIC_SprTLBSYNC
  { 1, 180, 181, 321, 323 }, // 73 IIC_IntTrapW
  { 0, 0, 0, 0, 0 }, // 74 IIC_VecFP
  { 0, 0, 0, 0, 0 }, // 75 IIC_VecGeneral
  { 0, 0, 0, 0, 0 }, // 76 IIC_VecFPCompare
  { 0, 0, 0, 0, 0 }, // 77 IIC_VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary PPCE500mcItineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 182, 184, 323, 326 }, // 1 IIC_IntSimple
  { 1, 182, 184, 326, 329 }, // 2 IIC_IntGeneral
  { 1, 184, 186, 329, 331 }, // 3 IIC_BrB
  { 1, 182, 184, 331, 334 }, // 4 IIC_IntCompare
  { 1, 184, 186, 334, 337 }, // 5 IIC_BrCR
  { 1, 186, 188, 337, 339 }, // 6 IIC_LdStDCBF
  { 0, 0, 0, 0, 0 }, // 7 IIC_IntDivD
  { 1, 188, 191, 339, 342 }, // 8 IIC_IntDivW
  { 1, 186, 188, 342, 344 }, // 9 IIC_LdStLoad
  { 1, 191, 193, 344, 347 }, // 10 IIC_FPGeneral
  { 1, 193, 195, 347, 350 }, // 11 IIC_FPAddSub
  { 1, 191, 193, 350, 353 }, // 12 IIC_FPCompare
  { 1, 195, 197, 353, 356 }, // 13 IIC_FPDivD
  { 1, 197, 199, 356, 359 }, // 14 IIC_FPDivS
  { 1, 193, 195, 359, 363 }, // 15 IIC_FPFused
  { 0, 0, 0, 0, 0 }, // 16 IIC_FPSqrtD
  { 0, 0, 0, 0, 0 }, // 17 IIC_FPSqrtS
  { 1, 186, 188, 363, 365 }, // 18 IIC_LdStICBI
  { 0, 0, 0, 0, 0 }, // 19 IIC_SprISYNC
  { 2, 199, 202, 365, 367 }, // 20 IIC_LdStLoadUpd
  { 2, 199, 202, 367, 369 }, // 21 IIC_LdStLoadUpdX
  { 0, 0, 0, 0, 0 }, // 22 IIC_LdStLD
  { 0, 0, 0, 0, 0 }, // 23 IIC_LdStLDARX
  { 0, 0, 0, 0, 0 }, // 24 IIC_LdStLDU
  { 0, 0, 0, 0, 0 }, // 25 IIC_LdStLDUX
  { 1, 186, 188, 369, 372 }, // 26 IIC_LdStLFD
  { 2, 199, 202, 372, 375 }, // 27 IIC_LdStLFDU
  { 2, 199, 202, 375, 378 }, // 28 IIC_LdStLFDUX
  { 1, 186, 188, 378, 380 }, // 29 IIC_LdStLHA
  { 1, 199, 202, 380, 382 }, // 30 IIC_LdStLHAU
  { 1, 199, 202, 382, 384 }, // 31 IIC_LdStLHAUX
  { 1, 186, 188, 384, 386 }, // 32 IIC_LdStLMW
  { 0, 0, 0, 0, 0 }, // 33 IIC_LdStLWA
  { 1, 202, 204, 386, 389 }, // 34 IIC_LdStLWARX
  { 1, 184, 186, 389, 391 }, // 35 IIC_BrMCR
  { 1, 204, 206, 391, 393 }, // 36 IIC_SprMFCR
  { 1, 182, 184, 393, 395 }, // 37 IIC_SprMFSPR
  { 1, 206, 208, 395, 396 }, // 38 IIC_IntMFFS
  { 1, 208, 210, 396, 398 }, // 39 IIC_SprMFMSR
  { 1, 204, 206, 398, 400 }, // 40 IIC_SprMFCRF
  { 1, 208, 210, 400, 402 }, // 41 IIC_SprMFTB
  { 1, 186, 188, 402, 404 }, // 42 IIC_LdStStore
  { 1, 186, 188, 0, 0 }, // 43 IIC_LdStSync
  { 1, 182, 184, 404, 407 }, // 44 IIC_BrMCRX
  { 1, 182, 184, 407, 409 }, // 45 IIC_SprMTSPR
  { 1, 206, 208, 409, 412 }, // 46 IIC_IntMTFSB0
  { 1, 210, 212, 412, 414 }, // 47 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 48 IIC_SprMTMSRD
  { 1, 212, 214, 414, 417 }, // 49 IIC_IntMulHW
  { 1, 212, 214, 417, 420 }, // 50 IIC_IntMulHWU
  { 0, 0, 0, 0, 0 }, // 51 IIC_IntMulHD
  { 1, 212, 214, 420, 423 }, // 52 IIC_IntMulLI
  { 0, 0, 0, 0, 0 }, // 53 IIC_IntRotateD
  { 0, 0, 0, 0, 0 }, // 54 IIC_IntRotateDI
  { 1, 182, 184, 423, 426 }, // 55 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 56 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 57 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 58 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 59 IIC_SprSLBMTE
  { 1, 182, 184, 426, 429 }, // 60 IIC_IntShift
  { 2, 199, 202, 429, 431 }, // 61 IIC_LdStStoreUpd
  { 0, 0, 0, 0, 0 }, // 62 IIC_LdStSTD
  { 0, 0, 0, 0, 0 }, // 63 IIC_LdStSTDCX
  { 0, 0, 0, 0, 0 }, // 64 IIC_LdStSTDU
  { 0, 0, 0, 0, 0 }, // 65 IIC_LdStSTDUX
  { 1, 186, 188, 431, 434 }, // 66 IIC_LdStSTFD
  { 2, 199, 202, 434, 437 }, // 67 IIC_LdStSTFDU
  { 1, 186, 188, 437, 439 }, // 68 IIC_LdStSTWCX
  { 0, 0, 0, 0, 0 }, // 69 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 70 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 71 IIC_SprTLBIEL
  { 1, 214, 216, 0, 0 }, // 72 IIC_SprTLBSYNC
  { 1, 216, 218, 439, 441 }, // 73 IIC_IntTrapW
  { 0, 0, 0, 0, 0 }, // 74 IIC_VecFP
  { 0, 0, 0, 0, 0 }, // 75 IIC_VecGeneral
  { 0, 0, 0, 0, 0 }, // 76 IIC_VecFPCompare
  { 0, 0, 0, 0, 0 }, // 77 IIC_VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary PPCE5500Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 218, 220, 441, 444 }, // 1 IIC_IntSimple
  { 1, 218, 220, 444, 447 }, // 2 IIC_IntGeneral
  { 1, 220, 222, 447, 449 }, // 3 IIC_BrB
  { 1, 218, 220, 449, 452 }, // 4 IIC_IntCompare
  { 1, 220, 222, 452, 455 }, // 5 IIC_BrCR
  { 1, 222, 224, 455, 457 }, // 6 IIC_LdStDCBF
  { 1, 224, 227, 457, 460 }, // 7 IIC_IntDivD
  { 1, 227, 230, 460, 463 }, // 8 IIC_IntDivW
  { 1, 222, 224, 463, 465 }, // 9 IIC_LdStLoad
  { 1, 230, 232, 465, 468 }, // 10 IIC_FPGeneral
  { 1, 230, 232, 468, 471 }, // 11 IIC_FPAddSub
  { 1, 230, 232, 471, 474 }, // 12 IIC_FPCompare
  { 1, 232, 234, 474, 477 }, // 13 IIC_FPDivD
  { 1, 234, 236, 477, 480 }, // 14 IIC_FPDivS
  { 1, 230, 232, 480, 484 }, // 15 IIC_FPFused
  { 0, 0, 0, 0, 0 }, // 16 IIC_FPSqrtD
  { 0, 0, 0, 0, 0 }, // 17 IIC_FPSqrtS
  { 1, 222, 224, 484, 486 }, // 18 IIC_LdStICBI
  { 0, 0, 0, 0, 0 }, // 19 IIC_SprISYNC
  { 2, 236, 239, 486, 488 }, // 20 IIC_LdStLoadUpd
  { 2, 236, 239, 488, 490 }, // 21 IIC_LdStLoadUpdX
  { 1, 222, 224, 490, 492 }, // 22 IIC_LdStLD
  { 1, 239, 241, 492, 494 }, // 23 IIC_LdStLDARX
  { 2, 236, 239, 494, 496 }, // 24 IIC_LdStLDU
  { 2, 236, 239, 496, 498 }, // 25 IIC_LdStLDUX
  { 2, 222, 224, 498, 501 }, // 26 IIC_LdStLFD
  { 2, 236, 239, 501, 504 }, // 27 IIC_LdStLFDU
  { 2, 236, 239, 504, 507 }, // 28 IIC_LdStLFDUX
  { 1, 222, 224, 507, 509 }, // 29 IIC_LdStLHA
  { 2, 236, 239, 509, 511 }, // 30 IIC_LdStLHAU
  { 2, 236, 239, 511, 513 }, // 31 IIC_LdStLHAUX
  { 1, 241, 243, 513, 515 }, // 32 IIC_LdStLMW
  { 0, 0, 0, 0, 0 }, // 33 IIC_LdStLWA
  { 1, 239, 241, 515, 518 }, // 34 IIC_LdStLWARX
  { 1, 220, 222, 518, 520 }, // 35 IIC_BrMCR
  { 1, 243, 245, 520, 522 }, // 36 IIC_SprMFCR
  { 1, 245, 247, 522, 523 }, // 37 IIC_SprMFSPR
  { 1, 230, 232, 523, 524 }, // 38 IIC_IntMFFS
  { 1, 247, 249, 524, 526 }, // 39 IIC_SprMFMSR
  { 1, 243, 245, 526, 528 }, // 40 IIC_SprMFCRF
  { 1, 249, 251, 528, 530 }, // 41 IIC_SprMFTB
  { 1, 222, 224, 530, 532 }, // 42 IIC_LdStStore
  { 1, 222, 224, 0, 0 }, // 43 IIC_LdStSync
  { 1, 245, 247, 532, 535 }, // 44 IIC_BrMCRX
  { 1, 218, 220, 535, 536 }, // 45 IIC_SprMTSPR
  { 1, 251, 253, 536, 539 }, // 46 IIC_IntMTFSB0
  { 1, 253, 255, 539, 541 }, // 47 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 48 IIC_SprMTMSRD
  { 1, 255, 258, 541, 544 }, // 49 IIC_IntMulHW
  { 1, 255, 258, 544, 547 }, // 50 IIC_IntMulHWU
  { 1, 258, 261, 547, 550 }, // 51 IIC_IntMulHD
  { 1, 258, 261, 550, 553 }, // 52 IIC_IntMulLI
  { 1, 261, 263, 553, 556 }, // 53 IIC_IntRotateD
  { 1, 218, 220, 556, 559 }, // 54 IIC_IntRotateDI
  { 1, 218, 220, 559, 562 }, // 55 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 56 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 57 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 58 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 59 IIC_SprSLBMTE
  { 1, 261, 263, 562, 565 }, // 60 IIC_IntShift
  { 2, 236, 239, 565, 567 }, // 61 IIC_LdStStoreUpd
  { 1, 222, 224, 567, 569 }, // 62 IIC_LdStSTD
  { 1, 222, 224, 569, 571 }, // 63 IIC_LdStSTDCX
  { 2, 236, 239, 571, 573 }, // 64 IIC_LdStSTDU
  { 2, 236, 239, 573, 575 }, // 65 IIC_LdStSTDUX
  { 1, 222, 224, 575, 578 }, // 66 IIC_LdStSTFD
  { 2, 236, 239, 578, 581 }, // 67 IIC_LdStSTFDU
  { 1, 222, 224, 581, 583 }, // 68 IIC_LdStSTWCX
  { 0, 0, 0, 0, 0 }, // 69 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 70 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 71 IIC_SprTLBIEL
  { 1, 263, 265, 0, 0 }, // 72 IIC_SprTLBSYNC
  { 1, 265, 267, 583, 585 }, // 73 IIC_IntTrapW
  { 0, 0, 0, 0, 0 }, // 74 IIC_VecFP
  { 0, 0, 0, 0, 0 }, // 75 IIC_VecGeneral
  { 0, 0, 0, 0, 0 }, // 76 IIC_VecFPCompare
  { 0, 0, 0, 0, 0 }, // 77 IIC_VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary P7Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 267, 269, 585, 588 }, // 1 IIC_IntSimple
  { 1, 269, 271, 588, 591 }, // 2 IIC_IntGeneral
  { 1, 271, 273, 591, 594 }, // 3 IIC_BrB
  { 1, 269, 271, 594, 597 }, // 4 IIC_IntCompare
  { 1, 273, 275, 597, 600 }, // 5 IIC_BrCR
  { 0, 0, 0, 0, 0 }, // 6 IIC_LdStDCBF
  { 1, 275, 278, 600, 603 }, // 7 IIC_IntDivD
  { 1, 278, 281, 603, 606 }, // 8 IIC_IntDivW
  { 1, 281, 283, 606, 609 }, // 9 IIC_LdStLoad
  { 1, 283, 285, 609, 612 }, // 10 IIC_FPGeneral
  { 0, 0, 0, 0, 0 }, // 11 IIC_FPAddSub
  { 1, 283, 285, 612, 615 }, // 12 IIC_FPCompare
  { 1, 283, 285, 615, 618 }, // 13 IIC_FPDivD
  { 1, 283, 285, 618, 621 }, // 14 IIC_FPDivS
  { 1, 283, 285, 621, 625 }, // 15 IIC_FPFused
  { 1, 283, 285, 625, 628 }, // 16 IIC_FPSqrtD
  { 1, 283, 285, 628, 631 }, // 17 IIC_FPSqrtS
  { 0, 0, 0, 0, 0 }, // 18 IIC_LdStICBI
  { 0, 0, 0, 0, 0 }, // 19 IIC_SprISYNC
  { 1, 285, 289, 631, 635 }, // 20 IIC_LdStLoadUpd
  { 1, 289, 296, 635, 639 }, // 21 IIC_LdStLoadUpdX
  { 1, 281, 283, 639, 642 }, // 22 IIC_LdStLD
  { 1, 296, 301, 642, 645 }, // 23 IIC_LdStLDARX
  { 1, 285, 289, 645, 649 }, // 24 IIC_LdStLDU
  { 1, 289, 296, 649, 653 }, // 25 IIC_LdStLDUX
  { 1, 281, 283, 653, 656 }, // 26 IIC_LdStLFD
  { 1, 285, 289, 656, 660 }, // 27 IIC_LdStLFDU
  { 1, 285, 289, 660, 664 }, // 28 IIC_LdStLFDUX
  { 1, 301, 305, 664, 667 }, // 29 IIC_LdStLHA
  { 1, 305, 310, 667, 671 }, // 30 IIC_LdStLHAU
  { 1, 310, 318, 671, 675 }, // 31 IIC_LdStLHAUX
  { 1, 281, 283, 675, 678 }, // 32 IIC_LdStLMW
  { 1, 301, 305, 678, 681 }, // 33 IIC_LdStLWA
  { 1, 296, 301, 681, 684 }, // 34 IIC_LdStLWARX
  { 1, 271, 273, 684, 687 }, // 35 IIC_BrMCR
  { 1, 273, 275, 687, 689 }, // 36 IIC_SprMFCR
  { 0, 0, 0, 0, 0 }, // 37 IIC_SprMFSPR
  { 0, 0, 0, 0, 0 }, // 38 IIC_IntMFFS
  { 0, 0, 0, 0, 0 }, // 39 IIC_SprMFMSR
  { 1, 273, 275, 689, 691 }, // 40 IIC_SprMFCRF
  { 0, 0, 0, 0, 0 }, // 41 IIC_SprMFTB
  { 1, 318, 321, 691, 694 }, // 42 IIC_LdStStore
  { 0, 0, 0, 0, 0 }, // 43 IIC_LdStSync
  { 1, 321, 327, 694, 696 }, // 44 IIC_BrMCRX
  { 1, 327, 329, 696, 698 }, // 45 IIC_SprMTSPR
  { 0, 0, 0, 0, 0 }, // 46 IIC_IntMTFSB0
  { 0, 0, 0, 0, 0 }, // 47 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 48 IIC_SprMTMSRD
  { 1, 269, 271, 698, 701 }, // 49 IIC_IntMulHW
  { 1, 269, 271, 701, 704 }, // 50 IIC_IntMulHWU
  { 0, 0, 0, 0, 0 }, // 51 IIC_IntMulHD
  { 1, 269, 271, 704, 707 }, // 52 IIC_IntMulLI
  { 1, 269, 271, 707, 710 }, // 53 IIC_IntRotateD
  { 0, 0, 0, 0, 0 }, // 54 IIC_IntRotateDI
  { 1, 269, 271, 710, 713 }, // 55 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 56 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 57 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 58 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 59 IIC_SprSLBMTE
  { 1, 269, 271, 713, 716 }, // 60 IIC_IntShift
  { 0, 0, 0, 0, 0 }, // 61 IIC_LdStStoreUpd
  { 1, 318, 321, 716, 719 }, // 62 IIC_LdStSTD
  { 1, 296, 301, 719, 722 }, // 63 IIC_LdStSTDCX
  { 1, 305, 310, 722, 726 }, // 64 IIC_LdStSTDU
  { 1, 329, 336, 726, 730 }, // 65 IIC_LdStSTDUX
  { 1, 336, 339, 730, 733 }, // 66 IIC_LdStSTFD
  { 1, 339, 344, 733, 737 }, // 67 IIC_LdStSTFDU
  { 1, 296, 301, 737, 740 }, // 68 IIC_LdStSTWCX
  { 1, 269, 271, 740, 742 }, // 69 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 70 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 71 IIC_SprTLBIEL
  { 0, 0, 0, 0, 0 }, // 72 IIC_SprTLBSYNC
  { 1, 269, 271, 742, 744 }, // 73 IIC_IntTrapW
  { 1, 344, 346, 744, 747 }, // 74 IIC_VecFP
  { 1, 346, 348, 747, 750 }, // 75 IIC_VecGeneral
  { 1, 344, 346, 750, 753 }, // 76 IIC_VecFPCompare
  { 1, 348, 350, 753, 756 }, // 77 IIC_VecPerm
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry PPCWriteProcResTable[] = {
  { 0,  0}, // Invalid
}; // PPCWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry PPCWriteLatencyTable[] = {
  { 0,  0}, // Invalid
}; // PPCWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry PPCReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // PPCReadAdvanceTable

static const llvm::MCSchedModel NoSchedModel(
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  0, // PostRAScheduler
  1, // CompleteModel
  0, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  NoItineraries);

static const llvm::MCSchedModel PPC440Model(
  2, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  5, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  0, // PostRAScheduler
  1, // CompleteModel
  1, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  PPC440Itineraries);

static const llvm::MCSchedModel G3ItinerariesModel(
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  0, // PostRAScheduler
  1, // CompleteModel
  2, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  G3Itineraries);

static const llvm::MCSchedModel G4ItinerariesModel(
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  0, // PostRAScheduler
  1, // CompleteModel
  3, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  G4Itineraries);

static const llvm::MCSchedModel G4PlusItinerariesModel(
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  0, // PostRAScheduler
  1, // CompleteModel
  4, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  G4PlusItineraries);

static const llvm::MCSchedModel G5Model(
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  3, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  16, // MispredictPenalty
  0, // PostRAScheduler
  1, // CompleteModel
  5, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  G5Itineraries);

static const llvm::MCSchedModel PPCA2Model(
  1, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  6, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  13, // MispredictPenalty
  0, // PostRAScheduler
  1, // CompleteModel
  6, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  PPCA2Itineraries);

static const llvm::MCSchedModel PPCE500mcModel(
  2, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  5, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  0, // PostRAScheduler
  1, // CompleteModel
  7, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  PPCE500mcItineraries);

static const llvm::MCSchedModel PPCE5500Model(
  2, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  6, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  0, // PostRAScheduler
  1, // CompleteModel
  8, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  PPCE5500Itineraries);

static const llvm::MCSchedModel P7Model(
  6, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  3, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  16, // MispredictPenalty
  0, // PostRAScheduler
  1, // CompleteModel
  9, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  P7Itineraries);

// Sorted (by key) array of itineraries for CPU subtype.
extern const llvm::SubtargetInfoKV PPCProcSchedKV[] = {
  { "440", (const void *)&PPC440Model },
  { "450", (const void *)&PPC440Model },
  { "601", (const void *)&G3ItinerariesModel },
  { "602", (const void *)&G3ItinerariesModel },
  { "603", (const void *)&G3ItinerariesModel },
  { "603e", (const void *)&G3ItinerariesModel },
  { "603ev", (const void *)&G3ItinerariesModel },
  { "604", (const void *)&G3ItinerariesModel },
  { "604e", (const void *)&G3ItinerariesModel },
  { "620", (const void *)&G3ItinerariesModel },
  { "7400", (const void *)&G4ItinerariesModel },
  { "7450", (const void *)&G4PlusItinerariesModel },
  { "750", (const void *)&G4ItinerariesModel },
  { "970", (const void *)&G5Model },
  { "a2", (const void *)&PPCA2Model },
  { "a2q", (const void *)&PPCA2Model },
  { "e500mc", (const void *)&PPCE500mcModel },
  { "e5500", (const void *)&PPCE5500Model },
  { "g3", (const void *)&G3ItinerariesModel },
  { "g4", (const void *)&G4ItinerariesModel },
  { "g4+", (const void *)&G4PlusItinerariesModel },
  { "g5", (const void *)&G5Model },
  { "generic", (const void *)&G3ItinerariesModel },
  { "ppc", (const void *)&G3ItinerariesModel },
  { "ppc64", (const void *)&G5Model },
  { "ppc64le", (const void *)&G5Model },
  { "pwr3", (const void *)&G5Model },
  { "pwr4", (const void *)&G5Model },
  { "pwr5", (const void *)&G5Model },
  { "pwr5x", (const void *)&G5Model },
  { "pwr6", (const void *)&G5Model },
  { "pwr6x", (const void *)&G5Model },
  { "pwr7", (const void *)&P7Model },
  { "pwr8", (const void *)&P7Model }
};
#undef DBGFIELD
static inline void InitPPCMCSubtargetInfo(MCSubtargetInfo *II, StringRef TT, StringRef CPU, StringRef FS) {
  II->InitMCSubtargetInfo(TT, CPU, FS, PPCFeatureKV, PPCSubTypeKV, 
                      PPCProcSchedKV, PPCWriteProcResTable, PPCWriteLatencyTable, PPCReadAdvanceTable, 
                      PPCStages, PPCOperandCycles, PPCForwardingPaths);
}

} // End llvm namespace 
#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC
#include "llvm/Support/Debug.h"
// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::PPCSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  uint64_t Bits = getFeatureBits();
  if ((Bits & PPC::DeprecatedDST) != 0) DeprecatedDST = true;
  if ((Bits & PPC::DeprecatedMFTB) != 0) DeprecatedMFTB = true;
  if ((Bits & PPC::Directive32) != 0 && DarwinDirective < PPC::DIR_32) DarwinDirective = PPC::DIR_32;
  if ((Bits & PPC::Directive64) != 0 && DarwinDirective < PPC::DIR_64) DarwinDirective = PPC::DIR_64;
  if ((Bits & PPC::Directive440) != 0 && DarwinDirective < PPC::DIR_440) DarwinDirective = PPC::DIR_440;
  if ((Bits & PPC::Directive601) != 0 && DarwinDirective < PPC::DIR_601) DarwinDirective = PPC::DIR_601;
  if ((Bits & PPC::Directive602) != 0 && DarwinDirective < PPC::DIR_602) DarwinDirective = PPC::DIR_602;
  if ((Bits & PPC::Directive603) != 0 && DarwinDirective < PPC::DIR_603) DarwinDirective = PPC::DIR_603;
  if ((Bits & PPC::Directive604) != 0 && DarwinDirective < PPC::DIR_603) DarwinDirective = PPC::DIR_603;
  if ((Bits & PPC::Directive620) != 0 && DarwinDirective < PPC::DIR_603) DarwinDirective = PPC::DIR_603;
  if ((Bits & PPC::Directive750) != 0 && DarwinDirective < PPC::DIR_750) DarwinDirective = PPC::DIR_750;
  if ((Bits & PPC::Directive970) != 0 && DarwinDirective < PPC::DIR_970) DarwinDirective = PPC::DIR_970;
  if ((Bits & PPC::Directive7400) != 0 && DarwinDirective < PPC::DIR_7400) DarwinDirective = PPC::DIR_7400;
  if ((Bits & PPC::DirectiveA2) != 0 && DarwinDirective < PPC::DIR_A2) DarwinDirective = PPC::DIR_A2;
  if ((Bits & PPC::DirectiveE500mc) != 0 && DarwinDirective < PPC::DIR_E500mc) DarwinDirective = PPC::DIR_E500mc;
  if ((Bits & PPC::DirectiveE5500) != 0 && DarwinDirective < PPC::DIR_E5500) DarwinDirective = PPC::DIR_E5500;
  if ((Bits & PPC::DirectivePwr3) != 0 && DarwinDirective < PPC::DIR_PWR3) DarwinDirective = PPC::DIR_PWR3;
  if ((Bits & PPC::DirectivePwr4) != 0 && DarwinDirective < PPC::DIR_PWR4) DarwinDirective = PPC::DIR_PWR4;
  if ((Bits & PPC::DirectivePwr5) != 0 && DarwinDirective < PPC::DIR_PWR5) DarwinDirective = PPC::DIR_PWR5;
  if ((Bits & PPC::DirectivePwr5x) != 0 && DarwinDirective < PPC::DIR_PWR5X) DarwinDirective = PPC::DIR_PWR5X;
  if ((Bits & PPC::DirectivePwr6) != 0 && DarwinDirective < PPC::DIR_PWR6) DarwinDirective = PPC::DIR_PWR6;
  if ((Bits & PPC::DirectivePwr6x) != 0 && DarwinDirective < PPC::DIR_PWR6X) DarwinDirective = PPC::DIR_PWR6X;
  if ((Bits & PPC::DirectivePwr7) != 0 && DarwinDirective < PPC::DIR_PWR7) DarwinDirective = PPC::DIR_PWR7;
  if ((Bits & PPC::DirectivePwr8) != 0 && DarwinDirective < PPC::DIR_PWR8) DarwinDirective = PPC::DIR_PWR8;
  if ((Bits & PPC::Feature64Bit) != 0) Has64BitSupport = true;
  if ((Bits & PPC::Feature64BitRegs) != 0) Use64BitRegs = true;
  if ((Bits & PPC::FeatureAltivec) != 0) HasAltivec = true;
  if ((Bits & PPC::FeatureBookE) != 0) IsBookE = true;
  if ((Bits & PPC::FeatureCRBits) != 0) UseCRBits = true;
  if ((Bits & PPC::FeatureFCPSGN) != 0) HasFCPSGN = true;
  if ((Bits & PPC::FeatureFPCVT) != 0) HasFPCVT = true;
  if ((Bits & PPC::FeatureFPRND) != 0) HasFPRND = true;
  if ((Bits & PPC::FeatureFRE) != 0) HasFRE = true;
  if ((Bits & PPC::FeatureFRES) != 0) HasFRES = true;
  if ((Bits & PPC::FeatureFRSQRTE) != 0) HasFRSQRTE = true;
  if ((Bits & PPC::FeatureFRSQRTES) != 0) HasFRSQRTES = true;
  if ((Bits & PPC::FeatureFSqrt) != 0) HasFSQRT = true;
  if ((Bits & PPC::FeatureISEL) != 0) HasISEL = true;
  if ((Bits & PPC::FeatureLDBRX) != 0) HasLDBRX = true;
  if ((Bits & PPC::FeatureLFIWAX) != 0) HasLFIWAX = true;
  if ((Bits & PPC::FeatureMFOCRF) != 0) HasMFOCRF = true;
  if ((Bits & PPC::FeaturePOPCNTD) != 0) HasPOPCNTD = true;
  if ((Bits & PPC::FeatureQPX) != 0) HasQPX = true;
  if ((Bits & PPC::FeatureRecipPrec) != 0) HasRecipPrec = true;
  if ((Bits & PPC::FeatureSTFIWX) != 0) HasSTFIWX = true;
  if ((Bits & PPC::FeatureVSX) != 0) HasVSX = true;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER
namespace llvm {
class DFAPacketizer;
struct PPCGenSubtargetInfo : public TargetSubtargetInfo {
  explicit PPCGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS);
public:
  unsigned resolveSchedClass(unsigned SchedClass, const MachineInstr *DefMI, const TargetSchedModel *SchedModel) const override;
  DFAPacketizer *createDFAPacketizer(const InstrItineraryData *IID) const;
};
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_HEADER


#ifdef GET_SUBTARGETINFO_CTOR
#undef GET_SUBTARGETINFO_CTOR
#include "llvm/CodeGen/TargetSchedule.h"
namespace llvm {
extern const llvm::SubtargetFeatureKV PPCFeatureKV[];
extern const llvm::SubtargetFeatureKV PPCSubTypeKV[];
extern const llvm::SubtargetInfoKV PPCProcSchedKV[];
extern const llvm::MCWriteProcResEntry PPCWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry PPCWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry PPCReadAdvanceTable[];
extern const llvm::InstrStage PPCStages[];
extern const unsigned PPCOperandCycles[];
extern const unsigned PPCForwardingPaths[];
PPCGenSubtargetInfo::PPCGenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo() {
  InitMCSubtargetInfo(TT, CPU, FS, makeArrayRef(PPCFeatureKV, 22), makeArrayRef(PPCSubTypeKV, 34), 
                      PPCProcSchedKV, PPCWriteProcResTable, PPCWriteLatencyTable, PPCReadAdvanceTable, 
                      PPCStages, PPCOperandCycles, PPCForwardingPaths);
}

unsigned PPCGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // PPCGenSubtargetInfo::resolveSchedClass
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_CTOR

