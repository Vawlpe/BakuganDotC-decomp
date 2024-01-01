#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08807d18(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [64];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined (*pauVar11) [64];
  int iVar12;
  float *pfVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 in_V7C;
  
  iVar10 = *(int *)(param_1 + 0x2c);
  if (iVar10 < 2) {
    if (-1 < iVar10) {
      if (iVar10 < 1) {
        pfVar13 = (float *)(*(int *)(param_1 + 0x98) + 0x20);
        *pfVar13 = *pfVar13 - 12.0;
        FUN_08805ec4(param_1);
        if (*(float *)(*(int *)(param_1 + 0x98) + 0x20) <= 0.0) {
          FUN_08805408(param_1,0,1);
          *(undefined4 *)(param_1 + 0x2c) = 1;
        }
      }
      else {
        pfVar13 = (float *)(*(int *)(param_1 + 0x98) + 0x34);
        *pfVar13 = *pfVar13 - 0.09424778;
        iVar10 = *(int *)(param_1 + 0xac);
        uVar6 = *(undefined4 *)(iVar10 + 0x30);
        uVar7 = *(undefined4 *)(iVar10 + 0x34);
        uVar8 = *(undefined4 *)(iVar10 + 0x38);
        uVar9 = *(undefined4 *)(iVar10 + 0x3c);
        pauVar11 = *(undefined (**) [64])(param_1 + 0xac);
        uVar17 = vmul_s(0x3dc104fb,in_V7C);
        auVar4 = vrot_q(uVar17,1,0,3,0);
        auVar1 = vidt_q();
        auVar5 = vrot_q(uVar17,2,0,1,0);
        auVar2 = vidt_q();
        auVar3._48_16_ = auVar2;
        auVar3._44_4_ = auVar5._12_4_;
        auVar3._40_4_ = auVar5._8_4_;
        auVar3._36_4_ = auVar5._4_4_;
        auVar3._32_4_ = auVar5._0_4_;
        auVar3._28_4_ = auVar1._12_4_;
        auVar3._24_4_ = auVar1._8_4_;
        auVar3._20_4_ = auVar1._4_4_;
        auVar3._16_4_ = auVar1._0_4_;
        auVar3._12_4_ = auVar4._12_4_;
        auVar3._8_4_ = auVar4._8_4_;
        auVar3._4_4_ = auVar4._4_4_;
        auVar3._0_4_ = auVar4._0_4_;
        auVar3 = vmmul_q(*pauVar11,auVar3);
        *(int *)*pauVar11 = auVar3._0_4_;
        *(int *)(*pauVar11 + 4) = auVar3._4_4_;
        *(int *)(*pauVar11 + 8) = auVar3._8_4_;
        *(int *)(*pauVar11 + 0xc) = auVar3._12_4_;
        *(int *)(*pauVar11 + 0x10) = auVar3._16_4_;
        *(int *)(*pauVar11 + 0x14) = auVar3._20_4_;
        *(int *)(*pauVar11 + 0x18) = auVar3._24_4_;
        *(int *)(*pauVar11 + 0x1c) = auVar3._28_4_;
        *(int *)(*pauVar11 + 0x20) = auVar3._32_4_;
        *(int *)(*pauVar11 + 0x24) = auVar3._36_4_;
        *(int *)(*pauVar11 + 0x28) = auVar3._40_4_;
        *(int *)(*pauVar11 + 0x2c) = auVar3._44_4_;
        *(int *)(*pauVar11 + 0x30) = auVar3._48_4_;
        *(int *)(*pauVar11 + 0x34) = auVar3._52_4_;
        *(int *)(*pauVar11 + 0x38) = auVar3._56_4_;
        *(int *)(*pauVar11 + 0x3c) = auVar3._60_4_;
        iVar10 = *(int *)(param_1 + 0xac);
        *(undefined4 *)(iVar10 + 0x30) = uVar6;
        *(undefined4 *)(iVar10 + 0x34) = uVar7;
        *(undefined4 *)(iVar10 + 0x38) = uVar8;
        *(undefined4 *)(iVar10 + 0x3c) = uVar9;
        if (*(float *)(*(int *)(param_1 + 0x98) + 0x34) <= 1.570796) {
          iVar10 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
          *(uint *)(iVar10 + 0xd0) = *(uint *)(iVar10 + 0xd0) | 1;
          iVar10 = *(int *)(*(int *)(param_1 + 0x1c) + 0x54);
          *(uint *)(iVar10 + 0xd0) = *(uint *)(iVar10 + 0xd0) | 1;
          iVar10 = *(int *)(*(int *)(param_1 + 0x1c) + 0x6c);
          *(uint *)(iVar10 + 0xd0) = *(uint *)(iVar10 + 0xd0) | 1;
          iVar10 = *(int *)(*(int *)(param_1 + 0x1c) + 0x70);
          *(uint *)(iVar10 + 0xd0) = *(uint *)(iVar10 + 0xd0) | 1;
          iVar10 = *(int *)(*(int *)(param_1 + 0x1c) + 0x80);
          *(uint *)(iVar10 + 0xd0) = *(uint *)(iVar10 + 0xd0) | 1;
          iVar10 = *(int *)(*(int *)(param_1 + 0x1c) + 0x84);
          *(uint *)(iVar10 + 0xd0) = *(uint *)(iVar10 + 0xd0) | 1;
          *(undefined4 *)(param_1 + 0x2c) = 2;
        }
      }
    }
  }
  else if (iVar10 < 3) {
    iVar10 = *(int *)(param_1 + 0x8c) + 1;
    *(int *)(param_1 + 0x8c) = iVar10;
    fVar15 = (float)iVar10 * 0.1666667;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x84) + 0xbc) = fVar15;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x80) + 0xbc) = fVar15;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x70) + 0xbc) = fVar15;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x6c) + 0xbc) = fVar15;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x54) + 0xbc) = fVar15;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 0xbc) = fVar15;
    iVar10 = 2;
    if (5 < *(int *)(param_1 + 0x8c)) {
      iVar12 = 8;
      do {
        iVar10 = iVar10 + 1;
        iVar14 = *(int *)(*(int *)(param_1 + 0x1c) + iVar12);
        *(uint *)(iVar14 + 0xd0) = *(uint *)(iVar14 + 0xd0) | 1;
        iVar12 = iVar12 + 4;
      } while (iVar10 < 10);
      iVar10 = *(int *)(*(int *)(param_1 + 0x1c) + 0x30);
      *(uint *)(iVar10 + 0xd0) = *(uint *)(iVar10 + 0xd0) | 1;
      iVar10 = *(int *)(*(int *)(param_1 + 0x1c) + 0x34);
      *(uint *)(iVar10 + 0xd0) = *(uint *)(iVar10 + 0xd0) | 1;
      iVar10 = *(int *)(*(int *)(param_1 + 0x1c) + 0x38);
      *(uint *)(iVar10 + 0xd0) = *(uint *)(iVar10 + 0xd0) | 1;
      iVar10 = *(int *)(*(int *)(param_1 + 0x1c) + 0x3c);
      *(uint *)(iVar10 + 0xd0) = *(uint *)(iVar10 + 0xd0) | 1;
      iVar10 = *(int *)(*(int *)(param_1 + 0x1c) + 0x48);
      *(uint *)(iVar10 + 0xd0) = *(uint *)(iVar10 + 0xd0) | 1;
      iVar10 = *(int *)(*(int *)(param_1 + 0x1c) + 0x58);
      *(uint *)(iVar10 + 0xd0) = *(uint *)(iVar10 + 0xd0) | 1;
      iVar10 = *(int *)(*(int *)(param_1 + 0x1c) + 0x5c);
      *(uint *)(iVar10 + 0xd0) = *(uint *)(iVar10 + 0xd0) | 1;
      iVar10 = *(int *)(*(int *)(param_1 + 0x1c) + 0x60);
      *(uint *)(iVar10 + 0xd0) = *(uint *)(iVar10 + 0xd0) | 1;
      iVar10 = *(int *)(*(int *)(param_1 + 0x1c) + 0x80);
      *(uint *)(iVar10 + 0xd0) = *(uint *)(iVar10 + 0xd0) | 1;
      iVar12 = 0x94;
      iVar14 = *(int *)(*(int *)(param_1 + 0x1c) + 0x84);
      iVar10 = 0x25;
      *(uint *)(iVar14 + 0xd0) = *(uint *)(iVar14 + 0xd0) | 1;
      do {
        iVar10 = iVar10 + 1;
        iVar14 = *(int *)(*(int *)(param_1 + 0x1c) + iVar12);
        *(uint *)(iVar14 + 0xd0) = *(uint *)(iVar14 + 0xd0) | 1;
        iVar12 = iVar12 + 4;
      } while (iVar10 < 0x2b);
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 3;
    }
  }
  else if (iVar10 < 4) {
    iVar10 = *(int *)(param_1 + 0x8c) + 1;
    *(int *)(param_1 + 0x8c) = iVar10;
    iVar12 = 2;
    iVar14 = 8;
    fVar15 = (float)iVar10 * 0.1666667;
    do {
      iVar12 = iVar12 + 1;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar14) + 0xbc) = fVar15;
      iVar14 = iVar14 + 4;
    } while (iVar12 < 8);
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x60) + 0xbc) = fVar15;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x5c) + 0xbc) = fVar15;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x58) + 0xbc) = fVar15;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x48) + 0xbc) = fVar15;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x3c) + 0xbc) = fVar15;
    fVar16 = fVar15 * 0.5;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x38) + 0xbc) = fVar15;
    iVar10 = *(int *)(*(int *)(param_1 + 0x1c) + 0x34);
    *(float *)(iVar10 + 0xb0) = fVar16;
    *(float *)(iVar10 + 0xb4) = fVar16;
    *(float *)(iVar10 + 0xb8) = fVar16;
    *(undefined4 *)(iVar10 + 0xbc) = 0x3f800000;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x24) + 0xbc) = fVar16;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x20) + 0xbc) = fVar16;
    iVar10 = 0x25;
    iVar12 = 0x94;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x30) + 0xbc) = fVar16;
    do {
      iVar10 = iVar10 + 1;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar12) + 0xbc) = fVar15;
      iVar12 = iVar12 + 4;
    } while (iVar10 < 0x2b);
    if (5 < *(int *)(param_1 + 0x8c)) {
      iVar10 = *(int *)(*(int *)(param_1 + 0x1c) + 0x28);
      *(uint *)(iVar10 + 0xd0) = *(uint *)(iVar10 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x28) + 0xbc) = 0x3f800000;
      iVar10 = *(int *)(*(int *)(param_1 + 0x1c) + 0x2c);
      *(uint *)(iVar10 + 0xd0) = *(uint *)(iVar10 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x50) + 0xbc) = 0x3f800000;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x4c) + 0xbc) = 0x3f800000;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x2c) + 0xbc) = 0x3f800000;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x40) + 0xbc) = 0x3f800000;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x44) + 0xbc) = 0x3f800000;
      iVar10 = *(int *)(*(int *)(param_1 + 0x1c) + 100);
      *(uint *)(iVar10 + 0xd0) = *(uint *)(iVar10 + 0xd0) | 1;
      uVar8 = DAT_08aac82c;
      uVar7 = DAT_08aac828;
      uVar6 = DAT_08aac824;
      iVar10 = *(int *)(*(int *)(param_1 + 0x1c) + 100);
      *(undefined4 *)(iVar10 + 0xb0) = DAT_08aac820;
      *(undefined4 *)(iVar10 + 0xb4) = uVar6;
      *(undefined4 *)(iVar10 + 0xb8) = uVar7;
      *(undefined4 *)(iVar10 + 0xbc) = uVar8;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x68) + 0xbc) = 0x3f800000;
      FUN_08805ab4(param_1);
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x28) = 3;
    }
  }
  return;
}

