/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Target Instruction Enum Values                                              *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_INSTRINFO_ENUM
#undef GET_INSTRINFO_ENUM
namespace llvm {

namespace Mips {
  enum {
    PHI	= 0,
    INLINEASM	= 1,
    CFI_INSTRUCTION	= 2,
    EH_LABEL	= 3,
    GC_LABEL	= 4,
    KILL	= 5,
    EXTRACT_SUBREG	= 6,
    INSERT_SUBREG	= 7,
    IMPLICIT_DEF	= 8,
    SUBREG_TO_REG	= 9,
    COPY_TO_REGCLASS	= 10,
    DBG_VALUE	= 11,
    REG_SEQUENCE	= 12,
    COPY	= 13,
    BUNDLE	= 14,
    LIFETIME_START	= 15,
    LIFETIME_END	= 16,
    STACKMAP	= 17,
    PATCHPOINT	= 18,
    LOAD_STACK_GUARD	= 19,
    ABSQ_S_PH	= 20,
    ABSQ_S_QB	= 21,
    ABSQ_S_W	= 22,
    ADD	= 23,
    ADDIUPC	= 24,
    ADDQH_PH	= 25,
    ADDQH_R_PH	= 26,
    ADDQH_R_W	= 27,
    ADDQH_W	= 28,
    ADDQ_PH	= 29,
    ADDQ_S_PH	= 30,
    ADDQ_S_W	= 31,
    ADDSC	= 32,
    ADDS_A_B	= 33,
    ADDS_A_D	= 34,
    ADDS_A_H	= 35,
    ADDS_A_W	= 36,
    ADDS_S_B	= 37,
    ADDS_S_D	= 38,
    ADDS_S_H	= 39,
    ADDS_S_W	= 40,
    ADDS_U_B	= 41,
    ADDS_U_D	= 42,
    ADDS_U_H	= 43,
    ADDS_U_W	= 44,
    ADDUH_QB	= 45,
    ADDUH_R_QB	= 46,
    ADDU_PH	= 47,
    ADDU_QB	= 48,
    ADDU_S_PH	= 49,
    ADDU_S_QB	= 50,
    ADDVI_B	= 51,
    ADDVI_D	= 52,
    ADDVI_H	= 53,
    ADDVI_W	= 54,
    ADDV_B	= 55,
    ADDV_D	= 56,
    ADDV_H	= 57,
    ADDV_W	= 58,
    ADDWC	= 59,
    ADD_A_B	= 60,
    ADD_A_D	= 61,
    ADD_A_H	= 62,
    ADD_A_W	= 63,
    ADD_MM	= 64,
    ADDi	= 65,
    ADDi_MM	= 66,
    ADDiu	= 67,
    ADDiu_MM	= 68,
    ADDu	= 69,
    ADDu_MM	= 70,
    ADJCALLSTACKDOWN	= 71,
    ADJCALLSTACKUP	= 72,
    ALIGN	= 73,
    ALUIPC	= 74,
    AND	= 75,
    AND64	= 76,
    ANDI_B	= 77,
    AND_MM	= 78,
    AND_V	= 79,
    AND_V_D_PSEUDO	= 80,
    AND_V_H_PSEUDO	= 81,
    AND_V_W_PSEUDO	= 82,
    ANDi	= 83,
    ANDi64	= 84,
    ANDi_MM	= 85,
    APPEND	= 86,
    ASUB_S_B	= 87,
    ASUB_S_D	= 88,
    ASUB_S_H	= 89,
    ASUB_S_W	= 90,
    ASUB_U_B	= 91,
    ASUB_U_D	= 92,
    ASUB_U_H	= 93,
    ASUB_U_W	= 94,
    ATOMIC_CMP_SWAP_I16	= 95,
    ATOMIC_CMP_SWAP_I32	= 96,
    ATOMIC_CMP_SWAP_I64	= 97,
    ATOMIC_CMP_SWAP_I8	= 98,
    ATOMIC_LOAD_ADD_I16	= 99,
    ATOMIC_LOAD_ADD_I32	= 100,
    ATOMIC_LOAD_ADD_I64	= 101,
    ATOMIC_LOAD_ADD_I8	= 102,
    ATOMIC_LOAD_AND_I16	= 103,
    ATOMIC_LOAD_AND_I32	= 104,
    ATOMIC_LOAD_AND_I64	= 105,
    ATOMIC_LOAD_AND_I8	= 106,
    ATOMIC_LOAD_NAND_I16	= 107,
    ATOMIC_LOAD_NAND_I32	= 108,
    ATOMIC_LOAD_NAND_I64	= 109,
    ATOMIC_LOAD_NAND_I8	= 110,
    ATOMIC_LOAD_OR_I16	= 111,
    ATOMIC_LOAD_OR_I32	= 112,
    ATOMIC_LOAD_OR_I64	= 113,
    ATOMIC_LOAD_OR_I8	= 114,
    ATOMIC_LOAD_SUB_I16	= 115,
    ATOMIC_LOAD_SUB_I32	= 116,
    ATOMIC_LOAD_SUB_I64	= 117,
    ATOMIC_LOAD_SUB_I8	= 118,
    ATOMIC_LOAD_XOR_I16	= 119,
    ATOMIC_LOAD_XOR_I32	= 120,
    ATOMIC_LOAD_XOR_I64	= 121,
    ATOMIC_LOAD_XOR_I8	= 122,
    ATOMIC_SWAP_I16	= 123,
    ATOMIC_SWAP_I32	= 124,
    ATOMIC_SWAP_I64	= 125,
    ATOMIC_SWAP_I8	= 126,
    AUI	= 127,
    AUIPC	= 128,
    AVER_S_B	= 129,
    AVER_S_D	= 130,
    AVER_S_H	= 131,
    AVER_S_W	= 132,
    AVER_U_B	= 133,
    AVER_U_D	= 134,
    AVER_U_H	= 135,
    AVER_U_W	= 136,
    AVE_S_B	= 137,
    AVE_S_D	= 138,
    AVE_S_H	= 139,
    AVE_S_W	= 140,
    AVE_U_B	= 141,
    AVE_U_D	= 142,
    AVE_U_H	= 143,
    AVE_U_W	= 144,
    AddiuRxImmX16	= 145,
    AddiuRxPcImmX16	= 146,
    AddiuRxRxImm16	= 147,
    AddiuRxRxImmX16	= 148,
    AddiuRxRyOffMemX16	= 149,
    AddiuSpImm16	= 150,
    AddiuSpImmX16	= 151,
    AdduRxRyRz16	= 152,
    AndRxRxRy16	= 153,
    B	= 154,
    BADDu	= 155,
    BAL	= 156,
    BALC	= 157,
    BALIGN	= 158,
    BAL_BR	= 159,
    BC	= 160,
    BC1EQZ	= 161,
    BC1F	= 162,
    BC1F_MM	= 163,
    BC1NEZ	= 164,
    BC1T	= 165,
    BC1T_MM	= 166,
    BC2EQZ	= 167,
    BC2NEZ	= 168,
    BCLRI_B	= 169,
    BCLRI_D	= 170,
    BCLRI_H	= 171,
    BCLRI_W	= 172,
    BCLR_B	= 173,
    BCLR_D	= 174,
    BCLR_H	= 175,
    BCLR_W	= 176,
    BEQ	= 177,
    BEQ64	= 178,
    BEQC	= 179,
    BEQZALC	= 180,
    BEQZC	= 181,
    BEQ_MM	= 182,
    BGEC	= 183,
    BGEUC	= 184,
    BGEZ	= 185,
    BGEZ64	= 186,
    BGEZAL	= 187,
    BGEZALC	= 188,
    BGEZAL_MM	= 189,
    BGEZC	= 190,
    BGEZ_MM	= 191,
    BGTZ	= 192,
    BGTZ64	= 193,
    BGTZALC	= 194,
    BGTZC	= 195,
    BGTZ_MM	= 196,
    BINSLI_B	= 197,
    BINSLI_D	= 198,
    BINSLI_H	= 199,
    BINSLI_W	= 200,
    BINSL_B	= 201,
    BINSL_D	= 202,
    BINSL_H	= 203,
    BINSL_W	= 204,
    BINSRI_B	= 205,
    BINSRI_D	= 206,
    BINSRI_H	= 207,
    BINSRI_W	= 208,
    BINSR_B	= 209,
    BINSR_D	= 210,
    BINSR_H	= 211,
    BINSR_W	= 212,
    BITREV	= 213,
    BITSWAP	= 214,
    BLEZ	= 215,
    BLEZ64	= 216,
    BLEZALC	= 217,
    BLEZC	= 218,
    BLEZ_MM	= 219,
    BLTC	= 220,
    BLTUC	= 221,
    BLTZ	= 222,
    BLTZ64	= 223,
    BLTZAL	= 224,
    BLTZALC	= 225,
    BLTZAL_MM	= 226,
    BLTZC	= 227,
    BLTZ_MM	= 228,
    BMNZI_B	= 229,
    BMNZ_V	= 230,
    BMZI_B	= 231,
    BMZ_V	= 232,
    BNE	= 233,
    BNE64	= 234,
    BNEC	= 235,
    BNEGI_B	= 236,
    BNEGI_D	= 237,
    BNEGI_H	= 238,
    BNEGI_W	= 239,
    BNEG_B	= 240,
    BNEG_D	= 241,
    BNEG_H	= 242,
    BNEG_W	= 243,
    BNEZALC	= 244,
    BNEZC	= 245,
    BNE_MM	= 246,
    BNVC	= 247,
    BNZ_B	= 248,
    BNZ_D	= 249,
    BNZ_H	= 250,
    BNZ_V	= 251,
    BNZ_W	= 252,
    BOVC	= 253,
    BPOSGE32	= 254,
    BPOSGE32_PSEUDO	= 255,
    BREAK	= 256,
    BREAK_MM	= 257,
    BSELI_B	= 258,
    BSEL_D_PSEUDO	= 259,
    BSEL_FD_PSEUDO	= 260,
    BSEL_FW_PSEUDO	= 261,
    BSEL_H_PSEUDO	= 262,
    BSEL_V	= 263,
    BSEL_W_PSEUDO	= 264,
    BSETI_B	= 265,
    BSETI_D	= 266,
    BSETI_H	= 267,
    BSETI_W	= 268,
    BSET_B	= 269,
    BSET_D	= 270,
    BSET_H	= 271,
    BSET_W	= 272,
    BZ_B	= 273,
    BZ_D	= 274,
    BZ_H	= 275,
    BZ_V	= 276,
    BZ_W	= 277,
    BeqzRxImm16	= 278,
    BeqzRxImmX16	= 279,
    Bimm16	= 280,
    BimmX16	= 281,
    BnezRxImm16	= 282,
    BnezRxImmX16	= 283,
    Break16	= 284,
    Bteqz16	= 285,
    BteqzT8CmpX16	= 286,
    BteqzT8CmpiX16	= 287,
    BteqzT8SltX16	= 288,
    BteqzT8SltiX16	= 289,
    BteqzT8SltiuX16	= 290,
    BteqzT8SltuX16	= 291,
    BteqzX16	= 292,
    Btnez16	= 293,
    BtnezT8CmpX16	= 294,
    BtnezT8CmpiX16	= 295,
    BtnezT8SltX16	= 296,
    BtnezT8SltiX16	= 297,
    BtnezT8SltiuX16	= 298,
    BtnezT8SltuX16	= 299,
    BtnezX16	= 300,
    BuildPairF64	= 301,
    BuildPairF64_64	= 302,
    CACHE	= 303,
    CACHE_R6	= 304,
    CEIL_L_D64	= 305,
    CEIL_L_S	= 306,
    CEIL_W_D32	= 307,
    CEIL_W_D64	= 308,
    CEIL_W_MM	= 309,
    CEIL_W_S	= 310,
    CEIL_W_S_MM	= 311,
    CEQI_B	= 312,
    CEQI_D	= 313,
    CEQI_H	= 314,
    CEQI_W	= 315,
    CEQ_B	= 316,
    CEQ_D	= 317,
    CEQ_H	= 318,
    CEQ_W	= 319,
    CFC1	= 320,
    CFC1_MM	= 321,
    CFCMSA	= 322,
    CINS	= 323,
    CINS32	= 324,
    CLASS_D	= 325,
    CLASS_S	= 326,
    CLEI_S_B	= 327,
    CLEI_S_D	= 328,
    CLEI_S_H	= 329,
    CLEI_S_W	= 330,
    CLEI_U_B	= 331,
    CLEI_U_D	= 332,
    CLEI_U_H	= 333,
    CLEI_U_W	= 334,
    CLE_S_B	= 335,
    CLE_S_D	= 336,
    CLE_S_H	= 337,
    CLE_S_W	= 338,
    CLE_U_B	= 339,
    CLE_U_D	= 340,
    CLE_U_H	= 341,
    CLE_U_W	= 342,
    CLO	= 343,
    CLO_MM	= 344,
    CLO_R6	= 345,
    CLTI_S_B	= 346,
    CLTI_S_D	= 347,
    CLTI_S_H	= 348,
    CLTI_S_W	= 349,
    CLTI_U_B	= 350,
    CLTI_U_D	= 351,
    CLTI_U_H	= 352,
    CLTI_U_W	= 353,
    CLT_S_B	= 354,
    CLT_S_D	= 355,
    CLT_S_H	= 356,
    CLT_S_W	= 357,
    CLT_U_B	= 358,
    CLT_U_D	= 359,
    CLT_U_H	= 360,
    CLT_U_W	= 361,
    CLZ	= 362,
    CLZ_MM	= 363,
    CLZ_R6	= 364,
    CMPGDU_EQ_QB	= 365,
    CMPGDU_LE_QB	= 366,
    CMPGDU_LT_QB	= 367,
    CMPGU_EQ_QB	= 368,
    CMPGU_LE_QB	= 369,
    CMPGU_LT_QB	= 370,
    CMPU_EQ_QB	= 371,
    CMPU_LE_QB	= 372,
    CMPU_LT_QB	= 373,
    CMP_EQ_D	= 374,
    CMP_EQ_PH	= 375,
    CMP_EQ_S	= 376,
    CMP_F_D	= 377,
    CMP_F_S	= 378,
    CMP_LE_D	= 379,
    CMP_LE_PH	= 380,
    CMP_LE_S	= 381,
    CMP_LT_D	= 382,
    CMP_LT_PH	= 383,
    CMP_LT_S	= 384,
    CMP_SAF_D	= 385,
    CMP_SAF_S	= 386,
    CMP_SEQ_D	= 387,
    CMP_SEQ_S	= 388,
    CMP_SLE_D	= 389,
    CMP_SLE_S	= 390,
    CMP_SLT_D	= 391,
    CMP_SLT_S	= 392,
    CMP_SUEQ_D	= 393,
    CMP_SUEQ_S	= 394,
    CMP_SULE_D	= 395,
    CMP_SULE_S	= 396,
    CMP_SULT_D	= 397,
    CMP_SULT_S	= 398,
    CMP_SUN_D	= 399,
    CMP_SUN_S	= 400,
    CMP_UEQ_D	= 401,
    CMP_UEQ_S	= 402,
    CMP_ULE_D	= 403,
    CMP_ULE_S	= 404,
    CMP_ULT_D	= 405,
    CMP_ULT_S	= 406,
    CMP_UN_D	= 407,
    CMP_UN_S	= 408,
    CONSTPOOL_ENTRY	= 409,
    COPY_FD_PSEUDO	= 410,
    COPY_FW_PSEUDO	= 411,
    COPY_S_B	= 412,
    COPY_S_D	= 413,
    COPY_S_H	= 414,
    COPY_S_W	= 415,
    COPY_U_B	= 416,
    COPY_U_D	= 417,
    COPY_U_H	= 418,
    COPY_U_W	= 419,
    CTC1	= 420,
    CTC1_MM	= 421,
    CTCMSA	= 422,
    CVT_D32_S	= 423,
    CVT_D32_W	= 424,
    CVT_D32_W_MM	= 425,
    CVT_D64_L	= 426,
    CVT_D64_S	= 427,
    CVT_D64_W	= 428,
    CVT_D_S_MM	= 429,
    CVT_L_D64	= 430,
    CVT_L_D64_MM	= 431,
    CVT_L_S	= 432,
    CVT_L_S_MM	= 433,
    CVT_S_D32	= 434,
    CVT_S_D32_MM	= 435,
    CVT_S_D64	= 436,
    CVT_S_L	= 437,
    CVT_S_W	= 438,
    CVT_S_W_MM	= 439,
    CVT_W_D32	= 440,
    CVT_W_D64	= 441,
    CVT_W_MM	= 442,
    CVT_W_S	= 443,
    CVT_W_S_MM	= 444,
    C_EQ_D32	= 445,
    C_EQ_D64	= 446,
    C_EQ_S	= 447,
    C_F_D32	= 448,
    C_F_D64	= 449,
    C_F_S	= 450,
    C_LE_D32	= 451,
    C_LE_D64	= 452,
    C_LE_S	= 453,
    C_LT_D32	= 454,
    C_LT_D64	= 455,
    C_LT_S	= 456,
    C_NGE_D32	= 457,
    C_NGE_D64	= 458,
    C_NGE_S	= 459,
    C_NGLE_D32	= 460,
    C_NGLE_D64	= 461,
    C_NGLE_S	= 462,
    C_NGL_D32	= 463,
    C_NGL_D64	= 464,
    C_NGL_S	= 465,
    C_NGT_D32	= 466,
    C_NGT_D64	= 467,
    C_NGT_S	= 468,
    C_OLE_D32	= 469,
    C_OLE_D64	= 470,
    C_OLE_S	= 471,
    C_OLT_D32	= 472,
    C_OLT_D64	= 473,
    C_OLT_S	= 474,
    C_SEQ_D32	= 475,
    C_SEQ_D64	= 476,
    C_SEQ_S	= 477,
    C_SF_D32	= 478,
    C_SF_D64	= 479,
    C_SF_S	= 480,
    C_UEQ_D32	= 481,
    C_UEQ_D64	= 482,
    C_UEQ_S	= 483,
    C_ULE_D32	= 484,
    C_ULE_D64	= 485,
    C_ULE_S	= 486,
    C_ULT_D32	= 487,
    C_ULT_D64	= 488,
    C_ULT_S	= 489,
    C_UN_D32	= 490,
    C_UN_D64	= 491,
    C_UN_S	= 492,
    CmpRxRy16	= 493,
    CmpiRxImm16	= 494,
    CmpiRxImmX16	= 495,
    Constant32	= 496,
    DADD	= 497,
    DADDi	= 498,
    DADDiu	= 499,
    DADDu	= 500,
    DAHI	= 501,
    DALIGN	= 502,
    DATI	= 503,
    DAUI	= 504,
    DBITSWAP	= 505,
    DCLO	= 506,
    DCLO_R6	= 507,
    DCLZ	= 508,
    DCLZ_R6	= 509,
    DDIV	= 510,
    DDIVU	= 511,
    DERET	= 512,
    DERET_MM	= 513,
    DEXT	= 514,
    DEXTM	= 515,
    DEXTU	= 516,
    DI	= 517,
    DINS	= 518,
    DINSM	= 519,
    DINSU	= 520,
    DIV	= 521,
    DIVU	= 522,
    DIV_S_B	= 523,
    DIV_S_D	= 524,
    DIV_S_H	= 525,
    DIV_S_W	= 526,
    DIV_U_B	= 527,
    DIV_U_D	= 528,
    DIV_U_H	= 529,
    DIV_U_W	= 530,
    DI_MM	= 531,
    DLSA	= 532,
    DLSA_R6	= 533,
    DMFC0	= 534,
    DMFC1	= 535,
    DMFC2	= 536,
    DMOD	= 537,
    DMODU	= 538,
    DMTC0	= 539,
    DMTC1	= 540,
    DMTC2	= 541,
    DMUH	= 542,
    DMUHU	= 543,
    DMUL	= 544,
    DMULT	= 545,
    DMULTu	= 546,
    DMULU	= 547,
    DMUL_R6	= 548,
    DOTP_S_D	= 549,
    DOTP_S_H	= 550,
    DOTP_S_W	= 551,
    DOTP_U_D	= 552,
    DOTP_U_H	= 553,
    DOTP_U_W	= 554,
    DPADD_S_D	= 555,
    DPADD_S_H	= 556,
    DPADD_S_W	= 557,
    DPADD_U_D	= 558,
    DPADD_U_H	= 559,
    DPADD_U_W	= 560,
    DPAQX_SA_W_PH	= 561,
    DPAQX_S_W_PH	= 562,
    DPAQ_SA_L_W	= 563,
    DPAQ_S_W_PH	= 564,
    DPAU_H_QBL	= 565,
    DPAU_H_QBR	= 566,
    DPAX_W_PH	= 567,
    DPA_W_PH	= 568,
    DPOP	= 569,
    DPSQX_SA_W_PH	= 570,
    DPSQX_S_W_PH	= 571,
    DPSQ_SA_L_W	= 572,
    DPSQ_S_W_PH	= 573,
    DPSUB_S_D	= 574,
    DPSUB_S_H	= 575,
    DPSUB_S_W	= 576,
    DPSUB_U_D	= 577,
    DPSUB_U_H	= 578,
    DPSUB_U_W	= 579,
    DPSU_H_QBL	= 580,
    DPSU_H_QBR	= 581,
    DPSX_W_PH	= 582,
    DPS_W_PH	= 583,
    DROTR	= 584,
    DROTR32	= 585,
    DROTRV	= 586,
    DSBH	= 587,
    DSDIV	= 588,
    DSHD	= 589,
    DSLL	= 590,
    DSLL32	= 591,
    DSLL64_32	= 592,
    DSLLV	= 593,
    DSRA	= 594,
    DSRA32	= 595,
    DSRAV	= 596,
    DSRL	= 597,
    DSRL32	= 598,
    DSRLV	= 599,
    DSUB	= 600,
    DSUBu	= 601,
    DUDIV	= 602,
    DivRxRy16	= 603,
    DivuRxRy16	= 604,
    EHB	= 605,
    EI	= 606,
    EI_MM	= 607,
    ERET	= 608,
    ERET_MM	= 609,
    EXT	= 610,
    EXTP	= 611,
    EXTPDP	= 612,
    EXTPDPV	= 613,
    EXTPV	= 614,
    EXTRV_RS_W	= 615,
    EXTRV_R_W	= 616,
    EXTRV_S_H	= 617,
    EXTRV_W	= 618,
    EXTR_RS_W	= 619,
    EXTR_R_W	= 620,
    EXTR_S_H	= 621,
    EXTR_W	= 622,
    EXTS	= 623,
    EXTS32	= 624,
    EXT_MM	= 625,
    ExtractElementF64	= 626,
    ExtractElementF64_64	= 627,
    FABS_D	= 628,
    FABS_D32	= 629,
    FABS_D64	= 630,
    FABS_MM	= 631,
    FABS_S	= 632,
    FABS_S_MM	= 633,
    FABS_W	= 634,
    FADD_D	= 635,
    FADD_D32	= 636,
    FADD_D64	= 637,
    FADD_MM	= 638,
    FADD_S	= 639,
    FADD_S_MM	= 640,
    FADD_W	= 641,
    FCAF_D	= 642,
    FCAF_W	= 643,
    FCEQ_D	= 644,
    FCEQ_W	= 645,
    FCLASS_D	= 646,
    FCLASS_W	= 647,
    FCLE_D	= 648,
    FCLE_W	= 649,
    FCLT_D	= 650,
    FCLT_W	= 651,
    FCMP_D32	= 652,
    FCMP_D32_MM	= 653,
    FCMP_D64	= 654,
    FCMP_S32	= 655,
    FCMP_S32_MM	= 656,
    FCNE_D	= 657,
    FCNE_W	= 658,
    FCOR_D	= 659,
    FCOR_W	= 660,
    FCUEQ_D	= 661,
    FCUEQ_W	= 662,
    FCULE_D	= 663,
    FCULE_W	= 664,
    FCULT_D	= 665,
    FCULT_W	= 666,
    FCUNE_D	= 667,
    FCUNE_W	= 668,
    FCUN_D	= 669,
    FCUN_W	= 670,
    FDIV_D	= 671,
    FDIV_D32	= 672,
    FDIV_D64	= 673,
    FDIV_MM	= 674,
    FDIV_S	= 675,
    FDIV_S_MM	= 676,
    FDIV_W	= 677,
    FEXDO_H	= 678,
    FEXDO_W	= 679,
    FEXP2_D	= 680,
    FEXP2_D_1_PSEUDO	= 681,
    FEXP2_W	= 682,
    FEXP2_W_1_PSEUDO	= 683,
    FEXUPL_D	= 684,
    FEXUPL_W	= 685,
    FEXUPR_D	= 686,
    FEXUPR_W	= 687,
    FFINT_S_D	= 688,
    FFINT_S_W	= 689,
    FFINT_U_D	= 690,
    FFINT_U_W	= 691,
    FFQL_D	= 692,
    FFQL_W	= 693,
    FFQR_D	= 694,
    FFQR_W	= 695,
    FILL_B	= 696,
    FILL_D	= 697,
    FILL_FD_PSEUDO	= 698,
    FILL_FW_PSEUDO	= 699,
    FILL_H	= 700,
    FILL_W	= 701,
    FLOG2_D	= 702,
    FLOG2_W	= 703,
    FLOOR_L_D64	= 704,
    FLOOR_L_S	= 705,
    FLOOR_W_D32	= 706,
    FLOOR_W_D64	= 707,
    FLOOR_W_MM	= 708,
    FLOOR_W_S	= 709,
    FLOOR_W_S_MM	= 710,
    FMADD_D	= 711,
    FMADD_W	= 712,
    FMAX_A_D	= 713,
    FMAX_A_W	= 714,
    FMAX_D	= 715,
    FMAX_W	= 716,
    FMIN_A_D	= 717,
    FMIN_A_W	= 718,
    FMIN_D	= 719,
    FMIN_W	= 720,
    FMOV_D32	= 721,
    FMOV_D32_MM	= 722,
    FMOV_D64	= 723,
    FMOV_S	= 724,
    FMOV_S_MM	= 725,
    FMSUB_D	= 726,
    FMSUB_W	= 727,
    FMUL_D	= 728,
    FMUL_D32	= 729,
    FMUL_D64	= 730,
    FMUL_MM	= 731,
    FMUL_S	= 732,
    FMUL_S_MM	= 733,
    FMUL_W	= 734,
    FNEG_D32	= 735,
    FNEG_D64	= 736,
    FNEG_MM	= 737,
    FNEG_S	= 738,
    FNEG_S_MM	= 739,
    FRCP_D	= 740,
    FRCP_W	= 741,
    FRINT_D	= 742,
    FRINT_W	= 743,
    FRSQRT_D	= 744,
    FRSQRT_W	= 745,
    FSAF_D	= 746,
    FSAF_W	= 747,
    FSEQ_D	= 748,
    FSEQ_W	= 749,
    FSLE_D	= 750,
    FSLE_W	= 751,
    FSLT_D	= 752,
    FSLT_W	= 753,
    FSNE_D	= 754,
    FSNE_W	= 755,
    FSOR_D	= 756,
    FSOR_W	= 757,
    FSQRT_D	= 758,
    FSQRT_D32	= 759,
    FSQRT_D64	= 760,
    FSQRT_MM	= 761,
    FSQRT_S	= 762,
    FSQRT_S_MM	= 763,
    FSQRT_W	= 764,
    FSUB_D	= 765,
    FSUB_D32	= 766,
    FSUB_D64	= 767,
    FSUB_MM	= 768,
    FSUB_S	= 769,
    FSUB_S_MM	= 770,
    FSUB_W	= 771,
    FSUEQ_D	= 772,
    FSUEQ_W	= 773,
    FSULE_D	= 774,
    FSULE_W	= 775,
    FSULT_D	= 776,
    FSULT_W	= 777,
    FSUNE_D	= 778,
    FSUNE_W	= 779,
    FSUN_D	= 780,
    FSUN_W	= 781,
    FTINT_S_D	= 782,
    FTINT_S_W	= 783,
    FTINT_U_D	= 784,
    FTINT_U_W	= 785,
    FTQ_H	= 786,
    FTQ_W	= 787,
    FTRUNC_S_D	= 788,
    FTRUNC_S_W	= 789,
    FTRUNC_U_D	= 790,
    FTRUNC_U_W	= 791,
    GotPrologue16	= 792,
    HADD_S_D	= 793,
    HADD_S_H	= 794,
    HADD_S_W	= 795,
    HADD_U_D	= 796,
    HADD_U_H	= 797,
    HADD_U_W	= 798,
    HSUB_S_D	= 799,
    HSUB_S_H	= 800,
    HSUB_S_W	= 801,
    HSUB_U_D	= 802,
    HSUB_U_H	= 803,
    HSUB_U_W	= 804,
    ILVEV_B	= 805,
    ILVEV_D	= 806,
    ILVEV_H	= 807,
    ILVEV_W	= 808,
    ILVL_B	= 809,
    ILVL_D	= 810,
    ILVL_H	= 811,
    ILVL_W	= 812,
    ILVOD_B	= 813,
    ILVOD_D	= 814,
    ILVOD_H	= 815,
    ILVOD_W	= 816,
    ILVR_B	= 817,
    ILVR_D	= 818,
    ILVR_H	= 819,
    ILVR_W	= 820,
    INS	= 821,
    INSERT_B	= 822,
    INSERT_B_VIDX_PSEUDO	= 823,
    INSERT_D	= 824,
    INSERT_D_VIDX_PSEUDO	= 825,
    INSERT_FD_PSEUDO	= 826,
    INSERT_FD_VIDX_PSEUDO	= 827,
    INSERT_FW_PSEUDO	= 828,
    INSERT_FW_VIDX_PSEUDO	= 829,
    INSERT_H	= 830,
    INSERT_H_VIDX_PSEUDO	= 831,
    INSERT_W	= 832,
    INSERT_W_VIDX_PSEUDO	= 833,
    INSV	= 834,
    INSVE_B	= 835,
    INSVE_D	= 836,
    INSVE_H	= 837,
    INSVE_W	= 838,
    INS_MM	= 839,
    J	= 840,
    JAL	= 841,
    JALR	= 842,
    JALR16_MM	= 843,
    JALR64	= 844,
    JALR64Pseudo	= 845,
    JALRPseudo	= 846,
    JALR_HB	= 847,
    JALR_MM	= 848,
    JALX	= 849,
    JAL_MM	= 850,
    JIALC	= 851,
    JIC	= 852,
    JR	= 853,
    JR64	= 854,
    JR_HB	= 855,
    JR_HB_R6	= 856,
    JR_MM	= 857,
    J_MM	= 858,
    Jal16	= 859,
    JalB16	= 860,
    JrRa16	= 861,
    JrcRa16	= 862,
    JrcRx16	= 863,
    JumpLinkReg16	= 864,
    LB	= 865,
    LB64	= 866,
    LBUX	= 867,
    LB_MM	= 868,
    LBu	= 869,
    LBu64	= 870,
    LBu_MM	= 871,
    LD	= 872,
    LDC1	= 873,
    LDC164	= 874,
    LDC1_MM	= 875,
    LDC2	= 876,
    LDC2_R6	= 877,
    LDC3	= 878,
    LDI_B	= 879,
    LDI_D	= 880,
    LDI_H	= 881,
    LDI_W	= 882,
    LDL	= 883,
    LDPC	= 884,
    LDR	= 885,
    LDXC1	= 886,
    LDXC164	= 887,
    LD_B	= 888,
    LD_D	= 889,
    LD_H	= 890,
    LD_W	= 891,
    LEA_ADDiu	= 892,
    LEA_ADDiu64	= 893,
    LEA_ADDiu_MM	= 894,
    LH	= 895,
    LH64	= 896,
    LHX	= 897,
    LH_MM	= 898,
    LHu	= 899,
    LHu64	= 900,
    LHu_MM	= 901,
    LL	= 902,
    LLD	= 903,
    LLD_R6	= 904,
    LL_MM	= 905,
    LL_R6	= 906,
    LOAD_ACC128	= 907,
    LOAD_ACC64	= 908,
    LOAD_ACC64DSP	= 909,
    LOAD_CCOND_DSP	= 910,
    LONG_BRANCH_ADDiu	= 911,
    LONG_BRANCH_DADDiu	= 912,
    LONG_BRANCH_LUi	= 913,
    LSA	= 914,
    LSA_R6	= 915,
    LUXC1	= 916,
    LUXC164	= 917,
    LUXC1_MM	= 918,
    LUi	= 919,
    LUi64	= 920,
    LUi_MM	= 921,
    LW	= 922,
    LW64	= 923,
    LWC1	= 924,
    LWC1_MM	= 925,
    LWC2	= 926,
    LWC2_R6	= 927,
    LWC3	= 928,
    LWL	= 929,
    LWL64	= 930,
    LWL_MM	= 931,
    LWPC	= 932,
    LWR	= 933,
    LWR64	= 934,
    LWR_MM	= 935,
    LWUPC	= 936,
    LWU_MM	= 937,
    LWX	= 938,
    LWXC1	= 939,
    LWXC1_MM	= 940,
    LW_MM	= 941,
    LWu	= 942,
    LbRxRyOffMemX16	= 943,
    LbuRxRyOffMemX16	= 944,
    LhRxRyOffMemX16	= 945,
    LhuRxRyOffMemX16	= 946,
    LiRxImm16	= 947,
    LiRxImmAlignX16	= 948,
    LiRxImmX16	= 949,
    LoadAddr32Imm	= 950,
    LoadAddr32Reg	= 951,
    LoadImm32Reg	= 952,
    LoadImm64Reg	= 953,
    LwConstant32	= 954,
    LwRxPcTcp16	= 955,
    LwRxPcTcpX16	= 956,
    LwRxRyOffMemX16	= 957,
    LwRxSpImmX16	= 958,
    MADD	= 959,
    MADDF_D	= 960,
    MADDF_S	= 961,
    MADDR_Q_H	= 962,
    MADDR_Q_W	= 963,
    MADDU	= 964,
    MADDU_DSP	= 965,
    MADDU_MM	= 966,
    MADDV_B	= 967,
    MADDV_D	= 968,
    MADDV_H	= 969,
    MADDV_W	= 970,
    MADD_D32	= 971,
    MADD_D32_MM	= 972,
    MADD_D64	= 973,
    MADD_DSP	= 974,
    MADD_MM	= 975,
    MADD_Q_H	= 976,
    MADD_Q_W	= 977,
    MADD_S	= 978,
    MADD_S_MM	= 979,
    MAQ_SA_W_PHL	= 980,
    MAQ_SA_W_PHR	= 981,
    MAQ_S_W_PHL	= 982,
    MAQ_S_W_PHR	= 983,
    MAXA_D	= 984,
    MAXA_S	= 985,
    MAXI_S_B	= 986,
    MAXI_S_D	= 987,
    MAXI_S_H	= 988,
    MAXI_S_W	= 989,
    MAXI_U_B	= 990,
    MAXI_U_D	= 991,
    MAXI_U_H	= 992,
    MAXI_U_W	= 993,
    MAX_A_B	= 994,
    MAX_A_D	= 995,
    MAX_A_H	= 996,
    MAX_A_W	= 997,
    MAX_D	= 998,
    MAX_S	= 999,
    MAX_S_B	= 1000,
    MAX_S_D	= 1001,
    MAX_S_H	= 1002,
    MAX_S_W	= 1003,
    MAX_U_B	= 1004,
    MAX_U_D	= 1005,
    MAX_U_H	= 1006,
    MAX_U_W	= 1007,
    MFC0	= 1008,
    MFC1	= 1009,
    MFC1_MM	= 1010,
    MFC2	= 1011,
    MFHC1_D32	= 1012,
    MFHC1_D64	= 1013,
    MFHC1_MM	= 1014,
    MFHI	= 1015,
    MFHI16_MM	= 1016,
    MFHI64	= 1017,
    MFHI_DSP	= 1018,
    MFHI_MM	= 1019,
    MFLO	= 1020,
    MFLO16_MM	= 1021,
    MFLO64	= 1022,
    MFLO_DSP	= 1023,
    MFLO_MM	= 1024,
    MINA_D	= 1025,
    MINA_S	= 1026,
    MINI_S_B	= 1027,
    MINI_S_D	= 1028,
    MINI_S_H	= 1029,
    MINI_S_W	= 1030,
    MINI_U_B	= 1031,
    MINI_U_D	= 1032,
    MINI_U_H	= 1033,
    MINI_U_W	= 1034,
    MIN_A_B	= 1035,
    MIN_A_D	= 1036,
    MIN_A_H	= 1037,
    MIN_A_W	= 1038,
    MIN_D	= 1039,
    MIN_S	= 1040,
    MIN_S_B	= 1041,
    MIN_S_D	= 1042,
    MIN_S_H	= 1043,
    MIN_S_W	= 1044,
    MIN_U_B	= 1045,
    MIN_U_D	= 1046,
    MIN_U_H	= 1047,
    MIN_U_W	= 1048,
    MIPSeh_return32	= 1049,
    MIPSeh_return64	= 1050,
    MOD	= 1051,
    MODSUB	= 1052,
    MODU	= 1053,
    MOD_S_B	= 1054,
    MOD_S_D	= 1055,
    MOD_S_H	= 1056,
    MOD_S_W	= 1057,
    MOD_U_B	= 1058,
    MOD_U_D	= 1059,
    MOD_U_H	= 1060,
    MOD_U_W	= 1061,
    MOVE16_MM	= 1062,
    MOVE_V	= 1063,
    MOVF_D32	= 1064,
    MOVF_D32_MM	= 1065,
    MOVF_D64	= 1066,
    MOVF_I	= 1067,
    MOVF_I64	= 1068,
    MOVF_I_MM	= 1069,
    MOVF_S	= 1070,
    MOVF_S_MM	= 1071,
    MOVN_I64_D64	= 1072,
    MOVN_I64_I	= 1073,
    MOVN_I64_I64	= 1074,
    MOVN_I64_S	= 1075,
    MOVN_I_D32	= 1076,
    MOVN_I_D32_MM	= 1077,
    MOVN_I_D64	= 1078,
    MOVN_I_I	= 1079,
    MOVN_I_I64	= 1080,
    MOVN_I_MM	= 1081,
    MOVN_I_S	= 1082,
    MOVN_I_S_MM	= 1083,
    MOVT_D32	= 1084,
    MOVT_D32_MM	= 1085,
    MOVT_D64	= 1086,
    MOVT_I	= 1087,
    MOVT_I64	= 1088,
    MOVT_I_MM	= 1089,
    MOVT_S	= 1090,
    MOVT_S_MM	= 1091,
    MOVZ_I64_D64	= 1092,
    MOVZ_I64_I	= 1093,
    MOVZ_I64_I64	= 1094,
    MOVZ_I64_S	= 1095,
    MOVZ_I_D32	= 1096,
    MOVZ_I_D32_MM	= 1097,
    MOVZ_I_D64	= 1098,
    MOVZ_I_I	= 1099,
    MOVZ_I_I64	= 1100,
    MOVZ_I_MM	= 1101,
    MOVZ_I_S	= 1102,
    MOVZ_I_S_MM	= 1103,
    MSUB	= 1104,
    MSUBF_D	= 1105,
    MSUBF_S	= 1106,
    MSUBR_Q_H	= 1107,
    MSUBR_Q_W	= 1108,
    MSUBU	= 1109,
    MSUBU_DSP	= 1110,
    MSUBU_MM	= 1111,
    MSUBV_B	= 1112,
    MSUBV_D	= 1113,
    MSUBV_H	= 1114,
    MSUBV_W	= 1115,
    MSUB_D32	= 1116,
    MSUB_D32_MM	= 1117,
    MSUB_D64	= 1118,
    MSUB_DSP	= 1119,
    MSUB_MM	= 1120,
    MSUB_Q_H	= 1121,
    MSUB_Q_W	= 1122,
    MSUB_S	= 1123,
    MSUB_S_MM	= 1124,
    MTC0	= 1125,
    MTC1	= 1126,
    MTC1_MM	= 1127,
    MTC2	= 1128,
    MTHC1_D32	= 1129,
    MTHC1_D64	= 1130,
    MTHC1_MM	= 1131,
    MTHI	= 1132,
    MTHI64	= 1133,
    MTHI_DSP	= 1134,
    MTHI_MM	= 1135,
    MTHLIP	= 1136,
    MTLO	= 1137,
    MTLO64	= 1138,
    MTLO_DSP	= 1139,
    MTLO_MM	= 1140,
    MTM0	= 1141,
    MTM1	= 1142,
    MTM2	= 1143,
    MTP0	= 1144,
    MTP1	= 1145,
    MTP2	= 1146,
    MUH	= 1147,
    MUHU	= 1148,
    MUL	= 1149,
    MULEQ_S_W_PHL	= 1150,
    MULEQ_S_W_PHR	= 1151,
    MULEU_S_PH_QBL	= 1152,
    MULEU_S_PH_QBR	= 1153,
    MULQ_RS_PH	= 1154,
    MULQ_RS_W	= 1155,
    MULQ_S_PH	= 1156,
    MULQ_S_W	= 1157,
    MULR_Q_H	= 1158,
    MULR_Q_W	= 1159,
    MULSAQ_S_W_PH	= 1160,
    MULSA_W_PH	= 1161,
    MULT	= 1162,
    MULTU_DSP	= 1163,
    MULT_DSP	= 1164,
    MULT_MM	= 1165,
    MULTu	= 1166,
    MULTu_MM	= 1167,
    MULU	= 1168,
    MULV_B	= 1169,
    MULV_D	= 1170,
    MULV_H	= 1171,
    MULV_W	= 1172,
    MUL_MM	= 1173,
    MUL_PH	= 1174,
    MUL_Q_H	= 1175,
    MUL_Q_W	= 1176,
    MUL_R6	= 1177,
    MUL_S_PH	= 1178,
    Mfhi16	= 1179,
    Mflo16	= 1180,
    Move32R16	= 1181,
    MoveR3216	= 1182,
    MultRxRy16	= 1183,
    MultRxRyRz16	= 1184,
    MultuRxRy16	= 1185,
    MultuRxRyRz16	= 1186,
    NLOC_B	= 1187,
    NLOC_D	= 1188,
    NLOC_H	= 1189,
    NLOC_W	= 1190,
    NLZC_B	= 1191,
    NLZC_D	= 1192,
    NLZC_H	= 1193,
    NLZC_W	= 1194,
    NMADD_D32	= 1195,
    NMADD_D32_MM	= 1196,
    NMADD_D64	= 1197,
    NMADD_S	= 1198,
    NMADD_S_MM	= 1199,
    NMSUB_D32	= 1200,
    NMSUB_D32_MM	= 1201,
    NMSUB_D64	= 1202,
    NMSUB_S	= 1203,
    NMSUB_S_MM	= 1204,
    NOP	= 1205,
    NOR	= 1206,
    NOR64	= 1207,
    NORI_B	= 1208,
    NOR_MM	= 1209,
    NOR_V	= 1210,
    NOR_V_D_PSEUDO	= 1211,
    NOR_V_H_PSEUDO	= 1212,
    NOR_V_W_PSEUDO	= 1213,
    NegRxRy16	= 1214,
    NotRxRy16	= 1215,
    OR	= 1216,
    OR64	= 1217,
    ORI_B	= 1218,
    OR_MM	= 1219,
    OR_V	= 1220,
    OR_V_D_PSEUDO	= 1221,
    OR_V_H_PSEUDO	= 1222,
    OR_V_W_PSEUDO	= 1223,
    ORi	= 1224,
    ORi64	= 1225,
    ORi_MM	= 1226,
    OrRxRxRy16	= 1227,
    PACKRL_PH	= 1228,
    PAUSE	= 1229,
    PCKEV_B	= 1230,
    PCKEV_D	= 1231,
    PCKEV_H	= 1232,
    PCKEV_W	= 1233,
    PCKOD_B	= 1234,
    PCKOD_D	= 1235,
    PCKOD_H	= 1236,
    PCKOD_W	= 1237,
    PCNT_B	= 1238,
    PCNT_D	= 1239,
    PCNT_H	= 1240,
    PCNT_W	= 1241,
    PICK_PH	= 1242,
    PICK_QB	= 1243,
    POP	= 1244,
    PRECEQU_PH_QBL	= 1245,
    PRECEQU_PH_QBLA	= 1246,
    PRECEQU_PH_QBR	= 1247,
    PRECEQU_PH_QBRA	= 1248,
    PRECEQ_W_PHL	= 1249,
    PRECEQ_W_PHR	= 1250,
    PRECEU_PH_QBL	= 1251,
    PRECEU_PH_QBLA	= 1252,
    PRECEU_PH_QBR	= 1253,
    PRECEU_PH_QBRA	= 1254,
    PRECRQU_S_QB_PH	= 1255,
    PRECRQ_PH_W	= 1256,
    PRECRQ_QB_PH	= 1257,
    PRECRQ_RS_PH_W	= 1258,
    PRECR_QB_PH	= 1259,
    PRECR_SRA_PH_W	= 1260,
    PRECR_SRA_R_PH_W	= 1261,
    PREF	= 1262,
    PREF_R6	= 1263,
    PREPEND	= 1264,
    PseudoCMPU_EQ_QB	= 1265,
    PseudoCMPU_LE_QB	= 1266,
    PseudoCMPU_LT_QB	= 1267,
    PseudoCMP_EQ_PH	= 1268,
    PseudoCMP_LE_PH	= 1269,
    PseudoCMP_LT_PH	= 1270,
    PseudoCVT_D32_W	= 1271,
    PseudoCVT_D64_L	= 1272,
    PseudoCVT_D64_W	= 1273,
    PseudoCVT_S_L	= 1274,
    PseudoCVT_S_W	= 1275,
    PseudoDMULT	= 1276,
    PseudoDMULTu	= 1277,
    PseudoDSDIV	= 1278,
    PseudoDUDIV	= 1279,
    PseudoIndirectBranch	= 1280,
    PseudoIndirectBranch64	= 1281,
    PseudoMADD	= 1282,
    PseudoMADDU	= 1283,
    PseudoMFHI	= 1284,
    PseudoMFHI64	= 1285,
    PseudoMFLO	= 1286,
    PseudoMFLO64	= 1287,
    PseudoMSUB	= 1288,
    PseudoMSUBU	= 1289,
    PseudoMTLOHI	= 1290,
    PseudoMTLOHI64	= 1291,
    PseudoMTLOHI_DSP	= 1292,
    PseudoMULT	= 1293,
    PseudoMULTu	= 1294,
    PseudoPICK_PH	= 1295,
    PseudoPICK_QB	= 1296,
    PseudoReturn	= 1297,
    PseudoReturn64	= 1298,
    PseudoSDIV	= 1299,
    PseudoUDIV	= 1300,
    RADDU_W_QB	= 1301,
    RDDSP	= 1302,
    RDHWR	= 1303,
    RDHWR64	= 1304,
    REPLV_PH	= 1305,
    REPLV_QB	= 1306,
    REPL_PH	= 1307,
    REPL_QB	= 1308,
    RINT_D	= 1309,
    RINT_S	= 1310,
    ROTR	= 1311,
    ROTRV	= 1312,
    ROTRV_MM	= 1313,
    ROTR_MM	= 1314,
    ROUND_L_D64	= 1315,
    ROUND_L_S	= 1316,
    ROUND_W_D32	= 1317,
    ROUND_W_D64	= 1318,
    ROUND_W_MM	= 1319,
    ROUND_W_S	= 1320,
    ROUND_W_S_MM	= 1321,
    Restore16	= 1322,
    RestoreX16	= 1323,
    RetRA	= 1324,
    RetRA16	= 1325,
    SAT_S_B	= 1326,
    SAT_S_D	= 1327,
    SAT_S_H	= 1328,
    SAT_S_W	= 1329,
    SAT_U_B	= 1330,
    SAT_U_D	= 1331,
    SAT_U_H	= 1332,
    SAT_U_W	= 1333,
    SB	= 1334,
    SB64	= 1335,
    SB_MM	= 1336,
    SC	= 1337,
    SCD	= 1338,
    SCD_R6	= 1339,
    SC_MM	= 1340,
    SC_R6	= 1341,
    SD	= 1342,
    SDBBP	= 1343,
    SDBBP_R6	= 1344,
    SDC1	= 1345,
    SDC164	= 1346,
    SDC1_MM	= 1347,
    SDC2	= 1348,
    SDC2_R6	= 1349,
    SDC3	= 1350,
    SDIV	= 1351,
    SDIV_MM	= 1352,
    SDL	= 1353,
    SDR	= 1354,
    SDXC1	= 1355,
    SDXC164	= 1356,
    SEB	= 1357,
    SEB64	= 1358,
    SEB_MM	= 1359,
    SEH	= 1360,
    SEH64	= 1361,
    SEH_MM	= 1362,
    SELEQZ	= 1363,
    SELEQZ64	= 1364,
    SELEQZ_D	= 1365,
    SELEQZ_S	= 1366,
    SELNEZ	= 1367,
    SELNEZ64	= 1368,
    SELNEZ_D	= 1369,
    SELNEZ_S	= 1370,
    SEL_D	= 1371,
    SEL_S	= 1372,
    SEQ	= 1373,
    SEQi	= 1374,
    SH	= 1375,
    SH64	= 1376,
    SHF_B	= 1377,
    SHF_H	= 1378,
    SHF_W	= 1379,
    SHILO	= 1380,
    SHILOV	= 1381,
    SHLLV_PH	= 1382,
    SHLLV_QB	= 1383,
    SHLLV_S_PH	= 1384,
    SHLLV_S_W	= 1385,
    SHLL_PH	= 1386,
    SHLL_QB	= 1387,
    SHLL_S_PH	= 1388,
    SHLL_S_W	= 1389,
    SHRAV_PH	= 1390,
    SHRAV_QB	= 1391,
    SHRAV_R_PH	= 1392,
    SHRAV_R_QB	= 1393,
    SHRAV_R_W	= 1394,
    SHRA_PH	= 1395,
    SHRA_QB	= 1396,
    SHRA_R_PH	= 1397,
    SHRA_R_QB	= 1398,
    SHRA_R_W	= 1399,
    SHRLV_PH	= 1400,
    SHRLV_QB	= 1401,
    SHRL_PH	= 1402,
    SHRL_QB	= 1403,
    SH_MM	= 1404,
    SLDI_B	= 1405,
    SLDI_D	= 1406,
    SLDI_H	= 1407,
    SLDI_W	= 1408,
    SLD_B	= 1409,
    SLD_D	= 1410,
    SLD_H	= 1411,
    SLD_W	= 1412,
    SLL	= 1413,
    SLL64_32	= 1414,
    SLL64_64	= 1415,
    SLLI_B	= 1416,
    SLLI_D	= 1417,
    SLLI_H	= 1418,
    SLLI_W	= 1419,
    SLLV	= 1420,
    SLLV_MM	= 1421,
    SLL_B	= 1422,
    SLL_D	= 1423,
    SLL_H	= 1424,
    SLL_MM	= 1425,
    SLL_W	= 1426,
    SLT	= 1427,
    SLT64	= 1428,
    SLT_MM	= 1429,
    SLTi	= 1430,
    SLTi64	= 1431,
    SLTi_MM	= 1432,
    SLTiu	= 1433,
    SLTiu64	= 1434,
    SLTiu_MM	= 1435,
    SLTu	= 1436,
    SLTu64	= 1437,
    SLTu_MM	= 1438,
    SNE	= 1439,
    SNEi	= 1440,
    SNZ_B_PSEUDO	= 1441,
    SNZ_D_PSEUDO	= 1442,
    SNZ_H_PSEUDO	= 1443,
    SNZ_V_PSEUDO	= 1444,
    SNZ_W_PSEUDO	= 1445,
    SPLATI_B	= 1446,
    SPLATI_D	= 1447,
    SPLATI_H	= 1448,
    SPLATI_W	= 1449,
    SPLAT_B	= 1450,
    SPLAT_D	= 1451,
    SPLAT_H	= 1452,
    SPLAT_W	= 1453,
    SRA	= 1454,
    SRAI_B	= 1455,
    SRAI_D	= 1456,
    SRAI_H	= 1457,
    SRAI_W	= 1458,
    SRARI_B	= 1459,
    SRARI_D	= 1460,
    SRARI_H	= 1461,
    SRARI_W	= 1462,
    SRAR_B	= 1463,
    SRAR_D	= 1464,
    SRAR_H	= 1465,
    SRAR_W	= 1466,
    SRAV	= 1467,
    SRAV_MM	= 1468,
    SRA_B	= 1469,
    SRA_D	= 1470,
    SRA_H	= 1471,
    SRA_MM	= 1472,
    SRA_W	= 1473,
    SRL	= 1474,
    SRLI_B	= 1475,
    SRLI_D	= 1476,
    SRLI_H	= 1477,
    SRLI_W	= 1478,
    SRLRI_B	= 1479,
    SRLRI_D	= 1480,
    SRLRI_H	= 1481,
    SRLRI_W	= 1482,
    SRLR_B	= 1483,
    SRLR_D	= 1484,
    SRLR_H	= 1485,
    SRLR_W	= 1486,
    SRLV	= 1487,
    SRLV_MM	= 1488,
    SRL_B	= 1489,
    SRL_D	= 1490,
    SRL_H	= 1491,
    SRL_MM	= 1492,
    SRL_W	= 1493,
    SSNOP	= 1494,
    STORE_ACC128	= 1495,
    STORE_ACC64	= 1496,
    STORE_ACC64DSP	= 1497,
    STORE_CCOND_DSP	= 1498,
    ST_B	= 1499,
    ST_D	= 1500,
    ST_H	= 1501,
    ST_W	= 1502,
    SUB	= 1503,
    SUBQH_PH	= 1504,
    SUBQH_R_PH	= 1505,
    SUBQH_R_W	= 1506,
    SUBQH_W	= 1507,
    SUBQ_PH	= 1508,
    SUBQ_S_PH	= 1509,
    SUBQ_S_W	= 1510,
    SUBSUS_U_B	= 1511,
    SUBSUS_U_D	= 1512,
    SUBSUS_U_H	= 1513,
    SUBSUS_U_W	= 1514,
    SUBSUU_S_B	= 1515,
    SUBSUU_S_D	= 1516,
    SUBSUU_S_H	= 1517,
    SUBSUU_S_W	= 1518,
    SUBS_S_B	= 1519,
    SUBS_S_D	= 1520,
    SUBS_S_H	= 1521,
    SUBS_S_W	= 1522,
    SUBS_U_B	= 1523,
    SUBS_U_D	= 1524,
    SUBS_U_H	= 1525,
    SUBS_U_W	= 1526,
    SUBUH_QB	= 1527,
    SUBUH_R_QB	= 1528,
    SUBU_PH	= 1529,
    SUBU_QB	= 1530,
    SUBU_S_PH	= 1531,
    SUBU_S_QB	= 1532,
    SUBVI_B	= 1533,
    SUBVI_D	= 1534,
    SUBVI_H	= 1535,
    SUBVI_W	= 1536,
    SUBV_B	= 1537,
    SUBV_D	= 1538,
    SUBV_H	= 1539,
    SUBV_W	= 1540,
    SUB_MM	= 1541,
    SUBu	= 1542,
    SUBu_MM	= 1543,
    SUXC1	= 1544,
    SUXC164	= 1545,
    SUXC1_MM	= 1546,
    SW	= 1547,
    SW64	= 1548,
    SWC1	= 1549,
    SWC1_MM	= 1550,
    SWC2	= 1551,
    SWC2_R6	= 1552,
    SWC3	= 1553,
    SWL	= 1554,
    SWL64	= 1555,
    SWL_MM	= 1556,
    SWR	= 1557,
    SWR64	= 1558,
    SWR_MM	= 1559,
    SWXC1	= 1560,
    SWXC1_MM	= 1561,
    SW_MM	= 1562,
    SYNC	= 1563,
    SYNC_MM	= 1564,
    SYSCALL	= 1565,
    SYSCALL_MM	= 1566,
    SZ_B_PSEUDO	= 1567,
    SZ_D_PSEUDO	= 1568,
    SZ_H_PSEUDO	= 1569,
    SZ_V_PSEUDO	= 1570,
    SZ_W_PSEUDO	= 1571,
    Save16	= 1572,
    SaveX16	= 1573,
    SbRxRyOffMemX16	= 1574,
    SebRx16	= 1575,
    SehRx16	= 1576,
    SelBeqZ	= 1577,
    SelBneZ	= 1578,
    SelTBteqZCmp	= 1579,
    SelTBteqZCmpi	= 1580,
    SelTBteqZSlt	= 1581,
    SelTBteqZSlti	= 1582,
    SelTBteqZSltiu	= 1583,
    SelTBteqZSltu	= 1584,
    SelTBtneZCmp	= 1585,
    SelTBtneZCmpi	= 1586,
    SelTBtneZSlt	= 1587,
    SelTBtneZSlti	= 1588,
    SelTBtneZSltiu	= 1589,
    SelTBtneZSltu	= 1590,
    ShRxRyOffMemX16	= 1591,
    SllX16	= 1592,
    SllvRxRy16	= 1593,
    SltCCRxRy16	= 1594,
    SltRxRy16	= 1595,
    SltiCCRxImmX16	= 1596,
    SltiRxImm16	= 1597,
    SltiRxImmX16	= 1598,
    SltiuCCRxImmX16	= 1599,
    SltiuRxImm16	= 1600,
    SltiuRxImmX16	= 1601,
    SltuCCRxRy16	= 1602,
    SltuRxRy16	= 1603,
    SltuRxRyRz16	= 1604,
    SraX16	= 1605,
    SravRxRy16	= 1606,
    SrlX16	= 1607,
    SrlvRxRy16	= 1608,
    SubuRxRyRz16	= 1609,
    SwRxRyOffMemX16	= 1610,
    SwRxSpImmX16	= 1611,
    TAILCALL	= 1612,
    TAILCALL64_R	= 1613,
    TAILCALL_R	= 1614,
    TEQ	= 1615,
    TEQI	= 1616,
    TEQI_MM	= 1617,
    TEQ_MM	= 1618,
    TGE	= 1619,
    TGEI	= 1620,
    TGEIU	= 1621,
    TGEIU_MM	= 1622,
    TGEI_MM	= 1623,
    TGEU	= 1624,
    TGEU_MM	= 1625,
    TGE_MM	= 1626,
    TLBP	= 1627,
    TLBR	= 1628,
    TLBWI	= 1629,
    TLBWR	= 1630,
    TLT	= 1631,
    TLTI	= 1632,
    TLTIU_MM	= 1633,
    TLTI_MM	= 1634,
    TLTU	= 1635,
    TLTU_MM	= 1636,
    TLT_MM	= 1637,
    TNE	= 1638,
    TNEI	= 1639,
    TNEI_MM	= 1640,
    TNE_MM	= 1641,
    TRAP	= 1642,
    TRUNC_L_D64	= 1643,
    TRUNC_L_S	= 1644,
    TRUNC_W_D32	= 1645,
    TRUNC_W_D64	= 1646,
    TRUNC_W_MM	= 1647,
    TRUNC_W_S	= 1648,
    TRUNC_W_S_MM	= 1649,
    TTLTIU	= 1650,
    UDIV	= 1651,
    UDIV_MM	= 1652,
    V3MULU	= 1653,
    VMM0	= 1654,
    VMULU	= 1655,
    VSHF_B	= 1656,
    VSHF_D	= 1657,
    VSHF_H	= 1658,
    VSHF_W	= 1659,
    WAIT	= 1660,
    WAIT_MM	= 1661,
    WRDSP	= 1662,
    WSBH	= 1663,
    WSBH_MM	= 1664,
    XOR	= 1665,
    XOR64	= 1666,
    XORI_B	= 1667,
    XOR_MM	= 1668,
    XOR_V	= 1669,
    XOR_V_D_PSEUDO	= 1670,
    XOR_V_H_PSEUDO	= 1671,
    XOR_V_W_PSEUDO	= 1672,
    XORi	= 1673,
    XORi64	= 1674,
    XORi_MM	= 1675,
    XorRxRxRy16	= 1676,
    INSTRUCTION_LIST_END = 1677
  };
namespace Sched {
  enum {
    NoInstrModel	= 0,
    II_ADDIU	= 1,
    II_ADDU	= 2,
    IIPseudo	= 3,
    II_AND	= 4,
    II_ANDI	= 5,
    IIAlu	= 6,
    IIBranch	= 7,
    II_BADDU	= 8,
    II_CEIL	= 9,
    II_CFC1	= 10,
    II_CLO	= 11,
    II_CLZ	= 12,
    II_CTC1	= 13,
    II_CVT	= 14,
    II_C_CC_D	= 15,
    II_C_CC_S	= 16,
    II_DADD	= 17,
    II_DADDIU	= 18,
    II_DADDU	= 19,
    II_DMFC1	= 20,
    II_DMTC1	= 21,
    II_DMUL	= 22,
    II_DMULT	= 23,
    II_DMULTU	= 24,
    II_POP	= 25,
    II_DROTR	= 26,
    II_DROTR32	= 27,
    II_DROTRV	= 28,
    II_DDIV	= 29,
    II_DSLL	= 30,
    II_DSLL32	= 31,
    II_DSLLV	= 32,
    II_DSRA	= 33,
    II_DSRA32	= 34,
    II_DSRAV	= 35,
    II_DSRL	= 36,
    II_DSRL32	= 37,
    II_DSRLV	= 38,
    II_DSUB	= 39,
    II_DSUBU	= 40,
    II_DDIVU	= 41,
    II_ABS	= 42,
    II_ADD_D	= 43,
    II_ADD_S	= 44,
    II_DIV_D	= 45,
    II_DIV_S	= 46,
    II_FLOOR	= 47,
    II_MOV_D	= 48,
    II_MOV_S	= 49,
    II_MUL_D	= 50,
    II_MUL_S	= 51,
    II_NEG	= 52,
    II_SQRT_D	= 53,
    II_SQRT_S	= 54,
    II_SUB_D	= 55,
    II_SUB_S	= 56,
    II_LB	= 57,
    II_LBU	= 58,
    II_LD	= 59,
    II_LDC1	= 60,
    II_LDL	= 61,
    II_LDR	= 62,
    II_LDXC1	= 63,
    II_LH	= 64,
    II_LHU	= 65,
    II_LUXC1	= 66,
    II_LUI	= 67,
    II_LW	= 68,
    II_LWC1	= 69,
    II_LWL	= 70,
    II_LWR	= 71,
    II_LWU	= 72,
    II_LWXC1	= 73,
    II_MADD	= 74,
    II_MADDU	= 75,
    II_MADD_D	= 76,
    II_MADD_S	= 77,
    II_MFC1	= 78,
    II_MFHC1	= 79,
    II_MFHI_MFLO	= 80,
    II_MOVF_D	= 81,
    II_MOVF	= 82,
    II_MOVF_S	= 83,
    II_MOVN_D	= 84,
    II_MOVN	= 85,
    II_MOVN_S	= 86,
    II_MOVT_D	= 87,
    II_MOVT	= 88,
    II_MOVT_S	= 89,
    II_MOVZ_D	= 90,
    II_MOVZ	= 91,
    II_MOVZ_S	= 92,
    II_MSUB	= 93,
    II_MSUBU	= 94,
    II_MSUB_D	= 95,
    II_MSUB_S	= 96,
    II_MTC1	= 97,
    II_MTHC1	= 98,
    II_MTHI_MTLO	= 99,
    II_MUL	= 100,
    II_MULT	= 101,
    II_MULTU	= 102,
    II_NMADD_D	= 103,
    II_NMADD_S	= 104,
    II_NMSUB_D	= 105,
    II_NMSUB_S	= 106,
    II_NOR	= 107,
    II_OR	= 108,
    II_ORI	= 109,
    II_DIV	= 110,
    II_DIVU	= 111,
    II_RDHWR	= 112,
    II_ROTR	= 113,
    II_ROTRV	= 114,
    II_ROUND	= 115,
    II_RESTORE	= 116,
    II_SB	= 117,
    II_SD	= 118,
    II_SDC1	= 119,
    II_SDL	= 120,
    II_SDR	= 121,
    II_SDXC1	= 122,
    II_SEB	= 123,
    II_SEH	= 124,
    II_SEQ_SNE	= 125,
    II_SEQI_SNEI	= 126,
    II_SH	= 127,
    II_SLL	= 128,
    II_SLLV	= 129,
    II_SLT_SLTU	= 130,
    II_SLTI_SLTIU	= 131,
    II_SRA	= 132,
    II_SRAV	= 133,
    II_SRL	= 134,
    II_SRLV	= 135,
    II_SUBU	= 136,
    II_SUXC1	= 137,
    II_SW	= 138,
    II_SWC1	= 139,
    II_SWL	= 140,
    II_SWR	= 141,
    II_SWXC1	= 142,
    II_SAVE	= 143,
    II_TRUNC	= 144,
    II_XOR	= 145,
    II_XORI	= 146,
    SCHED_LIST_END = 147
  };
}
}
} // End llvm namespace 
#endif // GET_INSTRINFO_ENUM

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Target Instruction Descriptors                                              *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const uint16_t ImplicitList1[] = { Mips::DSPOutFlag20, 0 };
static const uint16_t ImplicitList2[] = { Mips::DSPCarry, 0 };
static const uint16_t ImplicitList3[] = { Mips::SP, 0 };
static const uint16_t ImplicitList4[] = { Mips::AT, 0 };
static const uint16_t ImplicitList5[] = { Mips::RA, 0 };
static const uint16_t ImplicitList6[] = { Mips::DSPPos, 0 };
static const uint16_t ImplicitList7[] = { Mips::T8, 0 };
static const uint16_t ImplicitList8[] = { Mips::DSPCCond, 0 };
static const uint16_t ImplicitList9[] = { Mips::HI0, Mips::LO0, Mips::P0, Mips::P1, Mips::P2, 0 };
static const uint16_t ImplicitList10[] = { Mips::HI0_64, Mips::LO0_64, 0 };
static const uint16_t ImplicitList11[] = { Mips::DSPOutFlag16_19, 0 };
static const uint16_t ImplicitList12[] = { Mips::HI0, Mips::LO0, 0 };
static const uint16_t ImplicitList13[] = { Mips::DSPEFI, 0 };
static const uint16_t ImplicitList14[] = { Mips::DSPPos, Mips::DSPEFI, 0 };
static const uint16_t ImplicitList15[] = { Mips::DSPOutFlag23, 0 };
static const uint16_t ImplicitList16[] = { Mips::FCC0, 0 };
static const uint16_t ImplicitList17[] = { Mips::DSPPos, Mips::DSPSCount, 0 };
static const uint16_t ImplicitList18[] = { Mips::AC0, 0 };
static const uint16_t ImplicitList19[] = { Mips::AC0_64, 0 };
static const uint16_t ImplicitList20[] = { Mips::V0, Mips::V1, 0 };
static const uint16_t ImplicitList21[] = { Mips::HI0, 0 };
static const uint16_t ImplicitList22[] = { Mips::HI0_64, 0 };
static const uint16_t ImplicitList23[] = { Mips::LO0, 0 };
static const uint16_t ImplicitList24[] = { Mips::LO0_64, 0 };
static const uint16_t ImplicitList25[] = { Mips::MPL0, Mips::P0, Mips::P1, Mips::P2, 0 };
static const uint16_t ImplicitList26[] = { Mips::MPL1, Mips::P0, Mips::P1, Mips::P2, 0 };
static const uint16_t ImplicitList27[] = { Mips::MPL2, Mips::P0, Mips::P1, Mips::P2, 0 };
static const uint16_t ImplicitList28[] = { Mips::P0, 0 };
static const uint16_t ImplicitList29[] = { Mips::P1, 0 };
static const uint16_t ImplicitList30[] = { Mips::P2, 0 };
static const uint16_t ImplicitList31[] = { Mips::DSPOutFlag21, 0 };
static const uint16_t ImplicitList32[] = { Mips::DSPOutFlag22, 0 };
static const uint16_t ImplicitList33[] = { Mips::P0, Mips::P1, Mips::P2, 0 };
static const uint16_t ImplicitList34[] = { Mips::MPL1, Mips::MPL2, Mips::P0, Mips::P1, Mips::P2, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo29[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsPlusSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { Mips::FCCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { Mips::COP2RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CCRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSACtrlRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { Mips::FGRCCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { Mips::FGRCCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo79[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo80[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo81[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo82[] = { { Mips::CCRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo83[] = { { Mips::MSACtrlRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo84[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo85[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo86[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo87[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo88[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo89[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo90[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo91[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo92[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo93[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo94[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo95[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo96[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo97[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo98[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo99[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo100[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo101[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo102[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo103[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo104[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo105[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo106[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo107[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo108[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo109[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo110[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo111[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo112[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo113[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo114[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo115[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo116[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo117[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo118[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo119[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo120[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo121[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo122[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo123[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo124[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo125[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo126[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo127[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo128[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo129[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo130[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo131[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo132[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo133[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo134[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo135[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo136[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo137[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo138[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo139[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo140[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo141[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo142[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo143[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo144[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo145[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo146[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo147[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo148[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo149[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo150[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo151[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo152[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo153[] = { { Mips::COP2RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo154[] = { { Mips::COP3RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo155[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo156[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo157[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo158[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo159[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo160[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo161[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo162[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo163[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo164[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo165[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo166[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo167[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo168[] = { { Mips::ACC128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo169[] = { { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo170[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo171[] = { { Mips::DSPCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo172[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo173[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo174[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo175[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo176[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo177[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo178[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo179[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU16RegsPlusSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo180[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo181[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo182[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPUSPRegRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo183[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo184[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo185[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo186[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo187[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo188[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo189[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo190[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo191[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGRH32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo192[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo193[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo194[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo195[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo196[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo197[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo198[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo199[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo200[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo201[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo202[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo203[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo204[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo205[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo206[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo207[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo208[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo209[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo210[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo211[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo212[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo213[] = { { Mips::FGRH32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo214[] = { { Mips::HI32DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo215[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo216[] = { { Mips::LO32DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo217[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo218[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo219[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo220[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo221[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo222[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo223[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo224[] = { { Mips::DSPCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo225[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo226[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo227[] = { { Mips::ACC128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo228[] = { { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo229[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo230[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo231[] = { { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo232[] = { { Mips::ACC128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo233[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo234[] = { { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo235[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::DSPCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo236[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::HWRegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo237[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::HWRegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo238[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo239[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo240[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo241[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo242[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo243[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGRCCRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo244[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGRCCRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo245[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo246[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo247[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo248[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo249[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo250[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo251[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo252[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo253[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo254[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo255[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo256[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo257[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo258[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo259[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo260[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo261[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo262[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo263[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo264[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo265[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo266[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };

extern const MCInstrDesc MipsInsts[] = {
  { 0,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #0 = PHI
  { 1,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1 = INLINEASM
  { 2,	1,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #2 = CFI_INSTRUCTION
  { 3,	1,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #3 = EH_LABEL
  { 4,	1,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #4 = GC_LABEL
  { 5,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #5 = KILL
  { 6,	3,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo3,0,nullptr },  // Inst #6 = EXTRACT_SUBREG
  { 7,	4,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo4,0,nullptr },  // Inst #7 = INSERT_SUBREG
  { 8,	1,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #8 = IMPLICIT_DEF
  { 9,	4,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo6,0,nullptr },  // Inst #9 = SUBREG_TO_REG
  { 10,	3,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo3,0,nullptr },  // Inst #10 = COPY_TO_REGCLASS
  { 11,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #11 = DBG_VALUE
  { 12,	1,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #12 = REG_SEQUENCE
  { 13,	2,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7,0,nullptr },  // Inst #13 = COPY
  { 14,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #14 = BUNDLE
  { 15,	1,	0,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #15 = LIFETIME_START
  { 16,	1,	0,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #16 = LIFETIME_END
  { 17,	2,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Call)|(1<<MCID::MayLoad)|(1<<MCID::UsesCustomInserter)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8,0,nullptr },  // Inst #17 = STACKMAP
  { 18,	6,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Call)|(1<<MCID::MayLoad)|(1<<MCID::UsesCustomInserter)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo9,0,nullptr },  // Inst #18 = PATCHPOINT
  { 19,	1,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo10,0,nullptr },  // Inst #19 = LOAD_STACK_GUARD
  { 20,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo11,0,nullptr },  // Inst #20 = ABSQ_S_PH
  { 21,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo11,0,nullptr },  // Inst #21 = ABSQ_S_QB
  { 22,	2,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo12,0,nullptr },  // Inst #22 = ABSQ_S_W
  { 23,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #23 = ADD
  { 24,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #24 = ADDIUPC
  { 25,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #25 = ADDQH_PH
  { 26,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #26 = ADDQH_R_PH
  { 27,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #27 = ADDQH_R_W
  { 28,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #28 = ADDQH_W
  { 29,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, ImplicitList1, OperandInfo15,0,nullptr },  // Inst #29 = ADDQ_PH
  { 30,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, ImplicitList1, OperandInfo15,0,nullptr },  // Inst #30 = ADDQ_S_PH
  { 31,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo13,0,nullptr },  // Inst #31 = ADDQ_S_W
  { 32,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList2, OperandInfo13,0,nullptr },  // Inst #32 = ADDSC
  { 33,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #33 = ADDS_A_B
  { 34,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #34 = ADDS_A_D
  { 35,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #35 = ADDS_A_H
  { 36,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #36 = ADDS_A_W
  { 37,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #37 = ADDS_S_B
  { 38,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #38 = ADDS_S_D
  { 39,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #39 = ADDS_S_H
  { 40,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #40 = ADDS_S_W
  { 41,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #41 = ADDS_U_B
  { 42,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #42 = ADDS_U_D
  { 43,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #43 = ADDS_U_H
  { 44,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #44 = ADDS_U_W
  { 45,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #45 = ADDUH_QB
  { 46,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #46 = ADDUH_R_QB
  { 47,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo15,0,nullptr },  // Inst #47 = ADDU_PH
  { 48,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, ImplicitList1, OperandInfo15,0,nullptr },  // Inst #48 = ADDU_QB
  { 49,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo15,0,nullptr },  // Inst #49 = ADDU_S_PH
  { 50,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, ImplicitList1, OperandInfo15,0,nullptr },  // Inst #50 = ADDU_S_QB
  { 51,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #51 = ADDVI_B
  { 52,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #52 = ADDVI_D
  { 53,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #53 = ADDVI_H
  { 54,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #54 = ADDVI_W
  { 55,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #55 = ADDV_B
  { 56,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #56 = ADDV_D
  { 57,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #57 = ADDV_H
  { 58,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #58 = ADDV_W
  { 59,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList2, ImplicitList1, OperandInfo13,0,nullptr },  // Inst #59 = ADDWC
  { 60,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #60 = ADD_A_B
  { 61,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #61 = ADD_A_D
  { 62,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #62 = ADD_A_H
  { 63,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #63 = ADD_A_W
  { 64,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #64 = ADD_MM
  { 65,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #65 = ADDi
  { 66,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #66 = ADDi_MM
  { 67,	3,	1,	1,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #67 = ADDiu
  { 68,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #68 = ADDiu_MM
  { 69,	3,	1,	2,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #69 = ADDu
  { 70,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #70 = ADDu_MM
  { 71,	1,	0,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo2,0,nullptr },  // Inst #71 = ADJCALLSTACKDOWN
  { 72,	2,	0,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo8,0,nullptr },  // Inst #72 = ADJCALLSTACKUP
  { 73,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #73 = ALIGN
  { 74,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #74 = ALUIPC
  { 75,	3,	1,	4,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #75 = AND
  { 76,	3,	1,	4,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #76 = AND64
  { 77,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #77 = ANDI_B
  { 78,	3,	1,	4,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #78 = AND_MM
  { 79,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #79 = AND_V
  { 80,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #80 = AND_V_D_PSEUDO
  { 81,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #81 = AND_V_H_PSEUDO
  { 82,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #82 = AND_V_W_PSEUDO
  { 83,	3,	1,	5,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #83 = ANDi
  { 84,	3,	1,	4,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #84 = ANDi64
  { 85,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #85 = ANDi_MM
  { 86,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #86 = APPEND
  { 87,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #87 = ASUB_S_B
  { 88,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #88 = ASUB_S_D
  { 89,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #89 = ASUB_S_H
  { 90,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #90 = ASUB_S_W
  { 91,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #91 = ASUB_U_B
  { 92,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #92 = ASUB_U_D
  { 93,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #93 = ASUB_U_H
  { 94,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #94 = ASUB_U_W
  { 95,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #95 = ATOMIC_CMP_SWAP_I16
  { 96,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #96 = ATOMIC_CMP_SWAP_I32
  { 97,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo30,0,nullptr },  // Inst #97 = ATOMIC_CMP_SWAP_I64
  { 98,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo29,0,nullptr },  // Inst #98 = ATOMIC_CMP_SWAP_I8
  { 99,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #99 = ATOMIC_LOAD_ADD_I16
  { 100,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #100 = ATOMIC_LOAD_ADD_I32
  { 101,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #101 = ATOMIC_LOAD_ADD_I64
  { 102,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #102 = ATOMIC_LOAD_ADD_I8
  { 103,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #103 = ATOMIC_LOAD_AND_I16
  { 104,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #104 = ATOMIC_LOAD_AND_I32
  { 105,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #105 = ATOMIC_LOAD_AND_I64
  { 106,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #106 = ATOMIC_LOAD_AND_I8
  { 107,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #107 = ATOMIC_LOAD_NAND_I16
  { 108,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #108 = ATOMIC_LOAD_NAND_I32
  { 109,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #109 = ATOMIC_LOAD_NAND_I64
  { 110,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #110 = ATOMIC_LOAD_NAND_I8
  { 111,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #111 = ATOMIC_LOAD_OR_I16
  { 112,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #112 = ATOMIC_LOAD_OR_I32
  { 113,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #113 = ATOMIC_LOAD_OR_I64
  { 114,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #114 = ATOMIC_LOAD_OR_I8
  { 115,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #115 = ATOMIC_LOAD_SUB_I16
  { 116,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #116 = ATOMIC_LOAD_SUB_I32
  { 117,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #117 = ATOMIC_LOAD_SUB_I64
  { 118,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #118 = ATOMIC_LOAD_SUB_I8
  { 119,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #119 = ATOMIC_LOAD_XOR_I16
  { 120,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #120 = ATOMIC_LOAD_XOR_I32
  { 121,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #121 = ATOMIC_LOAD_XOR_I64
  { 122,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #122 = ATOMIC_LOAD_XOR_I8
  { 123,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #123 = ATOMIC_SWAP_I16
  { 124,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #124 = ATOMIC_SWAP_I32
  { 125,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo32,0,nullptr },  // Inst #125 = ATOMIC_SWAP_I64
  { 126,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo31,0,nullptr },  // Inst #126 = ATOMIC_SWAP_I8
  { 127,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #127 = AUI
  { 128,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #128 = AUIPC
  { 129,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #129 = AVER_S_B
  { 130,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #130 = AVER_S_D
  { 131,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #131 = AVER_S_H
  { 132,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #132 = AVER_S_W
  { 133,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #133 = AVER_U_B
  { 134,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #134 = AVER_U_D
  { 135,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #135 = AVER_U_H
  { 136,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #136 = AVER_U_W
  { 137,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #137 = AVE_S_B
  { 138,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #138 = AVE_S_D
  { 139,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #139 = AVE_S_H
  { 140,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #140 = AVE_S_W
  { 141,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #141 = AVE_U_B
  { 142,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #142 = AVE_U_D
  { 143,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #143 = AVE_U_H
  { 144,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #144 = AVE_U_W
  { 145,	2,	1,	6,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #145 = AddiuRxImmX16
  { 146,	2,	1,	6,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #146 = AddiuRxPcImmX16
  { 147,	3,	1,	6,	2,	0|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo34,0,nullptr },  // Inst #147 = AddiuRxRxImm16
  { 148,	3,	1,	6,	4,	0|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo34,0,nullptr },  // Inst #148 = AddiuRxRxImmX16
  { 149,	3,	1,	6,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo35,0,nullptr },  // Inst #149 = AddiuRxRyOffMemX16
  { 150,	1,	0,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo5,0,nullptr },  // Inst #150 = AddiuSpImm16
  { 151,	1,	0,	6,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo5,0,nullptr },  // Inst #151 = AddiuSpImmX16
  { 152,	3,	1,	6,	2,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo36,0,nullptr },  // Inst #152 = AdduRxRyRz16
  { 153,	3,	1,	6,	2,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #153 = AndRxRxRy16
  { 154,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x0ULL, nullptr, ImplicitList4, OperandInfo38,0,nullptr },  // Inst #154 = B
  { 155,	3,	1,	8,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #155 = BADDu
  { 156,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo38,0,nullptr },  // Inst #156 = BAL
  { 157,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo38,0,nullptr },  // Inst #157 = BALC
  { 158,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #158 = BALIGN
  { 159,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo38,0,nullptr },  // Inst #159 = BAL_BR
  { 160,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo38,0,nullptr },  // Inst #160 = BC
  { 161,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo39,0,nullptr },  // Inst #161 = BC1EQZ
  { 162,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x5ULL, nullptr, ImplicitList4, OperandInfo40,0,nullptr },  // Inst #162 = BC1F
  { 163,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, ImplicitList4, OperandInfo40,0,nullptr },  // Inst #163 = BC1F_MM
  { 164,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo39,0,nullptr },  // Inst #164 = BC1NEZ
  { 165,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x5ULL, nullptr, ImplicitList4, OperandInfo40,0,nullptr },  // Inst #165 = BC1T
  { 166,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, ImplicitList4, OperandInfo40,0,nullptr },  // Inst #166 = BC1T_MM
  { 167,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo41,0,nullptr },  // Inst #167 = BC2EQZ
  { 168,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo41,0,nullptr },  // Inst #168 = BC2NEZ
  { 169,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #169 = BCLRI_B
  { 170,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #170 = BCLRI_D
  { 171,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #171 = BCLRI_H
  { 172,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #172 = BCLRI_W
  { 173,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #173 = BCLR_B
  { 174,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #174 = BCLR_D
  { 175,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #175 = BCLR_H
  { 176,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #176 = BCLR_W
  { 177,	3,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo42,0,nullptr },  // Inst #177 = BEQ
  { 178,	3,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo43,0,nullptr },  // Inst #178 = BEQ64
  { 179,	3,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo42,0,nullptr },  // Inst #179 = BEQC
  { 180,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo44,0,nullptr },  // Inst #180 = BEQZALC
  { 181,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo44,0,nullptr },  // Inst #181 = BEQZC
  { 182,	3,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo42,0,nullptr },  // Inst #182 = BEQ_MM
  { 183,	3,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo42,0,nullptr },  // Inst #183 = BGEC
  { 184,	3,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo42,0,nullptr },  // Inst #184 = BGEUC
  { 185,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo44,0,nullptr },  // Inst #185 = BGEZ
  { 186,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo45,0,nullptr },  // Inst #186 = BGEZ64
  { 187,	2,	0,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo44,0,nullptr },  // Inst #187 = BGEZAL
  { 188,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo44,0,nullptr },  // Inst #188 = BGEZALC
  { 189,	2,	0,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo44,0,nullptr },  // Inst #189 = BGEZAL_MM
  { 190,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo44,0,nullptr },  // Inst #190 = BGEZC
  { 191,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo44,0,nullptr },  // Inst #191 = BGEZ_MM
  { 192,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo44,0,nullptr },  // Inst #192 = BGTZ
  { 193,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo45,0,nullptr },  // Inst #193 = BGTZ64
  { 194,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo44,0,nullptr },  // Inst #194 = BGTZALC
  { 195,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo44,0,nullptr },  // Inst #195 = BGTZC
  { 196,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo44,0,nullptr },  // Inst #196 = BGTZ_MM
  { 197,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #197 = BINSLI_B
  { 198,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo47,0,nullptr },  // Inst #198 = BINSLI_D
  { 199,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo48,0,nullptr },  // Inst #199 = BINSLI_H
  { 200,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo49,0,nullptr },  // Inst #200 = BINSLI_W
  { 201,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo50,0,nullptr },  // Inst #201 = BINSL_B
  { 202,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #202 = BINSL_D
  { 203,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #203 = BINSL_H
  { 204,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo53,0,nullptr },  // Inst #204 = BINSL_W
  { 205,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #205 = BINSRI_B
  { 206,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo47,0,nullptr },  // Inst #206 = BINSRI_D
  { 207,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo48,0,nullptr },  // Inst #207 = BINSRI_H
  { 208,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo49,0,nullptr },  // Inst #208 = BINSRI_W
  { 209,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo50,0,nullptr },  // Inst #209 = BINSR_B
  { 210,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #210 = BINSR_D
  { 211,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #211 = BINSR_H
  { 212,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo53,0,nullptr },  // Inst #212 = BINSR_W
  { 213,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #213 = BITREV
  { 214,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #214 = BITSWAP
  { 215,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo44,0,nullptr },  // Inst #215 = BLEZ
  { 216,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo45,0,nullptr },  // Inst #216 = BLEZ64
  { 217,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo44,0,nullptr },  // Inst #217 = BLEZALC
  { 218,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo44,0,nullptr },  // Inst #218 = BLEZC
  { 219,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo44,0,nullptr },  // Inst #219 = BLEZ_MM
  { 220,	3,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo42,0,nullptr },  // Inst #220 = BLTC
  { 221,	3,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo42,0,nullptr },  // Inst #221 = BLTUC
  { 222,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo44,0,nullptr },  // Inst #222 = BLTZ
  { 223,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo45,0,nullptr },  // Inst #223 = BLTZ64
  { 224,	2,	0,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo44,0,nullptr },  // Inst #224 = BLTZAL
  { 225,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo44,0,nullptr },  // Inst #225 = BLTZALC
  { 226,	2,	0,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo44,0,nullptr },  // Inst #226 = BLTZAL_MM
  { 227,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo44,0,nullptr },  // Inst #227 = BLTZC
  { 228,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo44,0,nullptr },  // Inst #228 = BLTZ_MM
  { 229,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #229 = BMNZI_B
  { 230,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo50,0,nullptr },  // Inst #230 = BMNZ_V
  { 231,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #231 = BMZI_B
  { 232,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo50,0,nullptr },  // Inst #232 = BMZ_V
  { 233,	3,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo42,0,nullptr },  // Inst #233 = BNE
  { 234,	3,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo43,0,nullptr },  // Inst #234 = BNE64
  { 235,	3,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo42,0,nullptr },  // Inst #235 = BNEC
  { 236,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #236 = BNEGI_B
  { 237,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #237 = BNEGI_D
  { 238,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #238 = BNEGI_H
  { 239,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #239 = BNEGI_W
  { 240,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #240 = BNEG_B
  { 241,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #241 = BNEG_D
  { 242,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #242 = BNEG_H
  { 243,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #243 = BNEG_W
  { 244,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo44,0,nullptr },  // Inst #244 = BNEZALC
  { 245,	2,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo44,0,nullptr },  // Inst #245 = BNEZC
  { 246,	3,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo42,0,nullptr },  // Inst #246 = BNE_MM
  { 247,	3,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo42,0,nullptr },  // Inst #247 = BNVC
  { 248,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo54,0,nullptr },  // Inst #248 = BNZ_B
  { 249,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo55,0,nullptr },  // Inst #249 = BNZ_D
  { 250,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo56,0,nullptr },  // Inst #250 = BNZ_H
  { 251,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo54,0,nullptr },  // Inst #251 = BNZ_V
  { 252,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo57,0,nullptr },  // Inst #252 = BNZ_W
  { 253,	3,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo42,0,nullptr },  // Inst #253 = BOVC
  { 254,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo38,0,nullptr },  // Inst #254 = BPOSGE32
  { 255,	1,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayLoad)|(1<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList6, nullptr, OperandInfo58,0,nullptr },  // Inst #255 = BPOSGE32_PSEUDO
  { 256,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo7,0,nullptr },  // Inst #256 = BREAK
  { 257,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo7,0,nullptr },  // Inst #257 = BREAK_MM
  { 258,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #258 = BSELI_B
  { 259,	4,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #259 = BSEL_D_PSEUDO
  { 260,	4,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #260 = BSEL_FD_PSEUDO
  { 261,	4,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo53,0,nullptr },  // Inst #261 = BSEL_FW_PSEUDO
  { 262,	4,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #262 = BSEL_H_PSEUDO
  { 263,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo50,0,nullptr },  // Inst #263 = BSEL_V
  { 264,	4,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo53,0,nullptr },  // Inst #264 = BSEL_W_PSEUDO
  { 265,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #265 = BSETI_B
  { 266,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #266 = BSETI_D
  { 267,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #267 = BSETI_H
  { 268,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #268 = BSETI_W
  { 269,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #269 = BSET_B
  { 270,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #270 = BSET_D
  { 271,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #271 = BSET_H
  { 272,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #272 = BSET_W
  { 273,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo54,0,nullptr },  // Inst #273 = BZ_B
  { 274,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo55,0,nullptr },  // Inst #274 = BZ_D
  { 275,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo56,0,nullptr },  // Inst #275 = BZ_H
  { 276,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo54,0,nullptr },  // Inst #276 = BZ_V
  { 277,	2,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo57,0,nullptr },  // Inst #277 = BZ_W
  { 278,	2,	0,	6,	2,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #278 = BeqzRxImm16
  { 279,	2,	0,	6,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #279 = BeqzRxImmX16
  { 280,	1,	0,	6,	2,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo38,0,nullptr },  // Inst #280 = Bimm16
  { 281,	1,	0,	6,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo38,0,nullptr },  // Inst #281 = BimmX16
  { 282,	2,	0,	6,	2,	0|(1<<MCID::Branch)|(1<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #282 = BnezRxImm16
  { 283,	2,	0,	6,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo59,0,nullptr },  // Inst #283 = BnezRxImmX16
  { 284,	0,	0,	0,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #284 = Break16
  { 285,	1,	0,	6,	2,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, nullptr, OperandInfo5,0,nullptr },  // Inst #285 = Bteqz16
  { 286,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo60,0,nullptr },  // Inst #286 = BteqzT8CmpX16
  { 287,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo61,0,nullptr },  // Inst #287 = BteqzT8CmpiX16
  { 288,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo60,0,nullptr },  // Inst #288 = BteqzT8SltX16
  { 289,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo61,0,nullptr },  // Inst #289 = BteqzT8SltiX16
  { 290,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo61,0,nullptr },  // Inst #290 = BteqzT8SltiuX16
  { 291,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo60,0,nullptr },  // Inst #291 = BteqzT8SltuX16
  { 292,	1,	0,	6,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, nullptr, OperandInfo5,0,nullptr },  // Inst #292 = BteqzX16
  { 293,	1,	0,	6,	2,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, nullptr, OperandInfo5,0,nullptr },  // Inst #293 = Btnez16
  { 294,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo60,0,nullptr },  // Inst #294 = BtnezT8CmpX16
  { 295,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo61,0,nullptr },  // Inst #295 = BtnezT8CmpiX16
  { 296,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo60,0,nullptr },  // Inst #296 = BtnezT8SltX16
  { 297,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo61,0,nullptr },  // Inst #297 = BtnezT8SltiX16
  { 298,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo61,0,nullptr },  // Inst #298 = BtnezT8SltiuX16
  { 299,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo60,0,nullptr },  // Inst #299 = BtnezT8SltuX16
  { 300,	1,	0,	6,	4,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, nullptr, OperandInfo5,0,nullptr },  // Inst #300 = BtnezX16
  { 301,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo62,0,nullptr },  // Inst #301 = BuildPairF64
  { 302,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo63,0,nullptr },  // Inst #302 = BuildPairF64_64
  { 303,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #303 = CACHE
  { 304,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #304 = CACHE_R6
  { 305,	2,	1,	9,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #305 = CEIL_L_D64
  { 306,	2,	1,	9,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #306 = CEIL_L_S
  { 307,	2,	1,	9,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo67,0,nullptr },  // Inst #307 = CEIL_W_D32
  { 308,	2,	1,	9,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #308 = CEIL_W_D64
  { 309,	2,	1,	9,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo67,0,nullptr },  // Inst #309 = CEIL_W_MM
  { 310,	2,	1,	9,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #310 = CEIL_W_S
  { 311,	2,	1,	9,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #311 = CEIL_W_S_MM
  { 312,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #312 = CEQI_B
  { 313,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #313 = CEQI_D
  { 314,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #314 = CEQI_H
  { 315,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #315 = CEQI_W
  { 316,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #316 = CEQ_B
  { 317,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #317 = CEQ_D
  { 318,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #318 = CEQ_H
  { 319,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #319 = CEQ_W
  { 320,	2,	1,	10,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo70,0,nullptr },  // Inst #320 = CFC1
  { 321,	2,	1,	10,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo70,0,nullptr },  // Inst #321 = CFC1_MM
  { 322,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo71,0,nullptr },  // Inst #322 = CFCMSA
  { 323,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo72,0,nullptr },  // Inst #323 = CINS
  { 324,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo72,0,nullptr },  // Inst #324 = CINS32
  { 325,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #325 = CLASS_D
  { 326,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #326 = CLASS_S
  { 327,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #327 = CLEI_S_B
  { 328,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #328 = CLEI_S_D
  { 329,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #329 = CLEI_S_H
  { 330,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #330 = CLEI_S_W
  { 331,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #331 = CLEI_U_B
  { 332,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #332 = CLEI_U_D
  { 333,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #333 = CLEI_U_H
  { 334,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #334 = CLEI_U_W
  { 335,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #335 = CLE_S_B
  { 336,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #336 = CLE_S_D
  { 337,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #337 = CLE_S_H
  { 338,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #338 = CLE_S_W
  { 339,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #339 = CLE_U_B
  { 340,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #340 = CLE_U_D
  { 341,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #341 = CLE_U_H
  { 342,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #342 = CLE_U_W
  { 343,	2,	1,	11,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #343 = CLO
  { 344,	2,	1,	11,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #344 = CLO_MM
  { 345,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #345 = CLO_R6
  { 346,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #346 = CLTI_S_B
  { 347,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #347 = CLTI_S_D
  { 348,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #348 = CLTI_S_H
  { 349,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #349 = CLTI_S_W
  { 350,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #350 = CLTI_U_B
  { 351,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #351 = CLTI_U_D
  { 352,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #352 = CLTI_U_H
  { 353,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #353 = CLTI_U_W
  { 354,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #354 = CLT_S_B
  { 355,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #355 = CLT_S_D
  { 356,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #356 = CLT_S_H
  { 357,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #357 = CLT_S_W
  { 358,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #358 = CLT_U_B
  { 359,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #359 = CLT_U_D
  { 360,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #360 = CLT_U_H
  { 361,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #361 = CLT_U_W
  { 362,	2,	1,	12,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #362 = CLZ
  { 363,	2,	1,	12,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #363 = CLZ_MM
  { 364,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #364 = CLZ_R6
  { 365,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo73,0,nullptr },  // Inst #365 = CMPGDU_EQ_QB
  { 366,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo73,0,nullptr },  // Inst #366 = CMPGDU_LE_QB
  { 367,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo73,0,nullptr },  // Inst #367 = CMPGDU_LT_QB
  { 368,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo73,0,nullptr },  // Inst #368 = CMPGU_EQ_QB
  { 369,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo73,0,nullptr },  // Inst #369 = CMPGU_LE_QB
  { 370,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo73,0,nullptr },  // Inst #370 = CMPGU_LT_QB
  { 371,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo11,0,nullptr },  // Inst #371 = CMPU_EQ_QB
  { 372,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo11,0,nullptr },  // Inst #372 = CMPU_LE_QB
  { 373,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo11,0,nullptr },  // Inst #373 = CMPU_LT_QB
  { 374,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #374 = CMP_EQ_D
  { 375,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo11,0,nullptr },  // Inst #375 = CMP_EQ_PH
  { 376,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo75,0,nullptr },  // Inst #376 = CMP_EQ_S
  { 377,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #377 = CMP_F_D
  { 378,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo75,0,nullptr },  // Inst #378 = CMP_F_S
  { 379,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #379 = CMP_LE_D
  { 380,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo11,0,nullptr },  // Inst #380 = CMP_LE_PH
  { 381,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo75,0,nullptr },  // Inst #381 = CMP_LE_S
  { 382,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #382 = CMP_LT_D
  { 383,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo11,0,nullptr },  // Inst #383 = CMP_LT_PH
  { 384,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo75,0,nullptr },  // Inst #384 = CMP_LT_S
  { 385,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #385 = CMP_SAF_D
  { 386,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo75,0,nullptr },  // Inst #386 = CMP_SAF_S
  { 387,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #387 = CMP_SEQ_D
  { 388,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo75,0,nullptr },  // Inst #388 = CMP_SEQ_S
  { 389,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #389 = CMP_SLE_D
  { 390,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo75,0,nullptr },  // Inst #390 = CMP_SLE_S
  { 391,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #391 = CMP_SLT_D
  { 392,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo75,0,nullptr },  // Inst #392 = CMP_SLT_S
  { 393,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #393 = CMP_SUEQ_D
  { 394,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo75,0,nullptr },  // Inst #394 = CMP_SUEQ_S
  { 395,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #395 = CMP_SULE_D
  { 396,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo75,0,nullptr },  // Inst #396 = CMP_SULE_S
  { 397,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #397 = CMP_SULT_D
  { 398,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo75,0,nullptr },  // Inst #398 = CMP_SULT_S
  { 399,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #399 = CMP_SUN_D
  { 400,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo75,0,nullptr },  // Inst #400 = CMP_SUN_S
  { 401,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #401 = CMP_UEQ_D
  { 402,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo75,0,nullptr },  // Inst #402 = CMP_UEQ_S
  { 403,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #403 = CMP_ULE_D
  { 404,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo75,0,nullptr },  // Inst #404 = CMP_ULE_S
  { 405,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #405 = CMP_ULT_D
  { 406,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo75,0,nullptr },  // Inst #406 = CMP_ULT_S
  { 407,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo74,0,nullptr },  // Inst #407 = CMP_UN_D
  { 408,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo75,0,nullptr },  // Inst #408 = CMP_UN_S
  { 409,	3,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3,0,nullptr },  // Inst #409 = CONSTPOOL_ENTRY
  { 410,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo76,0,nullptr },  // Inst #410 = COPY_FD_PSEUDO
  { 411,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo77,0,nullptr },  // Inst #411 = COPY_FW_PSEUDO
  { 412,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #412 = COPY_S_B
  { 413,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo79,0,nullptr },  // Inst #413 = COPY_S_D
  { 414,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo80,0,nullptr },  // Inst #414 = COPY_S_H
  { 415,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo81,0,nullptr },  // Inst #415 = COPY_S_W
  { 416,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo78,0,nullptr },  // Inst #416 = COPY_U_B
  { 417,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo79,0,nullptr },  // Inst #417 = COPY_U_D
  { 418,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo80,0,nullptr },  // Inst #418 = COPY_U_H
  { 419,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo81,0,nullptr },  // Inst #419 = COPY_U_W
  { 420,	2,	1,	13,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo82,0,nullptr },  // Inst #420 = CTC1
  { 421,	2,	1,	13,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo82,0,nullptr },  // Inst #421 = CTC1_MM
  { 422,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo83,0,nullptr },  // Inst #422 = CTCMSA
  { 423,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #423 = CVT_D32_S
  { 424,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #424 = CVT_D32_W
  { 425,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #425 = CVT_D32_W_MM
  { 426,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #426 = CVT_D64_L
  { 427,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #427 = CVT_D64_S
  { 428,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #428 = CVT_D64_W
  { 429,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo84,0,nullptr },  // Inst #429 = CVT_D_S_MM
  { 430,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #430 = CVT_L_D64
  { 431,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #431 = CVT_L_D64_MM
  { 432,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #432 = CVT_L_S
  { 433,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #433 = CVT_L_S_MM
  { 434,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo67,0,nullptr },  // Inst #434 = CVT_S_D32
  { 435,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo67,0,nullptr },  // Inst #435 = CVT_S_D32_MM
  { 436,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #436 = CVT_S_D64
  { 437,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #437 = CVT_S_L
  { 438,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #438 = CVT_S_W
  { 439,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #439 = CVT_S_W_MM
  { 440,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo67,0,nullptr },  // Inst #440 = CVT_W_D32
  { 441,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #441 = CVT_W_D64
  { 442,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo67,0,nullptr },  // Inst #442 = CVT_W_MM
  { 443,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #443 = CVT_W_S
  { 444,	2,	1,	14,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #444 = CVT_W_S_MM
  { 445,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo85,0,nullptr },  // Inst #445 = C_EQ_D32
  { 446,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #446 = C_EQ_D64
  { 447,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #447 = C_EQ_S
  { 448,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo85,0,nullptr },  // Inst #448 = C_F_D32
  { 449,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #449 = C_F_D64
  { 450,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #450 = C_F_S
  { 451,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo85,0,nullptr },  // Inst #451 = C_LE_D32
  { 452,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #452 = C_LE_D64
  { 453,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #453 = C_LE_S
  { 454,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo85,0,nullptr },  // Inst #454 = C_LT_D32
  { 455,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #455 = C_LT_D64
  { 456,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #456 = C_LT_S
  { 457,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo85,0,nullptr },  // Inst #457 = C_NGE_D32
  { 458,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #458 = C_NGE_D64
  { 459,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #459 = C_NGE_S
  { 460,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo85,0,nullptr },  // Inst #460 = C_NGLE_D32
  { 461,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #461 = C_NGLE_D64
  { 462,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #462 = C_NGLE_S
  { 463,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo85,0,nullptr },  // Inst #463 = C_NGL_D32
  { 464,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #464 = C_NGL_D64
  { 465,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #465 = C_NGL_S
  { 466,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo85,0,nullptr },  // Inst #466 = C_NGT_D32
  { 467,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #467 = C_NGT_D64
  { 468,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #468 = C_NGT_S
  { 469,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo85,0,nullptr },  // Inst #469 = C_OLE_D32
  { 470,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #470 = C_OLE_D64
  { 471,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #471 = C_OLE_S
  { 472,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo85,0,nullptr },  // Inst #472 = C_OLT_D32
  { 473,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #473 = C_OLT_D64
  { 474,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #474 = C_OLT_S
  { 475,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo85,0,nullptr },  // Inst #475 = C_SEQ_D32
  { 476,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #476 = C_SEQ_D64
  { 477,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #477 = C_SEQ_S
  { 478,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo85,0,nullptr },  // Inst #478 = C_SF_D32
  { 479,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #479 = C_SF_D64
  { 480,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #480 = C_SF_S
  { 481,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo85,0,nullptr },  // Inst #481 = C_UEQ_D32
  { 482,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #482 = C_UEQ_D64
  { 483,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #483 = C_UEQ_S
  { 484,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo85,0,nullptr },  // Inst #484 = C_ULE_D32
  { 485,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #485 = C_ULE_D64
  { 486,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #486 = C_ULE_S
  { 487,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo85,0,nullptr },  // Inst #487 = C_ULT_D32
  { 488,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #488 = C_ULT_D64
  { 489,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #489 = C_ULT_S
  { 490,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo85,0,nullptr },  // Inst #490 = C_UN_D32
  { 491,	2,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #491 = C_UN_D64
  { 492,	2,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #492 = C_UN_S
  { 493,	2,	0,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo86,0,nullptr },  // Inst #493 = CmpRxRy16
  { 494,	2,	0,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo33,0,nullptr },  // Inst #494 = CmpiRxImm16
  { 495,	2,	0,	6,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo33,0,nullptr },  // Inst #495 = CmpiRxImmX16
  { 496,	1,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #496 = Constant32
  { 497,	3,	1,	17,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #497 = DADD
  { 498,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #498 = DADDi
  { 499,	3,	1,	18,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #499 = DADDiu
  { 500,	3,	1,	19,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #500 = DADDu
  { 501,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo87,0,nullptr },  // Inst #501 = DAHI
  { 502,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo88,0,nullptr },  // Inst #502 = DALIGN
  { 503,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo87,0,nullptr },  // Inst #503 = DATI
  { 504,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #504 = DAUI
  { 505,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo89,0,nullptr },  // Inst #505 = DBITSWAP
  { 506,	2,	1,	11,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo89,0,nullptr },  // Inst #506 = DCLO
  { 507,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo89,0,nullptr },  // Inst #507 = DCLO_R6
  { 508,	2,	1,	12,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo89,0,nullptr },  // Inst #508 = DCLZ
  { 509,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo89,0,nullptr },  // Inst #509 = DCLZ_R6
  { 510,	3,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #510 = DDIV
  { 511,	3,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #511 = DDIVU
  { 512,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #512 = DERET
  { 513,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #513 = DERET_MM
  { 514,	4,	1,	0,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo72,0,nullptr },  // Inst #514 = DEXT
  { 515,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo72,0,nullptr },  // Inst #515 = DEXTM
  { 516,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo72,0,nullptr },  // Inst #516 = DEXTU
  { 517,	1,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo58,0,nullptr },  // Inst #517 = DI
  { 518,	5,	1,	0,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo90,0,nullptr },  // Inst #518 = DINS
  { 519,	5,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo90,0,nullptr },  // Inst #519 = DINSM
  { 520,	5,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo90,0,nullptr },  // Inst #520 = DINSU
  { 521,	3,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #521 = DIV
  { 522,	3,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #522 = DIVU
  { 523,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #523 = DIV_S_B
  { 524,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #524 = DIV_S_D
  { 525,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #525 = DIV_S_H
  { 526,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #526 = DIV_S_W
  { 527,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #527 = DIV_U_B
  { 528,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #528 = DIV_U_D
  { 529,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #529 = DIV_U_H
  { 530,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #530 = DIV_U_W
  { 531,	1,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo58,0,nullptr },  // Inst #531 = DI_MM
  { 532,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo88,0,nullptr },  // Inst #532 = DLSA
  { 533,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo88,0,nullptr },  // Inst #533 = DLSA_R6
  { 534,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #534 = DMFC0
  { 535,	2,	1,	20,	4,	0|(1<<MCID::Bitcast), 0x4ULL, nullptr, nullptr, OperandInfo91,0,nullptr },  // Inst #535 = DMFC1
  { 536,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #536 = DMFC2
  { 537,	3,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #537 = DMOD
  { 538,	3,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #538 = DMODU
  { 539,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #539 = DMTC0
  { 540,	2,	1,	21,	4,	0|(1<<MCID::Bitcast), 0x4ULL, nullptr, nullptr, OperandInfo92,0,nullptr },  // Inst #540 = DMTC1
  { 541,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #541 = DMTC2
  { 542,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #542 = DMUH
  { 543,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #543 = DMUHU
  { 544,	3,	1,	22,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, ImplicitList9, OperandInfo26,0,nullptr },  // Inst #544 = DMUL
  { 545,	2,	0,	23,	4,	0|(1<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList10, OperandInfo89,0,nullptr },  // Inst #545 = DMULT
  { 546,	2,	0,	24,	4,	0|(1<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList10, OperandInfo89,0,nullptr },  // Inst #546 = DMULTu
  { 547,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #547 = DMULU
  { 548,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #548 = DMUL_R6
  { 549,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo93,0,nullptr },  // Inst #549 = DOTP_S_D
  { 550,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #550 = DOTP_S_H
  { 551,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo95,0,nullptr },  // Inst #551 = DOTP_S_W
  { 552,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo93,0,nullptr },  // Inst #552 = DOTP_U_D
  { 553,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #553 = DOTP_U_H
  { 554,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo95,0,nullptr },  // Inst #554 = DOTP_U_W
  { 555,	4,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo96,0,nullptr },  // Inst #555 = DPADD_S_D
  { 556,	4,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo97,0,nullptr },  // Inst #556 = DPADD_S_H
  { 557,	4,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #557 = DPADD_S_W
  { 558,	4,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo96,0,nullptr },  // Inst #558 = DPADD_U_D
  { 559,	4,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo97,0,nullptr },  // Inst #559 = DPADD_U_H
  { 560,	4,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #560 = DPADD_U_W
  { 561,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo99,0,nullptr },  // Inst #561 = DPAQX_SA_W_PH
  { 562,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo99,0,nullptr },  // Inst #562 = DPAQX_S_W_PH
  { 563,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo99,0,nullptr },  // Inst #563 = DPAQ_SA_L_W
  { 564,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo99,0,nullptr },  // Inst #564 = DPAQ_S_W_PH
  { 565,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo99,0,nullptr },  // Inst #565 = DPAU_H_QBL
  { 566,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo99,0,nullptr },  // Inst #566 = DPAU_H_QBR
  { 567,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo99,0,nullptr },  // Inst #567 = DPAX_W_PH
  { 568,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo99,0,nullptr },  // Inst #568 = DPA_W_PH
  { 569,	2,	1,	25,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo89,0,nullptr },  // Inst #569 = DPOP
  { 570,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo99,0,nullptr },  // Inst #570 = DPSQX_SA_W_PH
  { 571,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo99,0,nullptr },  // Inst #571 = DPSQX_S_W_PH
  { 572,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo99,0,nullptr },  // Inst #572 = DPSQ_SA_L_W
  { 573,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo99,0,nullptr },  // Inst #573 = DPSQ_S_W_PH
  { 574,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo96,0,nullptr },  // Inst #574 = DPSUB_S_D
  { 575,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo97,0,nullptr },  // Inst #575 = DPSUB_S_H
  { 576,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #576 = DPSUB_S_W
  { 577,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo96,0,nullptr },  // Inst #577 = DPSUB_U_D
  { 578,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo97,0,nullptr },  // Inst #578 = DPSUB_U_H
  { 579,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo98,0,nullptr },  // Inst #579 = DPSUB_U_W
  { 580,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo99,0,nullptr },  // Inst #580 = DPSU_H_QBL
  { 581,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo99,0,nullptr },  // Inst #581 = DPSU_H_QBR
  { 582,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo99,0,nullptr },  // Inst #582 = DPSX_W_PH
  { 583,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo99,0,nullptr },  // Inst #583 = DPS_W_PH
  { 584,	3,	1,	26,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #584 = DROTR
  { 585,	3,	1,	27,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #585 = DROTR32
  { 586,	3,	1,	28,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo100,0,nullptr },  // Inst #586 = DROTRV
  { 587,	2,	1,	0,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo89,0,nullptr },  // Inst #587 = DSBH
  { 588,	2,	0,	29,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList10, OperandInfo89,0,nullptr },  // Inst #588 = DSDIV
  { 589,	2,	1,	0,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo89,0,nullptr },  // Inst #589 = DSHD
  { 590,	3,	1,	30,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #590 = DSLL
  { 591,	3,	1,	31,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #591 = DSLL32
  { 592,	2,	1,	30,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo101,0,nullptr },  // Inst #592 = DSLL64_32
  { 593,	3,	1,	32,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo100,0,nullptr },  // Inst #593 = DSLLV
  { 594,	3,	1,	33,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #594 = DSRA
  { 595,	3,	1,	34,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #595 = DSRA32
  { 596,	3,	1,	35,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo100,0,nullptr },  // Inst #596 = DSRAV
  { 597,	3,	1,	36,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #597 = DSRL
  { 598,	3,	1,	37,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #598 = DSRL32
  { 599,	3,	1,	38,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo100,0,nullptr },  // Inst #599 = DSRLV
  { 600,	3,	1,	39,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #600 = DSUB
  { 601,	3,	1,	40,	4,	0|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #601 = DSUBu
  { 602,	2,	0,	41,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList10, OperandInfo89,0,nullptr },  // Inst #602 = DUDIV
  { 603,	2,	0,	6,	2,	0, 0x0ULL, nullptr, ImplicitList12, OperandInfo86,0,nullptr },  // Inst #603 = DivRxRy16
  { 604,	2,	0,	6,	2,	0, 0x0ULL, nullptr, ImplicitList12, OperandInfo86,0,nullptr },  // Inst #604 = DivuRxRy16
  { 605,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #605 = EHB
  { 606,	1,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo58,0,nullptr },  // Inst #606 = EI
  { 607,	1,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo58,0,nullptr },  // Inst #607 = EI_MM
  { 608,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #608 = ERET
  { 609,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #609 = ERET_MM
  { 610,	4,	1,	0,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo102,0,nullptr },  // Inst #610 = EXT
  { 611,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList13, OperandInfo103,0,nullptr },  // Inst #611 = EXTP
  { 612,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList14, OperandInfo103,0,nullptr },  // Inst #612 = EXTPDP
  { 613,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList14, OperandInfo104,0,nullptr },  // Inst #613 = EXTPDPV
  { 614,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList13, OperandInfo104,0,nullptr },  // Inst #614 = EXTPV
  { 615,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo104,0,nullptr },  // Inst #615 = EXTRV_RS_W
  { 616,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo104,0,nullptr },  // Inst #616 = EXTRV_R_W
  { 617,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo104,0,nullptr },  // Inst #617 = EXTRV_S_H
  { 618,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo104,0,nullptr },  // Inst #618 = EXTRV_W
  { 619,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo103,0,nullptr },  // Inst #619 = EXTR_RS_W
  { 620,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo103,0,nullptr },  // Inst #620 = EXTR_R_W
  { 621,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo103,0,nullptr },  // Inst #621 = EXTR_S_H
  { 622,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo103,0,nullptr },  // Inst #622 = EXTR_W
  { 623,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo72,0,nullptr },  // Inst #623 = EXTS
  { 624,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo72,0,nullptr },  // Inst #624 = EXTS32
  { 625,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo102,0,nullptr },  // Inst #625 = EXT_MM
  { 626,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo105,0,nullptr },  // Inst #626 = ExtractElementF64
  { 627,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo106,0,nullptr },  // Inst #627 = ExtractElementF64_64
  { 628,	2,	1,	0,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo107,0,nullptr },  // Inst #628 = FABS_D
  { 629,	2,	1,	42,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo85,0,nullptr },  // Inst #629 = FABS_D32
  { 630,	2,	1,	42,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #630 = FABS_D64
  { 631,	2,	1,	42,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo85,0,nullptr },  // Inst #631 = FABS_MM
  { 632,	2,	1,	42,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #632 = FABS_S
  { 633,	2,	1,	42,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #633 = FABS_S_MM
  { 634,	2,	1,	0,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #634 = FABS_W
  { 635,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #635 = FADD_D
  { 636,	3,	1,	43,	4,	0|(1<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo109,0,nullptr },  // Inst #636 = FADD_D32
  { 637,	3,	1,	43,	4,	0|(1<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo110,0,nullptr },  // Inst #637 = FADD_D64
  { 638,	3,	1,	43,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo109,0,nullptr },  // Inst #638 = FADD_MM
  { 639,	3,	1,	44,	4,	0|(1<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo111,0,nullptr },  // Inst #639 = FADD_S
  { 640,	3,	1,	44,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo111,0,nullptr },  // Inst #640 = FADD_S_MM
  { 641,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #641 = FADD_W
  { 642,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #642 = FCAF_D
  { 643,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #643 = FCAF_W
  { 644,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #644 = FCEQ_D
  { 645,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #645 = FCEQ_W
  { 646,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo107,0,nullptr },  // Inst #646 = FCLASS_D
  { 647,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #647 = FCLASS_W
  { 648,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #648 = FCLE_D
  { 649,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #649 = FCLE_W
  { 650,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #650 = FCLT_D
  { 651,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #651 = FCLT_W
  { 652,	3,	0,	15,	4,	0, 0x4ULL, nullptr, ImplicitList16, OperandInfo112,0,nullptr },  // Inst #652 = FCMP_D32
  { 653,	3,	0,	15,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, ImplicitList16, OperandInfo112,0,nullptr },  // Inst #653 = FCMP_D32_MM
  { 654,	3,	0,	15,	4,	0, 0x4ULL, nullptr, ImplicitList16, OperandInfo113,0,nullptr },  // Inst #654 = FCMP_D64
  { 655,	3,	0,	16,	4,	0, 0x4ULL, nullptr, ImplicitList16, OperandInfo114,0,nullptr },  // Inst #655 = FCMP_S32
  { 656,	3,	0,	16,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, ImplicitList16, OperandInfo114,0,nullptr },  // Inst #656 = FCMP_S32_MM
  { 657,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #657 = FCNE_D
  { 658,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #658 = FCNE_W
  { 659,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #659 = FCOR_D
  { 660,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #660 = FCOR_W
  { 661,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #661 = FCUEQ_D
  { 662,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #662 = FCUEQ_W
  { 663,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #663 = FCULE_D
  { 664,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #664 = FCULE_W
  { 665,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #665 = FCULT_D
  { 666,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #666 = FCULT_W
  { 667,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #667 = FCUNE_D
  { 668,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #668 = FCUNE_W
  { 669,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #669 = FCUN_D
  { 670,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #670 = FCUN_W
  { 671,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #671 = FDIV_D
  { 672,	3,	1,	45,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo109,0,nullptr },  // Inst #672 = FDIV_D32
  { 673,	3,	1,	45,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo110,0,nullptr },  // Inst #673 = FDIV_D64
  { 674,	3,	1,	45,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo109,0,nullptr },  // Inst #674 = FDIV_MM
  { 675,	3,	1,	46,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo111,0,nullptr },  // Inst #675 = FDIV_S
  { 676,	3,	1,	46,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo111,0,nullptr },  // Inst #676 = FDIV_S_MM
  { 677,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #677 = FDIV_W
  { 678,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo115,0,nullptr },  // Inst #678 = FEXDO_H
  { 679,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #679 = FEXDO_W
  { 680,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #680 = FEXP2_D
  { 681,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo117,0,nullptr },  // Inst #681 = FEXP2_D_1_PSEUDO
  { 682,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #682 = FEXP2_W
  { 683,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo118,0,nullptr },  // Inst #683 = FEXP2_W_1_PSEUDO
  { 684,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo119,0,nullptr },  // Inst #684 = FEXUPL_D
  { 685,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo120,0,nullptr },  // Inst #685 = FEXUPL_W
  { 686,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo119,0,nullptr },  // Inst #686 = FEXUPR_D
  { 687,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo120,0,nullptr },  // Inst #687 = FEXUPR_W
  { 688,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo107,0,nullptr },  // Inst #688 = FFINT_S_D
  { 689,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #689 = FFINT_S_W
  { 690,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo107,0,nullptr },  // Inst #690 = FFINT_U_D
  { 691,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #691 = FFINT_U_W
  { 692,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo119,0,nullptr },  // Inst #692 = FFQL_D
  { 693,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo120,0,nullptr },  // Inst #693 = FFQL_W
  { 694,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo119,0,nullptr },  // Inst #694 = FFQR_D
  { 695,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo120,0,nullptr },  // Inst #695 = FFQR_W
  { 696,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo121,0,nullptr },  // Inst #696 = FILL_B
  { 697,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo122,0,nullptr },  // Inst #697 = FILL_D
  { 698,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo123,0,nullptr },  // Inst #698 = FILL_FD_PSEUDO
  { 699,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo124,0,nullptr },  // Inst #699 = FILL_FW_PSEUDO
  { 700,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo125,0,nullptr },  // Inst #700 = FILL_H
  { 701,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo126,0,nullptr },  // Inst #701 = FILL_W
  { 702,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo107,0,nullptr },  // Inst #702 = FLOG2_D
  { 703,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #703 = FLOG2_W
  { 704,	2,	1,	47,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #704 = FLOOR_L_D64
  { 705,	2,	1,	47,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #705 = FLOOR_L_S
  { 706,	2,	1,	47,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo67,0,nullptr },  // Inst #706 = FLOOR_W_D32
  { 707,	2,	1,	47,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #707 = FLOOR_W_D64
  { 708,	2,	1,	47,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo67,0,nullptr },  // Inst #708 = FLOOR_W_MM
  { 709,	2,	1,	47,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #709 = FLOOR_W_S
  { 710,	2,	1,	47,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #710 = FLOOR_W_S_MM
  { 711,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #711 = FMADD_D
  { 712,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo53,0,nullptr },  // Inst #712 = FMADD_W
  { 713,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #713 = FMAX_A_D
  { 714,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #714 = FMAX_A_W
  { 715,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #715 = FMAX_D
  { 716,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #716 = FMAX_W
  { 717,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #717 = FMIN_A_D
  { 718,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #718 = FMIN_A_W
  { 719,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #719 = FMIN_D
  { 720,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #720 = FMIN_W
  { 721,	2,	1,	48,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo85,0,nullptr },  // Inst #721 = FMOV_D32
  { 722,	2,	1,	48,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo85,0,nullptr },  // Inst #722 = FMOV_D32_MM
  { 723,	2,	1,	48,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #723 = FMOV_D64
  { 724,	2,	1,	49,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #724 = FMOV_S
  { 725,	2,	1,	49,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #725 = FMOV_S_MM
  { 726,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #726 = FMSUB_D
  { 727,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo53,0,nullptr },  // Inst #727 = FMSUB_W
  { 728,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #728 = FMUL_D
  { 729,	3,	1,	50,	4,	0|(1<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo109,0,nullptr },  // Inst #729 = FMUL_D32
  { 730,	3,	1,	50,	4,	0|(1<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo110,0,nullptr },  // Inst #730 = FMUL_D64
  { 731,	3,	1,	50,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo109,0,nullptr },  // Inst #731 = FMUL_MM
  { 732,	3,	1,	51,	4,	0|(1<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo111,0,nullptr },  // Inst #732 = FMUL_S
  { 733,	3,	1,	51,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo111,0,nullptr },  // Inst #733 = FMUL_S_MM
  { 734,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #734 = FMUL_W
  { 735,	2,	1,	52,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo85,0,nullptr },  // Inst #735 = FNEG_D32
  { 736,	2,	1,	52,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #736 = FNEG_D64
  { 737,	2,	1,	52,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo85,0,nullptr },  // Inst #737 = FNEG_MM
  { 738,	2,	1,	52,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #738 = FNEG_S
  { 739,	2,	1,	52,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #739 = FNEG_S_MM
  { 740,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo107,0,nullptr },  // Inst #740 = FRCP_D
  { 741,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #741 = FRCP_W
  { 742,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo107,0,nullptr },  // Inst #742 = FRINT_D
  { 743,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #743 = FRINT_W
  { 744,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo107,0,nullptr },  // Inst #744 = FRSQRT_D
  { 745,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #745 = FRSQRT_W
  { 746,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #746 = FSAF_D
  { 747,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #747 = FSAF_W
  { 748,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #748 = FSEQ_D
  { 749,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #749 = FSEQ_W
  { 750,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #750 = FSLE_D
  { 751,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #751 = FSLE_W
  { 752,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #752 = FSLT_D
  { 753,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #753 = FSLT_W
  { 754,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #754 = FSNE_D
  { 755,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #755 = FSNE_W
  { 756,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #756 = FSOR_D
  { 757,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #757 = FSOR_W
  { 758,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo107,0,nullptr },  // Inst #758 = FSQRT_D
  { 759,	2,	1,	53,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo85,0,nullptr },  // Inst #759 = FSQRT_D32
  { 760,	2,	1,	53,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #760 = FSQRT_D64
  { 761,	2,	1,	53,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo85,0,nullptr },  // Inst #761 = FSQRT_MM
  { 762,	2,	1,	54,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #762 = FSQRT_S
  { 763,	2,	1,	54,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #763 = FSQRT_S_MM
  { 764,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #764 = FSQRT_W
  { 765,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #765 = FSUB_D
  { 766,	3,	1,	55,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo109,0,nullptr },  // Inst #766 = FSUB_D32
  { 767,	3,	1,	55,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo110,0,nullptr },  // Inst #767 = FSUB_D64
  { 768,	3,	1,	55,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo109,0,nullptr },  // Inst #768 = FSUB_MM
  { 769,	3,	1,	56,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo111,0,nullptr },  // Inst #769 = FSUB_S
  { 770,	3,	1,	56,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo111,0,nullptr },  // Inst #770 = FSUB_S_MM
  { 771,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #771 = FSUB_W
  { 772,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #772 = FSUEQ_D
  { 773,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #773 = FSUEQ_W
  { 774,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #774 = FSULE_D
  { 775,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #775 = FSULE_W
  { 776,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #776 = FSULT_D
  { 777,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #777 = FSULT_W
  { 778,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #778 = FSUNE_D
  { 779,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #779 = FSUNE_W
  { 780,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #780 = FSUN_D
  { 781,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #781 = FSUN_W
  { 782,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo107,0,nullptr },  // Inst #782 = FTINT_S_D
  { 783,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #783 = FTINT_S_W
  { 784,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo107,0,nullptr },  // Inst #784 = FTINT_U_D
  { 785,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #785 = FTINT_U_W
  { 786,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo115,0,nullptr },  // Inst #786 = FTQ_H
  { 787,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo116,0,nullptr },  // Inst #787 = FTQ_W
  { 788,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo107,0,nullptr },  // Inst #788 = FTRUNC_S_D
  { 789,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #789 = FTRUNC_S_W
  { 790,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo107,0,nullptr },  // Inst #790 = FTRUNC_U_D
  { 791,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #791 = FTRUNC_U_W
  { 792,	4,	2,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo127,0,nullptr },  // Inst #792 = GotPrologue16
  { 793,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo93,0,nullptr },  // Inst #793 = HADD_S_D
  { 794,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #794 = HADD_S_H
  { 795,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo95,0,nullptr },  // Inst #795 = HADD_S_W
  { 796,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo93,0,nullptr },  // Inst #796 = HADD_U_D
  { 797,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #797 = HADD_U_H
  { 798,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo95,0,nullptr },  // Inst #798 = HADD_U_W
  { 799,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo93,0,nullptr },  // Inst #799 = HSUB_S_D
  { 800,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #800 = HSUB_S_H
  { 801,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo95,0,nullptr },  // Inst #801 = HSUB_S_W
  { 802,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo93,0,nullptr },  // Inst #802 = HSUB_U_D
  { 803,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo94,0,nullptr },  // Inst #803 = HSUB_U_H
  { 804,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo95,0,nullptr },  // Inst #804 = HSUB_U_W
  { 805,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #805 = ILVEV_B
  { 806,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #806 = ILVEV_D
  { 807,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #807 = ILVEV_H
  { 808,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #808 = ILVEV_W
  { 809,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #809 = ILVL_B
  { 810,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #810 = ILVL_D
  { 811,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #811 = ILVL_H
  { 812,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #812 = ILVL_W
  { 813,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #813 = ILVOD_B
  { 814,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #814 = ILVOD_D
  { 815,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #815 = ILVOD_H
  { 816,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #816 = ILVOD_W
  { 817,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #817 = ILVR_B
  { 818,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #818 = ILVR_D
  { 819,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #819 = ILVR_H
  { 820,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #820 = ILVR_W
  { 821,	5,	1,	0,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo128,0,nullptr },  // Inst #821 = INS
  { 822,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo129,0,nullptr },  // Inst #822 = INSERT_B
  { 823,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo130,0,nullptr },  // Inst #823 = INSERT_B_VIDX_PSEUDO
  { 824,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo131,0,nullptr },  // Inst #824 = INSERT_D
  { 825,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo132,0,nullptr },  // Inst #825 = INSERT_D_VIDX_PSEUDO
  { 826,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo133,0,nullptr },  // Inst #826 = INSERT_FD_PSEUDO
  { 827,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo134,0,nullptr },  // Inst #827 = INSERT_FD_VIDX_PSEUDO
  { 828,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo135,0,nullptr },  // Inst #828 = INSERT_FW_PSEUDO
  { 829,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo136,0,nullptr },  // Inst #829 = INSERT_FW_VIDX_PSEUDO
  { 830,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo137,0,nullptr },  // Inst #830 = INSERT_H
  { 831,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo138,0,nullptr },  // Inst #831 = INSERT_H_VIDX_PSEUDO
  { 832,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo139,0,nullptr },  // Inst #832 = INSERT_W
  { 833,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo140,0,nullptr },  // Inst #833 = INSERT_W_VIDX_PSEUDO
  { 834,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, ImplicitList17, nullptr, OperandInfo141,0,nullptr },  // Inst #834 = INSV
  { 835,	5,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo142,0,nullptr },  // Inst #835 = INSVE_B
  { 836,	5,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo143,0,nullptr },  // Inst #836 = INSVE_D
  { 837,	5,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo144,0,nullptr },  // Inst #837 = INSVE_H
  { 838,	5,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo145,0,nullptr },  // Inst #838 = INSVE_W
  { 839,	5,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo128,0,nullptr },  // Inst #839 = INS_MM
  { 840,	1,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x3ULL, nullptr, ImplicitList4, OperandInfo5,0,nullptr },  // Inst #840 = J
  { 841,	1,	0,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call), 0x3ULL, nullptr, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #841 = JAL
  { 842,	2,	1,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList5, OperandInfo12,0,nullptr },  // Inst #842 = JALR
  { 843,	1,	0,	7,	2,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call), 0x0ULL, nullptr, ImplicitList5, OperandInfo58,0,nullptr },  // Inst #843 = JALR16_MM
  { 844,	2,	1,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList5, OperandInfo89,0,nullptr },  // Inst #844 = JALR64
  { 845,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::DelaySlot)|(1<<MCID::Call), 0x0ULL, nullptr, ImplicitList5, OperandInfo146,0,nullptr },  // Inst #845 = JALR64Pseudo
  { 846,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::DelaySlot)|(1<<MCID::Call), 0x0ULL, nullptr, ImplicitList5, OperandInfo58,0,nullptr },  // Inst #846 = JALRPseudo
  { 847,	2,	1,	0,	4,	0|(1<<MCID::IndirectBranch)|(1<<MCID::DelaySlot)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #847 = JALR_HB
  { 848,	2,	1,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList5, OperandInfo12,0,nullptr },  // Inst #848 = JALR_MM
  { 849,	1,	0,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call), 0x3ULL, nullptr, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #849 = JALX
  { 850,	1,	0,	7,	4,	0|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #850 = JAL_MM
  { 851,	2,	0,	0,	4,	0|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo14,0,nullptr },  // Inst #851 = JIALC
  { 852,	2,	0,	0,	4,	0|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo14,0,nullptr },  // Inst #852 = JIC
  { 853,	1,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo58,0,nullptr },  // Inst #853 = JR
  { 854,	1,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo146,0,nullptr },  // Inst #854 = JR64
  { 855,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, OperandInfo58,0,nullptr },  // Inst #855 = JR_HB
  { 856,	1,	0,	0,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo58,0,nullptr },  // Inst #856 = JR_HB_R6
  { 857,	1,	0,	7,	4,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo58,0,nullptr },  // Inst #857 = JR_MM
  { 858,	1,	0,	7,	4,	0|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, ImplicitList4, OperandInfo5,0,nullptr },  // Inst #858 = J_MM
  { 859,	1,	0,	6,	6,	0|(1<<MCID::Call), 0x0ULL, nullptr, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #859 = Jal16
  { 860,	1,	0,	6,	6,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo5,0,nullptr },  // Inst #860 = JalB16
  { 861,	0,	0,	6,	2,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #861 = JrRa16
  { 862,	0,	0,	6,	2,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #862 = JrcRa16
  { 863,	1,	0,	6,	2,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo147,0,nullptr },  // Inst #863 = JrcRx16
  { 864,	1,	0,	7,	2,	0|(1<<MCID::Call), 0x0ULL, nullptr, ImplicitList5, OperandInfo147,0,nullptr },  // Inst #864 = JumpLinkReg16
  { 865,	3,	1,	57,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo148,0,nullptr },  // Inst #865 = LB
  { 866,	3,	1,	57,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo149,0,nullptr },  // Inst #866 = LB64
  { 867,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo150,0,nullptr },  // Inst #867 = LBUX
  { 868,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo148,0,nullptr },  // Inst #868 = LB_MM
  { 869,	3,	1,	58,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo148,0,nullptr },  // Inst #869 = LBu
  { 870,	3,	1,	58,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo149,0,nullptr },  // Inst #870 = LBu64
  { 871,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo148,0,nullptr },  // Inst #871 = LBu_MM
  { 872,	3,	1,	59,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo149,0,nullptr },  // Inst #872 = LD
  { 873,	3,	1,	60,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo151,0,nullptr },  // Inst #873 = LDC1
  { 874,	3,	1,	60,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo152,0,nullptr },  // Inst #874 = LDC164
  { 875,	3,	1,	60,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo151,0,nullptr },  // Inst #875 = LDC1_MM
  { 876,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo153,0,nullptr },  // Inst #876 = LDC2
  { 877,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo153,0,nullptr },  // Inst #877 = LDC2_R6
  { 878,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo154,0,nullptr },  // Inst #878 = LDC3
  { 879,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo155,0,nullptr },  // Inst #879 = LDI_B
  { 880,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo156,0,nullptr },  // Inst #880 = LDI_D
  { 881,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo157,0,nullptr },  // Inst #881 = LDI_H
  { 882,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo158,0,nullptr },  // Inst #882 = LDI_W
  { 883,	4,	1,	61,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo159,0,nullptr },  // Inst #883 = LDL
  { 884,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo160,0,nullptr },  // Inst #884 = LDPC
  { 885,	4,	1,	62,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo159,0,nullptr },  // Inst #885 = LDR
  { 886,	3,	1,	63,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo161,0,nullptr },  // Inst #886 = LDXC1
  { 887,	3,	1,	63,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo162,0,nullptr },  // Inst #887 = LDXC164
  { 888,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo163,0,nullptr },  // Inst #888 = LD_B
  { 889,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo164,0,nullptr },  // Inst #889 = LD_D
  { 890,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo165,0,nullptr },  // Inst #890 = LD_H
  { 891,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo166,0,nullptr },  // Inst #891 = LD_W
  { 892,	3,	1,	0,	4,	0, 0x2ULL, nullptr, nullptr, OperandInfo148,0,nullptr },  // Inst #892 = LEA_ADDiu
  { 893,	3,	1,	0,	4,	0, 0x2ULL, nullptr, nullptr, OperandInfo149,0,nullptr },  // Inst #893 = LEA_ADDiu64
  { 894,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo148,0,nullptr },  // Inst #894 = LEA_ADDiu_MM
  { 895,	3,	1,	64,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo148,0,nullptr },  // Inst #895 = LH
  { 896,	3,	1,	64,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo149,0,nullptr },  // Inst #896 = LH64
  { 897,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo150,0,nullptr },  // Inst #897 = LHX
  { 898,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo148,0,nullptr },  // Inst #898 = LH_MM
  { 899,	3,	1,	65,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo148,0,nullptr },  // Inst #899 = LHu
  { 900,	3,	1,	65,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo149,0,nullptr },  // Inst #900 = LHu64
  { 901,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo148,0,nullptr },  // Inst #901 = LHu_MM
  { 902,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo148,0,nullptr },  // Inst #902 = LL
  { 903,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo149,0,nullptr },  // Inst #903 = LLD
  { 904,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo149,0,nullptr },  // Inst #904 = LLD_R6
  { 905,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo167,0,nullptr },  // Inst #905 = LL_MM
  { 906,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo148,0,nullptr },  // Inst #906 = LL_R6
  { 907,	3,	1,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo168,0,nullptr },  // Inst #907 = LOAD_ACC128
  { 908,	3,	1,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo169,0,nullptr },  // Inst #908 = LOAD_ACC64
  { 909,	3,	1,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo170,0,nullptr },  // Inst #909 = LOAD_ACC64DSP
  { 910,	3,	1,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo171,0,nullptr },  // Inst #910 = LOAD_CCOND_DSP
  { 911,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo172,0,nullptr },  // Inst #911 = LONG_BRANCH_ADDiu
  { 912,	4,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo173,0,nullptr },  // Inst #912 = LONG_BRANCH_DADDiu
  { 913,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo174,0,nullptr },  // Inst #913 = LONG_BRANCH_LUi
  { 914,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #914 = LSA
  { 915,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo25,0,nullptr },  // Inst #915 = LSA_R6
  { 916,	3,	1,	66,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo161,0,nullptr },  // Inst #916 = LUXC1
  { 917,	3,	1,	66,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo162,0,nullptr },  // Inst #917 = LUXC164
  { 918,	3,	1,	66,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo161,0,nullptr },  // Inst #918 = LUXC1_MM
  { 919,	2,	1,	67,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #919 = LUi
  { 920,	2,	1,	67,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo160,0,nullptr },  // Inst #920 = LUi64
  { 921,	2,	1,	67,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #921 = LUi_MM
  { 922,	3,	1,	68,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo148,0,nullptr },  // Inst #922 = LW
  { 923,	3,	1,	68,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo149,0,nullptr },  // Inst #923 = LW64
  { 924,	3,	1,	69,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo175,0,nullptr },  // Inst #924 = LWC1
  { 925,	3,	1,	69,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo175,0,nullptr },  // Inst #925 = LWC1_MM
  { 926,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo153,0,nullptr },  // Inst #926 = LWC2
  { 927,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo153,0,nullptr },  // Inst #927 = LWC2_R6
  { 928,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo154,0,nullptr },  // Inst #928 = LWC3
  { 929,	4,	1,	70,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo176,0,nullptr },  // Inst #929 = LWL
  { 930,	4,	1,	70,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo159,0,nullptr },  // Inst #930 = LWL64
  { 931,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo177,0,nullptr },  // Inst #931 = LWL_MM
  { 932,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #932 = LWPC
  { 933,	4,	1,	71,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo176,0,nullptr },  // Inst #933 = LWR
  { 934,	4,	1,	71,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo159,0,nullptr },  // Inst #934 = LWR64
  { 935,	4,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo177,0,nullptr },  // Inst #935 = LWR_MM
  { 936,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #936 = LWUPC
  { 937,	3,	1,	72,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo167,0,nullptr },  // Inst #937 = LWU_MM
  { 938,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo150,0,nullptr },  // Inst #938 = LWX
  { 939,	3,	1,	73,	4,	0|(1<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo178,0,nullptr },  // Inst #939 = LWXC1
  { 940,	3,	1,	73,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo178,0,nullptr },  // Inst #940 = LWXC1_MM
  { 941,	3,	1,	0,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo148,0,nullptr },  // Inst #941 = LW_MM
  { 942,	3,	1,	72,	4,	0|(1<<MCID::FoldableAsLoad)|(1<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo149,0,nullptr },  // Inst #942 = LWu
  { 943,	4,	1,	57,	4,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo179,0,nullptr },  // Inst #943 = LbRxRyOffMemX16
  { 944,	4,	1,	58,	4,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo179,0,nullptr },  // Inst #944 = LbuRxRyOffMemX16
  { 945,	4,	1,	64,	4,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo179,0,nullptr },  // Inst #945 = LhRxRyOffMemX16
  { 946,	4,	1,	65,	4,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo179,0,nullptr },  // Inst #946 = LhuRxRyOffMemX16
  { 947,	2,	1,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #947 = LiRxImm16
  { 948,	2,	1,	6,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #948 = LiRxImmAlignX16
  { 949,	2,	1,	6,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo33,0,nullptr },  // Inst #949 = LiRxImmX16
  { 950,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #950 = LoadAddr32Imm
  { 951,	3,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo148,0,nullptr },  // Inst #951 = LoadAddr32Reg
  { 952,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #952 = LoadImm32Reg
  { 953,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo160,0,nullptr },  // Inst #953 = LoadImm64Reg
  { 954,	3,	1,	3,	2,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo180,0,nullptr },  // Inst #954 = LwConstant32
  { 955,	3,	1,	68,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo181,0,nullptr },  // Inst #955 = LwRxPcTcp16
  { 956,	3,	1,	68,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo181,0,nullptr },  // Inst #956 = LwRxPcTcpX16
  { 957,	4,	1,	68,	4,	0|(1<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo179,0,nullptr },  // Inst #957 = LwRxRyOffMemX16
  { 958,	3,	1,	68,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, nullptr, OperandInfo182,0,nullptr },  // Inst #958 = LwRxSpImmX16
  { 959,	2,	0,	74,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo12,0,nullptr },  // Inst #959 = MADD
  { 960,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo183,0,nullptr },  // Inst #960 = MADDF_D
  { 961,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo184,0,nullptr },  // Inst #961 = MADDF_S
  { 962,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #962 = MADDR_Q_H
  { 963,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo53,0,nullptr },  // Inst #963 = MADDR_Q_W
  { 964,	2,	0,	75,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo12,0,nullptr },  // Inst #964 = MADDU
  { 965,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo99,0,nullptr },  // Inst #965 = MADDU_DSP
  { 966,	2,	0,	75,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo12,0,nullptr },  // Inst #966 = MADDU_MM
  { 967,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo50,0,nullptr },  // Inst #967 = MADDV_B
  { 968,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #968 = MADDV_D
  { 969,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #969 = MADDV_H
  { 970,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo53,0,nullptr },  // Inst #970 = MADDV_W
  { 971,	4,	1,	76,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo185,0,nullptr },  // Inst #971 = MADD_D32
  { 972,	4,	1,	76,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo185,0,nullptr },  // Inst #972 = MADD_D32_MM
  { 973,	4,	1,	76,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo186,0,nullptr },  // Inst #973 = MADD_D64
  { 974,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo99,0,nullptr },  // Inst #974 = MADD_DSP
  { 975,	2,	0,	74,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo12,0,nullptr },  // Inst #975 = MADD_MM
  { 976,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #976 = MADD_Q_H
  { 977,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo53,0,nullptr },  // Inst #977 = MADD_Q_W
  { 978,	4,	1,	77,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #978 = MADD_S
  { 979,	4,	1,	77,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #979 = MADD_S_MM
  { 980,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo99,0,nullptr },  // Inst #980 = MAQ_SA_W_PHL
  { 981,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo99,0,nullptr },  // Inst #981 = MAQ_SA_W_PHR
  { 982,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo99,0,nullptr },  // Inst #982 = MAQ_S_W_PHL
  { 983,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo99,0,nullptr },  // Inst #983 = MAQ_S_W_PHR
  { 984,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo110,0,nullptr },  // Inst #984 = MAXA_D
  { 985,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo111,0,nullptr },  // Inst #985 = MAXA_S
  { 986,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #986 = MAXI_S_B
  { 987,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #987 = MAXI_S_D
  { 988,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #988 = MAXI_S_H
  { 989,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #989 = MAXI_S_W
  { 990,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #990 = MAXI_U_B
  { 991,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #991 = MAXI_U_D
  { 992,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #992 = MAXI_U_H
  { 993,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #993 = MAXI_U_W
  { 994,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #994 = MAX_A_B
  { 995,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #995 = MAX_A_D
  { 996,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #996 = MAX_A_H
  { 997,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #997 = MAX_A_W
  { 998,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo110,0,nullptr },  // Inst #998 = MAX_D
  { 999,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo111,0,nullptr },  // Inst #999 = MAX_S
  { 1000,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1000 = MAX_S_B
  { 1001,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1001 = MAX_S_D
  { 1002,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1002 = MAX_S_H
  { 1003,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1003 = MAX_S_W
  { 1004,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1004 = MAX_U_B
  { 1005,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1005 = MAX_U_D
  { 1006,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1006 = MAX_U_H
  { 1007,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1007 = MAX_U_W
  { 1008,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1008 = MFC0
  { 1009,	2,	1,	78,	4,	0|(1<<MCID::Bitcast), 0x4ULL, nullptr, nullptr, OperandInfo188,0,nullptr },  // Inst #1009 = MFC1
  { 1010,	2,	1,	78,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo188,0,nullptr },  // Inst #1010 = MFC1_MM
  { 1011,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1011 = MFC2
  { 1012,	2,	1,	79,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo189,0,nullptr },  // Inst #1012 = MFHC1_D32
  { 1013,	2,	1,	79,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo190,0,nullptr },  // Inst #1013 = MFHC1_D64
  { 1014,	2,	1,	79,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo191,0,nullptr },  // Inst #1014 = MFHC1_MM
  { 1015,	1,	1,	80,	4,	0, 0x1ULL, ImplicitList18, nullptr, OperandInfo58,0,nullptr },  // Inst #1015 = MFHI
  { 1016,	1,	1,	80,	2,	0, 0x0ULL, ImplicitList18, nullptr, OperandInfo58,0,nullptr },  // Inst #1016 = MFHI16_MM
  { 1017,	1,	1,	80,	4,	0, 0x1ULL, ImplicitList19, nullptr, OperandInfo146,0,nullptr },  // Inst #1017 = MFHI64
  { 1018,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo192,0,nullptr },  // Inst #1018 = MFHI_DSP
  { 1019,	1,	1,	80,	4,	0, 0x1ULL, ImplicitList18, nullptr, OperandInfo58,0,nullptr },  // Inst #1019 = MFHI_MM
  { 1020,	1,	1,	80,	4,	0, 0x1ULL, ImplicitList18, nullptr, OperandInfo58,0,nullptr },  // Inst #1020 = MFLO
  { 1021,	1,	1,	80,	2,	0, 0x0ULL, ImplicitList18, nullptr, OperandInfo58,0,nullptr },  // Inst #1021 = MFLO16_MM
  { 1022,	1,	1,	80,	4,	0, 0x1ULL, ImplicitList19, nullptr, OperandInfo146,0,nullptr },  // Inst #1022 = MFLO64
  { 1023,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo192,0,nullptr },  // Inst #1023 = MFLO_DSP
  { 1024,	1,	1,	80,	4,	0, 0x1ULL, ImplicitList18, nullptr, OperandInfo58,0,nullptr },  // Inst #1024 = MFLO_MM
  { 1025,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo110,0,nullptr },  // Inst #1025 = MINA_D
  { 1026,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo111,0,nullptr },  // Inst #1026 = MINA_S
  { 1027,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1027 = MINI_S_B
  { 1028,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1028 = MINI_S_D
  { 1029,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1029 = MINI_S_H
  { 1030,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1030 = MINI_S_W
  { 1031,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1031 = MINI_U_B
  { 1032,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1032 = MINI_U_D
  { 1033,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1033 = MINI_U_H
  { 1034,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1034 = MINI_U_W
  { 1035,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1035 = MIN_A_B
  { 1036,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1036 = MIN_A_D
  { 1037,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1037 = MIN_A_H
  { 1038,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1038 = MIN_A_W
  { 1039,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo110,0,nullptr },  // Inst #1039 = MIN_D
  { 1040,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo111,0,nullptr },  // Inst #1040 = MIN_S
  { 1041,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1041 = MIN_S_B
  { 1042,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1042 = MIN_S_D
  { 1043,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1043 = MIN_S_H
  { 1044,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1044 = MIN_S_W
  { 1045,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1045 = MIN_U_B
  { 1046,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1046 = MIN_U_D
  { 1047,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1047 = MIN_U_H
  { 1048,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1048 = MIN_U_W
  { 1049,	2,	0,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, ImplicitList20, nullptr, OperandInfo193,0,nullptr },  // Inst #1049 = MIPSeh_return32
  { 1050,	2,	0,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, ImplicitList20, nullptr, OperandInfo194,0,nullptr },  // Inst #1050 = MIPSeh_return64
  { 1051,	3,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1051 = MOD
  { 1052,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1052 = MODSUB
  { 1053,	3,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1053 = MODU
  { 1054,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1054 = MOD_S_B
  { 1055,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1055 = MOD_S_D
  { 1056,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1056 = MOD_S_H
  { 1057,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1057 = MOD_S_W
  { 1058,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1058 = MOD_U_B
  { 1059,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1059 = MOD_U_D
  { 1060,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1060 = MOD_U_H
  { 1061,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1061 = MOD_U_W
  { 1062,	2,	1,	0,	2,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1062 = MOVE16_MM
  { 1063,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo195,0,nullptr },  // Inst #1063 = MOVE_V
  { 1064,	4,	1,	81,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo196,0,nullptr },  // Inst #1064 = MOVF_D32
  { 1065,	4,	1,	81,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo196,0,nullptr },  // Inst #1065 = MOVF_D32_MM
  { 1066,	4,	1,	81,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo197,0,nullptr },  // Inst #1066 = MOVF_D64
  { 1067,	4,	1,	82,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo198,0,nullptr },  // Inst #1067 = MOVF_I
  { 1068,	4,	1,	82,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo199,0,nullptr },  // Inst #1068 = MOVF_I64
  { 1069,	4,	1,	82,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo198,0,nullptr },  // Inst #1069 = MOVF_I_MM
  { 1070,	4,	1,	83,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo200,0,nullptr },  // Inst #1070 = MOVF_S
  { 1071,	4,	1,	83,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo200,0,nullptr },  // Inst #1071 = MOVF_S_MM
  { 1072,	4,	1,	84,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo201,0,nullptr },  // Inst #1072 = MOVN_I64_D64
  { 1073,	4,	1,	85,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo202,0,nullptr },  // Inst #1073 = MOVN_I64_I
  { 1074,	4,	1,	85,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo203,0,nullptr },  // Inst #1074 = MOVN_I64_I64
  { 1075,	4,	1,	86,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo204,0,nullptr },  // Inst #1075 = MOVN_I64_S
  { 1076,	4,	1,	84,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo205,0,nullptr },  // Inst #1076 = MOVN_I_D32
  { 1077,	4,	1,	84,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo205,0,nullptr },  // Inst #1077 = MOVN_I_D32_MM
  { 1078,	4,	1,	84,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo206,0,nullptr },  // Inst #1078 = MOVN_I_D64
  { 1079,	4,	1,	85,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo207,0,nullptr },  // Inst #1079 = MOVN_I_I
  { 1080,	4,	1,	85,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo208,0,nullptr },  // Inst #1080 = MOVN_I_I64
  { 1081,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo207,0,nullptr },  // Inst #1081 = MOVN_I_MM
  { 1082,	4,	1,	86,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo209,0,nullptr },  // Inst #1082 = MOVN_I_S
  { 1083,	4,	1,	86,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo209,0,nullptr },  // Inst #1083 = MOVN_I_S_MM
  { 1084,	4,	1,	87,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo196,0,nullptr },  // Inst #1084 = MOVT_D32
  { 1085,	4,	1,	87,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo196,0,nullptr },  // Inst #1085 = MOVT_D32_MM
  { 1086,	4,	1,	87,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo197,0,nullptr },  // Inst #1086 = MOVT_D64
  { 1087,	4,	1,	88,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo198,0,nullptr },  // Inst #1087 = MOVT_I
  { 1088,	4,	1,	88,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo199,0,nullptr },  // Inst #1088 = MOVT_I64
  { 1089,	4,	1,	88,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo198,0,nullptr },  // Inst #1089 = MOVT_I_MM
  { 1090,	4,	1,	89,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo200,0,nullptr },  // Inst #1090 = MOVT_S
  { 1091,	4,	1,	89,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo200,0,nullptr },  // Inst #1091 = MOVT_S_MM
  { 1092,	4,	1,	90,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo201,0,nullptr },  // Inst #1092 = MOVZ_I64_D64
  { 1093,	4,	1,	91,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo202,0,nullptr },  // Inst #1093 = MOVZ_I64_I
  { 1094,	4,	1,	91,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo203,0,nullptr },  // Inst #1094 = MOVZ_I64_I64
  { 1095,	4,	1,	92,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo204,0,nullptr },  // Inst #1095 = MOVZ_I64_S
  { 1096,	4,	1,	90,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo205,0,nullptr },  // Inst #1096 = MOVZ_I_D32
  { 1097,	4,	1,	90,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo205,0,nullptr },  // Inst #1097 = MOVZ_I_D32_MM
  { 1098,	4,	1,	90,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo206,0,nullptr },  // Inst #1098 = MOVZ_I_D64
  { 1099,	4,	1,	91,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo207,0,nullptr },  // Inst #1099 = MOVZ_I_I
  { 1100,	4,	1,	91,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo208,0,nullptr },  // Inst #1100 = MOVZ_I_I64
  { 1101,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo207,0,nullptr },  // Inst #1101 = MOVZ_I_MM
  { 1102,	4,	1,	92,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo209,0,nullptr },  // Inst #1102 = MOVZ_I_S
  { 1103,	4,	1,	92,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo209,0,nullptr },  // Inst #1103 = MOVZ_I_S_MM
  { 1104,	2,	0,	93,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo12,0,nullptr },  // Inst #1104 = MSUB
  { 1105,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo183,0,nullptr },  // Inst #1105 = MSUBF_D
  { 1106,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo184,0,nullptr },  // Inst #1106 = MSUBF_S
  { 1107,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #1107 = MSUBR_Q_H
  { 1108,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo53,0,nullptr },  // Inst #1108 = MSUBR_Q_W
  { 1109,	2,	0,	94,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo12,0,nullptr },  // Inst #1109 = MSUBU
  { 1110,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo99,0,nullptr },  // Inst #1110 = MSUBU_DSP
  { 1111,	2,	0,	94,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo12,0,nullptr },  // Inst #1111 = MSUBU_MM
  { 1112,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo50,0,nullptr },  // Inst #1112 = MSUBV_B
  { 1113,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #1113 = MSUBV_D
  { 1114,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #1114 = MSUBV_H
  { 1115,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo53,0,nullptr },  // Inst #1115 = MSUBV_W
  { 1116,	4,	1,	95,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo185,0,nullptr },  // Inst #1116 = MSUB_D32
  { 1117,	4,	1,	95,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo185,0,nullptr },  // Inst #1117 = MSUB_D32_MM
  { 1118,	4,	1,	95,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo186,0,nullptr },  // Inst #1118 = MSUB_D64
  { 1119,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo99,0,nullptr },  // Inst #1119 = MSUB_DSP
  { 1120,	2,	0,	93,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo12,0,nullptr },  // Inst #1120 = MSUB_MM
  { 1121,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #1121 = MSUB_Q_H
  { 1122,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo53,0,nullptr },  // Inst #1122 = MSUB_Q_W
  { 1123,	4,	1,	96,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1123 = MSUB_S
  { 1124,	4,	1,	96,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1124 = MSUB_S_MM
  { 1125,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1125 = MTC0
  { 1126,	2,	1,	97,	4,	0|(1<<MCID::Bitcast), 0x4ULL, nullptr, nullptr, OperandInfo210,0,nullptr },  // Inst #1126 = MTC1
  { 1127,	2,	1,	97,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo210,0,nullptr },  // Inst #1127 = MTC1_MM
  { 1128,	3,	3,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1128 = MTC2
  { 1129,	3,	1,	98,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo211,0,nullptr },  // Inst #1129 = MTHC1_D32
  { 1130,	3,	1,	98,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo212,0,nullptr },  // Inst #1130 = MTHC1_D64
  { 1131,	2,	1,	98,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo213,0,nullptr },  // Inst #1131 = MTHC1_MM
  { 1132,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList21, OperandInfo58,0,nullptr },  // Inst #1132 = MTHI
  { 1133,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList22, OperandInfo146,0,nullptr },  // Inst #1133 = MTHI64
  { 1134,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo214,0,nullptr },  // Inst #1134 = MTHI_DSP
  { 1135,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList21, OperandInfo58,0,nullptr },  // Inst #1135 = MTHI_MM
  { 1136,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList6, OperandInfo215,0,nullptr },  // Inst #1136 = MTHLIP
  { 1137,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList23, OperandInfo58,0,nullptr },  // Inst #1137 = MTLO
  { 1138,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList24, OperandInfo146,0,nullptr },  // Inst #1138 = MTLO64
  { 1139,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo216,0,nullptr },  // Inst #1139 = MTLO_DSP
  { 1140,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList23, OperandInfo58,0,nullptr },  // Inst #1140 = MTLO_MM
  { 1141,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList25, OperandInfo146,0,nullptr },  // Inst #1141 = MTM0
  { 1142,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList26, OperandInfo146,0,nullptr },  // Inst #1142 = MTM1
  { 1143,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList27, OperandInfo146,0,nullptr },  // Inst #1143 = MTM2
  { 1144,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList28, OperandInfo146,0,nullptr },  // Inst #1144 = MTP0
  { 1145,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList29, OperandInfo146,0,nullptr },  // Inst #1145 = MTP1
  { 1146,	1,	0,	99,	4,	0, 0x1ULL, nullptr, ImplicitList30, OperandInfo146,0,nullptr },  // Inst #1146 = MTP2
  { 1147,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1147 = MUH
  { 1148,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1148 = MUHU
  { 1149,	3,	1,	100,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, ImplicitList12, OperandInfo13,0,nullptr },  // Inst #1149 = MUL
  { 1150,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo73,0,nullptr },  // Inst #1150 = MULEQ_S_W_PHL
  { 1151,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo73,0,nullptr },  // Inst #1151 = MULEQ_S_W_PHR
  { 1152,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo15,0,nullptr },  // Inst #1152 = MULEU_S_PH_QBL
  { 1153,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo15,0,nullptr },  // Inst #1153 = MULEU_S_PH_QBR
  { 1154,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo15,0,nullptr },  // Inst #1154 = MULQ_RS_PH
  { 1155,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo13,0,nullptr },  // Inst #1155 = MULQ_RS_W
  { 1156,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo15,0,nullptr },  // Inst #1156 = MULQ_S_PH
  { 1157,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo13,0,nullptr },  // Inst #1157 = MULQ_S_W
  { 1158,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1158 = MULR_Q_H
  { 1159,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1159 = MULR_Q_W
  { 1160,	4,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo99,0,nullptr },  // Inst #1160 = MULSAQ_S_W_PH
  { 1161,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo99,0,nullptr },  // Inst #1161 = MULSA_W_PH
  { 1162,	2,	0,	101,	4,	0|(1<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList12, OperandInfo12,0,nullptr },  // Inst #1162 = MULT
  { 1163,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo217,0,nullptr },  // Inst #1163 = MULTU_DSP
  { 1164,	3,	1,	0,	4,	0|(1<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo217,0,nullptr },  // Inst #1164 = MULT_DSP
  { 1165,	2,	0,	101,	4,	0|(1<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList12, OperandInfo12,0,nullptr },  // Inst #1165 = MULT_MM
  { 1166,	2,	0,	102,	4,	0|(1<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList12, OperandInfo12,0,nullptr },  // Inst #1166 = MULTu
  { 1167,	2,	0,	102,	4,	0|(1<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList12, OperandInfo12,0,nullptr },  // Inst #1167 = MULTu_MM
  { 1168,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1168 = MULU
  { 1169,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1169 = MULV_B
  { 1170,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1170 = MULV_D
  { 1171,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1171 = MULV_H
  { 1172,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1172 = MULV_W
  { 1173,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1173 = MUL_MM
  { 1174,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo15,0,nullptr },  // Inst #1174 = MUL_PH
  { 1175,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1175 = MUL_Q_H
  { 1176,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1176 = MUL_Q_W
  { 1177,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1177 = MUL_R6
  { 1178,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo15,0,nullptr },  // Inst #1178 = MUL_S_PH
  { 1179,	1,	1,	6,	2,	0, 0x0ULL, ImplicitList21, nullptr, OperandInfo147,0,nullptr },  // Inst #1179 = Mfhi16
  { 1180,	1,	1,	6,	2,	0, 0x0ULL, ImplicitList23, nullptr, OperandInfo147,0,nullptr },  // Inst #1180 = Mflo16
  { 1181,	2,	1,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo218,0,nullptr },  // Inst #1181 = Move32R16
  { 1182,	2,	1,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo219,0,nullptr },  // Inst #1182 = MoveR3216
  { 1183,	2,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, nullptr, ImplicitList12, OperandInfo86,0,nullptr },  // Inst #1183 = MultRxRy16
  { 1184,	3,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, nullptr, ImplicitList12, OperandInfo36,0,nullptr },  // Inst #1184 = MultRxRyRz16
  { 1185,	2,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, nullptr, ImplicitList12, OperandInfo86,0,nullptr },  // Inst #1185 = MultuRxRy16
  { 1186,	3,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, nullptr, ImplicitList12, OperandInfo36,0,nullptr },  // Inst #1186 = MultuRxRyRz16
  { 1187,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo195,0,nullptr },  // Inst #1187 = NLOC_B
  { 1188,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo107,0,nullptr },  // Inst #1188 = NLOC_D
  { 1189,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo220,0,nullptr },  // Inst #1189 = NLOC_H
  { 1190,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #1190 = NLOC_W
  { 1191,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo195,0,nullptr },  // Inst #1191 = NLZC_B
  { 1192,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo107,0,nullptr },  // Inst #1192 = NLZC_D
  { 1193,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo220,0,nullptr },  // Inst #1193 = NLZC_H
  { 1194,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #1194 = NLZC_W
  { 1195,	4,	1,	103,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo185,0,nullptr },  // Inst #1195 = NMADD_D32
  { 1196,	4,	1,	103,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo185,0,nullptr },  // Inst #1196 = NMADD_D32_MM
  { 1197,	4,	1,	103,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo186,0,nullptr },  // Inst #1197 = NMADD_D64
  { 1198,	4,	1,	104,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1198 = NMADD_S
  { 1199,	4,	1,	104,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1199 = NMADD_S_MM
  { 1200,	4,	1,	105,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo185,0,nullptr },  // Inst #1200 = NMSUB_D32
  { 1201,	4,	1,	105,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo185,0,nullptr },  // Inst #1201 = NMSUB_D32_MM
  { 1202,	4,	1,	105,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo186,0,nullptr },  // Inst #1202 = NMSUB_D64
  { 1203,	4,	1,	106,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1203 = NMSUB_S
  { 1204,	4,	1,	106,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo187,0,nullptr },  // Inst #1204 = NMSUB_S_MM
  { 1205,	0,	0,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1205 = NOP
  { 1206,	3,	1,	107,	4,	0|(1<<MCID::Commutable), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1206 = NOR
  { 1207,	3,	1,	107,	4,	0|(1<<MCID::Commutable), 0x1ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1207 = NOR64
  { 1208,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1208 = NORI_B
  { 1209,	3,	1,	107,	4,	0|(1<<MCID::Commutable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1209 = NOR_MM
  { 1210,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1210 = NOR_V
  { 1211,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1211 = NOR_V_D_PSEUDO
  { 1212,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1212 = NOR_V_H_PSEUDO
  { 1213,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1213 = NOR_V_W_PSEUDO
  { 1214,	2,	1,	6,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo86,0,nullptr },  // Inst #1214 = NegRxRy16
  { 1215,	2,	1,	6,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo86,0,nullptr },  // Inst #1215 = NotRxRy16
  { 1216,	3,	1,	108,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1216 = OR
  { 1217,	3,	1,	108,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1217 = OR64
  { 1218,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1218 = ORI_B
  { 1219,	3,	1,	108,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1219 = OR_MM
  { 1220,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1220 = OR_V
  { 1221,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1221 = OR_V_D_PSEUDO
  { 1222,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1222 = OR_V_H_PSEUDO
  { 1223,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1223 = OR_V_W_PSEUDO
  { 1224,	3,	1,	109,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1224 = ORi
  { 1225,	3,	1,	108,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #1225 = ORi64
  { 1226,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1226 = ORi_MM
  { 1227,	3,	1,	6,	2,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #1227 = OrRxRxRy16
  { 1228,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1228 = PACKRL_PH
  { 1229,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1229 = PAUSE
  { 1230,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1230 = PCKEV_B
  { 1231,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1231 = PCKEV_D
  { 1232,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1232 = PCKEV_H
  { 1233,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1233 = PCKEV_W
  { 1234,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1234 = PCKOD_B
  { 1235,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1235 = PCKOD_D
  { 1236,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1236 = PCKOD_H
  { 1237,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1237 = PCKOD_W
  { 1238,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo195,0,nullptr },  // Inst #1238 = PCNT_B
  { 1239,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo107,0,nullptr },  // Inst #1239 = PCNT_D
  { 1240,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo220,0,nullptr },  // Inst #1240 = PCNT_H
  { 1241,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo108,0,nullptr },  // Inst #1241 = PCNT_W
  { 1242,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, ImplicitList8, nullptr, OperandInfo15,0,nullptr },  // Inst #1242 = PICK_PH
  { 1243,	3,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, ImplicitList8, nullptr, OperandInfo15,0,nullptr },  // Inst #1243 = PICK_QB
  { 1244,	2,	1,	25,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1244 = POP
  { 1245,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #1245 = PRECEQU_PH_QBL
  { 1246,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #1246 = PRECEQU_PH_QBLA
  { 1247,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #1247 = PRECEQU_PH_QBR
  { 1248,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #1248 = PRECEQU_PH_QBRA
  { 1249,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo221,0,nullptr },  // Inst #1249 = PRECEQ_W_PHL
  { 1250,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo221,0,nullptr },  // Inst #1250 = PRECEQ_W_PHR
  { 1251,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #1251 = PRECEU_PH_QBL
  { 1252,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #1252 = PRECEU_PH_QBLA
  { 1253,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #1253 = PRECEU_PH_QBR
  { 1254,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo11,0,nullptr },  // Inst #1254 = PRECEU_PH_QBRA
  { 1255,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo15,0,nullptr },  // Inst #1255 = PRECRQU_S_QB_PH
  { 1256,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo222,0,nullptr },  // Inst #1256 = PRECRQ_PH_W
  { 1257,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1257 = PRECRQ_QB_PH
  { 1258,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo222,0,nullptr },  // Inst #1258 = PRECRQ_RS_PH_W
  { 1259,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1259 = PRECR_QB_PH
  { 1260,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo223,0,nullptr },  // Inst #1260 = PRECR_SRA_PH_W
  { 1261,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo223,0,nullptr },  // Inst #1261 = PRECR_SRA_R_PH_W
  { 1262,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #1262 = PREF
  { 1263,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo64,0,nullptr },  // Inst #1263 = PREF_R6
  { 1264,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo28,0,nullptr },  // Inst #1264 = PREPEND
  { 1265,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo224,0,nullptr },  // Inst #1265 = PseudoCMPU_EQ_QB
  { 1266,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo224,0,nullptr },  // Inst #1266 = PseudoCMPU_LE_QB
  { 1267,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo224,0,nullptr },  // Inst #1267 = PseudoCMPU_LT_QB
  { 1268,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo224,0,nullptr },  // Inst #1268 = PseudoCMP_EQ_PH
  { 1269,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo224,0,nullptr },  // Inst #1269 = PseudoCMP_LE_PH
  { 1270,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo224,0,nullptr },  // Inst #1270 = PseudoCMP_LT_PH
  { 1271,	2,	1,	14,	4,	0|(1<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo225,0,nullptr },  // Inst #1271 = PseudoCVT_D32_W
  { 1272,	2,	1,	14,	4,	0|(1<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo92,0,nullptr },  // Inst #1272 = PseudoCVT_D64_L
  { 1273,	2,	1,	14,	4,	0|(1<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo226,0,nullptr },  // Inst #1273 = PseudoCVT_D64_W
  { 1274,	2,	1,	14,	4,	0|(1<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo92,0,nullptr },  // Inst #1274 = PseudoCVT_S_L
  { 1275,	2,	1,	14,	4,	0|(1<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo210,0,nullptr },  // Inst #1275 = PseudoCVT_S_W
  { 1276,	3,	1,	23,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo227,0,nullptr },  // Inst #1276 = PseudoDMULT
  { 1277,	3,	1,	24,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo227,0,nullptr },  // Inst #1277 = PseudoDMULTu
  { 1278,	3,	1,	29,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo227,0,nullptr },  // Inst #1278 = PseudoDSDIV
  { 1279,	3,	1,	41,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo227,0,nullptr },  // Inst #1279 = PseudoDUDIV
  { 1280,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo58,0,nullptr },  // Inst #1280 = PseudoIndirectBranch
  { 1281,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo146,0,nullptr },  // Inst #1281 = PseudoIndirectBranch64
  { 1282,	4,	1,	74,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo228,0,nullptr },  // Inst #1282 = PseudoMADD
  { 1283,	4,	1,	75,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo228,0,nullptr },  // Inst #1283 = PseudoMADDU
  { 1284,	2,	1,	80,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo229,0,nullptr },  // Inst #1284 = PseudoMFHI
  { 1285,	2,	1,	80,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo230,0,nullptr },  // Inst #1285 = PseudoMFHI64
  { 1286,	2,	1,	80,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo229,0,nullptr },  // Inst #1286 = PseudoMFLO
  { 1287,	2,	1,	80,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo230,0,nullptr },  // Inst #1287 = PseudoMFLO64
  { 1288,	4,	1,	93,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo228,0,nullptr },  // Inst #1288 = PseudoMSUB
  { 1289,	4,	1,	94,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo228,0,nullptr },  // Inst #1289 = PseudoMSUBU
  { 1290,	3,	1,	99,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo231,0,nullptr },  // Inst #1290 = PseudoMTLOHI
  { 1291,	3,	1,	99,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo232,0,nullptr },  // Inst #1291 = PseudoMTLOHI64
  { 1292,	3,	1,	99,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo233,0,nullptr },  // Inst #1292 = PseudoMTLOHI_DSP
  { 1293,	3,	1,	101,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo234,0,nullptr },  // Inst #1293 = PseudoMULT
  { 1294,	3,	1,	102,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo234,0,nullptr },  // Inst #1294 = PseudoMULTu
  { 1295,	4,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo235,0,nullptr },  // Inst #1295 = PseudoPICK_PH
  { 1296,	4,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo235,0,nullptr },  // Inst #1296 = PseudoPICK_QB
  { 1297,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects)|(1<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo58,0,nullptr },  // Inst #1297 = PseudoReturn
  { 1298,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects)|(1<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo146,0,nullptr },  // Inst #1298 = PseudoReturn64
  { 1299,	3,	1,	110,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo234,0,nullptr },  // Inst #1299 = PseudoSDIV
  { 1300,	3,	1,	111,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo234,0,nullptr },  // Inst #1300 = PseudoUDIV
  { 1301,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo221,0,nullptr },  // Inst #1301 = RADDU_W_QB
  { 1302,	2,	1,	0,	4,	0|(1<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1302 = RDDSP
  { 1303,	2,	1,	112,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo236,0,nullptr },  // Inst #1303 = RDHWR
  { 1304,	2,	1,	112,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo237,0,nullptr },  // Inst #1304 = RDHWR64
  { 1305,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo238,0,nullptr },  // Inst #1305 = REPLV_PH
  { 1306,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo238,0,nullptr },  // Inst #1306 = REPLV_QB
  { 1307,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo239,0,nullptr },  // Inst #1307 = REPL_PH
  { 1308,	2,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo239,0,nullptr },  // Inst #1308 = REPL_QB
  { 1309,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #1309 = RINT_D
  { 1310,	2,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #1310 = RINT_S
  { 1311,	3,	1,	113,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1311 = ROTR
  { 1312,	3,	1,	114,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1312 = ROTRV
  { 1313,	3,	1,	114,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1313 = ROTRV_MM
  { 1314,	3,	1,	113,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1314 = ROTR_MM
  { 1315,	2,	1,	115,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #1315 = ROUND_L_D64
  { 1316,	2,	1,	115,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #1316 = ROUND_L_S
  { 1317,	2,	1,	115,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo67,0,nullptr },  // Inst #1317 = ROUND_W_D32
  { 1318,	2,	1,	115,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #1318 = ROUND_W_D64
  { 1319,	2,	1,	115,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo67,0,nullptr },  // Inst #1319 = ROUND_W_MM
  { 1320,	2,	1,	115,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #1320 = ROUND_W_S
  { 1321,	2,	1,	115,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #1321 = ROUND_W_S_MM
  { 1322,	0,	0,	116,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, nullptr,0,nullptr },  // Inst #1322 = Restore16
  { 1323,	0,	0,	116,	2,	0|(1<<MCID::MayLoad)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, nullptr,0,nullptr },  // Inst #1323 = RestoreX16
  { 1324,	0,	0,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1324 = RetRA
  { 1325,	0,	0,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Terminator)|(1<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1325 = RetRA16
  { 1326,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1326 = SAT_S_B
  { 1327,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1327 = SAT_S_D
  { 1328,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1328 = SAT_S_H
  { 1329,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1329 = SAT_S_W
  { 1330,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1330 = SAT_U_B
  { 1331,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1331 = SAT_U_D
  { 1332,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1332 = SAT_U_H
  { 1333,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1333 = SAT_U_W
  { 1334,	3,	0,	117,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo148,0,nullptr },  // Inst #1334 = SB
  { 1335,	3,	0,	117,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo149,0,nullptr },  // Inst #1335 = SB64
  { 1336,	3,	0,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo148,0,nullptr },  // Inst #1336 = SB_MM
  { 1337,	4,	1,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo240,0,nullptr },  // Inst #1337 = SC
  { 1338,	4,	1,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo241,0,nullptr },  // Inst #1338 = SCD
  { 1339,	4,	1,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo241,0,nullptr },  // Inst #1339 = SCD_R6
  { 1340,	4,	1,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo242,0,nullptr },  // Inst #1340 = SC_MM
  { 1341,	4,	1,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo240,0,nullptr },  // Inst #1341 = SC_R6
  { 1342,	3,	0,	118,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo149,0,nullptr },  // Inst #1342 = SD
  { 1343,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #1343 = SDBBP
  { 1344,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #1344 = SDBBP_R6
  { 1345,	3,	0,	119,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo151,0,nullptr },  // Inst #1345 = SDC1
  { 1346,	3,	0,	119,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo152,0,nullptr },  // Inst #1346 = SDC164
  { 1347,	3,	0,	119,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo151,0,nullptr },  // Inst #1347 = SDC1_MM
  { 1348,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo153,0,nullptr },  // Inst #1348 = SDC2
  { 1349,	3,	0,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo153,0,nullptr },  // Inst #1349 = SDC2_R6
  { 1350,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo154,0,nullptr },  // Inst #1350 = SDC3
  { 1351,	2,	0,	110,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList12, OperandInfo12,0,nullptr },  // Inst #1351 = SDIV
  { 1352,	2,	0,	110,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList12, OperandInfo12,0,nullptr },  // Inst #1352 = SDIV_MM
  { 1353,	3,	0,	120,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo149,0,nullptr },  // Inst #1353 = SDL
  { 1354,	3,	0,	121,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo149,0,nullptr },  // Inst #1354 = SDR
  { 1355,	3,	0,	122,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo161,0,nullptr },  // Inst #1355 = SDXC1
  { 1356,	3,	0,	122,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo162,0,nullptr },  // Inst #1356 = SDXC164
  { 1357,	2,	1,	123,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1357 = SEB
  { 1358,	2,	1,	123,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo89,0,nullptr },  // Inst #1358 = SEB64
  { 1359,	2,	1,	123,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1359 = SEB_MM
  { 1360,	2,	1,	124,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1360 = SEH
  { 1361,	2,	1,	124,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo89,0,nullptr },  // Inst #1361 = SEH64
  { 1362,	2,	1,	124,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1362 = SEH_MM
  { 1363,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1363 = SELEQZ
  { 1364,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1364 = SELEQZ64
  { 1365,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo110,0,nullptr },  // Inst #1365 = SELEQZ_D
  { 1366,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo111,0,nullptr },  // Inst #1366 = SELEQZ_S
  { 1367,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1367 = SELNEZ
  { 1368,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1368 = SELNEZ64
  { 1369,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo110,0,nullptr },  // Inst #1369 = SELNEZ_D
  { 1370,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo111,0,nullptr },  // Inst #1370 = SELNEZ_S
  { 1371,	4,	1,	0,	4,	0|(1<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo243,0,nullptr },  // Inst #1371 = SEL_D
  { 1372,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo244,0,nullptr },  // Inst #1372 = SEL_S
  { 1373,	3,	1,	125,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1373 = SEQ
  { 1374,	3,	1,	126,	4,	0, 0x2ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #1374 = SEQi
  { 1375,	3,	0,	127,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo148,0,nullptr },  // Inst #1375 = SH
  { 1376,	3,	0,	127,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo149,0,nullptr },  // Inst #1376 = SH64
  { 1377,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1377 = SHF_B
  { 1378,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1378 = SHF_H
  { 1379,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1379 = SHF_W
  { 1380,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo245,0,nullptr },  // Inst #1380 = SHILO
  { 1381,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo215,0,nullptr },  // Inst #1381 = SHILOV
  { 1382,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo246,0,nullptr },  // Inst #1382 = SHLLV_PH
  { 1383,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo246,0,nullptr },  // Inst #1383 = SHLLV_QB
  { 1384,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo246,0,nullptr },  // Inst #1384 = SHLLV_S_PH
  { 1385,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo13,0,nullptr },  // Inst #1385 = SHLLV_S_W
  { 1386,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo247,0,nullptr },  // Inst #1386 = SHLL_PH
  { 1387,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo247,0,nullptr },  // Inst #1387 = SHLL_QB
  { 1388,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo247,0,nullptr },  // Inst #1388 = SHLL_S_PH
  { 1389,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo24,0,nullptr },  // Inst #1389 = SHLL_S_W
  { 1390,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo246,0,nullptr },  // Inst #1390 = SHRAV_PH
  { 1391,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo246,0,nullptr },  // Inst #1391 = SHRAV_QB
  { 1392,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo246,0,nullptr },  // Inst #1392 = SHRAV_R_PH
  { 1393,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo246,0,nullptr },  // Inst #1393 = SHRAV_R_QB
  { 1394,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1394 = SHRAV_R_W
  { 1395,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo247,0,nullptr },  // Inst #1395 = SHRA_PH
  { 1396,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo247,0,nullptr },  // Inst #1396 = SHRA_QB
  { 1397,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo247,0,nullptr },  // Inst #1397 = SHRA_R_PH
  { 1398,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo247,0,nullptr },  // Inst #1398 = SHRA_R_QB
  { 1399,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1399 = SHRA_R_W
  { 1400,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo246,0,nullptr },  // Inst #1400 = SHRLV_PH
  { 1401,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo246,0,nullptr },  // Inst #1401 = SHRLV_QB
  { 1402,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo247,0,nullptr },  // Inst #1402 = SHRL_PH
  { 1403,	3,	1,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo247,0,nullptr },  // Inst #1403 = SHRL_QB
  { 1404,	3,	0,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo148,0,nullptr },  // Inst #1404 = SH_MM
  { 1405,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo46,0,nullptr },  // Inst #1405 = SLDI_B
  { 1406,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo47,0,nullptr },  // Inst #1406 = SLDI_D
  { 1407,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo48,0,nullptr },  // Inst #1407 = SLDI_H
  { 1408,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo49,0,nullptr },  // Inst #1408 = SLDI_W
  { 1409,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo248,0,nullptr },  // Inst #1409 = SLD_B
  { 1410,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo249,0,nullptr },  // Inst #1410 = SLD_D
  { 1411,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo250,0,nullptr },  // Inst #1411 = SLD_H
  { 1412,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo251,0,nullptr },  // Inst #1412 = SLD_W
  { 1413,	3,	1,	128,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1413 = SLL
  { 1414,	2,	1,	128,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo101,0,nullptr },  // Inst #1414 = SLL64_32
  { 1415,	2,	1,	128,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo194,0,nullptr },  // Inst #1415 = SLL64_64
  { 1416,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1416 = SLLI_B
  { 1417,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1417 = SLLI_D
  { 1418,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1418 = SLLI_H
  { 1419,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1419 = SLLI_W
  { 1420,	3,	1,	129,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1420 = SLLV
  { 1421,	3,	1,	129,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1421 = SLLV_MM
  { 1422,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1422 = SLL_B
  { 1423,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1423 = SLL_D
  { 1424,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1424 = SLL_H
  { 1425,	3,	1,	128,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1425 = SLL_MM
  { 1426,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1426 = SLL_W
  { 1427,	3,	1,	130,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1427 = SLT
  { 1428,	3,	1,	130,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo252,0,nullptr },  // Inst #1428 = SLT64
  { 1429,	3,	1,	130,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1429 = SLT_MM
  { 1430,	3,	1,	131,	4,	0, 0x2ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1430 = SLTi
  { 1431,	3,	1,	131,	4,	0, 0x2ULL, nullptr, nullptr, OperandInfo253,0,nullptr },  // Inst #1431 = SLTi64
  { 1432,	3,	1,	131,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1432 = SLTi_MM
  { 1433,	3,	1,	131,	4,	0, 0x2ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1433 = SLTiu
  { 1434,	3,	1,	131,	4,	0, 0x2ULL, nullptr, nullptr, OperandInfo253,0,nullptr },  // Inst #1434 = SLTiu64
  { 1435,	3,	1,	131,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1435 = SLTiu_MM
  { 1436,	3,	1,	130,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1436 = SLTu
  { 1437,	3,	1,	130,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo252,0,nullptr },  // Inst #1437 = SLTu64
  { 1438,	3,	1,	130,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1438 = SLTu_MM
  { 1439,	3,	1,	125,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1439 = SNE
  { 1440,	3,	1,	126,	4,	0, 0x2ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #1440 = SNEi
  { 1441,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo254,0,nullptr },  // Inst #1441 = SNZ_B_PSEUDO
  { 1442,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo255,0,nullptr },  // Inst #1442 = SNZ_D_PSEUDO
  { 1443,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo256,0,nullptr },  // Inst #1443 = SNZ_H_PSEUDO
  { 1444,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo254,0,nullptr },  // Inst #1444 = SNZ_V_PSEUDO
  { 1445,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo257,0,nullptr },  // Inst #1445 = SNZ_W_PSEUDO
  { 1446,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1446 = SPLATI_B
  { 1447,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1447 = SPLATI_D
  { 1448,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1448 = SPLATI_H
  { 1449,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1449 = SPLATI_W
  { 1450,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo258,0,nullptr },  // Inst #1450 = SPLAT_B
  { 1451,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo259,0,nullptr },  // Inst #1451 = SPLAT_D
  { 1452,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo260,0,nullptr },  // Inst #1452 = SPLAT_H
  { 1453,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo261,0,nullptr },  // Inst #1453 = SPLAT_W
  { 1454,	3,	1,	132,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1454 = SRA
  { 1455,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1455 = SRAI_B
  { 1456,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1456 = SRAI_D
  { 1457,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1457 = SRAI_H
  { 1458,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1458 = SRAI_W
  { 1459,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1459 = SRARI_B
  { 1460,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1460 = SRARI_D
  { 1461,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1461 = SRARI_H
  { 1462,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1462 = SRARI_W
  { 1463,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1463 = SRAR_B
  { 1464,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1464 = SRAR_D
  { 1465,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1465 = SRAR_H
  { 1466,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1466 = SRAR_W
  { 1467,	3,	1,	133,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1467 = SRAV
  { 1468,	3,	1,	133,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1468 = SRAV_MM
  { 1469,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1469 = SRA_B
  { 1470,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1470 = SRA_D
  { 1471,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1471 = SRA_H
  { 1472,	3,	1,	132,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1472 = SRA_MM
  { 1473,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1473 = SRA_W
  { 1474,	3,	1,	134,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1474 = SRL
  { 1475,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1475 = SRLI_B
  { 1476,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1476 = SRLI_D
  { 1477,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1477 = SRLI_H
  { 1478,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1478 = SRLI_W
  { 1479,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1479 = SRLRI_B
  { 1480,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1480 = SRLRI_D
  { 1481,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1481 = SRLRI_H
  { 1482,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1482 = SRLRI_W
  { 1483,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1483 = SRLR_B
  { 1484,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1484 = SRLR_D
  { 1485,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1485 = SRLR_H
  { 1486,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1486 = SRLR_W
  { 1487,	3,	1,	135,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1487 = SRLV
  { 1488,	3,	1,	135,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1488 = SRLV_MM
  { 1489,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1489 = SRL_B
  { 1490,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1490 = SRL_D
  { 1491,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1491 = SRL_H
  { 1492,	3,	1,	134,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1492 = SRL_MM
  { 1493,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1493 = SRL_W
  { 1494,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1494 = SSNOP
  { 1495,	3,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo168,0,nullptr },  // Inst #1495 = STORE_ACC128
  { 1496,	3,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo169,0,nullptr },  // Inst #1496 = STORE_ACC64
  { 1497,	3,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo170,0,nullptr },  // Inst #1497 = STORE_ACC64DSP
  { 1498,	3,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo171,0,nullptr },  // Inst #1498 = STORE_CCOND_DSP
  { 1499,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x6ULL, nullptr, nullptr, OperandInfo163,0,nullptr },  // Inst #1499 = ST_B
  { 1500,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x6ULL, nullptr, nullptr, OperandInfo164,0,nullptr },  // Inst #1500 = ST_D
  { 1501,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x6ULL, nullptr, nullptr, OperandInfo165,0,nullptr },  // Inst #1501 = ST_H
  { 1502,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x6ULL, nullptr, nullptr, OperandInfo166,0,nullptr },  // Inst #1502 = ST_W
  { 1503,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1503 = SUB
  { 1504,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1504 = SUBQH_PH
  { 1505,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1505 = SUBQH_R_PH
  { 1506,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1506 = SUBQH_R_W
  { 1507,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1507 = SUBQH_W
  { 1508,	3,	1,	0,	4,	0, 0x6ULL, nullptr, ImplicitList1, OperandInfo15,0,nullptr },  // Inst #1508 = SUBQ_PH
  { 1509,	3,	1,	0,	4,	0, 0x6ULL, nullptr, ImplicitList1, OperandInfo15,0,nullptr },  // Inst #1509 = SUBQ_S_PH
  { 1510,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo13,0,nullptr },  // Inst #1510 = SUBQ_S_W
  { 1511,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1511 = SUBSUS_U_B
  { 1512,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1512 = SUBSUS_U_D
  { 1513,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1513 = SUBSUS_U_H
  { 1514,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1514 = SUBSUS_U_W
  { 1515,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1515 = SUBSUU_S_B
  { 1516,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1516 = SUBSUU_S_D
  { 1517,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1517 = SUBSUU_S_H
  { 1518,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1518 = SUBSUU_S_W
  { 1519,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1519 = SUBS_S_B
  { 1520,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1520 = SUBS_S_D
  { 1521,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1521 = SUBS_S_H
  { 1522,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1522 = SUBS_S_W
  { 1523,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1523 = SUBS_U_B
  { 1524,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1524 = SUBS_U_D
  { 1525,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1525 = SUBS_U_H
  { 1526,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1526 = SUBS_U_W
  { 1527,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1527 = SUBUH_QB
  { 1528,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo15,0,nullptr },  // Inst #1528 = SUBUH_R_QB
  { 1529,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo15,0,nullptr },  // Inst #1529 = SUBU_PH
  { 1530,	3,	1,	0,	4,	0, 0x6ULL, nullptr, ImplicitList1, OperandInfo15,0,nullptr },  // Inst #1530 = SUBU_QB
  { 1531,	3,	1,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo15,0,nullptr },  // Inst #1531 = SUBU_S_PH
  { 1532,	3,	1,	0,	4,	0, 0x6ULL, nullptr, ImplicitList1, OperandInfo15,0,nullptr },  // Inst #1532 = SUBU_S_QB
  { 1533,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1533 = SUBVI_B
  { 1534,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo21,0,nullptr },  // Inst #1534 = SUBVI_D
  { 1535,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo22,0,nullptr },  // Inst #1535 = SUBVI_H
  { 1536,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo23,0,nullptr },  // Inst #1536 = SUBVI_W
  { 1537,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1537 = SUBV_B
  { 1538,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1538 = SUBV_D
  { 1539,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1539 = SUBV_H
  { 1540,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1540 = SUBV_W
  { 1541,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1541 = SUB_MM
  { 1542,	3,	1,	136,	4,	0|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1542 = SUBu
  { 1543,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1543 = SUBu_MM
  { 1544,	3,	0,	137,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo161,0,nullptr },  // Inst #1544 = SUXC1
  { 1545,	3,	0,	137,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo162,0,nullptr },  // Inst #1545 = SUXC164
  { 1546,	3,	0,	137,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo161,0,nullptr },  // Inst #1546 = SUXC1_MM
  { 1547,	3,	0,	138,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo148,0,nullptr },  // Inst #1547 = SW
  { 1548,	3,	0,	138,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo149,0,nullptr },  // Inst #1548 = SW64
  { 1549,	3,	0,	139,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo175,0,nullptr },  // Inst #1549 = SWC1
  { 1550,	3,	0,	139,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo175,0,nullptr },  // Inst #1550 = SWC1_MM
  { 1551,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo153,0,nullptr },  // Inst #1551 = SWC2
  { 1552,	3,	0,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo153,0,nullptr },  // Inst #1552 = SWC2_R6
  { 1553,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo154,0,nullptr },  // Inst #1553 = SWC3
  { 1554,	3,	0,	140,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo148,0,nullptr },  // Inst #1554 = SWL
  { 1555,	3,	0,	140,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo149,0,nullptr },  // Inst #1555 = SWL64
  { 1556,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo167,0,nullptr },  // Inst #1556 = SWL_MM
  { 1557,	3,	0,	141,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo148,0,nullptr },  // Inst #1557 = SWR
  { 1558,	3,	0,	141,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo149,0,nullptr },  // Inst #1558 = SWR64
  { 1559,	3,	0,	0,	4,	0|(1<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo167,0,nullptr },  // Inst #1559 = SWR_MM
  { 1560,	3,	0,	142,	4,	0|(1<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo178,0,nullptr },  // Inst #1560 = SWXC1
  { 1561,	3,	0,	142,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo178,0,nullptr },  // Inst #1561 = SWXC1_MM
  { 1562,	3,	0,	0,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo148,0,nullptr },  // Inst #1562 = SW_MM
  { 1563,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #1563 = SYNC
  { 1564,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo2,0,nullptr },  // Inst #1564 = SYNC_MM
  { 1565,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #1565 = SYSCALL
  { 1566,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #1566 = SYSCALL_MM
  { 1567,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo254,0,nullptr },  // Inst #1567 = SZ_B_PSEUDO
  { 1568,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo255,0,nullptr },  // Inst #1568 = SZ_D_PSEUDO
  { 1569,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo256,0,nullptr },  // Inst #1569 = SZ_H_PSEUDO
  { 1570,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo254,0,nullptr },  // Inst #1570 = SZ_V_PSEUDO
  { 1571,	2,	1,	3,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo257,0,nullptr },  // Inst #1571 = SZ_W_PSEUDO
  { 1572,	0,	0,	143,	2,	0|(1<<MCID::MayStore)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, nullptr,0,nullptr },  // Inst #1572 = Save16
  { 1573,	0,	0,	143,	2,	0|(1<<MCID::MayStore)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, nullptr,0,nullptr },  // Inst #1573 = SaveX16
  { 1574,	4,	0,	117,	4,	0|(1<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo179,0,nullptr },  // Inst #1574 = SbRxRyOffMemX16
  { 1575,	2,	1,	6,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo262,0,nullptr },  // Inst #1575 = SebRx16
  { 1576,	2,	1,	6,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo262,0,nullptr },  // Inst #1576 = SehRx16
  { 1577,	4,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo263,0,nullptr },  // Inst #1577 = SelBeqZ
  { 1578,	4,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo263,0,nullptr },  // Inst #1578 = SelBneZ
  { 1579,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo264,0,nullptr },  // Inst #1579 = SelTBteqZCmp
  { 1580,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo265,0,nullptr },  // Inst #1580 = SelTBteqZCmpi
  { 1581,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo264,0,nullptr },  // Inst #1581 = SelTBteqZSlt
  { 1582,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo265,0,nullptr },  // Inst #1582 = SelTBteqZSlti
  { 1583,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo265,0,nullptr },  // Inst #1583 = SelTBteqZSltiu
  { 1584,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo264,0,nullptr },  // Inst #1584 = SelTBteqZSltu
  { 1585,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo264,0,nullptr },  // Inst #1585 = SelTBtneZCmp
  { 1586,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo265,0,nullptr },  // Inst #1586 = SelTBtneZCmpi
  { 1587,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo264,0,nullptr },  // Inst #1587 = SelTBtneZSlt
  { 1588,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo265,0,nullptr },  // Inst #1588 = SelTBtneZSlti
  { 1589,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo265,0,nullptr },  // Inst #1589 = SelTBtneZSltiu
  { 1590,	5,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo264,0,nullptr },  // Inst #1590 = SelTBtneZSltu
  { 1591,	4,	0,	127,	4,	0|(1<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo179,0,nullptr },  // Inst #1591 = ShRxRyOffMemX16
  { 1592,	3,	1,	6,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo266,0,nullptr },  // Inst #1592 = SllX16
  { 1593,	3,	1,	6,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #1593 = SllvRxRy16
  { 1594,	3,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo36,0,nullptr },  // Inst #1594 = SltCCRxRy16
  { 1595,	2,	0,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo86,0,nullptr },  // Inst #1595 = SltRxRy16
  { 1596,	3,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo266,0,nullptr },  // Inst #1596 = SltiCCRxImmX16
  { 1597,	2,	0,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo33,0,nullptr },  // Inst #1597 = SltiRxImm16
  { 1598,	2,	0,	6,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo33,0,nullptr },  // Inst #1598 = SltiRxImmX16
  { 1599,	3,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo266,0,nullptr },  // Inst #1599 = SltiuCCRxImmX16
  { 1600,	2,	0,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo33,0,nullptr },  // Inst #1600 = SltiuRxImm16
  { 1601,	2,	0,	6,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo33,0,nullptr },  // Inst #1601 = SltiuRxImmX16
  { 1602,	3,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo36,0,nullptr },  // Inst #1602 = SltuCCRxRy16
  { 1603,	2,	0,	6,	2,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo86,0,nullptr },  // Inst #1603 = SltuRxRy16
  { 1604,	3,	1,	3,	2,	0|(1<<MCID::Pseudo)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo36,0,nullptr },  // Inst #1604 = SltuRxRyRz16
  { 1605,	3,	1,	6,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo266,0,nullptr },  // Inst #1605 = SraX16
  { 1606,	3,	1,	6,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #1606 = SravRxRy16
  { 1607,	3,	1,	6,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo266,0,nullptr },  // Inst #1607 = SrlX16
  { 1608,	3,	1,	6,	2,	0, 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #1608 = SrlvRxRy16
  { 1609,	3,	1,	6,	2,	0|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo36,0,nullptr },  // Inst #1609 = SubuRxRyRz16
  { 1610,	4,	0,	138,	4,	0|(1<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo179,0,nullptr },  // Inst #1610 = SwRxRyOffMemX16
  { 1611,	3,	0,	138,	4,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo182,0,nullptr },  // Inst #1611 = SwRxSpImmX16
  { 1612,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, ImplicitList4, OperandInfo5,0,nullptr },  // Inst #1612 = TAILCALL
  { 1613,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, ImplicitList4, OperandInfo146,0,nullptr },  // Inst #1613 = TAILCALL64_R
  { 1614,	1,	0,	7,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::DelaySlot)|(1<<MCID::Call)|(1<<MCID::Terminator)|(1<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, ImplicitList4, OperandInfo58,0,nullptr },  // Inst #1614 = TAILCALL_R
  { 1615,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1615 = TEQ
  { 1616,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1616 = TEQI
  { 1617,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1617 = TEQI_MM
  { 1618,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1618 = TEQ_MM
  { 1619,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1619 = TGE
  { 1620,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1620 = TGEI
  { 1621,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1621 = TGEIU
  { 1622,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1622 = TGEIU_MM
  { 1623,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1623 = TGEI_MM
  { 1624,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1624 = TGEU
  { 1625,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1625 = TGEU_MM
  { 1626,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1626 = TGE_MM
  { 1627,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1627 = TLBP
  { 1628,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1628 = TLBR
  { 1629,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1629 = TLBWI
  { 1630,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1630 = TLBWR
  { 1631,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1631 = TLT
  { 1632,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1632 = TLTI
  { 1633,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1633 = TLTIU_MM
  { 1634,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1634 = TLTI_MM
  { 1635,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1635 = TLTU
  { 1636,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1636 = TLTU_MM
  { 1637,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1637 = TLT_MM
  { 1638,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1638 = TNE
  { 1639,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1639 = TNEI
  { 1640,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1640 = TNEI_MM
  { 1641,	3,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1641 = TNE_MM
  { 1642,	0,	0,	0,	4,	0|(1<<MCID::Pseudo)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1642 = TRAP
  { 1643,	2,	1,	144,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo65,0,nullptr },  // Inst #1643 = TRUNC_L_D64
  { 1644,	2,	1,	144,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo66,0,nullptr },  // Inst #1644 = TRUNC_L_S
  { 1645,	2,	1,	144,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo67,0,nullptr },  // Inst #1645 = TRUNC_W_D32
  { 1646,	2,	1,	144,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo68,0,nullptr },  // Inst #1646 = TRUNC_W_D64
  { 1647,	2,	1,	144,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo67,0,nullptr },  // Inst #1647 = TRUNC_W_MM
  { 1648,	2,	1,	144,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #1648 = TRUNC_W_S
  { 1649,	2,	1,	144,	4,	0, 0x4ULL, nullptr, nullptr, OperandInfo69,0,nullptr },  // Inst #1649 = TRUNC_W_S_MM
  { 1650,	2,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1650 = TTLTIU
  { 1651,	2,	0,	111,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList12, OperandInfo12,0,nullptr },  // Inst #1651 = UDIV
  { 1652,	2,	0,	111,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList12, OperandInfo12,0,nullptr },  // Inst #1652 = UDIV_MM
  { 1653,	3,	1,	22,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList33, OperandInfo26,0,nullptr },  // Inst #1653 = V3MULU
  { 1654,	3,	1,	22,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList25, OperandInfo26,0,nullptr },  // Inst #1654 = VMM0
  { 1655,	3,	1,	22,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList34, OperandInfo26,0,nullptr },  // Inst #1655 = VMULU
  { 1656,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo50,0,nullptr },  // Inst #1656 = VSHF_B
  { 1657,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo51,0,nullptr },  // Inst #1657 = VSHF_D
  { 1658,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo52,0,nullptr },  // Inst #1658 = VSHF_H
  { 1659,	4,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo53,0,nullptr },  // Inst #1659 = VSHF_W
  { 1660,	0,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr,0,nullptr },  // Inst #1660 = WAIT
  { 1661,	1,	0,	0,	4,	0|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo5,0,nullptr },  // Inst #1661 = WAIT_MM
  { 1662,	2,	0,	0,	4,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo14,0,nullptr },  // Inst #1662 = WRDSP
  { 1663,	2,	1,	0,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1663 = WSBH
  { 1664,	2,	1,	0,	4,	0, 0x1ULL, nullptr, nullptr, OperandInfo12,0,nullptr },  // Inst #1664 = WSBH_MM
  { 1665,	3,	1,	145,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1665 = XOR
  { 1666,	3,	1,	145,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo26,0,nullptr },  // Inst #1666 = XOR64
  { 1667,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo20,0,nullptr },  // Inst #1667 = XORI_B
  { 1668,	3,	1,	145,	4,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13,0,nullptr },  // Inst #1668 = XOR_MM
  { 1669,	3,	1,	0,	4,	0, 0x6ULL, nullptr, nullptr, OperandInfo16,0,nullptr },  // Inst #1669 = XOR_V
  { 1670,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17,0,nullptr },  // Inst #1670 = XOR_V_D_PSEUDO
  { 1671,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18,0,nullptr },  // Inst #1671 = XOR_V_H_PSEUDO
  { 1672,	3,	1,	3,	4,	0|(1<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19,0,nullptr },  // Inst #1672 = XOR_V_W_PSEUDO
  { 1673,	3,	1,	146,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1673 = XORi
  { 1674,	3,	1,	145,	4,	0|(1<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo27,0,nullptr },  // Inst #1674 = XORi64
  { 1675,	3,	1,	0,	4,	0|(1<<MCID::Rematerializable)|(1<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo24,0,nullptr },  // Inst #1675 = XORi_MM
  { 1676,	3,	1,	6,	2,	0|(1<<MCID::Commutable)|(1<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo37,0,nullptr },  // Inst #1676 = XorRxRxRy16
};

extern const char MipsInstrNameData[] = {
  /* 0 */ 'D', 'M', 'F', 'C', '0', 0,
  /* 6 */ 'D', 'M', 'T', 'C', '0', 0,
  /* 12 */ 'V', 'M', 'M', '0', 0,
  /* 17 */ 'M', 'T', 'M', '0', 0,
  /* 22 */ 'M', 'T', 'P', '0', 0,
  /* 27 */ 'L', 'D', 'C', '1', 0,
  /* 32 */ 'S', 'D', 'C', '1', 0,
  /* 37 */ 'C', 'F', 'C', '1', 0,
  /* 42 */ 'D', 'M', 'F', 'C', '1', 0,
  /* 48 */ 'C', 'T', 'C', '1', 0,
  /* 53 */ 'D', 'M', 'T', 'C', '1', 0,
  /* 59 */ 'L', 'W', 'C', '1', 0,
  /* 64 */ 'S', 'W', 'C', '1', 0,
  /* 69 */ 'L', 'D', 'X', 'C', '1', 0,
  /* 75 */ 'S', 'D', 'X', 'C', '1', 0,
  /* 81 */ 'L', 'U', 'X', 'C', '1', 0,
  /* 87 */ 'S', 'U', 'X', 'C', '1', 0,
  /* 93 */ 'L', 'W', 'X', 'C', '1', 0,
  /* 99 */ 'S', 'W', 'X', 'C', '1', 0,
  /* 105 */ 'M', 'T', 'M', '1', 0,
  /* 110 */ 'M', 'T', 'P', '1', 0,
  /* 115 */ 'D', 'S', 'R', 'A', '3', '2', 0,
  /* 122 */ 'M', 'F', 'H', 'C', '1', '_', 'D', '3', '2', 0,
  /* 132 */ 'M', 'T', 'H', 'C', '1', '_', 'D', '3', '2', 0,
  /* 142 */ 'F', 'S', 'U', 'B', '_', 'D', '3', '2', 0,
  /* 151 */ 'N', 'M', 'S', 'U', 'B', '_', 'D', '3', '2', 0,
  /* 161 */ 'F', 'A', 'D', 'D', '_', 'D', '3', '2', 0,
  /* 170 */ 'N', 'M', 'A', 'D', 'D', '_', 'D', '3', '2', 0,
  /* 180 */ 'C', '_', 'N', 'G', 'E', '_', 'D', '3', '2', 0,
  /* 190 */ 'C', '_', 'N', 'G', 'L', 'E', '_', 'D', '3', '2', 0,
  /* 201 */ 'C', '_', 'O', 'L', 'E', '_', 'D', '3', '2', 0,
  /* 211 */ 'C', '_', 'U', 'L', 'E', '_', 'D', '3', '2', 0,
  /* 221 */ 'C', '_', 'L', 'E', '_', 'D', '3', '2', 0,
  /* 230 */ 'C', '_', 'S', 'F', '_', 'D', '3', '2', 0,
  /* 239 */ 'M', 'O', 'V', 'F', '_', 'D', '3', '2', 0,
  /* 248 */ 'C', '_', 'F', '_', 'D', '3', '2', 0,
  /* 256 */ 'F', 'N', 'E', 'G', '_', 'D', '3', '2', 0,
  /* 265 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'D', '3', '2', 0,
  /* 276 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'D', '3', '2', 0,
  /* 287 */ 'C', '_', 'N', 'G', 'L', '_', 'D', '3', '2', 0,
  /* 297 */ 'F', 'M', 'U', 'L', '_', 'D', '3', '2', 0,
  /* 306 */ 'C', '_', 'U', 'N', '_', 'D', '3', '2', 0,
  /* 315 */ 'F', 'C', 'M', 'P', '_', 'D', '3', '2', 0,
  /* 324 */ 'C', '_', 'S', 'E', 'Q', '_', 'D', '3', '2', 0,
  /* 334 */ 'C', '_', 'U', 'E', 'Q', '_', 'D', '3', '2', 0,
  /* 344 */ 'C', '_', 'E', 'Q', '_', 'D', '3', '2', 0,
  /* 353 */ 'F', 'A', 'B', 'S', '_', 'D', '3', '2', 0,
  /* 362 */ 'C', 'V', 'T', '_', 'S', '_', 'D', '3', '2', 0,
  /* 372 */ 'C', '_', 'N', 'G', 'T', '_', 'D', '3', '2', 0,
  /* 382 */ 'C', '_', 'O', 'L', 'T', '_', 'D', '3', '2', 0,
  /* 392 */ 'C', '_', 'U', 'L', 'T', '_', 'D', '3', '2', 0,
  /* 402 */ 'C', '_', 'L', 'T', '_', 'D', '3', '2', 0,
  /* 411 */ 'F', 'S', 'Q', 'R', 'T', '_', 'D', '3', '2', 0,
  /* 421 */ 'M', 'O', 'V', 'T', '_', 'D', '3', '2', 0,
  /* 430 */ 'F', 'D', 'I', 'V', '_', 'D', '3', '2', 0,
  /* 439 */ 'F', 'M', 'O', 'V', '_', 'D', '3', '2', 0,
  /* 448 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'D', '3', '2', 0,
  /* 460 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'D', '3', '2', 0,
  /* 472 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'D', '3', '2', 0,
  /* 483 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'D', '3', '2', 0,
  /* 495 */ 'C', 'V', 'T', '_', 'W', '_', 'D', '3', '2', 0,
  /* 505 */ 'B', 'P', 'O', 'S', 'G', 'E', '3', '2', 0,
  /* 514 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '3', '2', 0,
  /* 534 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '3', '2', 0,
  /* 554 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 575 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 595 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', 0,
  /* 611 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', 0,
  /* 631 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 651 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 670 */ 'D', 'S', 'L', 'L', '3', '2', 0,
  /* 677 */ 'D', 'S', 'R', 'L', '3', '2', 0,
  /* 684 */ 'D', 'R', 'O', 'T', 'R', '3', '2', 0,
  /* 692 */ 'C', 'I', 'N', 'S', '3', '2', 0,
  /* 699 */ 'E', 'X', 'T', 'S', '3', '2', 0,
  /* 706 */ 'F', 'C', 'M', 'P', '_', 'S', '3', '2', 0,
  /* 715 */ 'D', 'S', 'L', 'L', '6', '4', '_', '3', '2', 0,
  /* 725 */ 'M', 'I', 'P', 'S', 'e', 'h', '_', 'r', 'e', 't', 'u', 'r', 'n', '3', '2', 0,
  /* 741 */ 'L', 'w', 'C', 'o', 'n', 's', 't', 'a', 'n', 't', '3', '2', 0,
  /* 754 */ 'L', 'D', 'C', '2', 0,
  /* 759 */ 'S', 'D', 'C', '2', 0,
  /* 764 */ 'D', 'M', 'F', 'C', '2', 0,
  /* 770 */ 'D', 'M', 'T', 'C', '2', 0,
  /* 776 */ 'L', 'W', 'C', '2', 0,
  /* 781 */ 'S', 'W', 'C', '2', 0,
  /* 786 */ 'M', 'T', 'M', '2', 0,
  /* 791 */ 'M', 'T', 'P', '2', 0,
  /* 796 */ 'L', 'D', 'C', '3', 0,
  /* 801 */ 'S', 'D', 'C', '3', 0,
  /* 806 */ 'L', 'W', 'C', '3', 0,
  /* 811 */ 'S', 'W', 'C', '3', 0,
  /* 816 */ 'L', 'D', 'C', '1', '6', '4', 0,
  /* 823 */ 'S', 'D', 'C', '1', '6', '4', 0,
  /* 830 */ 'L', 'D', 'X', 'C', '1', '6', '4', 0,
  /* 838 */ 'S', 'D', 'X', 'C', '1', '6', '4', 0,
  /* 846 */ 'L', 'U', 'X', 'C', '1', '6', '4', 0,
  /* 854 */ 'S', 'U', 'X', 'C', '1', '6', '4', 0,
  /* 862 */ 'S', 'E', 'B', '6', '4', 0,
  /* 868 */ 'L', 'B', '6', '4', 0,
  /* 873 */ 'S', 'B', '6', '4', 0,
  /* 878 */ 'L', 'O', 'A', 'D', '_', 'A', 'C', 'C', '6', '4', 0,
  /* 889 */ 'S', 'T', 'O', 'R', 'E', '_', 'A', 'C', 'C', '6', '4', 0,
  /* 901 */ 'A', 'N', 'D', '6', '4', 0,
  /* 907 */ 'M', 'F', 'H', 'C', '1', '_', 'D', '6', '4', 0,
  /* 917 */ 'M', 'T', 'H', 'C', '1', '_', 'D', '6', '4', 0,
  /* 927 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'D', '6', '4', 0,
  /* 940 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'D', '6', '4', 0,
  /* 953 */ 'F', 'S', 'U', 'B', '_', 'D', '6', '4', 0,
  /* 962 */ 'N', 'M', 'S', 'U', 'B', '_', 'D', '6', '4', 0,
  /* 972 */ 'F', 'A', 'D', 'D', '_', 'D', '6', '4', 0,
  /* 981 */ 'N', 'M', 'A', 'D', 'D', '_', 'D', '6', '4', 0,
  /* 991 */ 'C', '_', 'N', 'G', 'E', '_', 'D', '6', '4', 0,
  /* 1001 */ 'C', '_', 'N', 'G', 'L', 'E', '_', 'D', '6', '4', 0,
  /* 1012 */ 'C', '_', 'O', 'L', 'E', '_', 'D', '6', '4', 0,
  /* 1022 */ 'C', '_', 'U', 'L', 'E', '_', 'D', '6', '4', 0,
  /* 1032 */ 'C', '_', 'L', 'E', '_', 'D', '6', '4', 0,
  /* 1041 */ 'C', '_', 'S', 'F', '_', 'D', '6', '4', 0,
  /* 1050 */ 'M', 'O', 'V', 'F', '_', 'D', '6', '4', 0,
  /* 1059 */ 'C', '_', 'F', '_', 'D', '6', '4', 0,
  /* 1067 */ 'F', 'N', 'E', 'G', '_', 'D', '6', '4', 0,
  /* 1076 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'D', '6', '4', 0,
  /* 1087 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'D', '6', '4', 0,
  /* 1098 */ 'C', '_', 'N', 'G', 'L', '_', 'D', '6', '4', 0,
  /* 1108 */ 'F', 'M', 'U', 'L', '_', 'D', '6', '4', 0,
  /* 1117 */ 'T', 'R', 'U', 'N', 'C', '_', 'L', '_', 'D', '6', '4', 0,
  /* 1129 */ 'R', 'O', 'U', 'N', 'D', '_', 'L', '_', 'D', '6', '4', 0,
  /* 1141 */ 'C', 'E', 'I', 'L', '_', 'L', '_', 'D', '6', '4', 0,
  /* 1152 */ 'F', 'L', 'O', 'O', 'R', '_', 'L', '_', 'D', '6', '4', 0,
  /* 1164 */ 'C', 'V', 'T', '_', 'L', '_', 'D', '6', '4', 0,
  /* 1174 */ 'C', '_', 'U', 'N', '_', 'D', '6', '4', 0,
  /* 1183 */ 'F', 'C', 'M', 'P', '_', 'D', '6', '4', 0,
  /* 1192 */ 'C', '_', 'S', 'E', 'Q', '_', 'D', '6', '4', 0,
  /* 1202 */ 'C', '_', 'U', 'E', 'Q', '_', 'D', '6', '4', 0,
  /* 1212 */ 'C', '_', 'E', 'Q', '_', 'D', '6', '4', 0,
  /* 1221 */ 'F', 'A', 'B', 'S', '_', 'D', '6', '4', 0,
  /* 1230 */ 'C', 'V', 'T', '_', 'S', '_', 'D', '6', '4', 0,
  /* 1240 */ 'C', '_', 'N', 'G', 'T', '_', 'D', '6', '4', 0,
  /* 1250 */ 'C', '_', 'O', 'L', 'T', '_', 'D', '6', '4', 0,
  /* 1260 */ 'C', '_', 'U', 'L', 'T', '_', 'D', '6', '4', 0,
  /* 1270 */ 'C', '_', 'L', 'T', '_', 'D', '6', '4', 0,
  /* 1279 */ 'F', 'S', 'Q', 'R', 'T', '_', 'D', '6', '4', 0,
  /* 1289 */ 'M', 'O', 'V', 'T', '_', 'D', '6', '4', 0,
  /* 1298 */ 'F', 'D', 'I', 'V', '_', 'D', '6', '4', 0,
  /* 1307 */ 'F', 'M', 'O', 'V', '_', 'D', '6', '4', 0,
  /* 1316 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'D', '6', '4', 0,
  /* 1328 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'D', '6', '4', 0,
  /* 1340 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'D', '6', '4', 0,
  /* 1351 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'D', '6', '4', 0,
  /* 1363 */ 'C', 'V', 'T', '_', 'W', '_', 'D', '6', '4', 0,
  /* 1373 */ 'B', 'N', 'E', '6', '4', 0,
  /* 1379 */ 'B', 'u', 'i', 'l', 'd', 'P', 'a', 'i', 'r', 'F', '6', '4', 0,
  /* 1392 */ 'E', 'x', 't', 'r', 'a', 'c', 't', 'E', 'l', 'e', 'm', 'e', 'n', 't', 'F', '6', '4', 0,
  /* 1410 */ 'S', 'E', 'H', '6', '4', 0,
  /* 1416 */ 'L', 'H', '6', '4', 0,
  /* 1421 */ 'S', 'H', '6', '4', 0,
  /* 1426 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'F', 'H', 'I', '6', '4', 0,
  /* 1439 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'T', 'L', 'O', 'H', 'I', '6', '4', 0,
  /* 1454 */ 'M', 'T', 'H', 'I', '6', '4', 0,
  /* 1461 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'I', '6', '4', 0,
  /* 1474 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'I', '6', '4', 0,
  /* 1487 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '6', '4', 0,
  /* 1507 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '6', '4', 0,
  /* 1527 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 1548 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 1568 */ 'M', 'O', 'V', 'F', '_', 'I', '6', '4', 0,
  /* 1577 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'I', '6', '4', 0,
  /* 1588 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'I', '6', '4', 0,
  /* 1599 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', 0,
  /* 1615 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', 0,
  /* 1635 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 1655 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 1674 */ 'M', 'O', 'V', 'T', '_', 'I', '6', '4', 0,
  /* 1683 */ 'L', 'W', 'L', '6', '4', 0,
  /* 1689 */ 'S', 'W', 'L', '6', '4', 0,
  /* 1695 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'F', 'L', 'O', '6', '4', 0,
  /* 1708 */ 'M', 'T', 'L', 'O', '6', '4', 0,
  /* 1715 */ 'B', 'E', 'Q', '6', '4', 0,
  /* 1721 */ 'J', 'R', '6', '4', 0,
  /* 1726 */ 'J', 'A', 'L', 'R', '6', '4', 0,
  /* 1733 */ 'N', 'O', 'R', '6', '4', 0,
  /* 1739 */ 'X', 'O', 'R', '6', '4', 0,
  /* 1745 */ 'R', 'D', 'H', 'W', 'R', '6', '4', 0,
  /* 1753 */ 'L', 'W', 'R', '6', '4', 0,
  /* 1759 */ 'S', 'W', 'R', '6', '4', 0,
  /* 1765 */ 'S', 'L', 'T', '6', '4', 0,
  /* 1771 */ 'L', 'W', '6', '4', 0,
  /* 1776 */ 'S', 'W', '6', '4', 0,
  /* 1781 */ 'B', 'G', 'E', 'Z', '6', '4', 0,
  /* 1788 */ 'B', 'L', 'E', 'Z', '6', '4', 0,
  /* 1795 */ 'S', 'E', 'L', 'N', 'E', 'Z', '6', '4', 0,
  /* 1804 */ 'S', 'E', 'L', 'E', 'Q', 'Z', '6', '4', 0,
  /* 1813 */ 'B', 'G', 'T', 'Z', '6', '4', 0,
  /* 1820 */ 'B', 'L', 'T', 'Z', '6', '4', 0,
  /* 1827 */ 'B', 'u', 'i', 'l', 'd', 'P', 'a', 'i', 'r', 'F', '6', '4', '_', '6', '4', 0,
  /* 1843 */ 'E', 'x', 't', 'r', 'a', 'c', 't', 'E', 'l', 'e', 'm', 'e', 'n', 't', 'F', '6', '4', '_', '6', '4', 0,
  /* 1864 */ 'S', 'L', 'L', '6', '4', '_', '6', '4', 0,
  /* 1873 */ 'P', 's', 'e', 'u', 'd', 'o', 'I', 'n', 'd', 'i', 'r', 'e', 'c', 't', 'B', 'r', 'a', 'n', 'c', 'h', '6', '4', 0,
  /* 1896 */ 'A', 'N', 'D', 'i', '6', '4', 0,
  /* 1903 */ 'X', 'O', 'R', 'i', '6', '4', 0,
  /* 1910 */ 'S', 'L', 'T', 'i', '6', '4', 0,
  /* 1917 */ 'L', 'U', 'i', '6', '4', 0,
  /* 1923 */ 'P', 's', 'e', 'u', 'd', 'o', 'R', 'e', 't', 'u', 'r', 'n', '6', '4', 0,
  /* 1938 */ 'M', 'I', 'P', 'S', 'e', 'h', '_', 'r', 'e', 't', 'u', 'r', 'n', '6', '4', 0,
  /* 1954 */ 'L', 'B', 'u', '6', '4', 0,
  /* 1960 */ 'L', 'H', 'u', '6', '4', 0,
  /* 1966 */ 'S', 'L', 'T', 'u', '6', '4', 0,
  /* 1973 */ 'L', 'E', 'A', '_', 'A', 'D', 'D', 'i', 'u', '6', '4', 0,
  /* 1985 */ 'S', 'L', 'T', 'i', 'u', '6', '4', 0,
  /* 1993 */ 'M', 'o', 'v', 'e', 'R', '3', '2', '1', '6', 0,
  /* 2003 */ 'R', 'e', 't', 'R', 'A', '1', '6', 0,
  /* 2011 */ 'J', 'a', 'l', 'B', '1', '6', 0,
  /* 2018 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '1', '6', 0,
  /* 2038 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '1', '6', 0,
  /* 2058 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '1', '6', 0,
  /* 2079 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '1', '6', 0,
  /* 2099 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', 0,
  /* 2115 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', 0,
  /* 2135 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '1', '6', 0,
  /* 2155 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '1', '6', 0,
  /* 2174 */ 'M', 'o', 'v', 'e', '3', '2', 'R', '1', '6', 0,
  /* 2184 */ 'S', 'r', 'a', 'X', '1', '6', 0,
  /* 2191 */ 'R', 'e', 's', 't', 'o', 'r', 'e', 'X', '1', '6', 0,
  /* 2202 */ 'S', 'a', 'v', 'e', 'X', '1', '6', 0,
  /* 2210 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'C', 'm', 'p', 'i', 'X', '1', '6', 0,
  /* 2225 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'C', 'm', 'p', 'i', 'X', '1', '6', 0,
  /* 2240 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'i', 'X', '1', '6', 0,
  /* 2255 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'i', 'X', '1', '6', 0,
  /* 2270 */ 'S', 'l', 'l', 'X', '1', '6', 0,
  /* 2277 */ 'S', 'r', 'l', 'X', '1', '6', 0,
  /* 2284 */ 'L', 'b', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2300 */ 'S', 'b', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2316 */ 'L', 'h', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2332 */ 'S', 'h', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2348 */ 'L', 'b', 'u', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2365 */ 'L', 'h', 'u', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2382 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2401 */ 'L', 'w', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2417 */ 'S', 'w', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 2433 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'P', 'c', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2449 */ 'A', 'd', 'd', 'i', 'u', 'S', 'p', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2463 */ 'L', 'w', 'R', 'x', 'S', 'p', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2476 */ 'S', 'w', 'R', 'x', 'S', 'p', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2489 */ 'S', 'l', 't', 'i', 'C', 'C', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2504 */ 'S', 'l', 't', 'i', 'u', 'C', 'C', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2520 */ 'L', 'i', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2531 */ 'C', 'm', 'p', 'i', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2544 */ 'S', 'l', 't', 'i', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2557 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2571 */ 'S', 'l', 't', 'i', 'u', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2585 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2601 */ 'B', 'n', 'e', 'z', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2614 */ 'B', 'e', 'q', 'z', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 2627 */ 'B', 'i', 'm', 'm', 'X', '1', '6', 0,
  /* 2635 */ 'L', 'i', 'R', 'x', 'I', 'm', 'm', 'A', 'l', 'i', 'g', 'n', 'X', '1', '6', 0,
  /* 2651 */ 'L', 'w', 'R', 'x', 'P', 'c', 'T', 'c', 'p', 'X', '1', '6', 0,
  /* 2664 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'C', 'm', 'p', 'X', '1', '6', 0,
  /* 2678 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'C', 'm', 'p', 'X', '1', '6', 0,
  /* 2692 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'X', '1', '6', 0,
  /* 2706 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'X', '1', '6', 0,
  /* 2720 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'i', 'u', 'X', '1', '6', 0,
  /* 2736 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'i', 'u', 'X', '1', '6', 0,
  /* 2752 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'u', 'X', '1', '6', 0,
  /* 2767 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'u', 'X', '1', '6', 0,
  /* 2782 */ 'B', 't', 'n', 'e', 'z', 'X', '1', '6', 0,
  /* 2791 */ 'B', 't', 'e', 'q', 'z', 'X', '1', '6', 0,
  /* 2800 */ 'J', 'r', 'c', 'R', 'a', '1', '6', 0,
  /* 2808 */ 'J', 'r', 'R', 'a', '1', '6', 0,
  /* 2815 */ 'R', 'e', 's', 't', 'o', 'r', 'e', '1', '6', 0,
  /* 2825 */ 'G', 'o', 't', 'P', 'r', 'o', 'l', 'o', 'g', 'u', 'e', '1', '6', 0,
  /* 2839 */ 'S', 'a', 'v', 'e', '1', '6', 0,
  /* 2846 */ 'J', 'u', 'm', 'p', 'L', 'i', 'n', 'k', 'R', 'e', 'g', '1', '6', 0,
  /* 2860 */ 'M', 'f', 'h', 'i', '1', '6', 0,
  /* 2867 */ 'B', 'r', 'e', 'a', 'k', '1', '6', 0,
  /* 2875 */ 'J', 'a', 'l', '1', '6', 0,
  /* 2881 */ 'A', 'd', 'd', 'i', 'u', 'S', 'p', 'I', 'm', 'm', '1', '6', 0,
  /* 2894 */ 'L', 'i', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 2904 */ 'C', 'm', 'p', 'i', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 2916 */ 'S', 'l', 't', 'i', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 2928 */ 'S', 'l', 't', 'i', 'u', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 2941 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 2956 */ 'B', 'n', 'e', 'z', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 2968 */ 'B', 'e', 'q', 'z', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 2980 */ 'B', 'i', 'm', 'm', '1', '6', 0,
  /* 2987 */ 'M', 'f', 'l', 'o', '1', '6', 0,
  /* 2994 */ 'L', 'w', 'R', 'x', 'P', 'c', 'T', 'c', 'p', '1', '6', 0,
  /* 3006 */ 'S', 'e', 'b', 'R', 'x', '1', '6', 0,
  /* 3014 */ 'J', 'r', 'c', 'R', 'x', '1', '6', 0,
  /* 3022 */ 'S', 'e', 'h', 'R', 'x', '1', '6', 0,
  /* 3030 */ 'S', 'l', 't', 'C', 'C', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3042 */ 'S', 'l', 't', 'u', 'C', 'C', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3055 */ 'N', 'e', 'g', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3065 */ 'C', 'm', 'p', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3075 */ 'S', 'l', 't', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3085 */ 'M', 'u', 'l', 't', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3096 */ 'N', 'o', 't', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3106 */ 'S', 'l', 't', 'u', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3117 */ 'M', 'u', 'l', 't', 'u', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3129 */ 'D', 'i', 'v', 'u', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3140 */ 'S', 'r', 'a', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3151 */ 'D', 'i', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3161 */ 'S', 'l', 'l', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3172 */ 'S', 'r', 'l', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3183 */ 'A', 'n', 'd', 'R', 'x', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3195 */ 'O', 'r', 'R', 'x', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3206 */ 'X', 'o', 'r', 'R', 'x', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3218 */ 'M', 'u', 'l', 't', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 3231 */ 'S', 'u', 'b', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 3244 */ 'A', 'd', 'd', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 3257 */ 'S', 'l', 't', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 3270 */ 'M', 'u', 'l', 't', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 3284 */ 'B', 't', 'n', 'e', 'z', '1', '6', 0,
  /* 3292 */ 'B', 't', 'e', 'q', 'z', '1', '6', 0,
  /* 3300 */ 'L', 'D', 'C', '2', '_', 'R', '6', 0,
  /* 3308 */ 'S', 'D', 'C', '2', '_', 'R', '6', 0,
  /* 3316 */ 'L', 'W', 'C', '2', '_', 'R', '6', 0,
  /* 3324 */ 'S', 'W', 'C', '2', '_', 'R', '6', 0,
  /* 3332 */ 'D', 'L', 'S', 'A', '_', 'R', '6', 0,
  /* 3340 */ 'J', 'R', '_', 'H', 'B', '_', 'R', '6', 0,
  /* 3349 */ 'S', 'C', '_', 'R', '6', 0,
  /* 3355 */ 'S', 'C', 'D', '_', 'R', '6', 0,
  /* 3362 */ 'L', 'L', 'D', '_', 'R', '6', 0,
  /* 3369 */ 'C', 'A', 'C', 'H', 'E', '_', 'R', '6', 0,
  /* 3378 */ 'P', 'R', 'E', 'F', '_', 'R', '6', 0,
  /* 3386 */ 'L', 'L', '_', 'R', '6', 0,
  /* 3392 */ 'D', 'M', 'U', 'L', '_', 'R', '6', 0,
  /* 3400 */ 'D', 'C', 'L', 'O', '_', 'R', '6', 0,
  /* 3408 */ 'S', 'D', 'B', 'B', 'P', '_', 'R', '6', 0,
  /* 3417 */ 'D', 'C', 'L', 'Z', '_', 'R', '6', 0,
  /* 3425 */ 'L', 'O', 'A', 'D', '_', 'A', 'C', 'C', '1', '2', '8', 0,
  /* 3437 */ 'S', 'T', 'O', 'R', 'E', '_', 'A', 'C', 'C', '1', '2', '8', 0,
  /* 3450 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '8', 0,
  /* 3469 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '8', 0,
  /* 3488 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '8', 0,
  /* 3508 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '8', 0,
  /* 3527 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', 0,
  /* 3542 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', 0,
  /* 3561 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '8', 0,
  /* 3580 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '8', 0,
  /* 3598 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 'A', 0,
  /* 3613 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 'A', 0,
  /* 3629 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 'A', 0,
  /* 3644 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 'A', 0,
  /* 3660 */ 'D', 'S', 'R', 'A', 0,
  /* 3665 */ 'R', 'e', 't', 'R', 'A', 0,
  /* 3671 */ 'D', 'L', 'S', 'A', 0,
  /* 3676 */ 'C', 'F', 'C', 'M', 'S', 'A', 0,
  /* 3683 */ 'C', 'T', 'C', 'M', 'S', 'A', 0,
  /* 3690 */ 'S', 'E', 'B', 0,
  /* 3694 */ 'E', 'H', 'B', 0,
  /* 3698 */ 'J', 'R', '_', 'H', 'B', 0,
  /* 3704 */ 'J', 'A', 'L', 'R', '_', 'H', 'B', 0,
  /* 3712 */ 'L', 'B', 0,
  /* 3715 */ 'S', 'H', 'R', 'A', '_', 'Q', 'B', 0,
  /* 3723 */ 'C', 'M', 'P', 'G', 'D', 'U', '_', 'L', 'E', '_', 'Q', 'B', 0,
  /* 3736 */ 'C', 'M', 'P', 'G', 'U', '_', 'L', 'E', '_', 'Q', 'B', 0,
  /* 3748 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', 'U', '_', 'L', 'E', '_', 'Q', 'B', 0,
  /* 3765 */ 'S', 'U', 'B', 'U', 'H', '_', 'Q', 'B', 0,
  /* 3774 */ 'A', 'D', 'D', 'U', 'H', '_', 'Q', 'B', 0,
  /* 3783 */ 'P', 's', 'e', 'u', 'd', 'o', 'P', 'I', 'C', 'K', '_', 'Q', 'B', 0,
  /* 3797 */ 'S', 'H', 'L', 'L', '_', 'Q', 'B', 0,
  /* 3805 */ 'R', 'E', 'P', 'L', '_', 'Q', 'B', 0,
  /* 3813 */ 'S', 'H', 'R', 'L', '_', 'Q', 'B', 0,
  /* 3821 */ 'C', 'M', 'P', 'G', 'D', 'U', '_', 'E', 'Q', '_', 'Q', 'B', 0,
  /* 3834 */ 'C', 'M', 'P', 'G', 'U', '_', 'E', 'Q', '_', 'Q', 'B', 0,
  /* 3846 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', 'U', '_', 'E', 'Q', '_', 'Q', 'B', 0,
  /* 3863 */ 'S', 'H', 'R', 'A', '_', 'R', '_', 'Q', 'B', 0,
  /* 3873 */ 'S', 'U', 'B', 'U', 'H', '_', 'R', '_', 'Q', 'B', 0,
  /* 3884 */ 'A', 'D', 'D', 'U', 'H', '_', 'R', '_', 'Q', 'B', 0,
  /* 3895 */ 'S', 'H', 'R', 'A', 'V', '_', 'R', '_', 'Q', 'B', 0,
  /* 3906 */ 'A', 'B', 'S', 'Q', '_', 'S', '_', 'Q', 'B', 0,
  /* 3916 */ 'S', 'U', 'B', 'U', '_', 'S', '_', 'Q', 'B', 0,
  /* 3926 */ 'A', 'D', 'D', 'U', '_', 'S', '_', 'Q', 'B', 0,
  /* 3936 */ 'C', 'M', 'P', 'G', 'D', 'U', '_', 'L', 'T', '_', 'Q', 'B', 0,
  /* 3949 */ 'C', 'M', 'P', 'G', 'U', '_', 'L', 'T', '_', 'Q', 'B', 0,
  /* 3961 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', 'U', '_', 'L', 'T', '_', 'Q', 'B', 0,
  /* 3978 */ 'S', 'U', 'B', 'U', '_', 'Q', 'B', 0,
  /* 3986 */ 'A', 'D', 'D', 'U', '_', 'Q', 'B', 0,
  /* 3994 */ 'S', 'H', 'R', 'A', 'V', '_', 'Q', 'B', 0,
  /* 4003 */ 'S', 'H', 'L', 'L', 'V', '_', 'Q', 'B', 0,
  /* 4012 */ 'R', 'E', 'P', 'L', 'V', '_', 'Q', 'B', 0,
  /* 4021 */ 'S', 'H', 'R', 'L', 'V', '_', 'Q', 'B', 0,
  /* 4030 */ 'R', 'A', 'D', 'D', 'U', '_', 'W', '_', 'Q', 'B', 0,
  /* 4041 */ 'S', 'B', 0,
  /* 4044 */ 'M', 'O', 'D', 'S', 'U', 'B', 0,
  /* 4051 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'S', 'U', 'B', 0,
  /* 4062 */ 'S', 'R', 'A', '_', 'B', 0,
  /* 4068 */ 'A', 'D', 'D', '_', 'A', '_', 'B', 0,
  /* 4076 */ 'M', 'I', 'N', '_', 'A', '_', 'B', 0,
  /* 4084 */ 'A', 'D', 'D', 'S', '_', 'A', '_', 'B', 0,
  /* 4093 */ 'M', 'A', 'X', '_', 'A', '_', 'B', 0,
  /* 4101 */ 'N', 'L', 'O', 'C', '_', 'B', 0,
  /* 4108 */ 'N', 'L', 'Z', 'C', '_', 'B', 0,
  /* 4115 */ 'S', 'L', 'D', '_', 'B', 0,
  /* 4121 */ 'P', 'C', 'K', 'O', 'D', '_', 'B', 0,
  /* 4129 */ 'I', 'L', 'V', 'O', 'D', '_', 'B', 0,
  /* 4137 */ 'I', 'N', 'S', 'V', 'E', '_', 'B', 0,
  /* 4145 */ 'V', 'S', 'H', 'F', '_', 'B', 0,
  /* 4152 */ 'B', 'N', 'E', 'G', '_', 'B', 0,
  /* 4159 */ 'S', 'R', 'A', 'I', '_', 'B', 0,
  /* 4166 */ 'S', 'L', 'D', 'I', '_', 'B', 0,
  /* 4173 */ 'A', 'N', 'D', 'I', '_', 'B', 0,
  /* 4180 */ 'B', 'N', 'E', 'G', 'I', '_', 'B', 0,
  /* 4188 */ 'B', 'S', 'E', 'L', 'I', '_', 'B', 0,
  /* 4196 */ 'S', 'L', 'L', 'I', '_', 'B', 0,
  /* 4203 */ 'S', 'R', 'L', 'I', '_', 'B', 0,
  /* 4210 */ 'B', 'I', 'N', 'S', 'L', 'I', '_', 'B', 0,
  /* 4219 */ 'C', 'E', 'Q', 'I', '_', 'B', 0,
  /* 4226 */ 'S', 'R', 'A', 'R', 'I', '_', 'B', 0,
  /* 4234 */ 'B', 'C', 'L', 'R', 'I', '_', 'B', 0,
  /* 4242 */ 'S', 'R', 'L', 'R', 'I', '_', 'B', 0,
  /* 4250 */ 'N', 'O', 'R', 'I', '_', 'B', 0,
  /* 4257 */ 'X', 'O', 'R', 'I', '_', 'B', 0,
  /* 4264 */ 'B', 'I', 'N', 'S', 'R', 'I', '_', 'B', 0,
  /* 4273 */ 'S', 'P', 'L', 'A', 'T', 'I', '_', 'B', 0,
  /* 4282 */ 'B', 'S', 'E', 'T', 'I', '_', 'B', 0,
  /* 4290 */ 'S', 'U', 'B', 'V', 'I', '_', 'B', 0,
  /* 4298 */ 'A', 'D', 'D', 'V', 'I', '_', 'B', 0,
  /* 4306 */ 'B', 'M', 'Z', 'I', '_', 'B', 0,
  /* 4313 */ 'B', 'M', 'N', 'Z', 'I', '_', 'B', 0,
  /* 4321 */ 'F', 'I', 'L', 'L', '_', 'B', 0,
  /* 4328 */ 'S', 'L', 'L', '_', 'B', 0,
  /* 4334 */ 'S', 'R', 'L', '_', 'B', 0,
  /* 4340 */ 'B', 'I', 'N', 'S', 'L', '_', 'B', 0,
  /* 4348 */ 'I', 'L', 'V', 'L', '_', 'B', 0,
  /* 4355 */ 'C', 'E', 'Q', '_', 'B', 0,
  /* 4361 */ 'S', 'R', 'A', 'R', '_', 'B', 0,
  /* 4368 */ 'B', 'C', 'L', 'R', '_', 'B', 0,
  /* 4375 */ 'S', 'R', 'L', 'R', '_', 'B', 0,
  /* 4382 */ 'B', 'I', 'N', 'S', 'R', '_', 'B', 0,
  /* 4390 */ 'I', 'L', 'V', 'R', '_', 'B', 0,
  /* 4397 */ 'A', 'S', 'U', 'B', '_', 'S', '_', 'B', 0,
  /* 4406 */ 'M', 'O', 'D', '_', 'S', '_', 'B', 0,
  /* 4414 */ 'C', 'L', 'E', '_', 'S', '_', 'B', 0,
  /* 4422 */ 'A', 'V', 'E', '_', 'S', '_', 'B', 0,
  /* 4430 */ 'C', 'L', 'E', 'I', '_', 'S', '_', 'B', 0,
  /* 4439 */ 'M', 'I', 'N', 'I', '_', 'S', '_', 'B', 0,
  /* 4448 */ 'C', 'L', 'T', 'I', '_', 'S', '_', 'B', 0,
  /* 4457 */ 'M', 'A', 'X', 'I', '_', 'S', '_', 'B', 0,
  /* 4466 */ 'M', 'I', 'N', '_', 'S', '_', 'B', 0,
  /* 4474 */ 'A', 'V', 'E', 'R', '_', 'S', '_', 'B', 0,
  /* 4483 */ 'S', 'U', 'B', 'S', '_', 'S', '_', 'B', 0,
  /* 4492 */ 'A', 'D', 'D', 'S', '_', 'S', '_', 'B', 0,
  /* 4501 */ 'S', 'A', 'T', '_', 'S', '_', 'B', 0,
  /* 4509 */ 'C', 'L', 'T', '_', 'S', '_', 'B', 0,
  /* 4517 */ 'S', 'U', 'B', 'S', 'U', 'U', '_', 'S', '_', 'B', 0,
  /* 4528 */ 'D', 'I', 'V', '_', 'S', '_', 'B', 0,
  /* 4536 */ 'M', 'A', 'X', '_', 'S', '_', 'B', 0,
  /* 4544 */ 'C', 'O', 'P', 'Y', '_', 'S', '_', 'B', 0,
  /* 4553 */ 'S', 'P', 'L', 'A', 'T', '_', 'B', 0,
  /* 4561 */ 'B', 'S', 'E', 'T', '_', 'B', 0,
  /* 4568 */ 'P', 'C', 'N', 'T', '_', 'B', 0,
  /* 4575 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'B', 0,
  /* 4584 */ 'S', 'T', '_', 'B', 0,
  /* 4589 */ 'A', 'S', 'U', 'B', '_', 'U', '_', 'B', 0,
  /* 4598 */ 'M', 'O', 'D', '_', 'U', '_', 'B', 0,
  /* 4606 */ 'C', 'L', 'E', '_', 'U', '_', 'B', 0,
  /* 4614 */ 'A', 'V', 'E', '_', 'U', '_', 'B', 0,
  /* 4622 */ 'C', 'L', 'E', 'I', '_', 'U', '_', 'B', 0,
  /* 4631 */ 'M', 'I', 'N', 'I', '_', 'U', '_', 'B', 0,
  /* 4640 */ 'C', 'L', 'T', 'I', '_', 'U', '_', 'B', 0,
  /* 4649 */ 'M', 'A', 'X', 'I', '_', 'U', '_', 'B', 0,
  /* 4658 */ 'M', 'I', 'N', '_', 'U', '_', 'B', 0,
  /* 4666 */ 'A', 'V', 'E', 'R', '_', 'U', '_', 'B', 0,
  /* 4675 */ 'S', 'U', 'B', 'S', '_', 'U', '_', 'B', 0,
  /* 4684 */ 'A', 'D', 'D', 'S', '_', 'U', '_', 'B', 0,
  /* 4693 */ 'S', 'U', 'B', 'S', 'U', 'S', '_', 'U', '_', 'B', 0,
  /* 4704 */ 'S', 'A', 'T', '_', 'U', '_', 'B', 0,
  /* 4712 */ 'C', 'L', 'T', '_', 'U', '_', 'B', 0,
  /* 4720 */ 'D', 'I', 'V', '_', 'U', '_', 'B', 0,
  /* 4728 */ 'M', 'A', 'X', '_', 'U', '_', 'B', 0,
  /* 4736 */ 'C', 'O', 'P', 'Y', '_', 'U', '_', 'B', 0,
  /* 4745 */ 'M', 'S', 'U', 'B', 'V', '_', 'B', 0,
  /* 4753 */ 'M', 'A', 'D', 'D', 'V', '_', 'B', 0,
  /* 4761 */ 'P', 'C', 'K', 'E', 'V', '_', 'B', 0,
  /* 4769 */ 'I', 'L', 'V', 'E', 'V', '_', 'B', 0,
  /* 4777 */ 'M', 'U', 'L', 'V', '_', 'B', 0,
  /* 4784 */ 'B', 'Z', '_', 'B', 0,
  /* 4789 */ 'B', 'N', 'Z', '_', 'B', 0,
  /* 4795 */ 'B', 'C', 0,
  /* 4798 */ 'B', 'G', 'E', 'C', 0,
  /* 4803 */ 'B', 'N', 'E', 'C', 0,
  /* 4808 */ 'J', 'I', 'C', 0,
  /* 4812 */ 'B', 'A', 'L', 'C', 0,
  /* 4817 */ 'J', 'I', 'A', 'L', 'C', 0,
  /* 4823 */ 'B', 'G', 'E', 'Z', 'A', 'L', 'C', 0,
  /* 4831 */ 'B', 'L', 'E', 'Z', 'A', 'L', 'C', 0,
  /* 4839 */ 'B', 'N', 'E', 'Z', 'A', 'L', 'C', 0,
  /* 4847 */ 'B', 'E', 'Q', 'Z', 'A', 'L', 'C', 0,
  /* 4855 */ 'B', 'G', 'T', 'Z', 'A', 'L', 'C', 0,
  /* 4863 */ 'B', 'L', 'T', 'Z', 'A', 'L', 'C', 0,
  /* 4871 */ 'S', 'Y', 'N', 'C', 0,
  /* 4876 */ 'L', 'D', 'P', 'C', 0,
  /* 4881 */ 'A', 'U', 'I', 'P', 'C', 0,
  /* 4887 */ 'A', 'L', 'U', 'I', 'P', 'C', 0,
  /* 4894 */ 'A', 'D', 'D', 'I', 'U', 'P', 'C', 0,
  /* 4902 */ 'L', 'W', 'U', 'P', 'C', 0,
  /* 4908 */ 'L', 'W', 'P', 'C', 0,
  /* 4913 */ 'B', 'E', 'Q', 'C', 0,
  /* 4918 */ 'A', 'D', 'D', 'S', 'C', 0,
  /* 4924 */ 'B', 'L', 'T', 'C', 0,
  /* 4929 */ 'B', 'G', 'E', 'U', 'C', 0,
  /* 4935 */ 'B', 'L', 'T', 'U', 'C', 0,
  /* 4941 */ 'B', 'N', 'V', 'C', 0,
  /* 4946 */ 'B', 'O', 'V', 'C', 0,
  /* 4951 */ 'A', 'D', 'D', 'W', 'C', 0,
  /* 4957 */ 'B', 'G', 'E', 'Z', 'C', 0,
  /* 4963 */ 'B', 'L', 'E', 'Z', 'C', 0,
  /* 4969 */ 'B', 'N', 'E', 'Z', 'C', 0,
  /* 4975 */ 'B', 'E', 'Q', 'Z', 'C', 0,
  /* 4981 */ 'B', 'G', 'T', 'Z', 'C', 0,
  /* 4987 */ 'B', 'L', 'T', 'Z', 'C', 0,
  /* 4993 */ 'S', 'C', 'D', 0,
  /* 4997 */ 'D', 'A', 'D', 'D', 0,
  /* 5002 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'A', 'D', 'D', 0,
  /* 5013 */ 'D', 'S', 'H', 'D', 0,
  /* 5018 */ 'L', 'L', 'D', 0,
  /* 5022 */ 'A', 'N', 'D', 0,
  /* 5026 */ 'P', 'R', 'E', 'P', 'E', 'N', 'D', 0,
  /* 5034 */ 'A', 'P', 'P', 'E', 'N', 'D', 0,
  /* 5041 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 5054 */ 'D', 'M', 'O', 'D', 0,
  /* 5059 */ 'L', 'O', 'A', 'D', '_', 'S', 'T', 'A', 'C', 'K', '_', 'G', 'U', 'A', 'R', 'D', 0,
  /* 5076 */ 'S', 'D', 0,
  /* 5079 */ 'F', 'L', 'O', 'G', '2', '_', 'D', 0,
  /* 5087 */ 'F', 'E', 'X', 'P', '2', '_', 'D', 0,
  /* 5095 */ 'M', 'I', 'N', 'A', '_', 'D', 0,
  /* 5102 */ 'S', 'R', 'A', '_', 'D', 0,
  /* 5108 */ 'M', 'A', 'X', 'A', '_', 'D', 0,
  /* 5115 */ 'A', 'D', 'D', '_', 'A', '_', 'D', 0,
  /* 5123 */ 'F', 'M', 'I', 'N', '_', 'A', '_', 'D', 0,
  /* 5132 */ 'A', 'D', 'D', 'S', '_', 'A', '_', 'D', 0,
  /* 5141 */ 'F', 'M', 'A', 'X', '_', 'A', '_', 'D', 0,
  /* 5150 */ 'F', 'S', 'U', 'B', '_', 'D', 0,
  /* 5157 */ 'F', 'M', 'S', 'U', 'B', '_', 'D', 0,
  /* 5165 */ 'N', 'L', 'O', 'C', '_', 'D', 0,
  /* 5172 */ 'N', 'L', 'Z', 'C', '_', 'D', 0,
  /* 5179 */ 'F', 'A', 'D', 'D', '_', 'D', 0,
  /* 5186 */ 'F', 'M', 'A', 'D', 'D', '_', 'D', 0,
  /* 5194 */ 'S', 'L', 'D', '_', 'D', 0,
  /* 5200 */ 'P', 'C', 'K', 'O', 'D', '_', 'D', 0,
  /* 5208 */ 'I', 'L', 'V', 'O', 'D', '_', 'D', 0,
  /* 5216 */ 'F', 'C', 'L', 'E', '_', 'D', 0,
  /* 5223 */ 'F', 'S', 'L', 'E', '_', 'D', 0,
  /* 5230 */ 'C', 'M', 'P', '_', 'S', 'L', 'E', '_', 'D', 0,
  /* 5240 */ 'F', 'C', 'U', 'L', 'E', '_', 'D', 0,
  /* 5248 */ 'F', 'S', 'U', 'L', 'E', '_', 'D', 0,
  /* 5256 */ 'C', 'M', 'P', '_', 'S', 'U', 'L', 'E', '_', 'D', 0,
  /* 5267 */ 'C', 'M', 'P', '_', 'U', 'L', 'E', '_', 'D', 0,
  /* 5277 */ 'C', 'M', 'P', '_', 'L', 'E', '_', 'D', 0,
  /* 5286 */ 'F', 'C', 'N', 'E', '_', 'D', 0,
  /* 5293 */ 'F', 'S', 'N', 'E', '_', 'D', 0,
  /* 5300 */ 'F', 'C', 'U', 'N', 'E', '_', 'D', 0,
  /* 5308 */ 'F', 'S', 'U', 'N', 'E', '_', 'D', 0,
  /* 5316 */ 'I', 'N', 'S', 'V', 'E', '_', 'D', 0,
  /* 5324 */ 'F', 'C', 'A', 'F', '_', 'D', 0,
  /* 5331 */ 'F', 'S', 'A', 'F', '_', 'D', 0,
  /* 5338 */ 'C', 'M', 'P', '_', 'S', 'A', 'F', '_', 'D', 0,
  /* 5348 */ 'M', 'S', 'U', 'B', 'F', '_', 'D', 0,
  /* 5356 */ 'M', 'A', 'D', 'D', 'F', '_', 'D', 0,
  /* 5364 */ 'V', 'S', 'H', 'F', '_', 'D', 0,
  /* 5371 */ 'C', 'M', 'P', '_', 'F', '_', 'D', 0,
  /* 5379 */ 'B', 'N', 'E', 'G', '_', 'D', 0,
  /* 5386 */ 'S', 'R', 'A', 'I', '_', 'D', 0,
  /* 5393 */ 'S', 'L', 'D', 'I', '_', 'D', 0,
  /* 5400 */ 'B', 'N', 'E', 'G', 'I', '_', 'D', 0,
  /* 5408 */ 'S', 'L', 'L', 'I', '_', 'D', 0,
  /* 5415 */ 'S', 'R', 'L', 'I', '_', 'D', 0,
  /* 5422 */ 'B', 'I', 'N', 'S', 'L', 'I', '_', 'D', 0,
  /* 5431 */ 'C', 'E', 'Q', 'I', '_', 'D', 0,
  /* 5438 */ 'S', 'R', 'A', 'R', 'I', '_', 'D', 0,
  /* 5446 */ 'B', 'C', 'L', 'R', 'I', '_', 'D', 0,
  /* 5454 */ 'S', 'R', 'L', 'R', 'I', '_', 'D', 0,
  /* 5462 */ 'B', 'I', 'N', 'S', 'R', 'I', '_', 'D', 0,
  /* 5471 */ 'S', 'P', 'L', 'A', 'T', 'I', '_', 'D', 0,
  /* 5480 */ 'B', 'S', 'E', 'T', 'I', '_', 'D', 0,
  /* 5488 */ 'S', 'U', 'B', 'V', 'I', '_', 'D', 0,
  /* 5496 */ 'A', 'D', 'D', 'V', 'I', '_', 'D', 0,
  /* 5504 */ 'S', 'E', 'L', '_', 'D', 0,
  /* 5510 */ 'F', 'I', 'L', 'L', '_', 'D', 0,
  /* 5517 */ 'S', 'L', 'L', '_', 'D', 0,
  /* 5523 */ 'F', 'E', 'X', 'U', 'P', 'L', '_', 'D', 0,
  /* 5532 */ 'F', 'F', 'Q', 'L', '_', 'D', 0,
  /* 5539 */ 'S', 'R', 'L', '_', 'D', 0,
  /* 5545 */ 'B', 'I', 'N', 'S', 'L', '_', 'D', 0,
  /* 5553 */ 'F', 'M', 'U', 'L', '_', 'D', 0,
  /* 5560 */ 'I', 'L', 'V', 'L', '_', 'D', 0,
  /* 5567 */ 'F', 'M', 'I', 'N', '_', 'D', 0,
  /* 5574 */ 'F', 'C', 'U', 'N', '_', 'D', 0,
  /* 5581 */ 'F', 'S', 'U', 'N', '_', 'D', 0,
  /* 5588 */ 'C', 'M', 'P', '_', 'S', 'U', 'N', '_', 'D', 0,
  /* 5598 */ 'C', 'M', 'P', '_', 'U', 'N', '_', 'D', 0,
  /* 5607 */ 'F', 'R', 'C', 'P', '_', 'D', 0,
  /* 5614 */ 'F', 'C', 'E', 'Q', '_', 'D', 0,
  /* 5621 */ 'F', 'S', 'E', 'Q', '_', 'D', 0,
  /* 5628 */ 'C', 'M', 'P', '_', 'S', 'E', 'Q', '_', 'D', 0,
  /* 5638 */ 'F', 'C', 'U', 'E', 'Q', '_', 'D', 0,
  /* 5646 */ 'F', 'S', 'U', 'E', 'Q', '_', 'D', 0,
  /* 5654 */ 'C', 'M', 'P', '_', 'S', 'U', 'E', 'Q', '_', 'D', 0,
  /* 5665 */ 'C', 'M', 'P', '_', 'U', 'E', 'Q', '_', 'D', 0,
  /* 5675 */ 'C', 'M', 'P', '_', 'E', 'Q', '_', 'D', 0,
  /* 5684 */ 'S', 'R', 'A', 'R', '_', 'D', 0,
  /* 5691 */ 'B', 'C', 'L', 'R', '_', 'D', 0,
  /* 5698 */ 'S', 'R', 'L', 'R', '_', 'D', 0,
  /* 5705 */ 'F', 'C', 'O', 'R', '_', 'D', 0,
  /* 5712 */ 'F', 'S', 'O', 'R', '_', 'D', 0,
  /* 5719 */ 'F', 'E', 'X', 'U', 'P', 'R', '_', 'D', 0,
  /* 5728 */ 'F', 'F', 'Q', 'R', '_', 'D', 0,
  /* 5735 */ 'B', 'I', 'N', 'S', 'R', '_', 'D', 0,
  /* 5743 */ 'I', 'L', 'V', 'R', '_', 'D', 0,
  /* 5750 */ 'F', 'A', 'B', 'S', '_', 'D', 0,
  /* 5757 */ 'F', 'C', 'L', 'A', 'S', 'S', '_', 'D', 0,
  /* 5766 */ 'A', 'S', 'U', 'B', '_', 'S', '_', 'D', 0,
  /* 5775 */ 'H', 'S', 'U', 'B', '_', 'S', '_', 'D', 0,
  /* 5784 */ 'D', 'P', 'S', 'U', 'B', '_', 'S', '_', 'D', 0,
  /* 5794 */ 'F', 'T', 'R', 'U', 'N', 'C', '_', 'S', '_', 'D', 0,
  /* 5805 */ 'H', 'A', 'D', 'D', '_', 'S', '_', 'D', 0,
  /* 5814 */ 'D', 'P', 'A', 'D', 'D', '_', 'S', '_', 'D', 0,
  /* 5824 */ 'M', 'O', 'D', '_', 'S', '_', 'D', 0,
  /* 5832 */ 'C', 'L', 'E', '_', 'S', '_', 'D', 0,
  /* 5840 */ 'A', 'V', 'E', '_', 'S', '_', 'D', 0,
  /* 5848 */ 'C', 'L', 'E', 'I', '_', 'S', '_', 'D', 0,
  /* 5857 */ 'M', 'I', 'N', 'I', '_', 'S', '_', 'D', 0,
  /* 5866 */ 'C', 'L', 'T', 'I', '_', 'S', '_', 'D', 0,
  /* 5875 */ 'M', 'A', 'X', 'I', '_', 'S', '_', 'D', 0,
  /* 5884 */ 'M', 'I', 'N', '_', 'S', '_', 'D', 0,
  /* 5892 */ 'D', 'O', 'T', 'P', '_', 'S', '_', 'D', 0,
  /* 5901 */ 'A', 'V', 'E', 'R', '_', 'S', '_', 'D', 0,
  /* 5910 */ 'S', 'U', 'B', 'S', '_', 'S', '_', 'D', 0,
  /* 5919 */ 'A', 'D', 'D', 'S', '_', 'S', '_', 'D', 0,
  /* 5928 */ 'S', 'A', 'T', '_', 'S', '_', 'D', 0,
  /* 5936 */ 'C', 'L', 'T', '_', 'S', '_', 'D', 0,
  /* 5944 */ 'F', 'F', 'I', 'N', 'T', '_', 'S', '_', 'D', 0,
  /* 5954 */ 'F', 'T', 'I', 'N', 'T', '_', 'S', '_', 'D', 0,
  /* 5964 */ 'S', 'U', 'B', 'S', 'U', 'U', '_', 'S', '_', 'D', 0,
  /* 5975 */ 'D', 'I', 'V', '_', 'S', '_', 'D', 0,
  /* 5983 */ 'M', 'A', 'X', '_', 'S', '_', 'D', 0,
  /* 5991 */ 'C', 'O', 'P', 'Y', '_', 'S', '_', 'D', 0,
  /* 6000 */ 'S', 'P', 'L', 'A', 'T', '_', 'D', 0,
  /* 6008 */ 'B', 'S', 'E', 'T', '_', 'D', 0,
  /* 6015 */ 'F', 'C', 'L', 'T', '_', 'D', 0,
  /* 6022 */ 'F', 'S', 'L', 'T', '_', 'D', 0,
  /* 6029 */ 'C', 'M', 'P', '_', 'S', 'L', 'T', '_', 'D', 0,
  /* 6039 */ 'F', 'C', 'U', 'L', 'T', '_', 'D', 0,
  /* 6047 */ 'F', 'S', 'U', 'L', 'T', '_', 'D', 0,
  /* 6055 */ 'C', 'M', 'P', '_', 'S', 'U', 'L', 'T', '_', 'D', 0,
  /* 6066 */ 'C', 'M', 'P', '_', 'U', 'L', 'T', '_', 'D', 0,
  /* 6076 */ 'C', 'M', 'P', '_', 'L', 'T', '_', 'D', 0,
  /* 6085 */ 'P', 'C', 'N', 'T', '_', 'D', 0,
  /* 6092 */ 'F', 'R', 'I', 'N', 'T', '_', 'D', 0,
  /* 6100 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'D', 0,
  /* 6109 */ 'F', 'S', 'Q', 'R', 'T', '_', 'D', 0,
  /* 6117 */ 'F', 'R', 'S', 'Q', 'R', 'T', '_', 'D', 0,
  /* 6126 */ 'S', 'T', '_', 'D', 0,
  /* 6131 */ 'A', 'S', 'U', 'B', '_', 'U', '_', 'D', 0,
  /* 6140 */ 'H', 'S', 'U', 'B', '_', 'U', '_', 'D', 0,
  /* 6149 */ 'D', 'P', 'S', 'U', 'B', '_', 'U', '_', 'D', 0,
  /* 6159 */ 'F', 'T', 'R', 'U', 'N', 'C', '_', 'U', '_', 'D', 0,
  /* 6170 */ 'H', 'A', 'D', 'D', '_', 'U', '_', 'D', 0,
  /* 6179 */ 'D', 'P', 'A', 'D', 'D', '_', 'U', '_', 'D', 0,
  /* 6189 */ 'M', 'O', 'D', '_', 'U', '_', 'D', 0,
  /* 6197 */ 'C', 'L', 'E', '_', 'U', '_', 'D', 0,
  /* 6205 */ 'A', 'V', 'E', '_', 'U', '_', 'D', 0,
  /* 6213 */ 'C', 'L', 'E', 'I', '_', 'U', '_', 'D', 0,
  /* 6222 */ 'M', 'I', 'N', 'I', '_', 'U', '_', 'D', 0,
  /* 6231 */ 'C', 'L', 'T', 'I', '_', 'U', '_', 'D', 0,
  /* 6240 */ 'M', 'A', 'X', 'I', '_', 'U', '_', 'D', 0,
  /* 6249 */ 'M', 'I', 'N', '_', 'U', '_', 'D', 0,
  /* 6257 */ 'D', 'O', 'T', 'P', '_', 'U', '_', 'D', 0,
  /* 6266 */ 'A', 'V', 'E', 'R', '_', 'U', '_', 'D', 0,
  /* 6275 */ 'S', 'U', 'B', 'S', '_', 'U', '_', 'D', 0,
  /* 6284 */ 'A', 'D', 'D', 'S', '_', 'U', '_', 'D', 0,
  /* 6293 */ 'S', 'U', 'B', 'S', 'U', 'S', '_', 'U', '_', 'D', 0,
  /* 6304 */ 'S', 'A', 'T', '_', 'U', '_', 'D', 0,
  /* 6312 */ 'C', 'L', 'T', '_', 'U', '_', 'D', 0,
  /* 6320 */ 'F', 'F', 'I', 'N', 'T', '_', 'U', '_', 'D', 0,
  /* 6330 */ 'F', 'T', 'I', 'N', 'T', '_', 'U', '_', 'D', 0,
  /* 6340 */ 'D', 'I', 'V', '_', 'U', '_', 'D', 0,
  /* 6348 */ 'M', 'A', 'X', '_', 'U', '_', 'D', 0,
  /* 6356 */ 'C', 'O', 'P', 'Y', '_', 'U', '_', 'D', 0,
  /* 6365 */ 'M', 'S', 'U', 'B', 'V', '_', 'D', 0,
  /* 6373 */ 'M', 'A', 'D', 'D', 'V', '_', 'D', 0,
  /* 6381 */ 'P', 'C', 'K', 'E', 'V', '_', 'D', 0,
  /* 6389 */ 'I', 'L', 'V', 'E', 'V', '_', 'D', 0,
  /* 6397 */ 'F', 'D', 'I', 'V', '_', 'D', 0,
  /* 6404 */ 'M', 'U', 'L', 'V', '_', 'D', 0,
  /* 6411 */ 'F', 'M', 'A', 'X', '_', 'D', 0,
  /* 6418 */ 'B', 'Z', '_', 'D', 0,
  /* 6423 */ 'S', 'E', 'L', 'N', 'E', 'Z', '_', 'D', 0,
  /* 6432 */ 'B', 'N', 'Z', '_', 'D', 0,
  /* 6438 */ 'S', 'E', 'L', 'E', 'Q', 'Z', '_', 'D', 0,
  /* 6447 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 6460 */ 'T', 'G', 'E', 0,
  /* 6464 */ 'C', 'A', 'C', 'H', 'E', 0,
  /* 6470 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 6477 */ 'B', 'N', 'E', 0,
  /* 6481 */ 'S', 'N', 'E', 0,
  /* 6485 */ 'T', 'N', 'E', 0,
  /* 6489 */ 'P', 'A', 'U', 'S', 'E', 0,
  /* 6495 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 6505 */ 'B', 'C', '1', 'F', 0,
  /* 6510 */ 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 6523 */ 'P', 'R', 'E', 'F', 0,
  /* 6528 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 6543 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 6557 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 6571 */ 'D', 'S', 'B', 'H', 0,
  /* 6576 */ 'W', 'S', 'B', 'H', 0,
  /* 6581 */ 'S', 'E', 'H', 0,
  /* 6585 */ 'L', 'H', 0,
  /* 6588 */ 'S', 'H', 'R', 'A', '_', 'P', 'H', 0,
  /* 6596 */ 'P', 'R', 'E', 'C', 'R', 'Q', '_', 'Q', 'B', '_', 'P', 'H', 0,
  /* 6609 */ 'P', 'R', 'E', 'C', 'R', '_', 'Q', 'B', '_', 'P', 'H', 0,
  /* 6621 */ 'P', 'R', 'E', 'C', 'R', 'Q', 'U', '_', 'S', '_', 'Q', 'B', '_', 'P', 'H', 0,
  /* 6637 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', '_', 'L', 'E', '_', 'P', 'H', 0,
  /* 6653 */ 'S', 'U', 'B', 'Q', 'H', '_', 'P', 'H', 0,
  /* 6662 */ 'A', 'D', 'D', 'Q', 'H', '_', 'P', 'H', 0,
  /* 6671 */ 'P', 's', 'e', 'u', 'd', 'o', 'P', 'I', 'C', 'K', '_', 'P', 'H', 0,
  /* 6685 */ 'S', 'H', 'L', 'L', '_', 'P', 'H', 0,
  /* 6693 */ 'R', 'E', 'P', 'L', '_', 'P', 'H', 0,
  /* 6701 */ 'S', 'H', 'R', 'L', '_', 'P', 'H', 0,
  /* 6709 */ 'P', 'A', 'C', 'K', 'R', 'L', '_', 'P', 'H', 0,
  /* 6719 */ 'M', 'U', 'L', '_', 'P', 'H', 0,
  /* 6726 */ 'S', 'U', 'B', 'Q', '_', 'P', 'H', 0,
  /* 6734 */ 'A', 'D', 'D', 'Q', '_', 'P', 'H', 0,
  /* 6742 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', '_', 'E', 'Q', '_', 'P', 'H', 0,
  /* 6758 */ 'S', 'H', 'R', 'A', '_', 'R', '_', 'P', 'H', 0,
  /* 6768 */ 'S', 'U', 'B', 'Q', 'H', '_', 'R', '_', 'P', 'H', 0,
  /* 6779 */ 'A', 'D', 'D', 'Q', 'H', '_', 'R', '_', 'P', 'H', 0,
  /* 6790 */ 'S', 'H', 'R', 'A', 'V', '_', 'R', '_', 'P', 'H', 0,
  /* 6801 */ 'M', 'U', 'L', 'Q', '_', 'R', 'S', '_', 'P', 'H', 0,
  /* 6812 */ 'S', 'H', 'L', 'L', '_', 'S', '_', 'P', 'H', 0,
  /* 6822 */ 'M', 'U', 'L', '_', 'S', '_', 'P', 'H', 0,
  /* 6831 */ 'S', 'U', 'B', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 6841 */ 'A', 'D', 'D', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 6851 */ 'M', 'U', 'L', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 6861 */ 'A', 'B', 'S', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 6871 */ 'S', 'U', 'B', 'U', '_', 'S', '_', 'P', 'H', 0,
  /* 6881 */ 'A', 'D', 'D', 'U', '_', 'S', '_', 'P', 'H', 0,
  /* 6891 */ 'S', 'H', 'L', 'L', 'V', '_', 'S', '_', 'P', 'H', 0,
  /* 6902 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', '_', 'L', 'T', '_', 'P', 'H', 0,
  /* 6918 */ 'S', 'U', 'B', 'U', '_', 'P', 'H', 0,
  /* 6926 */ 'A', 'D', 'D', 'U', '_', 'P', 'H', 0,
  /* 6934 */ 'S', 'H', 'R', 'A', 'V', '_', 'P', 'H', 0,
  /* 6943 */ 'S', 'H', 'L', 'L', 'V', '_', 'P', 'H', 0,
  /* 6952 */ 'R', 'E', 'P', 'L', 'V', '_', 'P', 'H', 0,
  /* 6961 */ 'S', 'H', 'R', 'L', 'V', '_', 'P', 'H', 0,
  /* 6970 */ 'D', 'P', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 6979 */ 'M', 'U', 'L', 'S', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 6990 */ 'D', 'P', 'A', 'Q', 'X', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 7004 */ 'D', 'P', 'S', 'Q', 'X', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 7018 */ 'D', 'P', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 7027 */ 'D', 'P', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 7039 */ 'M', 'U', 'L', 'S', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 7053 */ 'D', 'P', 'S', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 7065 */ 'D', 'P', 'A', 'Q', 'X', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 7078 */ 'D', 'P', 'S', 'Q', 'X', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 7091 */ 'D', 'P', 'A', 'X', '_', 'W', '_', 'P', 'H', 0,
  /* 7101 */ 'D', 'P', 'S', 'X', '_', 'W', '_', 'P', 'H', 0,
  /* 7111 */ 'S', 'H', 0,
  /* 7114 */ 'D', 'M', 'U', 'H', 0,
  /* 7119 */ 'S', 'R', 'A', '_', 'H', 0,
  /* 7125 */ 'A', 'D', 'D', '_', 'A', '_', 'H', 0,
  /* 7133 */ 'M', 'I', 'N', '_', 'A', '_', 'H', 0,
  /* 7141 */ 'A', 'D', 'D', 'S', '_', 'A', '_', 'H', 0,
  /* 7150 */ 'M', 'A', 'X', '_', 'A', '_', 'H', 0,
  /* 7158 */ 'N', 'L', 'O', 'C', '_', 'H', 0,
  /* 7165 */ 'N', 'L', 'Z', 'C', '_', 'H', 0,
  /* 7172 */ 'S', 'L', 'D', '_', 'H', 0,
  /* 7178 */ 'P', 'C', 'K', 'O', 'D', '_', 'H', 0,
  /* 7186 */ 'I', 'L', 'V', 'O', 'D', '_', 'H', 0,
  /* 7194 */ 'I', 'N', 'S', 'V', 'E', '_', 'H', 0,
  /* 7202 */ 'V', 'S', 'H', 'F', '_', 'H', 0,
  /* 7209 */ 'B', 'N', 'E', 'G', '_', 'H', 0,
  /* 7216 */ 'S', 'R', 'A', 'I', '_', 'H', 0,
  /* 7223 */ 'S', 'L', 'D', 'I', '_', 'H', 0,
  /* 7230 */ 'B', 'N', 'E', 'G', 'I', '_', 'H', 0,
  /* 7238 */ 'S', 'L', 'L', 'I', '_', 'H', 0,
  /* 7245 */ 'S', 'R', 'L', 'I', '_', 'H', 0,
  /* 7252 */ 'B', 'I', 'N', 'S', 'L', 'I', '_', 'H', 0,
  /* 7261 */ 'C', 'E', 'Q', 'I', '_', 'H', 0,
  /* 7268 */ 'S', 'R', 'A', 'R', 'I', '_', 'H', 0,
  /* 7276 */ 'B', 'C', 'L', 'R', 'I', '_', 'H', 0,
  /* 7284 */ 'S', 'R', 'L', 'R', 'I', '_', 'H', 0,
  /* 7292 */ 'B', 'I', 'N', 'S', 'R', 'I', '_', 'H', 0,
  /* 7301 */ 'S', 'P', 'L', 'A', 'T', 'I', '_', 'H', 0,
  /* 7310 */ 'B', 'S', 'E', 'T', 'I', '_', 'H', 0,
  /* 7318 */ 'S', 'U', 'B', 'V', 'I', '_', 'H', 0,
  /* 7326 */ 'A', 'D', 'D', 'V', 'I', '_', 'H', 0,
  /* 7334 */ 'F', 'I', 'L', 'L', '_', 'H', 0,
  /* 7341 */ 'S', 'L', 'L', '_', 'H', 0,
  /* 7347 */ 'S', 'R', 'L', '_', 'H', 0,
  /* 7353 */ 'B', 'I', 'N', 'S', 'L', '_', 'H', 0,
  /* 7361 */ 'I', 'L', 'V', 'L', '_', 'H', 0,
  /* 7368 */ 'F', 'E', 'X', 'D', 'O', '_', 'H', 0,
  /* 7376 */ 'C', 'E', 'Q', '_', 'H', 0,
  /* 7382 */ 'F', 'T', 'Q', '_', 'H', 0,
  /* 7388 */ 'M', 'S', 'U', 'B', '_', 'Q', '_', 'H', 0,
  /* 7397 */ 'M', 'A', 'D', 'D', '_', 'Q', '_', 'H', 0,
  /* 7406 */ 'M', 'U', 'L', '_', 'Q', '_', 'H', 0,
  /* 7414 */ 'M', 'S', 'U', 'B', 'R', '_', 'Q', '_', 'H', 0,
  /* 7424 */ 'M', 'A', 'D', 'D', 'R', '_', 'Q', '_', 'H', 0,
  /* 7434 */ 'M', 'U', 'L', 'R', '_', 'Q', '_', 'H', 0,
  /* 7443 */ 'S', 'R', 'A', 'R', '_', 'H', 0,
  /* 7450 */ 'B', 'C', 'L', 'R', '_', 'H', 0,
  /* 7457 */ 'S', 'R', 'L', 'R', '_', 'H', 0,
  /* 7464 */ 'B', 'I', 'N', 'S', 'R', '_', 'H', 0,
  /* 7472 */ 'I', 'L', 'V', 'R', '_', 'H', 0,
  /* 7479 */ 'A', 'S', 'U', 'B', '_', 'S', '_', 'H', 0,
  /* 7488 */ 'H', 'S', 'U', 'B', '_', 'S', '_', 'H', 0,
  /* 7497 */ 'D', 'P', 'S', 'U', 'B', '_', 'S', '_', 'H', 0,
  /* 7507 */ 'H', 'A', 'D', 'D', '_', 'S', '_', 'H', 0,
  /* 7516 */ 'D', 'P', 'A', 'D', 'D', '_', 'S', '_', 'H', 0,
  /* 7526 */ 'M', 'O', 'D', '_', 'S', '_', 'H', 0,
  /* 7534 */ 'C', 'L', 'E', '_', 'S', '_', 'H', 0,
  /* 7542 */ 'A', 'V', 'E', '_', 'S', '_', 'H', 0,
  /* 7550 */ 'C', 'L', 'E', 'I', '_', 'S', '_', 'H', 0,
  /* 7559 */ 'M', 'I', 'N', 'I', '_', 'S', '_', 'H', 0,
  /* 7568 */ 'C', 'L', 'T', 'I', '_', 'S', '_', 'H', 0,
  /* 7577 */ 'M', 'A', 'X', 'I', '_', 'S', '_', 'H', 0,
  /* 7586 */ 'M', 'I', 'N', '_', 'S', '_', 'H', 0,
  /* 7594 */ 'D', 'O', 'T', 'P', '_', 'S', '_', 'H', 0,
  /* 7603 */ 'A', 'V', 'E', 'R', '_', 'S', '_', 'H', 0,
  /* 7612 */ 'E', 'X', 'T', 'R', '_', 'S', '_', 'H', 0,
  /* 7621 */ 'S', 'U', 'B', 'S', '_', 'S', '_', 'H', 0,
  /* 7630 */ 'A', 'D', 'D', 'S', '_', 'S', '_', 'H', 0,
  /* 7639 */ 'S', 'A', 'T', '_', 'S', '_', 'H', 0,
  /* 7647 */ 'C', 'L', 'T', '_', 'S', '_', 'H', 0,
  /* 7655 */ 'S', 'U', 'B', 'S', 'U', 'U', '_', 'S', '_', 'H', 0,
  /* 7666 */ 'D', 'I', 'V', '_', 'S', '_', 'H', 0,
  /* 7674 */ 'E', 'X', 'T', 'R', 'V', '_', 'S', '_', 'H', 0,
  /* 7684 */ 'M', 'A', 'X', '_', 'S', '_', 'H', 0,
  /* 7692 */ 'C', 'O', 'P', 'Y', '_', 'S', '_', 'H', 0,
  /* 7701 */ 'S', 'P', 'L', 'A', 'T', '_', 'H', 0,
  /* 7709 */ 'B', 'S', 'E', 'T', '_', 'H', 0,
  /* 7716 */ 'P', 'C', 'N', 'T', '_', 'H', 0,
  /* 7723 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'H', 0,
  /* 7732 */ 'S', 'T', '_', 'H', 0,
  /* 7737 */ 'A', 'S', 'U', 'B', '_', 'U', '_', 'H', 0,
  /* 7746 */ 'H', 'S', 'U', 'B', '_', 'U', '_', 'H', 0,
  /* 7755 */ 'D', 'P', 'S', 'U', 'B', '_', 'U', '_', 'H', 0,
  /* 7765 */ 'H', 'A', 'D', 'D', '_', 'U', '_', 'H', 0,
  /* 7774 */ 'D', 'P', 'A', 'D', 'D', '_', 'U', '_', 'H', 0,
  /* 7784 */ 'M', 'O', 'D', '_', 'U', '_', 'H', 0,
  /* 7792 */ 'C', 'L', 'E', '_', 'U', '_', 'H', 0,
  /* 7800 */ 'A', 'V', 'E', '_', 'U', '_', 'H', 0,
  /* 7808 */ 'C', 'L', 'E', 'I', '_', 'U', '_', 'H', 0,
  /* 7817 */ 'M', 'I', 'N', 'I', '_', 'U', '_', 'H', 0,
  /* 7826 */ 'C', 'L', 'T', 'I', '_', 'U', '_', 'H', 0,
  /* 7835 */ 'M', 'A', 'X', 'I', '_', 'U', '_', 'H', 0,
  /* 7844 */ 'M', 'I', 'N', '_', 'U', '_', 'H', 0,
  /* 7852 */ 'D', 'O', 'T', 'P', '_', 'U', '_', 'H', 0,
  /* 7861 */ 'A', 'V', 'E', 'R', '_', 'U', '_', 'H', 0,
  /* 7870 */ 'S', 'U', 'B', 'S', '_', 'U', '_', 'H', 0,
  /* 7879 */ 'A', 'D', 'D', 'S', '_', 'U', '_', 'H', 0,
  /* 7888 */ 'S', 'U', 'B', 'S', 'U', 'S', '_', 'U', '_', 'H', 0,
  /* 7899 */ 'S', 'A', 'T', '_', 'U', '_', 'H', 0,
  /* 7907 */ 'C', 'L', 'T', '_', 'U', '_', 'H', 0,
  /* 7915 */ 'D', 'I', 'V', '_', 'U', '_', 'H', 0,
  /* 7923 */ 'M', 'A', 'X', '_', 'U', '_', 'H', 0,
  /* 7931 */ 'C', 'O', 'P', 'Y', '_', 'U', '_', 'H', 0,
  /* 7940 */ 'M', 'S', 'U', 'B', 'V', '_', 'H', 0,
  /* 7948 */ 'M', 'A', 'D', 'D', 'V', '_', 'H', 0,
  /* 7956 */ 'P', 'C', 'K', 'E', 'V', '_', 'H', 0,
  /* 7964 */ 'I', 'L', 'V', 'E', 'V', '_', 'H', 0,
  /* 7972 */ 'M', 'U', 'L', 'V', '_', 'H', 0,
  /* 7979 */ 'B', 'Z', '_', 'H', 0,
  /* 7984 */ 'B', 'N', 'Z', '_', 'H', 0,
  /* 7990 */ 'D', 'I', 0,
  /* 7993 */ 'T', 'G', 'E', 'I', 0,
  /* 7998 */ 'T', 'N', 'E', 'I', 0,
  /* 8003 */ 'D', 'A', 'H', 'I', 0,
  /* 8008 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'F', 'H', 'I', 0,
  /* 8019 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'T', 'L', 'O', 'H', 'I', 0,
  /* 8032 */ 'P', 'H', 'I', 0,
  /* 8036 */ 'M', 'T', 'H', 'I', 0,
  /* 8041 */ 'T', 'E', 'Q', 'I', 0,
  /* 8046 */ 'D', 'A', 'T', 'I', 0,
  /* 8051 */ 'T', 'L', 'T', 'I', 0,
  /* 8056 */ 'D', 'A', 'U', 'I', 0,
  /* 8061 */ 'T', 'L', 'B', 'W', 'I', 0,
  /* 8067 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'I', 0,
  /* 8078 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'I', 0,
  /* 8089 */ 'M', 'O', 'V', 'F', '_', 'I', 0,
  /* 8096 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'I', 0,
  /* 8105 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'I', 0,
  /* 8114 */ 'M', 'O', 'V', 'T', '_', 'I', 0,
  /* 8121 */ 'J', 0,
  /* 8123 */ 'B', 'R', 'E', 'A', 'K', 0,
  /* 8129 */ 'B', 'A', 'L', 0,
  /* 8133 */ 'J', 'A', 'L', 0,
  /* 8137 */ 'B', 'G', 'E', 'Z', 'A', 'L', 0,
  /* 8144 */ 'B', 'L', 'T', 'Z', 'A', 'L', 0,
  /* 8151 */ 'M', 'U', 'L', 'E', 'U', '_', 'S', '_', 'P', 'H', '_', 'Q', 'B', 'L', 0,
  /* 8166 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 0,
  /* 8180 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 0,
  /* 8195 */ 'D', 'P', 'A', 'U', '_', 'H', '_', 'Q', 'B', 'L', 0,
  /* 8206 */ 'D', 'P', 'S', 'U', '_', 'H', '_', 'Q', 'B', 'L', 0,
  /* 8217 */ 'L', 'D', 'L', 0,
  /* 8221 */ 'S', 'D', 'L', 0,
  /* 8225 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 8234 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 8243 */ 'M', 'A', 'Q', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 8256 */ 'P', 'R', 'E', 'C', 'E', 'Q', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 8269 */ 'M', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 8281 */ 'M', 'U', 'L', 'E', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 8295 */ 'T', 'A', 'I', 'L', 'C', 'A', 'L', 'L', 0,
  /* 8304 */ 'S', 'Y', 'S', 'C', 'A', 'L', 'L', 0,
  /* 8312 */ 'K', 'I', 'L', 'L', 0,
  /* 8317 */ 'D', 'S', 'L', 'L', 0,
  /* 8322 */ 'D', 'S', 'R', 'L', 0,
  /* 8327 */ 'D', 'M', 'U', 'L', 0,
  /* 8332 */ 'L', 'W', 'L', 0,
  /* 8336 */ 'S', 'W', 'L', 0,
  /* 8340 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'D', '6', '4', '_', 'L', 0,
  /* 8356 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'S', '_', 'L', 0,
  /* 8370 */ 'L', 'D', 'C', '1', '_', 'M', 'M', 0,
  /* 8378 */ 'S', 'D', 'C', '1', '_', 'M', 'M', 0,
  /* 8386 */ 'C', 'F', 'C', '1', '_', 'M', 'M', 0,
  /* 8394 */ 'M', 'F', 'C', '1', '_', 'M', 'M', 0,
  /* 8402 */ 'M', 'F', 'H', 'C', '1', '_', 'M', 'M', 0,
  /* 8411 */ 'M', 'T', 'H', 'C', '1', '_', 'M', 'M', 0,
  /* 8420 */ 'C', 'T', 'C', '1', '_', 'M', 'M', 0,
  /* 8428 */ 'M', 'T', 'C', '1', '_', 'M', 'M', 0,
  /* 8436 */ 'L', 'W', 'C', '1', '_', 'M', 'M', 0,
  /* 8444 */ 'S', 'W', 'C', '1', '_', 'M', 'M', 0,
  /* 8452 */ 'L', 'U', 'X', 'C', '1', '_', 'M', 'M', 0,
  /* 8461 */ 'S', 'U', 'X', 'C', '1', '_', 'M', 'M', 0,
  /* 8470 */ 'L', 'W', 'X', 'C', '1', '_', 'M', 'M', 0,
  /* 8479 */ 'S', 'W', 'X', 'C', '1', '_', 'M', 'M', 0,
  /* 8488 */ 'N', 'M', 'S', 'U', 'B', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 8501 */ 'N', 'M', 'A', 'D', 'D', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 8514 */ 'M', 'O', 'V', 'F', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 8526 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 8540 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 8554 */ 'F', 'C', 'M', 'P', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 8566 */ 'C', 'V', 'T', '_', 'S', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 8579 */ 'M', 'O', 'V', 'T', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 8591 */ 'F', 'M', 'O', 'V', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 8603 */ 'F', 'C', 'M', 'P', '_', 'S', '3', '2', '_', 'M', 'M', 0,
  /* 8615 */ 'C', 'V', 'T', '_', 'L', '_', 'D', '6', '4', '_', 'M', 'M', 0,
  /* 8628 */ 'M', 'O', 'V', 'E', '1', '6', '_', 'M', 'M', 0,
  /* 8638 */ 'M', 'F', 'H', 'I', '1', '6', '_', 'M', 'M', 0,
  /* 8648 */ 'M', 'F', 'L', 'O', '1', '6', '_', 'M', 'M', 0,
  /* 8658 */ 'J', 'A', 'L', 'R', '1', '6', '_', 'M', 'M', 0,
  /* 8668 */ 'S', 'R', 'A', '_', 'M', 'M', 0,
  /* 8675 */ 'S', 'E', 'B', '_', 'M', 'M', 0,
  /* 8682 */ 'L', 'B', '_', 'M', 'M', 0,
  /* 8688 */ 'S', 'B', '_', 'M', 'M', 0,
  /* 8694 */ 'F', 'S', 'U', 'B', '_', 'M', 'M', 0,
  /* 8702 */ 'M', 'S', 'U', 'B', '_', 'M', 'M', 0,
  /* 8710 */ 'S', 'Y', 'N', 'C', '_', 'M', 'M', 0,
  /* 8718 */ 'S', 'C', '_', 'M', 'M', 0,
  /* 8724 */ 'F', 'A', 'D', 'D', '_', 'M', 'M', 0,
  /* 8732 */ 'M', 'A', 'D', 'D', '_', 'M', 'M', 0,
  /* 8740 */ 'A', 'N', 'D', '_', 'M', 'M', 0,
  /* 8747 */ 'T', 'G', 'E', '_', 'M', 'M', 0,
  /* 8754 */ 'B', 'N', 'E', '_', 'M', 'M', 0,
  /* 8761 */ 'T', 'N', 'E', '_', 'M', 'M', 0,
  /* 8768 */ 'B', 'C', '1', 'F', '_', 'M', 'M', 0,
  /* 8776 */ 'F', 'N', 'E', 'G', '_', 'M', 'M', 0,
  /* 8784 */ 'W', 'S', 'B', 'H', '_', 'M', 'M', 0,
  /* 8792 */ 'S', 'E', 'H', '_', 'M', 'M', 0,
  /* 8799 */ 'L', 'H', '_', 'M', 'M', 0,
  /* 8805 */ 'S', 'H', '_', 'M', 'M', 0,
  /* 8811 */ 'D', 'I', '_', 'M', 'M', 0,
  /* 8817 */ 'T', 'G', 'E', 'I', '_', 'M', 'M', 0,
  /* 8825 */ 'T', 'N', 'E', 'I', '_', 'M', 'M', 0,
  /* 8833 */ 'M', 'F', 'H', 'I', '_', 'M', 'M', 0,
  /* 8841 */ 'M', 'T', 'H', 'I', '_', 'M', 'M', 0,
  /* 8849 */ 'T', 'E', 'Q', 'I', '_', 'M', 'M', 0,
  /* 8857 */ 'T', 'L', 'T', 'I', '_', 'M', 'M', 0,
  /* 8865 */ 'M', 'O', 'V', 'F', '_', 'I', '_', 'M', 'M', 0,
  /* 8875 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'M', 'M', 0,
  /* 8885 */ 'M', 'O', 'V', 'T', '_', 'I', '_', 'M', 'M', 0,
  /* 8895 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'M', 'M', 0,
  /* 8905 */ 'J', '_', 'M', 'M', 0,
  /* 8910 */ 'B', 'R', 'E', 'A', 'K', '_', 'M', 'M', 0,
  /* 8919 */ 'J', 'A', 'L', '_', 'M', 'M', 0,
  /* 8926 */ 'B', 'G', 'E', 'Z', 'A', 'L', '_', 'M', 'M', 0,
  /* 8936 */ 'B', 'L', 'T', 'Z', 'A', 'L', '_', 'M', 'M', 0,
  /* 8946 */ 'S', 'Y', 'S', 'C', 'A', 'L', 'L', '_', 'M', 'M', 0,
  /* 8957 */ 'S', 'L', 'L', '_', 'M', 'M', 0,
  /* 8964 */ 'S', 'R', 'L', '_', 'M', 'M', 0,
  /* 8971 */ 'F', 'M', 'U', 'L', '_', 'M', 'M', 0,
  /* 8979 */ 'L', 'W', 'L', '_', 'M', 'M', 0,
  /* 8986 */ 'S', 'W', 'L', '_', 'M', 'M', 0,
  /* 8993 */ 'C', 'L', 'O', '_', 'M', 'M', 0,
  /* 9000 */ 'M', 'F', 'L', 'O', '_', 'M', 'M', 0,
  /* 9008 */ 'M', 'T', 'L', 'O', '_', 'M', 'M', 0,
  /* 9016 */ 'B', 'E', 'Q', '_', 'M', 'M', 0,
  /* 9023 */ 'T', 'E', 'Q', '_', 'M', 'M', 0,
  /* 9030 */ 'J', 'R', '_', 'M', 'M', 0,
  /* 9036 */ 'J', 'A', 'L', 'R', '_', 'M', 'M', 0,
  /* 9044 */ 'N', 'O', 'R', '_', 'M', 'M', 0,
  /* 9051 */ 'X', 'O', 'R', '_', 'M', 'M', 0,
  /* 9058 */ 'R', 'O', 'T', 'R', '_', 'M', 'M', 0,
  /* 9066 */ 'L', 'W', 'R', '_', 'M', 'M', 0,
  /* 9073 */ 'S', 'W', 'R', '_', 'M', 'M', 0,
  /* 9080 */ 'F', 'A', 'B', 'S', '_', 'M', 'M', 0,
  /* 9088 */ 'I', 'N', 'S', '_', 'M', 'M', 0,
  /* 9095 */ 'F', 'S', 'U', 'B', '_', 'S', '_', 'M', 'M', 0,
  /* 9105 */ 'N', 'M', 'S', 'U', 'B', '_', 'S', '_', 'M', 'M', 0,
  /* 9116 */ 'F', 'A', 'D', 'D', '_', 'S', '_', 'M', 'M', 0,
  /* 9126 */ 'N', 'M', 'A', 'D', 'D', '_', 'S', '_', 'M', 'M', 0,
  /* 9137 */ 'C', 'V', 'T', '_', 'D', '_', 'S', '_', 'M', 'M', 0,
  /* 9148 */ 'M', 'O', 'V', 'F', '_', 'S', '_', 'M', 'M', 0,
  /* 9158 */ 'F', 'N', 'E', 'G', '_', 'S', '_', 'M', 'M', 0,
  /* 9168 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'S', '_', 'M', 'M', 0,
  /* 9180 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'S', '_', 'M', 'M', 0,
  /* 9192 */ 'F', 'M', 'U', 'L', '_', 'S', '_', 'M', 'M', 0,
  /* 9202 */ 'C', 'V', 'T', '_', 'L', '_', 'S', '_', 'M', 'M', 0,
  /* 9213 */ 'F', 'A', 'B', 'S', '_', 'S', '_', 'M', 'M', 0,
  /* 9223 */ 'F', 'S', 'Q', 'R', 'T', '_', 'S', '_', 'M', 'M', 0,
  /* 9234 */ 'M', 'O', 'V', 'T', '_', 'S', '_', 'M', 'M', 0,
  /* 9244 */ 'F', 'D', 'I', 'V', '_', 'S', '_', 'M', 'M', 0,
  /* 9254 */ 'F', 'M', 'O', 'V', '_', 'S', '_', 'M', 'M', 0,
  /* 9264 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'S', '_', 'M', 'M', 0,
  /* 9277 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'S', '_', 'M', 'M', 0,
  /* 9290 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'S', '_', 'M', 'M', 0,
  /* 9302 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'S', '_', 'M', 'M', 0,
  /* 9315 */ 'C', 'V', 'T', '_', 'W', '_', 'S', '_', 'M', 'M', 0,
  /* 9326 */ 'B', 'C', '1', 'T', '_', 'M', 'M', 0,
  /* 9334 */ 'D', 'E', 'R', 'E', 'T', '_', 'M', 'M', 0,
  /* 9343 */ 'W', 'A', 'I', 'T', '_', 'M', 'M', 0,
  /* 9351 */ 'S', 'L', 'T', '_', 'M', 'M', 0,
  /* 9358 */ 'T', 'L', 'T', '_', 'M', 'M', 0,
  /* 9365 */ 'M', 'U', 'L', 'T', '_', 'M', 'M', 0,
  /* 9373 */ 'F', 'S', 'Q', 'R', 'T', '_', 'M', 'M', 0,
  /* 9382 */ 'E', 'X', 'T', '_', 'M', 'M', 0,
  /* 9389 */ 'M', 'S', 'U', 'B', 'U', '_', 'M', 'M', 0,
  /* 9398 */ 'M', 'A', 'D', 'D', 'U', '_', 'M', 'M', 0,
  /* 9407 */ 'T', 'G', 'E', 'U', '_', 'M', 'M', 0,
  /* 9415 */ 'T', 'G', 'E', 'I', 'U', '_', 'M', 'M', 0,
  /* 9424 */ 'T', 'L', 'T', 'I', 'U', '_', 'M', 'M', 0,
  /* 9433 */ 'T', 'L', 'T', 'U', '_', 'M', 'M', 0,
  /* 9441 */ 'L', 'W', 'U', '_', 'M', 'M', 0,
  /* 9448 */ 'S', 'R', 'A', 'V', '_', 'M', 'M', 0,
  /* 9456 */ 'F', 'D', 'I', 'V', '_', 'M', 'M', 0,
  /* 9464 */ 'S', 'D', 'I', 'V', '_', 'M', 'M', 0,
  /* 9472 */ 'U', 'D', 'I', 'V', '_', 'M', 'M', 0,
  /* 9480 */ 'S', 'L', 'L', 'V', '_', 'M', 'M', 0,
  /* 9488 */ 'S', 'R', 'L', 'V', '_', 'M', 'M', 0,
  /* 9496 */ 'R', 'O', 'T', 'R', 'V', '_', 'M', 'M', 0,
  /* 9505 */ 'L', 'W', '_', 'M', 'M', 0,
  /* 9511 */ 'S', 'W', '_', 'M', 'M', 0,
  /* 9517 */ 'C', 'V', 'T', '_', 'D', '3', '2', '_', 'W', '_', 'M', 'M', 0,
  /* 9530 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'M', 'M', 0,
  /* 9541 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'M', 'M', 0,
  /* 9552 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'M', 'M', 0,
  /* 9562 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'M', 'M', 0,
  /* 9573 */ 'C', 'V', 'T', '_', 'S', '_', 'W', '_', 'M', 'M', 0,
  /* 9584 */ 'C', 'V', 'T', '_', 'W', '_', 'M', 'M', 0,
  /* 9593 */ 'B', 'G', 'E', 'Z', '_', 'M', 'M', 0,
  /* 9601 */ 'B', 'L', 'E', 'Z', '_', 'M', 'M', 0,
  /* 9609 */ 'C', 'L', 'Z', '_', 'M', 'M', 0,
  /* 9616 */ 'B', 'G', 'T', 'Z', '_', 'M', 'M', 0,
  /* 9624 */ 'B', 'L', 'T', 'Z', '_', 'M', 'M', 0,
  /* 9632 */ 'A', 'D', 'D', 'i', '_', 'M', 'M', 0,
  /* 9640 */ 'A', 'N', 'D', 'i', '_', 'M', 'M', 0,
  /* 9648 */ 'X', 'O', 'R', 'i', '_', 'M', 'M', 0,
  /* 9656 */ 'S', 'L', 'T', 'i', '_', 'M', 'M', 0,
  /* 9664 */ 'L', 'U', 'i', '_', 'M', 'M', 0,
  /* 9671 */ 'L', 'B', 'u', '_', 'M', 'M', 0,
  /* 9678 */ 'S', 'U', 'B', 'u', '_', 'M', 'M', 0,
  /* 9686 */ 'A', 'D', 'D', 'u', '_', 'M', 'M', 0,
  /* 9694 */ 'L', 'H', 'u', '_', 'M', 'M', 0,
  /* 9701 */ 'S', 'L', 'T', 'u', '_', 'M', 'M', 0,
  /* 9709 */ 'M', 'U', 'L', 'T', 'u', '_', 'M', 'M', 0,
  /* 9718 */ 'L', 'E', 'A', '_', 'A', 'D', 'D', 'i', 'u', '_', 'M', 'M', 0,
  /* 9731 */ 'S', 'L', 'T', 'i', 'u', '_', 'M', 'M', 0,
  /* 9740 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 9750 */ 'D', 'I', 'N', 'S', 'M', 0,
  /* 9756 */ 'D', 'E', 'X', 'T', 'M', 0,
  /* 9762 */ 'B', 'A', 'L', 'I', 'G', 'N', 0,
  /* 9769 */ 'D', 'A', 'L', 'I', 'G', 'N', 0,
  /* 9776 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 9792 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 9809 */ 'F', 'E', 'X', 'P', '2', '_', 'D', '_', '1', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 9826 */ 'F', 'E', 'X', 'P', '2', '_', 'W', '_', '1', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 9843 */ 'B', 'P', 'O', 'S', 'G', 'E', '3', '2', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 9859 */ 'S', 'N', 'Z', '_', 'B', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 9872 */ 'S', 'Z', '_', 'B', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 9884 */ 'B', 'S', 'E', 'L', '_', 'F', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 9899 */ 'F', 'I', 'L', 'L', '_', 'F', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 9914 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'F', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 9931 */ 'C', 'O', 'P', 'Y', '_', 'F', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 9946 */ 'B', 'S', 'E', 'L', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 9960 */ 'A', 'N', 'D', '_', 'V', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 9975 */ 'N', 'O', 'R', '_', 'V', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 9990 */ 'X', 'O', 'R', '_', 'V', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10005 */ 'S', 'N', 'Z', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10018 */ 'S', 'Z', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10030 */ 'B', 'S', 'E', 'L', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10044 */ 'A', 'N', 'D', '_', 'V', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10059 */ 'N', 'O', 'R', '_', 'V', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10074 */ 'X', 'O', 'R', '_', 'V', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10089 */ 'S', 'N', 'Z', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10102 */ 'S', 'Z', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10114 */ 'S', 'N', 'Z', '_', 'V', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10127 */ 'S', 'Z', '_', 'V', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10139 */ 'B', 'S', 'E', 'L', '_', 'F', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10154 */ 'F', 'I', 'L', 'L', '_', 'F', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10169 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'F', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10186 */ 'C', 'O', 'P', 'Y', '_', 'F', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10201 */ 'B', 'S', 'E', 'L', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10215 */ 'A', 'N', 'D', '_', 'V', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10230 */ 'N', 'O', 'R', '_', 'V', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10245 */ 'X', 'O', 'R', '_', 'V', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10260 */ 'S', 'N', 'Z', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10273 */ 'S', 'Z', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10285 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'B', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10306 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'F', 'D', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10328 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'D', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10349 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'H', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10370 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'F', 'W', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10392 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'W', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 10413 */ 'D', 'C', 'L', 'O', 0,
  /* 10418 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'F', 'L', 'O', 0,
  /* 10429 */ 'S', 'H', 'I', 'L', 'O', 0,
  /* 10435 */ 'M', 'T', 'L', 'O', 0,
  /* 10440 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 10449 */ 'T', 'R', 'A', 'P', 0,
  /* 10454 */ 'D', 'B', 'I', 'T', 'S', 'W', 'A', 'P', 0,
  /* 10463 */ 'S', 'D', 'B', 'B', 'P', 0,
  /* 10469 */ 'T', 'L', 'B', 'P', 0,
  /* 10474 */ 'E', 'X', 'T', 'P', 'D', 'P', 0,
  /* 10481 */ 'M', 'T', 'H', 'L', 'I', 'P', 0,
  /* 10488 */ 'S', 'S', 'N', 'O', 'P', 0,
  /* 10494 */ 'D', 'P', 'O', 'P', 0,
  /* 10499 */ 'L', 'O', 'A', 'D', '_', 'A', 'C', 'C', '6', '4', 'D', 'S', 'P', 0,
  /* 10513 */ 'S', 'T', 'O', 'R', 'E', '_', 'A', 'C', 'C', '6', '4', 'D', 'S', 'P', 0,
  /* 10528 */ 'R', 'D', 'D', 'S', 'P', 0,
  /* 10534 */ 'W', 'R', 'D', 'S', 'P', 0,
  /* 10540 */ 'M', 'S', 'U', 'B', '_', 'D', 'S', 'P', 0,
  /* 10549 */ 'M', 'A', 'D', 'D', '_', 'D', 'S', 'P', 0,
  /* 10558 */ 'L', 'O', 'A', 'D', '_', 'C', 'C', 'O', 'N', 'D', '_', 'D', 'S', 'P', 0,
  /* 10573 */ 'S', 'T', 'O', 'R', 'E', '_', 'C', 'C', 'O', 'N', 'D', '_', 'D', 'S', 'P', 0,
  /* 10589 */ 'M', 'F', 'H', 'I', '_', 'D', 'S', 'P', 0,
  /* 10598 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'T', 'L', 'O', 'H', 'I', '_', 'D', 'S', 'P', 0,
  /* 10615 */ 'M', 'T', 'H', 'I', '_', 'D', 'S', 'P', 0,
  /* 10624 */ 'M', 'F', 'L', 'O', '_', 'D', 'S', 'P', 0,
  /* 10633 */ 'M', 'T', 'L', 'O', '_', 'D', 'S', 'P', 0,
  /* 10642 */ 'M', 'U', 'L', 'T', '_', 'D', 'S', 'P', 0,
  /* 10651 */ 'M', 'S', 'U', 'B', 'U', '_', 'D', 'S', 'P', 0,
  /* 10661 */ 'M', 'A', 'D', 'D', 'U', '_', 'D', 'S', 'P', 0,
  /* 10671 */ 'M', 'U', 'L', 'T', 'U', '_', 'D', 'S', 'P', 0,
  /* 10681 */ 'E', 'X', 'T', 'P', 0,
  /* 10686 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 10701 */ 'B', 'E', 'Q', 0,
  /* 10705 */ 'S', 'E', 'Q', 0,
  /* 10709 */ 'T', 'E', 'Q', 0,
  /* 10713 */ 'T', 'L', 'B', 'R', 0,
  /* 10718 */ 'M', 'U', 'L', 'E', 'U', '_', 'S', '_', 'P', 'H', '_', 'Q', 'B', 'R', 0,
  /* 10733 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 0,
  /* 10747 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 0,
  /* 10762 */ 'D', 'P', 'A', 'U', '_', 'H', '_', 'Q', 'B', 'R', 0,
  /* 10773 */ 'D', 'P', 'S', 'U', '_', 'H', '_', 'Q', 'B', 'R', 0,
  /* 10784 */ 'B', 'A', 'L', '_', 'B', 'R', 0,
  /* 10791 */ 'L', 'D', 'R', 0,
  /* 10795 */ 'S', 'D', 'R', 0,
  /* 10799 */ 'M', 'A', 'Q', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 10812 */ 'P', 'R', 'E', 'C', 'E', 'Q', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 10825 */ 'M', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 10837 */ 'M', 'U', 'L', 'E', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 10851 */ 'J', 'R', 0,
  /* 10854 */ 'J', 'A', 'L', 'R', 0,
  /* 10859 */ 'N', 'O', 'R', 0,
  /* 10863 */ 'X', 'O', 'R', 0,
  /* 10867 */ 'D', 'R', 'O', 'T', 'R', 0,
  /* 10873 */ 'T', 'L', 'B', 'W', 'R', 0,
  /* 10879 */ 'R', 'D', 'H', 'W', 'R', 0,
  /* 10885 */ 'L', 'W', 'R', 0,
  /* 10889 */ 'S', 'W', 'R', 0,
  /* 10893 */ 'T', 'A', 'I', 'L', 'C', 'A', 'L', 'L', '6', '4', '_', 'R', 0,
  /* 10906 */ 'T', 'A', 'I', 'L', 'C', 'A', 'L', 'L', '_', 'R', 0,
  /* 10917 */ 'C', 'I', 'N', 'S', 0,
  /* 10922 */ 'D', 'I', 'N', 'S', 0,
  /* 10927 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 10944 */ 'E', 'X', 'T', 'S', 0,
  /* 10949 */ 'C', 'V', 'T', '_', 'D', '3', '2', '_', 'S', 0,
  /* 10959 */ 'C', 'V', 'T', '_', 'D', '6', '4', '_', 'S', 0,
  /* 10969 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'S', 0,
  /* 10980 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'S', 0,
  /* 10991 */ 'M', 'I', 'N', 'A', '_', 'S', 0,
  /* 10998 */ 'M', 'A', 'X', 'A', '_', 'S', 0,
  /* 11005 */ 'F', 'S', 'U', 'B', '_', 'S', 0,
  /* 11012 */ 'N', 'M', 'S', 'U', 'B', '_', 'S', 0,
  /* 11020 */ 'F', 'A', 'D', 'D', '_', 'S', 0,
  /* 11027 */ 'N', 'M', 'A', 'D', 'D', '_', 'S', 0,
  /* 11035 */ 'C', '_', 'N', 'G', 'E', '_', 'S', 0,
  /* 11043 */ 'C', '_', 'N', 'G', 'L', 'E', '_', 'S', 0,
  /* 11052 */ 'C', '_', 'O', 'L', 'E', '_', 'S', 0,
  /* 11060 */ 'C', 'M', 'P', '_', 'S', 'L', 'E', '_', 'S', 0,
  /* 11070 */ 'C', 'M', 'P', '_', 'S', 'U', 'L', 'E', '_', 'S', 0,
  /* 11081 */ 'C', '_', 'U', 'L', 'E', '_', 'S', 0,
  /* 11089 */ 'C', 'M', 'P', '_', 'U', 'L', 'E', '_', 'S', 0,
  /* 11099 */ 'C', '_', 'L', 'E', '_', 'S', 0,
  /* 11106 */ 'C', 'M', 'P', '_', 'L', 'E', '_', 'S', 0,
  /* 11115 */ 'C', 'M', 'P', '_', 'S', 'A', 'F', '_', 'S', 0,
  /* 11125 */ 'M', 'S', 'U', 'B', 'F', '_', 'S', 0,
  /* 11133 */ 'M', 'A', 'D', 'D', 'F', '_', 'S', 0,
  /* 11141 */ 'C', '_', 'S', 'F', '_', 'S', 0,
  /* 11148 */ 'M', 'O', 'V', 'F', '_', 'S', 0,
  /* 11155 */ 'C', '_', 'F', '_', 'S', 0,
  /* 11161 */ 'C', 'M', 'P', '_', 'F', '_', 'S', 0,
  /* 11169 */ 'F', 'N', 'E', 'G', '_', 'S', 0,
  /* 11176 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'S', 0,
  /* 11185 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'S', 0,
  /* 11194 */ 'S', 'E', 'L', '_', 'S', 0,
  /* 11200 */ 'C', '_', 'N', 'G', 'L', '_', 'S', 0,
  /* 11208 */ 'F', 'M', 'U', 'L', '_', 'S', 0,
  /* 11215 */ 'T', 'R', 'U', 'N', 'C', '_', 'L', '_', 'S', 0,
  /* 11225 */ 'R', 'O', 'U', 'N', 'D', '_', 'L', '_', 'S', 0,
  /* 11235 */ 'C', 'E', 'I', 'L', '_', 'L', '_', 'S', 0,
  /* 11244 */ 'F', 'L', 'O', 'O', 'R', '_', 'L', '_', 'S', 0,
  /* 11254 */ 'C', 'V', 'T', '_', 'L', '_', 'S', 0,
  /* 11262 */ 'M', 'I', 'N', '_', 'S', 0,
  /* 11268 */ 'C', 'M', 'P', '_', 'S', 'U', 'N', '_', 'S', 0,
  /* 11278 */ 'C', '_', 'U', 'N', '_', 'S', 0,
  /* 11285 */ 'C', 'M', 'P', '_', 'U', 'N', '_', 'S', 0,
  /* 11294 */ 'C', '_', 'S', 'E', 'Q', '_', 'S', 0,
  /* 11302 */ 'C', 'M', 'P', '_', 'S', 'E', 'Q', '_', 'S', 0,
  /* 11312 */ 'C', 'M', 'P', '_', 'S', 'U', 'E', 'Q', '_', 'S', 0,
  /* 11323 */ 'C', '_', 'U', 'E', 'Q', '_', 'S', 0,
  /* 11331 */ 'C', 'M', 'P', '_', 'U', 'E', 'Q', '_', 'S', 0,
  /* 11341 */ 'C', '_', 'E', 'Q', '_', 'S', 0,
  /* 11348 */ 'C', 'M', 'P', '_', 'E', 'Q', '_', 'S', 0,
  /* 11357 */ 'F', 'A', 'B', 'S', '_', 'S', 0,
  /* 11364 */ 'C', 'L', 'A', 'S', 'S', '_', 'S', 0,
  /* 11372 */ 'C', '_', 'N', 'G', 'T', '_', 'S', 0,
  /* 11380 */ 'C', '_', 'O', 'L', 'T', '_', 'S', 0,
  /* 11388 */ 'C', 'M', 'P', '_', 'S', 'L', 'T', '_', 'S', 0,
  /* 11398 */ 'C', 'M', 'P', '_', 'S', 'U', 'L', 'T', '_', 'S', 0,
  /* 11409 */ 'C', '_', 'U', 'L', 'T', '_', 'S', 0,
  /* 11417 */ 'C', 'M', 'P', '_', 'U', 'L', 'T', '_', 'S', 0,
  /* 11427 */ 'C', '_', 'L', 'T', '_', 'S', 0,
  /* 11434 */ 'C', 'M', 'P', '_', 'L', 'T', '_', 'S', 0,
  /* 11443 */ 'R', 'I', 'N', 'T', '_', 'S', 0,
  /* 11450 */ 'F', 'S', 'Q', 'R', 'T', '_', 'S', 0,
  /* 11458 */ 'M', 'O', 'V', 'T', '_', 'S', 0,
  /* 11465 */ 'F', 'D', 'I', 'V', '_', 'S', 0,
  /* 11472 */ 'F', 'M', 'O', 'V', '_', 'S', 0,
  /* 11479 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'S', 0,
  /* 11489 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'S', 0,
  /* 11499 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'S', 0,
  /* 11508 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'S', 0,
  /* 11518 */ 'C', 'V', 'T', '_', 'W', '_', 'S', 0,
  /* 11526 */ 'M', 'A', 'X', '_', 'S', 0,
  /* 11532 */ 'S', 'E', 'L', 'N', 'E', 'Z', '_', 'S', 0,
  /* 11541 */ 'S', 'E', 'L', 'E', 'Q', 'Z', '_', 'S', 0,
  /* 11550 */ 'B', 'C', '1', 'T', 0,
  /* 11555 */ 'D', 'E', 'R', 'E', 'T', 0,
  /* 11561 */ 'W', 'A', 'I', 'T', 0,
  /* 11566 */ 'S', 'L', 'T', 0,
  /* 11570 */ 'T', 'L', 'T', 0,
  /* 11574 */ 'P', 's', 'e', 'u', 'd', 'o', 'D', 'M', 'U', 'L', 'T', 0,
  /* 11586 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'U', 'L', 'T', 0,
  /* 11597 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 11608 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 11623 */ 'D', 'E', 'X', 'T', 0,
  /* 11628 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'S', 'U', 'B', 'U', 0,
  /* 11640 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'A', 'D', 'D', 'U', 0,
  /* 11652 */ 'D', 'M', 'O', 'D', 'U', 0,
  /* 11658 */ 'T', 'G', 'E', 'U', 0,
  /* 11663 */ 'D', 'M', 'U', 'H', 'U', 0,
  /* 11669 */ 'T', 'G', 'E', 'I', 'U', 0,
  /* 11675 */ 'T', 'T', 'L', 'T', 'I', 'U', 0,
  /* 11682 */ 'V', '3', 'M', 'U', 'L', 'U', 0,
  /* 11689 */ 'D', 'M', 'U', 'L', 'U', 0,
  /* 11695 */ 'V', 'M', 'U', 'L', 'U', 0,
  /* 11701 */ 'D', 'I', 'N', 'S', 'U', 0,
  /* 11707 */ 'T', 'L', 'T', 'U', 0,
  /* 11712 */ 'D', 'E', 'X', 'T', 'U', 0,
  /* 11718 */ 'D', 'D', 'I', 'V', 'U', 0,
  /* 11724 */ 'D', 'S', 'R', 'A', 'V', 0,
  /* 11730 */ 'B', 'I', 'T', 'R', 'E', 'V', 0,
  /* 11737 */ 'D', 'D', 'I', 'V', 0,
  /* 11742 */ 'P', 's', 'e', 'u', 'd', 'o', 'D', 'S', 'D', 'I', 'V', 0,
  /* 11754 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'D', 'I', 'V', 0,
  /* 11765 */ 'P', 's', 'e', 'u', 'd', 'o', 'D', 'U', 'D', 'I', 'V', 0,
  /* 11777 */ 'P', 's', 'e', 'u', 'd', 'o', 'U', 'D', 'I', 'V', 0,
  /* 11788 */ 'D', 'S', 'L', 'L', 'V', 0,
  /* 11794 */ 'D', 'S', 'R', 'L', 'V', 0,
  /* 11800 */ 'S', 'H', 'I', 'L', 'O', 'V', 0,
  /* 11807 */ 'E', 'X', 'T', 'P', 'D', 'P', 'V', 0,
  /* 11815 */ 'E', 'X', 'T', 'P', 'V', 0,
  /* 11821 */ 'D', 'R', 'O', 'T', 'R', 'V', 0,
  /* 11828 */ 'I', 'N', 'S', 'V', 0,
  /* 11833 */ 'A', 'N', 'D', '_', 'V', 0,
  /* 11839 */ 'M', 'O', 'V', 'E', '_', 'V', 0,
  /* 11846 */ 'B', 'S', 'E', 'L', '_', 'V', 0,
  /* 11853 */ 'N', 'O', 'R', '_', 'V', 0,
  /* 11859 */ 'X', 'O', 'R', '_', 'V', 0,
  /* 11865 */ 'B', 'Z', '_', 'V', 0,
  /* 11870 */ 'B', 'M', 'Z', '_', 'V', 0,
  /* 11876 */ 'B', 'N', 'Z', '_', 'V', 0,
  /* 11882 */ 'B', 'M', 'N', 'Z', '_', 'V', 0,
  /* 11889 */ 'L', 'W', 0,
  /* 11892 */ 'S', 'W', 0,
  /* 11895 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'D', '3', '2', '_', 'W', 0,
  /* 11911 */ 'F', 'L', 'O', 'G', '2', '_', 'W', 0,
  /* 11919 */ 'F', 'E', 'X', 'P', '2', '_', 'W', 0,
  /* 11927 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'D', '6', '4', '_', 'W', 0,
  /* 11943 */ 'S', 'R', 'A', '_', 'W', 0,
  /* 11949 */ 'A', 'D', 'D', '_', 'A', '_', 'W', 0,
  /* 11957 */ 'F', 'M', 'I', 'N', '_', 'A', '_', 'W', 0,
  /* 11966 */ 'A', 'D', 'D', 'S', '_', 'A', '_', 'W', 0,
  /* 11975 */ 'F', 'M', 'A', 'X', '_', 'A', '_', 'W', 0,
  /* 11984 */ 'F', 'S', 'U', 'B', '_', 'W', 0,
  /* 11991 */ 'F', 'M', 'S', 'U', 'B', '_', 'W', 0,
  /* 11999 */ 'N', 'L', 'O', 'C', '_', 'W', 0,
  /* 12006 */ 'N', 'L', 'Z', 'C', '_', 'W', 0,
  /* 12013 */ 'F', 'A', 'D', 'D', '_', 'W', 0,
  /* 12020 */ 'F', 'M', 'A', 'D', 'D', '_', 'W', 0,
  /* 12028 */ 'S', 'L', 'D', '_', 'W', 0,
  /* 12034 */ 'P', 'C', 'K', 'O', 'D', '_', 'W', 0,
  /* 12042 */ 'I', 'L', 'V', 'O', 'D', '_', 'W', 0,
  /* 12050 */ 'F', 'C', 'L', 'E', '_', 'W', 0,
  /* 12057 */ 'F', 'S', 'L', 'E', '_', 'W', 0,
  /* 12064 */ 'F', 'C', 'U', 'L', 'E', '_', 'W', 0,
  /* 12072 */ 'F', 'S', 'U', 'L', 'E', '_', 'W', 0,
  /* 12080 */ 'F', 'C', 'N', 'E', '_', 'W', 0,
  /* 12087 */ 'F', 'S', 'N', 'E', '_', 'W', 0,
  /* 12094 */ 'F', 'C', 'U', 'N', 'E', '_', 'W', 0,
  /* 12102 */ 'F', 'S', 'U', 'N', 'E', '_', 'W', 0,
  /* 12110 */ 'I', 'N', 'S', 'V', 'E', '_', 'W', 0,
  /* 12118 */ 'F', 'C', 'A', 'F', '_', 'W', 0,
  /* 12125 */ 'F', 'S', 'A', 'F', '_', 'W', 0,
  /* 12132 */ 'V', 'S', 'H', 'F', '_', 'W', 0,
  /* 12139 */ 'B', 'N', 'E', 'G', '_', 'W', 0,
  /* 12146 */ 'P', 'R', 'E', 'C', 'R', '_', 'S', 'R', 'A', '_', 'P', 'H', '_', 'W', 0,
  /* 12161 */ 'P', 'R', 'E', 'C', 'R', 'Q', '_', 'P', 'H', '_', 'W', 0,
  /* 12173 */ 'P', 'R', 'E', 'C', 'R', '_', 'S', 'R', 'A', '_', 'R', '_', 'P', 'H', '_', 'W', 0,
  /* 12190 */ 'P', 'R', 'E', 'C', 'R', 'Q', '_', 'R', 'S', '_', 'P', 'H', '_', 'W', 0,
  /* 12205 */ 'S', 'U', 'B', 'Q', 'H', '_', 'W', 0,
  /* 12213 */ 'A', 'D', 'D', 'Q', 'H', '_', 'W', 0,
  /* 12221 */ 'S', 'R', 'A', 'I', '_', 'W', 0,
  /* 12228 */ 'S', 'L', 'D', 'I', '_', 'W', 0,
  /* 12235 */ 'B', 'N', 'E', 'G', 'I', '_', 'W', 0,
  /* 12243 */ 'S', 'L', 'L', 'I', '_', 'W', 0,
  /* 12250 */ 'S', 'R', 'L', 'I', '_', 'W', 0,
  /* 12257 */ 'B', 'I', 'N', 'S', 'L', 'I', '_', 'W', 0,
  /* 12266 */ 'C', 'E', 'Q', 'I', '_', 'W', 0,
  /* 12273 */ 'S', 'R', 'A', 'R', 'I', '_', 'W', 0,
  /* 12281 */ 'B', 'C', 'L', 'R', 'I', '_', 'W', 0,
  /* 12289 */ 'S', 'R', 'L', 'R', 'I', '_', 'W', 0,
  /* 12297 */ 'B', 'I', 'N', 'S', 'R', 'I', '_', 'W', 0,
  /* 12306 */ 'S', 'P', 'L', 'A', 'T', 'I', '_', 'W', 0,
  /* 12315 */ 'B', 'S', 'E', 'T', 'I', '_', 'W', 0,
  /* 12323 */ 'S', 'U', 'B', 'V', 'I', '_', 'W', 0,
  /* 12331 */ 'A', 'D', 'D', 'V', 'I', '_', 'W', 0,
  /* 12339 */ 'F', 'I', 'L', 'L', '_', 'W', 0,
  /* 12346 */ 'S', 'L', 'L', '_', 'W', 0,
  /* 12352 */ 'F', 'E', 'X', 'U', 'P', 'L', '_', 'W', 0,
  /* 12361 */ 'F', 'F', 'Q', 'L', '_', 'W', 0,
  /* 12368 */ 'S', 'R', 'L', '_', 'W', 0,
  /* 12374 */ 'B', 'I', 'N', 'S', 'L', '_', 'W', 0,
  /* 12382 */ 'F', 'M', 'U', 'L', '_', 'W', 0,
  /* 12389 */ 'I', 'L', 'V', 'L', '_', 'W', 0,
  /* 12396 */ 'D', 'P', 'A', 'Q', '_', 'S', 'A', '_', 'L', '_', 'W', 0,
  /* 12408 */ 'D', 'P', 'S', 'Q', '_', 'S', 'A', '_', 'L', '_', 'W', 0,
  /* 12420 */ 'F', 'M', 'I', 'N', '_', 'W', 0,
  /* 12427 */ 'F', 'C', 'U', 'N', '_', 'W', 0,
  /* 12434 */ 'F', 'S', 'U', 'N', '_', 'W', 0,
  /* 12441 */ 'F', 'E', 'X', 'D', 'O', '_', 'W', 0,
  /* 12449 */ 'F', 'R', 'C', 'P', '_', 'W', 0,
  /* 12456 */ 'F', 'C', 'E', 'Q', '_', 'W', 0,
  /* 12463 */ 'F', 'S', 'E', 'Q', '_', 'W', 0,
  /* 12470 */ 'F', 'C', 'U', 'E', 'Q', '_', 'W', 0,
  /* 12478 */ 'F', 'S', 'U', 'E', 'Q', '_', 'W', 0,
  /* 12486 */ 'F', 'T', 'Q', '_', 'W', 0,
  /* 12492 */ 'M', 'S', 'U', 'B', '_', 'Q', '_', 'W', 0,
  /* 12501 */ 'M', 'A', 'D', 'D', '_', 'Q', '_', 'W', 0,
  /* 12510 */ 'M', 'U', 'L', '_', 'Q', '_', 'W', 0,
  /* 12518 */ 'M', 'S', 'U', 'B', 'R', '_', 'Q', '_', 'W', 0,
  /* 12528 */ 'M', 'A', 'D', 'D', 'R', '_', 'Q', '_', 'W', 0,
  /* 12538 */ 'M', 'U', 'L', 'R', '_', 'Q', '_', 'W', 0,
  /* 12547 */ 'S', 'R', 'A', 'R', '_', 'W', 0,
  /* 12554 */ 'B', 'C', 'L', 'R', '_', 'W', 0,
  /* 12561 */ 'S', 'R', 'L', 'R', '_', 'W', 0,
  /* 12568 */ 'F', 'C', 'O', 'R', '_', 'W', 0,
  /* 12575 */ 'F', 'S', 'O', 'R', '_', 'W', 0,
  /* 12582 */ 'F', 'E', 'X', 'U', 'P', 'R', '_', 'W', 0,
  /* 12591 */ 'F', 'F', 'Q', 'R', '_', 'W', 0,
  /* 12598 */ 'B', 'I', 'N', 'S', 'R', '_', 'W', 0,
  /* 12606 */ 'E', 'X', 'T', 'R', '_', 'W', 0,
  /* 12613 */ 'I', 'L', 'V', 'R', '_', 'W', 0,
  /* 12620 */ 'S', 'H', 'R', 'A', '_', 'R', '_', 'W', 0,
  /* 12629 */ 'S', 'U', 'B', 'Q', 'H', '_', 'R', '_', 'W', 0,
  /* 12639 */ 'A', 'D', 'D', 'Q', 'H', '_', 'R', '_', 'W', 0,
  /* 12649 */ 'E', 'X', 'T', 'R', '_', 'R', '_', 'W', 0,
  /* 12658 */ 'S', 'H', 'R', 'A', 'V', '_', 'R', '_', 'W', 0,
  /* 12668 */ 'E', 'X', 'T', 'R', 'V', '_', 'R', '_', 'W', 0,
  /* 12678 */ 'F', 'A', 'B', 'S', '_', 'W', 0,
  /* 12685 */ 'M', 'U', 'L', 'Q', '_', 'R', 'S', '_', 'W', 0,
  /* 12695 */ 'E', 'X', 'T', 'R', '_', 'R', 'S', '_', 'W', 0,
  /* 12705 */ 'E', 'X', 'T', 'R', 'V', '_', 'R', 'S', '_', 'W', 0,
  /* 12716 */ 'F', 'C', 'L', 'A', 'S', 'S', '_', 'W', 0,
  /* 12725 */ 'A', 'S', 'U', 'B', '_', 'S', '_', 'W', 0,
  /* 12734 */ 'H', 'S', 'U', 'B', '_', 'S', '_', 'W', 0,
  /* 12743 */ 'D', 'P', 'S', 'U', 'B', '_', 'S', '_', 'W', 0,
  /* 12753 */ 'F', 'T', 'R', 'U', 'N', 'C', '_', 'S', '_', 'W', 0,
  /* 12764 */ 'H', 'A', 'D', 'D', '_', 'S', '_', 'W', 0,
  /* 12773 */ 'D', 'P', 'A', 'D', 'D', '_', 'S', '_', 'W', 0,
  /* 12783 */ 'M', 'O', 'D', '_', 'S', '_', 'W', 0,
  /* 12791 */ 'C', 'L', 'E', '_', 'S', '_', 'W', 0,
  /* 12799 */ 'A', 'V', 'E', '_', 'S', '_', 'W', 0,
  /* 12807 */ 'C', 'L', 'E', 'I', '_', 'S', '_', 'W', 0,
  /* 12816 */ 'M', 'I', 'N', 'I', '_', 'S', '_', 'W', 0,
  /* 12825 */ 'C', 'L', 'T', 'I', '_', 'S', '_', 'W', 0,
  /* 12834 */ 'M', 'A', 'X', 'I', '_', 'S', '_', 'W', 0,
  /* 12843 */ 'S', 'H', 'L', 'L', '_', 'S', '_', 'W', 0,
  /* 12852 */ 'M', 'I', 'N', '_', 'S', '_', 'W', 0,
  /* 12860 */ 'D', 'O', 'T', 'P', '_', 'S', '_', 'W', 0,
  /* 12869 */ 'S', 'U', 'B', 'Q', '_', 'S', '_', 'W', 0,
  /* 12878 */ 'A', 'D', 'D', 'Q', '_', 'S', '_', 'W', 0,
  /* 12887 */ 'M', 'U', 'L', 'Q', '_', 'S', '_', 'W', 0,
  /* 12896 */ 'A', 'B', 'S', 'Q', '_', 'S', '_', 'W', 0,
  /* 12905 */ 'A', 'V', 'E', 'R', '_', 'S', '_', 'W', 0,
  /* 12914 */ 'S', 'U', 'B', 'S', '_', 'S', '_', 'W', 0,
  /* 12923 */ 'A', 'D', 'D', 'S', '_', 'S', '_', 'W', 0,
  /* 12932 */ 'S', 'A', 'T', '_', 'S', '_', 'W', 0,
  /* 12940 */ 'C', 'L', 'T', '_', 'S', '_', 'W', 0,
  /* 12948 */ 'F', 'F', 'I', 'N', 'T', '_', 'S', '_', 'W', 0,
  /* 12958 */ 'F', 'T', 'I', 'N', 'T', '_', 'S', '_', 'W', 0,
  /* 12968 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'S', '_', 'W', 0,
  /* 12982 */ 'S', 'U', 'B', 'S', 'U', 'U', '_', 'S', '_', 'W', 0,
  /* 12993 */ 'D', 'I', 'V', '_', 'S', '_', 'W', 0,
  /* 13001 */ 'S', 'H', 'L', 'L', 'V', '_', 'S', '_', 'W', 0,
  /* 13011 */ 'M', 'A', 'X', '_', 'S', '_', 'W', 0,
  /* 13019 */ 'C', 'O', 'P', 'Y', '_', 'S', '_', 'W', 0,
  /* 13028 */ 'S', 'P', 'L', 'A', 'T', '_', 'W', 0,
  /* 13036 */ 'B', 'S', 'E', 'T', '_', 'W', 0,
  /* 13043 */ 'F', 'C', 'L', 'T', '_', 'W', 0,
  /* 13050 */ 'F', 'S', 'L', 'T', '_', 'W', 0,
  /* 13057 */ 'F', 'C', 'U', 'L', 'T', '_', 'W', 0,
  /* 13065 */ 'F', 'S', 'U', 'L', 'T', '_', 'W', 0,
  /* 13073 */ 'P', 'C', 'N', 'T', '_', 'W', 0,
  /* 13080 */ 'F', 'R', 'I', 'N', 'T', '_', 'W', 0,
  /* 13088 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'W', 0,
  /* 13097 */ 'F', 'S', 'Q', 'R', 'T', '_', 'W', 0,
  /* 13105 */ 'F', 'R', 'S', 'Q', 'R', 'T', '_', 'W', 0,
  /* 13114 */ 'S', 'T', '_', 'W', 0,
  /* 13119 */ 'A', 'S', 'U', 'B', '_', 'U', '_', 'W', 0,
  /* 13128 */ 'H', 'S', 'U', 'B', '_', 'U', '_', 'W', 0,
  /* 13137 */ 'D', 'P', 'S', 'U', 'B', '_', 'U', '_', 'W', 0,
  /* 13147 */ 'F', 'T', 'R', 'U', 'N', 'C', '_', 'U', '_', 'W', 0,
  /* 13158 */ 'H', 'A', 'D', 'D', '_', 'U', '_', 'W', 0,
  /* 13167 */ 'D', 'P', 'A', 'D', 'D', '_', 'U', '_', 'W', 0,
  /* 13177 */ 'M', 'O', 'D', '_', 'U', '_', 'W', 0,
  /* 13185 */ 'C', 'L', 'E', '_', 'U', '_', 'W', 0,
  /* 13193 */ 'A', 'V', 'E', '_', 'U', '_', 'W', 0,
  /* 13201 */ 'C', 'L', 'E', 'I', '_', 'U', '_', 'W', 0,
  /* 13210 */ 'M', 'I', 'N', 'I', '_', 'U', '_', 'W', 0,
  /* 13219 */ 'C', 'L', 'T', 'I', '_', 'U', '_', 'W', 0,
  /* 13228 */ 'M', 'A', 'X', 'I', '_', 'U', '_', 'W', 0,
  /* 13237 */ 'M', 'I', 'N', '_', 'U', '_', 'W', 0,
  /* 13245 */ 'D', 'O', 'T', 'P', '_', 'U', '_', 'W', 0,
  /* 13254 */ 'A', 'V', 'E', 'R', '_', 'U', '_', 'W', 0,
  /* 13263 */ 'S', 'U', 'B', 'S', '_', 'U', '_', 'W', 0,
  /* 13272 */ 'A', 'D', 'D', 'S', '_', 'U', '_', 'W', 0,
  /* 13281 */ 'S', 'U', 'B', 'S', 'U', 'S', '_', 'U', '_', 'W', 0,
  /* 13292 */ 'S', 'A', 'T', '_', 'U', '_', 'W', 0,
  /* 13300 */ 'C', 'L', 'T', '_', 'U', '_', 'W', 0,
  /* 13308 */ 'F', 'F', 'I', 'N', 'T', '_', 'U', '_', 'W', 0,
  /* 13318 */ 'F', 'T', 'I', 'N', 'T', '_', 'U', '_', 'W', 0,
  /* 13328 */ 'D', 'I', 'V', '_', 'U', '_', 'W', 0,
  /* 13336 */ 'M', 'A', 'X', '_', 'U', '_', 'W', 0,
  /* 13344 */ 'C', 'O', 'P', 'Y', '_', 'U', '_', 'W', 0,
  /* 13353 */ 'M', 'S', 'U', 'B', 'V', '_', 'W', 0,
  /* 13361 */ 'M', 'A', 'D', 'D', 'V', '_', 'W', 0,
  /* 13369 */ 'P', 'C', 'K', 'E', 'V', '_', 'W', 0,
  /* 13377 */ 'I', 'L', 'V', 'E', 'V', '_', 'W', 0,
  /* 13385 */ 'F', 'D', 'I', 'V', '_', 'W', 0,
  /* 13392 */ 'M', 'U', 'L', 'V', '_', 'W', 0,
  /* 13399 */ 'E', 'X', 'T', 'R', 'V', '_', 'W', 0,
  /* 13407 */ 'F', 'M', 'A', 'X', '_', 'W', 0,
  /* 13414 */ 'B', 'Z', '_', 'W', 0,
  /* 13419 */ 'B', 'N', 'Z', '_', 'W', 0,
  /* 13425 */ 'L', 'H', 'X', 0,
  /* 13429 */ 'J', 'A', 'L', 'X', 0,
  /* 13434 */ 'L', 'B', 'U', 'X', 0,
  /* 13439 */ 'L', 'W', 'X', 0,
  /* 13443 */ 'C', 'O', 'P', 'Y', 0,
  /* 13448 */ 'C', 'O', 'N', 'S', 'T', 'P', 'O', 'O', 'L', '_', 'E', 'N', 'T', 'R', 'Y', 0,
  /* 13464 */ 'B', 'G', 'E', 'Z', 0,
  /* 13469 */ 'B', 'L', 'E', 'Z', 0,
  /* 13474 */ 'B', 'C', '1', 'N', 'E', 'Z', 0,
  /* 13481 */ 'B', 'C', '2', 'N', 'E', 'Z', 0,
  /* 13488 */ 'S', 'E', 'L', 'N', 'E', 'Z', 0,
  /* 13495 */ 'D', 'C', 'L', 'Z', 0,
  /* 13500 */ 'B', 'C', '1', 'E', 'Q', 'Z', 0,
  /* 13507 */ 'B', 'C', '2', 'E', 'Q', 'Z', 0,
  /* 13514 */ 'S', 'E', 'L', 'E', 'Q', 'Z', 0,
  /* 13521 */ 'B', 'G', 'T', 'Z', 0,
  /* 13526 */ 'B', 'L', 'T', 'Z', 0,
  /* 13531 */ 'S', 'e', 'l', 'B', 'n', 'e', 'Z', 0,
  /* 13539 */ 'S', 'e', 'l', 'B', 'e', 'q', 'Z', 0,
  /* 13547 */ 'L', 'o', 'a', 'd', 'I', 'm', 'm', '3', '2', 'R', 'e', 'g', 0,
  /* 13560 */ 'L', 'o', 'a', 'd', 'A', 'd', 'd', 'r', '3', '2', 'R', 'e', 'g', 0,
  /* 13574 */ 'L', 'o', 'a', 'd', 'I', 'm', 'm', '6', '4', 'R', 'e', 'g', 0,
  /* 13587 */ 'P', 's', 'e', 'u', 'd', 'o', 'I', 'n', 'd', 'i', 'r', 'e', 'c', 't', 'B', 'r', 'a', 'n', 'c', 'h', 0,
  /* 13608 */ 'D', 'A', 'D', 'D', 'i', 0,
  /* 13614 */ 'A', 'N', 'D', 'i', 0,
  /* 13619 */ 'S', 'N', 'E', 'i', 0,
  /* 13624 */ 'S', 'E', 'Q', 'i', 0,
  /* 13629 */ 'X', 'O', 'R', 'i', 0,
  /* 13634 */ 'S', 'L', 'T', 'i', 0,
  /* 13639 */ 'L', 'O', 'N', 'G', '_', 'B', 'R', 'A', 'N', 'C', 'H', '_', 'L', 'U', 'i', 0,
  /* 13655 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'C', 'm', 'p', 'i', 0,
  /* 13669 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'C', 'm', 'p', 'i', 0,
  /* 13683 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 'i', 0,
  /* 13697 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 'i', 0,
  /* 13711 */ 'L', 'o', 'a', 'd', 'A', 'd', 'd', 'r', '3', '2', 'I', 'm', 'm', 0,
  /* 13725 */ 'P', 's', 'e', 'u', 'd', 'o', 'R', 'e', 't', 'u', 'r', 'n', 0,
  /* 13738 */ 'J', 'A', 'L', 'R', '6', '4', 'P', 's', 'e', 'u', 'd', 'o', 0,
  /* 13751 */ 'J', 'A', 'L', 'R', 'P', 's', 'e', 'u', 'd', 'o', 0,
  /* 13762 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'C', 'm', 'p', 0,
  /* 13775 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'C', 'm', 'p', 0,
  /* 13788 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 0,
  /* 13801 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 0,
  /* 13814 */ 'L', 'B', 'u', 0,
  /* 13818 */ 'D', 'S', 'U', 'B', 'u', 0,
  /* 13824 */ 'B', 'A', 'D', 'D', 'u', 0,
  /* 13830 */ 'D', 'A', 'D', 'D', 'u', 0,
  /* 13836 */ 'L', 'H', 'u', 0,
  /* 13840 */ 'S', 'L', 'T', 'u', 0,
  /* 13845 */ 'P', 's', 'e', 'u', 'd', 'o', 'D', 'M', 'U', 'L', 'T', 'u', 0,
  /* 13858 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'U', 'L', 'T', 'u', 0,
  /* 13870 */ 'L', 'W', 'u', 0,
  /* 13874 */ 'L', 'O', 'N', 'G', '_', 'B', 'R', 'A', 'N', 'C', 'H', '_', 'D', 'A', 'D', 'D', 'i', 'u', 0,
  /* 13893 */ 'L', 'E', 'A', '_', 'A', 'D', 'D', 'i', 'u', 0,
  /* 13903 */ 'L', 'O', 'N', 'G', '_', 'B', 'R', 'A', 'N', 'C', 'H', '_', 'A', 'D', 'D', 'i', 'u', 0,
  /* 13921 */ 'S', 'L', 'T', 'i', 'u', 0,
  /* 13927 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 'i', 'u', 0,
  /* 13942 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 'i', 'u', 0,
  /* 13957 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 'u', 0,
  /* 13971 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 'u', 0,
};

extern const unsigned MipsInstrNameIndices[] = {
    8032U, 9740U, 9776U, 8234U, 8225U, 8312U, 6528U, 6543U, 
    6510U, 6557U, 10927U, 6495U, 6447U, 13443U, 6470U, 11608U, 
    5041U, 10440U, 11597U, 5059U, 6861U, 3906U, 12896U, 4998U, 
    4894U, 6662U, 6779U, 12639U, 12213U, 6734U, 6841U, 12878U, 
    4918U, 4084U, 5132U, 7141U, 11966U, 4492U, 5919U, 7630U, 
    12923U, 4684U, 6284U, 7879U, 13272U, 3774U, 3884U, 6926U, 
    3986U, 6881U, 3926U, 4298U, 5496U, 7326U, 12331U, 4754U, 
    6374U, 7949U, 13362U, 4951U, 4068U, 5115U, 7125U, 11949U, 
    8725U, 13609U, 9632U, 13887U, 9722U, 13825U, 9686U, 9792U, 
    10686U, 9763U, 4887U, 5022U, 901U, 4173U, 8740U, 11833U, 
    9960U, 10044U, 10215U, 13614U, 1896U, 9640U, 5034U, 4397U, 
    5766U, 7479U, 12725U, 4589U, 6131U, 7737U, 13119U, 2115U, 
    611U, 1615U, 3542U, 2038U, 534U, 1507U, 3469U, 2079U, 
    575U, 1548U, 3508U, 2058U, 554U, 1527U, 3488U, 2155U, 
    651U, 1655U, 3580U, 2018U, 514U, 1487U, 3450U, 2135U, 
    631U, 1635U, 3561U, 2099U, 595U, 1599U, 3527U, 8057U, 
    4881U, 4474U, 5901U, 7603U, 12905U, 4666U, 6266U, 7861U, 
    13254U, 4422U, 5840U, 7542U, 12799U, 4614U, 6205U, 7800U, 
    13193U, 2557U, 2433U, 2941U, 2585U, 2382U, 2881U, 2449U, 
    3244U, 3183U, 3692U, 13824U, 8129U, 4812U, 9762U, 10784U, 
    4795U, 13500U, 6505U, 8768U, 13474U, 11550U, 9326U, 13507U, 
    13481U, 4234U, 5446U, 7276U, 12281U, 4368U, 5691U, 7450U, 
    12554U, 10701U, 1715U, 4913U, 4847U, 4975U, 9016U, 4798U, 
    4929U, 13464U, 1781U, 8137U, 4823U, 8926U, 4957U, 9593U, 
    13521U, 1813U, 4855U, 4981U, 9616U, 4210U, 5422U, 7252U, 
    12257U, 4340U, 5545U, 7353U, 12374U, 4264U, 5462U, 7292U, 
    12297U, 4382U, 5735U, 7464U, 12598U, 11730U, 10455U, 13469U, 
    1788U, 4831U, 4963U, 9601U, 4924U, 4935U, 13526U, 1820U, 
    8144U, 4863U, 8936U, 4987U, 9624U, 4313U, 11882U, 4306U, 
    11870U, 6477U, 1373U, 4803U, 4180U, 5400U, 7230U, 12235U, 
    4152U, 5379U, 7209U, 12139U, 4839U, 4969U, 8754U, 4941U, 
    4789U, 6432U, 7984U, 11876U, 13419U, 4946U, 505U, 9843U, 
    8123U, 8910U, 4188U, 9946U, 9884U, 10139U, 10030U, 11846U, 
    10201U, 4282U, 5480U, 7310U, 12315U, 4561U, 6008U, 7709U, 
    13036U, 4784U, 6418U, 7979U, 11865U, 13414U, 2968U, 2614U, 
    2980U, 2627U, 2956U, 2601U, 2867U, 3292U, 2678U, 2225U, 
    2706U, 2255U, 2736U, 2767U, 2791U, 3284U, 2664U, 2210U, 
    2692U, 2240U, 2720U, 2752U, 2782U, 1379U, 1827U, 6464U, 
    3369U, 1141U, 11235U, 472U, 1340U, 9552U, 11499U, 9290U, 
    4219U, 5431U, 7261U, 12266U, 4355U, 5615U, 7376U, 12457U, 
    37U, 8386U, 3676U, 10917U, 692U, 5758U, 11364U, 4430U, 
    5848U, 7550U, 12807U, 4622U, 6213U, 7808U, 13201U, 4414U, 
    5832U, 7534U, 12791U, 4606U, 6197U, 7792U, 13185U, 10414U, 
    8993U, 3401U, 4448U, 5866U, 7568U, 12825U, 4640U, 6231U, 
    7826U, 13219U, 4509U, 5936U, 7647U, 12940U, 4712U, 6312U, 
    7907U, 13300U, 13496U, 9609U, 3418U, 3821U, 3723U, 3936U, 
    3834U, 3736U, 3949U, 3852U, 3754U, 3967U, 5675U, 6748U, 
    11348U, 5371U, 11161U, 5277U, 6643U, 11106U, 6076U, 6908U, 
    11434U, 5338U, 11115U, 5628U, 11302U, 5230U, 11060U, 6029U, 
    11388U, 5654U, 11312U, 5256U, 11070U, 6055U, 11398U, 5588U, 
    11268U, 5665U, 11331U, 5267U, 11089U, 6066U, 11417U, 5598U, 
    11285U, 13448U, 9931U, 10186U, 4544U, 5991U, 7692U, 13019U, 
    4736U, 6356U, 7931U, 13344U, 48U, 8420U, 3683U, 10949U, 
    11901U, 9517U, 8346U, 10959U, 11933U, 9137U, 1164U, 8615U, 
    11254U, 9202U, 362U, 8566U, 1230U, 8362U, 12974U, 9573U, 
    495U, 1363U, 9584U, 11518U, 9315U, 344U, 1212U, 11341U, 
    248U, 1059U, 11155U, 221U, 1032U, 11099U, 402U, 1270U, 
    11427U, 180U, 991U, 11035U, 190U, 1001U, 11043U, 287U, 
    1098U, 11200U, 372U, 1240U, 11372U, 201U, 1012U, 11052U, 
    382U, 1250U, 11380U, 324U, 1192U, 11294U, 230U, 1041U, 
    11141U, 334U, 1202U, 11323U, 211U, 1022U, 11081U, 392U, 
    1260U, 11409U, 306U, 1174U, 11278U, 3065U, 2904U, 2531U, 
    743U, 4997U, 13608U, 13886U, 13830U, 8003U, 9769U, 8046U, 
    8056U, 10454U, 10413U, 3400U, 13495U, 3417U, 11737U, 11718U, 
    11555U, 9334U, 11623U, 9756U, 11712U, 7990U, 10922U, 9750U, 
    11701U, 11738U, 11719U, 4528U, 5975U, 7666U, 12993U, 4720U, 
    6340U, 7915U, 13328U, 8811U, 3671U, 3332U, 0U, 42U, 
    764U, 5054U, 11652U, 6U, 53U, 770U, 7114U, 11663U, 
    8327U, 11580U, 13851U, 11689U, 3392U, 5892U, 7594U, 12860U, 
    6257U, 7852U, 13245U, 5814U, 7516U, 12773U, 6179U, 7774U, 
    13167U, 6990U, 7065U, 12396U, 7027U, 8195U, 10762U, 7091U, 
    6970U, 10494U, 7004U, 7078U, 12408U, 7053U, 5784U, 7497U, 
    12743U, 6149U, 7755U, 13137U, 8206U, 10773U, 7101U, 7018U, 
    10867U, 684U, 11821U, 6571U, 11748U, 5013U, 8317U, 670U, 
    715U, 11788U, 3660U, 115U, 11724U, 8322U, 677U, 11794U, 
    4046U, 13818U, 11771U, 3151U, 3129U, 3694U, 7995U, 8819U, 
    11556U, 9335U, 11624U, 10681U, 10474U, 11807U, 11815U, 12705U, 
    12668U, 7674U, 13399U, 12695U, 12649U, 7612U, 12606U, 10944U, 
    699U, 9382U, 1392U, 1843U, 5750U, 353U, 1221U, 9080U, 
    11357U, 9213U, 12678U, 5179U, 161U, 972U, 8724U, 11020U, 
    9116U, 12013U, 5324U, 12118U, 5614U, 12456U, 5757U, 12716U, 
    5216U, 12050U, 6015U, 13043U, 315U, 8554U, 1183U, 706U, 
    8603U, 5286U, 12080U, 5705U, 12568U, 5638U, 12470U, 5240U, 
    12064U, 6039U, 13057U, 5300U, 12094U, 5574U, 12427U, 6397U, 
    430U, 1298U, 9456U, 11465U, 9244U, 13385U, 7368U, 12441U, 
    5087U, 9809U, 11919U, 9826U, 5523U, 12352U, 5719U, 12582U, 
    5944U, 12948U, 6320U, 13308U, 5532U, 12361U, 5728U, 12591U, 
    4321U, 5510U, 9899U, 10154U, 7334U, 12339U, 5079U, 11911U, 
    1152U, 11244U, 483U, 1351U, 9562U, 11508U, 9302U, 5186U, 
    12020U, 5141U, 11975U, 6411U, 13407U, 5123U, 11957U, 5567U, 
    12420U, 439U, 8591U, 1307U, 11472U, 9254U, 5157U, 11991U, 
    5553U, 297U, 1108U, 8971U, 11208U, 9192U, 12382U, 256U, 
    1067U, 8776U, 11169U, 9158U, 5607U, 12449U, 6092U, 13080U, 
    6117U, 13105U, 5331U, 12125U, 5621U, 12463U, 5223U, 12057U, 
    6022U, 13050U, 5293U, 12087U, 5712U, 12575U, 6109U, 411U, 
    1279U, 9373U, 11450U, 9223U, 13097U, 5150U, 142U, 953U, 
    8694U, 11005U, 9095U, 11984U, 5646U, 12478U, 5248U, 12072U, 
    6047U, 13065U, 5308U, 12102U, 5581U, 12434U, 5954U, 12958U, 
    6330U, 13318U, 7382U, 12486U, 5794U, 12753U, 6159U, 13147U, 
    2825U, 5805U, 7507U, 12764U, 6170U, 7765U, 13158U, 5775U, 
    7488U, 12734U, 6140U, 7746U, 13128U, 4769U, 6389U, 7964U, 
    13377U, 4348U, 5560U, 7361U, 12389U, 4129U, 5208U, 7186U, 
    12042U, 4390U, 5743U, 7472U, 12613U, 10918U, 4575U, 10285U, 
    6100U, 10328U, 9914U, 10306U, 10169U, 10370U, 7723U, 10349U, 
    13088U, 10392U, 11828U, 4137U, 5316U, 7194U, 12110U, 9088U, 
    8121U, 8133U, 10854U, 8658U, 1726U, 13738U, 13751U, 3704U, 
    9036U, 13429U, 8919U, 4817U, 4808U, 10851U, 1721U, 3698U, 
    3340U, 9030U, 8905U, 2875U, 2011U, 2808U, 2800U, 3014U, 
    2846U, 3712U, 868U, 13434U, 8682U, 13814U, 1954U, 9671U, 
    5019U, 27U, 816U, 8370U, 754U, 3300U, 796U, 4167U, 
    5394U, 7224U, 12229U, 8217U, 4876U, 10791U, 69U, 830U, 
    4116U, 5195U, 7173U, 12029U, 13893U, 1973U, 9718U, 6585U, 
    1416U, 13425U, 8799U, 13836U, 1960U, 9694U, 8301U, 5018U, 
    3362U, 8951U, 3386U, 3425U, 878U, 10499U, 10558U, 13903U, 
    13874U, 13639U, 3672U, 3333U, 81U, 846U, 8452U, 13651U, 
    1917U, 9664U, 11889U, 1771U, 59U, 8436U, 776U, 3316U, 
    806U, 8332U, 1683U, 8979U, 4908U, 10885U, 1753U, 9066U, 
    4902U, 9441U, 13439U, 93U, 8470U, 9505U, 13870U, 2284U, 
    2348U, 2316U, 2365U, 2894U, 2635U, 2520U, 13711U, 13560U, 
    13547U, 13574U, 741U, 2994U, 2651U, 2401U, 2463U, 5008U, 
    5356U, 11133U, 7424U, 12528U, 11646U, 10661U, 9398U, 4753U, 
    6373U, 7948U, 13361U, 171U, 8502U, 982U, 10549U, 8732U, 
    7397U, 12501U, 11028U, 9127U, 8243U, 10799U, 8269U, 10825U, 
    5108U, 10998U, 4457U, 5875U, 7577U, 12834U, 4649U, 6240U, 
    7835U, 13228U, 4093U, 5142U, 7150U, 11976U, 6412U, 11526U, 
    4536U, 5983U, 7684U, 13011U, 4728U, 6348U, 7923U, 13336U, 
    1U, 43U, 8394U, 765U, 122U, 907U, 8402U, 8014U, 
    8638U, 1432U, 10589U, 8833U, 10424U, 8648U, 1701U, 10624U, 
    9000U, 5095U, 10991U, 4439U, 5857U, 7559U, 12816U, 4631U, 
    6222U, 7817U, 13210U, 4076U, 5124U, 7133U, 11958U, 5568U, 
    11262U, 4466U, 5884U, 7586U, 12852U, 4658U, 6249U, 7844U, 
    13237U, 725U, 1938U, 5055U, 4044U, 11653U, 4406U, 5824U, 
    7526U, 12783U, 4598U, 6189U, 7784U, 13177U, 8628U, 11839U, 
    239U, 8514U, 1050U, 8089U, 1568U, 8865U, 11148U, 9148U, 
    927U, 8067U, 1461U, 10969U, 265U, 8526U, 1076U, 8096U, 
    1577U, 8875U, 11176U, 9168U, 421U, 8579U, 1289U, 8114U, 
    1674U, 8885U, 11458U, 9234U, 940U, 8078U, 1474U, 10980U, 
    276U, 8540U, 1087U, 8105U, 1588U, 8895U, 11185U, 9180U, 
    4057U, 5348U, 11125U, 7414U, 12518U, 11634U, 10651U, 9389U, 
    4745U, 6365U, 7940U, 13353U, 152U, 8489U, 963U, 10540U, 
    8702U, 7388U, 12492U, 11013U, 9106U, 7U, 54U, 8428U, 
    771U, 132U, 917U, 8411U, 8036U, 1454U, 10615U, 8841U, 
    10481U, 10435U, 1708U, 10633U, 9008U, 17U, 105U, 786U, 
    22U, 110U, 791U, 7115U, 11664U, 8328U, 8281U, 10837U, 
    8151U, 10718U, 6801U, 12685U, 6851U, 12887U, 7434U, 12538U, 
    7039U, 6979U, 11581U, 10671U, 10642U, 9365U, 13852U, 9709U, 
    11684U, 4777U, 6404U, 7972U, 13392U, 8972U, 6719U, 7406U, 
    12510U, 3393U, 6822U, 2860U, 2987U, 2174U, 1993U, 3085U, 
    3218U, 3117U, 3270U, 4101U, 5165U, 7158U, 11999U, 4108U, 
    5172U, 7165U, 12006U, 170U, 8501U, 981U, 11027U, 9126U, 
    151U, 8488U, 962U, 11012U, 9105U, 10490U, 10859U, 1733U, 
    4250U, 9044U, 11853U, 9975U, 10059U, 10230U, 3055U, 3096U, 
    10860U, 1734U, 4251U, 9045U, 11854U, 9976U, 10060U, 10231U, 
    13630U, 1904U, 9649U, 3195U, 6709U, 6489U, 4761U, 6381U, 
    7956U, 13369U, 4121U, 5200U, 7178U, 12034U, 4568U, 6085U, 
    7716U, 13073U, 6677U, 3789U, 10495U, 8180U, 3613U, 10747U, 
    3644U, 8256U, 10812U, 8166U, 3598U, 10733U, 3629U, 6621U, 
    12161U, 6596U, 12190U, 6609U, 12146U, 12173U, 6523U, 3378U, 
    5026U, 3846U, 3748U, 3961U, 6742U, 6637U, 6902U, 11895U, 
    8340U, 11927U, 8356U, 12968U, 11574U, 13845U, 11742U, 11765U, 
    13587U, 1873U, 5002U, 11640U, 8008U, 1426U, 10418U, 1695U, 
    4051U, 11628U, 8019U, 1439U, 10598U, 11586U, 13858U, 6671U, 
    3783U, 13725U, 1923U, 11754U, 11777U, 4030U, 10528U, 10879U, 
    1745U, 6952U, 4012U, 6693U, 3805U, 6093U, 11443U, 10868U, 
    11822U, 9496U, 9058U, 1129U, 11225U, 460U, 1328U, 9541U, 
    11489U, 9277U, 2815U, 2191U, 3665U, 2003U, 4501U, 5928U, 
    7639U, 12932U, 4704U, 6304U, 7899U, 13292U, 4041U, 873U, 
    8688U, 4921U, 4993U, 3355U, 8718U, 3349U, 5076U, 10463U, 
    3408U, 32U, 823U, 8378U, 759U, 3308U, 801U, 11749U, 
    9464U, 8221U, 10795U, 75U, 838U, 3690U, 862U, 8675U, 
    6581U, 1410U, 8792U, 13514U, 1804U, 6438U, 11541U, 13488U, 
    1795U, 6423U, 11532U, 5504U, 11194U, 10705U, 13624U, 7111U, 
    1421U, 4146U, 7203U, 12133U, 10429U, 11800U, 6943U, 4003U, 
    6891U, 13001U, 6685U, 3797U, 6812U, 12843U, 6934U, 3994U, 
    6790U, 3895U, 12658U, 6588U, 3715U, 6758U, 3863U, 12620U, 
    6961U, 4021U, 6701U, 3813U, 8805U, 4166U, 5393U, 7223U, 
    12228U, 4115U, 5194U, 7172U, 12028U, 8318U, 716U, 1864U, 
    4196U, 5408U, 7238U, 12243U, 11789U, 9480U, 4328U, 5517U, 
    7341U, 8957U, 12346U, 11566U, 1765U, 9351U, 13634U, 1910U, 
    9656U, 13921U, 1985U, 9731U, 13840U, 1966U, 9701U, 6481U, 
    13619U, 9859U, 10005U, 10089U, 10114U, 10260U, 4273U, 5471U, 
    7301U, 12306U, 4553U, 6000U, 7701U, 13028U, 3661U, 4159U, 
    5386U, 7216U, 12221U, 4226U, 5438U, 7268U, 12273U, 4361U, 
    5684U, 7443U, 12547U, 11725U, 9448U, 4062U, 5102U, 7119U, 
    8668U, 11943U, 8323U, 4203U, 5415U, 7245U, 12250U, 4242U, 
    5454U, 7284U, 12289U, 4375U, 5698U, 7457U, 12561U, 11795U, 
    9488U, 4334U, 5539U, 7347U, 8964U, 12368U, 10488U, 3437U, 
    889U, 10513U, 10573U, 4584U, 6126U, 7732U, 13114U, 4047U, 
    6653U, 6768U, 12629U, 12205U, 6726U, 6831U, 12869U, 4693U, 
    6293U, 7888U, 13281U, 4517U, 5964U, 7655U, 12982U, 4483U, 
    5910U, 7621U, 12914U, 4675U, 6275U, 7870U, 13263U, 3765U, 
    3873U, 6918U, 3978U, 6871U, 3916U, 4290U, 5488U, 7318U, 
    12323U, 4746U, 6366U, 7941U, 13354U, 8695U, 13819U, 9678U, 
    87U, 854U, 8461U, 11892U, 1776U, 64U, 8444U, 781U, 
    3324U, 811U, 8336U, 1689U, 8986U, 10889U, 1759U, 9073U, 
    99U, 8479U, 9511U, 4871U, 8710U, 8304U, 8946U, 9872U, 
    10018U, 10102U, 10127U, 10273U, 2839U, 2202U, 2300U, 3006U, 
    3022U, 13539U, 13531U, 13775U, 13669U, 13801U, 13697U, 13942U, 
    13971U, 13762U, 13655U, 13788U, 13683U, 13927U, 13957U, 2332U, 
    2270U, 3161U, 3030U, 3075U, 2489U, 2916U, 2544U, 2504U, 
    2928U, 2571U, 3042U, 3106U, 3257U, 2184U, 3140U, 2277U, 
    3172U, 3231U, 2417U, 2476U, 8295U, 10893U, 10906U, 10709U, 
    8041U, 8849U, 9023U, 6460U, 7993U, 11669U, 9415U, 8817U, 
    11658U, 9407U, 8747U, 10469U, 10713U, 8061U, 10873U, 11570U, 
    8051U, 9424U, 8857U, 11707U, 9433U, 9358U, 6485U, 7998U, 
    8825U, 8761U, 10449U, 1117U, 11215U, 448U, 1316U, 9530U, 
    11479U, 9264U, 11675U, 11772U, 9472U, 11682U, 12U, 11695U, 
    4145U, 5364U, 7202U, 12132U, 11561U, 9343U, 10534U, 6576U, 
    8784U, 10863U, 1739U, 4257U, 9051U, 11859U, 9990U, 10074U, 
    10245U, 13629U, 1903U, 9648U, 3206U, 
};

static inline void InitMipsMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(MipsInsts, MipsInstrNameIndices, MipsInstrNameData, 1677);
}

} // End llvm namespace 
#endif // GET_INSTRINFO_MC_DESC


#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct MipsGenInstrInfo : public TargetInstrInfo {
  explicit MipsGenInstrInfo(int SO = -1, int DO = -1);
  virtual ~MipsGenInstrInfo();
};
} // End llvm namespace 
#endif // GET_INSTRINFO_HEADER


#ifdef GET_INSTRINFO_CTOR_DTOR
#undef GET_INSTRINFO_CTOR_DTOR
namespace llvm {
extern const MCInstrDesc MipsInsts[];
extern const unsigned MipsInstrNameIndices[];
extern const char MipsInstrNameData[];
MipsGenInstrInfo::MipsGenInstrInfo(int SO, int DO)
  : TargetInstrInfo(SO, DO) {
  InitMCInstrInfo(MipsInsts, MipsInstrNameIndices, MipsInstrNameData, 1677);
}
MipsGenInstrInfo::~MipsGenInstrInfo() {}
} // End llvm namespace 
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {namespace Mips {
namespace OpName { 
enum {
OPERAND_LAST
};
} // End namespace OpName
} // End namespace Mips
} // End namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM
#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {namespace Mips {
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // End namespace Mips
} // End namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {namespace Mips {
namespace OpTypes { 
enum OperandType {
  InvertedImOperand = 0,
  InvertedImOperand64 = 1,
  LSAImm = 2,
  PtrRC = 3,
  brtarget = 4,
  brtarget21 = 5,
  brtarget26 = 6,
  brtarget_mm = 7,
  calloffset16 = 8,
  calltarget = 9,
  calltarget_mm = 10,
  condcode = 11,
  cpinst_operand = 12,
  f32imm = 13,
  f64imm = 14,
  i16imm = 15,
  i1imm = 16,
  i32imm = 17,
  i64imm = 18,
  i8imm = 19,
  imm32 = 20,
  imm64 = 21,
  jmpoffset16 = 22,
  jmptarget = 23,
  jmptarget_mm = 24,
  mem = 25,
  mem16 = 26,
  mem16_ea = 27,
  mem_ea = 28,
  mem_mm_12 = 29,
  mem_msa = 30,
  mem_simm11 = 31,
  mem_simm9 = 32,
  pcrel16 = 33,
  simm10 = 34,
  simm10_64 = 35,
  simm11 = 36,
  simm12 = 37,
  simm16 = 38,
  simm16_64 = 39,
  simm18_lsl3 = 40,
  simm19_lsl2 = 41,
  simm20 = 42,
  simm5 = 43,
  simm9 = 44,
  size_ext = 45,
  size_ins = 46,
  uimm10 = 47,
  uimm16 = 48,
  uimm16_64 = 49,
  uimm2 = 50,
  uimm20 = 51,
  uimm3 = 52,
  uimm4 = 53,
  uimm5 = 54,
  uimm6 = 55,
  uimm8 = 56,
  uimmz = 57,
  vsplat_simm10 = 58,
  vsplat_simm5 = 59,
  vsplat_uimm1 = 60,
  vsplat_uimm2 = 61,
  vsplat_uimm3 = 62,
  vsplat_uimm4 = 63,
  vsplat_uimm5 = 64,
  vsplat_uimm6 = 65,
  vsplat_uimm8 = 66,
  OPERAND_TYPE_LIST_END
};
} // End namespace OpTypes
} // End namespace Mips
} // End namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM
#ifdef GET_INSTRMAP_INFO
#undef GET_INSTRMAP_INFO
namespace llvm {

namespace Mips {

enum Arch {
	Arch_se,
	Arch_micromips
};

// Std2MicroMips
int Std2MicroMips(uint16_t Opcode, enum Arch inArch) {
static const uint16_t Std2MicroMipsTable[][3] = {
  { Mips::ADD, Mips::ADD, Mips::ADD_MM },
  { Mips::ADDi, Mips::ADDi, Mips::ADDi_MM },
  { Mips::ADDiu, Mips::ADDiu, Mips::ADDiu_MM },
  { Mips::ADDu, Mips::ADDu, Mips::ADDu_MM },
  { Mips::AND, Mips::AND, Mips::AND_MM },
  { Mips::ANDi, Mips::ANDi, Mips::ANDi_MM },
  { Mips::BC1F, Mips::BC1F, Mips::BC1F_MM },
  { Mips::BC1T, Mips::BC1T, Mips::BC1T_MM },
  { Mips::BEQ, Mips::BEQ, Mips::BEQ_MM },
  { Mips::BGEZ, Mips::BGEZ, Mips::BGEZ_MM },
  { Mips::BGEZAL, Mips::BGEZAL, Mips::BGEZAL_MM },
  { Mips::BGTZ, Mips::BGTZ, Mips::BGTZ_MM },
  { Mips::BLEZ, Mips::BLEZ, Mips::BLEZ_MM },
  { Mips::BLTZ, Mips::BLTZ, Mips::BLTZ_MM },
  { Mips::BLTZAL, Mips::BLTZAL, Mips::BLTZAL_MM },
  { Mips::BNE, Mips::BNE, Mips::BNE_MM },
  { Mips::BREAK, Mips::BREAK, Mips::BREAK_MM },
  { Mips::CEIL_W_D32, Mips::CEIL_W_D32, Mips::CEIL_W_MM },
  { Mips::CEIL_W_S, Mips::CEIL_W_S, Mips::CEIL_W_S_MM },
  { Mips::CFC1, Mips::CFC1, Mips::CFC1_MM },
  { Mips::CLO, Mips::CLO, Mips::CLO_MM },
  { Mips::CLZ, Mips::CLZ, Mips::CLZ_MM },
  { Mips::CTC1, Mips::CTC1, Mips::CTC1_MM },
  { Mips::CVT_D32_S, Mips::CVT_D32_S, Mips::CVT_D_S_MM },
  { Mips::CVT_D32_W, Mips::CVT_D32_W, Mips::CVT_D32_W_MM },
  { Mips::CVT_L_D64, Mips::CVT_L_D64, Mips::CVT_L_D64_MM },
  { Mips::CVT_L_S, Mips::CVT_L_S, Mips::CVT_L_S_MM },
  { Mips::CVT_S_D32, Mips::CVT_S_D32, Mips::CVT_S_D32_MM },
  { Mips::CVT_S_W, Mips::CVT_S_W, Mips::CVT_S_W_MM },
  { Mips::CVT_W_D32, Mips::CVT_W_D32, Mips::CVT_W_MM },
  { Mips::CVT_W_S, Mips::CVT_W_S, Mips::CVT_W_S_MM },
  { Mips::DERET, Mips::DERET, Mips::DERET_MM },
  { Mips::DI, Mips::DI, Mips::DI_MM },
  { Mips::EI, Mips::EI, Mips::EI_MM },
  { Mips::ERET, Mips::ERET, Mips::ERET_MM },
  { Mips::EXT, Mips::EXT, Mips::EXT_MM },
  { Mips::FABS_D32, Mips::FABS_D32, Mips::FABS_MM },
  { Mips::FABS_S, Mips::FABS_S, Mips::FABS_S_MM },
  { Mips::FADD_D32, Mips::FADD_D32, Mips::FADD_MM },
  { Mips::FADD_S, Mips::FADD_S, Mips::FADD_S_MM },
  { Mips::FCMP_D32, Mips::FCMP_D32, Mips::FCMP_D32_MM },
  { Mips::FCMP_S32, Mips::FCMP_S32, Mips::FCMP_S32_MM },
  { Mips::FDIV_D32, Mips::FDIV_D32, Mips::FDIV_MM },
  { Mips::FDIV_S, Mips::FDIV_S, Mips::FDIV_S_MM },
  { Mips::FLOOR_W_D32, Mips::FLOOR_W_D32, Mips::FLOOR_W_MM },
  { Mips::FLOOR_W_S, Mips::FLOOR_W_S, Mips::FLOOR_W_S_MM },
  { Mips::FMOV_D32, Mips::FMOV_D32, Mips::FMOV_D32_MM },
  { Mips::FMOV_S, Mips::FMOV_S, Mips::FMOV_S_MM },
  { Mips::FMUL_D32, Mips::FMUL_D32, Mips::FMUL_MM },
  { Mips::FMUL_S, Mips::FMUL_S, Mips::FMUL_S_MM },
  { Mips::FNEG_D32, Mips::FNEG_D32, Mips::FNEG_MM },
  { Mips::FNEG_S, Mips::FNEG_S, Mips::FNEG_S_MM },
  { Mips::FSQRT_D32, Mips::FSQRT_D32, Mips::FSQRT_MM },
  { Mips::FSQRT_S, Mips::FSQRT_S, Mips::FSQRT_S_MM },
  { Mips::FSUB_D32, Mips::FSUB_D32, Mips::FSUB_MM },
  { Mips::FSUB_S, Mips::FSUB_S, Mips::FSUB_S_MM },
  { Mips::INS, Mips::INS, Mips::INS_MM },
  { Mips::J, Mips::J, Mips::J_MM },
  { Mips::JAL, Mips::JAL, Mips::JAL_MM },
  { Mips::JR, Mips::JR, Mips::JR_MM },
  { Mips::LB, Mips::LB, Mips::LB_MM },
  { Mips::LBu, Mips::LBu, Mips::LBu_MM },
  { Mips::LDC1, Mips::LDC1, Mips::LDC1_MM },
  { Mips::LEA_ADDiu, Mips::LEA_ADDiu, Mips::LEA_ADDiu_MM },
  { Mips::LH, Mips::LH, Mips::LH_MM },
  { Mips::LHu, Mips::LHu, Mips::LHu_MM },
  { Mips::LUXC1, Mips::LUXC1, Mips::LUXC1_MM },
  { Mips::LUi, Mips::LUi, Mips::LUi_MM },
  { Mips::LW, Mips::LW, Mips::LW_MM },
  { Mips::LWC1, Mips::LWC1, Mips::LWC1_MM },
  { Mips::LWXC1, Mips::LWXC1, Mips::LWXC1_MM },
  { Mips::MADD, Mips::MADD, Mips::MADD_MM },
  { Mips::MADDU, Mips::MADDU, Mips::MADDU_MM },
  { Mips::MADD_D32, Mips::MADD_D32, Mips::MADD_D32_MM },
  { Mips::MADD_S, Mips::MADD_S, Mips::MADD_S_MM },
  { Mips::MFC1, Mips::MFC1, Mips::MFC1_MM },
  { Mips::MFHC1_D32, Mips::MFHC1_D32, Mips::MFHC1_MM },
  { Mips::MFHI, Mips::MFHI, Mips::MFHI_MM },
  { Mips::MFLO, Mips::MFLO, Mips::MFLO_MM },
  { Mips::MOVF_D32, Mips::MOVF_D32, Mips::MOVF_D32_MM },
  { Mips::MOVF_I, Mips::MOVF_I, Mips::MOVF_I_MM },
  { Mips::MOVF_S, Mips::MOVF_S, Mips::MOVF_S_MM },
  { Mips::MOVN_I_D32, Mips::MOVN_I_D32, Mips::MOVN_I_D32_MM },
  { Mips::MOVN_I_I, Mips::MOVN_I_I, Mips::MOVN_I_MM },
  { Mips::MOVN_I_S, Mips::MOVN_I_S, Mips::MOVN_I_S_MM },
  { Mips::MOVT_D32, Mips::MOVT_D32, Mips::MOVT_D32_MM },
  { Mips::MOVT_I, Mips::MOVT_I, Mips::MOVT_I_MM },
  { Mips::MOVT_S, Mips::MOVT_S, Mips::MOVT_S_MM },
  { Mips::MOVZ_I_D32, Mips::MOVZ_I_D32, Mips::MOVZ_I_D32_MM },
  { Mips::MOVZ_I_I, Mips::MOVZ_I_I, Mips::MOVZ_I_MM },
  { Mips::MOVZ_I_S, Mips::MOVZ_I_S, Mips::MOVZ_I_S_MM },
  { Mips::MSUB, Mips::MSUB, Mips::MSUB_MM },
  { Mips::MSUBU, Mips::MSUBU, Mips::MSUBU_MM },
  { Mips::MSUB_D32, Mips::MSUB_D32, Mips::MSUB_D32_MM },
  { Mips::MSUB_S, Mips::MSUB_S, Mips::MSUB_S_MM },
  { Mips::MTC1, Mips::MTC1, Mips::MTC1_MM },
  { Mips::MTHC1_D32, Mips::MTHC1_D32, Mips::MTHC1_MM },
  { Mips::MTHI, Mips::MTHI, Mips::MTHI_MM },
  { Mips::MTLO, Mips::MTLO, Mips::MTLO_MM },
  { Mips::MUL, Mips::MUL, Mips::MUL_MM },
  { Mips::MULT, Mips::MULT, Mips::MULT_MM },
  { Mips::MULTu, Mips::MULTu, Mips::MULTu_MM },
  { Mips::NMADD_D32, Mips::NMADD_D32, Mips::NMADD_D32_MM },
  { Mips::NMADD_S, Mips::NMADD_S, Mips::NMADD_S_MM },
  { Mips::NMSUB_D32, Mips::NMSUB_D32, Mips::NMSUB_D32_MM },
  { Mips::NMSUB_S, Mips::NMSUB_S, Mips::NMSUB_S_MM },
  { Mips::NOR, Mips::NOR, Mips::NOR_MM },
  { Mips::OR, Mips::OR, Mips::OR_MM },
  { Mips::ORi, Mips::ORi, Mips::ORi_MM },
  { Mips::ROTR, Mips::ROTR, Mips::ROTR_MM },
  { Mips::ROTRV, Mips::ROTRV, Mips::ROTRV_MM },
  { Mips::ROUND_W_D32, Mips::ROUND_W_D32, Mips::ROUND_W_MM },
  { Mips::ROUND_W_S, Mips::ROUND_W_S, Mips::ROUND_W_S_MM },
  { Mips::SB, Mips::SB, Mips::SB_MM },
  { Mips::SDC1, Mips::SDC1, Mips::SDC1_MM },
  { Mips::SDIV, Mips::SDIV, Mips::SDIV_MM },
  { Mips::SEB, Mips::SEB, Mips::SEB_MM },
  { Mips::SEH, Mips::SEH, Mips::SEH_MM },
  { Mips::SH, Mips::SH, Mips::SH_MM },
  { Mips::SLL, Mips::SLL, Mips::SLL_MM },
  { Mips::SLLV, Mips::SLLV, Mips::SLLV_MM },
  { Mips::SLT, Mips::SLT, Mips::SLT_MM },
  { Mips::SLTi, Mips::SLTi, Mips::SLTi_MM },
  { Mips::SLTiu, Mips::SLTiu, Mips::SLTiu_MM },
  { Mips::SLTu, Mips::SLTu, Mips::SLTu_MM },
  { Mips::SRA, Mips::SRA, Mips::SRA_MM },
  { Mips::SRAV, Mips::SRAV, Mips::SRAV_MM },
  { Mips::SRL, Mips::SRL, Mips::SRL_MM },
  { Mips::SRLV, Mips::SRLV, Mips::SRLV_MM },
  { Mips::SUB, Mips::SUB, Mips::SUB_MM },
  { Mips::SUBu, Mips::SUBu, Mips::SUBu_MM },
  { Mips::SUXC1, Mips::SUXC1, Mips::SUXC1_MM },
  { Mips::SW, Mips::SW, Mips::SW_MM },
  { Mips::SWC1, Mips::SWC1, Mips::SWC1_MM },
  { Mips::SWXC1, Mips::SWXC1, Mips::SWXC1_MM },
  { Mips::SYNC, Mips::SYNC, Mips::SYNC_MM },
  { Mips::SYSCALL, Mips::SYSCALL, Mips::SYSCALL_MM },
  { Mips::TEQ, Mips::TEQ, Mips::TEQ_MM },
  { Mips::TEQI, Mips::TEQI, Mips::TEQI_MM },
  { Mips::TGE, Mips::TGE, Mips::TGE_MM },
  { Mips::TGEI, Mips::TGEI, Mips::TGEI_MM },
  { Mips::TGEIU, Mips::TGEIU, Mips::TGEIU_MM },
  { Mips::TGEU, Mips::TGEU, Mips::TGEU_MM },
  { Mips::TLT, Mips::TLT, Mips::TLT_MM },
  { Mips::TLTI, Mips::TLTI, Mips::TLTI_MM },
  { Mips::TLTU, Mips::TLTU, Mips::TLTU_MM },
  { Mips::TNE, Mips::TNE, Mips::TNE_MM },
  { Mips::TNEI, Mips::TNEI, Mips::TNEI_MM },
  { Mips::TRUNC_W_D32, Mips::TRUNC_W_D32, Mips::TRUNC_W_MM },
  { Mips::TRUNC_W_S, Mips::TRUNC_W_S, Mips::TRUNC_W_S_MM },
  { Mips::TTLTIU, Mips::TTLTIU, Mips::TLTIU_MM },
  { Mips::UDIV, Mips::UDIV, Mips::UDIV_MM },
  { Mips::WSBH, Mips::WSBH, Mips::WSBH_MM },
  { Mips::XOR, Mips::XOR, Mips::XOR_MM },
  { Mips::XORi, Mips::XORi, Mips::XORi_MM },
}; // End of Std2MicroMipsTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 155;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == Std2MicroMipsTable[mid][0]) {
      break;
    }
    if (Opcode < Std2MicroMipsTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  if (inArch == Arch_se)
    return Std2MicroMipsTable[mid][1];
  if (inArch == Arch_micromips)
    return Std2MicroMipsTable[mid][2];
  return -1;}

} // End Mips namespace
} // End llvm namespace
#endif // GET_INSTRMAP_INFO

