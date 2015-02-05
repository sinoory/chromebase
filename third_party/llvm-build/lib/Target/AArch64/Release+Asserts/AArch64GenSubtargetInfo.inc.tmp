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
namespace AArch64 {
enum {
  FeatureCRC =  1ULL << 0,
  FeatureCrypto =  1ULL << 1,
  FeatureFPARMv8 =  1ULL << 2,
  FeatureNEON =  1ULL << 3,
  FeatureZCRegMove =  1ULL << 4,
  FeatureZCZeroing =  1ULL << 5,
  ProcA53 =  1ULL << 6,
  ProcA57 =  1ULL << 7,
  ProcCyclone =  1ULL << 8
};
}
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC
namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV AArch64FeatureKV[] = {
  { "a53", "Cortex-A53 ARM processors", AArch64::ProcA53, AArch64::FeatureFPARMv8 | AArch64::FeatureNEON | AArch64::FeatureCrypto | AArch64::FeatureCRC },
  { "a57", "Cortex-A57 ARM processors", AArch64::ProcA57, AArch64::FeatureFPARMv8 | AArch64::FeatureNEON | AArch64::FeatureCrypto | AArch64::FeatureCRC },
  { "crc", "Enable ARMv8 CRC-32 checksum instructions", AArch64::FeatureCRC, 0ULL },
  { "crypto", "Enable cryptographic instructions", AArch64::FeatureCrypto, 0ULL },
  { "cyclone", "Cyclone", AArch64::ProcCyclone, AArch64::FeatureFPARMv8 | AArch64::FeatureNEON | AArch64::FeatureCrypto | AArch64::FeatureCRC | AArch64::FeatureZCRegMove | AArch64::FeatureZCZeroing },
  { "fp-armv8", "Enable ARMv8 FP", AArch64::FeatureFPARMv8, 0ULL },
  { "neon", "Enable Advanced SIMD instructions", AArch64::FeatureNEON, AArch64::FeatureFPARMv8 },
  { "zcm", "Has zero-cycle register moves", AArch64::FeatureZCRegMove, 0ULL },
  { "zcz", "Has zero-cycle zeroing instructions", AArch64::FeatureZCZeroing, 0ULL }
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV AArch64SubTypeKV[] = {
  { "cortex-a53", "Select the cortex-a53 processor", AArch64::ProcA53, 0ULL },
  { "cortex-a57", "Select the cortex-a57 processor", AArch64::ProcA57, 0ULL },
  { "cyclone", "Select the cyclone processor", AArch64::ProcCyclone, 0ULL },
  { "generic", "Select the generic processor", AArch64::FeatureFPARMv8 | AArch64::FeatureNEON | AArch64::FeatureCRC, 0ULL }
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#ifndef NDEBUG
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry AArch64WriteProcResTable[] = {
  { 0,  0}, // Invalid
  { 4,  1}, // #1
  { 1,  1}, // #2
  { 2,  1}, // #3
  { 5, 29}, // #4
  { 5,  1}, // #5
  { 6,  1}, // #6
  { 6,  2}, // #7
  { 1,  1}, // #8
  { 6,  1}, // #9
  { 7,  1}, // #10
  { 3,  1}, // #11
  { 6,  3}, // #12
  { 6,  4}, // #13
  { 6,  5}, // #14
  { 5, 14}, // #15
  { 5, 13}, // #16
  { 5, 28}, // #17
  { 6,  1}, // #18
  { 8,  1}, // #19
  { 2,  1}, // #20
  { 3,  1}, // #21
  { 2,  2}, // #22
  { 3,  1}, // #23
  { 5,  1}, // #24
  { 2,  1}, // #25
  { 5,  1}, // #26
  { 3,  1}, // #27
  { 6,  1}, // #28
  { 3,  2}, // #29
  { 3,  3}, // #30
  { 3,  4}, // #31
  { 2,  1}, // #32
  { 3,  1}, // #33
  { 6,  1}, // #34
  { 2,  1}, // #35
  { 3,  2}, // #36
  { 2,  1}, // #37
  { 3,  3}, // #38
  { 2,  1}, // #39
  { 3,  4}, // #40
  { 3,  1}, // #41
  { 6,  2}, // #42
  { 2,  1}, // #43
  { 3,  1}, // #44
  { 6,  2}, // #45
  { 3,  2}, // #46
  { 6,  3}, // #47
  { 3,  3}, // #48
  { 6,  4}, // #49
  { 2,  1}, // #50
  { 3,  2}, // #51
  { 6,  3}, // #52
  { 2,  1}, // #53
  { 3,  3}, // #54
  { 6,  4}, // #55
  { 3,  2}, // #56
  { 6,  4}, // #57
  { 3,  4}, // #58
  { 6,  4}, // #59
  { 2,  1}, // #60
  { 3,  2}, // #61
  { 6,  4}, // #62
  { 2,  1}, // #63
  { 3,  4}, // #64
  { 6,  4}, // #65
  { 5,  2}, // #66
  { 5,  4}, // #67
  { 5,  6}, // #68
  { 5,  8}, // #69
  { 2,  1}, // #70
  { 5,  1}, // #71
  { 6,  1}, // #72
  { 2,  1}, // #73
  { 5,  2}, // #74
  { 2,  1}, // #75
  { 5,  4}, // #76
  { 2,  1}, // #77
  { 5,  6}, // #78
  { 2,  1}, // #79
  { 5,  8}, // #80
  { 5,  2}, // #81
  { 6,  1}, // #82
  { 2,  1}, // #83
  { 5,  2}, // #84
  { 6,  1}, // #85
  { 5,  6}, // #86
  { 6,  4}, // #87
  { 2,  1}, // #88
  { 5,  6}, // #89
  { 6,  4}, // #90
  { 5,  8}, // #91
  { 6,  4}, // #92
  { 2,  1}, // #93
  { 5,  8}, // #94
  { 6,  4}, // #95
  { 2,  1}, // #96
  { 4,  1}, // #97
  { 3,  2}, // #98
  { 6,  2}, // #99
  { 2,  1}, // #100
  { 3,  2}, // #101
  { 6,  2}, // #102
  { 2,  1}, // #103
  { 3,  1}, // #104
  { 6,  3}, // #105
  { 5,  3}, // #106
  { 2,  1}, // #107
  { 5,  3}, // #108
  { 5,  4}, // #109
  { 6,  2}, // #110
  { 2,  1}, // #111
  { 5,  4}, // #112
  { 6,  2}, // #113
  { 5,  3}, // #114
  { 6,  2}, // #115
  { 2,  1}, // #116
  { 5,  3}, // #117
  { 6,  2}, // #118
  {10,  1}, // #119
  { 4,  2}, // #120
  { 7,  2}, // #121
  { 4,  1}, // #122
  { 7,  1}, // #123
  { 1,  1}, // #124
  { 4,  1}, // #125
  { 1,  1}, // #126
  { 2,  1}, // #127
  { 4,  1}, // #128
  { 9,  1}, // #129
  {10,  1}, // #130
  {11,  1}, // #131
  {13,  1}, // #132
  { 3, 17}, // #133
  {10,  2}, // #134
  {12,  2}, // #135
  {10,  1}, // #136
  {13,  1}, // #137
  { 1,  1}, // #138
  { 2,  1}, // #139
  { 4,  1}, // #140
  { 6,  1}, // #141
  { 1,  2}, // #142
  { 4,  2}, // #143
  { 5,  2}, // #144
  { 8, 10}, // #145
  { 1,  2}, // #146
  { 4,  2}, // #147
  { 5,  2}, // #148
  { 8, 13}, // #149
  { 9,  2}, // #150
  { 9,  3}, // #151
  { 9,  4}, // #152
  { 4,  1}, // #153
  { 9,  2}, // #154
  { 4,  1}, // #155
  { 9,  3}, // #156
  { 4,  1}, // #157
  { 9,  4}, // #158
  { 9,  1}, // #159
  {10,  2}, // #160
  { 9,  2}, // #161
  {10,  2}, // #162
  { 4,  1}, // #163
  { 9,  1}, // #164
  {10,  2}, // #165
  { 4,  1}, // #166
  { 9,  2}, // #167
  {10,  2}, // #168
  { 9,  2}, // #169
  {10,  3}, // #170
  { 9,  3}, // #171
  {10,  3}, // #172
  { 4,  1}, // #173
  { 9,  2}, // #174
  {10,  3}, // #175
  { 4,  1}, // #176
  { 9,  3}, // #177
  {10,  3}, // #178
  { 9,  2}, // #179
  {10,  4}, // #180
  { 9,  4}, // #181
  {10,  8}, // #182
  { 4,  1}, // #183
  { 9,  2}, // #184
  {10,  4}, // #185
  { 4,  1}, // #186
  { 9,  4}, // #187
  {10,  8}, // #188
  { 9,  1}, // #189
  {10,  3}, // #190
  { 4,  1}, // #191
  { 9,  1}, // #192
  {10,  3}, // #193
  { 9,  1}, // #194
  {10,  4}, // #195
  { 4,  1}, // #196
  { 9,  1}, // #197
  {10,  4}, // #198
  { 9,  2}, // #199
  {10,  1}, // #200
  { 4,  1}, // #201
  { 9,  2}, // #202
  {10,  1}, // #203
  {10,  1}, // #204
  {12,  1}, // #205
  { 4,  1}, // #206
  { 7,  1}, // #207
  { 9,  1} // #208
}; // AArch64WriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry AArch64WriteLatencyTable[] = {
  { 0,  0}, // Invalid
  { 6,  0}, // #1 WriteV_WriteF_WriteFCmp_WriteFCvt_WriteFMul_WriteFCopy_WriteFImm_A53WriteVLD3_A53WriteVST3_A57Write_6cyc_2L_A57Write_6cyc_6S_A57Write_6cyc_6S_4V_A57Write_6cyc_1M_CyWriteCrypto6
  { 3, 96}, // #2 WriteI
  { 2, 102}, // #3 WriteIS
  { 1,  0}, // #4 WriteBr_WriteBrReg_WriteSys_WriteBarrier_WriteHint_A57Write_1cyc_1I_A57Write_1cyc_1B_A57Write_1cyc_1S_A57Write_1cyc_1I_1S_A57Write_1cyc_1B_1I
  { 3,  0}, // #5 WriteExtr_A57Write_3cyc_1V_A57Write_3cyc_1M_A57Write_3cyc_1S_1V_A57Write_3cyc_2S_1V_A57Write_3cyc_1I_1M_A57Write_3cyc_1W_A57Write_3cyc_3S_A57Write_3cyc_3S_2V_CyWriteV3_CyWritePMUL_CyWriteCrypto3
  {33,  0}, // #6 WriteFDiv_A53WriteFDivDP
  { 4,  0}, // #7 WriteLD_WriteLDIdx_WriteST_WriteSTP_WriteSTIdx_A53WriteVLD1_A53WriteVST1_A57Write_4cyc_1L_A57Write_4cyc_1I_1L_A57Write_4cyc_4S_A57Write_4cyc_4S_2V_WriteFCmp_WriteFCvt_WriteFMul_CyWriteV4_WriteFRSQRTE
  { 4,  0}, // #8 WriteLD_WriteLDHi_WriteVST_WriteST
  { 4,  0}, // #9 WriteLDHi_WriteVST
  { 4,  0}, // #10 WriteLD_WriteVST
  { 4,  0}, // #11 WriteLDHi_A53WriteVLD1_A53WriteVST1
  { 0,  0}, // #12 WriteAdr
  { 4,  0}, // #13 WriteLD_WriteSTP
  { 3, 96}, // #14 WriteI
  { 4, 100}, // #15 WriteIM32
  { 4, 101}, // #16 WriteIM64
  { 3, 104}, // #17 WriteImm
  { 4, 97}, // #18 WriteID32
  { 4, 98}, // #19 WriteID64
  { 8,  0}, // #20 WriteLD_A53WriteVLD5_A57Write_8cyc_1L_1V_A57Write_8cyc_4L_A57Write_8cyc_1L_2V_A57Write_8cyc_8S_A57Write_8cyc_8S_4V_WriteVST_WriteFRECPS
  { 5,  0}, // #21 A53WriteVLD2_A53WriteVST2_A57Write_5cyc_1V_A57Write_4cyc_1L_A57Write_5cyc_1M_A57Write_5cyc_1L_WriteFCopy_WriteLD_CyWriteV5_WriteST
  { 7,  0}, // #22 A53WriteVLD4_A57Write_7cyc_3L
  { 5,  0}, // #23 A53WriteVLD2_A53WriteVST2
  { 0,  0}, // #24 WriteAdr
  { 6,  0}, // #25 A53WriteVLD3_A53WriteVST3
  { 0,  0}, // #26 WriteAdr
  { 7,  0}, // #27 A53WriteVLD4
  { 0,  0}, // #28 WriteAdr
  { 8,  0}, // #29 A53WriteVLD5
  { 0,  0}, // #30 WriteAdr
  {10,  0}, // #31 A53WriteFMAC_A57Write_10cyc_3L_4V_WriteFRSQRTS_WriteLD
  {18,  0}, // #32 A53WriteFDivSP_A57Write_18cyc_1X
  {17,  0}, // #33 A53WriteFSqrtSP_WriteFDiv
  {32,  0}, // #34 A53WriteFSqrtDP
  { 3, 103}, // #35 WriteISReg
  { 3, 99}, // #36 WriteIEReg
  { 2,  0}, // #37 A57Write_2cyc_1M_A57Write_1cyc_1I_A57Write_2cyc_2S_A57Write_2cyc_1B_1I_WriteV_WriteExtr_WriteF_WriteFImm_WriteAdr_CyWriteCrypto2
  { 4,  0}, // #38 A57Write_4cyc_1L_WriteLD
  { 4,  0}, // #39 WriteLDHi_A57Write_4cyc_1L_A57Write_4cyc_4S_A57Write_4cyc_4S_2V
  { 1,  0}, // #40 A57Write_1cyc_1I_WriteAdr
  {19,  0}, // #41 A57Write_19cyc_1M
  {35,  0}, // #42 A57Write_35cyc_1M
  { 1,  0}, // #43 A57Write_1cyc_1I_A57Write_1cyc_1S
  { 1,  0}, // #44 A57Write_1cyc_1S_A57Write_1cyc_1I
  { 5,  0}, // #45 A57Write_5cyc_1L_WriteVLD
  { 1,  0}, // #46 A57Write_1cyc_1I_WriteAdr
  { 8,  0}, // #47 A57Write_8cyc_1L_1V_A57Write_8cyc_4L_A57Write_8cyc_1L_2V_A57Write_8cyc_8S_A57Write_8cyc_8S_4V_WriteVST
  { 1,  0}, // #48 A57Write_1cyc_1I_WriteAdr
  { 6,  0}, // #49 A57Write_6cyc_2L_A57Write_6cyc_6S_A57Write_6cyc_6S_4V_WriteVST
  { 1,  0}, // #50 A57Write_1cyc_1I
  { 7,  0}, // #51 A57Write_7cyc_3L_WriteV
  { 1,  0}, // #52 A57Write_1cyc_1I_WriteAdr
  { 9,  0}, // #53 A57Write_9cyc_2L_3V_A57Write_9cyc_2L_4V_A57Write_9cyc_2L_2V_A57Write_9cyc_1L_3V
  { 9,  0}, // #54 A57Write_9cyc_2L_3V_A57Write_9cyc_2L_4V_A57Write_9cyc_2L_2V_A57Write_9cyc_1L_3V
  { 1,  0}, // #55 A57Write_1cyc_1I
  {10,  0}, // #56 A57Write_10cyc_3L_4V
  { 1,  0}, // #57 A57Write_1cyc_1I
  {11,  0}, // #58 A57Write_11cyc_4L_4V
  {11,  0}, // #59 A57Write_11cyc_4L_4V
  { 1,  0}, // #60 A57Write_1cyc_1I
  { 3,  0}, // #61 A57Write_3cyc_1S_1V_A57Write_3cyc_2S_1V_A57Write_3cyc_3S_A57Write_3cyc_3S_2V
  { 1,  0}, // #62 A57Write_1cyc_1I
  { 2,  0}, // #63 A57Write_2cyc_2S
  { 1,  0}, // #64 A57Write_1cyc_1I
  { 1, 96}, // #65 WriteI
  { 2, 103}, // #66 WriteISReg
  { 2, 99}, // #67 WriteIEReg
  { 1, 102}, // #68 WriteIS
  {-1,  0}, // #69 WriteSys
  { 4,  0}, // #70 WriteLD
  { 1, 96}, // #71 WriteI
  { 5, 101}, // #72 WriteIM64
  { 1, 104}, // #73 WriteImm
  {10, 97}, // #74 WriteID32
  {13, 98}, // #75 WriteID64
  { 1,  0}, // #76 WriteAdr
  { 4,  0}, // #77 WriteST_WriteVST
  { 5,  0}, // #78 WriteVLD
  { 5,  0}, // #79 WriteVLD
  { 5,  0}, // #80 WriteVLD
  { 5,  0}, // #81 WriteVLD
  { 5,  0}, // #82 WriteVLD
  { 5,  0}, // #83 WriteVLD
  { 1,  0}, // #84 WriteAdr
  { 5,  0}, // #85 WriteVLD
  { 5,  0}, // #86 WriteVLD
  { 1,  0}, // #87 WriteAdr
  { 5,  0}, // #88 WriteVLD
  { 5,  0}, // #89 WriteVLD
  { 5,  0}, // #90 WriteVLD
  { 1,  0}, // #91 WriteAdr
  { 5,  0}, // #92 WriteVLD
  { 5,  0}, // #93 WriteVLD
  { 5,  0}, // #94 WriteVLD
  { 7,  0}, // #95 WriteV
  { 2,  0}, // #96 WriteV
  { 7,  0}, // #97 WriteV
  { 7,  0}, // #98 WriteV
  { 7,  0}, // #99 WriteV
  { 1,  0}, // #100 WriteAdr
  { 2,  0}, // #101 WriteV
  { 7,  0}, // #102 WriteV
  { 1,  0}, // #103 WriteAdr
  { 7,  0}, // #104 WriteV
  { 7,  0}, // #105 WriteV
  { 7,  0}, // #106 WriteV
  { 2,  0}, // #107 WriteV
  { 7,  0}, // #108 WriteV
  { 1,  0}, // #109 WriteAdr
  { 7,  0}, // #110 WriteV
  { 2,  0}, // #111 WriteV
  { 7,  0}, // #112 WriteV
  { 7,  0}, // #113 WriteV
  { 2,  0}, // #114 WriteV
  { 2,  0}, // #115 WriteV
  { 9,  0}, // #116 WriteV
  { 9,  0}, // #117 WriteV
  { 9,  0}, // #118 WriteV
  { 9,  0}, // #119 WriteV
  { 7,  0}, // #120 WriteV
  { 1,  0}, // #121 WriteAdr
  { 7,  0}, // #122 WriteV
  { 2,  0}, // #123 WriteV
  { 2,  0}, // #124 WriteV
  { 9,  0}, // #125 WriteV
  { 1,  0}, // #126 WriteAdr
  { 9,  0}, // #127 WriteV
  { 9,  0}, // #128 WriteV
  { 9,  0}, // #129 WriteV
  { 1,  0}, // #130 WriteAdr
  { 4,  0}, // #131 WriteVST
  { 4,  0}, // #132 WriteVST
  { 1,  0}, // #133 WriteAdr
  { 4,  0}, // #134 WriteVST
  { 4,  0}, // #135 WriteVST
  { 4,  0}, // #136 WriteVST
  { 1,  0}, // #137 WriteAdr
  { 4,  0}, // #138 WriteVST
  { 4,  0}, // #139 WriteVST
  { 4,  0}, // #140 WriteVST
  { 4,  0}, // #141 WriteVST
  { 6,  0}, // #142 WriteVST
  { 6,  0}, // #143 WriteVST
  { 1,  0}, // #144 WriteAdr
  { 6,  0}, // #145 WriteVST
  { 6,  0}, // #146 WriteVST
  { 6,  0}, // #147 WriteVST
  { 6,  0}, // #148 WriteVST
  { 6,  0}, // #149 WriteVST
  { 8,  0}, // #150 WriteVST
  { 8,  0}, // #151 WriteVST
  { 8,  0}, // #152 WriteVST
  { 8,  0}, // #153 WriteVST
  { 1,  0}, // #154 WriteAdr
  { 8,  0}, // #155 WriteVST
  { 8,  0}, // #156 WriteVST
  { 8,  0}, // #157 WriteVST
  { 8,  0}, // #158 WriteVST
  {10, 62}, // #159 CyWriteDMul
  { 7,  0}, // #160 WriteV
  { 1,  0}, // #161 WriteAdr
  { 2,  0}, // #162 WriteV
  { 2,  0}, // #163 WriteV
  { 7,  0}, // #164 WriteV
  { 2,  0}, // #165 WriteV
  { 2,  0}, // #166 WriteV
  { 2,  0}, // #167 WriteV
  { 7,  0}, // #168 WriteV
  { 1,  0}, // #169 WriteAdr
  { 2,  0}, // #170 WriteV
  { 2,  0}, // #171 WriteV
  { 2,  0}, // #172 WriteV
  { 6,  0}, // #173 WriteVST
  { 4,  0}, // #174 WriteVST
  { 1,  0}, // #175 WriteAdr
  { 6,  0}, // #176 WriteVST
  { 4,  0}, // #177 WriteVST
  { 5, 96}, // #178 WriteI
  { 2, 73}, // #179 CyWriteVADDLP
  { 3, 74}, // #180 CyWriteVAccum
  { 3, 72}, // #181 CyWriteVABD
  { 2, 76}, // #182 CyWriteVSHR
  { 3, 77}, // #183 CyWriteVSRSHR
  { 3, 78}, // #184 CyWriteVShiftAcc
  { 4, 75}, // #185 CyWriteVMul
  { 5, 71}, // #186 CyWriteV64Mul
  { 8, 65} // #187 CyWriteSMul
}; // AArch64WriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry AArch64ReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
  {0, 96,  2}, // #1
  {0, 97,  2}, // #2
  {0, 98,  2}, // #3
  {0, 99,  2}, // #4
  {0, 100,  2}, // #5
  {0, 101,  2}, // #6
  {0, 102,  2}, // #7
  {0, 103,  2}, // #8
  {0, 104,  2}, // #9
  {1, 96,  2}, // #10
  {1, 97,  2}, // #11
  {1, 98,  2}, // #12
  {1, 99,  2}, // #13
  {1, 100,  2}, // #14
  {1, 101,  2}, // #15
  {1, 102,  2}, // #16
  {1, 103,  2}, // #17
  {1, 104,  2}, // #18
  {0, 96,  1}, // #19
  {0, 97,  1}, // #20
  {0, 98,  1}, // #21
  {0, 99,  1}, // #22
  {0, 100,  1}, // #23
  {0, 101,  1}, // #24
  {0, 102,  1}, // #25
  {0, 103,  1}, // #26
  {0, 104,  1}, // #27
  {1, 96,  1}, // #28
  {1, 97,  1}, // #29
  {1, 98,  1}, // #30
  {1, 99,  1}, // #31
  {1, 100,  1}, // #32
  {1, 101,  1}, // #33
  {1, 102,  1}, // #34
  {1, 103,  1}, // #35
  {1, 104,  1}, // #36
  {2, 96,  2}, // #37
  {2, 97,  2}, // #38
  {2, 98,  2}, // #39
  {2, 99,  2}, // #40
  {2, 100,  2}, // #41
  {2, 101,  2}, // #42
  {2, 102,  2}, // #43
  {2, 103,  2}, // #44
  {2, 104,  2}, // #45
  {0, 96,  2}, // #46
  {0, 97,  2}, // #47
  {0, 98,  2}, // #48
  {0, 99,  2}, // #49
  {0, 100,  2}, // #50
  {0, 101,  2}, // #51
  {0, 102,  2}, // #52
  {0, 103,  2}, // #53
  {0, 104,  2}, // #54
  {1, 96,  1}, // #55
  {1, 97,  1}, // #56
  {1, 98,  1}, // #57
  {1, 99,  1}, // #58
  {1, 100,  1}, // #59
  {1, 101,  1}, // #60
  {1, 102,  1}, // #61
  {1, 103,  1}, // #62
  {1, 104,  1}, // #63
  {0,  0,  0}, // #64
  {1,  0,  0}, // #65
  {0,  0,  0}, // #66
  {1,  0,  0}, // #67
  {2,  0,  0}, // #68
  {0,  0,  1}, // #69
  {0,  0,  5}, // #70
  {0, 62,  5}, // #71
  {0, 72,  1}, // #72
  {0, 73,  1}, // #73
  {0, 74,  1}, // #74
  {0, 76,  1}, // #75
  {0, 77,  1}, // #76
  {0, 78,  1}, // #77
  {0, 71,  1}, // #78
  {0, 75,  1}, // #79
  {0, 65,  4} // #80
}; // AArch64ReadAdvanceTable

// {Name, NumMicroOps, BeginGroup, EndGroup, WriteProcResIdx,#, WriteLatencyIdx,#, ReadAdvanceIdx,#}
static const llvm::MCSchedClassDesc CortexA53ModelSchedClasses[] = {
  {DBGFIELD("InvalidSchedClass")  65535, 0, 0,  0, 0,  0, 0,  0, 0},
  {DBGFIELD("WriteV")             1, 0, 0,  1, 1,  1, 1,  0, 0}, // #1
  {DBGFIELD("WriteI_ReadI_ReadI") 1, 0, 0,  2, 1,  2, 1,  1, 18}, // #2
  {DBGFIELD("WriteI_ReadI")       1, 0, 0,  2, 1,  2, 1,  1, 9}, // #3
  {DBGFIELD("WriteISReg_ReadI_ReadISReg") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #4
  {DBGFIELD("WriteIEReg_ReadI_ReadIEReg") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #5
  {DBGFIELD("WriteI")             1, 0, 0,  2, 1,  2, 1,  0, 0}, // #6
  {DBGFIELD("WriteIS_ReadI")      1, 0, 0,  2, 1,  3, 1,  1, 9}, // #7
  {DBGFIELD("WriteBr")            1, 0, 0,  3, 1,  4, 1,  0, 0}, // #8
  {DBGFIELD("WriteBrReg")         1, 0, 0,  3, 1,  4, 1,  0, 0}, // #9
  {DBGFIELD("WriteSys")           1, 0, 0,  3, 1,  4, 1,  0, 0}, // #10
  {DBGFIELD("WriteBarrier")       1, 0, 0,  3, 1,  4, 1,  0, 0}, // #11
  {DBGFIELD("WriteExtr_ReadExtrHi") 1, 0, 0,  2, 1,  5, 1,  0, 1}, // #12
  {DBGFIELD("WriteF")             1, 0, 0,  1, 1,  1, 1,  0, 0}, // #13
  {DBGFIELD("WriteFCmp")          1, 0, 0,  1, 1,  1, 1,  0, 0}, // #14
  {DBGFIELD("WriteFCvt")          1, 0, 0,  1, 1,  1, 1,  0, 0}, // #15
  {DBGFIELD("WriteFDiv")          1, 0, 0,  4, 1,  6, 1,  0, 0}, // #16
  {DBGFIELD("WriteFMul")          1, 0, 0,  5, 1,  1, 1,  0, 0}, // #17
  {DBGFIELD("WriteFCopy")         1, 0, 0,  1, 1,  1, 1,  0, 0}, // #18
  {DBGFIELD("WriteFImm")          1, 0, 0,  1, 1,  1, 1,  0, 0}, // #19
  {DBGFIELD("WriteHint")          1, 0, 0,  3, 1,  4, 1,  0, 0}, // #20
  {DBGFIELD("WriteLD")            1, 0, 0,  6, 1,  7, 1,  0, 0}, // #21
  {DBGFIELD("WriteLD_WriteLDHi")  2, 0, 0,  7, 1,  8, 2,  0, 0}, // #22
  {DBGFIELD("WriteLD_WriteLDHi_WriteAdr") 3, 0, 0,  7, 1, 10, 3,  0, 0}, // #23
  {DBGFIELD("WriteLD_WriteI")     2, 0, 0,  8, 2, 13, 2,  0, 0}, // #24
  {DBGFIELD("WriteLD_WriteAdr")   2, 0, 0,  6, 1, 11, 2,  0, 0}, // #25
  {DBGFIELD("WriteLDIdx_ReadAdrBase") 1, 0, 0,  6, 1,  7, 1,  0, 1}, // #26
  {DBGFIELD("WriteLDAdr")         2, 0, 0,  6, 1,  7, 1,  0, 0}, // #27
  {DBGFIELD("WriteIM32_ReadIM_ReadIM_ReadIMA") 1, 0, 0, 10, 1, 15, 1, 19, 27}, // #28
  {DBGFIELD("WriteIM64_ReadIM_ReadIM_ReadIMA") 1, 0, 0, 10, 1, 16, 1, 19, 27}, // #29
  {DBGFIELD("WriteImm")           1, 0, 0,  2, 1, 17, 1,  0, 0}, // #30
  {DBGFIELD("WriteAdrAdr")        2, 0, 0,  0, 0,  0, 1,  0, 0}, // #31
  {DBGFIELD("WriteID32_ReadID_ReadID") 1, 0, 0, 11, 1, 18, 1, 19, 18}, // #32
  {DBGFIELD("WriteID64_ReadID_ReadID") 1, 0, 0, 11, 1, 19, 1, 19, 18}, // #33
  {DBGFIELD("WriteIM64_ReadIM_ReadIM") 1, 0, 0, 10, 1, 16, 1, 19, 18}, // #34
  {DBGFIELD("WriteST")            1, 0, 0,  6, 1,  7, 1,  0, 0}, // #35
  {DBGFIELD("WriteSTX")           2, 0, 0,  7, 1, 20, 1,  0, 0}, // #36
  {DBGFIELD("WriteSTP")           1, 0, 0,  6, 1,  7, 1,  0, 0}, // #37
  {DBGFIELD("WriteAdr_WriteSTP")  2, 0, 0,  6, 1, 12, 2,  0, 0}, // #38
  {DBGFIELD("WriteAdr_WriteST_ReadAdrBase") 2, 0, 0,  6, 1, 12, 2,  0, 1}, // #39
  {DBGFIELD("WriteAdr_WriteST")   2, 0, 0,  6, 1, 12, 2,  0, 0}, // #40
  {DBGFIELD("WriteSTIdx_ReadAdrBase") 1, 0, 0,  6, 1,  7, 1,  0, 1}, // #41
  {DBGFIELD("COPY")               1, 0, 0,  2, 1,  2, 1,  0, 0}, // #42
  {DBGFIELD("LD1i16_LD1i32_LD1i64_LD1i8") 1, 0, 0,  6, 1,  7, 1,  0, 0}, // #43
  {DBGFIELD("LD1Rv16b_LD1Rv1d_LD1Rv2d_LD1Rv2s_LD1Rv4h_LD1Rv4s_LD1Rv8b_LD1Rv8h") 1, 0, 0,  6, 1,  7, 1,  0, 0}, // #44
  {DBGFIELD("LD1Onev16b_LD1Onev1d_LD1Onev2d_LD1Onev2s_LD1Onev4h_LD1Onev4s_LD1Onev8b_LD1Onev8h") 1, 0, 0,  6, 1,  7, 1,  0, 0}, // #45
  {DBGFIELD("LD1Twov16b_LD1Twov1d_LD1Twov2d_LD1Twov2s_LD1Twov4h_LD1Twov4s_LD1Twov8b_LD1Twov8h") 1, 0, 0,  7, 1, 21, 1,  0, 0}, // #46
  {DBGFIELD("LD1Threev16b_LD1Threev1d_LD1Threev2d_LD1Threev2s_LD1Threev4h_LD1Threev4s_LD1Threev8b_LD1Threev8h") 1, 0, 0, 12, 1,  1, 1,  0, 0}, // #47
  {DBGFIELD("LD1Fourv16b_LD1Fourv1d_LD1Fourv2d_LD1Fourv2s_LD1Fourv4h_LD1Fourv4s_LD1Fourv8b_LD1Fourv8h") 1, 0, 0, 13, 1, 22, 1,  0, 0}, // #48
  {DBGFIELD("LD1i16_POST_LD1i32_POST_LD1i64_POST_LD1i8_POST") 2, 0, 0,  6, 1, 11, 2,  0, 0}, // #49
  {DBGFIELD("LD1Rv16b_POST_LD1Rv1d_POST_LD1Rv2d_POST_LD1Rv2s_POST_LD1Rv4h_POST_LD1Rv4s_POST_LD1Rv8b_POST_LD1Rv8h_POST") 2, 0, 0,  6, 1, 11, 2,  0, 0}, // #50
  {DBGFIELD("LD1Onev16b_POST_LD1Onev1d_POST_LD1Onev2d_POST_LD1Onev2s_POST_LD1Onev4h_POST_LD1Onev4s_POST_LD1Onev8b_POST_LD1Onev8h_POST") 2, 0, 0,  6, 1, 11, 2,  0, 0}, // #51
  {DBGFIELD("LD1Twov16b_POST_LD1Twov1d_POST_LD1Twov2d_POST_LD1Twov2s_POST_LD1Twov4h_POST_LD1Twov4s_POST_LD1Twov8b_POST_LD1Twov8h_POST") 2, 0, 0,  7, 1, 23, 2,  0, 0}, // #52
  {DBGFIELD("LD1Threev16b_POST_LD1Threev1d_POST_LD1Threev2d_POST_LD1Threev2s_POST_LD1Threev4h_POST_LD1Threev4s_POST_LD1Threev8b_POST_LD1Threev8h_POST") 2, 0, 0, 12, 1, 25, 2,  0, 0}, // #53
  {DBGFIELD("LD1Fourv16b_POST_LD1Fourv1d_POST_LD1Fourv2d_POST_LD1Fourv2s_POST_LD1Fourv4h_POST_LD1Fourv4s_POST_LD1Fourv8b_POST_LD1Fourv8h_POST") 2, 0, 0, 13, 1, 27, 2,  0, 0}, // #54
  {DBGFIELD("LD2i16_LD2i32_LD2i64_LD2i8") 1, 0, 0,  6, 1,  7, 1,  0, 0}, // #55
  {DBGFIELD("LD2Rv16b_LD2Rv1d_LD2Rv2d_LD2Rv2s_LD2Rv4h_LD2Rv4s_LD2Rv8b_LD2Rv8h") 1, 0, 0,  6, 1,  7, 1,  0, 0}, // #56
  {DBGFIELD("LD2Twov2s_LD2Twov4h_LD2Twov8b") 1, 0, 0,  7, 1, 21, 1,  0, 0}, // #57
  {DBGFIELD("LD2Twov16b_LD2Twov2d_LD2Twov4s_LD2Twov8h") 1, 0, 0, 13, 1, 22, 1,  0, 0}, // #58
  {DBGFIELD("LD2i16_POST_LD2i32_POST_LD2i64_POST_LD2i8_POST") 2, 0, 0,  6, 1, 11, 2,  0, 0}, // #59
  {DBGFIELD("LD2Rv16b_POST_LD2Rv1d_POST_LD2Rv2d_POST_LD2Rv2s_POST_LD2Rv4h_POST_LD2Rv4s_POST_LD2Rv8b_POST_LD2Rv8h_POST") 2, 0, 0,  6, 1, 11, 2,  0, 0}, // #60
  {DBGFIELD("LD2Twov2s_POST_LD2Twov4h_POST_LD2Twov8b_POST") 2, 0, 0,  7, 1, 23, 2,  0, 0}, // #61
  {DBGFIELD("LD2Twov16b_POST_LD2Twov2d_POST_LD2Twov4s_POST_LD2Twov8h_POST") 2, 0, 0, 13, 1, 27, 2,  0, 0}, // #62
  {DBGFIELD("LD3i16_LD3i32_LD3i64_LD3i8") 1, 0, 0,  7, 1, 21, 1,  0, 0}, // #63
  {DBGFIELD("LD3Rv16b_LD3Rv1d_LD3Rv2d_LD3Rv2s_LD3Rv4h_LD3Rv4s_LD3Rv8b_LD3Rv8h") 1, 0, 0,  7, 1, 21, 1,  0, 0}, // #64
  {DBGFIELD("LD3Threev16b_LD3Threev2s_LD3Threev4h_LD3Threev4s_LD3Threev8b_LD3Threev8h") 1, 0, 0, 13, 1, 22, 1,  0, 0}, // #65
  {DBGFIELD("LD3Threev2d")        1, 0, 0, 12, 1,  1, 1,  0, 0}, // #66
  {DBGFIELD("LD3i16_POST_LD3i32_POST_LD3i64_POST_LD3i8_POST") 2, 0, 0,  7, 1, 23, 2,  0, 0}, // #67
  {DBGFIELD("LD3Rv16b_POST_LD3Rv1d_POST_LD3Rv2d_POST_LD3Rv2s_POST_LD3Rv4h_POST_LD3Rv4s_POST_LD3Rv8b_POST_LD3Rv8h_POST") 2, 0, 0,  7, 1, 23, 2,  0, 0}, // #68
  {DBGFIELD("LD3Threev16b_POST_LD3Threev2s_POST_LD3Threev4h_POST_LD3Threev4s_POST_LD3Threev8b_POST_LD3Threev8h_POST") 2, 0, 0, 13, 1, 27, 2,  0, 0}, // #69
  {DBGFIELD("LD3Threev2d_POST")   2, 0, 0, 12, 1, 25, 2,  0, 0}, // #70
  {DBGFIELD("LD4i16_LD4i32_LD4i64_LD4i8") 1, 0, 0,  7, 1, 21, 1,  0, 0}, // #71
  {DBGFIELD("LD4Rv16b_LD4Rv1d_LD4Rv2d_LD4Rv2s_LD4Rv4h_LD4Rv4s_LD4Rv8b_LD4Rv8h") 1, 0, 0,  7, 1, 21, 1,  0, 0}, // #72
  {DBGFIELD("LD4Fourv16b_LD4Fourv2s_LD4Fourv4h_LD4Fourv4s_LD4Fourv8b_LD4Fourv8h") 1, 0, 0, 14, 1, 20, 1,  0, 0}, // #73
  {DBGFIELD("LD4Fourv2d")         1, 0, 0, 13, 1, 22, 1,  0, 0}, // #74
  {DBGFIELD("LD4i16_POST_LD4i32_POST_LD4i64_POST_LD4i8_POST") 2, 0, 0,  7, 1, 23, 2,  0, 0}, // #75
  {DBGFIELD("LD4Rv16b_POST_LD4Rv1d_POST_LD4Rv2d_POST_LD4Rv2s_POST_LD4Rv4h_POST_LD4Rv4s_POST_LD4Rv8b_POST_LD4Rv8h_POST") 2, 0, 0,  7, 1, 23, 2,  0, 0}, // #76
  {DBGFIELD("LD4Fourv16b_POST_LD4Fourv2s_POST_LD4Fourv4h_POST_LD4Fourv4s_POST_LD4Fourv8b_POST_LD4Fourv8h_POST") 2, 0, 0, 14, 1, 29, 2,  0, 0}, // #77
  {DBGFIELD("LD4Fourv2d_POST")    2, 0, 0, 13, 1, 27, 2,  0, 0}, // #78
  {DBGFIELD("ST1i16_ST1i32_ST1i64_ST1i8") 1, 0, 0,  6, 1,  7, 1,  0, 0}, // #79
  {DBGFIELD("ST1Onev16b_ST1Onev1d_ST1Onev2d_ST1Onev2s_ST1Onev4h_ST1Onev4s_ST1Onev8b_ST1Onev8h") 1, 0, 0,  6, 1,  7, 1,  0, 0}, // #80
  {DBGFIELD("ST1Twov16b_ST1Twov1d_ST1Twov2d_ST1Twov2s_ST1Twov4h_ST1Twov4s_ST1Twov8b_ST1Twov8h") 1, 0, 0,  6, 1,  7, 1,  0, 0}, // #81
  {DBGFIELD("ST1Threev16b_ST1Threev1d_ST1Threev2d_ST1Threev2s_ST1Threev4h_ST1Threev4s_ST1Threev8b_ST1Threev8h") 1, 0, 0,  7, 1, 21, 1,  0, 0}, // #82
  {DBGFIELD("ST1Fourv16b_ST1Fourv1d_ST1Fourv2d_ST1Fourv2s_ST1Fourv4h_ST1Fourv4s_ST1Fourv8b_ST1Fourv8h") 1, 0, 0,  7, 1, 21, 1,  0, 0}, // #83
  {DBGFIELD("ST1i16_POST_ST1i32_POST_ST1i64_POST_ST1i8_POST") 2, 0, 0,  6, 1, 11, 2,  0, 0}, // #84
  {DBGFIELD("ST1Onev16b_POST_ST1Onev1d_POST_ST1Onev2d_POST_ST1Onev2s_POST_ST1Onev4h_POST_ST1Onev4s_POST_ST1Onev8b_POST_ST1Onev8h_POST") 2, 0, 0,  6, 1, 11, 2,  0, 0}, // #85
  {DBGFIELD("ST1Twov16b_POST_ST1Twov1d_POST_ST1Twov2d_POST_ST1Twov2s_POST_ST1Twov4h_POST_ST1Twov4s_POST_ST1Twov8b_POST_ST1Twov8h_POST") 2, 0, 0,  6, 1, 11, 2,  0, 0}, // #86
  {DBGFIELD("ST1Threev16b_POST_ST1Threev1d_POST_ST1Threev2d_POST_ST1Threev2s_POST_ST1Threev4h_POST_ST1Threev4s_POST_ST1Threev8b_POST_ST1Threev8h_POST") 2, 0, 0,  7, 1, 23, 2,  0, 0}, // #87
  {DBGFIELD("ST1Fourv16b_POST_ST1Fourv1d_POST_ST1Fourv2d_POST_ST1Fourv2s_POST_ST1Fourv4h_POST_ST1Fourv4s_POST_ST1Fourv8b_POST_ST1Fourv8h_POST") 2, 0, 0,  7, 1, 23, 2,  0, 0}, // #88
  {DBGFIELD("ST2i16_ST2i32_ST2i64_ST2i8") 1, 0, 0,  6, 1,  7, 1,  0, 0}, // #89
  {DBGFIELD("ST2Twov2s_ST2Twov4h_ST2Twov8b") 1, 0, 0,  6, 1,  7, 1,  0, 0}, // #90
  {DBGFIELD("ST2Twov16b_ST2Twov2d_ST2Twov4s_ST2Twov8h") 1, 0, 0,  7, 1, 21, 1,  0, 0}, // #91
  {DBGFIELD("ST2i16_POST_ST2i32_POST_ST2i64_POST_ST2i8_POST") 2, 0, 0,  6, 1, 11, 2,  0, 0}, // #92
  {DBGFIELD("ST2Twov2s_POST_ST2Twov4h_POST_ST2Twov8b_POST") 2, 0, 0,  6, 1, 11, 2,  0, 0}, // #93
  {DBGFIELD("ST2Twov16b_POST_ST2Twov2d_POST_ST2Twov4s_POST_ST2Twov8h_POST") 2, 0, 0,  7, 1, 23, 2,  0, 0}, // #94
  {DBGFIELD("ST3i16_ST3i32_ST3i64_ST3i8") 1, 0, 0,  7, 1, 21, 1,  0, 0}, // #95
  {DBGFIELD("ST3Threev16b_ST3Threev2s_ST3Threev4h_ST3Threev4s_ST3Threev8b_ST3Threev8h") 1, 0, 0, 12, 1,  1, 1,  0, 0}, // #96
  {DBGFIELD("ST3Threev2d")        1, 0, 0,  7, 1, 21, 1,  0, 0}, // #97
  {DBGFIELD("ST3i16_POST_ST3i32_POST_ST3i64_POST_ST3i8_POST") 2, 0, 0,  7, 1, 23, 2,  0, 0}, // #98
  {DBGFIELD("ST3Threev16b_POST_ST3Threev2s_POST_ST3Threev4h_POST_ST3Threev4s_POST_ST3Threev8b_POST_ST3Threev8h_POST") 2, 0, 0, 12, 1, 25, 2,  0, 0}, // #99
  {DBGFIELD("ST3Threev2d_POST")   2, 0, 0,  7, 1, 23, 2,  0, 0}, // #100
  {DBGFIELD("ST4i16_ST4i32_ST4i64_ST4i8") 1, 0, 0,  7, 1, 21, 1,  0, 0}, // #101
  {DBGFIELD("ST4Fourv16b_ST4Fourv2s_ST4Fourv4h_ST4Fourv4s_ST4Fourv8b_ST4Fourv8h") 1, 0, 0, 12, 1,  1, 1,  0, 0}, // #102
  {DBGFIELD("ST4Fourv2d")         1, 0, 0,  7, 1, 21, 1,  0, 0}, // #103
  {DBGFIELD("ST4i16_POST_ST4i32_POST_ST4i64_POST_ST4i8_POST") 2, 0, 0,  7, 1, 23, 2,  0, 0}, // #104
  {DBGFIELD("ST4Fourv16b_POST_ST4Fourv2s_POST_ST4Fourv4h_POST_ST4Fourv4s_POST_ST4Fourv8b_POST_ST4Fourv8h_POST") 2, 0, 0, 12, 1, 25, 2,  0, 0}, // #105
  {DBGFIELD("ST4Fourv2d_POST")    2, 0, 0,  7, 1, 23, 2,  0, 0}, // #106
  {DBGFIELD("FMADDDrrr_FMADDSrrr_FMSUBDrrr_FMSUBSrrr_FNMADDDrrr_FNMADDSrrr_FNMSUBDrrr_FNMSUBSrrr") 1, 0, 0,  5, 1, 31, 1,  0, 0}, // #107
  {DBGFIELD("FMLAv1i32_indexed_FMLAv1i64_indexed_FMLAv2f32_FMLAv2f64_FMLAv2i32_indexed_FMLAv2i64_indexed_FMLAv4f32_FMLAv4i32_indexed_FMLSv1i32_indexed_FMLSv1i64_indexed_FMLSv2f32_FMLSv2f64_FMLSv2i32_indexed_FMLSv2i64_indexed_FMLSv4f32_FMLSv4i32_indexed") 1, 0, 0,  5, 1, 31, 1,  0, 0}, // #108
  {DBGFIELD("FDIVSrr")            1, 0, 0, 15, 1, 32, 1,  0, 0}, // #109
  {DBGFIELD("FDIVDrr")            1, 0, 0,  4, 1,  6, 1,  0, 0}, // #110
  {DBGFIELD("FDIVv2f32_FDIVv4f32") 1, 0, 0, 15, 1, 32, 1,  0, 0}, // #111
  {DBGFIELD("FDIVv2f64")          1, 0, 0,  4, 1,  6, 1,  0, 0}, // #112
  {DBGFIELD("FRSQRTEv1i32_FRSQRTEv2f32_FRSQRTEv4f32_FRSQRTS32_FRSQRTSv2f32_FRSQRTSv4f32_FSQRTv2f32_FSQRTv4f32_URSQRTEv2i32_URSQRTEv4i32") 1, 0, 0, 16, 1, 33, 1,  0, 0}, // #113
  {DBGFIELD("FRSQRTEv1i64_FRSQRTEv2f64_FRSQRTS64_FRSQRTSv2f64_FSQRTv2f64") 1, 0, 0, 17, 1, 34, 1,  0, 0}, // #114
  {DBGFIELD("BL")                 1, 0, 0,  3, 1,  4, 1,  0, 0}, // #115
  {DBGFIELD("BLR")                1, 0, 0,  3, 1,  4, 1,  0, 0}, // #116
  {DBGFIELD("SMULHrr_UMULHrr")    1, 0, 0, 10, 1, 16, 1, 19, 18}, // #117
  {DBGFIELD("EXTRWrri")           1, 0, 0,  2, 1,  5, 1,  0, 1}, // #118
  {DBGFIELD("EXTRXrri")           1, 0, 0,  2, 1,  5, 1,  0, 1}, // #119
  {DBGFIELD("BFMWri_BFMXri")      1, 0, 0,  2, 1,  3, 1,  1, 9}, // #120
  {DBGFIELD("CRC32Brr_CRC32CBrr_CRC32CHrr_CRC32CWrr_CRC32CXrr_CRC32Hrr_CRC32Wrr_CRC32Xrr") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #121
  {DBGFIELD("LD1i16_LD1i32_LD1i8") 1, 0, 0,  6, 1,  7, 1,  0, 0}, // #122
  {DBGFIELD("LD1i16_POST_LD1i32_POST_LD1i8_POST") 2, 0, 0,  6, 1, 11, 2,  0, 0}, // #123
  {DBGFIELD("LD1Rv2s_LD1Rv4h_LD1Rv8b") 1, 0, 0,  6, 1,  7, 1,  0, 0}, // #124
  {DBGFIELD("LD1Rv2s_POST_LD1Rv4h_POST_LD1Rv8b_POST") 2, 0, 0,  6, 1, 11, 2,  0, 0}, // #125
  {DBGFIELD("LD1Rv1d")            1, 0, 0,  6, 1,  7, 1,  0, 0}, // #126
  {DBGFIELD("LD1Rv1d_POST")       2, 0, 0,  6, 1, 11, 2,  0, 0}, // #127
  {DBGFIELD("LD1Onev1d_LD1Onev2s_LD1Onev4h_LD1Onev8b") 1, 0, 0,  6, 1,  7, 1,  0, 0}, // #128
  {DBGFIELD("LD1Onev1d_POST_LD1Onev2s_POST_LD1Onev4h_POST_LD1Onev8b_POST") 2, 0, 0,  6, 1, 11, 2,  0, 0}, // #129
  {DBGFIELD("LD1Twov1d_LD1Twov2s_LD1Twov4h_LD1Twov8b") 1, 0, 0,  7, 1, 21, 1,  0, 0}, // #130
  {DBGFIELD("LD1Twov1d_POST_LD1Twov2s_POST_LD1Twov4h_POST_LD1Twov8b_POST") 2, 0, 0,  7, 1, 23, 2,  0, 0}, // #131
  {DBGFIELD("LD1Threev1d_LD1Threev2s_LD1Threev4h_LD1Threev8b") 1, 0, 0, 12, 1,  1, 1,  0, 0}, // #132
  {DBGFIELD("LD1Threev1d_POST_LD1Threev2s_POST_LD1Threev4h_POST_LD1Threev8b_POST") 2, 0, 0, 12, 1, 25, 2,  0, 0}, // #133
  {DBGFIELD("LD1Fourv1d_LD1Fourv2s_LD1Fourv4h_LD1Fourv8b") 1, 0, 0, 13, 1, 22, 1,  0, 0}, // #134
  {DBGFIELD("LD1Fourv1d_POST_LD1Fourv2s_POST_LD1Fourv4h_POST_LD1Fourv8b_POST") 2, 0, 0, 13, 1, 27, 2,  0, 0}, // #135
  {DBGFIELD("LD2i16_LD2i8")       1, 0, 0,  6, 1,  7, 1,  0, 0}, // #136
  {DBGFIELD("LD2i16_POST_LD2i8_POST") 2, 0, 0,  6, 1, 11, 2,  0, 0}, // #137
  {DBGFIELD("LD2i32")             1, 0, 0,  6, 1,  7, 1,  0, 0}, // #138
  {DBGFIELD("LD2i32_POST")        2, 0, 0,  6, 1, 11, 2,  0, 0}, // #139
  {DBGFIELD("LD2Rv2s_LD2Rv4h_LD2Rv8b") 1, 0, 0,  6, 1,  7, 1,  0, 0}, // #140
  {DBGFIELD("LD2Rv2s_POST_LD2Rv4h_POST_LD2Rv8b_POST") 2, 0, 0,  6, 1, 11, 2,  0, 0}, // #141
  {DBGFIELD("LD2Rv1d")            1, 0, 0,  6, 1,  7, 1,  0, 0}, // #142
  {DBGFIELD("LD2Rv1d_POST")       2, 0, 0,  6, 1, 11, 2,  0, 0}, // #143
  {DBGFIELD("LD2Twov16b_LD2Twov4s_LD2Twov8h") 1, 0, 0, 13, 1, 22, 1,  0, 0}, // #144
  {DBGFIELD("LD2Twov16b_POST_LD2Twov4s_POST_LD2Twov8h_POST") 2, 0, 0, 13, 1, 27, 2,  0, 0}, // #145
  {DBGFIELD("LD3i16_LD3i8")       1, 0, 0,  7, 1, 21, 1,  0, 0}, // #146
  {DBGFIELD("LD3i16_POST_LD3i8_POST") 2, 0, 0,  7, 1, 23, 2,  0, 0}, // #147
  {DBGFIELD("LD3i32")             1, 0, 0,  7, 1, 21, 1,  0, 0}, // #148
  {DBGFIELD("LD3i32_POST")        2, 0, 0,  7, 1, 23, 2,  0, 0}, // #149
  {DBGFIELD("LD3Rv2s_LD3Rv4h_LD3Rv8b") 1, 0, 0,  7, 1, 21, 1,  0, 0}, // #150
  {DBGFIELD("LD3Rv2s_POST_LD3Rv4h_POST_LD3Rv8b_POST") 2, 0, 0,  7, 1, 23, 2,  0, 0}, // #151
  {DBGFIELD("LD3Rv1d")            1, 0, 0,  7, 1, 21, 1,  0, 0}, // #152
  {DBGFIELD("LD3Rv1d_POST")       2, 0, 0,  7, 1, 23, 2,  0, 0}, // #153
  {DBGFIELD("LD3Rv16b_LD3Rv4s_LD3Rv8h") 1, 0, 0,  7, 1, 21, 1,  0, 0}, // #154
  {DBGFIELD("LD3Rv16b_POST_LD3Rv4s_POST_LD3Rv8h_POST") 2, 0, 0,  7, 1, 23, 2,  0, 0}, // #155
  {DBGFIELD("LD3Threev2s_LD3Threev4h_LD3Threev8b") 1, 0, 0, 13, 1, 22, 1,  0, 0}, // #156
  {DBGFIELD("LD3Threev2s_POST_LD3Threev4h_POST_LD3Threev8b_POST") 2, 0, 0, 13, 1, 27, 2,  0, 0}, // #157
  {DBGFIELD("LD4i16_LD4i8")       1, 0, 0,  7, 1, 21, 1,  0, 0}, // #158
  {DBGFIELD("LD4i16_POST_LD4i8_POST") 2, 0, 0,  7, 1, 23, 2,  0, 0}, // #159
  {DBGFIELD("LD4i32")             1, 0, 0,  7, 1, 21, 1,  0, 0}, // #160
  {DBGFIELD("LD4i32_POST")        2, 0, 0,  7, 1, 23, 2,  0, 0}, // #161
  {DBGFIELD("LD4Rv2s_LD4Rv4h_LD4Rv8b") 1, 0, 0,  7, 1, 21, 1,  0, 0}, // #162
  {DBGFIELD("LD4Rv2s_POST_LD4Rv4h_POST_LD4Rv8b_POST") 2, 0, 0,  7, 1, 23, 2,  0, 0}, // #163
  {DBGFIELD("LD4Rv1d")            1, 0, 0,  7, 1, 21, 1,  0, 0}, // #164
  {DBGFIELD("LD4Rv1d_POST")       2, 0, 0,  7, 1, 23, 2,  0, 0}, // #165
  {DBGFIELD("LD4Rv16b_LD4Rv4s_LD4Rv8h") 1, 0, 0,  7, 1, 21, 1,  0, 0}, // #166
  {DBGFIELD("LD4Rv16b_POST_LD4Rv4s_POST_LD4Rv8h_POST") 2, 0, 0,  7, 1, 23, 2,  0, 0}, // #167
  {DBGFIELD("LD4Fourv2s_LD4Fourv4h_LD4Fourv8b") 1, 0, 0, 14, 1, 20, 1,  0, 0}, // #168
  {DBGFIELD("LD4Fourv2s_POST_LD4Fourv4h_POST_LD4Fourv8b_POST") 2, 0, 0, 14, 1, 29, 2,  0, 0}, // #169
  {DBGFIELD("ST1i16_ST1i32_ST1i8") 1, 0, 0,  6, 1,  7, 1,  0, 0}, // #170
  {DBGFIELD("ST1i16_POST_ST1i32_POST_ST1i8_POST") 2, 0, 0,  6, 1, 11, 2,  0, 0}, // #171
  {DBGFIELD("ST1Onev1d_ST1Onev2s_ST1Onev4h_ST1Onev8b") 1, 0, 0,  6, 1,  7, 1,  0, 0}, // #172
  {DBGFIELD("ST1Onev1d_POST_ST1Onev2s_POST_ST1Onev4h_POST_ST1Onev8b_POST") 2, 0, 0,  6, 1, 11, 2,  0, 0}, // #173
  {DBGFIELD("ST1Twov1d_ST1Twov2s_ST1Twov4h_ST1Twov8b") 1, 0, 0,  6, 1,  7, 1,  0, 0}, // #174
  {DBGFIELD("ST1Twov1d_POST_ST1Twov2s_POST_ST1Twov4h_POST_ST1Twov8b_POST") 2, 0, 0,  6, 1, 11, 2,  0, 0}, // #175
  {DBGFIELD("ST1Threev1d_ST1Threev2s_ST1Threev4h_ST1Threev8b") 1, 0, 0,  7, 1, 21, 1,  0, 0}, // #176
  {DBGFIELD("ST1Threev1d_POST_ST1Threev2s_POST_ST1Threev4h_POST_ST1Threev8b_POST") 2, 0, 0,  7, 1, 23, 2,  0, 0}, // #177
  {DBGFIELD("ST1Fourv1d_ST1Fourv2s_ST1Fourv4h_ST1Fourv8b") 1, 0, 0,  7, 1, 21, 1,  0, 0}, // #178
  {DBGFIELD("ST1Fourv1d_POST_ST1Fourv2s_POST_ST1Fourv4h_POST_ST1Fourv8b_POST") 2, 0, 0,  7, 1, 23, 2,  0, 0}, // #179
  {DBGFIELD("ST2i16_ST2i32_ST2i8") 1, 0, 0,  6, 1,  7, 1,  0, 0}, // #180
  {DBGFIELD("ST2i16_POST_ST2i32_POST_ST2i8_POST") 2, 0, 0,  6, 1, 11, 2,  0, 0}, // #181
  {DBGFIELD("ST2Twov16b_ST2Twov4s_ST2Twov8h") 1, 0, 0,  7, 1, 21, 1,  0, 0}, // #182
  {DBGFIELD("ST2Twov16b_POST_ST2Twov4s_POST_ST2Twov8h_POST") 2, 0, 0,  7, 1, 23, 2,  0, 0}, // #183
  {DBGFIELD("ST3i16_ST3i8")       1, 0, 0,  7, 1, 21, 1,  0, 0}, // #184
  {DBGFIELD("ST3i16_POST_ST3i8_POST") 2, 0, 0,  7, 1, 23, 2,  0, 0}, // #185
  {DBGFIELD("ST3i32")             1, 0, 0,  7, 1, 21, 1,  0, 0}, // #186
  {DBGFIELD("ST3i32_POST")        2, 0, 0,  7, 1, 23, 2,  0, 0}, // #187
  {DBGFIELD("ST3Threev2s_ST3Threev4h_ST3Threev8b") 1, 0, 0, 12, 1,  1, 1,  0, 0}, // #188
  {DBGFIELD("ST3Threev2s_POST_ST3Threev4h_POST_ST3Threev8b_POST") 2, 0, 0, 12, 1, 25, 2,  0, 0}, // #189
  {DBGFIELD("ST4i16_ST4i8")       1, 0, 0,  7, 1, 21, 1,  0, 0}, // #190
  {DBGFIELD("ST4i16_POST_ST4i8_POST") 2, 0, 0,  7, 1, 23, 2,  0, 0}, // #191
  {DBGFIELD("ST4i32")             1, 0, 0,  7, 1, 21, 1,  0, 0}, // #192
  {DBGFIELD("ST4i32_POST")        2, 0, 0,  7, 1, 23, 2,  0, 0}, // #193
  {DBGFIELD("ST4Fourv2s_ST4Fourv4h_ST4Fourv8b") 1, 0, 0, 12, 1,  1, 1,  0, 0}, // #194
  {DBGFIELD("ST4Fourv2s_POST_ST4Fourv4h_POST_ST4Fourv8b_POST") 2, 0, 0, 12, 1, 25, 2,  0, 0}, // #195
  {DBGFIELD("MOVZWi_MOVZXi")      1, 0, 0,  2, 1, 17, 1,  0, 0}, // #196
  {DBGFIELD("ANDWri_ANDXri")      1, 0, 0,  2, 1,  2, 1,  1, 9}, // #197
  {DBGFIELD("ORRXrr_ADDXrr")      1, 0, 0,  2, 1,  2, 1,  1, 18}, // #198
  {DBGFIELD("STPQi")              1, 0, 0,  6, 1,  7, 1,  0, 0}, // #199
  {DBGFIELD("ISB")                1, 0, 0,  3, 1,  4, 1,  0, 0}, // #200
  {DBGFIELD("ORRv16i8")           1, 0, 0,  1, 1,  1, 1,  0, 0}, // #201
  {DBGFIELD("FMOVSWr_FMOVDXr_FMOVDXHighr") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #202
  {DBGFIELD("INSvi16gpr_INSvi16lane_INSvi32gpr_INSvi32lane_INSvi64gpr_INSvi64lane_INSvi8gpr_INSvi8lane") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #203
  {DBGFIELD("SMOVvi16to32_SMOVvi16to64_SMOVvi32to64_SMOVvi8to32_SMOVvi8to64_UMOVvi16_UMOVvi32_UMOVvi64_UMOVvi8") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #204
  {DBGFIELD("DUPv16i8gpr_DUPv16i8lane_DUPv2i32gpr_DUPv2i32lane_DUPv2i64gpr_DUPv2i64lane_DUPv4i16gpr_DUPv4i16lane_DUPv4i32gpr_DUPv4i32lane_DUPv8i16gpr_DUPv8i16lane_DUPv8i8gpr_DUPv8i8lane") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #205
  {DBGFIELD("ABSv16i8_ABSv1i64_ABSv2i32_ABSv2i64_ABSv4i16_ABSv4i32_ABSv8i16_ABSv8i8") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #206
  {DBGFIELD("SQABSv16i8_SQABSv1i16_SQABSv1i32_SQABSv1i64_SQABSv1i8_SQABSv2i32_SQABSv2i64_SQABSv4i16_SQABSv4i32_SQABSv8i16_SQABSv8i8_SQNEGv16i8_SQNEGv1i16_SQNEGv1i32_SQNEGv1i64_SQNEGv1i8_SQNEGv2i32_SQNEGv2i64_SQNEGv4i16_SQNEGv4i32_SQNEGv8i16_SQNEGv8i8") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #207
  {DBGFIELD("SADDLPv16i8_v8i16_SADDLPv2i32_v1i64_SADDLPv4i16_v2i32_SADDLPv4i32_v2i64_SADDLPv8i16_v4i32_SADDLPv8i8_v4i16_UADDLPv16i8_v8i16_UADDLPv2i32_v1i64_UADDLPv4i16_v2i32_UADDLPv4i32_v2i64_UADDLPv8i16_v4i32_UADDLPv8i8_v4i16") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #208
  {DBGFIELD("ADDVv16i8v_ADDVv4i16v_ADDVv4i32v_ADDVv8i16v_ADDVv8i8v_SMAXVv16i8v_SMAXVv4i16v_SMAXVv4i32v_SMAXVv8i16v_SMAXVv8i8v_SMINVv16i8v_SMINVv4i16v_SMINVv4i32v_SMINVv8i16v_SMINVv8i8v_UMAXVv16i8v_UMAXVv4i16v_UMAXVv4i32v_UMAXVv8i16v_UMAXVv8i8v_UMINVv16i8v_UMINVv4i16v_UMINVv4i32v_UMINVv8i16v_UMINVv8i8v") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #209
  {DBGFIELD("SADDLVv16i8v_SADDLVv4i16v_SADDLVv4i32v_SADDLVv8i16v_SADDLVv8i8v_UADDLVv16i8v_UADDLVv4i16v_UADDLVv4i32v_UADDLVv8i16v_UADDLVv8i8v") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #210
  {DBGFIELD("SADALPv16i8_v8i16_SADALPv2i32_v1i64_SADALPv4i16_v2i32_SADALPv4i32_v2i64_SADALPv8i16_v4i32_SADALPv8i8_v4i16_UADALPv16i8_v8i16_UADALPv2i32_v1i64_UADALPv4i16_v2i32_UADALPv4i32_v2i64_UADALPv8i16_v4i32_UADALPv8i8_v4i16") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #211
  {DBGFIELD("SABALv16i8_v8i16_SABALv2i32_v2i64_SABALv4i16_v4i32_SABALv4i32_v2i64_SABALv8i16_v4i32_SABALv8i8_v8i16_SABAv16i8_SABAv2i32_SABAv4i16_SABAv4i32_SABAv8i16_SABAv8i8_UABALv16i8_v8i16_UABALv2i32_v2i64_UABALv4i16_v4i32_UABALv4i32_v2i64_UABALv8i16_v4i32_UABALv8i8_v8i16_UABAv16i8_UABAv2i32_UABAv4i16_UABAv4i32_UABAv8i16_UABAv8i8") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #212
  {DBGFIELD("SQADDv16i8_SQADDv1i16_SQADDv1i32_SQADDv1i64_SQADDv1i8_SQADDv2i32_SQADDv2i64_SQADDv4i16_SQADDv4i32_SQADDv8i16_SQADDv8i8_SQSUBv16i8_SQSUBv1i16_SQSUBv1i32_SQSUBv1i64_SQSUBv1i8_SQSUBv2i32_SQSUBv2i64_SQSUBv4i16_SQSUBv4i32_SQSUBv8i16_SQSUBv8i8_UQADDv16i8_UQADDv1i16_UQADDv1i32_UQADDv1i64_UQADDv1i8_UQADDv2i32_UQADDv2i64_UQADDv4i16_UQADDv4i32_UQADDv8i16_UQADDv8i8_UQSUBv16i8_UQSUBv1i16_UQSUBv1i32_UQSUBv1i64_UQSUBv1i8_UQSUBv2i32_UQSUBv2i64_UQSUBv4i16_UQSUBv4i32_UQSUBv8i16_UQSUBv8i8") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #213
  {DBGFIELD("SUQADDv16i8_SUQADDv1i16_SUQADDv1i32_SUQADDv1i64_SUQADDv1i8_SUQADDv2i32_SUQADDv2i64_SUQADDv4i16_SUQADDv4i32_SUQADDv8i16_SUQADDv8i8_USQADDv16i8_USQADDv1i16_USQADDv1i32_USQADDv1i64_USQADDv1i8_USQADDv2i32_USQADDv2i64_USQADDv4i16_USQADDv4i32_USQADDv8i16_USQADDv8i8") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #214
  {DBGFIELD("ADDHNv2i64_v2i32_ADDHNv2i64_v4i32_ADDHNv4i32_v4i16_ADDHNv4i32_v8i16_ADDHNv8i16_v16i8_ADDHNv8i16_v8i8_RADDHNv2i64_v2i32_RADDHNv2i64_v4i32_RADDHNv4i32_v4i16_RADDHNv4i32_v8i16_RADDHNv8i16_v16i8_RADDHNv8i16_v8i8_RSUBHNv2i64_v2i32_RSUBHNv2i64_v4i32_RSUBHNv4i32_v4i16_RSUBHNv4i32_v8i16_RSUBHNv8i16_v16i8_RSUBHNv8i16_v8i8_SUBHNv2i64_v2i32_SUBHNv2i64_v4i32_SUBHNv4i32_v4i16_SUBHNv4i32_v8i16_SUBHNv8i16_v16i8_SUBHNv8i16_v8i8") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #215
  {DBGFIELD("CMEQv16i8_CMEQv16i8rz_CMEQv1i64_CMEQv1i64rz_CMEQv2i32_CMEQv2i32rz_CMEQv2i64_CMEQv2i64rz_CMEQv4i16_CMEQv4i16rz_CMEQv4i32_CMEQv4i32rz_CMEQv8i16_CMEQv8i16rz_CMEQv8i8_CMEQv8i8rz_CMGEv16i8_CMGEv16i8rz_CMGEv1i64_CMGEv1i64rz_CMGEv2i32_CMGEv2i32rz_CMGEv2i64_CMGEv2i64rz_CMGEv4i16_CMGEv4i16rz_CMGEv4i32_CMGEv4i32rz_CMGEv8i16_CMGEv8i16rz_CMGEv8i8_CMGEv8i8rz_CMGTv16i8_CMGTv16i8rz_CMGTv1i64_CMGTv1i64rz_CMGTv2i32_CMGTv2i32rz_CMGTv2i64_CMGTv2i64rz_CMGTv4i16_CMGTv4i16rz_CMGTv4i32_CMGTv4i32rz_CMGTv8i16_CMGTv8i16rz_CMGTv8i8_CMGTv8i8rz_CMHIv16i8_CMHIv1i64_CMHIv2i32_CMHIv2i64_CMHIv4i16_CMHIv4i32_CMHIv8i16_CMHIv8i8_CMHSv16i8_CMHSv1i64_CMHSv2i32_CMHSv2i64_CMHSv4i16_CMHSv4i32_CMHSv8i16_CMHSv8i8_CMLEv16i8rz_CMLEv1i64rz_CMLEv2i32rz_CMLEv2i64rz_CMLEv4i16rz_CMLEv4i32rz_CMLEv8i16rz_CMLEv8i8rz_CMLTv16i8rz_CMLTv1i64rz_CMLTv2i32rz_CMLTv2i64rz_CMLTv4i16rz_CMLTv4i32rz_CMLTv8i16rz_CMLTv8i8rz") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #216
  {DBGFIELD("SMAXPv16i8_SMAXPv2i32_SMAXPv4i16_SMAXPv4i32_SMAXPv8i16_SMAXPv8i8_SMAXv16i8_SMAXv2i32_SMAXv4i16_SMAXv4i32_SMAXv8i16_SMAXv8i8_SMINPv16i8_SMINPv2i32_SMINPv4i16_SMINPv4i32_SMINPv8i16_SMINPv8i8_SMINv16i8_SMINv2i32_SMINv4i16_SMINv4i32_SMINv8i16_SMINv8i8_UMAXPv16i8_UMAXPv2i32_UMAXPv4i16_UMAXPv4i32_UMAXPv8i16_UMAXPv8i8_UMAXv16i8_UMAXv2i32_UMAXv4i16_UMAXv4i32_UMAXv8i16_UMAXv8i8_UMINPv16i8_UMINPv2i32_UMINPv4i16_UMINPv4i32_UMINPv8i16_UMINPv8i8_UMINv16i8_UMINv2i32_UMINv4i16_UMINv4i32_UMINv8i16_UMINv8i8") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #217
  {DBGFIELD("SABDLv16i8_v8i16_SABDLv2i32_v2i64_SABDLv4i16_v4i32_SABDLv4i32_v2i64_SABDLv8i16_v4i32_SABDLv8i8_v8i16_SABDv16i8_SABDv2i32_SABDv4i16_SABDv4i32_SABDv8i16_SABDv8i8_UABDLv16i8_v8i16_UABDLv2i32_v2i64_UABDLv4i16_v4i32_UABDLv4i32_v2i64_UABDLv8i16_v4i32_UABDLv8i8_v8i16_UABDv16i8_UABDv2i32_UABDv4i16_UABDv4i32_UABDv8i16_UABDv8i8") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #218
  {DBGFIELD("FADDPv2i32p")        1, 0, 0,  1, 1,  1, 1,  0, 0}, // #219
  {DBGFIELD("FADDPv2i64p")        1, 0, 0,  1, 1,  1, 1,  0, 0}, // #220
  {DBGFIELD("FMAXNMPv2i32p_FMAXNMPv2i64p_FMAXPv2i32p_FMAXPv2i64p_FMINNMPv2i32p_FMINNMPv2i64p_FMINPv2i32p_FMINPv2i64p") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #221
  {DBGFIELD("FMAXNMVv4i32v_FMAXVv4i32v_FMINNMVv4i32v_FMINVv4i32v") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #222
  {DBGFIELD("FADDSrr_FSUBSrr")    1, 0, 0,  1, 1,  1, 1,  0, 0}, // #223
  {DBGFIELD("FADDv2f32_FADDv4f32_FSUBv2f32_FSUBv4f32_FADDPv2f32_FADDPv4f32_FABD32_FABDv2f32_FABDv4f32") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #224
  {DBGFIELD("FADDDrr_FSUBDrr")    1, 0, 0,  1, 1,  1, 1,  0, 0}, // #225
  {DBGFIELD("FADDv2f64_FSUBv2f64_FADDPv2f64_FABD64_FABDv2f64") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #226
  {DBGFIELD("FCMEQ32_FCMEQ64_FCMEQv1i32rz_FCMEQv1i64rz_FCMEQv2f32_FCMEQv2f64_FCMEQv2i32rz_FCMEQv2i64rz_FCMEQv4f32_FCMEQv4i32rz_FCMGT32_FCMGT64_FCMGTv1i32rz_FCMGTv1i64rz_FCMGTv2f32_FCMGTv2f64_FCMGTv2i32rz_FCMGTv2i64rz_FCMGTv4f32_FCMGTv4i32rz_FCMLEv1i32rz_FCMLEv1i64rz_FCMLEv2i32rz_FCMLEv2i64rz_FCMLEv4i32rz_FCMLTv1i32rz_FCMLTv1i64rz_FCMLTv2i32rz_FCMLTv2i64rz_FCMLTv4i32rz") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #227
  {DBGFIELD("FACGE32_FACGE64_FACGEv2f32_FACGEv2f64_FACGEv4f32_FACGT32_FACGT64_FACGTv2f32_FACGTv2f64_FACGTv4f32_FMAXNMPv2f32_FMAXNMPv2f64_FMAXNMPv4f32_FMAXNMv2f32_FMAXNMv2f64_FMAXNMv4f32_FMAXPv2f32_FMAXPv2f64_FMAXPv4f32_FMAXv2f32_FMAXv2f64_FMAXv4f32_FMINNMPv2f32_FMINNMPv2f64_FMINNMPv4f32_FMINNMv2f32_FMINNMv2f64_FMINNMv4f32_FMINPv2f32_FMINPv2f64_FMINPv4f32_FMINv2f32_FMINv2f64_FMINv4f32") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #228
  {DBGFIELD("FMAXDrr_FMAXNMDrr_FMAXNMSrr_FMAXSrr_FMINDrr_FMINNMDrr_FMINNMSrr_FMINSrr") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #229
  {DBGFIELD("SSHRv16i8_shift_SSHRv2i32_shift_SSHRv2i64_shift_SSHRv4i16_shift_SSHRv4i32_shift_SSHRv8i16_shift_SSHRv8i8_shift_USHRv16i8_shift_USHRv2i32_shift_USHRv2i64_shift_USHRv4i16_shift_USHRv4i32_shift_USHRv8i16_shift_USHRv8i8_shift") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #230
  {DBGFIELD("SRSHRv16i8_shift_SRSHRv2i32_shift_SRSHRv2i64_shift_SRSHRv4i16_shift_SRSHRv4i32_shift_SRSHRv8i16_shift_SRSHRv8i8_shift_URSHRv16i8_shift_URSHRv2i32_shift_URSHRv2i64_shift_URSHRv4i16_shift_URSHRv4i32_shift_URSHRv8i16_shift_URSHRv8i8_shift") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #231
  {DBGFIELD("SRSRAv16i8_shift_SRSRAv2i32_shift_SRSRAv2i64_shift_SRSRAv4i16_shift_SRSRAv4i32_shift_SRSRAv8i16_shift_SRSRAv8i8_shift_SSRAv16i8_shift_SSRAv2i32_shift_SSRAv2i64_shift_SSRAv4i16_shift_SSRAv4i32_shift_SSRAv8i16_shift_SSRAv8i8_shift_URSRAv16i8_shift_URSRAv2i32_shift_URSRAv2i64_shift_URSRAv4i16_shift_URSRAv4i32_shift_URSRAv8i16_shift_URSRAv8i8_shift_USRAv16i8_shift_USRAv2i32_shift_USRAv2i64_shift_USRAv4i16_shift_USRAv4i32_shift_USRAv8i16_shift_USRAv8i8_shift") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #232
  {DBGFIELD("SRSHLv16i8_SRSHLv1i64_SRSHLv2i32_SRSHLv2i64_SRSHLv4i16_SRSHLv4i32_SRSHLv8i16_SRSHLv8i8_URSHLv16i8_URSHLv1i64_URSHLv2i32_URSHLv2i64_URSHLv4i16_URSHLv4i32_URSHLv8i16_URSHLv8i8") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #233
  {DBGFIELD("SQRSHLv16i8_SQRSHLv1i16_SQRSHLv1i32_SQRSHLv1i64_SQRSHLv1i8_SQRSHLv2i32_SQRSHLv2i64_SQRSHLv4i16_SQRSHLv4i32_SQRSHLv8i16_SQRSHLv8i8_UQRSHLv16i8_UQRSHLv1i16_UQRSHLv1i32_UQRSHLv1i64_UQRSHLv1i8_UQRSHLv2i32_UQRSHLv2i64_UQRSHLv4i16_UQRSHLv4i32_UQRSHLv8i16_UQRSHLv8i8") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #234
  {DBGFIELD("RSHRNv16i8_shift_RSHRNv2i32_shift_RSHRNv4i16_shift_RSHRNv4i32_shift_RSHRNv8i16_shift_RSHRNv8i8_shift_SHRNv16i8_shift_SHRNv2i32_shift_SHRNv4i16_shift_SHRNv4i32_shift_SHRNv8i16_shift_SHRNv8i8_shift_SQRSHRNv16i8_shift_SQRSHRNv2i32_shift_SQRSHRNv4i16_shift_SQRSHRNv4i32_shift_SQRSHRNv8i16_shift_SQRSHRNv8i8_shift_SQRSHRUNv16i8_shift_SQRSHRUNv2i32_shift_SQRSHRUNv4i16_shift_SQRSHRUNv4i32_shift_SQRSHRUNv8i16_shift_SQRSHRUNv8i8_shift_SQSHRNv16i8_shift_SQSHRNv2i32_shift_SQSHRNv4i16_shift_SQSHRNv4i32_shift_SQSHRNv8i16_shift_SQSHRNv8i8_shift_SQSHRUNv16i8_shift_SQSHRUNv2i32_shift_SQSHRUNv4i16_shift_SQSHRUNv4i32_shift_SQSHRUNv8i16_shift_SQSHRUNv8i8_shift_SQXTNv16i8_SQXTNv1i16_SQXTNv1i32_SQXTNv1i8_SQXTNv2i32_SQXTNv4i16_SQXTNv4i32_SQXTNv8i16_SQXTNv8i8_SQXTUNv16i8_SQXTUNv1i16_SQXTUNv1i32_SQXTUNv1i8_SQXTUNv2i32_SQXTUNv4i16_SQXTUNv4i32_SQXTUNv8i16_SQXTUNv8i8_UQRSHRNv16i8_shift_UQRSHRNv2i32_shift_UQRSHRNv4i16_shift_UQRSHRNv4i32_shift_UQRSHRNv8i16_shift_UQRSHRNv8i8_shift_UQSHRNv16i8_shift_UQSHRNv2i32_shift_UQSHRNv4i16_shift_UQSHRNv4i32_shift_UQSHRNv8i16_shift_UQSHRNv8i8_shift_UQXTNv16i8_UQXTNv1i16_UQXTNv1i32_UQXTNv1i8_UQXTNv2i32_UQXTNv4i16_UQXTNv4i32_UQXTNv8i16_UQXTNv8i8") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #235
  {DBGFIELD("MULv16i8_MULv2i32_MULv2i32_indexed_MULv4i16_MULv4i16_indexed_MULv4i32_MULv4i32_indexed_MULv8i16_MULv8i16_indexed_MULv8i8_SMULLv16i8_v8i16_SMULLv2i32_indexed_SMULLv2i32_v2i64_SMULLv4i16_indexed_SMULLv4i16_v4i32_SMULLv4i32_indexed_SMULLv4i32_v2i64_SMULLv8i16_indexed_SMULLv8i16_v4i32_SMULLv8i8_v8i16_SQDMULHv1i16_SQDMULHv1i16_indexed_SQDMULHv1i32_SQDMULHv1i32_indexed_SQDMULHv2i32_SQDMULHv2i32_indexed_SQDMULHv4i16_SQDMULHv4i16_indexed_SQDMULHv4i32_SQDMULHv4i32_indexed_SQDMULHv8i16_SQDMULHv8i16_indexed_SQDMULLv1i32_indexed_SQDMULLv1i64_indexed_SQDMULLv2i32_indexed_SQDMULLv2i32_v2i64_SQDMULLv4i16_indexed_SQDMULLv4i16_v4i32_SQDMULLv4i32_indexed_SQDMULLv4i32_v2i64_SQDMULLv8i16_indexed_SQDMULLv8i16_v4i32_SQRDMULHv1i16_SQRDMULHv1i16_indexed_SQRDMULHv1i32_SQRDMULHv1i32_indexed_SQRDMULHv2i32_SQRDMULHv2i32_indexed_SQRDMULHv4i16_SQRDMULHv4i16_indexed_SQRDMULHv4i32_SQRDMULHv4i32_indexed_SQRDMULHv8i16_SQRDMULHv8i16_indexed_UMULLv16i8_v8i16_UMULLv2i32_indexed_UMULLv2i32_v2i64_UMULLv4i16_indexed_UMULLv4i16_v4i32_UMULLv4i32_indexed_UMULLv4i32_v2i64_UMULLv8i16_indexed_UMULLv8i16_v4i32_UMULLv8i8_v8i16") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #236
  {DBGFIELD("FMULDrr_FNMULDrr")   1, 0, 0,  5, 1,  1, 1,  0, 0}, // #237
  {DBGFIELD("FMULv2f64_FMULv2i64_indexed_FMULX64_FMULXv2f64_FMULXv2i64_indexed") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #238
  {DBGFIELD("MLAv16i8_MLAv2i32_MLAv2i32_indexed_MLAv4i16_MLAv4i16_indexed_MLAv4i32_MLAv4i32_indexed_MLAv8i16_MLAv8i16_indexed_MLAv8i8_MLSv16i8_MLSv2i32_MLSv2i32_indexed_MLSv4i16_MLSv4i16_indexed_MLSv4i32_MLSv4i32_indexed_MLSv8i16_MLSv8i16_indexed_MLSv8i8_SMLALv16i8_v8i16_SMLALv2i32_indexed_SMLALv2i32_v2i64_SMLALv4i16_indexed_SMLALv4i16_v4i32_SMLALv4i32_indexed_SMLALv4i32_v2i64_SMLALv8i16_indexed_SMLALv8i16_v4i32_SMLALv8i8_v8i16_SMLSLv16i8_v8i16_SMLSLv2i32_indexed_SMLSLv2i32_v2i64_SMLSLv4i16_indexed_SMLSLv4i16_v4i32_SMLSLv4i32_indexed_SMLSLv4i32_v2i64_SMLSLv8i16_indexed_SMLSLv8i16_v4i32_SMLSLv8i8_v8i16_SQDMLALi16_SQDMLALi32_SQDMLALv1i32_indexed_SQDMLALv1i64_indexed_SQDMLALv2i32_indexed_SQDMLALv2i32_v2i64_SQDMLALv4i16_indexed_SQDMLALv4i16_v4i32_SQDMLALv4i32_indexed_SQDMLALv4i32_v2i64_SQDMLALv8i16_indexed_SQDMLALv8i16_v4i32_SQDMLSLi16_SQDMLSLi32_SQDMLSLv1i32_indexed_SQDMLSLv1i64_indexed_SQDMLSLv2i32_indexed_SQDMLSLv2i32_v2i64_SQDMLSLv4i16_indexed_SQDMLSLv4i16_v4i32_SQDMLSLv4i32_indexed_SQDMLSLv4i32_v2i64_SQDMLSLv8i16_indexed_SQDMLSLv8i16_v4i32_UMLALv16i8_v8i16_UMLALv2i32_indexed_UMLALv2i32_v2i64_UMLALv4i16_indexed_UMLALv4i16_v4i32_UMLALv4i32_indexed_UMLALv4i32_v2i64_UMLALv8i16_indexed_UMLALv8i16_v4i32_UMLALv8i8_v8i16_UMLSLv16i8_v8i16_UMLSLv2i32_indexed_UMLSLv2i32_v2i64_UMLSLv4i16_indexed_UMLSLv4i16_v4i32_UMLSLv4i32_indexed_UMLSLv4i32_v2i64_UMLSLv8i16_indexed_UMLSLv8i16_v4i32_UMLSLv8i8_v8i16") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #239
  {DBGFIELD("FMADDSrrr_FMSUBSrrr_FNMADDSrrr_FNMSUBSrrr") 1, 0, 0,  5, 1, 31, 1,  0, 0}, // #240
  {DBGFIELD("FMLAv2f32_FMLAv4f32_FMLAv1i32_indexed_FMLAv1i64_indexed_FMLAv2i32_indexed") 1, 0, 0,  5, 1, 31, 1,  0, 0}, // #241
  {DBGFIELD("FMLAv2f64_FMLAv2i64_indexed_FMLSv2f64_FMLSv2i64_indexed") 1, 0, 0,  5, 1, 31, 1,  0, 0}, // #242
  {DBGFIELD("PMULLv16i8_PMULLv1i64_PMULLv2i64_PMULLv8i8_PMULv16i8_PMULv8i8") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #243
  {DBGFIELD("FRECPEv1i32_FRECPEv1i64_FRECPEv2f32_FRECPEv2f64_FRECPEv4f32_FRECPXv1i32_FRECPXv1i64_URECPEv2i32_URECPEv4i32") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #244
  {DBGFIELD("URSQRTEv2i32_URSQRTEv4i32") 1, 0, 0, 16, 1, 33, 1,  0, 0}, // #245
  {DBGFIELD("FRSQRTEv1i32_FRSQRTEv2f32_FRSQRTEv4f32") 1, 0, 0, 16, 1, 33, 1,  0, 0}, // #246
  {DBGFIELD("FRSQRTEv1i64_FRSQRTEv2f64") 1, 0, 0, 17, 1, 34, 1,  0, 0}, // #247
  {DBGFIELD("FRECPSv2f32_FRECPSv2f64_FRECPSv4f32") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #248
  {DBGFIELD("FRSQRTSv2f32_FRSQRTSv4f32") 1, 0, 0, 16, 1, 33, 1,  0, 0}, // #249
  {DBGFIELD("FRSQRTSv2f64")       1, 0, 0, 17, 1, 34, 1,  0, 0}, // #250
  {DBGFIELD("FCVTSHr_FCVTDHr_FCVTDSr") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #251
  {DBGFIELD("FCVTASUWDr_FCVTASUWSr_FCVTASUXDr_FCVTASUXSr_FCVTAUUWDr_FCVTAUUWSr_FCVTAUUXDr_FCVTAUUXSr_FCVTMSUWDr_FCVTMSUWSr_FCVTMSUXDr_FCVTMSUXSr_FCVTMUUWDr_FCVTMUUWSr_FCVTMUUXDr_FCVTMUUXSr_FCVTNSUWDr_FCVTNSUWSr_FCVTNSUXDr_FCVTNSUXSr_FCVTNUUWDr_FCVTNUUWSr_FCVTNUUXDr_FCVTNUUXSr_FCVTPSUWDr_FCVTPSUWSr_FCVTPSUXDr_FCVTPSUXSr_FCVTPUUWDr_FCVTPUUWSr_FCVTPUUXDr_FCVTPUUXSr_FCVTZSSWDri_FCVTZSSWSri_FCVTZSSXDri_FCVTZSSXSri_FCVTZSUWDr_FCVTZSUWSr_FCVTZSUXDr_FCVTZSUXSr_FCVTZUSWDri_FCVTZUSWSri_FCVTZUSXDri_FCVTZUSXSri_FCVTZUUWDr_FCVTZUUWSr_FCVTZUUXDr_FCVTZUUXSr") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #252
  {DBGFIELD("SCVTFSWDri_SCVTFSWSri_SCVTFSXDri_SCVTFSXSri_SCVTFUWDri_SCVTFUWSri_SCVTFUXDri_SCVTFUXSri_UCVTFSWDri_UCVTFSWSri_UCVTFSXDri_UCVTFSXSri_UCVTFUWDri_UCVTFUWSri_UCVTFUXDri_UCVTFUXSri") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #253
  {DBGFIELD("AESIMCrr_AESMCrr_SHA1Hrr_AESDrr_AESErr_SHA1SU1rr_SHA256SU0rr_SHA1SU0rrr") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #254
  {DBGFIELD("SHA256SU1rrr")       1, 0, 0,  1, 1,  1, 1,  0, 0}, // #255
  {DBGFIELD("SHA1Crrr_SHA1Mrrr_SHA1Prrr_SHA256Hrrr_SHA256H2rrr") 1, 0, 0,  1, 1,  1, 1,  0, 0}, // #256
  {DBGFIELD("WriteISReg_ReadI_A53ReadShifted") 1, 0, 0,  2, 1, 35, 1, 46, 18}, // #257
  {DBGFIELD("WriteISReg_ReadI_A53ReadNotShifted") 1, 0, 0,  2, 1, 35, 1,  1, 18}, // #258
  {DBGFIELD("WriteIEReg_ReadI_A53ReadShifted") 1, 0, 0,  2, 1, 36, 1, 46, 18}, // #259
  {DBGFIELD("WriteIEReg_ReadI_A53ReadNotShifted") 1, 0, 0,  2, 1, 36, 1,  1, 18}, // #260
  {DBGFIELD("(WriteIS_WriteLD)_ReadBaseRS") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #261
  {DBGFIELD("WriteLD_ReadDefault") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #262
  {DBGFIELD("WriteAdr_WriteST_ReadBaseRS") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #263
  {DBGFIELD("WriteAdr_WriteST_ReadDefault") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #264
  {DBGFIELD("(WriteIS_WriteST)_ReadBaseRS") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #265
  {DBGFIELD("WriteST_ReadDefault") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #266
  {DBGFIELD("WriteX")             0, 0, 0,  0, 0,  0, 0,  0, 0}, // #267
  {DBGFIELD("WriteI")             0, 0, 0,  0, 0,  0, 0,  0, 0}, // #268
  {DBGFIELD("WriteImm")           0, 0, 0,  0, 0,  0, 0,  0, 0}, // #269
  {DBGFIELD("WriteV")             0, 0, 0,  0, 0,  0, 0,  0, 0} // #270
}; // CortexA53ModelSchedClasses

// {Name, NumMicroOps, BeginGroup, EndGroup, WriteProcResIdx,#, WriteLatencyIdx,#, ReadAdvanceIdx,#}
static const llvm::MCSchedClassDesc CortexA57ModelSchedClasses[] = {
  {DBGFIELD("InvalidSchedClass")  65535, 0, 0,  0, 0,  0, 0,  0, 0},
  {DBGFIELD("WriteV")             1, 0, 0,  6, 1,  5, 1,  0, 0}, // #1
  {DBGFIELD("WriteI_ReadI_ReadI") 1, 0, 0,  3, 1,  4, 1, 64, 2}, // #2
  {DBGFIELD("WriteI_ReadI")       1, 0, 0,  3, 1,  4, 1,  0, 1}, // #3
  {DBGFIELD("WriteISReg_ReadI_ReadISReg") 1, 0, 0,  1, 1, 37, 1, 64, 2}, // #4
  {DBGFIELD("WriteIEReg_ReadI_ReadIEReg") 1, 0, 0,  1, 1, 37, 1, 64, 2}, // #5
  {DBGFIELD("WriteI")             1, 0, 0,  3, 1,  4, 1,  0, 0}, // #6
  {DBGFIELD("WriteIS_ReadI")      1, 0, 0,  3, 1,  4, 1,  0, 1}, // #7
  {DBGFIELD("WriteBr")            1, 0, 0,  2, 1,  4, 1,  0, 0}, // #8
  {DBGFIELD("WriteBrReg")         1, 0, 0,  2, 1,  4, 1,  0, 0}, // #9
  {DBGFIELD("WriteSys")           1, 0, 0,  0, 0,  4, 1,  0, 0}, // #10
  {DBGFIELD("WriteBarrier")       1, 0, 0,  0, 0,  4, 1,  0, 0}, // #11
  {DBGFIELD("WriteExtr_ReadExtrHi") 1, 0, 0,  3, 1,  4, 1,  0, 1}, // #12
  {DBGFIELD("WriteF")             1, 0, 0,  6, 1,  5, 1,  0, 0}, // #13
  {DBGFIELD("WriteFCmp")          1, 0, 0,  6, 1,  5, 1,  0, 0}, // #14
  {DBGFIELD("WriteFCvt")          1, 0, 0,  6, 1, 21, 1,  0, 0}, // #15
  {DBGFIELD("WriteFDiv")          1, 0, 0, 18, 2, 32, 1,  0, 0}, // #16
  {DBGFIELD("WriteFMul")          1, 0, 0,  6, 1, 21, 1,  0, 0}, // #17
  {DBGFIELD("WriteFCopy")         1, 0, 0,  6, 1,  5, 1,  0, 0}, // #18
  {DBGFIELD("WriteFImm")          1, 0, 0,  6, 1,  5, 1,  0, 0}, // #19
  {DBGFIELD("WriteHint")          1, 0, 0,  0, 0,  4, 1,  0, 0}, // #20
  {DBGFIELD("WriteLD")            1, 0, 0, 11, 1,  7, 1,  0, 0}, // #21
  {DBGFIELD("WriteLD_WriteLDHi")  2, 0, 0, 11, 1,  7, 2,  0, 0}, // #22
  {DBGFIELD("WriteLD_WriteLDHi_WriteAdr") 3, 0, 0, 20, 2, 38, 3,  0, 0}, // #23
  {DBGFIELD("WriteLD_WriteI")     2, 0, 0, 20, 2, 39, 2,  0, 0}, // #24
  {DBGFIELD("WriteLD_WriteAdr")   2, 0, 0, 20, 2, 39, 2,  0, 0}, // #25
  {DBGFIELD("WriteLDIdx_ReadAdrBase") 2, 0, 0, 20, 2,  7, 1,  0, 1}, // #26
  {DBGFIELD("WriteLDAdr")         2, 0, 0, 20, 2, 21, 1,  0, 0}, // #27
  {DBGFIELD("WriteIM32_ReadIM_ReadIM_ReadIMA") 1, 0, 0,  1, 1,  5, 1, 66, 3}, // #28
  {DBGFIELD("WriteIM64_ReadIM_ReadIM_ReadIMA") 1, 0, 0,  1, 1, 21, 1, 66, 3}, // #29
  {DBGFIELD("WriteImm")           1, 0, 0,  3, 1,  4, 1,  0, 0}, // #30
  {DBGFIELD("WriteAdrAdr")        2, 0, 0, 22, 1, 37, 1,  0, 0}, // #31
  {DBGFIELD("WriteID32_ReadID_ReadID") 1, 0, 0,  1, 1, 41, 1, 64, 2}, // #32
  {DBGFIELD("WriteID64_ReadID_ReadID") 1, 0, 0,  1, 1, 42, 1, 64, 2}, // #33
  {DBGFIELD("WriteIM64_ReadIM_ReadIM") 1, 0, 0,  1, 1, 21, 1, 64, 2}, // #34
  {DBGFIELD("WriteST")            1, 0, 0,  5, 1,  4, 1,  0, 0}, // #35
  {DBGFIELD("WriteSTX")           2, 0, 0, 23, 2, 21, 1,  0, 0}, // #36
  {DBGFIELD("WriteSTP")           1, 0, 0,  5, 1,  4, 1,  0, 0}, // #37
  {DBGFIELD("WriteAdr_WriteSTP")  2, 0, 0, 25, 2, 43, 2,  0, 0}, // #38
  {DBGFIELD("WriteAdr_WriteST_ReadAdrBase") 2, 0, 0, 25, 2, 43, 2,  0, 1}, // #39
  {DBGFIELD("WriteAdr_WriteST")   2, 0, 0, 25, 2, 43, 2,  0, 0}, // #40
  {DBGFIELD("WriteSTIdx_ReadAdrBase") 2, 0, 0, 25, 2,  4, 1,  0, 1}, // #41
  {DBGFIELD("COPY")               1, 0, 0,  3, 1,  4, 1,  0, 0}, // #42
  {DBGFIELD("LD1i16_LD1i32_LD1i64_LD1i8") 1, 0, 0, 11, 1, 21, 1,  0, 0}, // #43
  {DBGFIELD("LD1Rv16b_LD1Rv1d_LD1Rv2d_LD1Rv2s_LD1Rv4h_LD1Rv4s_LD1Rv8b_LD1Rv8h") 2, 0, 0, 27, 2, 20, 1,  0, 0}, // #44
  {DBGFIELD("LD1Onev16b_LD1Onev1d_LD1Onev2d_LD1Onev2s_LD1Onev4h_LD1Onev4s_LD1Onev8b_LD1Onev8h") 1, 0, 0, 11, 1, 21, 1,  0, 0}, // #45
  {DBGFIELD("LD1Twov16b_LD1Twov1d_LD1Twov2d_LD1Twov2s_LD1Twov4h_LD1Twov4s_LD1Twov8b_LD1Twov8h") 2, 0, 0, 29, 1,  1, 1,  0, 0}, // #46
  {DBGFIELD("LD1Threev16b_LD1Threev1d_LD1Threev2d_LD1Threev2s_LD1Threev4h_LD1Threev4s_LD1Threev8b_LD1Threev8h") 3, 0, 0, 30, 1, 22, 1,  0, 0}, // #47
  {DBGFIELD("LD1Fourv16b_LD1Fourv1d_LD1Fourv2d_LD1Fourv2s_LD1Fourv4h_LD1Fourv4s_LD1Fourv8b_LD1Fourv8h") 4, 0, 0, 31, 1, 20, 1,  0, 0}, // #48
  {DBGFIELD("LD1i16_POST_LD1i32_POST_LD1i64_POST_LD1i8_POST") 2, 0, 0, 20, 2, 45, 2,  0, 0}, // #49
  {DBGFIELD("LD1Rv16b_POST_LD1Rv1d_POST_LD1Rv2d_POST_LD1Rv2s_POST_LD1Rv4h_POST_LD1Rv4s_POST_LD1Rv8b_POST_LD1Rv8h_POST") 3, 0, 0, 32, 3, 47, 2,  0, 0}, // #50
  {DBGFIELD("LD1Onev16b_POST_LD1Onev1d_POST_LD1Onev2d_POST_LD1Onev2s_POST_LD1Onev4h_POST_LD1Onev4s_POST_LD1Onev8b_POST_LD1Onev8h_POST") 2, 0, 0, 20, 2, 45, 2,  0, 0}, // #51
  {DBGFIELD("LD1Twov16b_POST_LD1Twov1d_POST_LD1Twov2d_POST_LD1Twov2s_POST_LD1Twov4h_POST_LD1Twov4s_POST_LD1Twov8b_POST_LD1Twov8h_POST") 3, 0, 0, 35, 2, 49, 2,  0, 0}, // #52
  {DBGFIELD("LD1Threev16b_POST_LD1Threev1d_POST_LD1Threev2d_POST_LD1Threev2s_POST_LD1Threev4h_POST_LD1Threev4s_POST_LD1Threev8b_POST_LD1Threev8h_POST") 4, 0, 0, 37, 2, 51, 2,  0, 0}, // #53
  {DBGFIELD("LD1Fourv16b_POST_LD1Fourv1d_POST_LD1Fourv2d_POST_LD1Fourv2s_POST_LD1Fourv4h_POST_LD1Fourv4s_POST_LD1Fourv8b_POST_LD1Fourv8h_POST") 5, 0, 0, 39, 2, 47, 2,  0, 0}, // #54
  {DBGFIELD("LD2i16_LD2i32_LD2i64_LD2i8") 2, 0, 0, 27, 2, 20, 1,  0, 0}, // #55
  {DBGFIELD("LD2Rv16b_LD2Rv1d_LD2Rv2d_LD2Rv2s_LD2Rv4h_LD2Rv4s_LD2Rv8b_LD2Rv8h") 3, 0, 0, 41, 2, 20, 1,  0, 0}, // #56
  {DBGFIELD("LD2Twov2s_LD2Twov4h_LD2Twov8b") 2, 0, 0, 27, 2, 20, 1,  0, 0}, // #57
  {DBGFIELD("LD2Twov16b_LD2Twov2d_LD2Twov4s_LD2Twov8h") 2, 0, 0, 29, 1,  1, 1,  0, 0}, // #58
  {DBGFIELD("LD2i16_POST_LD2i32_POST_LD2i64_POST_LD2i8_POST") 3, 0, 0, 32, 3, 47, 2,  0, 0}, // #59
  {DBGFIELD("LD2Rv16b_POST_LD2Rv1d_POST_LD2Rv2d_POST_LD2Rv2s_POST_LD2Rv4h_POST_LD2Rv4s_POST_LD2Rv8b_POST_LD2Rv8h_POST") 4, 0, 0, 43, 3, 47, 2,  0, 0}, // #60
  {DBGFIELD("LD2Twov2s_POST_LD2Twov4h_POST_LD2Twov8b_POST") 3, 0, 0, 32, 3, 47, 2,  0, 0}, // #61
  {DBGFIELD("LD2Twov16b_POST_LD2Twov2d_POST_LD2Twov4s_POST_LD2Twov8h_POST") 3, 0, 0, 35, 2, 49, 2,  0, 0}, // #62
  {DBGFIELD("LD3i16_LD3i32_LD3i64_LD3i8") 2, 0, 0, 29, 1,  1, 1,  0, 0}, // #63
  {DBGFIELD("LD3Rv16b_LD3Rv1d_LD3Rv2d_LD3Rv2s_LD3Rv4h_LD3Rv4s_LD3Rv8b_LD3Rv8h") 5, 0, 0, 46, 2, 53, 1,  0, 0}, // #64
  {DBGFIELD("LD3Threev16b_LD3Threev2s_LD3Threev4h_LD3Threev4s_LD3Threev8b_LD3Threev8h") 7, 0, 0, 48, 2, 31, 1,  0, 0}, // #65
  {DBGFIELD("LD3Threev2d")        4, 0, 0, 31, 1, 20, 1,  0, 0}, // #66
  {DBGFIELD("LD3i16_POST_LD3i32_POST_LD3i64_POST_LD3i8_POST") 3, 0, 0, 35, 2, 49, 2,  0, 0}, // #67
  {DBGFIELD("LD3Rv16b_POST_LD3Rv1d_POST_LD3Rv2d_POST_LD3Rv2s_POST_LD3Rv4h_POST_LD3Rv4s_POST_LD3Rv8b_POST_LD3Rv8h_POST") 6, 0, 0, 50, 3, 54, 2,  0, 0}, // #68
  {DBGFIELD("LD3Threev16b_POST_LD3Threev2s_POST_LD3Threev4h_POST_LD3Threev4s_POST_LD3Threev8b_POST_LD3Threev8h_POST") 8, 0, 0, 53, 3, 56, 2,  0, 0}, // #69
  {DBGFIELD("LD3Threev2d_POST")   5, 0, 0, 39, 2, 47, 2,  0, 0}, // #70
  {DBGFIELD("LD4i16_LD4i32_LD4i64_LD4i8") 5, 0, 0, 46, 2, 53, 1,  0, 0}, // #71
  {DBGFIELD("LD4Rv16b_LD4Rv1d_LD4Rv2d_LD4Rv2s_LD4Rv4h_LD4Rv4s_LD4Rv8b_LD4Rv8h") 6, 0, 0, 56, 2, 53, 1,  0, 0}, // #72
  {DBGFIELD("LD4Fourv16b_LD4Fourv2s_LD4Fourv4h_LD4Fourv4s_LD4Fourv8b_LD4Fourv8h") 8, 0, 0, 58, 2, 58, 1,  0, 0}, // #73
  {DBGFIELD("LD4Fourv2d")         4, 0, 0, 31, 1, 20, 1,  0, 0}, // #74
  {DBGFIELD("LD4i16_POST_LD4i32_POST_LD4i64_POST_LD4i8_POST") 6, 0, 0, 50, 3, 54, 2,  0, 0}, // #75
  {DBGFIELD("LD4Rv16b_POST_LD4Rv1d_POST_LD4Rv2d_POST_LD4Rv2s_POST_LD4Rv4h_POST_LD4Rv4s_POST_LD4Rv8b_POST_LD4Rv8h_POST") 7, 0, 0, 60, 3, 54, 2,  0, 0}, // #76
  {DBGFIELD("LD4Fourv16b_POST_LD4Fourv2s_POST_LD4Fourv4h_POST_LD4Fourv4s_POST_LD4Fourv8b_POST_LD4Fourv8h_POST") 9, 0, 0, 63, 3, 59, 2,  0, 0}, // #77
  {DBGFIELD("LD4Fourv2d_POST")    5, 0, 0, 39, 2, 47, 2,  0, 0}, // #78
  {DBGFIELD("ST1i16_ST1i32_ST1i64_ST1i8") 2, 0, 0,  5, 2,  5, 1,  0, 0}, // #79
  {DBGFIELD("ST1Onev16b_ST1Onev1d_ST1Onev2d_ST1Onev2s_ST1Onev4h_ST1Onev4s_ST1Onev8b_ST1Onev8h") 2, 0, 0, 66, 1, 37, 1,  0, 0}, // #80
  {DBGFIELD("ST1Twov16b_ST1Twov1d_ST1Twov2d_ST1Twov2s_ST1Twov4h_ST1Twov4s_ST1Twov8b_ST1Twov8h") 4, 0, 0, 67, 1,  7, 1,  0, 0}, // #81
  {DBGFIELD("ST1Threev16b_ST1Threev1d_ST1Threev2d_ST1Threev2s_ST1Threev4h_ST1Threev4s_ST1Threev8b_ST1Threev8h") 6, 0, 0, 68, 1,  1, 1,  0, 0}, // #82
  {DBGFIELD("ST1Fourv16b_ST1Fourv1d_ST1Fourv2d_ST1Fourv2s_ST1Fourv4h_ST1Fourv4s_ST1Fourv8b_ST1Fourv8h") 8, 0, 0, 69, 1, 20, 1,  0, 0}, // #83
  {DBGFIELD("ST1i16_POST_ST1i32_POST_ST1i64_POST_ST1i8_POST") 3, 0, 0, 70, 3, 61, 2,  0, 0}, // #84
  {DBGFIELD("ST1Onev16b_POST_ST1Onev1d_POST_ST1Onev2d_POST_ST1Onev2s_POST_ST1Onev4h_POST_ST1Onev4s_POST_ST1Onev8b_POST_ST1Onev8h_POST") 3, 0, 0, 73, 2, 63, 2,  0, 0}, // #85
  {DBGFIELD("ST1Twov16b_POST_ST1Twov1d_POST_ST1Twov2d_POST_ST1Twov2s_POST_ST1Twov4h_POST_ST1Twov4s_POST_ST1Twov8b_POST_ST1Twov8h_POST") 5, 0, 0, 75, 2, 39, 2,  0, 0}, // #86
  {DBGFIELD("ST1Threev16b_POST_ST1Threev1d_POST_ST1Threev2d_POST_ST1Threev2s_POST_ST1Threev4h_POST_ST1Threev4s_POST_ST1Threev8b_POST_ST1Threev8h_POST") 7, 0, 0, 77, 2, 49, 2,  0, 0}, // #87
  {DBGFIELD("ST1Fourv16b_POST_ST1Fourv1d_POST_ST1Fourv2d_POST_ST1Fourv2s_POST_ST1Fourv4h_POST_ST1Fourv4s_POST_ST1Fourv8b_POST_ST1Fourv8h_POST") 9, 0, 0, 79, 2, 47, 2,  0, 0}, // #88
  {DBGFIELD("ST2i16_ST2i32_ST2i64_ST2i8") 2, 0, 0, 66, 1, 37, 1,  0, 0}, // #89
  {DBGFIELD("ST2Twov2s_ST2Twov4h_ST2Twov8b") 3, 0, 0, 81, 2,  5, 1,  0, 0}, // #90
  {DBGFIELD("ST2Twov16b_ST2Twov2d_ST2Twov4s_ST2Twov8h") 4, 0, 0, 67, 1,  7, 1,  0, 0}, // #91
  {DBGFIELD("ST2i16_POST_ST2i32_POST_ST2i64_POST_ST2i8_POST") 3, 0, 0, 73, 2, 63, 2,  0, 0}, // #92
  {DBGFIELD("ST2Twov2s_POST_ST2Twov4h_POST_ST2Twov8b_POST") 4, 0, 0, 83, 3, 61, 2,  0, 0}, // #93
  {DBGFIELD("ST2Twov16b_POST_ST2Twov2d_POST_ST2Twov4s_POST_ST2Twov8h_POST") 5, 0, 0, 75, 2, 39, 2,  0, 0}, // #94
  {DBGFIELD("ST3i16_ST3i32_ST3i64_ST3i8") 3, 0, 0, 81, 2,  5, 1,  0, 0}, // #95
  {DBGFIELD("ST3Threev16b_ST3Threev2s_ST3Threev4h_ST3Threev4s_ST3Threev8b_ST3Threev8h") 10, 0, 0, 86, 2,  1, 1,  0, 0}, // #96
  {DBGFIELD("ST3Threev2d")        6, 0, 0, 68, 1,  1, 1,  0, 0}, // #97
  {DBGFIELD("ST3i16_POST_ST3i32_POST_ST3i64_POST_ST3i8_POST") 4, 0, 0, 83, 3, 61, 2,  0, 0}, // #98
  {DBGFIELD("ST3Threev16b_POST_ST3Threev2s_POST_ST3Threev4h_POST_ST3Threev4s_POST_ST3Threev8b_POST_ST3Threev8h_POST") 11, 0, 0, 88, 3, 49, 2,  0, 0}, // #99
  {DBGFIELD("ST3Threev2d_POST")   7, 0, 0, 77, 2, 49, 2,  0, 0}, // #100
  {DBGFIELD("ST4i16_ST4i32_ST4i64_ST4i8") 3, 0, 0, 81, 2,  5, 1,  0, 0}, // #101
  {DBGFIELD("ST4Fourv16b_ST4Fourv2s_ST4Fourv4h_ST4Fourv4s_ST4Fourv8b_ST4Fourv8h") 12, 0, 0, 91, 2, 20, 1,  0, 0}, // #102
  {DBGFIELD("ST4Fourv2d")         8, 0, 0, 69, 1, 20, 1,  0, 0}, // #103
  {DBGFIELD("ST4i16_POST_ST4i32_POST_ST4i64_POST_ST4i8_POST") 4, 0, 0, 83, 3, 61, 2,  0, 0}, // #104
  {DBGFIELD("ST4Fourv16b_POST_ST4Fourv2s_POST_ST4Fourv4h_POST_ST4Fourv4s_POST_ST4Fourv8b_POST_ST4Fourv8h_POST") 13, 0, 0, 93, 3, 47, 2,  0, 0}, // #105
  {DBGFIELD("ST4Fourv2d_POST")    9, 0, 0, 79, 2, 47, 2,  0, 0}, // #106
  {DBGFIELD("FMADDDrrr_FMADDSrrr_FMSUBDrrr_FMSUBSrrr_FNMADDDrrr_FNMADDSrrr_FNMSUBDrrr_FNMSUBSrrr") 1, 0, 0,  6, 1, 21, 1,  0, 0}, // #107
  {DBGFIELD("FMLAv1i32_indexed_FMLAv1i64_indexed_FMLAv2f32_FMLAv2f64_FMLAv2i32_indexed_FMLAv2i64_indexed_FMLAv4f32_FMLAv4i32_indexed_FMLSv1i32_indexed_FMLSv1i64_indexed_FMLSv2f32_FMLSv2f64_FMLSv2i32_indexed_FMLSv2i64_indexed_FMLSv4f32_FMLSv4i32_indexed") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #108
  {DBGFIELD("FDIVSrr")            1, 0, 0, 18, 2, 32, 1,  0, 0}, // #109
  {DBGFIELD("FDIVDrr")            1, 0, 0, 18, 2, 32, 1,  0, 0}, // #110
  {DBGFIELD("FDIVv2f32_FDIVv4f32") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #111
  {DBGFIELD("FDIVv2f64")          1, 0, 0,  6, 1,  5, 1,  0, 0}, // #112
  {DBGFIELD("FRSQRTEv1i32_FRSQRTEv2f32_FRSQRTEv4f32_FRSQRTS32_FRSQRTSv2f32_FRSQRTSv4f32_FSQRTv2f32_FSQRTv4f32_URSQRTEv2i32_URSQRTEv4i32") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #113
  {DBGFIELD("FRSQRTEv1i64_FRSQRTEv2f64_FRSQRTS64_FRSQRTSv2f64_FSQRTv2f64") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #114
  {DBGFIELD("BL")                 2, 0, 0,  2, 2,  4, 1,  0, 0}, // #115
  {DBGFIELD("BLR")                2, 0, 0,  2, 2, 37, 1,  0, 0}, // #116
  {DBGFIELD("SMULHrr_UMULHrr")    1, 0, 0,  1, 1,  1, 1,  0, 0}, // #117
  {DBGFIELD("EXTRWrri")           1, 0, 0,  3, 1,  4, 1,  0, 0}, // #118
  {DBGFIELD("EXTRXrri")           2, 0, 0, 96, 2,  5, 1,  0, 0}, // #119
  {DBGFIELD("BFMWri_BFMXri")      1, 0, 0,  1, 1, 37, 1,  0, 0}, // #120
  {DBGFIELD("CRC32Brr_CRC32CBrr_CRC32CHrr_CRC32CWrr_CRC32CXrr_CRC32Hrr_CRC32Wrr_CRC32Xrr") 1, 0, 0,  9, 2,  5, 1,  0, 0}, // #121
  {DBGFIELD("LD1i16_LD1i32_LD1i8") 2, 0, 0, 27, 2, 20, 1,  0, 0}, // #122
  {DBGFIELD("LD1i16_POST_LD1i32_POST_LD1i8_POST") 3, 0, 0, 32, 3, 47, 2,  0, 0}, // #123
  {DBGFIELD("LD1Rv2s_LD1Rv4h_LD1Rv8b") 2, 0, 0, 27, 2, 20, 1,  0, 0}, // #124
  {DBGFIELD("LD1Rv2s_POST_LD1Rv4h_POST_LD1Rv8b_POST") 3, 0, 0, 32, 3, 47, 2,  0, 0}, // #125
  {DBGFIELD("LD1Rv1d")            1, 0, 0, 11, 1, 21, 1,  0, 0}, // #126
  {DBGFIELD("LD1Rv1d_POST")       2, 0, 0, 20, 2, 45, 2,  0, 0}, // #127
  {DBGFIELD("LD1Onev1d_LD1Onev2s_LD1Onev4h_LD1Onev8b") 1, 0, 0, 11, 1, 21, 1,  0, 0}, // #128
  {DBGFIELD("LD1Onev1d_POST_LD1Onev2s_POST_LD1Onev4h_POST_LD1Onev8b_POST") 2, 0, 0, 20, 2, 45, 2,  0, 0}, // #129
  {DBGFIELD("LD1Twov1d_LD1Twov2s_LD1Twov4h_LD1Twov8b") 1, 0, 0, 11, 1, 21, 1,  0, 0}, // #130
  {DBGFIELD("LD1Twov1d_POST_LD1Twov2s_POST_LD1Twov4h_POST_LD1Twov8b_POST") 2, 0, 0, 20, 2, 45, 2,  0, 0}, // #131
  {DBGFIELD("LD1Threev1d_LD1Threev2s_LD1Threev4h_LD1Threev8b") 2, 0, 0, 29, 1,  1, 1,  0, 0}, // #132
  {DBGFIELD("LD1Threev1d_POST_LD1Threev2s_POST_LD1Threev4h_POST_LD1Threev8b_POST") 3, 0, 0, 35, 2, 49, 2,  0, 0}, // #133
  {DBGFIELD("LD1Fourv1d_LD1Fourv2s_LD1Fourv4h_LD1Fourv8b") 2, 0, 0, 29, 1,  1, 1,  0, 0}, // #134
  {DBGFIELD("LD1Fourv1d_POST_LD1Fourv2s_POST_LD1Fourv4h_POST_LD1Fourv8b_POST") 3, 0, 0, 35, 2, 49, 2,  0, 0}, // #135
  {DBGFIELD("LD2i16_LD2i8")       3, 0, 0, 41, 2, 20, 1,  0, 0}, // #136
  {DBGFIELD("LD2i16_POST_LD2i8_POST") 4, 0, 0, 43, 3, 47, 2,  0, 0}, // #137
  {DBGFIELD("LD2i32")             2, 0, 0, 29, 1,  1, 1,  0, 0}, // #138
  {DBGFIELD("LD2i32_POST")        3, 0, 0, 35, 2, 49, 2,  0, 0}, // #139
  {DBGFIELD("LD2Rv2s_LD2Rv4h_LD2Rv8b") 2, 0, 0, 27, 2, 20, 1,  0, 0}, // #140
  {DBGFIELD("LD2Rv2s_POST_LD2Rv4h_POST_LD2Rv8b_POST") 3, 0, 0, 32, 3, 47, 2,  0, 0}, // #141
  {DBGFIELD("LD2Rv1d")            1, 0, 0, 11, 1, 21, 1,  0, 0}, // #142
  {DBGFIELD("LD2Rv1d_POST")       2, 0, 0, 20, 2, 45, 2,  0, 0}, // #143
  {DBGFIELD("LD2Twov16b_LD2Twov4s_LD2Twov8h") 4, 0, 0, 98, 2, 53, 1,  0, 0}, // #144
  {DBGFIELD("LD2Twov16b_POST_LD2Twov4s_POST_LD2Twov8h_POST") 5, 0, 0, 100, 3, 54, 2,  0, 0}, // #145
  {DBGFIELD("LD3i16_LD3i8")       4, 0, 0, 11, 2, 53, 1,  0, 0}, // #146
  {DBGFIELD("LD3i16_POST_LD3i8_POST") 5, 0, 0, 103, 3, 54, 2,  0, 0}, // #147
  {DBGFIELD("LD3i32")             3, 0, 0, 41, 2, 20, 1,  0, 0}, // #148
  {DBGFIELD("LD3i32_POST")        4, 0, 0, 43, 3, 47, 2,  0, 0}, // #149
  {DBGFIELD("LD3Rv2s_LD3Rv4h_LD3Rv8b") 3, 0, 0, 41, 2, 20, 1,  0, 0}, // #150
  {DBGFIELD("LD3Rv2s_POST_LD3Rv4h_POST_LD3Rv8b_POST") 4, 0, 0, 43, 3, 47, 2,  0, 0}, // #151
  {DBGFIELD("LD3Rv1d")            2, 0, 0, 29, 1,  1, 1,  0, 0}, // #152
  {DBGFIELD("LD3Rv1d_POST")       3, 0, 0, 35, 2, 49, 2,  0, 0}, // #153
  {DBGFIELD("LD3Rv16b_LD3Rv4s_LD3Rv8h") 4, 0, 0, 11, 2, 53, 1,  0, 0}, // #154
  {DBGFIELD("LD3Rv16b_POST_LD3Rv4s_POST_LD3Rv8h_POST") 5, 0, 0, 103, 3, 54, 2,  0, 0}, // #155
  {DBGFIELD("LD3Threev2s_LD3Threev4h_LD3Threev8b") 4, 0, 0, 98, 2, 53, 1,  0, 0}, // #156
  {DBGFIELD("LD3Threev2s_POST_LD3Threev4h_POST_LD3Threev8b_POST") 5, 0, 0, 100, 3, 54, 2,  0, 0}, // #157
  {DBGFIELD("LD4i16_LD4i8")       5, 0, 0, 46, 2, 53, 1,  0, 0}, // #158
  {DBGFIELD("LD4i16_POST_LD4i8_POST") 6, 0, 0, 50, 3, 54, 2,  0, 0}, // #159
  {DBGFIELD("LD4i32")             3, 0, 0, 41, 2, 20, 1,  0, 0}, // #160
  {DBGFIELD("LD4i32_POST")        4, 0, 0, 43, 3, 47, 2,  0, 0}, // #161
  {DBGFIELD("LD4Rv2s_LD4Rv4h_LD4Rv8b") 3, 0, 0, 41, 2, 20, 1,  0, 0}, // #162
  {DBGFIELD("LD4Rv2s_POST_LD4Rv4h_POST_LD4Rv8b_POST") 4, 0, 0, 43, 3, 47, 2,  0, 0}, // #163
  {DBGFIELD("LD4Rv1d")            2, 0, 0, 29, 1,  1, 1,  0, 0}, // #164
  {DBGFIELD("LD4Rv1d_POST")       3, 0, 0, 35, 2, 49, 2,  0, 0}, // #165
  {DBGFIELD("LD4Rv16b_LD4Rv4s_LD4Rv8h") 5, 0, 0, 46, 2, 53, 1,  0, 0}, // #166
  {DBGFIELD("LD4Rv16b_POST_LD4Rv4s_POST_LD4Rv8h_POST") 6, 0, 0, 50, 3, 54, 2,  0, 0}, // #167
  {DBGFIELD("LD4Fourv2s_LD4Fourv4h_LD4Fourv8b") 4, 0, 0, 98, 2, 53, 1,  0, 0}, // #168
  {DBGFIELD("LD4Fourv2s_POST_LD4Fourv4h_POST_LD4Fourv8b_POST") 5, 0, 0, 100, 3, 54, 2,  0, 0}, // #169
  {DBGFIELD("ST1i16_ST1i32_ST1i8") 1, 0, 0,  5, 1,  4, 1,  0, 0}, // #170
  {DBGFIELD("ST1i16_POST_ST1i32_POST_ST1i8_POST") 2, 0, 0, 25, 2, 43, 2,  0, 0}, // #171
  {DBGFIELD("ST1Onev1d_ST1Onev2s_ST1Onev4h_ST1Onev8b") 1, 0, 0,  5, 1,  4, 1,  0, 0}, // #172
  {DBGFIELD("ST1Onev1d_POST_ST1Onev2s_POST_ST1Onev4h_POST_ST1Onev8b_POST") 2, 0, 0, 25, 2, 43, 2,  0, 0}, // #173
  {DBGFIELD("ST1Twov1d_ST1Twov2s_ST1Twov4h_ST1Twov8b") 2, 0, 0, 66, 1, 37, 1,  0, 0}, // #174
  {DBGFIELD("ST1Twov1d_POST_ST1Twov2s_POST_ST1Twov4h_POST_ST1Twov8b_POST") 3, 0, 0, 73, 2, 63, 2,  0, 0}, // #175
  {DBGFIELD("ST1Threev1d_ST1Threev2s_ST1Threev4h_ST1Threev8b") 3, 0, 0, 106, 1,  5, 1,  0, 0}, // #176
  {DBGFIELD("ST1Threev1d_POST_ST1Threev2s_POST_ST1Threev4h_POST_ST1Threev8b_POST") 4, 0, 0, 107, 2, 61, 2,  0, 0}, // #177
  {DBGFIELD("ST1Fourv1d_ST1Fourv2s_ST1Fourv4h_ST1Fourv8b") 4, 0, 0, 67, 1,  7, 1,  0, 0}, // #178
  {DBGFIELD("ST1Fourv1d_POST_ST1Fourv2s_POST_ST1Fourv4h_POST_ST1Fourv8b_POST") 5, 0, 0, 75, 2, 39, 2,  0, 0}, // #179
  {DBGFIELD("ST2i16_ST2i32_ST2i8") 2, 0, 0,  5, 2,  5, 1,  0, 0}, // #180
  {DBGFIELD("ST2i16_POST_ST2i32_POST_ST2i8_POST") 3, 0, 0, 70, 3, 61, 2,  0, 0}, // #181
  {DBGFIELD("ST2Twov16b_ST2Twov4s_ST2Twov8h") 6, 0, 0, 109, 2,  7, 1,  0, 0}, // #182
  {DBGFIELD("ST2Twov16b_POST_ST2Twov4s_POST_ST2Twov8h_POST") 7, 0, 0, 111, 3, 39, 2,  0, 0}, // #183
  {DBGFIELD("ST3i16_ST3i8")       2, 0, 0,  5, 2,  5, 1,  0, 0}, // #184
  {DBGFIELD("ST3i16_POST_ST3i8_POST") 3, 0, 0, 70, 3, 61, 2,  0, 0}, // #185
  {DBGFIELD("ST3i32")             3, 0, 0, 106, 1,  5, 1,  0, 0}, // #186
  {DBGFIELD("ST3i32_POST")        4, 0, 0, 107, 2, 61, 2,  0, 0}, // #187
  {DBGFIELD("ST3Threev2s_ST3Threev4h_ST3Threev8b") 5, 0, 0, 114, 2,  5, 1,  0, 0}, // #188
  {DBGFIELD("ST3Threev2s_POST_ST3Threev4h_POST_ST3Threev8b_POST") 6, 0, 0, 116, 3, 61, 2,  0, 0}, // #189
  {DBGFIELD("ST4i16_ST4i8")       2, 0, 0,  5, 2,  5, 1,  0, 0}, // #190
  {DBGFIELD("ST4i16_POST_ST4i8_POST") 3, 0, 0, 70, 3, 61, 2,  0, 0}, // #191
  {DBGFIELD("ST4i32")             4, 0, 0, 67, 1,  7, 1,  0, 0}, // #192
  {DBGFIELD("ST4i32_POST")        5, 0, 0, 75, 2, 39, 2,  0, 0}, // #193
  {DBGFIELD("ST4Fourv2s_ST4Fourv4h_ST4Fourv8b") 6, 0, 0, 109, 2,  7, 1,  0, 0}, // #194
  {DBGFIELD("ST4Fourv2s_POST_ST4Fourv4h_POST_ST4Fourv8b_POST") 7, 0, 0, 111, 3, 39, 2,  0, 0}, // #195
  {DBGFIELD("MOVZWi_MOVZXi")      1, 0, 0,  3, 1,  4, 1,  0, 0}, // #196
  {DBGFIELD("ANDWri_ANDXri")      1, 0, 0,  3, 1,  4, 1,  0, 1}, // #197
  {DBGFIELD("ORRXrr_ADDXrr")      1, 0, 0,  3, 1,  4, 1, 64, 2}, // #198
  {DBGFIELD("STPQi")              1, 0, 0,  5, 1,  4, 1,  0, 0}, // #199
  {DBGFIELD("ISB")                1, 0, 0,  0, 0,  4, 1,  0, 0}, // #200
  {DBGFIELD("ORRv16i8")           1, 0, 0,  6, 1,  5, 1,  0, 0}, // #201
  {DBGFIELD("FMOVSWr_FMOVDXr_FMOVDXHighr") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #202
  {DBGFIELD("INSvi16gpr_INSvi16lane_INSvi32gpr_INSvi32lane_INSvi64gpr_INSvi64lane_INSvi8gpr_INSvi8lane") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #203
  {DBGFIELD("SMOVvi16to32_SMOVvi16to64_SMOVvi32to64_SMOVvi8to32_SMOVvi8to64_UMOVvi16_UMOVvi32_UMOVvi64_UMOVvi8") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #204
  {DBGFIELD("DUPv16i8gpr_DUPv16i8lane_DUPv2i32gpr_DUPv2i32lane_DUPv2i64gpr_DUPv2i64lane_DUPv4i16gpr_DUPv4i16lane_DUPv4i32gpr_DUPv4i32lane_DUPv8i16gpr_DUPv8i16lane_DUPv8i8gpr_DUPv8i8lane") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #205
  {DBGFIELD("ABSv16i8_ABSv1i64_ABSv2i32_ABSv2i64_ABSv4i16_ABSv4i32_ABSv8i16_ABSv8i8") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #206
  {DBGFIELD("SQABSv16i8_SQABSv1i16_SQABSv1i32_SQABSv1i64_SQABSv1i8_SQABSv2i32_SQABSv2i64_SQABSv4i16_SQABSv4i32_SQABSv8i16_SQABSv8i8_SQNEGv16i8_SQNEGv1i16_SQNEGv1i32_SQNEGv1i64_SQNEGv1i8_SQNEGv2i32_SQNEGv2i64_SQNEGv4i16_SQNEGv4i32_SQNEGv8i16_SQNEGv8i8") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #207
  {DBGFIELD("SADDLPv16i8_v8i16_SADDLPv2i32_v1i64_SADDLPv4i16_v2i32_SADDLPv4i32_v2i64_SADDLPv8i16_v4i32_SADDLPv8i8_v4i16_UADDLPv16i8_v8i16_UADDLPv2i32_v1i64_UADDLPv4i16_v2i32_UADDLPv4i32_v2i64_UADDLPv8i16_v4i32_UADDLPv8i8_v4i16") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #208
  {DBGFIELD("ADDVv16i8v_ADDVv4i16v_ADDVv4i32v_ADDVv8i16v_ADDVv8i8v_SMAXVv16i8v_SMAXVv4i16v_SMAXVv4i32v_SMAXVv8i16v_SMAXVv8i8v_SMINVv16i8v_SMINVv4i16v_SMINVv4i32v_SMINVv8i16v_SMINVv8i8v_UMAXVv16i8v_UMAXVv4i16v_UMAXVv4i32v_UMAXVv8i16v_UMAXVv8i8v_UMINVv16i8v_UMINVv4i16v_UMINVv4i32v_UMINVv8i16v_UMINVv8i8v") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #209
  {DBGFIELD("SADDLVv16i8v_SADDLVv4i16v_SADDLVv4i32v_SADDLVv8i16v_SADDLVv8i8v_UADDLVv16i8v_UADDLVv4i16v_UADDLVv4i32v_UADDLVv8i16v_UADDLVv8i8v") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #210
  {DBGFIELD("SADALPv16i8_v8i16_SADALPv2i32_v1i64_SADALPv4i16_v2i32_SADALPv4i32_v2i64_SADALPv8i16_v4i32_SADALPv8i8_v4i16_UADALPv16i8_v8i16_UADALPv2i32_v1i64_UADALPv4i16_v2i32_UADALPv4i32_v2i64_UADALPv8i16_v4i32_UADALPv8i8_v4i16") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #211
  {DBGFIELD("SABALv16i8_v8i16_SABALv2i32_v2i64_SABALv4i16_v4i32_SABALv4i32_v2i64_SABALv8i16_v4i32_SABALv8i8_v8i16_SABAv16i8_SABAv2i32_SABAv4i16_SABAv4i32_SABAv8i16_SABAv8i8_UABALv16i8_v8i16_UABALv2i32_v2i64_UABALv4i16_v4i32_UABALv4i32_v2i64_UABALv8i16_v4i32_UABALv8i8_v8i16_UABAv16i8_UABAv2i32_UABAv4i16_UABAv4i32_UABAv8i16_UABAv8i8") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #212
  {DBGFIELD("SQADDv16i8_SQADDv1i16_SQADDv1i32_SQADDv1i64_SQADDv1i8_SQADDv2i32_SQADDv2i64_SQADDv4i16_SQADDv4i32_SQADDv8i16_SQADDv8i8_SQSUBv16i8_SQSUBv1i16_SQSUBv1i32_SQSUBv1i64_SQSUBv1i8_SQSUBv2i32_SQSUBv2i64_SQSUBv4i16_SQSUBv4i32_SQSUBv8i16_SQSUBv8i8_UQADDv16i8_UQADDv1i16_UQADDv1i32_UQADDv1i64_UQADDv1i8_UQADDv2i32_UQADDv2i64_UQADDv4i16_UQADDv4i32_UQADDv8i16_UQADDv8i8_UQSUBv16i8_UQSUBv1i16_UQSUBv1i32_UQSUBv1i64_UQSUBv1i8_UQSUBv2i32_UQSUBv2i64_UQSUBv4i16_UQSUBv4i32_UQSUBv8i16_UQSUBv8i8") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #213
  {DBGFIELD("SUQADDv16i8_SUQADDv1i16_SUQADDv1i32_SUQADDv1i64_SUQADDv1i8_SUQADDv2i32_SUQADDv2i64_SUQADDv4i16_SUQADDv4i32_SUQADDv8i16_SUQADDv8i8_USQADDv16i8_USQADDv1i16_USQADDv1i32_USQADDv1i64_USQADDv1i8_USQADDv2i32_USQADDv2i64_USQADDv4i16_USQADDv4i32_USQADDv8i16_USQADDv8i8") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #214
  {DBGFIELD("ADDHNv2i64_v2i32_ADDHNv2i64_v4i32_ADDHNv4i32_v4i16_ADDHNv4i32_v8i16_ADDHNv8i16_v16i8_ADDHNv8i16_v8i8_RADDHNv2i64_v2i32_RADDHNv2i64_v4i32_RADDHNv4i32_v4i16_RADDHNv4i32_v8i16_RADDHNv8i16_v16i8_RADDHNv8i16_v8i8_RSUBHNv2i64_v2i32_RSUBHNv2i64_v4i32_RSUBHNv4i32_v4i16_RSUBHNv4i32_v8i16_RSUBHNv8i16_v16i8_RSUBHNv8i16_v8i8_SUBHNv2i64_v2i32_SUBHNv2i64_v4i32_SUBHNv4i32_v4i16_SUBHNv4i32_v8i16_SUBHNv8i16_v16i8_SUBHNv8i16_v8i8") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #215
  {DBGFIELD("CMEQv16i8_CMEQv16i8rz_CMEQv1i64_CMEQv1i64rz_CMEQv2i32_CMEQv2i32rz_CMEQv2i64_CMEQv2i64rz_CMEQv4i16_CMEQv4i16rz_CMEQv4i32_CMEQv4i32rz_CMEQv8i16_CMEQv8i16rz_CMEQv8i8_CMEQv8i8rz_CMGEv16i8_CMGEv16i8rz_CMGEv1i64_CMGEv1i64rz_CMGEv2i32_CMGEv2i32rz_CMGEv2i64_CMGEv2i64rz_CMGEv4i16_CMGEv4i16rz_CMGEv4i32_CMGEv4i32rz_CMGEv8i16_CMGEv8i16rz_CMGEv8i8_CMGEv8i8rz_CMGTv16i8_CMGTv16i8rz_CMGTv1i64_CMGTv1i64rz_CMGTv2i32_CMGTv2i32rz_CMGTv2i64_CMGTv2i64rz_CMGTv4i16_CMGTv4i16rz_CMGTv4i32_CMGTv4i32rz_CMGTv8i16_CMGTv8i16rz_CMGTv8i8_CMGTv8i8rz_CMHIv16i8_CMHIv1i64_CMHIv2i32_CMHIv2i64_CMHIv4i16_CMHIv4i32_CMHIv8i16_CMHIv8i8_CMHSv16i8_CMHSv1i64_CMHSv2i32_CMHSv2i64_CMHSv4i16_CMHSv4i32_CMHSv8i16_CMHSv8i8_CMLEv16i8rz_CMLEv1i64rz_CMLEv2i32rz_CMLEv2i64rz_CMLEv4i16rz_CMLEv4i32rz_CMLEv8i16rz_CMLEv8i8rz_CMLTv16i8rz_CMLTv1i64rz_CMLTv2i32rz_CMLTv2i64rz_CMLTv4i16rz_CMLTv4i32rz_CMLTv8i16rz_CMLTv8i8rz") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #216
  {DBGFIELD("SMAXPv16i8_SMAXPv2i32_SMAXPv4i16_SMAXPv4i32_SMAXPv8i16_SMAXPv8i8_SMAXv16i8_SMAXv2i32_SMAXv4i16_SMAXv4i32_SMAXv8i16_SMAXv8i8_SMINPv16i8_SMINPv2i32_SMINPv4i16_SMINPv4i32_SMINPv8i16_SMINPv8i8_SMINv16i8_SMINv2i32_SMINv4i16_SMINv4i32_SMINv8i16_SMINv8i8_UMAXPv16i8_UMAXPv2i32_UMAXPv4i16_UMAXPv4i32_UMAXPv8i16_UMAXPv8i8_UMAXv16i8_UMAXv2i32_UMAXv4i16_UMAXv4i32_UMAXv8i16_UMAXv8i8_UMINPv16i8_UMINPv2i32_UMINPv4i16_UMINPv4i32_UMINPv8i16_UMINPv8i8_UMINv16i8_UMINv2i32_UMINv4i16_UMINv4i32_UMINv8i16_UMINv8i8") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #217
  {DBGFIELD("SABDLv16i8_v8i16_SABDLv2i32_v2i64_SABDLv4i16_v4i32_SABDLv4i32_v2i64_SABDLv8i16_v4i32_SABDLv8i8_v8i16_SABDv16i8_SABDv2i32_SABDv4i16_SABDv4i32_SABDv8i16_SABDv8i8_UABDLv16i8_v8i16_UABDLv2i32_v2i64_UABDLv4i16_v4i32_UABDLv4i32_v2i64_UABDLv8i16_v4i32_UABDLv8i8_v8i16_UABDv16i8_UABDv2i32_UABDv4i16_UABDv4i32_UABDv8i16_UABDv8i8") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #218
  {DBGFIELD("FADDPv2i32p")        1, 0, 0,  6, 1,  5, 1,  0, 0}, // #219
  {DBGFIELD("FADDPv2i64p")        1, 0, 0,  6, 1,  5, 1,  0, 0}, // #220
  {DBGFIELD("FMAXNMPv2i32p_FMAXNMPv2i64p_FMAXPv2i32p_FMAXPv2i64p_FMINNMPv2i32p_FMINNMPv2i64p_FMINPv2i32p_FMINPv2i64p") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #221
  {DBGFIELD("FMAXNMVv4i32v_FMAXVv4i32v_FMINNMVv4i32v_FMINVv4i32v") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #222
  {DBGFIELD("FADDSrr_FSUBSrr")    1, 0, 0,  6, 1,  5, 1,  0, 0}, // #223
  {DBGFIELD("FADDv2f32_FADDv4f32_FSUBv2f32_FSUBv4f32_FADDPv2f32_FADDPv4f32_FABD32_FABDv2f32_FABDv4f32") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #224
  {DBGFIELD("FADDDrr_FSUBDrr")    1, 0, 0,  6, 1,  5, 1,  0, 0}, // #225
  {DBGFIELD("FADDv2f64_FSUBv2f64_FADDPv2f64_FABD64_FABDv2f64") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #226
  {DBGFIELD("FCMEQ32_FCMEQ64_FCMEQv1i32rz_FCMEQv1i64rz_FCMEQv2f32_FCMEQv2f64_FCMEQv2i32rz_FCMEQv2i64rz_FCMEQv4f32_FCMEQv4i32rz_FCMGT32_FCMGT64_FCMGTv1i32rz_FCMGTv1i64rz_FCMGTv2f32_FCMGTv2f64_FCMGTv2i32rz_FCMGTv2i64rz_FCMGTv4f32_FCMGTv4i32rz_FCMLEv1i32rz_FCMLEv1i64rz_FCMLEv2i32rz_FCMLEv2i64rz_FCMLEv4i32rz_FCMLTv1i32rz_FCMLTv1i64rz_FCMLTv2i32rz_FCMLTv2i64rz_FCMLTv4i32rz") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #227
  {DBGFIELD("FACGE32_FACGE64_FACGEv2f32_FACGEv2f64_FACGEv4f32_FACGT32_FACGT64_FACGTv2f32_FACGTv2f64_FACGTv4f32_FMAXNMPv2f32_FMAXNMPv2f64_FMAXNMPv4f32_FMAXNMv2f32_FMAXNMv2f64_FMAXNMv4f32_FMAXPv2f32_FMAXPv2f64_FMAXPv4f32_FMAXv2f32_FMAXv2f64_FMAXv4f32_FMINNMPv2f32_FMINNMPv2f64_FMINNMPv4f32_FMINNMv2f32_FMINNMv2f64_FMINNMv4f32_FMINPv2f32_FMINPv2f64_FMINPv4f32_FMINv2f32_FMINv2f64_FMINv4f32") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #228
  {DBGFIELD("FMAXDrr_FMAXNMDrr_FMAXNMSrr_FMAXSrr_FMINDrr_FMINNMDrr_FMINNMSrr_FMINSrr") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #229
  {DBGFIELD("SSHRv16i8_shift_SSHRv2i32_shift_SSHRv2i64_shift_SSHRv4i16_shift_SSHRv4i32_shift_SSHRv8i16_shift_SSHRv8i8_shift_USHRv16i8_shift_USHRv2i32_shift_USHRv2i64_shift_USHRv4i16_shift_USHRv4i32_shift_USHRv8i16_shift_USHRv8i8_shift") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #230
  {DBGFIELD("SRSHRv16i8_shift_SRSHRv2i32_shift_SRSHRv2i64_shift_SRSHRv4i16_shift_SRSHRv4i32_shift_SRSHRv8i16_shift_SRSHRv8i8_shift_URSHRv16i8_shift_URSHRv2i32_shift_URSHRv2i64_shift_URSHRv4i16_shift_URSHRv4i32_shift_URSHRv8i16_shift_URSHRv8i8_shift") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #231
  {DBGFIELD("SRSRAv16i8_shift_SRSRAv2i32_shift_SRSRAv2i64_shift_SRSRAv4i16_shift_SRSRAv4i32_shift_SRSRAv8i16_shift_SRSRAv8i8_shift_SSRAv16i8_shift_SSRAv2i32_shift_SSRAv2i64_shift_SSRAv4i16_shift_SSRAv4i32_shift_SSRAv8i16_shift_SSRAv8i8_shift_URSRAv16i8_shift_URSRAv2i32_shift_URSRAv2i64_shift_URSRAv4i16_shift_URSRAv4i32_shift_URSRAv8i16_shift_URSRAv8i8_shift_USRAv16i8_shift_USRAv2i32_shift_USRAv2i64_shift_USRAv4i16_shift_USRAv4i32_shift_USRAv8i16_shift_USRAv8i8_shift") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #232
  {DBGFIELD("SRSHLv16i8_SRSHLv1i64_SRSHLv2i32_SRSHLv2i64_SRSHLv4i16_SRSHLv4i32_SRSHLv8i16_SRSHLv8i8_URSHLv16i8_URSHLv1i64_URSHLv2i32_URSHLv2i64_URSHLv4i16_URSHLv4i32_URSHLv8i16_URSHLv8i8") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #233
  {DBGFIELD("SQRSHLv16i8_SQRSHLv1i16_SQRSHLv1i32_SQRSHLv1i64_SQRSHLv1i8_SQRSHLv2i32_SQRSHLv2i64_SQRSHLv4i16_SQRSHLv4i32_SQRSHLv8i16_SQRSHLv8i8_UQRSHLv16i8_UQRSHLv1i16_UQRSHLv1i32_UQRSHLv1i64_UQRSHLv1i8_UQRSHLv2i32_UQRSHLv2i64_UQRSHLv4i16_UQRSHLv4i32_UQRSHLv8i16_UQRSHLv8i8") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #234
  {DBGFIELD("RSHRNv16i8_shift_RSHRNv2i32_shift_RSHRNv4i16_shift_RSHRNv4i32_shift_RSHRNv8i16_shift_RSHRNv8i8_shift_SHRNv16i8_shift_SHRNv2i32_shift_SHRNv4i16_shift_SHRNv4i32_shift_SHRNv8i16_shift_SHRNv8i8_shift_SQRSHRNv16i8_shift_SQRSHRNv2i32_shift_SQRSHRNv4i16_shift_SQRSHRNv4i32_shift_SQRSHRNv8i16_shift_SQRSHRNv8i8_shift_SQRSHRUNv16i8_shift_SQRSHRUNv2i32_shift_SQRSHRUNv4i16_shift_SQRSHRUNv4i32_shift_SQRSHRUNv8i16_shift_SQRSHRUNv8i8_shift_SQSHRNv16i8_shift_SQSHRNv2i32_shift_SQSHRNv4i16_shift_SQSHRNv4i32_shift_SQSHRNv8i16_shift_SQSHRNv8i8_shift_SQSHRUNv16i8_shift_SQSHRUNv2i32_shift_SQSHRUNv4i16_shift_SQSHRUNv4i32_shift_SQSHRUNv8i16_shift_SQSHRUNv8i8_shift_SQXTNv16i8_SQXTNv1i16_SQXTNv1i32_SQXTNv1i8_SQXTNv2i32_SQXTNv4i16_SQXTNv4i32_SQXTNv8i16_SQXTNv8i8_SQXTUNv16i8_SQXTUNv1i16_SQXTUNv1i32_SQXTUNv1i8_SQXTUNv2i32_SQXTUNv4i16_SQXTUNv4i32_SQXTUNv8i16_SQXTUNv8i8_UQRSHRNv16i8_shift_UQRSHRNv2i32_shift_UQRSHRNv4i16_shift_UQRSHRNv4i32_shift_UQRSHRNv8i16_shift_UQRSHRNv8i8_shift_UQSHRNv16i8_shift_UQSHRNv2i32_shift_UQSHRNv4i16_shift_UQSHRNv4i32_shift_UQSHRNv8i16_shift_UQSHRNv8i8_shift_UQXTNv16i8_UQXTNv1i16_UQXTNv1i32_UQXTNv1i8_UQXTNv2i32_UQXTNv4i16_UQXTNv4i32_UQXTNv8i16_UQXTNv8i8") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #235
  {DBGFIELD("MULv16i8_MULv2i32_MULv2i32_indexed_MULv4i16_MULv4i16_indexed_MULv4i32_MULv4i32_indexed_MULv8i16_MULv8i16_indexed_MULv8i8_SMULLv16i8_v8i16_SMULLv2i32_indexed_SMULLv2i32_v2i64_SMULLv4i16_indexed_SMULLv4i16_v4i32_SMULLv4i32_indexed_SMULLv4i32_v2i64_SMULLv8i16_indexed_SMULLv8i16_v4i32_SMULLv8i8_v8i16_SQDMULHv1i16_SQDMULHv1i16_indexed_SQDMULHv1i32_SQDMULHv1i32_indexed_SQDMULHv2i32_SQDMULHv2i32_indexed_SQDMULHv4i16_SQDMULHv4i16_indexed_SQDMULHv4i32_SQDMULHv4i32_indexed_SQDMULHv8i16_SQDMULHv8i16_indexed_SQDMULLv1i32_indexed_SQDMULLv1i64_indexed_SQDMULLv2i32_indexed_SQDMULLv2i32_v2i64_SQDMULLv4i16_indexed_SQDMULLv4i16_v4i32_SQDMULLv4i32_indexed_SQDMULLv4i32_v2i64_SQDMULLv8i16_indexed_SQDMULLv8i16_v4i32_SQRDMULHv1i16_SQRDMULHv1i16_indexed_SQRDMULHv1i32_SQRDMULHv1i32_indexed_SQRDMULHv2i32_SQRDMULHv2i32_indexed_SQRDMULHv4i16_SQRDMULHv4i16_indexed_SQRDMULHv4i32_SQRDMULHv4i32_indexed_SQRDMULHv8i16_SQRDMULHv8i16_indexed_UMULLv16i8_v8i16_UMULLv2i32_indexed_UMULLv2i32_v2i64_UMULLv4i16_indexed_UMULLv4i16_v4i32_UMULLv4i32_indexed_UMULLv4i32_v2i64_UMULLv8i16_indexed_UMULLv8i16_v4i32_UMULLv8i8_v8i16") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #236
  {DBGFIELD("FMULDrr_FNMULDrr")   1, 0, 0,  6, 1, 21, 1,  0, 0}, // #237
  {DBGFIELD("FMULv2f64_FMULv2i64_indexed_FMULX64_FMULXv2f64_FMULXv2i64_indexed") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #238
  {DBGFIELD("MLAv16i8_MLAv2i32_MLAv2i32_indexed_MLAv4i16_MLAv4i16_indexed_MLAv4i32_MLAv4i32_indexed_MLAv8i16_MLAv8i16_indexed_MLAv8i8_MLSv16i8_MLSv2i32_MLSv2i32_indexed_MLSv4i16_MLSv4i16_indexed_MLSv4i32_MLSv4i32_indexed_MLSv8i16_MLSv8i16_indexed_MLSv8i8_SMLALv16i8_v8i16_SMLALv2i32_indexed_SMLALv2i32_v2i64_SMLALv4i16_indexed_SMLALv4i16_v4i32_SMLALv4i32_indexed_SMLALv4i32_v2i64_SMLALv8i16_indexed_SMLALv8i16_v4i32_SMLALv8i8_v8i16_SMLSLv16i8_v8i16_SMLSLv2i32_indexed_SMLSLv2i32_v2i64_SMLSLv4i16_indexed_SMLSLv4i16_v4i32_SMLSLv4i32_indexed_SMLSLv4i32_v2i64_SMLSLv8i16_indexed_SMLSLv8i16_v4i32_SMLSLv8i8_v8i16_SQDMLALi16_SQDMLALi32_SQDMLALv1i32_indexed_SQDMLALv1i64_indexed_SQDMLALv2i32_indexed_SQDMLALv2i32_v2i64_SQDMLALv4i16_indexed_SQDMLALv4i16_v4i32_SQDMLALv4i32_indexed_SQDMLALv4i32_v2i64_SQDMLALv8i16_indexed_SQDMLALv8i16_v4i32_SQDMLSLi16_SQDMLSLi32_SQDMLSLv1i32_indexed_SQDMLSLv1i64_indexed_SQDMLSLv2i32_indexed_SQDMLSLv2i32_v2i64_SQDMLSLv4i16_indexed_SQDMLSLv4i16_v4i32_SQDMLSLv4i32_indexed_SQDMLSLv4i32_v2i64_SQDMLSLv8i16_indexed_SQDMLSLv8i16_v4i32_UMLALv16i8_v8i16_UMLALv2i32_indexed_UMLALv2i32_v2i64_UMLALv4i16_indexed_UMLALv4i16_v4i32_UMLALv4i32_indexed_UMLALv4i32_v2i64_UMLALv8i16_indexed_UMLALv8i16_v4i32_UMLALv8i8_v8i16_UMLSLv16i8_v8i16_UMLSLv2i32_indexed_UMLSLv2i32_v2i64_UMLSLv4i16_indexed_UMLSLv4i16_v4i32_UMLSLv4i32_indexed_UMLSLv4i32_v2i64_UMLSLv8i16_indexed_UMLSLv8i16_v4i32_UMLSLv8i8_v8i16") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #239
  {DBGFIELD("FMADDSrrr_FMSUBSrrr_FNMADDSrrr_FNMSUBSrrr") 1, 0, 0,  6, 1, 21, 1,  0, 0}, // #240
  {DBGFIELD("FMLAv2f32_FMLAv4f32_FMLAv1i32_indexed_FMLAv1i64_indexed_FMLAv2i32_indexed") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #241
  {DBGFIELD("FMLAv2f64_FMLAv2i64_indexed_FMLSv2f64_FMLSv2i64_indexed") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #242
  {DBGFIELD("PMULLv16i8_PMULLv1i64_PMULLv2i64_PMULLv8i8_PMULv16i8_PMULv8i8") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #243
  {DBGFIELD("FRECPEv1i32_FRECPEv1i64_FRECPEv2f32_FRECPEv2f64_FRECPEv4f32_FRECPXv1i32_FRECPXv1i64_URECPEv2i32_URECPEv4i32") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #244
  {DBGFIELD("URSQRTEv2i32_URSQRTEv4i32") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #245
  {DBGFIELD("FRSQRTEv1i32_FRSQRTEv2f32_FRSQRTEv4f32") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #246
  {DBGFIELD("FRSQRTEv1i64_FRSQRTEv2f64") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #247
  {DBGFIELD("FRECPSv2f32_FRECPSv2f64_FRECPSv4f32") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #248
  {DBGFIELD("FRSQRTSv2f32_FRSQRTSv4f32") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #249
  {DBGFIELD("FRSQRTSv2f64")       1, 0, 0,  6, 1,  5, 1,  0, 0}, // #250
  {DBGFIELD("FCVTSHr_FCVTDHr_FCVTDSr") 1, 0, 0,  6, 1, 21, 1,  0, 0}, // #251
  {DBGFIELD("FCVTASUWDr_FCVTASUWSr_FCVTASUXDr_FCVTASUXSr_FCVTAUUWDr_FCVTAUUWSr_FCVTAUUXDr_FCVTAUUXSr_FCVTMSUWDr_FCVTMSUWSr_FCVTMSUXDr_FCVTMSUXSr_FCVTMUUWDr_FCVTMUUWSr_FCVTMUUXDr_FCVTMUUXSr_FCVTNSUWDr_FCVTNSUWSr_FCVTNSUXDr_FCVTNSUXSr_FCVTNUUWDr_FCVTNUUWSr_FCVTNUUXDr_FCVTNUUXSr_FCVTPSUWDr_FCVTPSUWSr_FCVTPSUXDr_FCVTPSUXSr_FCVTPUUWDr_FCVTPUUWSr_FCVTPUUXDr_FCVTPUUXSr_FCVTZSSWDri_FCVTZSSWSri_FCVTZSSXDri_FCVTZSSXSri_FCVTZSUWDr_FCVTZSUWSr_FCVTZSUXDr_FCVTZSUXSr_FCVTZUSWDri_FCVTZUSWSri_FCVTZUSXDri_FCVTZUSXSri_FCVTZUUWDr_FCVTZUUWSr_FCVTZUUXDr_FCVTZUUXSr") 1, 0, 0,  6, 1, 21, 1,  0, 0}, // #252
  {DBGFIELD("SCVTFSWDri_SCVTFSWSri_SCVTFSXDri_SCVTFSXSri_SCVTFUWDri_SCVTFUWSri_SCVTFUXDri_SCVTFUXSri_UCVTFSWDri_UCVTFSWSri_UCVTFSXDri_UCVTFSXSri_UCVTFUWDri_UCVTFUWSri_UCVTFUXDri_UCVTFUXSri") 1, 0, 0,  6, 1, 21, 1,  0, 0}, // #253
  {DBGFIELD("AESIMCrr_AESMCrr_SHA1Hrr_AESDrr_AESErr_SHA1SU1rr_SHA256SU0rr_SHA1SU0rrr") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #254
  {DBGFIELD("SHA256SU1rrr")       1, 0, 0,  6, 1,  5, 1,  0, 0}, // #255
  {DBGFIELD("SHA1Crrr_SHA1Mrrr_SHA1Prrr_SHA256Hrrr_SHA256H2rrr") 1, 0, 0,  6, 1,  5, 1,  0, 0}, // #256
  {DBGFIELD("WriteISReg_ReadI_A53ReadShifted") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #257
  {DBGFIELD("WriteISReg_ReadI_A53ReadNotShifted") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #258
  {DBGFIELD("WriteIEReg_ReadI_A53ReadShifted") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #259
  {DBGFIELD("WriteIEReg_ReadI_A53ReadNotShifted") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #260
  {DBGFIELD("(WriteIS_WriteLD)_ReadBaseRS") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #261
  {DBGFIELD("WriteLD_ReadDefault") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #262
  {DBGFIELD("WriteAdr_WriteST_ReadBaseRS") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #263
  {DBGFIELD("WriteAdr_WriteST_ReadDefault") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #264
  {DBGFIELD("(WriteIS_WriteST)_ReadBaseRS") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #265
  {DBGFIELD("WriteST_ReadDefault") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #266
  {DBGFIELD("WriteX")             0, 0, 0,  0, 0,  0, 0,  0, 0}, // #267
  {DBGFIELD("WriteI")             0, 0, 0,  0, 0,  0, 0,  0, 0}, // #268
  {DBGFIELD("WriteImm")           0, 0, 0,  0, 0,  0, 0,  0, 0}, // #269
  {DBGFIELD("WriteV")             0, 0, 0,  0, 0,  0, 0,  0, 0} // #270
}; // CortexA57ModelSchedClasses

// {Name, NumMicroOps, BeginGroup, EndGroup, WriteProcResIdx,#, WriteLatencyIdx,#, ReadAdvanceIdx,#}
static const llvm::MCSchedClassDesc CycloneModelSchedClasses[] = {
  {DBGFIELD("InvalidSchedClass")  65535, 0, 0,  0, 0,  0, 0,  0, 0},
  {DBGFIELD("WriteV")             1, 0, 0, 119, 1, 37, 1,  0, 0}, // #1
  {DBGFIELD("WriteI_ReadI_ReadI") 1, 0, 0,  1, 1, 65, 1, 64, 2}, // #2
  {DBGFIELD("WriteI_ReadI")       1, 0, 0,  1, 1, 65, 1,  0, 1}, // #3
  {DBGFIELD("WriteISReg_ReadI_ReadISReg") 1, 0, 0, 120, 2, 66, 1, 64, 2}, // #4
  {DBGFIELD("WriteIEReg_ReadI_ReadIEReg") 1, 0, 0, 120, 2, 67, 1, 64, 2}, // #5
  {DBGFIELD("WriteI")             1, 0, 0,  1, 1, 65, 1,  0, 0}, // #6
  {DBGFIELD("WriteIS_ReadI")      1, 0, 0, 122, 2, 68, 1,  0, 1}, // #7
  {DBGFIELD("WriteBr")            1, 0, 0, 124, 2,  0, 1,  0, 0}, // #8
  {DBGFIELD("WriteBrReg")         1, 0, 0, 126, 3,  0, 1,  0, 0}, // #9
  {DBGFIELD("WriteSys")           1, 0, 0,  0, 0, 69, 1,  0, 0}, // #10
  {DBGFIELD("WriteBarrier")       1, 0, 0, 129, 1,  4, 1,  0, 0}, // #11
  {DBGFIELD("WriteExtr_ReadExtrHi") 2, 0, 0, 120, 2, 37, 1, 69, 1}, // #12
  {DBGFIELD("WriteF")             1, 0, 0, 119, 1, 37, 1,  0, 0}, // #13
  {DBGFIELD("WriteFCmp")          1, 0, 0, 130, 3,  7, 1,  0, 0}, // #14
  {DBGFIELD("WriteFCvt")          1, 0, 0, 119, 1,  7, 1,  0, 0}, // #15
  {DBGFIELD("WriteFDiv")          1, 0, 0, 133, 3, 33, 1,  0, 0}, // #16
  {DBGFIELD("WriteFMul")          1, 0, 0, 136, 2,  7, 1,  0, 0}, // #17
  {DBGFIELD("WriteFCopy")         1, 0, 0, 129, 1, 21, 1,  0, 0}, // #18
  {DBGFIELD("WriteFImm")          1, 0, 0, 119, 1, 37, 1,  0, 0}, // #19
  {DBGFIELD("WriteHint")          1, 0, 0,  0, 0,  0, 1,  0, 0}, // #20
  {DBGFIELD("WriteLD")            1, 0, 0, 129, 1,  7, 1,  0, 0}, // #21
  {DBGFIELD("WriteLD_WriteLDHi")  2, 0, 0, 129, 1,  7, 2,  0, 0}, // #22
  {DBGFIELD("WriteLD_WriteLDHi_WriteAdr") 3, 0, 0, 128, 2, 38, 3,  0, 0}, // #23
  {DBGFIELD("WriteLD_WriteI")     2, 0, 0, 128, 2, 70, 2,  0, 0}, // #24
  {DBGFIELD("WriteLD_WriteAdr")   2, 0, 0, 128, 2, 39, 2,  0, 0}, // #25
  {DBGFIELD("WriteLDIdx_ReadAdrBase") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #26
  {DBGFIELD("WriteLDAdr")         2, 0, 0, 128, 2, 21, 1,  0, 0}, // #27
  {DBGFIELD("WriteIM32_ReadIM_ReadIM_ReadIMA") 1, 0, 0, 138, 4, 15, 1, 66, 3}, // #28
  {DBGFIELD("WriteIM64_ReadIM_ReadIM_ReadIMA") 1, 0, 0, 138, 4, 72, 1, 66, 3}, // #29
  {DBGFIELD("WriteImm")           1, 0, 0,  1, 1, 73, 1,  0, 0}, // #30
  {DBGFIELD("WriteAdrAdr")        2, 0, 0, 120, 1, 37, 1,  0, 0}, // #31
  {DBGFIELD("WriteID32_ReadID_ReadID") 1, 0, 0, 142, 4, 74, 1, 64, 2}, // #32
  {DBGFIELD("WriteID64_ReadID_ReadID") 1, 0, 0, 146, 4, 75, 1, 64, 2}, // #33
  {DBGFIELD("WriteIM64_ReadIM_ReadIM") 1, 0, 0, 138, 4, 72, 1, 64, 2}, // #34
  {DBGFIELD("WriteST")            1, 0, 0, 129, 1,  7, 1,  0, 0}, // #35
  {DBGFIELD("WriteSTX")           2, 0, 0, 150, 1, 20, 1,  0, 0}, // #36
  {DBGFIELD("WriteSTP")           2, 0, 0, 129, 2,  1, 1,  0, 0}, // #37
  {DBGFIELD("WriteAdr_WriteSTP")  3, 0, 0, 128, 3, 48, 2,  0, 0}, // #38
  {DBGFIELD("WriteAdr_WriteST_ReadAdrBase") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #39
  {DBGFIELD("WriteAdr_WriteST")   2, 0, 0, 128, 2, 76, 2,  0, 0}, // #40
  {DBGFIELD("WriteSTIdx_ReadAdrBase") 65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #41
  {DBGFIELD("COPY")               65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #42
  {DBGFIELD("LD1i16_LD1i32_LD1i64_LD1i8") 2, 0, 0, 129, 2, 22, 1, 70, 1}, // #43
  {DBGFIELD("LD1Rv16b_LD1Rv1d_LD1Rv2d_LD1Rv2s_LD1Rv4h_LD1Rv4s_LD1Rv8b_LD1Rv8h") 2, 0, 0, 129, 2, 22, 1,  0, 0}, // #44
  {DBGFIELD("LD1Onev16b_LD1Onev1d_LD1Onev2d_LD1Onev2s_LD1Onev4h_LD1Onev4s_LD1Onev8b_LD1Onev8h") 1, 0, 0, 129, 1, 21, 1,  0, 0}, // #45
  {DBGFIELD("LD1Twov16b_LD1Twov1d_LD1Twov2d_LD1Twov2s_LD1Twov4h_LD1Twov4s_LD1Twov8b_LD1Twov8h") 2, 0, 0, 150, 1, 78, 2,  0, 0}, // #46
  {DBGFIELD("LD1Threev16b_LD1Threev1d_LD1Threev2d_LD1Threev2s_LD1Threev4h_LD1Threev4s_LD1Threev8b_LD1Threev8h") 3, 0, 0, 151, 1, 80, 3,  0, 0}, // #47
  {DBGFIELD("LD1Fourv16b_LD1Fourv1d_LD1Fourv2d_LD1Fourv2s_LD1Fourv4h_LD1Fourv4s_LD1Fourv8b_LD1Fourv8h") 4, 0, 0, 152, 1, 78, 4,  0, 0}, // #48
  {DBGFIELD("LD1i16_POST_LD1i32_POST_LD1i64_POST_LD1i8_POST") 3, 0, 0, 128, 3, 51, 2, 70, 1}, // #49
  {DBGFIELD("LD1Rv16b_POST_LD1Rv1d_POST_LD1Rv2d_POST_LD1Rv2s_POST_LD1Rv4h_POST_LD1Rv4s_POST_LD1Rv8b_POST_LD1Rv8h_POST") 3, 0, 0, 128, 3, 51, 2,  0, 0}, // #50
  {DBGFIELD("LD1Onev16b_POST_LD1Onev1d_POST_LD1Onev2d_POST_LD1Onev2s_POST_LD1Onev4h_POST_LD1Onev4s_POST_LD1Onev8b_POST_LD1Onev8h_POST") 2, 0, 0, 128, 2, 45, 2,  0, 0}, // #51
  {DBGFIELD("LD1Twov16b_POST_LD1Twov1d_POST_LD1Twov2d_POST_LD1Twov2s_POST_LD1Twov4h_POST_LD1Twov4s_POST_LD1Twov8b_POST_LD1Twov8h_POST") 3, 0, 0, 153, 2, 83, 3,  0, 0}, // #52
  {DBGFIELD("LD1Threev16b_POST_LD1Threev1d_POST_LD1Threev2d_POST_LD1Threev2s_POST_LD1Threev4h_POST_LD1Threev4s_POST_LD1Threev8b_POST_LD1Threev8h_POST") 4, 0, 0, 155, 2, 86, 4,  0, 0}, // #53
  {DBGFIELD("LD1Fourv16b_POST_LD1Fourv1d_POST_LD1Fourv2d_POST_LD1Fourv2s_POST_LD1Fourv4h_POST_LD1Fourv4s_POST_LD1Fourv8b_POST_LD1Fourv8h_POST") 5, 0, 0, 157, 2, 90, 5,  0, 0}, // #54
  {DBGFIELD("LD2i16_LD2i32_LD2i64_LD2i8") 3, 0, 0, 159, 2, 95, 2, 70, 1}, // #55
  {DBGFIELD("LD2Rv16b_LD2Rv1d_LD2Rv2d_LD2Rv2s_LD2Rv4h_LD2Rv4s_LD2Rv8b_LD2Rv8h") 3, 0, 0, 159, 2, 95, 2,  0, 0}, // #56
  {DBGFIELD("LD2Twov2s_LD2Twov4h_LD2Twov8b") 3, 0, 0, 159, 2, 95, 2,  0, 0}, // #57
  {DBGFIELD("LD2Twov16b_LD2Twov2d_LD2Twov4s_LD2Twov8h") 4, 0, 0, 161, 2, 97, 2,  0, 0}, // #58
  {DBGFIELD("LD2i16_POST_LD2i32_POST_LD2i64_POST_LD2i8_POST") 4, 0, 0, 163, 3, 99, 3, 70, 1}, // #59
  {DBGFIELD("LD2Rv16b_POST_LD2Rv1d_POST_LD2Rv2d_POST_LD2Rv2s_POST_LD2Rv4h_POST_LD2Rv4s_POST_LD2Rv8b_POST_LD2Rv8h_POST") 4, 0, 0, 163, 3, 99, 3,  0, 0}, // #60
  {DBGFIELD("LD2Twov2s_POST_LD2Twov4h_POST_LD2Twov8b_POST") 4, 0, 0, 163, 3, 99, 3,  0, 0}, // #61
  {DBGFIELD("LD2Twov16b_POST_LD2Twov2d_POST_LD2Twov4s_POST_LD2Twov8h_POST") 5, 0, 0, 166, 3, 102, 3,  0, 0}, // #62
  {DBGFIELD("LD3i16_LD3i32_LD3i64_LD3i8") 5, 0, 0, 169, 2, 105, 3, 70, 1}, // #63
  {DBGFIELD("LD3Rv16b_LD3Rv1d_LD3Rv2d_LD3Rv2s_LD3Rv4h_LD3Rv4s_LD3Rv8b_LD3Rv8h") 5, 0, 0, 169, 2, 105, 3,  0, 0}, // #64
  {DBGFIELD("LD3Threev16b_LD3Threev2s_LD3Threev4h_LD3Threev4s_LD3Threev8b_LD3Threev8h") 6, 0, 0, 171, 2, 97, 3,  0, 0}, // #65
  {DBGFIELD("LD3Threev2d")        6, 0, 0, 171, 2, 97, 3,  0, 0}, // #66
  {DBGFIELD("LD3i16_POST_LD3i32_POST_LD3i64_POST_LD3i8_POST") 6, 0, 0, 173, 3, 108, 4, 70, 1}, // #67
  {DBGFIELD("LD3Rv16b_POST_LD3Rv1d_POST_LD3Rv2d_POST_LD3Rv2s_POST_LD3Rv4h_POST_LD3Rv4s_POST_LD3Rv8b_POST_LD3Rv8h_POST") 6, 0, 0, 173, 3, 108, 4,  0, 0}, // #68
  {DBGFIELD("LD3Threev16b_POST_LD3Threev2s_POST_LD3Threev4h_POST_LD3Threev4s_POST_LD3Threev8b_POST_LD3Threev8h_POST") 7, 0, 0, 176, 3, 102, 4,  0, 0}, // #69
  {DBGFIELD("LD3Threev2d_POST")   7, 0, 0, 176, 3, 102, 4,  0, 0}, // #70
  {DBGFIELD("LD4i16_LD4i32_LD4i64_LD4i8") 6, 0, 0, 179, 2, 112, 4, 70, 1}, // #71
  {DBGFIELD("LD4Rv16b_LD4Rv1d_LD4Rv2d_LD4Rv2s_LD4Rv4h_LD4Rv4s_LD4Rv8b_LD4Rv8h") 6, 0, 0, 179, 2, 112, 4,  0, 0}, // #72
  {DBGFIELD("LD4Fourv16b_LD4Fourv2s_LD4Fourv4h_LD4Fourv4s_LD4Fourv8b_LD4Fourv8h") 12, 0, 0, 181, 2, 116, 4,  0, 0}, // #73
  {DBGFIELD("LD4Fourv2d")         12, 0, 0, 181, 2, 116, 4,  0, 0}, // #74
  {DBGFIELD("LD4i16_POST_LD4i32_POST_LD4i64_POST_LD4i8_POST") 6, 0, 0, 173, 3, 108, 4, 70, 1}, // #75
  {DBGFIELD("LD4Rv16b_POST_LD4Rv1d_POST_LD4Rv2d_POST_LD4Rv2s_POST_LD4Rv4h_POST_LD4Rv4s_POST_LD4Rv8b_POST_LD4Rv8h_POST") 7, 0, 0, 183, 3, 120, 5,  0, 0}, // #76
  {DBGFIELD("LD4Fourv16b_POST_LD4Fourv2s_POST_LD4Fourv4h_POST_LD4Fourv4s_POST_LD4Fourv8b_POST_LD4Fourv8h_POST") 13, 0, 0, 186, 3, 125, 5,  0, 0}, // #77
  {DBGFIELD("LD4Fourv2d_POST")    13, 0, 0, 186, 3, 125, 5,  0, 0}, // #78
  {DBGFIELD("ST1i16_ST1i32_ST1i64_ST1i8") 2, 0, 0, 129, 2,  1, 1,  0, 0}, // #79
  {DBGFIELD("ST1Onev16b_ST1Onev1d_ST1Onev2d_ST1Onev2s_ST1Onev4h_ST1Onev4s_ST1Onev8b_ST1Onev8h") 1, 0, 0, 129, 1,  7, 1,  0, 0}, // #80
  {DBGFIELD("ST1Twov16b_ST1Twov1d_ST1Twov2d_ST1Twov2s_ST1Twov4h_ST1Twov4s_ST1Twov8b_ST1Twov8h") 2, 0, 0, 150, 1,  7, 2,  0, 0}, // #81
  {DBGFIELD("ST1Threev16b_ST1Threev1d_ST1Threev2d_ST1Threev2s_ST1Threev4h_ST1Threev4s_ST1Threev8b_ST1Threev8h") 3, 0, 0, 151, 1,  7, 3,  0, 0}, // #82
  {DBGFIELD("ST1Fourv16b_ST1Fourv1d_ST1Fourv2d_ST1Fourv2s_ST1Fourv4h_ST1Fourv4s_ST1Fourv8b_ST1Fourv8h") 4, 0, 0, 152, 1,  7, 4,  0, 0}, // #83
  {DBGFIELD("ST1i16_POST_ST1i32_POST_ST1i64_POST_ST1i8_POST") 3, 0, 0, 128, 3, 48, 2,  0, 0}, // #84
  {DBGFIELD("ST1Onev16b_POST_ST1Onev1d_POST_ST1Onev2d_POST_ST1Onev2s_POST_ST1Onev4h_POST_ST1Onev4s_POST_ST1Onev8b_POST_ST1Onev8h_POST") 2, 0, 0, 128, 2, 76, 2,  0, 0}, // #85
  {DBGFIELD("ST1Twov16b_POST_ST1Twov1d_POST_ST1Twov2d_POST_ST1Twov2s_POST_ST1Twov4h_POST_ST1Twov4s_POST_ST1Twov8b_POST_ST1Twov8h_POST") 3, 0, 0, 153, 2, 130, 3,  0, 0}, // #86
  {DBGFIELD("ST1Threev16b_POST_ST1Threev1d_POST_ST1Threev2d_POST_ST1Threev2s_POST_ST1Threev4h_POST_ST1Threev4s_POST_ST1Threev8b_POST_ST1Threev8h_POST") 4, 0, 0, 155, 2, 133, 4,  0, 0}, // #87
  {DBGFIELD("ST1Fourv16b_POST_ST1Fourv1d_POST_ST1Fourv2d_POST_ST1Fourv2s_POST_ST1Fourv4h_POST_ST1Fourv4s_POST_ST1Fourv8b_POST_ST1Fourv8h_POST") 5, 0, 0, 157, 2, 137, 5,  0, 0}, // #88
  {DBGFIELD("ST2i16_ST2i32_ST2i64_ST2i8") 2, 0, 0, 129, 2,  1, 1,  0, 0}, // #89
  {DBGFIELD("ST2Twov2s_ST2Twov4h_ST2Twov8b") 2, 0, 0, 129, 2,  1, 1,  0, 0}, // #90
  {DBGFIELD("ST2Twov16b_ST2Twov2d_ST2Twov4s_ST2Twov8h") 4, 0, 0, 161, 2, 142, 2,  0, 0}, // #91
  {DBGFIELD("ST2i16_POST_ST2i32_POST_ST2i64_POST_ST2i8_POST") 3, 0, 0, 128, 3, 48, 2,  0, 0}, // #92
  {DBGFIELD("ST2Twov2s_POST_ST2Twov4h_POST_ST2Twov8b_POST") 3, 0, 0, 128, 3, 48, 2,  0, 0}, // #93
  {DBGFIELD("ST2Twov16b_POST_ST2Twov2d_POST_ST2Twov4s_POST_ST2Twov8h_POST") 5, 0, 0, 166, 3, 144, 3,  0, 0}, // #94
  {DBGFIELD("ST3i16_ST3i32_ST3i64_ST3i8") 4, 0, 0, 161, 2, 142, 2,  0, 0}, // #95
  {DBGFIELD("ST3Threev16b_ST3Threev2s_ST3Threev4h_ST3Threev4s_ST3Threev8b_ST3Threev8h") 6, 0, 0, 171, 2, 147, 3,  0, 0}, // #96
  {DBGFIELD("ST3Threev2d")        6, 0, 0, 171, 2, 145, 3,  0, 0}, // #97
  {DBGFIELD("ST3i16_POST_ST3i32_POST_ST3i64_POST_ST3i8_POST") 5, 0, 0, 166, 3, 144, 3,  0, 0}, // #98
  {DBGFIELD("ST3Threev16b_POST_ST3Threev2s_POST_ST3Threev4h_POST_ST3Threev4s_POST_ST3Threev8b_POST_ST3Threev8h_POST") 7, 0, 0, 176, 3, 144, 4,  0, 0}, // #99
  {DBGFIELD("ST3Threev2d_POST")   7, 0, 0, 176, 3, 144, 4,  0, 0}, // #100
  {DBGFIELD("ST4i16_ST4i32_ST4i64_ST4i8") 4, 0, 0, 161, 2, 142, 2,  0, 0}, // #101
  {DBGFIELD("ST4Fourv16b_ST4Fourv2s_ST4Fourv4h_ST4Fourv4s_ST4Fourv8b_ST4Fourv8h") 12, 0, 0, 181, 2, 150, 4,  0, 0}, // #102
  {DBGFIELD("ST4Fourv2d")         12, 0, 0, 181, 2, 150, 4,  0, 0}, // #103
  {DBGFIELD("ST4i16_POST_ST4i32_POST_ST4i64_POST_ST4i8_POST") 5, 0, 0, 166, 3, 144, 3,  0, 0}, // #104
  {DBGFIELD("ST4Fourv16b_POST_ST4Fourv2s_POST_ST4Fourv4h_POST_ST4Fourv4s_POST_ST4Fourv8b_POST_ST4Fourv8h_POST") 13, 0, 0, 186, 3, 154, 5,  0, 0}, // #105
  {DBGFIELD("ST4Fourv2d_POST")    13, 0, 0, 186, 3, 154, 5,  0, 0}, // #106
  {DBGFIELD("FMADDDrrr_FMADDSrrr_FMSUBDrrr_FMSUBSrrr_FNMADDDrrr_FNMADDSrrr_FNMSUBDrrr_FNMSUBSrrr") 1, 0, 0, 136, 2, 159, 1, 71, 1}, // #107
  {DBGFIELD("FMLAv1i32_indexed_FMLAv1i64_indexed_FMLAv2f32_FMLAv2f64_FMLAv2i32_indexed_FMLAv2i64_indexed_FMLAv4f32_FMLAv4i32_indexed_FMLSv1i32_indexed_FMLSv1i64_indexed_FMLSv2f32_FMLSv2f64_FMLSv2i32_indexed_FMLSv2i64_indexed_FMLSv4f32_FMLSv4i32_indexed") 1, 0, 0, 119, 1, 37, 1,  0, 0}, // #108
  {DBGFIELD("FDIVSrr")            1, 0, 0, 133, 3, 33, 1,  0, 0}, // #109
  {DBGFIELD("FDIVDrr")            1, 0, 0, 133, 3, 33, 1,  0, 0}, // #110
  {DBGFIELD("FDIVv2f32_FDIVv4f32") 1, 0, 0, 119, 1, 37, 1,  0, 0}, // #111
  {DBGFIELD("FDIVv2f64")          1, 0, 0, 119, 1, 37, 1,  0, 0}, // #112
  {DBGFIELD("FRSQRTEv1i32_FRSQRTEv2f32_FRSQRTEv4f32_FRSQRTS32_FRSQRTSv2f32_FRSQRTSv4f32_FSQRTv2f32_FSQRTv4f32_URSQRTEv2i32_URSQRTEv4i32") 1, 0, 0, 119, 1, 37, 1,  0, 0}, // #113
  {DBGFIELD("FRSQRTEv1i64_FRSQRTEv2f64_FRSQRTS64_FRSQRTSv2f64_FSQRTv2f64") 1, 0, 0, 119, 1, 37, 1,  0, 0}, // #114
  {DBGFIELD("BL")                 1, 0, 0, 124, 2,  0, 1,  0, 0}, // #115
  {DBGFIELD("BLR")                1, 0, 0, 126, 3,  0, 1,  0, 0}, // #116
  {DBGFIELD("SMULHrr_UMULHrr")    1, 0, 0, 138, 4, 72, 1, 64, 2}, // #117
  {DBGFIELD("EXTRWrri")           2, 0, 0, 120, 2, 37, 1, 69, 1}, // #118
  {DBGFIELD("EXTRXrri")           2, 0, 0, 120, 2, 37, 1, 69, 1}, // #119
  {DBGFIELD("BFMWri_BFMXri")      1, 0, 0, 122, 2, 68, 1,  0, 1}, // #120
  {DBGFIELD("CRC32Brr_CRC32CBrr_CRC32CHrr_CRC32CWrr_CRC32CXrr_CRC32Hrr_CRC32Wrr_CRC32Xrr") 1, 0, 0, 120, 2, 66, 1, 64, 2}, // #121
  {DBGFIELD("LD1i16_LD1i32_LD1i8") 2, 0, 0, 129, 2, 22, 1, 70, 1}, // #122
  {DBGFIELD("LD1i16_POST_LD1i32_POST_LD1i8_POST") 3, 0, 0, 128, 3, 51, 2, 70, 1}, // #123
  {DBGFIELD("LD1Rv2s_LD1Rv4h_LD1Rv8b") 2, 0, 0, 129, 2, 22, 1,  0, 0}, // #124
  {DBGFIELD("LD1Rv2s_POST_LD1Rv4h_POST_LD1Rv8b_POST") 3, 0, 0, 128, 3, 51, 2,  0, 0}, // #125
  {DBGFIELD("LD1Rv1d")            2, 0, 0, 129, 2, 22, 1,  0, 0}, // #126
  {DBGFIELD("LD1Rv1d_POST")       3, 0, 0, 128, 3, 51, 2,  0, 0}, // #127
  {DBGFIELD("LD1Onev1d_LD1Onev2s_LD1Onev4h_LD1Onev8b") 1, 0, 0, 129, 1, 21, 1,  0, 0}, // #128
  {DBGFIELD("LD1Onev1d_POST_LD1Onev2s_POST_LD1Onev4h_POST_LD1Onev8b_POST") 2, 0, 0, 128, 2, 45, 2,  0, 0}, // #129
  {DBGFIELD("LD1Twov1d_LD1Twov2s_LD1Twov4h_LD1Twov8b") 1, 0, 0, 129, 1, 21, 1,  0, 0}, // #130
  {DBGFIELD("LD1Twov1d_POST_LD1Twov2s_POST_LD1Twov4h_POST_LD1Twov8b_POST") 2, 0, 0, 128, 2, 45, 2,  0, 0}, // #131
  {DBGFIELD("LD1Threev1d_LD1Threev2s_LD1Threev4h_LD1Threev8b") 2, 0, 0, 150, 1, 78, 2,  0, 0}, // #132
  {DBGFIELD("LD1Threev1d_POST_LD1Threev2s_POST_LD1Threev4h_POST_LD1Threev8b_POST") 3, 0, 0, 153, 2, 83, 3,  0, 0}, // #133
  {DBGFIELD("LD1Fourv1d_LD1Fourv2s_LD1Fourv4h_LD1Fourv8b") 2, 0, 0, 150, 1, 78, 2,  0, 0}, // #134
  {DBGFIELD("LD1Fourv1d_POST_LD1Fourv2s_POST_LD1Fourv4h_POST_LD1Fourv8b_POST") 3, 0, 0, 153, 2, 83, 3,  0, 0}, // #135
  {DBGFIELD("LD2i16_LD2i8")       3, 0, 0, 159, 2, 95, 2, 70, 1}, // #136
  {DBGFIELD("LD2i16_POST_LD2i8_POST") 4, 0, 0, 163, 3, 99, 3, 70, 1}, // #137
  {DBGFIELD("LD2i32")             3, 0, 0, 159, 2, 95, 2, 70, 1}, // #138
  {DBGFIELD("LD2i32_POST")        4, 0, 0, 163, 3, 99, 3, 70, 1}, // #139
  {DBGFIELD("LD2Rv2s_LD2Rv4h_LD2Rv8b") 3, 0, 0, 159, 2, 95, 2,  0, 0}, // #140
  {DBGFIELD("LD2Rv2s_POST_LD2Rv4h_POST_LD2Rv8b_POST") 4, 0, 0, 163, 3, 99, 3,  0, 0}, // #141
  {DBGFIELD("LD2Rv1d")            3, 0, 0, 159, 2, 95, 2,  0, 0}, // #142
  {DBGFIELD("LD2Rv1d_POST")       4, 0, 0, 163, 3, 99, 3,  0, 0}, // #143
  {DBGFIELD("LD2Twov16b_LD2Twov4s_LD2Twov8h") 4, 0, 0, 161, 2, 97, 2,  0, 0}, // #144
  {DBGFIELD("LD2Twov16b_POST_LD2Twov4s_POST_LD2Twov8h_POST") 5, 0, 0, 166, 3, 102, 3,  0, 0}, // #145
  {DBGFIELD("LD3i16_LD3i8")       4, 0, 0, 189, 2, 113, 3, 70, 1}, // #146
  {DBGFIELD("LD3i16_POST_LD3i8_POST") 5, 0, 0, 191, 3, 160, 4, 70, 1}, // #147
  {DBGFIELD("LD3i32")             4, 0, 0, 189, 2, 113, 3, 70, 1}, // #148
  {DBGFIELD("LD3i32_POST")        5, 0, 0, 191, 3, 160, 4, 70, 1}, // #149
  {DBGFIELD("LD3Rv2s_LD3Rv4h_LD3Rv8b") 4, 0, 0, 189, 2, 113, 3,  0, 0}, // #150
  {DBGFIELD("LD3Rv2s_POST_LD3Rv4h_POST_LD3Rv8b_POST") 5, 0, 0, 191, 3, 160, 4,  0, 0}, // #151
  {DBGFIELD("LD3Rv1d")            5, 0, 0, 169, 2, 105, 3,  0, 0}, // #152
  {DBGFIELD("LD3Rv1d_POST")       0, 0, 0,  0, 0,  0, 0,  0, 0}, // #153
  {DBGFIELD("LD3Rv16b_LD3Rv4s_LD3Rv8h") 4, 0, 0, 189, 2, 113, 3,  0, 0}, // #154
  {DBGFIELD("LD3Rv16b_POST_LD3Rv4s_POST_LD3Rv8h_POST") 5, 0, 0, 191, 3, 160, 4,  0, 0}, // #155
  {DBGFIELD("LD3Threev2s_LD3Threev4h_LD3Threev8b") 5, 0, 0, 169, 2, 105, 3,  0, 0}, // #156
  {DBGFIELD("LD3Threev2s_POST_LD3Threev4h_POST_LD3Threev8b_POST") 6, 0, 0, 173, 3, 108, 4,  0, 0}, // #157
  {DBGFIELD("LD4i16_LD4i8")       5, 0, 0, 194, 2, 164, 4, 70, 1}, // #158
  {DBGFIELD("LD4i16_POST_LD4i8_POST") 6, 0, 0, 196, 3, 168, 5, 70, 1}, // #159
  {DBGFIELD("LD4i32")             5, 0, 0, 194, 2, 164, 4, 70, 1}, // #160
  {DBGFIELD("LD4i32_POST")        6, 0, 0, 196, 3, 168, 5, 70, 1}, // #161
  {DBGFIELD("LD4Rv2s_LD4Rv4h_LD4Rv8b") 5, 0, 0, 194, 2, 164, 4,  0, 0}, // #162
  {DBGFIELD("LD4Rv2s_POST_LD4Rv4h_POST_LD4Rv8b_POST") 6, 0, 0, 196, 3, 168, 5,  0, 0}, // #163
  {DBGFIELD("LD4Rv1d")            6, 0, 0, 179, 2, 112, 4,  0, 0}, // #164
  {DBGFIELD("LD4Rv1d_POST")       7, 0, 0, 183, 3, 120, 5,  0, 0}, // #165
  {DBGFIELD("LD4Rv16b_LD4Rv4s_LD4Rv8h") 5, 0, 0, 194, 2, 164, 4,  0, 0}, // #166
  {DBGFIELD("LD4Rv16b_POST_LD4Rv4s_POST_LD4Rv8h_POST") 6, 0, 0, 196, 3, 168, 5,  0, 0}, // #167
  {DBGFIELD("LD4Fourv2s_LD4Fourv4h_LD4Fourv8b") 6, 0, 0, 179, 2, 112, 4,  0, 0}, // #168
  {DBGFIELD("LD4Fourv2s_POST_LD4Fourv4h_POST_LD4Fourv8b_POST") 7, 0, 0, 183, 3, 120, 5,  0, 0}, // #169
  {DBGFIELD("ST1i16_ST1i32_ST1i8") 2, 0, 0, 129, 2,  1, 1,  0, 0}, // #170
  {DBGFIELD("ST1i16_POST_ST1i32_POST_ST1i8_POST") 3, 0, 0, 128, 3, 48, 2,  0, 0}, // #171
  {DBGFIELD("ST1Onev1d_ST1Onev2s_ST1Onev4h_ST1Onev8b") 1, 0, 0, 129, 1,  7, 1,  0, 0}, // #172
  {DBGFIELD("ST1Onev1d_POST_ST1Onev2s_POST_ST1Onev4h_POST_ST1Onev8b_POST") 2, 0, 0, 128, 2, 76, 2,  0, 0}, // #173
  {DBGFIELD("ST1Twov1d_ST1Twov2s_ST1Twov4h_ST1Twov8b") 2, 0, 0, 129, 2,  1, 1,  0, 0}, // #174
  {DBGFIELD("ST1Twov1d_POST_ST1Twov2s_POST_ST1Twov4h_POST_ST1Twov8b_POST") 3, 0, 0, 128, 3, 48, 2,  0, 0}, // #175
  {DBGFIELD("ST1Threev1d_ST1Threev2s_ST1Threev4h_ST1Threev8b") 3, 0, 0, 199, 2, 173, 2,  0, 0}, // #176
  {DBGFIELD("ST1Threev1d_POST_ST1Threev2s_POST_ST1Threev4h_POST_ST1Threev8b_POST") 4, 0, 0, 201, 3, 175, 3,  0, 0}, // #177
  {DBGFIELD("ST1Fourv1d_ST1Fourv2s_ST1Fourv4h_ST1Fourv8b") 4, 0, 0, 161, 2, 142, 2,  0, 0}, // #178
  {DBGFIELD("ST1Fourv1d_POST_ST1Fourv2s_POST_ST1Fourv4h_POST_ST1Fourv8b_POST") 5, 0, 0, 166, 3, 144, 3,  0, 0}, // #179
  {DBGFIELD("ST2i16_ST2i32_ST2i8") 2, 0, 0, 129, 2,  1, 1,  0, 0}, // #180
  {DBGFIELD("ST2i16_POST_ST2i32_POST_ST2i8_POST") 3, 0, 0, 128, 3, 48, 2,  0, 0}, // #181
  {DBGFIELD("ST2Twov16b_ST2Twov4s_ST2Twov8h") 4, 0, 0, 161, 2, 142, 2,  0, 0}, // #182
  {DBGFIELD("ST2Twov16b_POST_ST2Twov4s_POST_ST2Twov8h_POST") 5, 0, 0, 166, 3, 144, 3,  0, 0}, // #183
  {DBGFIELD("ST3i16_ST3i8")       2, 0, 0, 129, 2,  1, 1,  0, 0}, // #184
  {DBGFIELD("ST3i16_POST_ST3i8_POST") 3, 0, 0, 128, 3, 48, 2,  0, 0}, // #185
  {DBGFIELD("ST3i32")             2, 0, 0, 129, 2,  1, 1,  0, 0}, // #186
  {DBGFIELD("ST3i32_POST")        3, 0, 0, 128, 3, 48, 2,  0, 0}, // #187
  {DBGFIELD("ST3Threev2s_ST3Threev4h_ST3Threev8b") 4, 0, 0, 161, 2, 142, 2,  0, 0}, // #188
  {DBGFIELD("ST3Threev2s_POST_ST3Threev4h_POST_ST3Threev8b_POST") 5, 0, 0, 166, 3, 144, 3,  0, 0}, // #189
  {DBGFIELD("ST4i16_ST4i8")       3, 0, 0, 159, 2, 20, 1,  0, 0}, // #190
  {DBGFIELD("ST4i16_POST_ST4i8_POST") 4, 0, 0, 163, 3, 46, 2,  0, 0}, // #191
  {DBGFIELD("ST4i32")             3, 0, 0, 159, 2, 20, 1,  0, 0}, // #192
  {DBGFIELD("ST4i32_POST")        4, 0, 0, 163, 3, 46, 2,  0, 0}, // #193
  {DBGFIELD("ST4Fourv2s_ST4Fourv4h_ST4Fourv8b") 6, 0, 0, 179, 2, 150, 2,  0, 0}, // #194
  {DBGFIELD("ST4Fourv2s_POST_ST4Fourv4h_POST_ST4Fourv8b_POST") 7, 0, 0, 183, 3, 154, 3,  0, 0}, // #195
  {DBGFIELD("MOVZWi_MOVZXi")      65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #196
  {DBGFIELD("ANDWri_ANDXri")      65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #197
  {DBGFIELD("ORRXrr_ADDXrr")      65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #198
  {DBGFIELD("STPQi")              2, 0, 0, 150, 1,  7, 2,  0, 0}, // #199
  {DBGFIELD("ISB")                1, 0, 0,  1, 1, 65, 1,  0, 0}, // #200
  {DBGFIELD("ORRv16i8")           65534, 0, 0,  0, 0,  0, 0,  0, 0}, // #201
  {DBGFIELD("FMOVSWr_FMOVDXr_FMOVDXHighr") 1, 0, 0, 129, 1,  7, 1,  0, 0}, // #202
  {DBGFIELD("INSvi16gpr_INSvi16lane_INSvi32gpr_INSvi32lane_INSvi64gpr_INSvi64lane_INSvi8gpr_INSvi8lane") 2, 0, 0, 129, 2, 22, 1,  0, 0}, // #203
  {DBGFIELD("SMOVvi16to32_SMOVvi16to64_SMOVvi32to64_SMOVvi8to32_SMOVvi8to64_UMOVvi16_UMOVvi32_UMOVvi64_UMOVvi8") 2, 0, 0, 128, 2, 178, 1,  0, 0}, // #204
  {DBGFIELD("DUPv16i8gpr_DUPv16i8lane_DUPv2i32gpr_DUPv2i32lane_DUPv2i64gpr_DUPv2i64lane_DUPv4i16gpr_DUPv4i16lane_DUPv4i32gpr_DUPv4i32lane_DUPv8i16gpr_DUPv8i16lane_DUPv8i8gpr_DUPv8i8lane") 2, 0, 0, 129, 2, 22, 1,  0, 0}, // #205
  {DBGFIELD("ABSv16i8_ABSv1i64_ABSv2i32_ABSv2i64_ABSv4i16_ABSv4i32_ABSv8i16_ABSv8i8") 1, 0, 0, 119, 1,  5, 1,  0, 0}, // #206
  {DBGFIELD("SQABSv16i8_SQABSv1i16_SQABSv1i32_SQABSv1i64_SQABSv1i8_SQABSv2i32_SQABSv2i64_SQABSv4i16_SQABSv4i32_SQABSv8i16_SQABSv8i8_SQNEGv16i8_SQNEGv1i16_SQNEGv1i32_SQNEGv1i64_SQNEGv1i8_SQNEGv2i32_SQNEGv2i64_SQNEGv4i16_SQNEGv4i32_SQNEGv8i16_SQNEGv8i8") 1, 0, 0, 119, 1,  5, 1,  0, 0}, // #207
  {DBGFIELD("SADDLPv16i8_v8i16_SADDLPv2i32_v1i64_SADDLPv4i16_v2i32_SADDLPv4i32_v2i64_SADDLPv8i16_v4i32_SADDLPv8i8_v4i16_UADDLPv16i8_v8i16_UADDLPv2i32_v1i64_UADDLPv4i16_v2i32_UADDLPv4i32_v2i64_UADDLPv8i16_v4i32_UADDLPv8i8_v4i16") 1, 0, 0, 119, 1, 179, 1,  0, 0}, // #208
  {DBGFIELD("ADDVv16i8v_ADDVv4i16v_ADDVv4i32v_ADDVv8i16v_ADDVv8i8v_SMAXVv16i8v_SMAXVv4i16v_SMAXVv4i32v_SMAXVv8i16v_SMAXVv8i8v_SMINVv16i8v_SMINVv4i16v_SMINVv4i32v_SMINVv8i16v_SMINVv8i8v_UMAXVv16i8v_UMAXVv4i16v_UMAXVv4i32v_UMAXVv8i16v_UMAXVv8i8v_UMINVv16i8v_UMINVv4i16v_UMINVv4i32v_UMINVv8i16v_UMINVv8i8v") 1, 0, 0, 119, 1,  5, 1,  0, 0}, // #209
  {DBGFIELD("SADDLVv16i8v_SADDLVv4i16v_SADDLVv4i32v_SADDLVv8i16v_SADDLVv8i8v_UADDLVv16i8v_UADDLVv4i16v_UADDLVv4i32v_UADDLVv8i16v_UADDLVv8i8v") 1, 0, 0, 119, 1,  5, 1,  0, 0}, // #210
  {DBGFIELD("SADALPv16i8_v8i16_SADALPv2i32_v1i64_SADALPv4i16_v2i32_SADALPv4i32_v2i64_SADALPv8i16_v4i32_SADALPv8i8_v4i16_UADALPv16i8_v8i16_UADALPv2i32_v1i64_UADALPv4i16_v2i32_UADALPv4i32_v2i64_UADALPv8i16_v4i32_UADALPv8i8_v4i16") 1, 0, 0, 136, 2, 180, 1, 72, 3}, // #211
  {DBGFIELD("SABALv16i8_v8i16_SABALv2i32_v2i64_SABALv4i16_v4i32_SABALv4i32_v2i64_SABALv8i16_v4i32_SABALv8i8_v8i16_SABAv16i8_SABAv2i32_SABAv4i16_SABAv4i32_SABAv8i16_SABAv8i8_UABALv16i8_v8i16_UABALv2i32_v2i64_UABALv4i16_v4i32_UABALv4i32_v2i64_UABALv8i16_v4i32_UABALv8i8_v8i16_UABAv16i8_UABAv2i32_UABAv4i16_UABAv4i32_UABAv8i16_UABAv8i8") 1, 0, 0, 136, 2, 180, 1, 72, 3}, // #212
  {DBGFIELD("SQADDv16i8_SQADDv1i16_SQADDv1i32_SQADDv1i64_SQADDv1i8_SQADDv2i32_SQADDv2i64_SQADDv4i16_SQADDv4i32_SQADDv8i16_SQADDv8i8_SQSUBv16i8_SQSUBv1i16_SQSUBv1i32_SQSUBv1i64_SQSUBv1i8_SQSUBv2i32_SQSUBv2i64_SQSUBv4i16_SQSUBv4i32_SQSUBv8i16_SQSUBv8i8_UQADDv16i8_UQADDv1i16_UQADDv1i32_UQADDv1i64_UQADDv1i8_UQADDv2i32_UQADDv2i64_UQADDv4i16_UQADDv4i32_UQADDv8i16_UQADDv8i8_UQSUBv16i8_UQSUBv1i16_UQSUBv1i32_UQSUBv1i64_UQSUBv1i8_UQSUBv2i32_UQSUBv2i64_UQSUBv4i16_UQSUBv4i32_UQSUBv8i16_UQSUBv8i8") 1, 0, 0, 119, 1,  5, 1,  0, 0}, // #213
  {DBGFIELD("SUQADDv16i8_SUQADDv1i16_SUQADDv1i32_SUQADDv1i64_SUQADDv1i8_SUQADDv2i32_SUQADDv2i64_SUQADDv4i16_SUQADDv4i32_SUQADDv8i16_SUQADDv8i8_USQADDv16i8_USQADDv1i16_USQADDv1i32_USQADDv1i64_USQADDv1i8_USQADDv2i32_USQADDv2i64_USQADDv4i16_USQADDv4i32_USQADDv8i16_USQADDv8i8") 1, 0, 0, 119, 1,  5, 1,  0, 0}, // #214
  {DBGFIELD("ADDHNv2i64_v2i32_ADDHNv2i64_v4i32_ADDHNv4i32_v4i16_ADDHNv4i32_v8i16_ADDHNv8i16_v16i8_ADDHNv8i16_v8i8_RADDHNv2i64_v2i32_RADDHNv2i64_v4i32_RADDHNv4i32_v4i16_RADDHNv4i32_v8i16_RADDHNv8i16_v16i8_RADDHNv8i16_v8i8_RSUBHNv2i64_v2i32_RSUBHNv2i64_v4i32_RSUBHNv4i32_v4i16_RSUBHNv4i32_v8i16_RSUBHNv8i16_v16i8_RSUBHNv8i16_v8i8_SUBHNv2i64_v2i32_SUBHNv2i64_v4i32_SUBHNv4i32_v4i16_SUBHNv4i32_v8i16_SUBHNv8i16_v16i8_SUBHNv8i16_v8i8") 1, 0, 0, 119, 1,  7, 1,  0, 0}, // #215
  {DBGFIELD("CMEQv16i8_CMEQv16i8rz_CMEQv1i64_CMEQv1i64rz_CMEQv2i32_CMEQv2i32rz_CMEQv2i64_CMEQv2i64rz_CMEQv4i16_CMEQv4i16rz_CMEQv4i32_CMEQv4i32rz_CMEQv8i16_CMEQv8i16rz_CMEQv8i8_CMEQv8i8rz_CMGEv16i8_CMGEv16i8rz_CMGEv1i64_CMGEv1i64rz_CMGEv2i32_CMGEv2i32rz_CMGEv2i64_CMGEv2i64rz_CMGEv4i16_CMGEv4i16rz_CMGEv4i32_CMGEv4i32rz_CMGEv8i16_CMGEv8i16rz_CMGEv8i8_CMGEv8i8rz_CMGTv16i8_CMGTv16i8rz_CMGTv1i64_CMGTv1i64rz_CMGTv2i32_CMGTv2i32rz_CMGTv2i64_CMGTv2i64rz_CMGTv4i16_CMGTv4i16rz_CMGTv4i32_CMGTv4i32rz_CMGTv8i16_CMGTv8i16rz_CMGTv8i8_CMGTv8i8rz_CMHIv16i8_CMHIv1i64_CMHIv2i32_CMHIv2i64_CMHIv4i16_CMHIv4i32_CMHIv8i16_CMHIv8i8_CMHSv16i8_CMHSv1i64_CMHSv2i32_CMHSv2i64_CMHSv4i16_CMHSv4i32_CMHSv8i16_CMHSv8i8_CMLEv16i8rz_CMLEv1i64rz_CMLEv2i32rz_CMLEv2i64rz_CMLEv4i16rz_CMLEv4i32rz_CMLEv8i16rz_CMLEv8i8rz_CMLTv16i8rz_CMLTv1i64rz_CMLTv2i32rz_CMLTv2i64rz_CMLTv4i16rz_CMLTv4i32rz_CMLTv8i16rz_CMLTv8i8rz") 1, 0, 0, 119, 1,  5, 1,  0, 0}, // #216
  {DBGFIELD("SMAXPv16i8_SMAXPv2i32_SMAXPv4i16_SMAXPv4i32_SMAXPv8i16_SMAXPv8i8_SMAXv16i8_SMAXv2i32_SMAXv4i16_SMAXv4i32_SMAXv8i16_SMAXv8i8_SMINPv16i8_SMINPv2i32_SMINPv4i16_SMINPv4i32_SMINPv8i16_SMINPv8i8_SMINv16i8_SMINv2i32_SMINv4i16_SMINv4i32_SMINv8i16_SMINv8i8_UMAXPv16i8_UMAXPv2i32_UMAXPv4i16_UMAXPv4i32_UMAXPv8i16_UMAXPv8i8_UMAXv16i8_UMAXv2i32_UMAXv4i16_UMAXv4i32_UMAXv8i16_UMAXv8i8_UMINPv16i8_UMINPv2i32_UMINPv4i16_UMINPv4i32_UMINPv8i16_UMINPv8i8_UMINv16i8_UMINv2i32_UMINv4i16_UMINv4i32_UMINv8i16_UMINv8i8") 1, 0, 0, 119, 1,  5, 1,  0, 0}, // #217
  {DBGFIELD("SABDLv16i8_v8i16_SABDLv2i32_v2i64_SABDLv4i16_v4i32_SABDLv4i32_v2i64_SABDLv8i16_v4i32_SABDLv8i8_v8i16_SABDv16i8_SABDv2i32_SABDv4i16_SABDv4i32_SABDv8i16_SABDv8i8_UABDLv16i8_v8i16_UABDLv2i32_v2i64_UABDLv4i16_v4i32_UABDLv4i32_v2i64_UABDLv8i16_v4i32_UABDLv8i8_v8i16_UABDv16i8_UABDv2i32_UABDv4i16_UABDv4i32_UABDv8i16_UABDv8i8") 1, 0, 0, 119, 1, 181, 1,  0, 0}, // #218
  {DBGFIELD("FADDPv2i32p")        1, 0, 0, 119, 1,  7, 1,  0, 0}, // #219
  {DBGFIELD("FADDPv2i64p")        1, 0, 0, 119, 1, 21, 1,  0, 0}, // #220
  {DBGFIELD("FMAXNMPv2i32p_FMAXNMPv2i64p_FMAXPv2i32p_FMAXPv2i64p_FMINNMPv2i32p_FMINNMPv2i64p_FMINPv2i32p_FMINPv2i64p") 1, 0, 0, 119, 1,  5, 1,  0, 0}, // #221
  {DBGFIELD("FMAXNMVv4i32v_FMAXVv4i32v_FMINNMVv4i32v_FMINVv4i32v") 1, 0, 0, 119, 1,  7, 1,  0, 0}, // #222
  {DBGFIELD("FADDSrr_FSUBSrr")    1, 0, 0, 119, 1,  7, 1,  0, 0}, // #223
  {DBGFIELD("FADDv2f32_FADDv4f32_FSUBv2f32_FSUBv4f32_FADDPv2f32_FADDPv4f32_FABD32_FABDv2f32_FABDv4f32") 1, 0, 0, 119, 1,  7, 1,  0, 0}, // #224
  {DBGFIELD("FADDDrr_FSUBDrr")    1, 0, 0, 119, 1, 21, 1,  0, 0}, // #225
  {DBGFIELD("FADDv2f64_FSUBv2f64_FADDPv2f64_FABD64_FABDv2f64") 1, 0, 0, 119, 1, 21, 1,  0, 0}, // #226
  {DBGFIELD("FCMEQ32_FCMEQ64_FCMEQv1i32rz_FCMEQv1i64rz_FCMEQv2f32_FCMEQv2f64_FCMEQv2i32rz_FCMEQv2i64rz_FCMEQv4f32_FCMEQv4i32rz_FCMGT32_FCMGT64_FCMGTv1i32rz_FCMGTv1i64rz_FCMGTv2f32_FCMGTv2f64_FCMGTv2i32rz_FCMGTv2i64rz_FCMGTv4f32_FCMGTv4i32rz_FCMLEv1i32rz_FCMLEv1i64rz_FCMLEv2i32rz_FCMLEv2i64rz_FCMLEv4i32rz_FCMLTv1i32rz_FCMLTv1i64rz_FCMLTv2i32rz_FCMLTv2i64rz_FCMLTv4i32rz") 1, 0, 0, 119, 1,  5, 1,  0, 0}, // #227
  {DBGFIELD("FACGE32_FACGE64_FACGEv2f32_FACGEv2f64_FACGEv4f32_FACGT32_FACGT64_FACGTv2f32_FACGTv2f64_FACGTv4f32_FMAXNMPv2f32_FMAXNMPv2f64_FMAXNMPv4f32_FMAXNMv2f32_FMAXNMv2f64_FMAXNMv4f32_FMAXPv2f32_FMAXPv2f64_FMAXPv4f32_FMAXv2f32_FMAXv2f64_FMAXv4f32_FMINNMPv2f32_FMINNMPv2f64_FMINNMPv4f32_FMINNMv2f32_FMINNMv2f64_FMINNMv4f32_FMINPv2f32_FMINPv2f64_FMINPv4f32_FMINv2f32_FMINv2f64_FMINv4f32") 1, 0, 0, 119, 1,  5, 1,  0, 0}, // #228
  {DBGFIELD("FMAXDrr_FMAXNMDrr_FMAXNMSrr_FMAXSrr_FMINDrr_FMINNMDrr_FMINNMSrr_FMINSrr") 1, 0, 0, 119, 1,  5, 1,  0, 0}, // #229
  {DBGFIELD("SSHRv16i8_shift_SSHRv2i32_shift_SSHRv2i64_shift_SSHRv4i16_shift_SSHRv4i32_shift_SSHRv8i16_shift_SSHRv8i8_shift_USHRv16i8_shift_USHRv2i32_shift_USHRv2i64_shift_USHRv4i16_shift_USHRv4i32_shift_USHRv8i16_shift_USHRv8i8_shift") 1, 0, 0, 119, 1, 182, 1,  0, 0}, // #230
  {DBGFIELD("SRSHRv16i8_shift_SRSHRv2i32_shift_SRSHRv2i64_shift_SRSHRv4i16_shift_SRSHRv4i32_shift_SRSHRv8i16_shift_SRSHRv8i8_shift_URSHRv16i8_shift_URSHRv2i32_shift_URSHRv2i64_shift_URSHRv4i16_shift_URSHRv4i32_shift_URSHRv8i16_shift_URSHRv8i8_shift") 1, 0, 0, 119, 1, 183, 1,  0, 0}, // #231
  {DBGFIELD("SRSRAv16i8_shift_SRSRAv2i32_shift_SRSRAv2i64_shift_SRSRAv4i16_shift_SRSRAv4i32_shift_SRSRAv8i16_shift_SRSRAv8i8_shift_SSRAv16i8_shift_SSRAv2i32_shift_SSRAv2i64_shift_SSRAv4i16_shift_SSRAv4i32_shift_SSRAv8i16_shift_SSRAv8i8_shift_URSRAv16i8_shift_URSRAv2i32_shift_URSRAv2i64_shift_URSRAv4i16_shift_URSRAv4i32_shift_URSRAv8i16_shift_URSRAv8i8_shift_USRAv16i8_shift_USRAv2i32_shift_USRAv2i64_shift_USRAv4i16_shift_USRAv4i32_shift_USRAv8i16_shift_USRAv8i8_shift") 1, 0, 0, 136, 2, 184, 1, 75, 3}, // #232
  {DBGFIELD("SRSHLv16i8_SRSHLv1i64_SRSHLv2i32_SRSHLv2i64_SRSHLv4i16_SRSHLv4i32_SRSHLv8i16_SRSHLv8i8_URSHLv16i8_URSHLv1i64_URSHLv2i32_URSHLv2i64_URSHLv4i16_URSHLv4i32_URSHLv8i16_URSHLv8i8") 1, 0, 0, 119, 1,  5, 1,  0, 0}, // #233
  {DBGFIELD("SQRSHLv16i8_SQRSHLv1i16_SQRSHLv1i32_SQRSHLv1i64_SQRSHLv1i8_SQRSHLv2i32_SQRSHLv2i64_SQRSHLv4i16_SQRSHLv4i32_SQRSHLv8i16_SQRSHLv8i8_UQRSHLv16i8_UQRSHLv1i16_UQRSHLv1i32_UQRSHLv1i64_UQRSHLv1i8_UQRSHLv2i32_UQRSHLv2i64_UQRSHLv4i16_UQRSHLv4i32_UQRSHLv8i16_UQRSHLv8i8") 1, 0, 0, 119, 1,  5, 1,  0, 0}, // #234
  {DBGFIELD("RSHRNv16i8_shift_RSHRNv2i32_shift_RSHRNv4i16_shift_RSHRNv4i32_shift_RSHRNv8i16_shift_RSHRNv8i8_shift_SHRNv16i8_shift_SHRNv2i32_shift_SHRNv4i16_shift_SHRNv4i32_shift_SHRNv8i16_shift_SHRNv8i8_shift_SQRSHRNv16i8_shift_SQRSHRNv2i32_shift_SQRSHRNv4i16_shift_SQRSHRNv4i32_shift_SQRSHRNv8i16_shift_SQRSHRNv8i8_shift_SQRSHRUNv16i8_shift_SQRSHRUNv2i32_shift_SQRSHRUNv4i16_shift_SQRSHRUNv4i32_shift_SQRSHRUNv8i16_shift_SQRSHRUNv8i8_shift_SQSHRNv16i8_shift_SQSHRNv2i32_shift_SQSHRNv4i16_shift_SQSHRNv4i32_shift_SQSHRNv8i16_shift_SQSHRNv8i8_shift_SQSHRUNv16i8_shift_SQSHRUNv2i32_shift_SQSHRUNv4i16_shift_SQSHRUNv4i32_shift_SQSHRUNv8i16_shift_SQSHRUNv8i8_shift_SQXTNv16i8_SQXTNv1i16_SQXTNv1i32_SQXTNv1i8_SQXTNv2i32_SQXTNv4i16_SQXTNv4i32_SQXTNv8i16_SQXTNv8i8_SQXTUNv16i8_SQXTUNv1i16_SQXTUNv1i32_SQXTUNv1i8_SQXTUNv2i32_SQXTUNv4i16_SQXTUNv4i32_SQXTUNv8i16_SQXTUNv8i8_UQRSHRNv16i8_shift_UQRSHRNv2i32_shift_UQRSHRNv4i16_shift_UQRSHRNv4i32_shift_UQRSHRNv8i16_shift_UQRSHRNv8i8_shift_UQSHRNv16i8_shift_UQSHRNv2i32_shift_UQSHRNv4i16_shift_UQSHRNv4i32_shift_UQSHRNv8i16_shift_UQSHRNv8i8_shift_UQXTNv16i8_UQXTNv1i16_UQXTNv1i32_UQXTNv1i8_UQXTNv2i32_UQXTNv4i16_UQXTNv4i32_UQXTNv8i16_UQXTNv8i8") 1, 0, 0, 119, 1,  7, 1,  0, 0}, // #235
  {DBGFIELD("MULv16i8_MULv2i32_MULv2i32_indexed_MULv4i16_MULv4i16_indexed_MULv4i32_MULv4i32_indexed_MULv8i16_MULv8i16_indexed_MULv8i8_SMULLv16i8_v8i16_SMULLv2i32_indexed_SMULLv2i32_v2i64_SMULLv4i16_indexed_SMULLv4i16_v4i32_SMULLv4i32_indexed_SMULLv4i32_v2i64_SMULLv8i16_indexed_SMULLv8i16_v4i32_SMULLv8i8_v8i16_SQDMULHv1i16_SQDMULHv1i16_indexed_SQDMULHv1i32_SQDMULHv1i32_indexed_SQDMULHv2i32_SQDMULHv2i32_indexed_SQDMULHv4i16_SQDMULHv4i16_indexed_SQDMULHv4i32_SQDMULHv4i32_indexed_SQDMULHv8i16_SQDMULHv8i16_indexed_SQDMULLv1i32_indexed_SQDMULLv1i64_indexed_SQDMULLv2i32_indexed_SQDMULLv2i32_v2i64_SQDMULLv4i16_indexed_SQDMULLv4i16_v4i32_SQDMULLv4i32_indexed_SQDMULLv4i32_v2i64_SQDMULLv8i16_indexed_SQDMULLv8i16_v4i32_SQRDMULHv1i16_SQRDMULHv1i16_indexed_SQRDMULHv1i32_SQRDMULHv1i32_indexed_SQRDMULHv2i32_SQRDMULHv2i32_indexed_SQRDMULHv4i16_SQRDMULHv4i16_indexed_SQRDMULHv4i32_SQRDMULHv4i32_indexed_SQRDMULHv8i16_SQRDMULHv8i16_indexed_UMULLv16i8_v8i16_UMULLv2i32_indexed_UMULLv2i32_v2i64_UMULLv4i16_indexed_UMULLv4i16_v4i32_UMULLv4i32_indexed_UMULLv4i32_v2i64_UMULLv8i16_indexed_UMULLv8i16_v4i32_UMULLv8i8_v8i16") 1, 0, 0, 136, 2, 185, 1,  0, 0}, // #236
  {DBGFIELD("FMULDrr_FNMULDrr")   1, 0, 0, 136, 2, 186, 1,  0, 0}, // #237
  {DBGFIELD("FMULv2f64_FMULv2i64_indexed_FMULX64_FMULXv2f64_FMULXv2i64_indexed") 1, 0, 0, 136, 2, 186, 1,  0, 0}, // #238
  {DBGFIELD("MLAv16i8_MLAv2i32_MLAv2i32_indexed_MLAv4i16_MLAv4i16_indexed_MLAv4i32_MLAv4i32_indexed_MLAv8i16_MLAv8i16_indexed_MLAv8i8_MLSv16i8_MLSv2i32_MLSv2i32_indexed_MLSv4i16_MLSv4i16_indexed_MLSv4i32_MLSv4i32_indexed_MLSv8i16_MLSv8i16_indexed_MLSv8i8_SMLALv16i8_v8i16_SMLALv2i32_indexed_SMLALv2i32_v2i64_SMLALv4i16_indexed_SMLALv4i16_v4i32_SMLALv4i32_indexed_SMLALv4i32_v2i64_SMLALv8i16_indexed_SMLALv8i16_v4i32_SMLALv8i8_v8i16_SMLSLv16i8_v8i16_SMLSLv2i32_indexed_SMLSLv2i32_v2i64_SMLSLv4i16_indexed_SMLSLv4i16_v4i32_SMLSLv4i32_indexed_SMLSLv4i32_v2i64_SMLSLv8i16_indexed_SMLSLv8i16_v4i32_SMLSLv8i8_v8i16_SQDMLALi16_SQDMLALi32_SQDMLALv1i32_indexed_SQDMLALv1i64_indexed_SQDMLALv2i32_indexed_SQDMLALv2i32_v2i64_SQDMLALv4i16_indexed_SQDMLALv4i16_v4i32_SQDMLALv4i32_indexed_SQDMLALv4i32_v2i64_SQDMLALv8i16_indexed_SQDMLALv8i16_v4i32_SQDMLSLi16_SQDMLSLi32_SQDMLSLv1i32_indexed_SQDMLSLv1i64_indexed_SQDMLSLv2i32_indexed_SQDMLSLv2i32_v2i64_SQDMLSLv4i16_indexed_SQDMLSLv4i16_v4i32_SQDMLSLv4i32_indexed_SQDMLSLv4i32_v2i64_SQDMLSLv8i16_indexed_SQDMLSLv8i16_v4i32_UMLALv16i8_v8i16_UMLALv2i32_indexed_UMLALv2i32_v2i64_UMLALv4i16_indexed_UMLALv4i16_v4i32_UMLALv4i32_indexed_UMLALv4i32_v2i64_UMLALv8i16_indexed_UMLALv8i16_v4i32_UMLALv8i8_v8i16_UMLSLv16i8_v8i16_UMLSLv2i32_indexed_UMLSLv2i32_v2i64_UMLSLv4i16_indexed_UMLSLv4i16_v4i32_UMLSLv4i32_indexed_UMLSLv4i32_v2i64_UMLSLv8i16_indexed_UMLSLv8i16_v4i32_UMLSLv8i8_v8i16") 1, 0, 0, 136, 2, 185, 1, 78, 2}, // #239
  {DBGFIELD("FMADDSrrr_FMSUBSrrr_FNMADDSrrr_FNMSUBSrrr") 1, 0, 0, 136, 2, 187, 1, 80, 1}, // #240
  {DBGFIELD("FMLAv2f32_FMLAv4f32_FMLAv1i32_indexed_FMLAv1i64_indexed_FMLAv2i32_indexed") 1, 0, 0, 136, 2, 187, 1, 80, 1}, // #241
  {DBGFIELD("FMLAv2f64_FMLAv2i64_indexed_FMLSv2f64_FMLSv2i64_indexed") 1, 0, 0, 136, 2, 159, 1, 71, 1}, // #242
  {DBGFIELD("PMULLv16i8_PMULLv1i64_PMULLv2i64_PMULLv8i8_PMULv16i8_PMULv8i8") 1, 0, 0, 204, 2,  5, 1,  0, 0}, // #243
  {DBGFIELD("FRECPEv1i32_FRECPEv1i64_FRECPEv2f32_FRECPEv2f64_FRECPEv4f32_FRECPXv1i32_FRECPXv1i64_URECPEv2i32_URECPEv4i32") 1, 0, 0, 119, 1,  7, 1,  0, 0}, // #244
  {DBGFIELD("URSQRTEv2i32_URSQRTEv4i32") 1, 0, 0, 119, 1,  7, 1,  0, 0}, // #245
  {DBGFIELD("FRSQRTEv1i32_FRSQRTEv2f32_FRSQRTEv4f32") 1, 0, 0, 136, 2,  7, 1,  0, 0}, // #246
  {DBGFIELD("FRSQRTEv1i64_FRSQRTEv2f64") 1, 0, 0, 136, 2,  7, 1,  0, 0}, // #247
  {DBGFIELD("FRECPSv2f32_FRECPSv2f64_FRECPSv4f32") 1, 0, 0, 136, 2, 20, 1,  0, 0}, // #248
  {DBGFIELD("FRSQRTSv2f32_FRSQRTSv4f32") 1, 0, 0, 136, 2, 31, 1,  0, 0}, // #249
  {DBGFIELD("FRSQRTSv2f64")       1, 0, 0, 136, 2, 31, 1,  0, 0}, // #250
  {DBGFIELD("FCVTSHr_FCVTDHr_FCVTDSr") 1, 0, 0, 119, 1, 37, 1,  0, 0}, // #251
  {DBGFIELD("FCVTASUWDr_FCVTASUWSr_FCVTASUXDr_FCVTASUXSr_FCVTAUUWDr_FCVTAUUWSr_FCVTAUUXDr_FCVTAUUXSr_FCVTMSUWDr_FCVTMSUWSr_FCVTMSUXDr_FCVTMSUXSr_FCVTMUUWDr_FCVTMUUWSr_FCVTMUUXDr_FCVTMUUXSr_FCVTNSUWDr_FCVTNSUWSr_FCVTNSUXDr_FCVTNSUXSr_FCVTNUUWDr_FCVTNUUWSr_FCVTNUUXDr_FCVTNUUXSr_FCVTPSUWDr_FCVTPSUWSr_FCVTPSUXDr_FCVTPSUXSr_FCVTPUUWDr_FCVTPUUWSr_FCVTPUUXDr_FCVTPUUXSr_FCVTZSSWDri_FCVTZSSWSri_FCVTZSSXDri_FCVTZSSXSri_FCVTZSUWDr_FCVTZSUWSr_FCVTZSUXDr_FCVTZSUXSr_FCVTZUSWDri_FCVTZUSWSri_FCVTZUSXDri_FCVTZUSXSri_FCVTZUUWDr_FCVTZUUWSr_FCVTZUUXDr_FCVTZUUXSr") 2, 0, 0, 129, 2, 22, 1,  0, 0}, // #252
  {DBGFIELD("SCVTFSWDri_SCVTFSWSri_SCVTFSXDri_SCVTFSXSri_SCVTFUWDri_SCVTFUWSri_SCVTFUXDri_SCVTFUXSri_UCVTFSWDri_UCVTFSWSri_UCVTFSXDri_UCVTFSXSri_UCVTFUWDri_UCVTFUWSri_UCVTFUXDri_UCVTFUXSri") 2, 0, 0, 129, 2, 31, 1,  0, 0}, // #253
  {DBGFIELD("AESIMCrr_AESMCrr_SHA1Hrr_AESDrr_AESErr_SHA1SU1rr_SHA256SU0rr_SHA1SU0rrr") 1, 0, 0, 204, 2, 37, 1,  0, 0}, // #254
  {DBGFIELD("SHA256SU1rrr")       1, 0, 0, 204, 2,  5, 1,  0, 0}, // #255
  {DBGFIELD("SHA1Crrr_SHA1Mrrr_SHA1Prrr_SHA256Hrrr_SHA256H2rrr") 1, 0, 0, 204, 2,  1, 1,  0, 0}, // #256
  {DBGFIELD("WriteISReg_ReadI_A53ReadShifted") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #257
  {DBGFIELD("WriteISReg_ReadI_A53ReadNotShifted") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #258
  {DBGFIELD("WriteIEReg_ReadI_A53ReadShifted") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #259
  {DBGFIELD("WriteIEReg_ReadI_A53ReadNotShifted") 0, 0, 0,  0, 0,  0, 0,  0, 0}, // #260
  {DBGFIELD("(WriteIS_WriteLD)_ReadBaseRS") 2, 0, 0, 206, 3, 21, 1, 69, 1}, // #261
  {DBGFIELD("WriteLD_ReadDefault") 1, 0, 0, 129, 1,  7, 1,  0, 0}, // #262
  {DBGFIELD("WriteAdr_WriteST_ReadBaseRS") 2, 0, 0, 128, 2, 76, 2, 69, 1}, // #263
  {DBGFIELD("WriteAdr_WriteST_ReadDefault") 2, 0, 0, 128, 2, 76, 2,  0, 0}, // #264
  {DBGFIELD("(WriteIS_WriteST)_ReadBaseRS") 2, 0, 0, 206, 3, 21, 1, 69, 1}, // #265
  {DBGFIELD("WriteST_ReadDefault") 1, 0, 0, 129, 1,  7, 1,  0, 0}, // #266
  {DBGFIELD("WriteX")             1, 0, 0,  0, 0,  0, 1,  0, 0}, // #267
  {DBGFIELD("WriteI")             1, 0, 0,  1, 1, 65, 1,  0, 0}, // #268
  {DBGFIELD("WriteImm")           1, 0, 0,  1, 1, 73, 1,  0, 0}, // #269
  {DBGFIELD("WriteV")             1, 0, 0, 119, 1, 37, 1,  0, 0} // #270
}; // CycloneModelSchedClasses

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
  0); // No Itinerary

// {Name, NumUnits, SuperIdx, IsBuffered}
static const llvm::MCProcResourceDesc CortexA53ModelProcResources[] = {
  {DBGFIELD("InvalidUnit")     0, 0, 0},
  {DBGFIELD("A53UnitALU")      2, 0, 0}, // #1
  {DBGFIELD("A53UnitB")        1, 0, 0}, // #2
  {DBGFIELD("A53UnitDiv")      1, 0, 0}, // #3
  {DBGFIELD("A53UnitFPALU")    1, 0, 0}, // #4
  {DBGFIELD("A53UnitFPMDS")    1, 0, 0}, // #5
  {DBGFIELD("A53UnitLdSt")     1, 0, 0}, // #6
  {DBGFIELD("A53UnitMAC")      1, 0, 0}  // #7
};

static const llvm::MCSchedModel CortexA53Model(
  2, // IssueWidth
  0, // MicroOpBufferSize
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  3, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  9, // MispredictPenalty
  0, // PostRAScheduler
  1, // CompleteModel
  1, // Processor ID
  CortexA53ModelProcResources,
  CortexA53ModelSchedClasses,
  8,
  271,
  0); // No Itinerary

// {Name, NumUnits, SuperIdx, IsBuffered}
static const llvm::MCProcResourceDesc CortexA57ModelProcResources[] = {
  {DBGFIELD("InvalidUnit")     0, 0, 0},
  {DBGFIELD("A57UnitB")        1, 0, 8}, // #1
  {DBGFIELD("A57UnitI")        2, 0, 8}, // #2
  {DBGFIELD("A57UnitL")        1, 0, 8}, // #3
  {DBGFIELD("A57UnitM")        1, 0, 8}, // #4
  {DBGFIELD("A57UnitS")        1, 0, 8}, // #5
  {DBGFIELD("A57UnitV")        2, 0, -1}, // #6
  {DBGFIELD("A57UnitW")        1, 0, 8}, // #7
  {DBGFIELD("A57UnitX")        1, 0, 8}  // #8
};

static const llvm::MCSchedModel CortexA57Model(
  8, // IssueWidth
  128, // MicroOpBufferSize
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  4, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  14, // MispredictPenalty
  0, // PostRAScheduler
  1, // CompleteModel
  2, // Processor ID
  CortexA57ModelProcResources,
  CortexA57ModelSchedClasses,
  9,
  271,
  0); // No Itinerary

// {Name, NumUnits, SuperIdx, IsBuffered}
static const llvm::MCProcResourceDesc CycloneModelProcResources[] = {
  {DBGFIELD("InvalidUnit")     0, 0, 0},
  {DBGFIELD("CyUnitB")         2, 4, 24}, // #1, Super=CyUnitI
  {DBGFIELD("CyUnitBR")        1, 1, -1}, // #2, Super=CyUnitB
  {DBGFIELD("CyUnitFloatDiv")  2, 0, -1}, // #3
  {DBGFIELD("CyUnitI")         4, 0, 48}, // #4
  {DBGFIELD("CyUnitID")        1, 1, 16}, // #5, Super=CyUnitB
  {DBGFIELD("CyUnitIM")        1, 2, 32}, // #6, Super=CyUnitBR
  {DBGFIELD("CyUnitIS")        2, 4, 24}, // #7, Super=CyUnitI
  {DBGFIELD("CyUnitIntDiv")    1, 0, -1}, // #8
  {DBGFIELD("CyUnitLS")        2, 0, 28}, // #9
  {DBGFIELD("CyUnitV")         3, 0, 48}, // #10
  {DBGFIELD("CyUnitVC")        1, 13, 16}, // #11, Super=CyUnitVM
  {DBGFIELD("CyUnitVD")        1, 10, 16}, // #12, Super=CyUnitV
  {DBGFIELD("CyUnitVM")        2, 10, 32}  // #13, Super=CyUnitV
};

static const llvm::MCSchedModel CycloneModel(
  6, // IssueWidth
  192, // MicroOpBufferSize
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  4, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  16, // MispredictPenalty
  0, // PostRAScheduler
  1, // CompleteModel
  3, // Processor ID
  CycloneModelProcResources,
  CycloneModelSchedClasses,
  14,
  271,
  0); // No Itinerary

// Sorted (by key) array of itineraries for CPU subtype.
extern const llvm::SubtargetInfoKV AArch64ProcSchedKV[] = {
  { "cortex-a53", (const void *)&CortexA53Model },
  { "cortex-a57", (const void *)&CortexA57Model },
  { "cyclone", (const void *)&CycloneModel },
  { "generic", (const void *)&NoSchedModel }
};
#undef DBGFIELD
static inline void InitAArch64MCSubtargetInfo(MCSubtargetInfo *II, StringRef TT, StringRef CPU, StringRef FS) {
  II->InitMCSubtargetInfo(TT, CPU, FS, AArch64FeatureKV, AArch64SubTypeKV, 
                      AArch64ProcSchedKV, AArch64WriteProcResTable, AArch64WriteLatencyTable, AArch64ReadAdvanceTable, 0, 0, 0);
}

} // End llvm namespace 
#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC
#include "llvm/Support/Debug.h"
// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::AArch64Subtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  uint64_t Bits = getFeatureBits();
  if ((Bits & AArch64::FeatureCRC) != 0) HasCRC = true;
  if ((Bits & AArch64::FeatureCrypto) != 0) HasCrypto = true;
  if ((Bits & AArch64::FeatureFPARMv8) != 0) HasFPARMv8 = true;
  if ((Bits & AArch64::FeatureNEON) != 0) HasNEON = true;
  if ((Bits & AArch64::FeatureZCRegMove) != 0) HasZeroCycleRegMove = true;
  if ((Bits & AArch64::FeatureZCZeroing) != 0) HasZeroCycleZeroing = true;
  if ((Bits & AArch64::ProcA53) != 0 && ARMProcFamily < CortexA53) ARMProcFamily = CortexA53;
  if ((Bits & AArch64::ProcA57) != 0 && ARMProcFamily < CortexA57) ARMProcFamily = CortexA57;
  if ((Bits & AArch64::ProcCyclone) != 0 && ARMProcFamily < Cyclone) ARMProcFamily = Cyclone;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER
namespace llvm {
class DFAPacketizer;
struct AArch64GenSubtargetInfo : public TargetSubtargetInfo {
  explicit AArch64GenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS);
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
extern const llvm::SubtargetFeatureKV AArch64FeatureKV[];
extern const llvm::SubtargetFeatureKV AArch64SubTypeKV[];
extern const llvm::SubtargetInfoKV AArch64ProcSchedKV[];
extern const llvm::MCWriteProcResEntry AArch64WriteProcResTable[];
extern const llvm::MCWriteLatencyEntry AArch64WriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry AArch64ReadAdvanceTable[];
AArch64GenSubtargetInfo::AArch64GenSubtargetInfo(StringRef TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo() {
  InitMCSubtargetInfo(TT, CPU, FS, makeArrayRef(AArch64FeatureKV, 9), makeArrayRef(AArch64SubTypeKV, 4), 
                      AArch64ProcSchedKV, AArch64WriteProcResTable, AArch64WriteLatencyTable, AArch64ReadAdvanceTable, 
                      0, 0, 0);
}

unsigned AArch64GenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {

  const AArch64InstrInfo *TII =
    static_cast<const AArch64InstrInfo*>(SchedModel->getInstrInfo());
  (void)TII;

  switch (SchedClass) {
  case 4: // WriteISReg_ReadI_ReadISReg
    if (SchedModel->getProcessorID() == 1) { // CortexA53Model
      if ((TII->hasShiftedReg(MI)))
        return 257; // WriteISReg_ReadI_A53ReadShifted
      if ((true))
        return 258; // WriteISReg_ReadI_A53ReadNotShifted
    }
    break;
  case 5: // WriteIEReg_ReadI_ReadIEReg
    if (SchedModel->getProcessorID() == 1) { // CortexA53Model
      if ((TII->hasExtendedReg(MI)))
        return 259; // WriteIEReg_ReadI_A53ReadShifted
      if ((true))
        return 260; // WriteIEReg_ReadI_A53ReadNotShifted
    }
    break;
  case 26: // WriteLDIdx_ReadAdrBase
    if (SchedModel->getProcessorID() == 3) { // CycloneModel
      if ((TII->isScaledAddr(MI)))
        return 261; // (WriteIS_WriteLD)_ReadBaseRS
      if ((true))
        return 262; // WriteLD_ReadDefault
    }
    break;
  case 39: // WriteAdr_WriteST_ReadAdrBase
    if (SchedModel->getProcessorID() == 3) { // CycloneModel
      if ((TII->isScaledAddr(MI)))
        return 263; // WriteAdr_WriteST_ReadBaseRS
      if ((true))
        return 264; // WriteAdr_WriteST_ReadDefault
    }
    break;
  case 41: // WriteSTIdx_ReadAdrBase
    if (SchedModel->getProcessorID() == 3) { // CycloneModel
      if ((TII->isScaledAddr(MI)))
        return 265; // (WriteIS_WriteST)_ReadBaseRS
      if ((true))
        return 266; // WriteST_ReadDefault
    }
    break;
  case 42: // COPY
    if (SchedModel->getProcessorID() == 3) { // CycloneModel
      if ((TII->isGPRCopy(MI)))
        return 267; // WriteX
      if ((TII->isFPRCopy(MI)))
        return 267; // WriteX
      if ((true))
        return 268; // WriteI
    }
    break;
  case 121: // CRC32Brr_CRC32CBrr_CRC32CHrr_CRC32CWrr_CRC32CXrr_CRC32Hrr_CRC32Wrr_CRC32Xrr
    if (SchedModel->getProcessorID() == 1) { // CortexA53Model
      if ((TII->hasShiftedReg(MI)))
        return 257; // WriteISReg_ReadI_A53ReadShifted
      if ((true))
        return 258; // WriteISReg_ReadI_A53ReadNotShifted
    }
    break;
  case 196: // MOVZWi_MOVZXi
    if (SchedModel->getProcessorID() == 3) { // CycloneModel
      if ((TII->isGPRZero(MI)))
        return 267; // WriteX
      if ((true))
        return 269; // WriteImm
    }
    break;
  case 197: // ANDWri_ANDXri
    if (SchedModel->getProcessorID() == 3) { // CycloneModel
      if ((TII->isGPRZero(MI)))
        return 267; // WriteX
      if ((true))
        return 269; // WriteImm
    }
    break;
  case 198: // ORRXrr_ADDXrr
    if (SchedModel->getProcessorID() == 3) { // CycloneModel
      if ((TII->isGPRCopy(MI)))
        return 267; // WriteX
      if ((TII->isFPRCopy(MI)))
        return 267; // WriteX
      if ((true))
        return 268; // WriteI
    }
    break;
  case 201: // ORRv16i8
    if (SchedModel->getProcessorID() == 3) { // CycloneModel
      if ((TII->isFPRCopy(MI)))
        return 267; // WriteX
      if ((true))
        return 270; // WriteV
    }
    break;
  };
  report_fatal_error("Expected a variant SchedClass");
} // AArch64GenSubtargetInfo::resolveSchedClass
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_CTOR

