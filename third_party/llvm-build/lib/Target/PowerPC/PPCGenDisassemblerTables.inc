/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* * PPC Disassembler                                                         *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#include "llvm/MC/MCInst.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/DataTypes.h"
#include "llvm/Support/LEB128.h"
#include "llvm/Support/raw_ostream.h"
#include <assert.h>

namespace llvm {

// Helper function for extracting fields from encoded instructions.
template<typename InsnType>
static InsnType fieldFromInstruction(InsnType insn, unsigned startBit,
                                     unsigned numBits) {
    assert(startBit + numBits <= (sizeof(InsnType)*8) &&
           "Instruction field out of bounds!");
    InsnType fieldMask;
    if (numBits == sizeof(InsnType)*8)
      fieldMask = (InsnType)(-1LL);
    else
      fieldMask = (((InsnType)1 << numBits) - 1) << startBit;
    return (insn & fieldMask) >> startBit;
}

static const uint8_t DecoderTable32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 11
/* 7 */       MCD::OPC_Decode, 229, 5, 0, // Opcode: TDI
/* 11 */      MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 19
/* 15 */      MCD::OPC_Decode, 235, 5, 1, // Opcode: TWI
/* 19 */      MCD::OPC_FilterValue, 4, 155, 5, // Skip to: 1458
/* 23 */      MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 26 */      MCD::OPC_FilterValue, 0, 163, 0, // Skip to: 193
/* 30 */      MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 33 */      MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 41
/* 37 */      MCD::OPC_Decode, 243, 5, 2, // Opcode: VADDUBM
/* 41 */      MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 49
/* 45 */      MCD::OPC_Decode, 245, 5, 2, // Opcode: VADDUHM
/* 49 */      MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 57
/* 53 */      MCD::OPC_Decode, 247, 5, 2, // Opcode: VADDUWM
/* 57 */      MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 65
/* 61 */      MCD::OPC_Decode, 238, 5, 2, // Opcode: VADDCUW
/* 65 */      MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 73
/* 69 */      MCD::OPC_Decode, 244, 5, 2, // Opcode: VADDUBS
/* 73 */      MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 81
/* 77 */      MCD::OPC_Decode, 246, 5, 2, // Opcode: VADDUHS
/* 81 */      MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 89
/* 85 */      MCD::OPC_Decode, 248, 5, 2, // Opcode: VADDUWS
/* 89 */      MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 97
/* 93 */      MCD::OPC_Decode, 240, 5, 2, // Opcode: VADDSBS
/* 97 */      MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 105
/* 101 */     MCD::OPC_Decode, 241, 5, 2, // Opcode: VADDSHS
/* 105 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 113
/* 109 */     MCD::OPC_Decode, 242, 5, 2, // Opcode: VADDSWS
/* 113 */     MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 121
/* 117 */     MCD::OPC_Decode, 251, 6, 2, // Opcode: VSUBUBM
/* 121 */     MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 129
/* 125 */     MCD::OPC_Decode, 253, 6, 2, // Opcode: VSUBUHM
/* 129 */     MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 137
/* 133 */     MCD::OPC_Decode, 255, 6, 2, // Opcode: VSUBUWM
/* 137 */     MCD::OPC_FilterValue, 22, 4, 0, // Skip to: 145
/* 141 */     MCD::OPC_Decode, 246, 6, 2, // Opcode: VSUBCUW
/* 145 */     MCD::OPC_FilterValue, 24, 4, 0, // Skip to: 153
/* 149 */     MCD::OPC_Decode, 252, 6, 2, // Opcode: VSUBUBS
/* 153 */     MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 161
/* 157 */     MCD::OPC_Decode, 254, 6, 2, // Opcode: VSUBUHS
/* 161 */     MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 169
/* 165 */     MCD::OPC_Decode, 128, 7, 2, // Opcode: VSUBUWS
/* 169 */     MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 177
/* 173 */     MCD::OPC_Decode, 248, 6, 2, // Opcode: VSUBSBS
/* 177 */     MCD::OPC_FilterValue, 29, 4, 0, // Skip to: 185
/* 181 */     MCD::OPC_Decode, 249, 6, 2, // Opcode: VSUBSHS
/* 185 */     MCD::OPC_FilterValue, 30, 219, 33, // Skip to: 8856
/* 189 */     MCD::OPC_Decode, 250, 6, 2, // Opcode: VSUBSWS
/* 193 */     MCD::OPC_FilterValue, 2, 147, 0, // Skip to: 344
/* 197 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 200 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 208
/* 204 */     MCD::OPC_Decode, 170, 6, 2, // Opcode: VMAXUB
/* 208 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 216
/* 212 */     MCD::OPC_Decode, 171, 6, 2, // Opcode: VMAXUH
/* 216 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 224
/* 220 */     MCD::OPC_Decode, 172, 6, 2, // Opcode: VMAXUW
/* 224 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 232
/* 228 */     MCD::OPC_Decode, 167, 6, 2, // Opcode: VMAXSB
/* 232 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 240
/* 236 */     MCD::OPC_Decode, 168, 6, 2, // Opcode: VMAXSH
/* 240 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 248
/* 244 */     MCD::OPC_Decode, 169, 6, 2, // Opcode: VMAXSW
/* 248 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 256
/* 252 */     MCD::OPC_Decode, 179, 6, 2, // Opcode: VMINUB
/* 256 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 264
/* 260 */     MCD::OPC_Decode, 180, 6, 2, // Opcode: VMINUH
/* 264 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 272
/* 268 */     MCD::OPC_Decode, 181, 6, 2, // Opcode: VMINUW
/* 272 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 280
/* 276 */     MCD::OPC_Decode, 176, 6, 2, // Opcode: VMINSB
/* 280 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 288
/* 284 */     MCD::OPC_Decode, 177, 6, 2, // Opcode: VMINSH
/* 288 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 296
/* 292 */     MCD::OPC_Decode, 178, 6, 2, // Opcode: VMINSW
/* 296 */     MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 304
/* 300 */     MCD::OPC_Decode, 254, 5, 2, // Opcode: VAVGUB
/* 304 */     MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 312
/* 308 */     MCD::OPC_Decode, 255, 5, 2, // Opcode: VAVGUH
/* 312 */     MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 320
/* 316 */     MCD::OPC_Decode, 128, 6, 2, // Opcode: VAVGUW
/* 320 */     MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 328
/* 324 */     MCD::OPC_Decode, 251, 5, 2, // Opcode: VAVGSB
/* 328 */     MCD::OPC_FilterValue, 21, 4, 0, // Skip to: 336
/* 332 */     MCD::OPC_Decode, 252, 5, 2, // Opcode: VAVGSH
/* 336 */     MCD::OPC_FilterValue, 22, 68, 33, // Skip to: 8856
/* 340 */     MCD::OPC_Decode, 253, 5, 2, // Opcode: VAVGSW
/* 344 */     MCD::OPC_FilterValue, 4, 183, 0, // Skip to: 531
/* 348 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 351 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 359
/* 355 */     MCD::OPC_Decode, 221, 6, 2, // Opcode: VRLB
/* 359 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 367
/* 363 */     MCD::OPC_Decode, 222, 6, 2, // Opcode: VRLH
/* 367 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 375
/* 371 */     MCD::OPC_Decode, 223, 6, 2, // Opcode: VRLW
/* 375 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 383
/* 379 */     MCD::OPC_Decode, 227, 6, 2, // Opcode: VSLB
/* 383 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 391
/* 387 */     MCD::OPC_Decode, 229, 6, 2, // Opcode: VSLH
/* 391 */     MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 399
/* 395 */     MCD::OPC_Decode, 231, 6, 2, // Opcode: VSLW
/* 399 */     MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 407
/* 403 */     MCD::OPC_Decode, 226, 6, 2, // Opcode: VSL
/* 407 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 415
/* 411 */     MCD::OPC_Decode, 242, 6, 2, // Opcode: VSRB
/* 415 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 423
/* 419 */     MCD::OPC_Decode, 243, 6, 2, // Opcode: VSRH
/* 423 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 431
/* 427 */     MCD::OPC_Decode, 245, 6, 2, // Opcode: VSRW
/* 431 */     MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 439
/* 435 */     MCD::OPC_Decode, 238, 6, 2, // Opcode: VSR
/* 439 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 447
/* 443 */     MCD::OPC_Decode, 239, 6, 2, // Opcode: VSRAB
/* 447 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 455
/* 451 */     MCD::OPC_Decode, 240, 6, 2, // Opcode: VSRAH
/* 455 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 463
/* 459 */     MCD::OPC_Decode, 241, 6, 2, // Opcode: VSRAW
/* 463 */     MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 471
/* 467 */     MCD::OPC_Decode, 249, 5, 2, // Opcode: VAND
/* 471 */     MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 479
/* 475 */     MCD::OPC_Decode, 250, 5, 2, // Opcode: VANDC
/* 479 */     MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 487
/* 483 */     MCD::OPC_Decode, 205, 6, 2, // Opcode: VOR
/* 487 */     MCD::OPC_FilterValue, 19, 4, 0, // Skip to: 495
/* 491 */     MCD::OPC_Decode, 140, 7, 2, // Opcode: VXOR
/* 495 */     MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 503
/* 499 */     MCD::OPC_Decode, 204, 6, 2, // Opcode: VNOR
/* 503 */     MCD::OPC_FilterValue, 24, 10, 0, // Skip to: 517
/* 507 */     MCD::OPC_CheckField, 11, 10, 0, 151, 32, // Skip to: 8856
/* 513 */     MCD::OPC_Decode, 254, 3, 3, // Opcode: MFVSCR
/* 517 */     MCD::OPC_FilterValue, 25, 143, 32, // Skip to: 8856
/* 521 */     MCD::OPC_CheckField, 16, 10, 0, 137, 32, // Skip to: 8856
/* 527 */     MCD::OPC_Decode, 146, 4, 4, // Opcode: MTVSCR
/* 531 */     MCD::OPC_FilterValue, 6, 211, 0, // Skip to: 746
/* 535 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 538 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 546
/* 542 */     MCD::OPC_Decode, 137, 6, 2, // Opcode: VCMPEQUB
/* 546 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 554
/* 550 */     MCD::OPC_Decode, 139, 6, 2, // Opcode: VCMPEQUH
/* 554 */     MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 562
/* 558 */     MCD::OPC_Decode, 141, 6, 2, // Opcode: VCMPEQUW
/* 562 */     MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 570
/* 566 */     MCD::OPC_Decode, 135, 6, 2, // Opcode: VCMPEQFP
/* 570 */     MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 578
/* 574 */     MCD::OPC_Decode, 143, 6, 2, // Opcode: VCMPGEFP
/* 578 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 586
/* 582 */     MCD::OPC_Decode, 153, 6, 2, // Opcode: VCMPGTUB
/* 586 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 594
/* 590 */     MCD::OPC_Decode, 155, 6, 2, // Opcode: VCMPGTUH
/* 594 */     MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 602
/* 598 */     MCD::OPC_Decode, 157, 6, 2, // Opcode: VCMPGTUW
/* 602 */     MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 610
/* 606 */     MCD::OPC_Decode, 145, 6, 2, // Opcode: VCMPGTFP
/* 610 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 618
/* 614 */     MCD::OPC_Decode, 147, 6, 2, // Opcode: VCMPGTSB
/* 618 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 626
/* 622 */     MCD::OPC_Decode, 149, 6, 2, // Opcode: VCMPGTSH
/* 626 */     MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 634
/* 630 */     MCD::OPC_Decode, 151, 6, 2, // Opcode: VCMPGTSW
/* 634 */     MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 642
/* 638 */     MCD::OPC_Decode, 133, 6, 2, // Opcode: VCMPBFP
/* 642 */     MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 650
/* 646 */     MCD::OPC_Decode, 138, 6, 2, // Opcode: VCMPEQUBo
/* 650 */     MCD::OPC_FilterValue, 17, 4, 0, // Skip to: 658
/* 654 */     MCD::OPC_Decode, 140, 6, 2, // Opcode: VCMPEQUHo
/* 658 */     MCD::OPC_FilterValue, 18, 4, 0, // Skip to: 666
/* 662 */     MCD::OPC_Decode, 142, 6, 2, // Opcode: VCMPEQUWo
/* 666 */     MCD::OPC_FilterValue, 19, 4, 0, // Skip to: 674
/* 670 */     MCD::OPC_Decode, 136, 6, 2, // Opcode: VCMPEQFPo
/* 674 */     MCD::OPC_FilterValue, 23, 4, 0, // Skip to: 682
/* 678 */     MCD::OPC_Decode, 144, 6, 2, // Opcode: VCMPGEFPo
/* 682 */     MCD::OPC_FilterValue, 24, 4, 0, // Skip to: 690
/* 686 */     MCD::OPC_Decode, 154, 6, 2, // Opcode: VCMPGTUBo
/* 690 */     MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 698
/* 694 */     MCD::OPC_Decode, 156, 6, 2, // Opcode: VCMPGTUHo
/* 698 */     MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 706
/* 702 */     MCD::OPC_Decode, 158, 6, 2, // Opcode: VCMPGTUWo
/* 706 */     MCD::OPC_FilterValue, 27, 4, 0, // Skip to: 714
/* 710 */     MCD::OPC_Decode, 146, 6, 2, // Opcode: VCMPGTFPo
/* 714 */     MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 722
/* 718 */     MCD::OPC_Decode, 148, 6, 2, // Opcode: VCMPGTSBo
/* 722 */     MCD::OPC_FilterValue, 29, 4, 0, // Skip to: 730
/* 726 */     MCD::OPC_Decode, 150, 6, 2, // Opcode: VCMPGTSHo
/* 730 */     MCD::OPC_FilterValue, 30, 4, 0, // Skip to: 738
/* 734 */     MCD::OPC_Decode, 152, 6, 2, // Opcode: VCMPGTSWo
/* 738 */     MCD::OPC_FilterValue, 31, 178, 31, // Skip to: 8856
/* 742 */     MCD::OPC_Decode, 134, 6, 2, // Opcode: VCMPBFPo
/* 746 */     MCD::OPC_FilterValue, 8, 107, 0, // Skip to: 857
/* 750 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 753 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 761
/* 757 */     MCD::OPC_Decode, 201, 6, 2, // Opcode: VMULOUB
/* 761 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 769
/* 765 */     MCD::OPC_Decode, 202, 6, 2, // Opcode: VMULOUH
/* 769 */     MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 777
/* 773 */     MCD::OPC_Decode, 199, 6, 2, // Opcode: VMULOSB
/* 777 */     MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 785
/* 781 */     MCD::OPC_Decode, 200, 6, 2, // Opcode: VMULOSH
/* 785 */     MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 793
/* 789 */     MCD::OPC_Decode, 197, 6, 2, // Opcode: VMULEUB
/* 793 */     MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 801
/* 797 */     MCD::OPC_Decode, 198, 6, 2, // Opcode: VMULEUH
/* 801 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 809
/* 805 */     MCD::OPC_Decode, 195, 6, 2, // Opcode: VMULESB
/* 809 */     MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 817
/* 813 */     MCD::OPC_Decode, 196, 6, 2, // Opcode: VMULESH
/* 817 */     MCD::OPC_FilterValue, 24, 4, 0, // Skip to: 825
/* 821 */     MCD::OPC_Decode, 132, 7, 2, // Opcode: VSUM4UBS
/* 825 */     MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 833
/* 829 */     MCD::OPC_Decode, 131, 7, 2, // Opcode: VSUM4SHS
/* 833 */     MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 841
/* 837 */     MCD::OPC_Decode, 129, 7, 2, // Opcode: VSUM2SWS
/* 841 */     MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 849
/* 845 */     MCD::OPC_Decode, 130, 7, 2, // Opcode: VSUM4SBS
/* 849 */     MCD::OPC_FilterValue, 30, 67, 31, // Skip to: 8856
/* 853 */     MCD::OPC_Decode, 133, 7, 2, // Opcode: VSUMSWS
/* 857 */     MCD::OPC_FilterValue, 10, 179, 0, // Skip to: 1040
/* 861 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 864 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 872
/* 868 */     MCD::OPC_Decode, 239, 5, 2, // Opcode: VADDFP
/* 872 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 880
/* 876 */     MCD::OPC_Decode, 247, 6, 2, // Opcode: VSUBFP
/* 880 */     MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 894
/* 884 */     MCD::OPC_CheckField, 16, 5, 0, 30, 31, // Skip to: 8856
/* 890 */     MCD::OPC_Decode, 216, 6, 5, // Opcode: VREFP
/* 894 */     MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 908
/* 898 */     MCD::OPC_CheckField, 16, 5, 0, 16, 31, // Skip to: 8856
/* 904 */     MCD::OPC_Decode, 224, 6, 5, // Opcode: VRSQRTEFP
/* 908 */     MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 922
/* 912 */     MCD::OPC_CheckField, 16, 5, 0, 2, 31, // Skip to: 8856
/* 918 */     MCD::OPC_Decode, 163, 6, 5, // Opcode: VEXPTEFP
/* 922 */     MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 936
/* 926 */     MCD::OPC_CheckField, 16, 5, 0, 244, 30, // Skip to: 8856
/* 932 */     MCD::OPC_Decode, 164, 6, 5, // Opcode: VLOGEFP
/* 936 */     MCD::OPC_FilterValue, 8, 10, 0, // Skip to: 950
/* 940 */     MCD::OPC_CheckField, 16, 5, 0, 230, 30, // Skip to: 8856
/* 946 */     MCD::OPC_Decode, 218, 6, 5, // Opcode: VRFIN
/* 950 */     MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 964
/* 954 */     MCD::OPC_CheckField, 16, 5, 0, 216, 30, // Skip to: 8856
/* 960 */     MCD::OPC_Decode, 220, 6, 5, // Opcode: VRFIZ
/* 964 */     MCD::OPC_FilterValue, 10, 10, 0, // Skip to: 978
/* 968 */     MCD::OPC_CheckField, 16, 5, 0, 202, 30, // Skip to: 8856
/* 974 */     MCD::OPC_Decode, 219, 6, 5, // Opcode: VRFIP
/* 978 */     MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 992
/* 982 */     MCD::OPC_CheckField, 16, 5, 0, 188, 30, // Skip to: 8856
/* 988 */     MCD::OPC_Decode, 217, 6, 5, // Opcode: VRFIM
/* 992 */     MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 1000
/* 996 */     MCD::OPC_Decode, 131, 6, 6, // Opcode: VCFUX
/* 1000 */    MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 1008
/* 1004 */    MCD::OPC_Decode, 129, 6, 6, // Opcode: VCFSX
/* 1008 */    MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 1016
/* 1012 */    MCD::OPC_Decode, 161, 6, 6, // Opcode: VCTUXS
/* 1016 */    MCD::OPC_FilterValue, 15, 4, 0, // Skip to: 1024
/* 1020 */    MCD::OPC_Decode, 159, 6, 6, // Opcode: VCTSXS
/* 1024 */    MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 1032
/* 1028 */    MCD::OPC_Decode, 166, 6, 2, // Opcode: VMAXFP
/* 1032 */    MCD::OPC_FilterValue, 17, 140, 30, // Skip to: 8856
/* 1036 */    MCD::OPC_Decode, 175, 6, 2, // Opcode: VMINFP
/* 1040 */    MCD::OPC_FilterValue, 12, 133, 0, // Skip to: 1177
/* 1044 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1047 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1055
/* 1051 */    MCD::OPC_Decode, 183, 6, 2, // Opcode: VMRGHB
/* 1055 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1063
/* 1059 */    MCD::OPC_Decode, 184, 6, 2, // Opcode: VMRGHH
/* 1063 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 1071
/* 1067 */    MCD::OPC_Decode, 185, 6, 2, // Opcode: VMRGHW
/* 1071 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 1079
/* 1075 */    MCD::OPC_Decode, 186, 6, 2, // Opcode: VMRGLB
/* 1079 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 1087
/* 1083 */    MCD::OPC_Decode, 187, 6, 2, // Opcode: VMRGLH
/* 1087 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 1095
/* 1091 */    MCD::OPC_Decode, 188, 6, 2, // Opcode: VMRGLW
/* 1095 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 1103
/* 1099 */    MCD::OPC_Decode, 232, 6, 6, // Opcode: VSPLTB
/* 1103 */    MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 1111
/* 1107 */    MCD::OPC_Decode, 233, 6, 6, // Opcode: VSPLTH
/* 1111 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 1119
/* 1115 */    MCD::OPC_Decode, 237, 6, 6, // Opcode: VSPLTW
/* 1119 */    MCD::OPC_FilterValue, 12, 10, 0, // Skip to: 1133
/* 1123 */    MCD::OPC_CheckField, 11, 5, 0, 47, 30, // Skip to: 8856
/* 1129 */    MCD::OPC_Decode, 234, 6, 7, // Opcode: VSPLTISB
/* 1133 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 1147
/* 1137 */    MCD::OPC_CheckField, 11, 5, 0, 33, 30, // Skip to: 8856
/* 1143 */    MCD::OPC_Decode, 235, 6, 7, // Opcode: VSPLTISH
/* 1147 */    MCD::OPC_FilterValue, 14, 10, 0, // Skip to: 1161
/* 1151 */    MCD::OPC_CheckField, 11, 5, 0, 19, 30, // Skip to: 8856
/* 1157 */    MCD::OPC_Decode, 236, 6, 7, // Opcode: VSPLTISW
/* 1161 */    MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 1169
/* 1165 */    MCD::OPC_Decode, 230, 6, 2, // Opcode: VSLO
/* 1169 */    MCD::OPC_FilterValue, 17, 3, 30, // Skip to: 8856
/* 1173 */    MCD::OPC_Decode, 244, 6, 2, // Opcode: VSRO
/* 1177 */    MCD::OPC_FilterValue, 14, 159, 0, // Skip to: 1340
/* 1181 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1184 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1192
/* 1188 */    MCD::OPC_Decode, 212, 6, 2, // Opcode: VPKUHUM
/* 1192 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1200
/* 1196 */    MCD::OPC_Decode, 214, 6, 2, // Opcode: VPKUWUM
/* 1200 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 1208
/* 1204 */    MCD::OPC_Decode, 213, 6, 2, // Opcode: VPKUHUS
/* 1208 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 1216
/* 1212 */    MCD::OPC_Decode, 215, 6, 2, // Opcode: VPKUWUS
/* 1216 */    MCD::OPC_FilterValue, 4, 4, 0, // Skip to: 1224
/* 1220 */    MCD::OPC_Decode, 209, 6, 2, // Opcode: VPKSHUS
/* 1224 */    MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 1232
/* 1228 */    MCD::OPC_Decode, 211, 6, 2, // Opcode: VPKSWUS
/* 1232 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 1240
/* 1236 */    MCD::OPC_Decode, 208, 6, 2, // Opcode: VPKSHSS
/* 1240 */    MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 1248
/* 1244 */    MCD::OPC_Decode, 210, 6, 2, // Opcode: VPKSWSS
/* 1248 */    MCD::OPC_FilterValue, 8, 10, 0, // Skip to: 1262
/* 1252 */    MCD::OPC_CheckField, 16, 5, 0, 174, 29, // Skip to: 8856
/* 1258 */    MCD::OPC_Decode, 135, 7, 5, // Opcode: VUPKHSB
/* 1262 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 1276
/* 1266 */    MCD::OPC_CheckField, 16, 5, 0, 160, 29, // Skip to: 8856
/* 1272 */    MCD::OPC_Decode, 136, 7, 5, // Opcode: VUPKHSH
/* 1276 */    MCD::OPC_FilterValue, 10, 10, 0, // Skip to: 1290
/* 1280 */    MCD::OPC_CheckField, 16, 5, 0, 146, 29, // Skip to: 8856
/* 1286 */    MCD::OPC_Decode, 138, 7, 5, // Opcode: VUPKLSB
/* 1290 */    MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 1304
/* 1294 */    MCD::OPC_CheckField, 16, 5, 0, 132, 29, // Skip to: 8856
/* 1300 */    MCD::OPC_Decode, 139, 7, 5, // Opcode: VUPKLSH
/* 1304 */    MCD::OPC_FilterValue, 12, 4, 0, // Skip to: 1312
/* 1308 */    MCD::OPC_Decode, 207, 6, 2, // Opcode: VPKPX
/* 1312 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 1326
/* 1316 */    MCD::OPC_CheckField, 16, 5, 0, 110, 29, // Skip to: 8856
/* 1322 */    MCD::OPC_Decode, 134, 7, 5, // Opcode: VUPKHPX
/* 1326 */    MCD::OPC_FilterValue, 15, 102, 29, // Skip to: 8856
/* 1330 */    MCD::OPC_CheckField, 16, 5, 0, 96, 29, // Skip to: 8856
/* 1336 */    MCD::OPC_Decode, 137, 7, 5, // Opcode: VUPKLPX
/* 1340 */    MCD::OPC_FilterValue, 32, 4, 0, // Skip to: 1348
/* 1344 */    MCD::OPC_Decode, 173, 6, 8, // Opcode: VMHADDSHS
/* 1348 */    MCD::OPC_FilterValue, 33, 4, 0, // Skip to: 1356
/* 1352 */    MCD::OPC_Decode, 174, 6, 8, // Opcode: VMHRADDSHS
/* 1356 */    MCD::OPC_FilterValue, 34, 4, 0, // Skip to: 1364
/* 1360 */    MCD::OPC_Decode, 182, 6, 8, // Opcode: VMLADDUHM
/* 1364 */    MCD::OPC_FilterValue, 36, 4, 0, // Skip to: 1372
/* 1368 */    MCD::OPC_Decode, 192, 6, 8, // Opcode: VMSUMUBM
/* 1372 */    MCD::OPC_FilterValue, 37, 4, 0, // Skip to: 1380
/* 1376 */    MCD::OPC_Decode, 189, 6, 8, // Opcode: VMSUMMBM
/* 1380 */    MCD::OPC_FilterValue, 38, 4, 0, // Skip to: 1388
/* 1384 */    MCD::OPC_Decode, 193, 6, 8, // Opcode: VMSUMUHM
/* 1388 */    MCD::OPC_FilterValue, 39, 4, 0, // Skip to: 1396
/* 1392 */    MCD::OPC_Decode, 194, 6, 8, // Opcode: VMSUMUHS
/* 1396 */    MCD::OPC_FilterValue, 40, 4, 0, // Skip to: 1404
/* 1400 */    MCD::OPC_Decode, 190, 6, 8, // Opcode: VMSUMSHM
/* 1404 */    MCD::OPC_FilterValue, 41, 4, 0, // Skip to: 1412
/* 1408 */    MCD::OPC_Decode, 191, 6, 8, // Opcode: VMSUMSHS
/* 1412 */    MCD::OPC_FilterValue, 42, 4, 0, // Skip to: 1420
/* 1416 */    MCD::OPC_Decode, 225, 6, 8, // Opcode: VSEL
/* 1420 */    MCD::OPC_FilterValue, 43, 4, 0, // Skip to: 1428
/* 1424 */    MCD::OPC_Decode, 206, 6, 8, // Opcode: VPERM
/* 1428 */    MCD::OPC_FilterValue, 44, 10, 0, // Skip to: 1442
/* 1432 */    MCD::OPC_CheckField, 10, 1, 0, 250, 28, // Skip to: 8856
/* 1438 */    MCD::OPC_Decode, 228, 6, 9, // Opcode: VSLDOI
/* 1442 */    MCD::OPC_FilterValue, 46, 4, 0, // Skip to: 1450
/* 1446 */    MCD::OPC_Decode, 165, 6, 10, // Opcode: VMADDFP
/* 1450 */    MCD::OPC_FilterValue, 47, 234, 28, // Skip to: 8856
/* 1454 */    MCD::OPC_Decode, 203, 6, 10, // Opcode: VNMSUBFP
/* 1458 */    MCD::OPC_FilterValue, 7, 4, 0, // Skip to: 1466
/* 1462 */    MCD::OPC_Decode, 157, 4, 11, // Opcode: MULLI
/* 1466 */    MCD::OPC_FilterValue, 8, 4, 0, // Skip to: 1474
/* 1470 */    MCD::OPC_Decode, 200, 5, 11, // Opcode: SUBFIC
/* 1474 */    MCD::OPC_FilterValue, 10, 19, 0, // Skip to: 1497
/* 1478 */    MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 1481 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1489
/* 1485 */    MCD::OPC_Decode, 211, 1, 12, // Opcode: CMPLWI
/* 1489 */    MCD::OPC_FilterValue, 1, 195, 28, // Skip to: 8856
/* 1493 */    MCD::OPC_Decode, 209, 1, 13, // Opcode: CMPLDI
/* 1497 */    MCD::OPC_FilterValue, 11, 19, 0, // Skip to: 1520
/* 1501 */    MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 1504 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 1512
/* 1508 */    MCD::OPC_Decode, 213, 1, 14, // Opcode: CMPWI
/* 1512 */    MCD::OPC_FilterValue, 1, 172, 28, // Skip to: 8856
/* 1516 */    MCD::OPC_Decode, 207, 1, 15, // Opcode: CMPDI
/* 1520 */    MCD::OPC_FilterValue, 12, 3, 0, // Skip to: 1527
/* 1524 */    MCD::OPC_Decode, 37, 11, // Opcode: ADDIC
/* 1527 */    MCD::OPC_FilterValue, 13, 3, 0, // Skip to: 1534
/* 1531 */    MCD::OPC_Decode, 39, 11, // Opcode: ADDICo
/* 1534 */    MCD::OPC_FilterValue, 14, 13, 0, // Skip to: 1551
/* 1538 */    MCD::OPC_CheckField, 16, 5, 0, 4, 0, // Skip to: 1548
/* 1544 */    MCD::OPC_Decode, 206, 3, 16, // Opcode: LI
/* 1548 */    MCD::OPC_Decode, 35, 17, // Opcode: ADDI
/* 1551 */    MCD::OPC_FilterValue, 15, 13, 0, // Skip to: 1568
/* 1555 */    MCD::OPC_CheckField, 16, 5, 0, 4, 0, // Skip to: 1565
/* 1561 */    MCD::OPC_Decode, 208, 3, 16, // Opcode: LIS
/* 1565 */    MCD::OPC_Decode, 40, 17, // Opcode: ADDIS
/* 1568 */    MCD::OPC_FilterValue, 16, 7, 1, // Skip to: 1835
/* 1572 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 1575 */    MCD::OPC_FilterValue, 0, 61, 0, // Skip to: 1640
/* 1579 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 1582 */    MCD::OPC_FilterValue, 128, 4, 4, 0, // Skip to: 1591
/* 1587 */    MCD::OPC_Decode, 146, 1, 18, // Opcode: BDNZ
/* 1591 */    MCD::OPC_FilterValue, 192, 4, 4, 0, // Skip to: 1600
/* 1596 */    MCD::OPC_Decode, 166, 1, 18, // Opcode: BDZ
/* 1600 */    MCD::OPC_FilterValue, 128, 6, 4, 0, // Skip to: 1609
/* 1605 */    MCD::OPC_Decode, 164, 1, 18, // Opcode: BDNZm
/* 1609 */    MCD::OPC_FilterValue, 160, 6, 4, 0, // Skip to: 1618
/* 1614 */    MCD::OPC_Decode, 165, 1, 18, // Opcode: BDNZp
/* 1618 */    MCD::OPC_FilterValue, 192, 6, 4, 0, // Skip to: 1627
/* 1623 */    MCD::OPC_Decode, 184, 1, 18, // Opcode: BDZm
/* 1627 */    MCD::OPC_FilterValue, 224, 6, 4, 0, // Skip to: 1636
/* 1632 */    MCD::OPC_Decode, 185, 1, 18, // Opcode: BDZp
/* 1636 */    MCD::OPC_Decode, 164, 8, 19, // Opcode: gBC
/* 1640 */    MCD::OPC_FilterValue, 1, 61, 0, // Skip to: 1705
/* 1644 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 1647 */    MCD::OPC_FilterValue, 128, 4, 4, 0, // Skip to: 1656
/* 1652 */    MCD::OPC_Decode, 151, 1, 18, // Opcode: BDNZL
/* 1656 */    MCD::OPC_FilterValue, 192, 4, 4, 0, // Skip to: 1665
/* 1661 */    MCD::OPC_Decode, 171, 1, 18, // Opcode: BDZL
/* 1665 */    MCD::OPC_FilterValue, 128, 6, 4, 0, // Skip to: 1674
/* 1670 */    MCD::OPC_Decode, 162, 1, 18, // Opcode: BDNZLm
/* 1674 */    MCD::OPC_FilterValue, 160, 6, 4, 0, // Skip to: 1683
/* 1679 */    MCD::OPC_Decode, 163, 1, 18, // Opcode: BDNZLp
/* 1683 */    MCD::OPC_FilterValue, 192, 6, 4, 0, // Skip to: 1692
/* 1688 */    MCD::OPC_Decode, 182, 1, 18, // Opcode: BDZLm
/* 1692 */    MCD::OPC_FilterValue, 224, 6, 4, 0, // Skip to: 1701
/* 1697 */    MCD::OPC_Decode, 183, 1, 18, // Opcode: BDZLp
/* 1701 */    MCD::OPC_Decode, 168, 8, 19, // Opcode: gBCL
/* 1705 */    MCD::OPC_FilterValue, 2, 61, 0, // Skip to: 1770
/* 1709 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 1712 */    MCD::OPC_FilterValue, 128, 4, 4, 0, // Skip to: 1721
/* 1717 */    MCD::OPC_Decode, 148, 1, 18, // Opcode: BDNZA
/* 1721 */    MCD::OPC_FilterValue, 192, 4, 4, 0, // Skip to: 1730
/* 1726 */    MCD::OPC_Decode, 168, 1, 18, // Opcode: BDZA
/* 1730 */    MCD::OPC_FilterValue, 128, 6, 4, 0, // Skip to: 1739
/* 1735 */    MCD::OPC_Decode, 149, 1, 18, // Opcode: BDNZAm
/* 1739 */    MCD::OPC_FilterValue, 160, 6, 4, 0, // Skip to: 1748
/* 1744 */    MCD::OPC_Decode, 150, 1, 18, // Opcode: BDNZAp
/* 1748 */    MCD::OPC_FilterValue, 192, 6, 4, 0, // Skip to: 1757
/* 1753 */    MCD::OPC_Decode, 169, 1, 18, // Opcode: BDZAm
/* 1757 */    MCD::OPC_FilterValue, 224, 6, 4, 0, // Skip to: 1766
/* 1762 */    MCD::OPC_Decode, 170, 1, 18, // Opcode: BDZAp
/* 1766 */    MCD::OPC_Decode, 165, 8, 19, // Opcode: gBCA
/* 1770 */    MCD::OPC_FilterValue, 3, 170, 27, // Skip to: 8856
/* 1774 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 1777 */    MCD::OPC_FilterValue, 128, 4, 4, 0, // Skip to: 1786
/* 1782 */    MCD::OPC_Decode, 152, 1, 18, // Opcode: BDNZLA
/* 1786 */    MCD::OPC_FilterValue, 192, 4, 4, 0, // Skip to: 1795
/* 1791 */    MCD::OPC_Decode, 172, 1, 18, // Opcode: BDZLA
/* 1795 */    MCD::OPC_FilterValue, 128, 6, 4, 0, // Skip to: 1804
/* 1800 */    MCD::OPC_Decode, 153, 1, 18, // Opcode: BDNZLAm
/* 1804 */    MCD::OPC_FilterValue, 160, 6, 4, 0, // Skip to: 1813
/* 1809 */    MCD::OPC_Decode, 154, 1, 18, // Opcode: BDNZLAp
/* 1813 */    MCD::OPC_FilterValue, 192, 6, 4, 0, // Skip to: 1822
/* 1818 */    MCD::OPC_Decode, 173, 1, 18, // Opcode: BDZLAm
/* 1822 */    MCD::OPC_FilterValue, 224, 6, 4, 0, // Skip to: 1831
/* 1827 */    MCD::OPC_Decode, 174, 1, 18, // Opcode: BDZLAp
/* 1831 */    MCD::OPC_Decode, 169, 8, 19, // Opcode: gBCLA
/* 1835 */    MCD::OPC_FilterValue, 17, 10, 0, // Skip to: 1849
/* 1839 */    MCD::OPC_CheckField, 1, 1, 1, 99, 27, // Skip to: 8856
/* 1845 */    MCD::OPC_Decode, 224, 4, 20, // Opcode: SC
/* 1849 */    MCD::OPC_FilterValue, 18, 33, 0, // Skip to: 1886
/* 1853 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 1856 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 1863
/* 1860 */    MCD::OPC_Decode, 113, 21, // Opcode: B
/* 1863 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 1871
/* 1867 */    MCD::OPC_Decode, 186, 1, 21, // Opcode: BL
/* 1871 */    MCD::OPC_FilterValue, 2, 3, 0, // Skip to: 1878
/* 1875 */    MCD::OPC_Decode, 114, 21, // Opcode: BA
/* 1878 */    MCD::OPC_FilterValue, 3, 62, 27, // Skip to: 8856
/* 1882 */    MCD::OPC_Decode, 192, 1, 21, // Opcode: BLA
/* 1886 */    MCD::OPC_FilterValue, 19, 165, 1, // Skip to: 2311
/* 1890 */    MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 1893 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 1913
/* 1897 */    MCD::OPC_CheckField, 21, 2, 0, 41, 27, // Skip to: 8856
/* 1903 */    MCD::OPC_CheckField, 11, 7, 0, 35, 27, // Skip to: 8856
/* 1909 */    MCD::OPC_Decode, 238, 3, 22, // Opcode: MCRF
/* 1913 */    MCD::OPC_FilterValue, 32, 119, 0, // Skip to: 2036
/* 1917 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 1920 */    MCD::OPC_FilterValue, 0, 20, 27, // Skip to: 8856
/* 1924 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 1927 */    MCD::OPC_FilterValue, 128, 4, 10, 0, // Skip to: 1942
/* 1932 */    MCD::OPC_CheckField, 11, 2, 0, 94, 0, // Skip to: 2032
/* 1938 */    MCD::OPC_Decode, 155, 1, 23, // Opcode: BDNZLR
/* 1942 */    MCD::OPC_FilterValue, 192, 4, 10, 0, // Skip to: 1957
/* 1947 */    MCD::OPC_CheckField, 11, 2, 0, 79, 0, // Skip to: 2032
/* 1953 */    MCD::OPC_Decode, 175, 1, 23, // Opcode: BDZLR
/* 1957 */    MCD::OPC_FilterValue, 128, 5, 10, 0, // Skip to: 1972
/* 1962 */    MCD::OPC_CheckField, 11, 2, 0, 64, 0, // Skip to: 2032
/* 1968 */    MCD::OPC_Decode, 195, 1, 23, // Opcode: BLR
/* 1972 */    MCD::OPC_FilterValue, 128, 6, 10, 0, // Skip to: 1987
/* 1977 */    MCD::OPC_CheckField, 11, 2, 0, 49, 0, // Skip to: 2032
/* 1983 */    MCD::OPC_Decode, 160, 1, 23, // Opcode: BDNZLRm
/* 1987 */    MCD::OPC_FilterValue, 160, 6, 10, 0, // Skip to: 2002
/* 1992 */    MCD::OPC_CheckField, 11, 2, 0, 34, 0, // Skip to: 2032
/* 1998 */    MCD::OPC_Decode, 161, 1, 23, // Opcode: BDNZLRp
/* 2002 */    MCD::OPC_FilterValue, 192, 6, 10, 0, // Skip to: 2017
/* 2007 */    MCD::OPC_CheckField, 11, 2, 0, 19, 0, // Skip to: 2032
/* 2013 */    MCD::OPC_Decode, 180, 1, 23, // Opcode: BDZLRm
/* 2017 */    MCD::OPC_FilterValue, 224, 6, 10, 0, // Skip to: 2032
/* 2022 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 2032
/* 2028 */    MCD::OPC_Decode, 181, 1, 23, // Opcode: BDZLRp
/* 2032 */    MCD::OPC_Decode, 170, 8, 24, // Opcode: gBCLR
/* 2036 */    MCD::OPC_FilterValue, 33, 119, 0, // Skip to: 2159
/* 2040 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 2043 */    MCD::OPC_FilterValue, 0, 153, 26, // Skip to: 8856
/* 2047 */    MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 2050 */    MCD::OPC_FilterValue, 128, 4, 10, 0, // Skip to: 2065
/* 2055 */    MCD::OPC_CheckField, 11, 2, 0, 94, 0, // Skip to: 2155
/* 2061 */    MCD::OPC_Decode, 157, 1, 23, // Opcode: BDNZLRL
/* 2065 */    MCD::OPC_FilterValue, 192, 4, 10, 0, // Skip to: 2080
/* 2070 */    MCD::OPC_CheckField, 11, 2, 0, 79, 0, // Skip to: 2155
/* 2076 */    MCD::OPC_Decode, 177, 1, 23, // Opcode: BDZLRL
/* 2080 */    MCD::OPC_FilterValue, 128, 5, 10, 0, // Skip to: 2095
/* 2085 */    MCD::OPC_CheckField, 11, 2, 0, 64, 0, // Skip to: 2155
/* 2091 */    MCD::OPC_Decode, 196, 1, 23, // Opcode: BLRL
/* 2095 */    MCD::OPC_FilterValue, 128, 6, 10, 0, // Skip to: 2110
/* 2100 */    MCD::OPC_CheckField, 11, 2, 0, 49, 0, // Skip to: 2155
/* 2106 */    MCD::OPC_Decode, 158, 1, 23, // Opcode: BDNZLRLm
/* 2110 */    MCD::OPC_FilterValue, 160, 6, 10, 0, // Skip to: 2125
/* 2115 */    MCD::OPC_CheckField, 11, 2, 0, 34, 0, // Skip to: 2155
/* 2121 */    MCD::OPC_Decode, 159, 1, 23, // Opcode: BDNZLRLp
/* 2125 */    MCD::OPC_FilterValue, 192, 6, 10, 0, // Skip to: 2140
/* 2130 */    MCD::OPC_CheckField, 11, 2, 0, 19, 0, // Skip to: 2155
/* 2136 */    MCD::OPC_Decode, 178, 1, 23, // Opcode: BDZLRLm
/* 2140 */    MCD::OPC_FilterValue, 224, 6, 10, 0, // Skip to: 2155
/* 2145 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 2155
/* 2151 */    MCD::OPC_Decode, 179, 1, 23, // Opcode: BDZLRLp
/* 2155 */    MCD::OPC_Decode, 171, 8, 24, // Opcode: gBCLRL
/* 2159 */    MCD::OPC_FilterValue, 66, 4, 0, // Skip to: 2167
/* 2163 */    MCD::OPC_Decode, 224, 1, 25, // Opcode: CRNOR
/* 2167 */    MCD::OPC_FilterValue, 130, 2, 4, 0, // Skip to: 2176
/* 2172 */    MCD::OPC_Decode, 221, 1, 25, // Opcode: CRANDC
/* 2176 */    MCD::OPC_FilterValue, 172, 2, 10, 0, // Skip to: 2191
/* 2181 */    MCD::OPC_CheckField, 11, 15, 0, 13, 26, // Skip to: 8856
/* 2187 */    MCD::OPC_Decode, 155, 3, 23, // Opcode: ISYNC
/* 2191 */    MCD::OPC_FilterValue, 130, 3, 4, 0, // Skip to: 2200
/* 2196 */    MCD::OPC_Decode, 229, 1, 25, // Opcode: CRXOR
/* 2200 */    MCD::OPC_FilterValue, 194, 3, 4, 0, // Skip to: 2209
/* 2205 */    MCD::OPC_Decode, 223, 1, 25, // Opcode: CRNAND
/* 2209 */    MCD::OPC_FilterValue, 130, 4, 4, 0, // Skip to: 2218
/* 2214 */    MCD::OPC_Decode, 220, 1, 25, // Opcode: CRAND
/* 2218 */    MCD::OPC_FilterValue, 194, 4, 4, 0, // Skip to: 2227
/* 2223 */    MCD::OPC_Decode, 222, 1, 25, // Opcode: CREQV
/* 2227 */    MCD::OPC_FilterValue, 194, 6, 4, 0, // Skip to: 2236
/* 2232 */    MCD::OPC_Decode, 226, 1, 25, // Opcode: CRORC
/* 2236 */    MCD::OPC_FilterValue, 130, 7, 4, 0, // Skip to: 2245
/* 2241 */    MCD::OPC_Decode, 225, 1, 25, // Opcode: CROR
/* 2245 */    MCD::OPC_FilterValue, 160, 8, 28, 0, // Skip to: 2278
/* 2250 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 2253 */    MCD::OPC_FilterValue, 0, 199, 25, // Skip to: 8856
/* 2257 */    MCD::OPC_CheckField, 16, 10, 128, 5, 10, 0, // Skip to: 2274
/* 2264 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 2274
/* 2270 */    MCD::OPC_Decode, 141, 1, 23, // Opcode: BCTR
/* 2274 */    MCD::OPC_Decode, 166, 8, 24, // Opcode: gBCCTR
/* 2278 */    MCD::OPC_FilterValue, 161, 8, 173, 25, // Skip to: 8856
/* 2283 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 2286 */    MCD::OPC_FilterValue, 0, 166, 25, // Skip to: 8856
/* 2290 */    MCD::OPC_CheckField, 16, 10, 128, 5, 10, 0, // Skip to: 2307
/* 2297 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 2307
/* 2303 */    MCD::OPC_Decode, 143, 1, 23, // Opcode: BCTRL
/* 2307 */    MCD::OPC_Decode, 167, 8, 24, // Opcode: gBCCTRL
/* 2311 */    MCD::OPC_FilterValue, 20, 19, 0, // Skip to: 2334
/* 2315 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 2318 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2326
/* 2322 */    MCD::OPC_Decode, 210, 4, 26, // Opcode: RLWIMI
/* 2326 */    MCD::OPC_FilterValue, 1, 126, 25, // Skip to: 8856
/* 2330 */    MCD::OPC_Decode, 213, 4, 26, // Opcode: RLWIMIo
/* 2334 */    MCD::OPC_FilterValue, 21, 19, 0, // Skip to: 2357
/* 2338 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 2341 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2349
/* 2345 */    MCD::OPC_Decode, 214, 4, 27, // Opcode: RLWINM
/* 2349 */    MCD::OPC_FilterValue, 1, 103, 25, // Skip to: 8856
/* 2353 */    MCD::OPC_Decode, 217, 4, 27, // Opcode: RLWINMo
/* 2357 */    MCD::OPC_FilterValue, 23, 19, 0, // Skip to: 2380
/* 2361 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 2364 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2372
/* 2368 */    MCD::OPC_Decode, 218, 4, 28, // Opcode: RLWNM
/* 2372 */    MCD::OPC_FilterValue, 1, 80, 25, // Skip to: 8856
/* 2376 */    MCD::OPC_Decode, 219, 4, 28, // Opcode: RLWNMo
/* 2380 */    MCD::OPC_FilterValue, 24, 14, 0, // Skip to: 2398
/* 2384 */    MCD::OPC_CheckField, 0, 26, 0, 4, 0, // Skip to: 2394
/* 2390 */    MCD::OPC_Decode, 171, 4, 23, // Opcode: NOP
/* 2394 */    MCD::OPC_Decode, 185, 4, 29, // Opcode: ORI
/* 2398 */    MCD::OPC_FilterValue, 25, 4, 0, // Skip to: 2406
/* 2402 */    MCD::OPC_Decode, 187, 4, 29, // Opcode: ORIS
/* 2406 */    MCD::OPC_FilterValue, 26, 4, 0, // Skip to: 2414
/* 2410 */    MCD::OPC_Decode, 151, 7, 29, // Opcode: XORI
/* 2414 */    MCD::OPC_FilterValue, 27, 4, 0, // Skip to: 2422
/* 2418 */    MCD::OPC_Decode, 153, 7, 29, // Opcode: XORIS
/* 2422 */    MCD::OPC_FilterValue, 28, 3, 0, // Skip to: 2429
/* 2426 */    MCD::OPC_Decode, 74, 29, // Opcode: ANDIo
/* 2429 */    MCD::OPC_FilterValue, 29, 3, 0, // Skip to: 2436
/* 2433 */    MCD::OPC_Decode, 72, 29, // Opcode: ANDISo
/* 2436 */    MCD::OPC_FilterValue, 30, 134, 0, // Skip to: 2574
/* 2440 */    MCD::OPC_ExtractField, 2, 3,  // Inst{4-2} ...
/* 2443 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 2466
/* 2447 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 2450 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2458
/* 2454 */    MCD::OPC_Decode, 202, 4, 30, // Opcode: RLDICL
/* 2458 */    MCD::OPC_FilterValue, 1, 250, 24, // Skip to: 8856
/* 2462 */    MCD::OPC_Decode, 204, 4, 30, // Opcode: RLDICLo
/* 2466 */    MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 2489
/* 2470 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 2473 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2481
/* 2477 */    MCD::OPC_Decode, 205, 4, 30, // Opcode: RLDICR
/* 2481 */    MCD::OPC_FilterValue, 1, 227, 24, // Skip to: 8856
/* 2485 */    MCD::OPC_Decode, 206, 4, 30, // Opcode: RLDICRo
/* 2489 */    MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 2512
/* 2493 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 2496 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2504
/* 2500 */    MCD::OPC_Decode, 201, 4, 30, // Opcode: RLDIC
/* 2504 */    MCD::OPC_FilterValue, 1, 204, 24, // Skip to: 8856
/* 2508 */    MCD::OPC_Decode, 207, 4, 30, // Opcode: RLDICo
/* 2512 */    MCD::OPC_FilterValue, 3, 19, 0, // Skip to: 2535
/* 2516 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 2519 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2527
/* 2523 */    MCD::OPC_Decode, 208, 4, 31, // Opcode: RLDIMI
/* 2527 */    MCD::OPC_FilterValue, 1, 181, 24, // Skip to: 8856
/* 2531 */    MCD::OPC_Decode, 209, 4, 31, // Opcode: RLDIMIo
/* 2535 */    MCD::OPC_FilterValue, 4, 173, 24, // Skip to: 8856
/* 2539 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 2542 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2550
/* 2546 */    MCD::OPC_Decode, 197, 4, 32, // Opcode: RLDCL
/* 2550 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 2558
/* 2554 */    MCD::OPC_Decode, 198, 4, 32, // Opcode: RLDCLo
/* 2558 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 2566
/* 2562 */    MCD::OPC_Decode, 199, 4, 32, // Opcode: RLDCR
/* 2566 */    MCD::OPC_FilterValue, 3, 142, 24, // Skip to: 8856
/* 2570 */    MCD::OPC_Decode, 200, 4, 32, // Opcode: RLDCRo
/* 2574 */    MCD::OPC_FilterValue, 31, 104, 10, // Skip to: 5242
/* 2578 */    MCD::OPC_ExtractField, 2, 4,  // Inst{5-2} ...
/* 2581 */    MCD::OPC_FilterValue, 0, 73, 0, // Skip to: 2658
/* 2585 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2588 */    MCD::OPC_FilterValue, 0, 31, 0, // Skip to: 2623
/* 2592 */    MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 2595 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 2609
/* 2599 */    MCD::OPC_CheckField, 0, 2, 0, 107, 24, // Skip to: 8856
/* 2605 */    MCD::OPC_Decode, 212, 1, 33, // Opcode: CMPW
/* 2609 */    MCD::OPC_FilterValue, 1, 99, 24, // Skip to: 8856
/* 2613 */    MCD::OPC_CheckField, 0, 2, 0, 93, 24, // Skip to: 8856
/* 2619 */    MCD::OPC_Decode, 206, 1, 34, // Opcode: CMPD
/* 2623 */    MCD::OPC_FilterValue, 1, 85, 24, // Skip to: 8856
/* 2627 */    MCD::OPC_ExtractField, 21, 2,  // Inst{22-21} ...
/* 2630 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 2644
/* 2634 */    MCD::OPC_CheckField, 0, 2, 0, 72, 24, // Skip to: 8856
/* 2640 */    MCD::OPC_Decode, 210, 1, 33, // Opcode: CMPLW
/* 2644 */    MCD::OPC_FilterValue, 1, 64, 24, // Skip to: 8856
/* 2648 */    MCD::OPC_CheckField, 0, 2, 0, 58, 24, // Skip to: 8856
/* 2654 */    MCD::OPC_Decode, 208, 1, 34, // Opcode: CMPLD
/* 2658 */    MCD::OPC_FilterValue, 2, 44, 0, // Skip to: 2706
/* 2662 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2665 */    MCD::OPC_FilterValue, 0, 23, 0, // Skip to: 2692
/* 2669 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 2672 */    MCD::OPC_FilterValue, 0, 36, 24, // Skip to: 8856
/* 2676 */    MCD::OPC_CheckField, 11, 15, 128, 248, 1, 4, 0, // Skip to: 2688
/* 2684 */    MCD::OPC_Decode, 233, 5, 23, // Opcode: TRAP
/* 2688 */    MCD::OPC_Decode, 234, 5, 35, // Opcode: TW
/* 2692 */    MCD::OPC_FilterValue, 2, 16, 24, // Skip to: 8856
/* 2696 */    MCD::OPC_CheckField, 0, 2, 0, 10, 24, // Skip to: 8856
/* 2702 */    MCD::OPC_Decode, 228, 5, 36, // Opcode: TD
/* 2706 */    MCD::OPC_FilterValue, 3, 161, 0, // Skip to: 2871
/* 2710 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2713 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 2736
/* 2717 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 2720 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2728
/* 2724 */    MCD::OPC_Decode, 214, 3, 37, // Opcode: LVSL
/* 2728 */    MCD::OPC_FilterValue, 2, 236, 23, // Skip to: 8856
/* 2732 */    MCD::OPC_Decode, 211, 3, 37, // Opcode: LVEBX
/* 2736 */    MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 2759
/* 2740 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 2743 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2751
/* 2747 */    MCD::OPC_Decode, 215, 3, 37, // Opcode: LVSR
/* 2751 */    MCD::OPC_FilterValue, 2, 213, 23, // Skip to: 8856
/* 2755 */    MCD::OPC_Decode, 212, 3, 37, // Opcode: LVEHX
/* 2759 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 2773
/* 2763 */    MCD::OPC_CheckField, 0, 2, 2, 199, 23, // Skip to: 8856
/* 2769 */    MCD::OPC_Decode, 213, 3, 37, // Opcode: LVEWX
/* 2773 */    MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 2787
/* 2777 */    MCD::OPC_CheckField, 0, 2, 2, 185, 23, // Skip to: 8856
/* 2783 */    MCD::OPC_Decode, 216, 3, 37, // Opcode: LVX
/* 2787 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 2801
/* 2791 */    MCD::OPC_CheckField, 0, 2, 2, 171, 23, // Skip to: 8856
/* 2797 */    MCD::OPC_Decode, 171, 5, 37, // Opcode: STVEBX
/* 2801 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 2815
/* 2805 */    MCD::OPC_CheckField, 0, 2, 2, 157, 23, // Skip to: 8856
/* 2811 */    MCD::OPC_Decode, 172, 5, 37, // Opcode: STVEHX
/* 2815 */    MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 2829
/* 2819 */    MCD::OPC_CheckField, 0, 2, 2, 143, 23, // Skip to: 8856
/* 2825 */    MCD::OPC_Decode, 173, 5, 37, // Opcode: STVEWX
/* 2829 */    MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 2843
/* 2833 */    MCD::OPC_CheckField, 0, 2, 2, 129, 23, // Skip to: 8856
/* 2839 */    MCD::OPC_Decode, 174, 5, 37, // Opcode: STVX
/* 2843 */    MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 2857
/* 2847 */    MCD::OPC_CheckField, 0, 2, 2, 115, 23, // Skip to: 8856
/* 2853 */    MCD::OPC_Decode, 217, 3, 37, // Opcode: LVXL
/* 2857 */    MCD::OPC_FilterValue, 15, 107, 23, // Skip to: 8856
/* 2861 */    MCD::OPC_CheckField, 0, 2, 2, 101, 23, // Skip to: 8856
/* 2867 */    MCD::OPC_Decode, 175, 5, 37, // Opcode: STVXL
/* 2871 */    MCD::OPC_FilterValue, 4, 22, 1, // Skip to: 3153
/* 2875 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2878 */    MCD::OPC_FilterValue, 0, 35, 0, // Skip to: 2917
/* 2882 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 2885 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2893
/* 2889 */    MCD::OPC_Decode, 192, 5, 38, // Opcode: SUBFC
/* 2893 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 2901
/* 2897 */    MCD::OPC_Decode, 195, 5, 38, // Opcode: SUBFCo
/* 2901 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 2909
/* 2905 */    MCD::OPC_Decode, 148, 4, 39, // Opcode: MULHDU
/* 2909 */    MCD::OPC_FilterValue, 3, 55, 23, // Skip to: 8856
/* 2913 */    MCD::OPC_Decode, 149, 4, 39, // Opcode: MULHDUo
/* 2917 */    MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 2940
/* 2921 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 2924 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 2932
/* 2928 */    MCD::OPC_Decode, 189, 5, 38, // Opcode: SUBF
/* 2932 */    MCD::OPC_FilterValue, 1, 32, 23, // Skip to: 8856
/* 2936 */    MCD::OPC_Decode, 210, 5, 38, // Opcode: SUBFo
/* 2940 */    MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 2963
/* 2944 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 2947 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 2955
/* 2951 */    MCD::OPC_Decode, 147, 4, 39, // Opcode: MULHD
/* 2955 */    MCD::OPC_FilterValue, 3, 9, 23, // Skip to: 8856
/* 2959 */    MCD::OPC_Decode, 150, 4, 39, // Opcode: MULHDo
/* 2963 */    MCD::OPC_FilterValue, 3, 31, 0, // Skip to: 2998
/* 2967 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 2970 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 2984
/* 2974 */    MCD::OPC_CheckField, 11, 5, 0, 244, 22, // Skip to: 8856
/* 2980 */    MCD::OPC_Decode, 167, 4, 40, // Opcode: NEG
/* 2984 */    MCD::OPC_FilterValue, 1, 236, 22, // Skip to: 8856
/* 2988 */    MCD::OPC_CheckField, 11, 5, 0, 230, 22, // Skip to: 8856
/* 2994 */    MCD::OPC_Decode, 170, 4, 40, // Opcode: NEGo
/* 2998 */    MCD::OPC_FilterValue, 4, 19, 0, // Skip to: 3021
/* 3002 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3005 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3013
/* 3009 */    MCD::OPC_Decode, 196, 5, 38, // Opcode: SUBFE
/* 3013 */    MCD::OPC_FilterValue, 1, 207, 22, // Skip to: 8856
/* 3017 */    MCD::OPC_Decode, 199, 5, 38, // Opcode: SUBFEo
/* 3021 */    MCD::OPC_FilterValue, 6, 31, 0, // Skip to: 3056
/* 3025 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3028 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 3042
/* 3032 */    MCD::OPC_CheckField, 11, 5, 0, 186, 22, // Skip to: 8856
/* 3038 */    MCD::OPC_Decode, 206, 5, 40, // Opcode: SUBFZE
/* 3042 */    MCD::OPC_FilterValue, 1, 178, 22, // Skip to: 8856
/* 3046 */    MCD::OPC_CheckField, 11, 5, 0, 172, 22, // Skip to: 8856
/* 3052 */    MCD::OPC_Decode, 209, 5, 40, // Opcode: SUBFZEo
/* 3056 */    MCD::OPC_FilterValue, 7, 47, 0, // Skip to: 3107
/* 3060 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3063 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 3077
/* 3067 */    MCD::OPC_CheckField, 11, 5, 0, 151, 22, // Skip to: 8856
/* 3073 */    MCD::OPC_Decode, 202, 5, 40, // Opcode: SUBFME
/* 3077 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 3091
/* 3081 */    MCD::OPC_CheckField, 11, 5, 0, 137, 22, // Skip to: 8856
/* 3087 */    MCD::OPC_Decode, 205, 5, 40, // Opcode: SUBFMEo
/* 3091 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3099
/* 3095 */    MCD::OPC_Decode, 155, 4, 39, // Opcode: MULLD
/* 3099 */    MCD::OPC_FilterValue, 3, 121, 22, // Skip to: 8856
/* 3103 */    MCD::OPC_Decode, 156, 4, 39, // Opcode: MULLDo
/* 3107 */    MCD::OPC_FilterValue, 14, 19, 0, // Skip to: 3130
/* 3111 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3114 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3122
/* 3118 */    MCD::OPC_Decode, 239, 1, 39, // Opcode: DIVDU
/* 3122 */    MCD::OPC_FilterValue, 3, 98, 22, // Skip to: 8856
/* 3126 */    MCD::OPC_Decode, 240, 1, 39, // Opcode: DIVDUo
/* 3130 */    MCD::OPC_FilterValue, 15, 90, 22, // Skip to: 8856
/* 3134 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3137 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3145
/* 3141 */    MCD::OPC_Decode, 238, 1, 39, // Opcode: DIVD
/* 3145 */    MCD::OPC_FilterValue, 3, 75, 22, // Skip to: 8856
/* 3149 */    MCD::OPC_Decode, 241, 1, 39, // Opcode: DIVDo
/* 3153 */    MCD::OPC_FilterValue, 5, 233, 0, // Skip to: 3390
/* 3157 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3160 */    MCD::OPC_FilterValue, 0, 33, 0, // Skip to: 3197
/* 3164 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3167 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 3174
/* 3171 */    MCD::OPC_Decode, 27, 38, // Opcode: ADDC
/* 3174 */    MCD::OPC_FilterValue, 1, 3, 0, // Skip to: 3181
/* 3178 */    MCD::OPC_Decode, 30, 38, // Opcode: ADDCo
/* 3181 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3189
/* 3185 */    MCD::OPC_Decode, 152, 4, 38, // Opcode: MULHWU
/* 3189 */    MCD::OPC_FilterValue, 3, 31, 22, // Skip to: 8856
/* 3193 */    MCD::OPC_Decode, 153, 4, 38, // Opcode: MULHWUo
/* 3197 */    MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 3220
/* 3201 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3204 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3212
/* 3208 */    MCD::OPC_Decode, 151, 4, 38, // Opcode: MULHW
/* 3212 */    MCD::OPC_FilterValue, 3, 8, 22, // Skip to: 8856
/* 3216 */    MCD::OPC_Decode, 154, 4, 38, // Opcode: MULHWo
/* 3220 */    MCD::OPC_FilterValue, 4, 17, 0, // Skip to: 3241
/* 3224 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3227 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 3234
/* 3231 */    MCD::OPC_Decode, 31, 38, // Opcode: ADDE
/* 3234 */    MCD::OPC_FilterValue, 1, 242, 21, // Skip to: 8856
/* 3238 */    MCD::OPC_Decode, 34, 38, // Opcode: ADDEo
/* 3241 */    MCD::OPC_FilterValue, 6, 29, 0, // Skip to: 3274
/* 3245 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3248 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 3261
/* 3252 */    MCD::OPC_CheckField, 11, 5, 0, 222, 21, // Skip to: 8856
/* 3258 */    MCD::OPC_Decode, 59, 40, // Opcode: ADDZE
/* 3261 */    MCD::OPC_FilterValue, 1, 215, 21, // Skip to: 8856
/* 3265 */    MCD::OPC_CheckField, 11, 5, 0, 209, 21, // Skip to: 8856
/* 3271 */    MCD::OPC_Decode, 62, 40, // Opcode: ADDZEo
/* 3274 */    MCD::OPC_FilterValue, 7, 45, 0, // Skip to: 3323
/* 3278 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3281 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 3294
/* 3285 */    MCD::OPC_CheckField, 11, 5, 0, 189, 21, // Skip to: 8856
/* 3291 */    MCD::OPC_Decode, 55, 40, // Opcode: ADDME
/* 3294 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 3307
/* 3298 */    MCD::OPC_CheckField, 11, 5, 0, 176, 21, // Skip to: 8856
/* 3304 */    MCD::OPC_Decode, 58, 40, // Opcode: ADDMEo
/* 3307 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3315
/* 3311 */    MCD::OPC_Decode, 159, 4, 38, // Opcode: MULLW
/* 3315 */    MCD::OPC_FilterValue, 3, 161, 21, // Skip to: 8856
/* 3319 */    MCD::OPC_Decode, 160, 4, 38, // Opcode: MULLWo
/* 3323 */    MCD::OPC_FilterValue, 8, 17, 0, // Skip to: 3344
/* 3327 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3330 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 3337
/* 3334 */    MCD::OPC_Decode, 20, 38, // Opcode: ADD4
/* 3337 */    MCD::OPC_FilterValue, 1, 139, 21, // Skip to: 8856
/* 3341 */    MCD::OPC_Decode, 22, 38, // Opcode: ADD4o
/* 3344 */    MCD::OPC_FilterValue, 14, 19, 0, // Skip to: 3367
/* 3348 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3351 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3359
/* 3355 */    MCD::OPC_Decode, 243, 1, 38, // Opcode: DIVWU
/* 3359 */    MCD::OPC_FilterValue, 3, 117, 21, // Skip to: 8856
/* 3363 */    MCD::OPC_Decode, 244, 1, 38, // Opcode: DIVWUo
/* 3367 */    MCD::OPC_FilterValue, 15, 109, 21, // Skip to: 8856
/* 3371 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3374 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 3382
/* 3378 */    MCD::OPC_Decode, 242, 1, 38, // Opcode: DIVW
/* 3382 */    MCD::OPC_FilterValue, 3, 94, 21, // Skip to: 8856
/* 3386 */    MCD::OPC_Decode, 245, 1, 38, // Opcode: DIVWo
/* 3390 */    MCD::OPC_FilterValue, 6, 101, 0, // Skip to: 3495
/* 3394 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3397 */    MCD::OPC_FilterValue, 10, 10, 0, // Skip to: 3411
/* 3401 */    MCD::OPC_CheckField, 0, 2, 0, 73, 21, // Skip to: 8856
/* 3407 */    MCD::OPC_Decode, 236, 3, 41, // Opcode: LXVDSX
/* 3411 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 3425
/* 3415 */    MCD::OPC_CheckField, 0, 2, 0, 59, 21, // Skip to: 8856
/* 3421 */    MCD::OPC_Decode, 234, 3, 42, // Opcode: LXSDX
/* 3425 */    MCD::OPC_FilterValue, 22, 10, 0, // Skip to: 3439
/* 3429 */    MCD::OPC_CheckField, 1, 1, 0, 45, 21, // Skip to: 8856
/* 3435 */    MCD::OPC_Decode, 186, 5, 43, // Opcode: STXSDX
/* 3439 */    MCD::OPC_FilterValue, 24, 10, 0, // Skip to: 3453
/* 3443 */    MCD::OPC_CheckField, 0, 2, 0, 31, 21, // Skip to: 8856
/* 3449 */    MCD::OPC_Decode, 237, 3, 41, // Opcode: LXVW4X
/* 3453 */    MCD::OPC_FilterValue, 26, 10, 0, // Skip to: 3467
/* 3457 */    MCD::OPC_CheckField, 0, 2, 0, 17, 21, // Skip to: 8856
/* 3463 */    MCD::OPC_Decode, 235, 3, 41, // Opcode: LXVD2X
/* 3467 */    MCD::OPC_FilterValue, 28, 10, 0, // Skip to: 3481
/* 3471 */    MCD::OPC_CheckField, 1, 1, 0, 3, 21, // Skip to: 8856
/* 3477 */    MCD::OPC_Decode, 188, 5, 44, // Opcode: STXVW4X
/* 3481 */    MCD::OPC_FilterValue, 30, 251, 20, // Skip to: 8856
/* 3485 */    MCD::OPC_CheckField, 1, 1, 0, 245, 20, // Skip to: 8856
/* 3491 */    MCD::OPC_Decode, 187, 5, 44, // Opcode: STXVD2X
/* 3495 */    MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 3509
/* 3499 */    MCD::OPC_CheckField, 0, 2, 2, 231, 20, // Skip to: 8856
/* 3505 */    MCD::OPC_Decode, 153, 3, 45, // Opcode: ISEL
/* 3509 */    MCD::OPC_FilterValue, 8, 43, 0, // Skip to: 3556
/* 3513 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 3516 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 3536
/* 3520 */    MCD::OPC_CheckField, 6, 6, 4, 210, 20, // Skip to: 8856
/* 3526 */    MCD::OPC_CheckField, 0, 2, 0, 204, 20, // Skip to: 8856
/* 3532 */    MCD::OPC_Decode, 128, 4, 46, // Opcode: MTCRF
/* 3536 */    MCD::OPC_FilterValue, 1, 196, 20, // Skip to: 8856
/* 3540 */    MCD::OPC_CheckField, 6, 6, 4, 190, 20, // Skip to: 8856
/* 3546 */    MCD::OPC_CheckField, 0, 2, 0, 184, 20, // Skip to: 8856
/* 3552 */    MCD::OPC_Decode, 141, 4, 47, // Opcode: MTOCRF
/* 3556 */    MCD::OPC_FilterValue, 9, 48, 1, // Skip to: 3864
/* 3560 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3563 */    MCD::OPC_FilterValue, 0, 43, 0, // Skip to: 3610
/* 3567 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 3570 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 3590
/* 3574 */    MCD::OPC_CheckField, 11, 9, 0, 156, 20, // Skip to: 8856
/* 3580 */    MCD::OPC_CheckField, 0, 2, 2, 150, 20, // Skip to: 8856
/* 3586 */    MCD::OPC_Decode, 239, 3, 48, // Opcode: MFCR
/* 3590 */    MCD::OPC_FilterValue, 1, 142, 20, // Skip to: 8856
/* 3594 */    MCD::OPC_CheckField, 11, 1, 0, 136, 20, // Skip to: 8856
/* 3600 */    MCD::OPC_CheckField, 0, 2, 2, 130, 20, // Skip to: 8856
/* 3606 */    MCD::OPC_Decode, 247, 3, 49, // Opcode: MFOCRF
/* 3610 */    MCD::OPC_FilterValue, 2, 16, 0, // Skip to: 3630
/* 3614 */    MCD::OPC_CheckField, 11, 10, 0, 116, 20, // Skip to: 8856
/* 3620 */    MCD::OPC_CheckField, 0, 2, 2, 110, 20, // Skip to: 8856
/* 3626 */    MCD::OPC_Decode, 246, 3, 48, // Opcode: MFMSR
/* 3630 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 3644
/* 3634 */    MCD::OPC_CheckField, 1, 1, 0, 96, 20, // Skip to: 8856
/* 3640 */    MCD::OPC_Decode, 139, 4, 50, // Opcode: MTMSR
/* 3644 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 3658
/* 3648 */    MCD::OPC_CheckField, 1, 1, 0, 82, 20, // Skip to: 8856
/* 3654 */    MCD::OPC_Decode, 140, 4, 50, // Opcode: MTMSRD
/* 3658 */    MCD::OPC_FilterValue, 8, 16, 0, // Skip to: 3678
/* 3662 */    MCD::OPC_CheckField, 16, 10, 0, 68, 20, // Skip to: 8856
/* 3668 */    MCD::OPC_CheckField, 0, 2, 0, 62, 20, // Skip to: 8856
/* 3674 */    MCD::OPC_Decode, 231, 5, 51, // Opcode: TLBIEL
/* 3678 */    MCD::OPC_FilterValue, 9, 16, 0, // Skip to: 3698
/* 3682 */    MCD::OPC_CheckField, 16, 5, 0, 48, 20, // Skip to: 8856
/* 3688 */    MCD::OPC_CheckField, 0, 2, 0, 42, 20, // Skip to: 8856
/* 3694 */    MCD::OPC_Decode, 230, 5, 52, // Opcode: TLBIE
/* 3698 */    MCD::OPC_FilterValue, 10, 32, 0, // Skip to: 3734
/* 3702 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3705 */    MCD::OPC_FilterValue, 2, 27, 20, // Skip to: 8856
/* 3709 */    MCD::OPC_ExtractField, 11, 10,  // Inst{20-11} ...
/* 3712 */    MCD::OPC_FilterValue, 128, 2, 4, 0, // Skip to: 3721
/* 3717 */    MCD::OPC_Decode, 244, 3, 48, // Opcode: MFLR
/* 3721 */    MCD::OPC_FilterValue, 160, 2, 4, 0, // Skip to: 3730
/* 3726 */    MCD::OPC_Decode, 241, 3, 48, // Opcode: MFCTR
/* 3730 */    MCD::OPC_Decode, 249, 3, 53, // Opcode: MFSPR
/* 3734 */    MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 3748
/* 3738 */    MCD::OPC_CheckField, 0, 2, 2, 248, 19, // Skip to: 8856
/* 3744 */    MCD::OPC_Decode, 250, 3, 53, // Opcode: MFTB
/* 3748 */    MCD::OPC_FilterValue, 12, 16, 0, // Skip to: 3768
/* 3752 */    MCD::OPC_CheckField, 16, 5, 0, 234, 19, // Skip to: 8856
/* 3758 */    MCD::OPC_CheckField, 0, 2, 0, 228, 19, // Skip to: 8856
/* 3764 */    MCD::OPC_Decode, 238, 4, 52, // Opcode: SLBMTE
/* 3768 */    MCD::OPC_FilterValue, 13, 16, 0, // Skip to: 3788
/* 3772 */    MCD::OPC_CheckField, 16, 10, 0, 214, 19, // Skip to: 8856
/* 3778 */    MCD::OPC_CheckField, 0, 2, 0, 208, 19, // Skip to: 8856
/* 3784 */    MCD::OPC_Decode, 236, 4, 51, // Opcode: SLBIE
/* 3788 */    MCD::OPC_FilterValue, 14, 32, 0, // Skip to: 3824
/* 3792 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3795 */    MCD::OPC_FilterValue, 2, 193, 19, // Skip to: 8856
/* 3799 */    MCD::OPC_ExtractField, 11, 10,  // Inst{20-11} ...
/* 3802 */    MCD::OPC_FilterValue, 128, 2, 4, 0, // Skip to: 3811
/* 3807 */    MCD::OPC_Decode, 137, 4, 48, // Opcode: MTLR
/* 3811 */    MCD::OPC_FilterValue, 160, 2, 4, 0, // Skip to: 3820
/* 3816 */    MCD::OPC_Decode, 130, 4, 48, // Opcode: MTCTR
/* 3820 */    MCD::OPC_Decode, 143, 4, 54, // Opcode: MTSPR
/* 3824 */    MCD::OPC_FilterValue, 15, 16, 0, // Skip to: 3844
/* 3828 */    MCD::OPC_CheckField, 11, 15, 0, 158, 19, // Skip to: 8856
/* 3834 */    MCD::OPC_CheckField, 0, 2, 0, 152, 19, // Skip to: 8856
/* 3840 */    MCD::OPC_Decode, 235, 4, 23, // Opcode: SLBIA
/* 3844 */    MCD::OPC_FilterValue, 28, 144, 19, // Skip to: 8856
/* 3848 */    MCD::OPC_CheckField, 16, 5, 0, 138, 19, // Skip to: 8856
/* 3854 */    MCD::OPC_CheckField, 0, 2, 2, 132, 19, // Skip to: 8856
/* 3860 */    MCD::OPC_Decode, 237, 4, 52, // Opcode: SLBMFEE
/* 3864 */    MCD::OPC_FilterValue, 10, 138, 0, // Skip to: 4006
/* 3868 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3871 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 3894
/* 3875 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 3878 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 3886
/* 3882 */    MCD::OPC_Decode, 219, 3, 55, // Opcode: LWARX
/* 3886 */    MCD::OPC_FilterValue, 2, 102, 19, // Skip to: 8856
/* 3890 */    MCD::OPC_Decode, 171, 3, 56, // Opcode: LDX
/* 3894 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 3908
/* 3898 */    MCD::OPC_CheckField, 0, 2, 2, 88, 19, // Skip to: 8856
/* 3904 */    MCD::OPC_Decode, 170, 3, 57, // Opcode: LDUX
/* 3908 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 3922
/* 3912 */    MCD::OPC_CheckField, 0, 2, 0, 74, 19, // Skip to: 8856
/* 3918 */    MCD::OPC_Decode, 167, 3, 56, // Opcode: LDARX
/* 3922 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 3936
/* 3926 */    MCD::OPC_CheckField, 0, 2, 2, 60, 19, // Skip to: 8856
/* 3932 */    MCD::OPC_Decode, 151, 5, 56, // Opcode: STDX
/* 3936 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 3950
/* 3940 */    MCD::OPC_CheckField, 0, 2, 2, 46, 19, // Skip to: 8856
/* 3946 */    MCD::OPC_Decode, 150, 5, 58, // Opcode: STDUX
/* 3950 */    MCD::OPC_FilterValue, 10, 10, 0, // Skip to: 3964
/* 3954 */    MCD::OPC_CheckField, 0, 2, 2, 32, 19, // Skip to: 8856
/* 3960 */    MCD::OPC_Decode, 221, 3, 56, // Opcode: LWAX
/* 3964 */    MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 3978
/* 3968 */    MCD::OPC_CheckField, 0, 2, 2, 18, 19, // Skip to: 8856
/* 3974 */    MCD::OPC_Decode, 220, 3, 57, // Opcode: LWAUX
/* 3978 */    MCD::OPC_FilterValue, 16, 10, 0, // Skip to: 3992
/* 3982 */    MCD::OPC_CheckField, 0, 2, 0, 4, 19, // Skip to: 8856
/* 3988 */    MCD::OPC_Decode, 168, 3, 56, // Opcode: LDBRX
/* 3992 */    MCD::OPC_FilterValue, 20, 252, 18, // Skip to: 8856
/* 3996 */    MCD::OPC_CheckField, 0, 2, 0, 246, 18, // Skip to: 8856
/* 4002 */    MCD::OPC_Decode, 147, 5, 56, // Opcode: STDBRX
/* 4006 */    MCD::OPC_FilterValue, 11, 101, 2, // Skip to: 4623
/* 4010 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4013 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4027
/* 4017 */    MCD::OPC_CheckField, 0, 2, 2, 225, 18, // Skip to: 8856
/* 4023 */    MCD::OPC_Decode, 231, 3, 55, // Opcode: LWZX
/* 4027 */    MCD::OPC_FilterValue, 1, 25, 0, // Skip to: 4056
/* 4031 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4034 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4048
/* 4038 */    MCD::OPC_CheckField, 21, 5, 0, 204, 18, // Skip to: 8856
/* 4044 */    MCD::OPC_Decode, 233, 1, 59, // Opcode: DCBST
/* 4048 */    MCD::OPC_FilterValue, 2, 196, 18, // Skip to: 8856
/* 4052 */    MCD::OPC_Decode, 229, 3, 60, // Opcode: LWZUX
/* 4056 */    MCD::OPC_FilterValue, 2, 25, 0, // Skip to: 4085
/* 4060 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4063 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4077
/* 4067 */    MCD::OPC_CheckField, 21, 5, 0, 175, 18, // Skip to: 8856
/* 4073 */    MCD::OPC_Decode, 231, 1, 59, // Opcode: DCBF
/* 4077 */    MCD::OPC_FilterValue, 2, 167, 18, // Skip to: 8856
/* 4081 */    MCD::OPC_Decode, 164, 3, 55, // Opcode: LBZX
/* 4085 */    MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 4099
/* 4089 */    MCD::OPC_CheckField, 0, 2, 2, 153, 18, // Skip to: 8856
/* 4095 */    MCD::OPC_Decode, 162, 3, 60, // Opcode: LBZUX
/* 4099 */    MCD::OPC_FilterValue, 4, 19, 0, // Skip to: 4122
/* 4103 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4106 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 4114
/* 4110 */    MCD::OPC_Decode, 179, 5, 55, // Opcode: STWCX
/* 4114 */    MCD::OPC_FilterValue, 2, 130, 18, // Skip to: 8856
/* 4118 */    MCD::OPC_Decode, 184, 5, 55, // Opcode: STWX
/* 4122 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 4136
/* 4126 */    MCD::OPC_CheckField, 0, 2, 2, 116, 18, // Skip to: 8856
/* 4132 */    MCD::OPC_Decode, 182, 5, 61, // Opcode: STWUX
/* 4136 */    MCD::OPC_FilterValue, 6, 19, 0, // Skip to: 4159
/* 4140 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4143 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 4151
/* 4147 */    MCD::OPC_Decode, 148, 5, 56, // Opcode: STDCX
/* 4151 */    MCD::OPC_FilterValue, 2, 93, 18, // Skip to: 8856
/* 4155 */    MCD::OPC_Decode, 144, 5, 55, // Opcode: STBX
/* 4159 */    MCD::OPC_FilterValue, 7, 25, 0, // Skip to: 4188
/* 4163 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4166 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4180
/* 4170 */    MCD::OPC_CheckField, 21, 5, 0, 72, 18, // Skip to: 8856
/* 4176 */    MCD::OPC_Decode, 235, 1, 59, // Opcode: DCBTST
/* 4180 */    MCD::OPC_FilterValue, 2, 64, 18, // Skip to: 8856
/* 4184 */    MCD::OPC_Decode, 142, 5, 61, // Opcode: STBUX
/* 4188 */    MCD::OPC_FilterValue, 8, 25, 0, // Skip to: 4217
/* 4192 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4195 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4209
/* 4199 */    MCD::OPC_CheckField, 21, 5, 0, 43, 18, // Skip to: 8856
/* 4205 */    MCD::OPC_Decode, 234, 1, 59, // Opcode: DCBT
/* 4209 */    MCD::OPC_FilterValue, 2, 35, 18, // Skip to: 8856
/* 4213 */    MCD::OPC_Decode, 204, 3, 55, // Opcode: LHZX
/* 4217 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 4231
/* 4221 */    MCD::OPC_CheckField, 0, 2, 2, 21, 18, // Skip to: 8856
/* 4227 */    MCD::OPC_Decode, 202, 3, 60, // Opcode: LHZUX
/* 4231 */    MCD::OPC_FilterValue, 10, 10, 0, // Skip to: 4245
/* 4235 */    MCD::OPC_CheckField, 0, 2, 2, 7, 18, // Skip to: 8856
/* 4241 */    MCD::OPC_Decode, 195, 3, 55, // Opcode: LHAX
/* 4245 */    MCD::OPC_FilterValue, 11, 10, 0, // Skip to: 4259
/* 4249 */    MCD::OPC_CheckField, 0, 2, 2, 249, 17, // Skip to: 8856
/* 4255 */    MCD::OPC_Decode, 193, 3, 60, // Opcode: LHAUX
/* 4259 */    MCD::OPC_FilterValue, 12, 10, 0, // Skip to: 4273
/* 4263 */    MCD::OPC_CheckField, 0, 2, 2, 235, 17, // Skip to: 8856
/* 4269 */    MCD::OPC_Decode, 168, 5, 55, // Opcode: STHX
/* 4273 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 4287
/* 4277 */    MCD::OPC_CheckField, 0, 2, 2, 221, 17, // Skip to: 8856
/* 4283 */    MCD::OPC_Decode, 166, 5, 61, // Opcode: STHUX
/* 4287 */    MCD::OPC_FilterValue, 14, 16, 0, // Skip to: 4307
/* 4291 */    MCD::OPC_CheckField, 21, 5, 0, 207, 17, // Skip to: 8856
/* 4297 */    MCD::OPC_CheckField, 0, 2, 0, 201, 17, // Skip to: 8856
/* 4303 */    MCD::OPC_Decode, 232, 1, 59, // Opcode: DCBI
/* 4307 */    MCD::OPC_FilterValue, 16, 19, 0, // Skip to: 4330
/* 4311 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4314 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4322
/* 4318 */    MCD::OPC_Decode, 224, 3, 55, // Opcode: LWBRX
/* 4322 */    MCD::OPC_FilterValue, 2, 178, 17, // Skip to: 8856
/* 4326 */    MCD::OPC_Decode, 188, 3, 62, // Opcode: LFSX
/* 4330 */    MCD::OPC_FilterValue, 17, 25, 0, // Skip to: 4359
/* 4334 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4337 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4351
/* 4341 */    MCD::OPC_CheckField, 11, 15, 0, 157, 17, // Skip to: 8856
/* 4347 */    MCD::OPC_Decode, 232, 5, 23, // Opcode: TLBSYNC
/* 4351 */    MCD::OPC_FilterValue, 2, 149, 17, // Skip to: 8856
/* 4355 */    MCD::OPC_Decode, 187, 3, 63, // Opcode: LFSUX
/* 4359 */    MCD::OPC_FilterValue, 18, 31, 0, // Skip to: 4394
/* 4363 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4366 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 4386
/* 4370 */    MCD::OPC_CheckField, 23, 3, 0, 128, 17, // Skip to: 8856
/* 4376 */    MCD::OPC_CheckField, 11, 10, 0, 122, 17, // Skip to: 8856
/* 4382 */    MCD::OPC_Decode, 215, 5, 64, // Opcode: SYNC
/* 4386 */    MCD::OPC_FilterValue, 2, 114, 17, // Skip to: 8856
/* 4390 */    MCD::OPC_Decode, 182, 3, 65, // Opcode: LFDX
/* 4394 */    MCD::OPC_FilterValue, 19, 10, 0, // Skip to: 4408
/* 4398 */    MCD::OPC_CheckField, 0, 2, 2, 100, 17, // Skip to: 8856
/* 4404 */    MCD::OPC_Decode, 181, 3, 66, // Opcode: LFDUX
/* 4408 */    MCD::OPC_FilterValue, 20, 19, 0, // Skip to: 4431
/* 4412 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4415 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4423
/* 4419 */    MCD::OPC_Decode, 178, 5, 55, // Opcode: STWBRX
/* 4423 */    MCD::OPC_FilterValue, 2, 77, 17, // Skip to: 8856
/* 4427 */    MCD::OPC_Decode, 160, 5, 62, // Opcode: STFSX
/* 4431 */    MCD::OPC_FilterValue, 21, 10, 0, // Skip to: 4445
/* 4435 */    MCD::OPC_CheckField, 0, 2, 2, 63, 17, // Skip to: 8856
/* 4441 */    MCD::OPC_Decode, 159, 5, 67, // Opcode: STFSUX
/* 4445 */    MCD::OPC_FilterValue, 22, 10, 0, // Skip to: 4459
/* 4449 */    MCD::OPC_CheckField, 0, 2, 2, 49, 17, // Skip to: 8856
/* 4455 */    MCD::OPC_Decode, 155, 5, 65, // Opcode: STFDX
/* 4459 */    MCD::OPC_FilterValue, 23, 25, 0, // Skip to: 4488
/* 4463 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4466 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4480
/* 4470 */    MCD::OPC_CheckField, 21, 5, 0, 28, 17, // Skip to: 8856
/* 4476 */    MCD::OPC_Decode, 230, 1, 59, // Opcode: DCBA
/* 4480 */    MCD::OPC_FilterValue, 2, 20, 17, // Skip to: 8856
/* 4484 */    MCD::OPC_Decode, 154, 5, 68, // Opcode: STFDUX
/* 4488 */    MCD::OPC_FilterValue, 24, 10, 0, // Skip to: 4502
/* 4492 */    MCD::OPC_CheckField, 0, 2, 0, 6, 17, // Skip to: 8856
/* 4498 */    MCD::OPC_Decode, 197, 3, 55, // Opcode: LHBRX
/* 4502 */    MCD::OPC_FilterValue, 26, 25, 0, // Skip to: 4531
/* 4506 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4509 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4523
/* 4513 */    MCD::OPC_CheckField, 11, 15, 0, 241, 16, // Skip to: 8856
/* 4519 */    MCD::OPC_Decode, 135, 2, 23, // Opcode: EIEIO
/* 4523 */    MCD::OPC_FilterValue, 2, 233, 16, // Skip to: 8856
/* 4527 */    MCD::OPC_Decode, 183, 3, 65, // Opcode: LFIWAX
/* 4531 */    MCD::OPC_FilterValue, 27, 10, 0, // Skip to: 4545
/* 4535 */    MCD::OPC_CheckField, 0, 2, 2, 219, 16, // Skip to: 8856
/* 4541 */    MCD::OPC_Decode, 184, 3, 65, // Opcode: LFIWZX
/* 4545 */    MCD::OPC_FilterValue, 28, 10, 0, // Skip to: 4559
/* 4549 */    MCD::OPC_CheckField, 0, 2, 0, 205, 16, // Skip to: 8856
/* 4555 */    MCD::OPC_Decode, 163, 5, 55, // Opcode: STHBRX
/* 4559 */    MCD::OPC_FilterValue, 30, 25, 0, // Skip to: 4588
/* 4563 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4566 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4580
/* 4570 */    MCD::OPC_CheckField, 21, 5, 0, 184, 16, // Skip to: 8856
/* 4576 */    MCD::OPC_Decode, 146, 3, 59, // Opcode: ICBI
/* 4580 */    MCD::OPC_FilterValue, 2, 176, 16, // Skip to: 8856
/* 4584 */    MCD::OPC_Decode, 156, 5, 65, // Opcode: STFIWX
/* 4588 */    MCD::OPC_FilterValue, 31, 168, 16, // Skip to: 8856
/* 4592 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 4595 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4609
/* 4599 */    MCD::OPC_CheckField, 0, 2, 0, 155, 16, // Skip to: 8856
/* 4605 */    MCD::OPC_Decode, 236, 1, 59, // Opcode: DCBZ
/* 4609 */    MCD::OPC_FilterValue, 1, 147, 16, // Skip to: 8856
/* 4613 */    MCD::OPC_CheckField, 0, 2, 0, 141, 16, // Skip to: 8856
/* 4619 */    MCD::OPC_Decode, 237, 1, 59, // Opcode: DCBZL
/* 4623 */    MCD::OPC_FilterValue, 12, 95, 0, // Skip to: 4722
/* 4627 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4630 */    MCD::OPC_FilterValue, 0, 19, 0, // Skip to: 4653
/* 4634 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4637 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4645
/* 4641 */    MCD::OPC_Decode, 243, 4, 69, // Opcode: SLW
/* 4645 */    MCD::OPC_FilterValue, 1, 111, 16, // Skip to: 8856
/* 4649 */    MCD::OPC_Decode, 246, 4, 69, // Opcode: SLWo
/* 4653 */    MCD::OPC_FilterValue, 16, 19, 0, // Skip to: 4676
/* 4657 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4660 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4668
/* 4664 */    MCD::OPC_Decode, 134, 5, 69, // Opcode: SRW
/* 4668 */    MCD::OPC_FilterValue, 1, 88, 16, // Skip to: 8856
/* 4672 */    MCD::OPC_Decode, 137, 5, 69, // Opcode: SRWo
/* 4676 */    MCD::OPC_FilterValue, 24, 19, 0, // Skip to: 4699
/* 4680 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4683 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4691
/* 4687 */    MCD::OPC_Decode, 254, 4, 69, // Opcode: SRAW
/* 4691 */    MCD::OPC_FilterValue, 1, 65, 16, // Skip to: 8856
/* 4695 */    MCD::OPC_Decode, 129, 5, 69, // Opcode: SRAWo
/* 4699 */    MCD::OPC_FilterValue, 25, 57, 16, // Skip to: 8856
/* 4703 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4706 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4714
/* 4710 */    MCD::OPC_Decode, 255, 4, 70, // Opcode: SRAWI
/* 4714 */    MCD::OPC_FilterValue, 1, 42, 16, // Skip to: 8856
/* 4718 */    MCD::OPC_Decode, 128, 5, 70, // Opcode: SRAWIo
/* 4722 */    MCD::OPC_FilterValue, 13, 47, 1, // Skip to: 5029
/* 4726 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4729 */    MCD::OPC_FilterValue, 0, 47, 0, // Skip to: 4780
/* 4733 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4736 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4750
/* 4740 */    MCD::OPC_CheckField, 11, 5, 0, 14, 16, // Skip to: 8856
/* 4746 */    MCD::OPC_Decode, 216, 1, 71, // Opcode: CNTLZW
/* 4750 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 4764
/* 4754 */    MCD::OPC_CheckField, 11, 5, 0, 0, 16, // Skip to: 8856
/* 4760 */    MCD::OPC_Decode, 217, 1, 71, // Opcode: CNTLZWo
/* 4764 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 4772
/* 4768 */    MCD::OPC_Decode, 239, 4, 72, // Opcode: SLD
/* 4772 */    MCD::OPC_FilterValue, 3, 240, 15, // Skip to: 8856
/* 4776 */    MCD::OPC_Decode, 242, 4, 72, // Opcode: SLDo
/* 4780 */    MCD::OPC_FilterValue, 1, 31, 0, // Skip to: 4815
/* 4784 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4787 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4801
/* 4791 */    MCD::OPC_CheckField, 11, 5, 0, 219, 15, // Skip to: 8856
/* 4797 */    MCD::OPC_Decode, 214, 1, 73, // Opcode: CNTLZD
/* 4801 */    MCD::OPC_FilterValue, 1, 211, 15, // Skip to: 8856
/* 4805 */    MCD::OPC_CheckField, 11, 5, 0, 205, 15, // Skip to: 8856
/* 4811 */    MCD::OPC_Decode, 215, 1, 73, // Opcode: CNTLZDo
/* 4815 */    MCD::OPC_FilterValue, 11, 16, 0, // Skip to: 4835
/* 4819 */    MCD::OPC_CheckField, 11, 5, 0, 191, 15, // Skip to: 8856
/* 4825 */    MCD::OPC_CheckField, 0, 2, 0, 185, 15, // Skip to: 8856
/* 4831 */    MCD::OPC_Decode, 191, 4, 71, // Opcode: POPCNTW
/* 4835 */    MCD::OPC_FilterValue, 15, 16, 0, // Skip to: 4855
/* 4839 */    MCD::OPC_CheckField, 11, 5, 0, 171, 15, // Skip to: 8856
/* 4845 */    MCD::OPC_CheckField, 0, 2, 0, 165, 15, // Skip to: 8856
/* 4851 */    MCD::OPC_Decode, 190, 4, 73, // Opcode: POPCNTD
/* 4855 */    MCD::OPC_FilterValue, 16, 19, 0, // Skip to: 4878
/* 4859 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4862 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 4870
/* 4866 */    MCD::OPC_Decode, 130, 5, 72, // Opcode: SRD
/* 4870 */    MCD::OPC_FilterValue, 3, 142, 15, // Skip to: 8856
/* 4874 */    MCD::OPC_Decode, 133, 5, 72, // Opcode: SRDo
/* 4878 */    MCD::OPC_FilterValue, 24, 19, 0, // Skip to: 4901
/* 4882 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4885 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4893
/* 4889 */    MCD::OPC_Decode, 250, 4, 72, // Opcode: SRAD
/* 4893 */    MCD::OPC_FilterValue, 1, 119, 15, // Skip to: 8856
/* 4897 */    MCD::OPC_Decode, 253, 4, 72, // Opcode: SRADo
/* 4901 */    MCD::OPC_FilterValue, 25, 19, 0, // Skip to: 4924
/* 4905 */    MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 4908 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 4916
/* 4912 */    MCD::OPC_Decode, 251, 4, 74, // Opcode: SRADI
/* 4916 */    MCD::OPC_FilterValue, 1, 96, 15, // Skip to: 8856
/* 4920 */    MCD::OPC_Decode, 252, 4, 74, // Opcode: SRADIo
/* 4924 */    MCD::OPC_FilterValue, 28, 31, 0, // Skip to: 4959
/* 4928 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4931 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4945
/* 4935 */    MCD::OPC_CheckField, 11, 5, 0, 75, 15, // Skip to: 8856
/* 4941 */    MCD::OPC_Decode, 153, 2, 71, // Opcode: EXTSH
/* 4945 */    MCD::OPC_FilterValue, 1, 67, 15, // Skip to: 8856
/* 4949 */    MCD::OPC_CheckField, 11, 5, 0, 61, 15, // Skip to: 8856
/* 4955 */    MCD::OPC_Decode, 157, 2, 71, // Opcode: EXTSHo
/* 4959 */    MCD::OPC_FilterValue, 29, 31, 0, // Skip to: 4994
/* 4963 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 4966 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 4980
/* 4970 */    MCD::OPC_CheckField, 11, 5, 0, 40, 15, // Skip to: 8856
/* 4976 */    MCD::OPC_Decode, 148, 2, 71, // Opcode: EXTSB
/* 4980 */    MCD::OPC_FilterValue, 1, 32, 15, // Skip to: 8856
/* 4984 */    MCD::OPC_CheckField, 11, 5, 0, 26, 15, // Skip to: 8856
/* 4990 */    MCD::OPC_Decode, 152, 2, 71, // Opcode: EXTSBo
/* 4994 */    MCD::OPC_FilterValue, 30, 18, 15, // Skip to: 8856
/* 4998 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5001 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5015
/* 5005 */    MCD::OPC_CheckField, 11, 5, 0, 5, 15, // Skip to: 8856
/* 5011 */    MCD::OPC_Decode, 158, 2, 73, // Opcode: EXTSW
/* 5015 */    MCD::OPC_FilterValue, 1, 253, 14, // Skip to: 8856
/* 5019 */    MCD::OPC_CheckField, 11, 5, 0, 247, 14, // Skip to: 8856
/* 5025 */    MCD::OPC_Decode, 161, 2, 73, // Opcode: EXTSWo
/* 5029 */    MCD::OPC_FilterValue, 14, 183, 0, // Skip to: 5216
/* 5033 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 5036 */    MCD::OPC_FilterValue, 0, 17, 0, // Skip to: 5057
/* 5040 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5043 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 5050
/* 5047 */    MCD::OPC_Decode, 65, 69, // Opcode: AND
/* 5050 */    MCD::OPC_FilterValue, 1, 218, 14, // Skip to: 8856
/* 5054 */    MCD::OPC_Decode, 80, 69, // Opcode: ANDo
/* 5057 */    MCD::OPC_FilterValue, 1, 17, 0, // Skip to: 5078
/* 5061 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5064 */    MCD::OPC_FilterValue, 0, 3, 0, // Skip to: 5071
/* 5068 */    MCD::OPC_Decode, 68, 69, // Opcode: ANDC
/* 5071 */    MCD::OPC_FilterValue, 1, 197, 14, // Skip to: 8856
/* 5075 */    MCD::OPC_Decode, 71, 69, // Opcode: ANDCo
/* 5078 */    MCD::OPC_FilterValue, 3, 19, 0, // Skip to: 5101
/* 5082 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5085 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5093
/* 5089 */    MCD::OPC_Decode, 174, 4, 69, // Opcode: NOR
/* 5093 */    MCD::OPC_FilterValue, 1, 175, 14, // Skip to: 8856
/* 5097 */    MCD::OPC_Decode, 177, 4, 69, // Opcode: NORo
/* 5101 */    MCD::OPC_FilterValue, 8, 19, 0, // Skip to: 5124
/* 5105 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5108 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5116
/* 5112 */    MCD::OPC_Decode, 136, 2, 69, // Opcode: EQV
/* 5116 */    MCD::OPC_FilterValue, 1, 152, 14, // Skip to: 8856
/* 5120 */    MCD::OPC_Decode, 139, 2, 69, // Opcode: EQVo
/* 5124 */    MCD::OPC_FilterValue, 9, 19, 0, // Skip to: 5147
/* 5128 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5131 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5139
/* 5135 */    MCD::OPC_Decode, 148, 7, 69, // Opcode: XOR
/* 5139 */    MCD::OPC_FilterValue, 1, 129, 14, // Skip to: 8856
/* 5143 */    MCD::OPC_Decode, 155, 7, 69, // Opcode: XORo
/* 5147 */    MCD::OPC_FilterValue, 12, 19, 0, // Skip to: 5170
/* 5151 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5154 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5162
/* 5158 */    MCD::OPC_Decode, 181, 4, 69, // Opcode: ORC
/* 5162 */    MCD::OPC_FilterValue, 1, 106, 14, // Skip to: 8856
/* 5166 */    MCD::OPC_Decode, 184, 4, 69, // Opcode: ORCo
/* 5170 */    MCD::OPC_FilterValue, 13, 19, 0, // Skip to: 5193
/* 5174 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5177 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5185
/* 5181 */    MCD::OPC_Decode, 178, 4, 69, // Opcode: OR
/* 5185 */    MCD::OPC_FilterValue, 1, 83, 14, // Skip to: 8856
/* 5189 */    MCD::OPC_Decode, 189, 4, 69, // Opcode: ORo
/* 5193 */    MCD::OPC_FilterValue, 14, 75, 14, // Skip to: 8856
/* 5197 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5200 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5208
/* 5204 */    MCD::OPC_Decode, 163, 4, 69, // Opcode: NAND
/* 5208 */    MCD::OPC_FilterValue, 1, 60, 14, // Skip to: 8856
/* 5212 */    MCD::OPC_Decode, 166, 4, 69, // Opcode: NANDo
/* 5216 */    MCD::OPC_FilterValue, 15, 52, 14, // Skip to: 8856
/* 5220 */    MCD::OPC_CheckField, 23, 3, 0, 46, 14, // Skip to: 8856
/* 5226 */    MCD::OPC_CheckField, 6, 15, 1, 40, 14, // Skip to: 8856
/* 5232 */    MCD::OPC_CheckField, 0, 2, 0, 34, 14, // Skip to: 8856
/* 5238 */    MCD::OPC_Decode, 147, 7, 64, // Opcode: WAIT
/* 5242 */    MCD::OPC_FilterValue, 32, 4, 0, // Skip to: 5250
/* 5246 */    MCD::OPC_Decode, 225, 3, 75, // Opcode: LWZ
/* 5250 */    MCD::OPC_FilterValue, 33, 4, 0, // Skip to: 5258
/* 5254 */    MCD::OPC_Decode, 227, 3, 75, // Opcode: LWZU
/* 5258 */    MCD::OPC_FilterValue, 34, 4, 0, // Skip to: 5266
/* 5262 */    MCD::OPC_Decode, 158, 3, 75, // Opcode: LBZ
/* 5266 */    MCD::OPC_FilterValue, 35, 4, 0, // Skip to: 5274
/* 5270 */    MCD::OPC_Decode, 160, 3, 75, // Opcode: LBZU
/* 5274 */    MCD::OPC_FilterValue, 36, 4, 0, // Skip to: 5282
/* 5278 */    MCD::OPC_Decode, 176, 5, 75, // Opcode: STW
/* 5282 */    MCD::OPC_FilterValue, 37, 4, 0, // Skip to: 5290
/* 5286 */    MCD::OPC_Decode, 180, 5, 75, // Opcode: STWU
/* 5290 */    MCD::OPC_FilterValue, 38, 4, 0, // Skip to: 5298
/* 5294 */    MCD::OPC_Decode, 138, 5, 75, // Opcode: STB
/* 5298 */    MCD::OPC_FilterValue, 39, 4, 0, // Skip to: 5306
/* 5302 */    MCD::OPC_Decode, 140, 5, 75, // Opcode: STBU
/* 5306 */    MCD::OPC_FilterValue, 40, 4, 0, // Skip to: 5314
/* 5310 */    MCD::OPC_Decode, 198, 3, 75, // Opcode: LHZ
/* 5314 */    MCD::OPC_FilterValue, 41, 4, 0, // Skip to: 5322
/* 5318 */    MCD::OPC_Decode, 200, 3, 75, // Opcode: LHZU
/* 5322 */    MCD::OPC_FilterValue, 42, 4, 0, // Skip to: 5330
/* 5326 */    MCD::OPC_Decode, 189, 3, 75, // Opcode: LHA
/* 5330 */    MCD::OPC_FilterValue, 43, 4, 0, // Skip to: 5338
/* 5334 */    MCD::OPC_Decode, 191, 3, 75, // Opcode: LHAU
/* 5338 */    MCD::OPC_FilterValue, 44, 4, 0, // Skip to: 5346
/* 5342 */    MCD::OPC_Decode, 161, 5, 75, // Opcode: STH
/* 5346 */    MCD::OPC_FilterValue, 45, 4, 0, // Skip to: 5354
/* 5350 */    MCD::OPC_Decode, 164, 5, 75, // Opcode: STHU
/* 5354 */    MCD::OPC_FilterValue, 46, 4, 0, // Skip to: 5362
/* 5358 */    MCD::OPC_Decode, 210, 3, 75, // Opcode: LMW
/* 5362 */    MCD::OPC_FilterValue, 47, 4, 0, // Skip to: 5370
/* 5366 */    MCD::OPC_Decode, 170, 5, 75, // Opcode: STMW
/* 5370 */    MCD::OPC_FilterValue, 48, 4, 0, // Skip to: 5378
/* 5374 */    MCD::OPC_Decode, 185, 3, 76, // Opcode: LFS
/* 5378 */    MCD::OPC_FilterValue, 49, 4, 0, // Skip to: 5386
/* 5382 */    MCD::OPC_Decode, 186, 3, 76, // Opcode: LFSU
/* 5386 */    MCD::OPC_FilterValue, 50, 4, 0, // Skip to: 5394
/* 5390 */    MCD::OPC_Decode, 179, 3, 77, // Opcode: LFD
/* 5394 */    MCD::OPC_FilterValue, 51, 4, 0, // Skip to: 5402
/* 5398 */    MCD::OPC_Decode, 180, 3, 77, // Opcode: LFDU
/* 5402 */    MCD::OPC_FilterValue, 52, 4, 0, // Skip to: 5410
/* 5406 */    MCD::OPC_Decode, 157, 5, 76, // Opcode: STFS
/* 5410 */    MCD::OPC_FilterValue, 53, 4, 0, // Skip to: 5418
/* 5414 */    MCD::OPC_Decode, 158, 5, 76, // Opcode: STFSU
/* 5418 */    MCD::OPC_FilterValue, 54, 4, 0, // Skip to: 5426
/* 5422 */    MCD::OPC_Decode, 152, 5, 77, // Opcode: STFD
/* 5426 */    MCD::OPC_FilterValue, 55, 4, 0, // Skip to: 5434
/* 5430 */    MCD::OPC_Decode, 153, 5, 77, // Opcode: STFDU
/* 5434 */    MCD::OPC_FilterValue, 58, 27, 0, // Skip to: 5465
/* 5438 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 5441 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5449
/* 5445 */    MCD::OPC_Decode, 166, 3, 78, // Opcode: LD
/* 5449 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 5457
/* 5453 */    MCD::OPC_Decode, 169, 3, 78, // Opcode: LDU
/* 5457 */    MCD::OPC_FilterValue, 2, 67, 13, // Skip to: 8856
/* 5461 */    MCD::OPC_Decode, 218, 3, 78, // Opcode: LWA
/* 5465 */    MCD::OPC_FilterValue, 59, 113, 1, // Skip to: 5838
/* 5469 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 5472 */    MCD::OPC_FilterValue, 28, 31, 0, // Skip to: 5507
/* 5476 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 5479 */    MCD::OPC_FilterValue, 26, 10, 0, // Skip to: 5493
/* 5483 */    MCD::OPC_CheckField, 16, 5, 0, 39, 13, // Skip to: 8856
/* 5489 */    MCD::OPC_Decode, 172, 2, 79, // Opcode: FCFIDS
/* 5493 */    MCD::OPC_FilterValue, 30, 31, 13, // Skip to: 8856
/* 5497 */    MCD::OPC_CheckField, 16, 5, 0, 25, 13, // Skip to: 8856
/* 5503 */    MCD::OPC_Decode, 175, 2, 79, // Opcode: FCFIDUS
/* 5507 */    MCD::OPC_FilterValue, 29, 31, 0, // Skip to: 5542
/* 5511 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 5514 */    MCD::OPC_FilterValue, 26, 10, 0, // Skip to: 5528
/* 5518 */    MCD::OPC_CheckField, 16, 5, 0, 4, 13, // Skip to: 8856
/* 5524 */    MCD::OPC_Decode, 173, 2, 79, // Opcode: FCFIDSo
/* 5528 */    MCD::OPC_FilterValue, 30, 252, 12, // Skip to: 8856
/* 5532 */    MCD::OPC_CheckField, 16, 5, 0, 246, 12, // Skip to: 8856
/* 5538 */    MCD::OPC_Decode, 176, 2, 79, // Opcode: FCFIDUSo
/* 5542 */    MCD::OPC_FilterValue, 36, 10, 0, // Skip to: 5556
/* 5546 */    MCD::OPC_CheckField, 6, 5, 0, 232, 12, // Skip to: 8856
/* 5552 */    MCD::OPC_Decode, 198, 2, 80, // Opcode: FDIVS
/* 5556 */    MCD::OPC_FilterValue, 37, 10, 0, // Skip to: 5570
/* 5560 */    MCD::OPC_CheckField, 6, 5, 0, 218, 12, // Skip to: 8856
/* 5566 */    MCD::OPC_Decode, 199, 2, 80, // Opcode: FDIVSo
/* 5570 */    MCD::OPC_FilterValue, 40, 10, 0, // Skip to: 5584
/* 5574 */    MCD::OPC_CheckField, 6, 5, 0, 204, 12, // Skip to: 8856
/* 5580 */    MCD::OPC_Decode, 138, 3, 80, // Opcode: FSUBS
/* 5584 */    MCD::OPC_FilterValue, 41, 10, 0, // Skip to: 5598
/* 5588 */    MCD::OPC_CheckField, 6, 5, 0, 190, 12, // Skip to: 8856
/* 5594 */    MCD::OPC_Decode, 139, 3, 80, // Opcode: FSUBSo
/* 5598 */    MCD::OPC_FilterValue, 42, 10, 0, // Skip to: 5612
/* 5602 */    MCD::OPC_CheckField, 6, 5, 0, 176, 12, // Skip to: 8856
/* 5608 */    MCD::OPC_Decode, 167, 2, 80, // Opcode: FADDS
/* 5612 */    MCD::OPC_FilterValue, 43, 10, 0, // Skip to: 5626
/* 5616 */    MCD::OPC_CheckField, 6, 5, 0, 162, 12, // Skip to: 8856
/* 5622 */    MCD::OPC_Decode, 168, 2, 80, // Opcode: FADDSo
/* 5626 */    MCD::OPC_FilterValue, 44, 16, 0, // Skip to: 5646
/* 5630 */    MCD::OPC_CheckField, 16, 5, 0, 148, 12, // Skip to: 8856
/* 5636 */    MCD::OPC_CheckField, 6, 5, 0, 142, 12, // Skip to: 8856
/* 5642 */    MCD::OPC_Decode, 134, 3, 81, // Opcode: FSQRTS
/* 5646 */    MCD::OPC_FilterValue, 45, 16, 0, // Skip to: 5666
/* 5650 */    MCD::OPC_CheckField, 16, 5, 0, 128, 12, // Skip to: 8856
/* 5656 */    MCD::OPC_CheckField, 6, 5, 0, 122, 12, // Skip to: 8856
/* 5662 */    MCD::OPC_Decode, 135, 3, 81, // Opcode: FSQRTSo
/* 5666 */    MCD::OPC_FilterValue, 48, 16, 0, // Skip to: 5686
/* 5670 */    MCD::OPC_CheckField, 16, 5, 0, 108, 12, // Skip to: 8856
/* 5676 */    MCD::OPC_CheckField, 6, 5, 0, 102, 12, // Skip to: 8856
/* 5682 */    MCD::OPC_Decode, 232, 2, 81, // Opcode: FRES
/* 5686 */    MCD::OPC_FilterValue, 49, 16, 0, // Skip to: 5706
/* 5690 */    MCD::OPC_CheckField, 16, 5, 0, 88, 12, // Skip to: 8856
/* 5696 */    MCD::OPC_CheckField, 6, 5, 0, 82, 12, // Skip to: 8856
/* 5702 */    MCD::OPC_Decode, 233, 2, 81, // Opcode: FRESo
/* 5706 */    MCD::OPC_FilterValue, 50, 10, 0, // Skip to: 5720
/* 5710 */    MCD::OPC_CheckField, 11, 5, 0, 68, 12, // Skip to: 8856
/* 5716 */    MCD::OPC_Decode, 212, 2, 82, // Opcode: FMULS
/* 5720 */    MCD::OPC_FilterValue, 51, 10, 0, // Skip to: 5734
/* 5724 */    MCD::OPC_CheckField, 11, 5, 0, 54, 12, // Skip to: 8856
/* 5730 */    MCD::OPC_Decode, 213, 2, 82, // Opcode: FMULSo
/* 5734 */    MCD::OPC_FilterValue, 52, 16, 0, // Skip to: 5754
/* 5738 */    MCD::OPC_CheckField, 16, 5, 0, 40, 12, // Skip to: 8856
/* 5744 */    MCD::OPC_CheckField, 6, 5, 0, 34, 12, // Skip to: 8856
/* 5750 */    MCD::OPC_Decode, 254, 2, 81, // Opcode: FRSQRTES
/* 5754 */    MCD::OPC_FilterValue, 53, 16, 0, // Skip to: 5774
/* 5758 */    MCD::OPC_CheckField, 16, 5, 0, 20, 12, // Skip to: 8856
/* 5764 */    MCD::OPC_CheckField, 6, 5, 0, 14, 12, // Skip to: 8856
/* 5770 */    MCD::OPC_Decode, 255, 2, 81, // Opcode: FRSQRTESo
/* 5774 */    MCD::OPC_FilterValue, 56, 4, 0, // Skip to: 5782
/* 5778 */    MCD::OPC_Decode, 208, 2, 83, // Opcode: FMSUBS
/* 5782 */    MCD::OPC_FilterValue, 57, 4, 0, // Skip to: 5790
/* 5786 */    MCD::OPC_Decode, 209, 2, 83, // Opcode: FMSUBSo
/* 5790 */    MCD::OPC_FilterValue, 58, 4, 0, // Skip to: 5798
/* 5794 */    MCD::OPC_Decode, 202, 2, 83, // Opcode: FMADDS
/* 5798 */    MCD::OPC_FilterValue, 59, 4, 0, // Skip to: 5806
/* 5802 */    MCD::OPC_Decode, 203, 2, 83, // Opcode: FMADDSo
/* 5806 */    MCD::OPC_FilterValue, 60, 4, 0, // Skip to: 5814
/* 5810 */    MCD::OPC_Decode, 228, 2, 83, // Opcode: FNMSUBS
/* 5814 */    MCD::OPC_FilterValue, 61, 4, 0, // Skip to: 5822
/* 5818 */    MCD::OPC_Decode, 229, 2, 83, // Opcode: FNMSUBSo
/* 5822 */    MCD::OPC_FilterValue, 62, 4, 0, // Skip to: 5830
/* 5826 */    MCD::OPC_Decode, 224, 2, 83, // Opcode: FNMADDS
/* 5830 */    MCD::OPC_FilterValue, 63, 206, 11, // Skip to: 8856
/* 5834 */    MCD::OPC_Decode, 225, 2, 83, // Opcode: FNMADDSo
/* 5838 */    MCD::OPC_FilterValue, 60, 250, 7, // Skip to: 7884
/* 5842 */    MCD::OPC_ExtractField, 4, 2,  // Inst{5-4} ...
/* 5845 */    MCD::OPC_FilterValue, 0, 16, 2, // Skip to: 6377
/* 5849 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 5852 */    MCD::OPC_FilterValue, 4, 19, 0, // Skip to: 5875
/* 5856 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 5859 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5867
/* 5863 */    MCD::OPC_Decode, 157, 7, 84, // Opcode: XSADDDP
/* 5867 */    MCD::OPC_FilterValue, 1, 169, 11, // Skip to: 8856
/* 5871 */    MCD::OPC_Decode, 170, 7, 85, // Opcode: XSMADDADP
/* 5875 */    MCD::OPC_FilterValue, 5, 19, 0, // Skip to: 5898
/* 5879 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 5882 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5890
/* 5886 */    MCD::OPC_Decode, 191, 7, 84, // Opcode: XSSUBDP
/* 5890 */    MCD::OPC_FilterValue, 1, 146, 11, // Skip to: 8856
/* 5894 */    MCD::OPC_Decode, 171, 7, 85, // Opcode: XSMADDMDP
/* 5898 */    MCD::OPC_FilterValue, 6, 19, 0, // Skip to: 5921
/* 5902 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 5905 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5913
/* 5909 */    MCD::OPC_Decode, 176, 7, 84, // Opcode: XSMULDP
/* 5913 */    MCD::OPC_FilterValue, 1, 123, 11, // Skip to: 8856
/* 5917 */    MCD::OPC_Decode, 174, 7, 85, // Opcode: XSMSUBADP
/* 5921 */    MCD::OPC_FilterValue, 7, 19, 0, // Skip to: 5944
/* 5925 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 5928 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5936
/* 5932 */    MCD::OPC_Decode, 169, 7, 84, // Opcode: XSDIVDP
/* 5936 */    MCD::OPC_FilterValue, 1, 100, 11, // Skip to: 8856
/* 5940 */    MCD::OPC_Decode, 175, 7, 85, // Opcode: XSMSUBMDP
/* 5944 */    MCD::OPC_FilterValue, 8, 19, 0, // Skip to: 5967
/* 5948 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 5951 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5959
/* 5955 */    MCD::OPC_Decode, 197, 7, 86, // Opcode: XVADDSP
/* 5959 */    MCD::OPC_FilterValue, 1, 77, 11, // Skip to: 8856
/* 5963 */    MCD::OPC_Decode, 233, 7, 87, // Opcode: XVMADDASP
/* 5967 */    MCD::OPC_FilterValue, 9, 19, 0, // Skip to: 5990
/* 5971 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 5974 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 5982
/* 5978 */    MCD::OPC_Decode, 147, 8, 86, // Opcode: XVSUBSP
/* 5982 */    MCD::OPC_FilterValue, 1, 54, 11, // Skip to: 8856
/* 5986 */    MCD::OPC_Decode, 235, 7, 87, // Opcode: XVMADDMSP
/* 5990 */    MCD::OPC_FilterValue, 10, 19, 0, // Skip to: 6013
/* 5994 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 5997 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6005
/* 6001 */    MCD::OPC_Decode, 245, 7, 86, // Opcode: XVMULSP
/* 6005 */    MCD::OPC_FilterValue, 1, 31, 11, // Skip to: 8856
/* 6009 */    MCD::OPC_Decode, 241, 7, 87, // Opcode: XVMSUBASP
/* 6013 */    MCD::OPC_FilterValue, 11, 19, 0, // Skip to: 6036
/* 6017 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6020 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6028
/* 6024 */    MCD::OPC_Decode, 231, 7, 86, // Opcode: XVDIVSP
/* 6028 */    MCD::OPC_FilterValue, 1, 8, 11, // Skip to: 8856
/* 6032 */    MCD::OPC_Decode, 243, 7, 87, // Opcode: XVMSUBMSP
/* 6036 */    MCD::OPC_FilterValue, 12, 19, 0, // Skip to: 6059
/* 6040 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6043 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6051
/* 6047 */    MCD::OPC_Decode, 196, 7, 86, // Opcode: XVADDDP
/* 6051 */    MCD::OPC_FilterValue, 1, 241, 10, // Skip to: 8856
/* 6055 */    MCD::OPC_Decode, 232, 7, 87, // Opcode: XVMADDADP
/* 6059 */    MCD::OPC_FilterValue, 13, 19, 0, // Skip to: 6082
/* 6063 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6066 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6074
/* 6070 */    MCD::OPC_Decode, 146, 8, 86, // Opcode: XVSUBDP
/* 6074 */    MCD::OPC_FilterValue, 1, 218, 10, // Skip to: 8856
/* 6078 */    MCD::OPC_Decode, 234, 7, 87, // Opcode: XVMADDMDP
/* 6082 */    MCD::OPC_FilterValue, 14, 19, 0, // Skip to: 6105
/* 6086 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6089 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6097
/* 6093 */    MCD::OPC_Decode, 244, 7, 86, // Opcode: XVMULDP
/* 6097 */    MCD::OPC_FilterValue, 1, 195, 10, // Skip to: 8856
/* 6101 */    MCD::OPC_Decode, 240, 7, 87, // Opcode: XVMSUBADP
/* 6105 */    MCD::OPC_FilterValue, 15, 19, 0, // Skip to: 6128
/* 6109 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6112 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6120
/* 6116 */    MCD::OPC_Decode, 230, 7, 86, // Opcode: XVDIVDP
/* 6120 */    MCD::OPC_FilterValue, 1, 172, 10, // Skip to: 8856
/* 6124 */    MCD::OPC_Decode, 242, 7, 87, // Opcode: XVMSUBMDP
/* 6128 */    MCD::OPC_FilterValue, 20, 19, 0, // Skip to: 6151
/* 6132 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6135 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6143
/* 6139 */    MCD::OPC_Decode, 172, 7, 84, // Opcode: XSMAXDP
/* 6143 */    MCD::OPC_FilterValue, 1, 149, 10, // Skip to: 8856
/* 6147 */    MCD::OPC_Decode, 179, 7, 85, // Opcode: XSNMADDADP
/* 6151 */    MCD::OPC_FilterValue, 21, 19, 0, // Skip to: 6174
/* 6155 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6158 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6166
/* 6162 */    MCD::OPC_Decode, 173, 7, 84, // Opcode: XSMINDP
/* 6166 */    MCD::OPC_FilterValue, 1, 126, 10, // Skip to: 8856
/* 6170 */    MCD::OPC_Decode, 180, 7, 85, // Opcode: XSNMADDMDP
/* 6174 */    MCD::OPC_FilterValue, 22, 19, 0, // Skip to: 6197
/* 6178 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6181 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6189
/* 6185 */    MCD::OPC_Decode, 160, 7, 84, // Opcode: XSCPSGNDP
/* 6189 */    MCD::OPC_FilterValue, 1, 103, 10, // Skip to: 8856
/* 6193 */    MCD::OPC_Decode, 181, 7, 85, // Opcode: XSNMSUBADP
/* 6197 */    MCD::OPC_FilterValue, 23, 10, 0, // Skip to: 6211
/* 6201 */    MCD::OPC_CheckField, 3, 1, 1, 89, 10, // Skip to: 8856
/* 6207 */    MCD::OPC_Decode, 182, 7, 85, // Opcode: XSNMSUBMDP
/* 6211 */    MCD::OPC_FilterValue, 24, 19, 0, // Skip to: 6234
/* 6215 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6218 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6226
/* 6222 */    MCD::OPC_Decode, 237, 7, 86, // Opcode: XVMAXSP
/* 6226 */    MCD::OPC_FilterValue, 1, 66, 10, // Skip to: 8856
/* 6230 */    MCD::OPC_Decode, 251, 7, 87, // Opcode: XVNMADDASP
/* 6234 */    MCD::OPC_FilterValue, 25, 19, 0, // Skip to: 6257
/* 6238 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6241 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6249
/* 6245 */    MCD::OPC_Decode, 239, 7, 86, // Opcode: XVMINSP
/* 6249 */    MCD::OPC_FilterValue, 1, 43, 10, // Skip to: 8856
/* 6253 */    MCD::OPC_Decode, 253, 7, 87, // Opcode: XVNMADDMSP
/* 6257 */    MCD::OPC_FilterValue, 26, 19, 0, // Skip to: 6280
/* 6261 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6264 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6272
/* 6268 */    MCD::OPC_Decode, 211, 7, 86, // Opcode: XVCPSGNSP
/* 6272 */    MCD::OPC_FilterValue, 1, 20, 10, // Skip to: 8856
/* 6276 */    MCD::OPC_Decode, 255, 7, 87, // Opcode: XVNMSUBASP
/* 6280 */    MCD::OPC_FilterValue, 27, 10, 0, // Skip to: 6294
/* 6284 */    MCD::OPC_CheckField, 3, 1, 1, 6, 10, // Skip to: 8856
/* 6290 */    MCD::OPC_Decode, 129, 8, 87, // Opcode: XVNMSUBMSP
/* 6294 */    MCD::OPC_FilterValue, 28, 19, 0, // Skip to: 6317
/* 6298 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6301 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6309
/* 6305 */    MCD::OPC_Decode, 236, 7, 86, // Opcode: XVMAXDP
/* 6309 */    MCD::OPC_FilterValue, 1, 239, 9, // Skip to: 8856
/* 6313 */    MCD::OPC_Decode, 250, 7, 87, // Opcode: XVNMADDADP
/* 6317 */    MCD::OPC_FilterValue, 29, 19, 0, // Skip to: 6340
/* 6321 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6324 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6332
/* 6328 */    MCD::OPC_Decode, 238, 7, 86, // Opcode: XVMINDP
/* 6332 */    MCD::OPC_FilterValue, 1, 216, 9, // Skip to: 8856
/* 6336 */    MCD::OPC_Decode, 252, 7, 87, // Opcode: XVNMADDMDP
/* 6340 */    MCD::OPC_FilterValue, 30, 19, 0, // Skip to: 6363
/* 6344 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6347 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6355
/* 6351 */    MCD::OPC_Decode, 210, 7, 86, // Opcode: XVCPSGNDP
/* 6355 */    MCD::OPC_FilterValue, 1, 193, 9, // Skip to: 8856
/* 6359 */    MCD::OPC_Decode, 254, 7, 87, // Opcode: XVNMSUBADP
/* 6363 */    MCD::OPC_FilterValue, 31, 185, 9, // Skip to: 8856
/* 6367 */    MCD::OPC_CheckField, 3, 1, 1, 179, 9, // Skip to: 8856
/* 6373 */    MCD::OPC_Decode, 128, 8, 87, // Opcode: XVNMSUBMDP
/* 6377 */    MCD::OPC_FilterValue, 1, 92, 1, // Skip to: 6729
/* 6381 */    MCD::OPC_ExtractField, 6, 2,  // Inst{7-6} ...
/* 6384 */    MCD::OPC_FilterValue, 0, 100, 0, // Skip to: 6488
/* 6388 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6391 */    MCD::OPC_FilterValue, 0, 34, 0, // Skip to: 6429
/* 6395 */    MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 6398 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6406
/* 6402 */    MCD::OPC_Decode, 162, 8, 88, // Opcode: XXSLDWI
/* 6406 */    MCD::OPC_FilterValue, 1, 142, 9, // Skip to: 8856
/* 6410 */    MCD::OPC_ExtractField, 8, 2,  // Inst{9-8} ...
/* 6413 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6421
/* 6417 */    MCD::OPC_Decode, 152, 8, 86, // Opcode: XXLAND
/* 6421 */    MCD::OPC_FilterValue, 1, 127, 9, // Skip to: 8856
/* 6425 */    MCD::OPC_Decode, 154, 8, 86, // Opcode: XXLNOR
/* 6429 */    MCD::OPC_FilterValue, 1, 119, 9, // Skip to: 8856
/* 6433 */    MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 6436 */    MCD::OPC_FilterValue, 1, 16, 0, // Skip to: 6456
/* 6440 */    MCD::OPC_CheckField, 21, 2, 0, 106, 9, // Skip to: 8856
/* 6446 */    MCD::OPC_CheckField, 0, 1, 0, 100, 9, // Skip to: 8856
/* 6452 */    MCD::OPC_Decode, 159, 7, 89, // Opcode: XSCMPUDP
/* 6456 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 6464
/* 6460 */    MCD::OPC_Decode, 200, 7, 86, // Opcode: XVCMPEQSP
/* 6464 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 6472
/* 6468 */    MCD::OPC_Decode, 198, 7, 86, // Opcode: XVCMPEQDP
/* 6472 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 6480
/* 6476 */    MCD::OPC_Decode, 201, 7, 86, // Opcode: XVCMPEQSPo
/* 6480 */    MCD::OPC_FilterValue, 7, 68, 9, // Skip to: 8856
/* 6484 */    MCD::OPC_Decode, 199, 7, 86, // Opcode: XVCMPEQDPo
/* 6488 */    MCD::OPC_FilterValue, 1, 91, 0, // Skip to: 6583
/* 6492 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6495 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 6524
/* 6499 */    MCD::OPC_ExtractField, 10, 1,  // Inst{10} ...
/* 6502 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6510
/* 6506 */    MCD::OPC_Decode, 160, 8, 88, // Opcode: XXPERMDI
/* 6510 */    MCD::OPC_FilterValue, 1, 38, 9, // Skip to: 8856
/* 6514 */    MCD::OPC_CheckField, 8, 2, 0, 32, 9, // Skip to: 8856
/* 6520 */    MCD::OPC_Decode, 153, 8, 86, // Opcode: XXLANDC
/* 6524 */    MCD::OPC_FilterValue, 1, 24, 9, // Skip to: 8856
/* 6528 */    MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 6531 */    MCD::OPC_FilterValue, 1, 16, 0, // Skip to: 6551
/* 6535 */    MCD::OPC_CheckField, 21, 2, 0, 11, 9, // Skip to: 8856
/* 6541 */    MCD::OPC_CheckField, 0, 1, 0, 5, 9, // Skip to: 8856
/* 6547 */    MCD::OPC_Decode, 158, 7, 89, // Opcode: XSCMPODP
/* 6551 */    MCD::OPC_FilterValue, 2, 4, 0, // Skip to: 6559
/* 6555 */    MCD::OPC_Decode, 208, 7, 86, // Opcode: XVCMPGTSP
/* 6559 */    MCD::OPC_FilterValue, 3, 4, 0, // Skip to: 6567
/* 6563 */    MCD::OPC_Decode, 206, 7, 86, // Opcode: XVCMPGTDP
/* 6567 */    MCD::OPC_FilterValue, 6, 4, 0, // Skip to: 6575
/* 6571 */    MCD::OPC_Decode, 209, 7, 86, // Opcode: XVCMPGTSPo
/* 6575 */    MCD::OPC_FilterValue, 7, 229, 8, // Skip to: 8856
/* 6579 */    MCD::OPC_Decode, 207, 7, 86, // Opcode: XVCMPGTDPo
/* 6583 */    MCD::OPC_FilterValue, 2, 122, 0, // Skip to: 6709
/* 6587 */    MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 6590 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6604
/* 6594 */    MCD::OPC_CheckField, 3, 1, 0, 208, 8, // Skip to: 8856
/* 6600 */    MCD::OPC_Decode, 158, 8, 86, // Opcode: XXMRGHW
/* 6604 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 6618
/* 6608 */    MCD::OPC_CheckField, 3, 1, 0, 194, 8, // Skip to: 8856
/* 6614 */    MCD::OPC_Decode, 159, 8, 86, // Opcode: XXMRGLW
/* 6618 */    MCD::OPC_FilterValue, 2, 31, 0, // Skip to: 6653
/* 6622 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6625 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 6645
/* 6629 */    MCD::OPC_CheckField, 18, 3, 0, 173, 8, // Skip to: 8856
/* 6635 */    MCD::OPC_CheckField, 2, 1, 0, 167, 8, // Skip to: 8856
/* 6641 */    MCD::OPC_Decode, 163, 8, 90, // Opcode: XXSPLTW
/* 6645 */    MCD::OPC_FilterValue, 1, 159, 8, // Skip to: 8856
/* 6649 */    MCD::OPC_Decode, 204, 7, 86, // Opcode: XVCMPGESP
/* 6653 */    MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 6667
/* 6657 */    MCD::OPC_CheckField, 3, 1, 1, 145, 8, // Skip to: 8856
/* 6663 */    MCD::OPC_Decode, 202, 7, 86, // Opcode: XVCMPGEDP
/* 6667 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 6681
/* 6671 */    MCD::OPC_CheckField, 3, 1, 0, 131, 8, // Skip to: 8856
/* 6677 */    MCD::OPC_Decode, 155, 8, 86, // Opcode: XXLOR
/* 6681 */    MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 6695
/* 6685 */    MCD::OPC_CheckField, 3, 1, 1, 117, 8, // Skip to: 8856
/* 6691 */    MCD::OPC_Decode, 205, 7, 86, // Opcode: XVCMPGESPo
/* 6695 */    MCD::OPC_FilterValue, 7, 109, 8, // Skip to: 8856
/* 6699 */    MCD::OPC_CheckField, 3, 1, 1, 103, 8, // Skip to: 8856
/* 6705 */    MCD::OPC_Decode, 203, 7, 86, // Opcode: XVCMPGEDPo
/* 6709 */    MCD::OPC_FilterValue, 3, 95, 8, // Skip to: 8856
/* 6713 */    MCD::OPC_CheckField, 8, 3, 4, 89, 8, // Skip to: 8856
/* 6719 */    MCD::OPC_CheckField, 3, 1, 0, 83, 8, // Skip to: 8856
/* 6725 */    MCD::OPC_Decode, 157, 8, 86, // Opcode: XXLXOR
/* 6729 */    MCD::OPC_FilterValue, 2, 119, 4, // Skip to: 7876
/* 6733 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 6736 */    MCD::OPC_FilterValue, 4, 59, 0, // Skip to: 6799
/* 6740 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 6743 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6757
/* 6747 */    MCD::OPC_CheckField, 16, 5, 0, 55, 8, // Skip to: 8856
/* 6753 */    MCD::OPC_Decode, 165, 7, 91, // Opcode: XSCVDPUXWS
/* 6757 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 6771
/* 6761 */    MCD::OPC_CheckField, 16, 5, 0, 41, 8, // Skip to: 8856
/* 6767 */    MCD::OPC_Decode, 183, 7, 91, // Opcode: XSRDPI
/* 6771 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 6785
/* 6775 */    MCD::OPC_CheckField, 16, 5, 0, 27, 8, // Skip to: 8856
/* 6781 */    MCD::OPC_Decode, 189, 7, 91, // Opcode: XSRSQRTEDP
/* 6785 */    MCD::OPC_FilterValue, 3, 19, 8, // Skip to: 8856
/* 6789 */    MCD::OPC_CheckField, 16, 5, 0, 13, 8, // Skip to: 8856
/* 6795 */    MCD::OPC_Decode, 190, 7, 91, // Opcode: XSSQRTDP
/* 6799 */    MCD::OPC_FilterValue, 5, 45, 0, // Skip to: 6848
/* 6803 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 6806 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6820
/* 6810 */    MCD::OPC_CheckField, 16, 5, 0, 248, 7, // Skip to: 8856
/* 6816 */    MCD::OPC_Decode, 163, 7, 91, // Opcode: XSCVDPSXWS
/* 6820 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 6834
/* 6824 */    MCD::OPC_CheckField, 16, 5, 0, 234, 7, // Skip to: 8856
/* 6830 */    MCD::OPC_Decode, 187, 7, 91, // Opcode: XSRDPIZ
/* 6834 */    MCD::OPC_FilterValue, 2, 226, 7, // Skip to: 8856
/* 6838 */    MCD::OPC_CheckField, 16, 5, 0, 220, 7, // Skip to: 8856
/* 6844 */    MCD::OPC_Decode, 188, 7, 91, // Opcode: XSREDP
/* 6848 */    MCD::OPC_FilterValue, 6, 51, 0, // Skip to: 6903
/* 6852 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 6855 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 6869
/* 6859 */    MCD::OPC_CheckField, 16, 5, 0, 199, 7, // Skip to: 8856
/* 6865 */    MCD::OPC_Decode, 186, 7, 91, // Opcode: XSRDPIP
/* 6869 */    MCD::OPC_FilterValue, 2, 16, 0, // Skip to: 6889
/* 6873 */    MCD::OPC_CheckField, 16, 7, 0, 185, 7, // Skip to: 8856
/* 6879 */    MCD::OPC_CheckField, 0, 1, 0, 179, 7, // Skip to: 8856
/* 6885 */    MCD::OPC_Decode, 193, 7, 92, // Opcode: XSTSQRTDP
/* 6889 */    MCD::OPC_FilterValue, 3, 171, 7, // Skip to: 8856
/* 6893 */    MCD::OPC_CheckField, 16, 5, 0, 165, 7, // Skip to: 8856
/* 6899 */    MCD::OPC_Decode, 184, 7, 91, // Opcode: XSRDPIC
/* 6903 */    MCD::OPC_FilterValue, 7, 43, 0, // Skip to: 6950
/* 6907 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 6910 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 6930
/* 6914 */    MCD::OPC_CheckField, 16, 5, 0, 144, 7, // Skip to: 8856
/* 6920 */    MCD::OPC_CheckField, 2, 1, 1, 138, 7, // Skip to: 8856
/* 6926 */    MCD::OPC_Decode, 185, 7, 91, // Opcode: XSRDPIM
/* 6930 */    MCD::OPC_FilterValue, 1, 130, 7, // Skip to: 8856
/* 6934 */    MCD::OPC_CheckField, 21, 2, 0, 124, 7, // Skip to: 8856
/* 6940 */    MCD::OPC_CheckField, 0, 1, 0, 118, 7, // Skip to: 8856
/* 6946 */    MCD::OPC_Decode, 192, 7, 89, // Opcode: XSTDIVDP
/* 6950 */    MCD::OPC_FilterValue, 8, 59, 0, // Skip to: 7013
/* 6954 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 6957 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6971
/* 6961 */    MCD::OPC_CheckField, 16, 5, 0, 97, 7, // Skip to: 8856
/* 6967 */    MCD::OPC_Decode, 221, 7, 93, // Opcode: XVCVSPUXWS
/* 6971 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 6985
/* 6975 */    MCD::OPC_CheckField, 16, 5, 0, 83, 7, // Skip to: 8856
/* 6981 */    MCD::OPC_Decode, 137, 8, 93, // Opcode: XVRSPI
/* 6985 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 6999
/* 6989 */    MCD::OPC_CheckField, 16, 5, 0, 69, 7, // Skip to: 8856
/* 6995 */    MCD::OPC_Decode, 143, 8, 93, // Opcode: XVRSQRTESP
/* 6999 */    MCD::OPC_FilterValue, 3, 61, 7, // Skip to: 8856
/* 7003 */    MCD::OPC_CheckField, 16, 5, 0, 55, 7, // Skip to: 8856
/* 7009 */    MCD::OPC_Decode, 145, 8, 93, // Opcode: XVSQRTSP
/* 7013 */    MCD::OPC_FilterValue, 9, 45, 0, // Skip to: 7062
/* 7017 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 7020 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7034
/* 7024 */    MCD::OPC_CheckField, 16, 5, 0, 34, 7, // Skip to: 8856
/* 7030 */    MCD::OPC_Decode, 219, 7, 93, // Opcode: XVCVSPSXWS
/* 7034 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 7048
/* 7038 */    MCD::OPC_CheckField, 16, 5, 0, 20, 7, // Skip to: 8856
/* 7044 */    MCD::OPC_Decode, 141, 8, 93, // Opcode: XVRSPIZ
/* 7048 */    MCD::OPC_FilterValue, 2, 12, 7, // Skip to: 8856
/* 7052 */    MCD::OPC_CheckField, 16, 5, 0, 6, 7, // Skip to: 8856
/* 7058 */    MCD::OPC_Decode, 136, 8, 93, // Opcode: XVRESP
/* 7062 */    MCD::OPC_FilterValue, 10, 65, 0, // Skip to: 7131
/* 7066 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 7069 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7083
/* 7073 */    MCD::OPC_CheckField, 16, 5, 0, 241, 6, // Skip to: 8856
/* 7079 */    MCD::OPC_Decode, 229, 7, 93, // Opcode: XVCVUXWSP
/* 7083 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 7097
/* 7087 */    MCD::OPC_CheckField, 16, 5, 0, 227, 6, // Skip to: 8856
/* 7093 */    MCD::OPC_Decode, 140, 8, 93, // Opcode: XVRSPIP
/* 7097 */    MCD::OPC_FilterValue, 2, 16, 0, // Skip to: 7117
/* 7101 */    MCD::OPC_CheckField, 16, 7, 0, 213, 6, // Skip to: 8856
/* 7107 */    MCD::OPC_CheckField, 0, 1, 0, 207, 6, // Skip to: 8856
/* 7113 */    MCD::OPC_Decode, 151, 8, 94, // Opcode: XVTSQRTSP
/* 7117 */    MCD::OPC_FilterValue, 3, 199, 6, // Skip to: 8856
/* 7121 */    MCD::OPC_CheckField, 16, 5, 0, 193, 6, // Skip to: 8856
/* 7127 */    MCD::OPC_Decode, 138, 8, 93, // Opcode: XVRSPIC
/* 7131 */    MCD::OPC_FilterValue, 11, 58, 0, // Skip to: 7193
/* 7135 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 7138 */    MCD::OPC_FilterValue, 0, 31, 0, // Skip to: 7173
/* 7142 */    MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 7145 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7159
/* 7149 */    MCD::OPC_CheckField, 16, 5, 0, 165, 6, // Skip to: 8856
/* 7155 */    MCD::OPC_Decode, 225, 7, 93, // Opcode: XVCVSXWSP
/* 7159 */    MCD::OPC_FilterValue, 1, 157, 6, // Skip to: 8856
/* 7163 */    MCD::OPC_CheckField, 16, 5, 0, 151, 6, // Skip to: 8856
/* 7169 */    MCD::OPC_Decode, 139, 8, 93, // Opcode: XVRSPIM
/* 7173 */    MCD::OPC_FilterValue, 1, 143, 6, // Skip to: 8856
/* 7177 */    MCD::OPC_CheckField, 21, 2, 0, 137, 6, // Skip to: 8856
/* 7183 */    MCD::OPC_CheckField, 0, 1, 0, 131, 6, // Skip to: 8856
/* 7189 */    MCD::OPC_Decode, 149, 8, 95, // Opcode: XVTDIVSP
/* 7193 */    MCD::OPC_FilterValue, 12, 59, 0, // Skip to: 7256
/* 7197 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 7200 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7214
/* 7204 */    MCD::OPC_CheckField, 16, 5, 0, 110, 6, // Skip to: 8856
/* 7210 */    MCD::OPC_Decode, 216, 7, 93, // Opcode: XVCVDPUXWS
/* 7214 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 7228
/* 7218 */    MCD::OPC_CheckField, 16, 5, 0, 96, 6, // Skip to: 8856
/* 7224 */    MCD::OPC_Decode, 130, 8, 93, // Opcode: XVRDPI
/* 7228 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 7242
/* 7232 */    MCD::OPC_CheckField, 16, 5, 0, 82, 6, // Skip to: 8856
/* 7238 */    MCD::OPC_Decode, 142, 8, 93, // Opcode: XVRSQRTEDP
/* 7242 */    MCD::OPC_FilterValue, 3, 74, 6, // Skip to: 8856
/* 7246 */    MCD::OPC_CheckField, 16, 5, 0, 68, 6, // Skip to: 8856
/* 7252 */    MCD::OPC_Decode, 144, 8, 93, // Opcode: XVSQRTDP
/* 7256 */    MCD::OPC_FilterValue, 13, 45, 0, // Skip to: 7305
/* 7260 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 7263 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7277
/* 7267 */    MCD::OPC_CheckField, 16, 5, 0, 47, 6, // Skip to: 8856
/* 7273 */    MCD::OPC_Decode, 214, 7, 93, // Opcode: XVCVDPSXWS
/* 7277 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 7291
/* 7281 */    MCD::OPC_CheckField, 16, 5, 0, 33, 6, // Skip to: 8856
/* 7287 */    MCD::OPC_Decode, 134, 8, 93, // Opcode: XVRDPIZ
/* 7291 */    MCD::OPC_FilterValue, 2, 25, 6, // Skip to: 8856
/* 7295 */    MCD::OPC_CheckField, 16, 5, 0, 19, 6, // Skip to: 8856
/* 7301 */    MCD::OPC_Decode, 135, 8, 93, // Opcode: XVREDP
/* 7305 */    MCD::OPC_FilterValue, 14, 65, 0, // Skip to: 7374
/* 7309 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 7312 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7326
/* 7316 */    MCD::OPC_CheckField, 16, 5, 0, 254, 5, // Skip to: 8856
/* 7322 */    MCD::OPC_Decode, 228, 7, 93, // Opcode: XVCVUXWDP
/* 7326 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 7340
/* 7330 */    MCD::OPC_CheckField, 16, 5, 0, 240, 5, // Skip to: 8856
/* 7336 */    MCD::OPC_Decode, 133, 8, 93, // Opcode: XVRDPIP
/* 7340 */    MCD::OPC_FilterValue, 2, 16, 0, // Skip to: 7360
/* 7344 */    MCD::OPC_CheckField, 16, 7, 0, 226, 5, // Skip to: 8856
/* 7350 */    MCD::OPC_CheckField, 0, 1, 0, 220, 5, // Skip to: 8856
/* 7356 */    MCD::OPC_Decode, 150, 8, 94, // Opcode: XVTSQRTDP
/* 7360 */    MCD::OPC_FilterValue, 3, 212, 5, // Skip to: 8856
/* 7364 */    MCD::OPC_CheckField, 16, 5, 0, 206, 5, // Skip to: 8856
/* 7370 */    MCD::OPC_Decode, 131, 8, 93, // Opcode: XVRDPIC
/* 7374 */    MCD::OPC_FilterValue, 15, 58, 0, // Skip to: 7436
/* 7378 */    MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 7381 */    MCD::OPC_FilterValue, 0, 31, 0, // Skip to: 7416
/* 7385 */    MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 7388 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7402
/* 7392 */    MCD::OPC_CheckField, 16, 5, 0, 178, 5, // Skip to: 8856
/* 7398 */    MCD::OPC_Decode, 224, 7, 93, // Opcode: XVCVSXWDP
/* 7402 */    MCD::OPC_FilterValue, 1, 170, 5, // Skip to: 8856
/* 7406 */    MCD::OPC_CheckField, 16, 5, 0, 164, 5, // Skip to: 8856
/* 7412 */    MCD::OPC_Decode, 132, 8, 93, // Opcode: XVRDPIM
/* 7416 */    MCD::OPC_FilterValue, 1, 156, 5, // Skip to: 8856
/* 7420 */    MCD::OPC_CheckField, 21, 2, 0, 150, 5, // Skip to: 8856
/* 7426 */    MCD::OPC_CheckField, 0, 1, 0, 144, 5, // Skip to: 8856
/* 7432 */    MCD::OPC_Decode, 148, 8, 95, // Opcode: XVTDIVDP
/* 7436 */    MCD::OPC_FilterValue, 16, 16, 0, // Skip to: 7456
/* 7440 */    MCD::OPC_CheckField, 16, 5, 0, 130, 5, // Skip to: 8856
/* 7446 */    MCD::OPC_CheckField, 2, 2, 1, 124, 5, // Skip to: 8856
/* 7452 */    MCD::OPC_Decode, 161, 7, 91, // Opcode: XSCVDPSP
/* 7456 */    MCD::OPC_FilterValue, 20, 31, 0, // Skip to: 7491
/* 7460 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 7463 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7477
/* 7467 */    MCD::OPC_CheckField, 16, 5, 0, 103, 5, // Skip to: 8856
/* 7473 */    MCD::OPC_Decode, 164, 7, 91, // Opcode: XSCVDPUXDS
/* 7477 */    MCD::OPC_FilterValue, 1, 95, 5, // Skip to: 8856
/* 7481 */    MCD::OPC_CheckField, 16, 5, 0, 89, 5, // Skip to: 8856
/* 7487 */    MCD::OPC_Decode, 166, 7, 91, // Opcode: XSCVSPDP
/* 7491 */    MCD::OPC_FilterValue, 21, 31, 0, // Skip to: 7526
/* 7495 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 7498 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7512
/* 7502 */    MCD::OPC_CheckField, 16, 5, 0, 68, 5, // Skip to: 8856
/* 7508 */    MCD::OPC_Decode, 162, 7, 91, // Opcode: XSCVDPSXDS
/* 7512 */    MCD::OPC_FilterValue, 1, 60, 5, // Skip to: 8856
/* 7516 */    MCD::OPC_CheckField, 16, 5, 0, 54, 5, // Skip to: 8856
/* 7522 */    MCD::OPC_Decode, 156, 7, 91, // Opcode: XSABSDP
/* 7526 */    MCD::OPC_FilterValue, 22, 31, 0, // Skip to: 7561
/* 7530 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 7533 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7547
/* 7537 */    MCD::OPC_CheckField, 16, 5, 0, 33, 5, // Skip to: 8856
/* 7543 */    MCD::OPC_Decode, 168, 7, 91, // Opcode: XSCVUXDDP
/* 7547 */    MCD::OPC_FilterValue, 1, 25, 5, // Skip to: 8856
/* 7551 */    MCD::OPC_CheckField, 16, 5, 0, 19, 5, // Skip to: 8856
/* 7557 */    MCD::OPC_Decode, 177, 7, 91, // Opcode: XSNABSDP
/* 7561 */    MCD::OPC_FilterValue, 23, 31, 0, // Skip to: 7596
/* 7565 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 7568 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7582
/* 7572 */    MCD::OPC_CheckField, 16, 5, 0, 254, 4, // Skip to: 8856
/* 7578 */    MCD::OPC_Decode, 167, 7, 91, // Opcode: XSCVSXDDP
/* 7582 */    MCD::OPC_FilterValue, 1, 246, 4, // Skip to: 8856
/* 7586 */    MCD::OPC_CheckField, 16, 5, 0, 240, 4, // Skip to: 8856
/* 7592 */    MCD::OPC_Decode, 178, 7, 91, // Opcode: XSNEGDP
/* 7596 */    MCD::OPC_FilterValue, 24, 31, 0, // Skip to: 7631
/* 7600 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 7603 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7617
/* 7607 */    MCD::OPC_CheckField, 16, 5, 0, 219, 4, // Skip to: 8856
/* 7613 */    MCD::OPC_Decode, 220, 7, 93, // Opcode: XVCVSPUXDS
/* 7617 */    MCD::OPC_FilterValue, 1, 211, 4, // Skip to: 8856
/* 7621 */    MCD::OPC_CheckField, 16, 5, 0, 205, 4, // Skip to: 8856
/* 7627 */    MCD::OPC_Decode, 212, 7, 93, // Opcode: XVCVDPSP
/* 7631 */    MCD::OPC_FilterValue, 25, 31, 0, // Skip to: 7666
/* 7635 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 7638 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7652
/* 7642 */    MCD::OPC_CheckField, 16, 5, 0, 184, 4, // Skip to: 8856
/* 7648 */    MCD::OPC_Decode, 218, 7, 93, // Opcode: XVCVSPSXDS
/* 7652 */    MCD::OPC_FilterValue, 1, 176, 4, // Skip to: 8856
/* 7656 */    MCD::OPC_CheckField, 16, 5, 0, 170, 4, // Skip to: 8856
/* 7662 */    MCD::OPC_Decode, 195, 7, 93, // Opcode: XVABSSP
/* 7666 */    MCD::OPC_FilterValue, 26, 31, 0, // Skip to: 7701
/* 7670 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 7673 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7687
/* 7677 */    MCD::OPC_CheckField, 16, 5, 0, 149, 4, // Skip to: 8856
/* 7683 */    MCD::OPC_Decode, 227, 7, 93, // Opcode: XVCVUXDSP
/* 7687 */    MCD::OPC_FilterValue, 1, 141, 4, // Skip to: 8856
/* 7691 */    MCD::OPC_CheckField, 16, 5, 0, 135, 4, // Skip to: 8856
/* 7697 */    MCD::OPC_Decode, 247, 7, 93, // Opcode: XVNABSSP
/* 7701 */    MCD::OPC_FilterValue, 27, 31, 0, // Skip to: 7736
/* 7705 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 7708 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7722
/* 7712 */    MCD::OPC_CheckField, 16, 5, 0, 114, 4, // Skip to: 8856
/* 7718 */    MCD::OPC_Decode, 223, 7, 93, // Opcode: XVCVSXDSP
/* 7722 */    MCD::OPC_FilterValue, 1, 106, 4, // Skip to: 8856
/* 7726 */    MCD::OPC_CheckField, 16, 5, 0, 100, 4, // Skip to: 8856
/* 7732 */    MCD::OPC_Decode, 249, 7, 93, // Opcode: XVNEGSP
/* 7736 */    MCD::OPC_FilterValue, 28, 31, 0, // Skip to: 7771
/* 7740 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 7743 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7757
/* 7747 */    MCD::OPC_CheckField, 16, 5, 0, 79, 4, // Skip to: 8856
/* 7753 */    MCD::OPC_Decode, 215, 7, 93, // Opcode: XVCVDPUXDS
/* 7757 */    MCD::OPC_FilterValue, 1, 71, 4, // Skip to: 8856
/* 7761 */    MCD::OPC_CheckField, 16, 5, 0, 65, 4, // Skip to: 8856
/* 7767 */    MCD::OPC_Decode, 217, 7, 93, // Opcode: XVCVSPDP
/* 7771 */    MCD::OPC_FilterValue, 29, 31, 0, // Skip to: 7806
/* 7775 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 7778 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7792
/* 7782 */    MCD::OPC_CheckField, 16, 5, 0, 44, 4, // Skip to: 8856
/* 7788 */    MCD::OPC_Decode, 213, 7, 93, // Opcode: XVCVDPSXDS
/* 7792 */    MCD::OPC_FilterValue, 1, 36, 4, // Skip to: 8856
/* 7796 */    MCD::OPC_CheckField, 16, 5, 0, 30, 4, // Skip to: 8856
/* 7802 */    MCD::OPC_Decode, 194, 7, 93, // Opcode: XVABSDP
/* 7806 */    MCD::OPC_FilterValue, 30, 31, 0, // Skip to: 7841
/* 7810 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 7813 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7827
/* 7817 */    MCD::OPC_CheckField, 16, 5, 0, 9, 4, // Skip to: 8856
/* 7823 */    MCD::OPC_Decode, 226, 7, 93, // Opcode: XVCVUXDDP
/* 7827 */    MCD::OPC_FilterValue, 1, 1, 4, // Skip to: 8856
/* 7831 */    MCD::OPC_CheckField, 16, 5, 0, 251, 3, // Skip to: 8856
/* 7837 */    MCD::OPC_Decode, 246, 7, 93, // Opcode: XVNABSDP
/* 7841 */    MCD::OPC_FilterValue, 31, 243, 3, // Skip to: 8856
/* 7845 */    MCD::OPC_ExtractField, 2, 2,  // Inst{3-2} ...
/* 7848 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 7862
/* 7852 */    MCD::OPC_CheckField, 16, 5, 0, 230, 3, // Skip to: 8856
/* 7858 */    MCD::OPC_Decode, 222, 7, 93, // Opcode: XVCVSXDDP
/* 7862 */    MCD::OPC_FilterValue, 1, 222, 3, // Skip to: 8856
/* 7866 */    MCD::OPC_CheckField, 16, 5, 0, 216, 3, // Skip to: 8856
/* 7872 */    MCD::OPC_Decode, 248, 7, 93, // Opcode: XVNEGDP
/* 7876 */    MCD::OPC_FilterValue, 3, 208, 3, // Skip to: 8856
/* 7880 */    MCD::OPC_Decode, 161, 8, 96, // Opcode: XXSEL
/* 7884 */    MCD::OPC_FilterValue, 62, 19, 0, // Skip to: 7907
/* 7888 */    MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 7891 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 7899
/* 7895 */    MCD::OPC_Decode, 146, 5, 78, // Opcode: STD
/* 7899 */    MCD::OPC_FilterValue, 1, 185, 3, // Skip to: 8856
/* 7903 */    MCD::OPC_Decode, 149, 5, 78, // Opcode: STDU
/* 7907 */    MCD::OPC_FilterValue, 63, 177, 3, // Skip to: 8856
/* 7911 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 7914 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 7934
/* 7918 */    MCD::OPC_CheckField, 21, 2, 0, 164, 3, // Skip to: 8856
/* 7924 */    MCD::OPC_CheckField, 6, 5, 0, 158, 3, // Skip to: 8856
/* 7930 */    MCD::OPC_Decode, 180, 2, 97, // Opcode: FCMPUS
/* 7934 */    MCD::OPC_FilterValue, 12, 19, 0, // Skip to: 7957
/* 7938 */    MCD::OPC_ExtractField, 6, 15,  // Inst{20-6} ...
/* 7941 */    MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 7949
/* 7945 */    MCD::OPC_Decode, 135, 4, 98, // Opcode: MTFSB1
/* 7949 */    MCD::OPC_FilterValue, 2, 135, 3, // Skip to: 8856
/* 7953 */    MCD::OPC_Decode, 134, 4, 98, // Opcode: MTFSB0
/* 7957 */    MCD::OPC_FilterValue, 14, 37, 0, // Skip to: 7998
/* 7961 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 7964 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 7978
/* 7968 */    MCD::OPC_CheckField, 11, 10, 0, 114, 3, // Skip to: 8856
/* 7974 */    MCD::OPC_Decode, 243, 3, 99, // Opcode: MFFS
/* 7978 */    MCD::OPC_FilterValue, 22, 106, 3, // Skip to: 8856
/* 7982 */    MCD::OPC_CheckField, 25, 1, 0, 100, 3, // Skip to: 8856
/* 7988 */    MCD::OPC_CheckField, 16, 1, 0, 94, 3, // Skip to: 8856
/* 7994 */    MCD::OPC_Decode, 136, 4, 100, // Opcode: MTFSF
/* 7998 */    MCD::OPC_FilterValue, 16, 123, 0, // Skip to: 8125
/* 8002 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 8005 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8013
/* 8009 */    MCD::OPC_Decode, 183, 2, 80, // Opcode: FCPSGNS
/* 8013 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 8027
/* 8017 */    MCD::OPC_CheckField, 16, 5, 0, 65, 3, // Skip to: 8856
/* 8023 */    MCD::OPC_Decode, 221, 2, 81, // Opcode: FNEGS
/* 8027 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 8041
/* 8031 */    MCD::OPC_CheckField, 16, 5, 0, 51, 3, // Skip to: 8856
/* 8037 */    MCD::OPC_Decode, 205, 2, 81, // Opcode: FMR
/* 8041 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 8055
/* 8045 */    MCD::OPC_CheckField, 16, 5, 0, 37, 3, // Skip to: 8856
/* 8051 */    MCD::OPC_Decode, 217, 2, 81, // Opcode: FNABSS
/* 8055 */    MCD::OPC_FilterValue, 8, 10, 0, // Skip to: 8069
/* 8059 */    MCD::OPC_CheckField, 16, 5, 0, 23, 3, // Skip to: 8856
/* 8065 */    MCD::OPC_Decode, 164, 2, 81, // Opcode: FABSS
/* 8069 */    MCD::OPC_FilterValue, 12, 10, 0, // Skip to: 8083
/* 8073 */    MCD::OPC_CheckField, 16, 5, 0, 9, 3, // Skip to: 8856
/* 8079 */    MCD::OPC_Decode, 241, 2, 81, // Opcode: FRINS
/* 8083 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 8097
/* 8087 */    MCD::OPC_CheckField, 16, 5, 0, 251, 2, // Skip to: 8856
/* 8093 */    MCD::OPC_Decode, 249, 2, 81, // Opcode: FRIZS
/* 8097 */    MCD::OPC_FilterValue, 14, 10, 0, // Skip to: 8111
/* 8101 */    MCD::OPC_CheckField, 16, 5, 0, 237, 2, // Skip to: 8856
/* 8107 */    MCD::OPC_Decode, 245, 2, 81, // Opcode: FRIPS
/* 8111 */    MCD::OPC_FilterValue, 15, 229, 2, // Skip to: 8856
/* 8115 */    MCD::OPC_CheckField, 16, 5, 0, 223, 2, // Skip to: 8856
/* 8121 */    MCD::OPC_Decode, 237, 2, 81, // Opcode: FRIMS
/* 8125 */    MCD::OPC_FilterValue, 17, 123, 0, // Skip to: 8252
/* 8129 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 8132 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 8140
/* 8136 */    MCD::OPC_Decode, 184, 2, 80, // Opcode: FCPSGNSo
/* 8140 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 8154
/* 8144 */    MCD::OPC_CheckField, 16, 5, 0, 194, 2, // Skip to: 8856
/* 8150 */    MCD::OPC_Decode, 222, 2, 81, // Opcode: FNEGSo
/* 8154 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 8168
/* 8158 */    MCD::OPC_CheckField, 16, 5, 0, 180, 2, // Skip to: 8856
/* 8164 */    MCD::OPC_Decode, 206, 2, 81, // Opcode: FMRo
/* 8168 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 8182
/* 8172 */    MCD::OPC_CheckField, 16, 5, 0, 166, 2, // Skip to: 8856
/* 8178 */    MCD::OPC_Decode, 218, 2, 81, // Opcode: FNABSSo
/* 8182 */    MCD::OPC_FilterValue, 8, 10, 0, // Skip to: 8196
/* 8186 */    MCD::OPC_CheckField, 16, 5, 0, 152, 2, // Skip to: 8856
/* 8192 */    MCD::OPC_Decode, 165, 2, 81, // Opcode: FABSSo
/* 8196 */    MCD::OPC_FilterValue, 12, 10, 0, // Skip to: 8210
/* 8200 */    MCD::OPC_CheckField, 16, 5, 0, 138, 2, // Skip to: 8856
/* 8206 */    MCD::OPC_Decode, 242, 2, 81, // Opcode: FRINSo
/* 8210 */    MCD::OPC_FilterValue, 13, 10, 0, // Skip to: 8224
/* 8214 */    MCD::OPC_CheckField, 16, 5, 0, 124, 2, // Skip to: 8856
/* 8220 */    MCD::OPC_Decode, 250, 2, 81, // Opcode: FRIZSo
/* 8224 */    MCD::OPC_FilterValue, 14, 10, 0, // Skip to: 8238
/* 8228 */    MCD::OPC_CheckField, 16, 5, 0, 110, 2, // Skip to: 8856
/* 8234 */    MCD::OPC_Decode, 246, 2, 81, // Opcode: FRIPSo
/* 8238 */    MCD::OPC_FilterValue, 15, 102, 2, // Skip to: 8856
/* 8242 */    MCD::OPC_CheckField, 16, 5, 0, 96, 2, // Skip to: 8856
/* 8248 */    MCD::OPC_Decode, 238, 2, 81, // Opcode: FRIMSo
/* 8252 */    MCD::OPC_FilterValue, 24, 16, 0, // Skip to: 8272
/* 8256 */    MCD::OPC_CheckField, 16, 5, 0, 82, 2, // Skip to: 8856
/* 8262 */    MCD::OPC_CheckField, 6, 5, 0, 76, 2, // Skip to: 8856
/* 8268 */    MCD::OPC_Decode, 251, 2, 79, // Opcode: FRSP
/* 8272 */    MCD::OPC_FilterValue, 25, 16, 0, // Skip to: 8292
/* 8276 */    MCD::OPC_CheckField, 16, 5, 0, 62, 2, // Skip to: 8856
/* 8282 */    MCD::OPC_CheckField, 6, 5, 0, 56, 2, // Skip to: 8856
/* 8288 */    MCD::OPC_Decode, 252, 2, 79, // Opcode: FRSPo
/* 8292 */    MCD::OPC_FilterValue, 28, 59, 0, // Skip to: 8355
/* 8296 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 8299 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8313
/* 8303 */    MCD::OPC_CheckField, 16, 5, 0, 35, 2, // Skip to: 8856
/* 8309 */    MCD::OPC_Decode, 191, 2, 101, // Opcode: FCTIW
/* 8313 */    MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 8327
/* 8317 */    MCD::OPC_CheckField, 16, 5, 0, 21, 2, // Skip to: 8856
/* 8323 */    MCD::OPC_Decode, 185, 2, 101, // Opcode: FCTID
/* 8327 */    MCD::OPC_FilterValue, 26, 10, 0, // Skip to: 8341
/* 8331 */    MCD::OPC_CheckField, 16, 5, 0, 7, 2, // Skip to: 8856
/* 8337 */    MCD::OPC_Decode, 171, 2, 101, // Opcode: FCFID
/* 8341 */    MCD::OPC_FilterValue, 30, 255, 1, // Skip to: 8856
/* 8345 */    MCD::OPC_CheckField, 16, 5, 0, 249, 1, // Skip to: 8856
/* 8351 */    MCD::OPC_Decode, 174, 2, 101, // Opcode: FCFIDU
/* 8355 */    MCD::OPC_FilterValue, 29, 59, 0, // Skip to: 8418
/* 8359 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 8362 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8376
/* 8366 */    MCD::OPC_CheckField, 16, 5, 0, 228, 1, // Skip to: 8856
/* 8372 */    MCD::OPC_Decode, 196, 2, 101, // Opcode: FCTIWo
/* 8376 */    MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 8390
/* 8380 */    MCD::OPC_CheckField, 16, 5, 0, 214, 1, // Skip to: 8856
/* 8386 */    MCD::OPC_Decode, 190, 2, 101, // Opcode: FCTIDo
/* 8390 */    MCD::OPC_FilterValue, 26, 10, 0, // Skip to: 8404
/* 8394 */    MCD::OPC_CheckField, 16, 5, 0, 200, 1, // Skip to: 8856
/* 8400 */    MCD::OPC_Decode, 178, 2, 101, // Opcode: FCFIDo
/* 8404 */    MCD::OPC_FilterValue, 30, 192, 1, // Skip to: 8856
/* 8408 */    MCD::OPC_CheckField, 16, 5, 0, 186, 1, // Skip to: 8856
/* 8414 */    MCD::OPC_Decode, 177, 2, 101, // Opcode: FCFIDUo
/* 8418 */    MCD::OPC_FilterValue, 30, 59, 0, // Skip to: 8481
/* 8422 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 8425 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8439
/* 8429 */    MCD::OPC_CheckField, 16, 5, 0, 165, 1, // Skip to: 8856
/* 8435 */    MCD::OPC_Decode, 194, 2, 101, // Opcode: FCTIWZ
/* 8439 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 8453
/* 8443 */    MCD::OPC_CheckField, 16, 5, 0, 151, 1, // Skip to: 8856
/* 8449 */    MCD::OPC_Decode, 192, 2, 101, // Opcode: FCTIWUZ
/* 8453 */    MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 8467
/* 8457 */    MCD::OPC_CheckField, 16, 5, 0, 137, 1, // Skip to: 8856
/* 8463 */    MCD::OPC_Decode, 188, 2, 101, // Opcode: FCTIDZ
/* 8467 */    MCD::OPC_FilterValue, 29, 129, 1, // Skip to: 8856
/* 8471 */    MCD::OPC_CheckField, 16, 5, 0, 123, 1, // Skip to: 8856
/* 8477 */    MCD::OPC_Decode, 186, 2, 101, // Opcode: FCTIDUZ
/* 8481 */    MCD::OPC_FilterValue, 31, 59, 0, // Skip to: 8544
/* 8485 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 8488 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 8502
/* 8492 */    MCD::OPC_CheckField, 16, 5, 0, 102, 1, // Skip to: 8856
/* 8498 */    MCD::OPC_Decode, 195, 2, 101, // Opcode: FCTIWZo
/* 8502 */    MCD::OPC_FilterValue, 4, 10, 0, // Skip to: 8516
/* 8506 */    MCD::OPC_CheckField, 16, 5, 0, 88, 1, // Skip to: 8856
/* 8512 */    MCD::OPC_Decode, 193, 2, 101, // Opcode: FCTIWUZo
/* 8516 */    MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 8530
/* 8520 */    MCD::OPC_CheckField, 16, 5, 0, 74, 1, // Skip to: 8856
/* 8526 */    MCD::OPC_Decode, 189, 2, 101, // Opcode: FCTIDZo
/* 8530 */    MCD::OPC_FilterValue, 29, 66, 1, // Skip to: 8856
/* 8534 */    MCD::OPC_CheckField, 16, 5, 0, 60, 1, // Skip to: 8856
/* 8540 */    MCD::OPC_Decode, 187, 2, 101, // Opcode: FCTIDUZo
/* 8544 */    MCD::OPC_FilterValue, 36, 10, 0, // Skip to: 8558
/* 8548 */    MCD::OPC_CheckField, 6, 5, 0, 46, 1, // Skip to: 8856
/* 8554 */    MCD::OPC_Decode, 197, 2, 102, // Opcode: FDIV
/* 8558 */    MCD::OPC_FilterValue, 37, 10, 0, // Skip to: 8572
/* 8562 */    MCD::OPC_CheckField, 6, 5, 0, 32, 1, // Skip to: 8856
/* 8568 */    MCD::OPC_Decode, 200, 2, 102, // Opcode: FDIVo
/* 8572 */    MCD::OPC_FilterValue, 40, 10, 0, // Skip to: 8586
/* 8576 */    MCD::OPC_CheckField, 6, 5, 0, 18, 1, // Skip to: 8856
/* 8582 */    MCD::OPC_Decode, 137, 3, 102, // Opcode: FSUB
/* 8586 */    MCD::OPC_FilterValue, 41, 10, 0, // Skip to: 8600
/* 8590 */    MCD::OPC_CheckField, 6, 5, 0, 4, 1, // Skip to: 8856
/* 8596 */    MCD::OPC_Decode, 140, 3, 102, // Opcode: FSUBo
/* 8600 */    MCD::OPC_FilterValue, 42, 10, 0, // Skip to: 8614
/* 8604 */    MCD::OPC_CheckField, 6, 5, 0, 246, 0, // Skip to: 8856
/* 8610 */    MCD::OPC_Decode, 166, 2, 102, // Opcode: FADD
/* 8614 */    MCD::OPC_FilterValue, 43, 10, 0, // Skip to: 8628
/* 8618 */    MCD::OPC_CheckField, 6, 5, 0, 232, 0, // Skip to: 8856
/* 8624 */    MCD::OPC_Decode, 169, 2, 102, // Opcode: FADDo
/* 8628 */    MCD::OPC_FilterValue, 44, 16, 0, // Skip to: 8648
/* 8632 */    MCD::OPC_CheckField, 16, 5, 0, 218, 0, // Skip to: 8856
/* 8638 */    MCD::OPC_CheckField, 6, 5, 0, 212, 0, // Skip to: 8856
/* 8644 */    MCD::OPC_Decode, 133, 3, 101, // Opcode: FSQRT
/* 8648 */    MCD::OPC_FilterValue, 45, 16, 0, // Skip to: 8668
/* 8652 */    MCD::OPC_CheckField, 16, 5, 0, 198, 0, // Skip to: 8856
/* 8658 */    MCD::OPC_CheckField, 6, 5, 0, 192, 0, // Skip to: 8856
/* 8664 */    MCD::OPC_Decode, 136, 3, 101, // Opcode: FSQRTo
/* 8668 */    MCD::OPC_FilterValue, 46, 4, 0, // Skip to: 8676
/* 8672 */    MCD::OPC_Decode, 131, 3, 103, // Opcode: FSELS
/* 8676 */    MCD::OPC_FilterValue, 47, 4, 0, // Skip to: 8684
/* 8680 */    MCD::OPC_Decode, 132, 3, 103, // Opcode: FSELSo
/* 8684 */    MCD::OPC_FilterValue, 48, 16, 0, // Skip to: 8704
/* 8688 */    MCD::OPC_CheckField, 16, 5, 0, 162, 0, // Skip to: 8856
/* 8694 */    MCD::OPC_CheckField, 6, 5, 0, 156, 0, // Skip to: 8856
/* 8700 */    MCD::OPC_Decode, 231, 2, 101, // Opcode: FRE
/* 8704 */    MCD::OPC_FilterValue, 49, 16, 0, // Skip to: 8724
/* 8708 */    MCD::OPC_CheckField, 16, 5, 0, 142, 0, // Skip to: 8856
/* 8714 */    MCD::OPC_CheckField, 6, 5, 0, 136, 0, // Skip to: 8856
/* 8720 */    MCD::OPC_Decode, 234, 2, 101, // Opcode: FREo
/* 8724 */    MCD::OPC_FilterValue, 50, 10, 0, // Skip to: 8738
/* 8728 */    MCD::OPC_CheckField, 11, 5, 0, 122, 0, // Skip to: 8856
/* 8734 */    MCD::OPC_Decode, 211, 2, 104, // Opcode: FMUL
/* 8738 */    MCD::OPC_FilterValue, 51, 10, 0, // Skip to: 8752
/* 8742 */    MCD::OPC_CheckField, 11, 5, 0, 108, 0, // Skip to: 8856
/* 8748 */    MCD::OPC_Decode, 214, 2, 104, // Opcode: FMULo
/* 8752 */    MCD::OPC_FilterValue, 52, 16, 0, // Skip to: 8772
/* 8756 */    MCD::OPC_CheckField, 16, 5, 0, 94, 0, // Skip to: 8856
/* 8762 */    MCD::OPC_CheckField, 6, 5, 0, 88, 0, // Skip to: 8856
/* 8768 */    MCD::OPC_Decode, 253, 2, 101, // Opcode: FRSQRTE
/* 8772 */    MCD::OPC_FilterValue, 53, 16, 0, // Skip to: 8792
/* 8776 */    MCD::OPC_CheckField, 16, 5, 0, 74, 0, // Skip to: 8856
/* 8782 */    MCD::OPC_CheckField, 6, 5, 0, 68, 0, // Skip to: 8856
/* 8788 */    MCD::OPC_Decode, 128, 3, 101, // Opcode: FRSQRTEo
/* 8792 */    MCD::OPC_FilterValue, 56, 4, 0, // Skip to: 8800
/* 8796 */    MCD::OPC_Decode, 207, 2, 105, // Opcode: FMSUB
/* 8800 */    MCD::OPC_FilterValue, 57, 4, 0, // Skip to: 8808
/* 8804 */    MCD::OPC_Decode, 210, 2, 105, // Opcode: FMSUBo
/* 8808 */    MCD::OPC_FilterValue, 58, 4, 0, // Skip to: 8816
/* 8812 */    MCD::OPC_Decode, 201, 2, 105, // Opcode: FMADD
/* 8816 */    MCD::OPC_FilterValue, 59, 4, 0, // Skip to: 8824
/* 8820 */    MCD::OPC_Decode, 204, 2, 105, // Opcode: FMADDo
/* 8824 */    MCD::OPC_FilterValue, 60, 4, 0, // Skip to: 8832
/* 8828 */    MCD::OPC_Decode, 227, 2, 105, // Opcode: FNMSUB
/* 8832 */    MCD::OPC_FilterValue, 61, 4, 0, // Skip to: 8840
/* 8836 */    MCD::OPC_Decode, 230, 2, 105, // Opcode: FNMSUBo
/* 8840 */    MCD::OPC_FilterValue, 62, 4, 0, // Skip to: 8848
/* 8844 */    MCD::OPC_Decode, 223, 2, 105, // Opcode: FNMADD
/* 8848 */    MCD::OPC_FilterValue, 63, 4, 0, // Skip to: 8856
/* 8852 */    MCD::OPC_Decode, 226, 2, 105, // Opcode: FNMADDo
/* 8856 */    MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, uint64_t Bits) {
  llvm_unreachable("Invalid index!");
}

template<typename InsnType>
static DecodeStatus decodeToMCInst(DecodeStatus S, unsigned Idx, InsnType insn, MCInst &MI,
                                   uint64_t Address, const void *Decoder) {
  InsnType tmp;
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeSImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeSImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 2:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 3:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 4:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 5:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 6:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (decodeSImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 8:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 4);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 10:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeSImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeUImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeUImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeSImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 15:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeSImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 16:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeSImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 17:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRC_NOR0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeSImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 2, 14);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCRBITRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 2, 14);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 20:
    tmp = fieldFromInstruction(insn, 5, 7);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 21:
    tmp = fieldFromInstruction(insn, 2, 24);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 22:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 23:
    return S;
  case 24:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCRBITRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 2);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 25:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeCRBITRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCRBITRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCRBITRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 26:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 1, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 1, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 28:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 1, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 29:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 16);
    if (decodeUImmOperand<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 30:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 1, 1) << 5);
    tmp |= (fieldFromInstruction(insn, 11, 5) << 0);
    if (decodeUImmOperand<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 5, 1) << 5);
    tmp |= (fieldFromInstruction(insn, 6, 5) << 0);
    if (decodeUImmOperand<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 31:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 1, 1) << 5);
    tmp |= (fieldFromInstruction(insn, 11, 5) << 0);
    if (decodeUImmOperand<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 5, 1) << 5);
    tmp |= (fieldFromInstruction(insn, 6, 5) << 0);
    if (decodeUImmOperand<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 32:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 5, 1) << 5);
    tmp |= (fieldFromInstruction(insn, 6, 5) << 0);
    if (decodeUImmOperand<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 33:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 34:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 35:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 36:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 37:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 38:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 39:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 40:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 41:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 42:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 43:
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 0, 1) << 5);
    tmp |= (fieldFromInstruction(insn, 21, 5) << 0);
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 44:
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 0, 1) << 5);
    tmp |= (fieldFromInstruction(insn, 21, 5) << 0);
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 45:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRC_NOR0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeCRBITRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 46:
    tmp = fieldFromInstruction(insn, 12, 8);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 47:
    tmp = fieldFromInstruction(insn, 12, 8);
    if (decodeCRBitMOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 48:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 49:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 12, 8);
    if (decodeCRBitMOperand(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 50:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 51:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 52:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 53:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 11, 5) << 5);
    tmp |= (fieldFromInstruction(insn, 16, 5) << 0);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 54:
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 11, 5) << 5);
    tmp |= (fieldFromInstruction(insn, 16, 5) << 0);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 55:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 56:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 57:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 58:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 59:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 60:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 61:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 62:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 63:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 64:
    tmp = fieldFromInstruction(insn, 21, 2);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 65:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 66:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 67:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 68:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePointerLikeRegClass1(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodePointerLikeRegClass0(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 69:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 70:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 71:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 72:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 73:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 74:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 1, 1) << 5);
    tmp |= (fieldFromInstruction(insn, 11, 5) << 0);
    if (decodeUImmOperand<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 75:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 21);
    if (decodeMemRIOperands(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 76:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 21);
    if (decodeMemRIOperands(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 77:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 0, 21);
    if (decodeMemRIOperands(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 78:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeG8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 2, 19);
    if (decodeMemRIXOperands(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 79:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 80:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 81:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 82:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 83:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 84:
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 0, 1) << 5);
    tmp |= (fieldFromInstruction(insn, 21, 5) << 0);
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 2, 1) << 5);
    tmp |= (fieldFromInstruction(insn, 16, 5) << 0);
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 1, 1) << 5);
    tmp |= (fieldFromInstruction(insn, 11, 5) << 0);
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 85:
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 0, 1) << 5);
    tmp |= (fieldFromInstruction(insn, 21, 5) << 0);
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 0, 1) << 5);
    tmp |= (fieldFromInstruction(insn, 21, 5) << 0);
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 2, 1) << 5);
    tmp |= (fieldFromInstruction(insn, 16, 5) << 0);
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 1, 1) << 5);
    tmp |= (fieldFromInstruction(insn, 11, 5) << 0);
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 86:
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 0, 1) << 5);
    tmp |= (fieldFromInstruction(insn, 21, 5) << 0);
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 2, 1) << 5);
    tmp |= (fieldFromInstruction(insn, 16, 5) << 0);
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 1, 1) << 5);
    tmp |= (fieldFromInstruction(insn, 11, 5) << 0);
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 87:
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 0, 1) << 5);
    tmp |= (fieldFromInstruction(insn, 21, 5) << 0);
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 0, 1) << 5);
    tmp |= (fieldFromInstruction(insn, 21, 5) << 0);
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 2, 1) << 5);
    tmp |= (fieldFromInstruction(insn, 16, 5) << 0);
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 1, 1) << 5);
    tmp |= (fieldFromInstruction(insn, 11, 5) << 0);
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 88:
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 0, 1) << 5);
    tmp |= (fieldFromInstruction(insn, 21, 5) << 0);
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 2, 1) << 5);
    tmp |= (fieldFromInstruction(insn, 16, 5) << 0);
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 1, 1) << 5);
    tmp |= (fieldFromInstruction(insn, 11, 5) << 0);
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 8, 2);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 89:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 2, 1) << 5);
    tmp |= (fieldFromInstruction(insn, 16, 5) << 0);
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 1, 1) << 5);
    tmp |= (fieldFromInstruction(insn, 11, 5) << 0);
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 90:
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 0, 1) << 5);
    tmp |= (fieldFromInstruction(insn, 21, 5) << 0);
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 1, 1) << 5);
    tmp |= (fieldFromInstruction(insn, 11, 5) << 0);
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 2);
    MI.addOperand(MCOperand::CreateImm(tmp));
    return S;
  case 91:
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 0, 1) << 5);
    tmp |= (fieldFromInstruction(insn, 21, 5) << 0);
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 1, 1) << 5);
    tmp |= (fieldFromInstruction(insn, 11, 5) << 0);
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 92:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 1, 1) << 5);
    tmp |= (fieldFromInstruction(insn, 11, 5) << 0);
    if (DecodeVSFRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 93:
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 0, 1) << 5);
    tmp |= (fieldFromInstruction(insn, 21, 5) << 0);
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 1, 1) << 5);
    tmp |= (fieldFromInstruction(insn, 11, 5) << 0);
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 94:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 1, 1) << 5);
    tmp |= (fieldFromInstruction(insn, 11, 5) << 0);
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 95:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 2, 1) << 5);
    tmp |= (fieldFromInstruction(insn, 16, 5) << 0);
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 1, 1) << 5);
    tmp |= (fieldFromInstruction(insn, 11, 5) << 0);
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 96:
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 0, 1) << 5);
    tmp |= (fieldFromInstruction(insn, 21, 5) << 0);
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 2, 1) << 5);
    tmp |= (fieldFromInstruction(insn, 16, 5) << 0);
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 1, 1) << 5);
    tmp |= (fieldFromInstruction(insn, 11, 5) << 0);
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = 0;
    tmp |= (fieldFromInstruction(insn, 3, 1) << 5);
    tmp |= (fieldFromInstruction(insn, 6, 5) << 0);
    if (DecodeVSRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 97:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeCRRCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 98:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (decodeUImmOperand<5>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 99:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 100:
    tmp = fieldFromInstruction(insn, 17, 8);
    MI.addOperand(MCOperand::CreateImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 101:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 102:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 103:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF4RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 104:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  case 105:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeF8RCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) return MCDisassembler::Fail;
    return S;
  }
}

template<typename InsnType>
static DecodeStatus decodeInstruction(const uint8_t DecodeTable[], MCInst &MI,
                                      InsnType insn, uint64_t Address,
                                      const void *DisAsm,
                                      const MCSubtargetInfo &STI) {
  uint64_t Bits = STI.getFeatureBits();

  const uint8_t *Ptr = DecodeTable;
  uint32_t CurFieldValue = 0;
  DecodeStatus S = MCDisassembler::Success;
  for (;;) {
    ptrdiff_t Loc = Ptr - DecodeTable;
    switch (*Ptr) {
    default:
      errs() << Loc << ": Unexpected decode table opcode!\n";
      return MCDisassembler::Fail;
    case MCD::OPC_ExtractField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      ++Ptr;
      CurFieldValue = fieldFromInstruction(insn, Start, Len);
      DEBUG(dbgs() << Loc << ": OPC_ExtractField(" << Start << ", "
                   << Len << "): " << CurFieldValue << "\n");
      break;
    }
    case MCD::OPC_FilterValue: {
      // Decode the field value.
      unsigned Len;
      InsnType Val = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // Perform the filter operation.
      if (Val != CurFieldValue)
        Ptr += NumToSkip;
      DEBUG(dbgs() << Loc << ": OPC_FilterValue(" << Val << ", " << NumToSkip
                   << "): " << ((Val != CurFieldValue) ? "FAIL:" : "PASS:")
                   << " continuing at " << (Ptr - DecodeTable) << "\n");

      break;
    }
    case MCD::OPC_CheckField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      InsnType FieldValue = fieldFromInstruction(insn, Start, Len);
      // Decode the field value.
      uint32_t ExpectedValue = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // If the actual and expected values don't match, skip.
      if (ExpectedValue != FieldValue)
        Ptr += NumToSkip;
      DEBUG(dbgs() << Loc << ": OPC_CheckField(" << Start << ", "
                   << Len << ", " << ExpectedValue << ", " << NumToSkip
                   << "): FieldValue = " << FieldValue << ", ExpectedValue = "
                   << ExpectedValue << ": "
                   << ((ExpectedValue == FieldValue) ? "PASS\n" : "FAIL\n"));
      break;
    }
    case MCD::OPC_CheckPredicate: {
      unsigned Len;
      // Decode the Predicate Index value.
      unsigned PIdx = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;
      // Check the predicate.
      bool Pred;
      if (!(Pred = checkDecoderPredicate(PIdx, Bits)))
        Ptr += NumToSkip;
      (void)Pred;
      DEBUG(dbgs() << Loc << ": OPC_CheckPredicate(" << PIdx << "): "
            << (Pred ? "PASS\n" : "FAIL\n"));

      break;
    }
    case MCD::OPC_Decode: {
      unsigned Len;
      // Decode the Opcode value.
      unsigned Opc = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      unsigned DecodeIdx = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      DEBUG(dbgs() << Loc << ": OPC_Decode: opcode " << Opc
                   << ", using decoder " << DecodeIdx << "\n" );
      DEBUG(dbgs() << "----- DECODE SUCCESSFUL -----\n");

      MI.setOpcode(Opc);
      return decodeToMCInst(S, DecodeIdx, insn, MI, Address, DisAsm);
    }
    case MCD::OPC_SoftFail: {
      // Decode the mask values.
      unsigned Len;
      InsnType PositiveMask = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      InsnType NegativeMask = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      bool Fail = (insn & PositiveMask) || (~insn & NegativeMask);
      if (Fail)
        S = MCDisassembler::SoftFail;
      DEBUG(dbgs() << Loc << ": OPC_SoftFail: " << (Fail ? "FAIL\n":"PASS\n"));
      break;
    }
    case MCD::OPC_Fail: {
      DEBUG(dbgs() << Loc << ": OPC_Fail\n");
      return MCDisassembler::Fail;
    }
    }
  }
  llvm_unreachable("bogosity detected in disassembler state machine!");
}


} // End llvm namespace
