#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Removing unreachable block (ram,0x0897fcf0)
// WARNING: Removing unreachable block (ram,0x0897fa50)

bool FUN_0897f944(int param_1,char param_2)

{
  byte bVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [64];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [64];
  undefined auVar8 [64];
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  char cVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  undefined4 uVar21;
  uint uVar22;
  undefined (*pauVar23) [64];
  float fVar24;
  undefined4 extraout_f0;
  undefined4 extraout_f0_00;
  undefined4 extraout_f0_01;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 in_V7C;
  undefined8 uVar32;
  
  uVar25 = 0;
  fVar24 = 0.0;
  uVar26 = 0;
  uVar17 = 0;
  if (*(char *)(param_1 + 0xee3) == '\0') {
    fVar30 = 16.0;
  }
  else {
    fVar30 = 8.0;
  }
  iVar19 = 0;
  cVar13 = '\0';
  iVar18 = param_1;
  do {
    if (*(int *)(iVar18 + 0x12a4) != 0) {
      cVar13 = cVar13 + '\x01';
    }
    iVar19 = iVar19 + 1;
    iVar18 = iVar18 + 4;
  } while (iVar19 < 7);
  if (cVar13 != '\0') {
    fVar14 = 0.2;
    fVar15 = 0.09;
    uVar21 = 0x4048f5c3;
    fVar16 = 0.1;
    fVar29 = 1.0;
    if (param_2 != '\0') {
      uVar20 = 0;
      iVar18 = param_1;
      iVar19 = param_1;
      do {
        if (*(int *)(iVar19 + 0x12a4) == 0) {
          uVar20 = uVar20 + 1;
        }
        else {
          bVar1 = *(byte *)(param_1 + 0x1140);
          fVar27 = fVar14;
          if (((bVar1 == 0) || (fVar27 = fVar15, bVar1 < 2)) || (fVar27 = fVar16, bVar1 < 3)) {
            fVar28 = *(float *)(param_1 + 0x1154);
            fVar24 = fVar27;
          }
          else {
            fVar28 = *(float *)(param_1 + 0x1154);
          }
          fVar28 = fVar28 + fVar29 / fVar30;
          *(float *)(param_1 + 0x1154) = fVar28;
          *(float *)(*(int *)(iVar19 + 0x12a4) + 0x6c) =
               *(float *)(param_1 + 0x1158) - fVar28 * fVar28;
          iVar12 = *(int *)(*(int *)(iVar19 + 0x12a4) + 0x130);
          uVar26 = vmul_s(uVar21,in_V7C);
          auVar5 = vrot_q(uVar26,1,0,3,0);
          auVar2 = vidt_q();
          auVar6 = vrot_q(uVar26,2,0,1,0);
          auVar3 = vidt_q();
          *(int *)(iVar12 + 0x80) = auVar5._0_4_;
          *(int *)(iVar12 + 0x84) = auVar5._4_4_;
          *(int *)(iVar12 + 0x88) = auVar5._8_4_;
          *(int *)(iVar12 + 0x8c) = auVar5._12_4_;
          *(int *)(iVar12 + 0x90) = auVar2._0_4_;
          *(int *)(iVar12 + 0x94) = auVar2._4_4_;
          *(int *)(iVar12 + 0x98) = auVar2._8_4_;
          *(int *)(iVar12 + 0x9c) = auVar2._12_4_;
          *(int *)(iVar12 + 0xa0) = auVar6._0_4_;
          *(int *)(iVar12 + 0xa4) = auVar6._4_4_;
          *(int *)(iVar12 + 0xa8) = auVar6._8_4_;
          *(int *)(iVar12 + 0xac) = auVar6._12_4_;
          *(int *)(iVar12 + 0xb0) = auVar3._0_4_;
          *(int *)(iVar12 + 0xb4) = auVar3._4_4_;
          *(int *)(iVar12 + 0xb8) = auVar3._8_4_;
          *(int *)(iVar12 + 0xbc) = auVar3._12_4_;
          pauVar23 = (undefined (*) [64])(*(int *)(*(int *)(iVar19 + 0x12a4) + 0x130) + 0x80);
          uVar32 = FUN_0897b2b4(iVar18,uVar20 & 0xff);
          puVar9 = (undefined4 *)((ulonglong)uVar32 >> 0x20);
          param_1 = (int)uVar32;
          uVar26 = vmul_s(extraout_f0_01,in_V7C);
          auVar2 = vidt_q();
          auVar5 = vrot_q(uVar26,0,1,2,0);
          auVar6 = vrot_q(uVar26,0,3,1,0);
          auVar3 = vidt_q();
          auVar8._48_16_ = auVar3;
          auVar8._44_4_ = auVar6._12_4_;
          auVar8._40_4_ = auVar6._8_4_;
          auVar8._36_4_ = auVar6._4_4_;
          auVar8._32_4_ = auVar6._0_4_;
          auVar8._28_4_ = auVar5._12_4_;
          auVar8._24_4_ = auVar5._8_4_;
          auVar8._20_4_ = auVar5._4_4_;
          auVar8._16_4_ = auVar5._0_4_;
          auVar8._12_4_ = auVar2._12_4_;
          auVar8._8_4_ = auVar2._8_4_;
          auVar8._4_4_ = auVar2._4_4_;
          auVar8._0_4_ = auVar2._0_4_;
          auVar4 = vmmul_q(*pauVar23,auVar8);
          *(int *)*pauVar23 = auVar4._0_4_;
          *(int *)(*pauVar23 + 4) = auVar4._4_4_;
          *(int *)(*pauVar23 + 8) = auVar4._8_4_;
          *(int *)(*pauVar23 + 0xc) = auVar4._12_4_;
          *(int *)(*pauVar23 + 0x10) = auVar4._16_4_;
          *(int *)(*pauVar23 + 0x14) = auVar4._20_4_;
          *(int *)(*pauVar23 + 0x18) = auVar4._24_4_;
          *(int *)(*pauVar23 + 0x1c) = auVar4._28_4_;
          *(int *)(*pauVar23 + 0x20) = auVar4._32_4_;
          *(int *)(*pauVar23 + 0x24) = auVar4._36_4_;
          *(int *)(*pauVar23 + 0x28) = auVar4._40_4_;
          *(int *)(*pauVar23 + 0x2c) = auVar4._44_4_;
          *(int *)(*pauVar23 + 0x30) = auVar4._48_4_;
          *(int *)(*pauVar23 + 0x34) = auVar4._52_4_;
          *(int *)(*pauVar23 + 0x38) = auVar4._56_4_;
          *(int *)(*pauVar23 + 0x3c) = auVar4._60_4_;
          *(float *)(iVar19 + 0x137c) =
               *(float *)(param_1 + 0x115c) +
               *(float *)(param_1 + 0x1154) * *(float *)(param_1 + 0x1154) * fVar24;
          iVar12 = *(int *)(*(int *)(iVar19 + 0x12a4) + 0x130);
          auVar2 = vscl_q(*(undefined (*) [16])(iVar12 + 0x80),*puVar9);
          auVar3 = vscl_q(*(undefined (*) [16])(iVar12 + 0x90),puVar9[1]);
          auVar5 = vscl_q(*(undefined (*) [16])(iVar12 + 0xa0),puVar9[2]);
          *(int *)*(undefined (*) [16])(iVar12 + 0x80) = auVar2._0_4_;
          *(int *)(iVar12 + 0x84) = auVar2._4_4_;
          *(int *)(iVar12 + 0x88) = auVar2._8_4_;
          *(int *)(iVar12 + 0x8c) = auVar2._12_4_;
          *(int *)(iVar12 + 0x90) = auVar3._0_4_;
          *(int *)(iVar12 + 0x94) = auVar3._4_4_;
          *(int *)(iVar12 + 0x98) = auVar3._8_4_;
          *(int *)(iVar12 + 0x9c) = auVar3._12_4_;
          *(int *)(iVar12 + 0xa0) = auVar5._0_4_;
          *(int *)(iVar12 + 0xa4) = auVar5._4_4_;
          *(int *)(iVar12 + 0xa8) = auVar5._8_4_;
          *(int *)(iVar12 + 0xac) = auVar5._12_4_;
          if (fVar29 <= *(float *)(param_1 + 0x1154)) {
            *(undefined4 *)(*(int *)(iVar19 + 0x12a4) + 0x6c) = uVar25;
            uVar17 = uVar17 + 1 & 0xff;
            uVar20 = uVar20 + 1;
          }
          else {
            uVar20 = uVar20 + 1;
          }
        }
        iVar19 = iVar19 + 4;
        param_1 = param_1 + 0x28;
      } while ((int)uVar20 < 7);
      return uVar17 != 0;
    }
    uVar25 = 0x3ecccccd;
    uVar20 = 0;
    uVar10 = 0x3e3851ec;
    uVar11 = 0x3e4ccccd;
    iVar18 = param_1;
    iVar19 = param_1;
    do {
      if (*(int *)(iVar19 + 0x12a4) == 0) {
        uVar20 = uVar20 + 1;
      }
      else {
        bVar1 = *(byte *)(param_1 + 0x1140);
        uVar22 = uVar20 & 0xff;
        fVar27 = fVar14;
        uVar31 = uVar25;
        if (((bVar1 == 0) || (fVar27 = fVar15, uVar31 = uVar10, bVar1 < 2)) ||
           (fVar27 = fVar16, uVar31 = uVar11, bVar1 < 3)) {
          fVar28 = *(float *)(param_1 + 0x1154);
          fVar24 = fVar27;
          uVar26 = uVar31;
        }
        else {
          fVar28 = *(float *)(param_1 + 0x1154);
        }
        fVar28 = fVar28 + fVar29 / fVar30;
        *(float *)(param_1 + 0x1154) = fVar28;
        fVar28 = fVar28 - fVar29;
        *(float *)(*(int *)(iVar19 + 0x12a4) + 0x6c) =
             *(float *)(param_1 + 0x1158) + (fVar29 - fVar28 * fVar28);
        iVar12 = *(int *)(*(int *)(iVar19 + 0x12a4) + 0x130);
        uVar31 = vmul_s(uVar21,in_V7C);
        auVar5 = vrot_q(uVar31,1,0,3,0);
        auVar2 = vidt_q();
        auVar6 = vrot_q(uVar31,2,0,1,0);
        auVar3 = vidt_q();
        *(int *)(iVar12 + 0x80) = auVar5._0_4_;
        *(int *)(iVar12 + 0x84) = auVar5._4_4_;
        *(int *)(iVar12 + 0x88) = auVar5._8_4_;
        *(int *)(iVar12 + 0x8c) = auVar5._12_4_;
        *(int *)(iVar12 + 0x90) = auVar2._0_4_;
        *(int *)(iVar12 + 0x94) = auVar2._4_4_;
        *(int *)(iVar12 + 0x98) = auVar2._8_4_;
        *(int *)(iVar12 + 0x9c) = auVar2._12_4_;
        *(int *)(iVar12 + 0xa0) = auVar6._0_4_;
        *(int *)(iVar12 + 0xa4) = auVar6._4_4_;
        *(int *)(iVar12 + 0xa8) = auVar6._8_4_;
        *(int *)(iVar12 + 0xac) = auVar6._12_4_;
        *(int *)(iVar12 + 0xb0) = auVar3._0_4_;
        *(int *)(iVar12 + 0xb4) = auVar3._4_4_;
        *(int *)(iVar12 + 0xb8) = auVar3._8_4_;
        *(int *)(iVar12 + 0xbc) = auVar3._12_4_;
        pauVar23 = (undefined (*) [64])(*(int *)(*(int *)(iVar19 + 0x12a4) + 0x130) + 0x80);
        param_1 = FUN_0897b2b4(iVar18,uVar22);
        uVar31 = vmul_s(extraout_f0,in_V7C);
        auVar2 = vidt_q();
        auVar5 = vrot_q(uVar31,0,1,2,0);
        auVar6 = vrot_q(uVar31,0,3,1,0);
        auVar3 = vidt_q();
        auVar4._48_16_ = auVar3;
        auVar4._44_4_ = auVar6._12_4_;
        auVar4._40_4_ = auVar6._8_4_;
        auVar4._36_4_ = auVar6._4_4_;
        auVar4._32_4_ = auVar6._0_4_;
        auVar4._28_4_ = auVar5._12_4_;
        auVar4._24_4_ = auVar5._8_4_;
        auVar4._20_4_ = auVar5._4_4_;
        auVar4._16_4_ = auVar5._0_4_;
        auVar4._12_4_ = auVar2._12_4_;
        auVar4._8_4_ = auVar2._8_4_;
        auVar4._4_4_ = auVar2._4_4_;
        auVar4._0_4_ = auVar2._0_4_;
        auVar4 = vmmul_q(*pauVar23,auVar4);
        *(int *)*pauVar23 = auVar4._0_4_;
        *(int *)(*pauVar23 + 4) = auVar4._4_4_;
        *(int *)(*pauVar23 + 8) = auVar4._8_4_;
        *(int *)(*pauVar23 + 0xc) = auVar4._12_4_;
        *(int *)(*pauVar23 + 0x10) = auVar4._16_4_;
        *(int *)(*pauVar23 + 0x14) = auVar4._20_4_;
        *(int *)(*pauVar23 + 0x18) = auVar4._24_4_;
        *(int *)(*pauVar23 + 0x1c) = auVar4._28_4_;
        *(int *)(*pauVar23 + 0x20) = auVar4._32_4_;
        *(int *)(*pauVar23 + 0x24) = auVar4._36_4_;
        *(int *)(*pauVar23 + 0x28) = auVar4._40_4_;
        *(int *)(*pauVar23 + 0x2c) = auVar4._44_4_;
        *(int *)(*pauVar23 + 0x30) = auVar4._48_4_;
        *(int *)(*pauVar23 + 0x34) = auVar4._52_4_;
        *(int *)(*pauVar23 + 0x38) = auVar4._56_4_;
        *(int *)(*pauVar23 + 0x3c) = auVar4._60_4_;
        fVar27 = *(float *)(param_1 + 0x1154) - fVar29;
        fVar27 = *(float *)(param_1 + 0x115c) - (fVar29 - fVar27 * fVar27) * fVar24;
        *(float *)(iVar19 + 0x137c) = fVar27;
        iVar12 = *(int *)(*(int *)(iVar19 + 0x12a4) + 0x130);
        auVar2 = vscl_q(*(undefined (*) [16])(iVar12 + 0x80),fVar27);
        auVar3 = vscl_q(*(undefined (*) [16])(iVar12 + 0x90),fVar27);
        auVar5 = vscl_q(*(undefined (*) [16])(iVar12 + 0xa0),fVar27);
        *(int *)*(undefined (*) [16])(iVar12 + 0x80) = auVar2._0_4_;
        *(int *)(iVar12 + 0x84) = auVar2._4_4_;
        *(int *)(iVar12 + 0x88) = auVar2._8_4_;
        *(int *)(iVar12 + 0x8c) = auVar2._12_4_;
        *(int *)(iVar12 + 0x90) = auVar3._0_4_;
        *(int *)(iVar12 + 0x94) = auVar3._4_4_;
        *(int *)(iVar12 + 0x98) = auVar3._8_4_;
        *(int *)(iVar12 + 0x9c) = auVar3._12_4_;
        *(int *)(iVar12 + 0xa0) = auVar5._0_4_;
        *(int *)(iVar12 + 0xa4) = auVar5._4_4_;
        *(int *)(iVar12 + 0xa8) = auVar5._8_4_;
        *(int *)(iVar12 + 0xac) = auVar5._12_4_;
        if (fVar29 <= *(float *)(param_1 + 0x1154)) {
          *(float *)(*(int *)(iVar19 + 0x12a4) + 0x6c) = fVar29;
          iVar12 = *(int *)(*(int *)(iVar19 + 0x12a4) + 0x130);
          uVar31 = vmul_s(uVar21,in_V7C);
          auVar5 = vrot_q(uVar31,1,0,3,0);
          auVar2 = vidt_q();
          auVar6 = vrot_q(uVar31,2,0,1,0);
          auVar3 = vidt_q();
          *(int *)(iVar12 + 0x80) = auVar5._0_4_;
          *(int *)(iVar12 + 0x84) = auVar5._4_4_;
          *(int *)(iVar12 + 0x88) = auVar5._8_4_;
          *(int *)(iVar12 + 0x8c) = auVar5._12_4_;
          *(int *)(iVar12 + 0x90) = auVar2._0_4_;
          *(int *)(iVar12 + 0x94) = auVar2._4_4_;
          *(int *)(iVar12 + 0x98) = auVar2._8_4_;
          *(int *)(iVar12 + 0x9c) = auVar2._12_4_;
          *(int *)(iVar12 + 0xa0) = auVar6._0_4_;
          *(int *)(iVar12 + 0xa4) = auVar6._4_4_;
          *(int *)(iVar12 + 0xa8) = auVar6._8_4_;
          *(int *)(iVar12 + 0xac) = auVar6._12_4_;
          *(int *)(iVar12 + 0xb0) = auVar3._0_4_;
          *(int *)(iVar12 + 0xb4) = auVar3._4_4_;
          *(int *)(iVar12 + 0xb8) = auVar3._8_4_;
          *(int *)(iVar12 + 0xbc) = auVar3._12_4_;
          pauVar23 = (undefined (*) [64])(*(int *)(*(int *)(iVar19 + 0x12a4) + 0x130) + 0x80);
          uVar32 = FUN_0897b2b4(iVar18,uVar22);
          puVar9 = (undefined4 *)((ulonglong)uVar32 >> 0x20);
          param_1 = (int)uVar32;
          uVar31 = vmul_s(extraout_f0_00,in_V7C);
          auVar2 = vidt_q();
          auVar5 = vrot_q(uVar31,0,1,2,0);
          auVar6 = vrot_q(uVar31,0,3,1,0);
          auVar3 = vidt_q();
          auVar7._48_16_ = auVar3;
          auVar7._44_4_ = auVar6._12_4_;
          auVar7._40_4_ = auVar6._8_4_;
          auVar7._36_4_ = auVar6._4_4_;
          auVar7._32_4_ = auVar6._0_4_;
          auVar7._28_4_ = auVar5._12_4_;
          auVar7._24_4_ = auVar5._8_4_;
          auVar7._20_4_ = auVar5._4_4_;
          auVar7._16_4_ = auVar5._0_4_;
          auVar7._12_4_ = auVar2._12_4_;
          auVar7._8_4_ = auVar2._8_4_;
          auVar7._4_4_ = auVar2._4_4_;
          auVar7._0_4_ = auVar2._0_4_;
          auVar4 = vmmul_q(*pauVar23,auVar7);
          *(int *)*pauVar23 = auVar4._0_4_;
          *(int *)(*pauVar23 + 4) = auVar4._4_4_;
          *(int *)(*pauVar23 + 8) = auVar4._8_4_;
          *(int *)(*pauVar23 + 0xc) = auVar4._12_4_;
          *(int *)(*pauVar23 + 0x10) = auVar4._16_4_;
          *(int *)(*pauVar23 + 0x14) = auVar4._20_4_;
          *(int *)(*pauVar23 + 0x18) = auVar4._24_4_;
          *(int *)(*pauVar23 + 0x1c) = auVar4._28_4_;
          *(int *)(*pauVar23 + 0x20) = auVar4._32_4_;
          *(int *)(*pauVar23 + 0x24) = auVar4._36_4_;
          *(int *)(*pauVar23 + 0x28) = auVar4._40_4_;
          *(int *)(*pauVar23 + 0x2c) = auVar4._44_4_;
          *(int *)(*pauVar23 + 0x30) = auVar4._48_4_;
          *(int *)(*pauVar23 + 0x34) = auVar4._52_4_;
          *(int *)(*pauVar23 + 0x38) = auVar4._56_4_;
          *(int *)(*pauVar23 + 0x3c) = auVar4._60_4_;
          *(undefined4 *)(iVar19 + 0x137c) = uVar26;
          iVar12 = *(int *)(*(int *)(iVar19 + 0x12a4) + 0x130);
          auVar2 = vscl_q(*(undefined (*) [16])(iVar12 + 0x80),*puVar9);
          auVar3 = vscl_q(*(undefined (*) [16])(iVar12 + 0x90),puVar9[1]);
          auVar5 = vscl_q(*(undefined (*) [16])(iVar12 + 0xa0),puVar9[2]);
          *(int *)*(undefined (*) [16])(iVar12 + 0x80) = auVar2._0_4_;
          *(int *)(iVar12 + 0x84) = auVar2._4_4_;
          *(int *)(iVar12 + 0x88) = auVar2._8_4_;
          *(int *)(iVar12 + 0x8c) = auVar2._12_4_;
          *(int *)(iVar12 + 0x90) = auVar3._0_4_;
          *(int *)(iVar12 + 0x94) = auVar3._4_4_;
          *(int *)(iVar12 + 0x98) = auVar3._8_4_;
          *(int *)(iVar12 + 0x9c) = auVar3._12_4_;
          *(int *)(iVar12 + 0xa0) = auVar5._0_4_;
          *(int *)(iVar12 + 0xa4) = auVar5._4_4_;
          *(int *)(iVar12 + 0xa8) = auVar5._8_4_;
          *(int *)(iVar12 + 0xac) = auVar5._12_4_;
          uVar17 = uVar17 + 1 & 0xff;
          uVar20 = uVar20 + 1;
        }
        else {
          uVar20 = uVar20 + 1;
        }
      }
      iVar19 = iVar19 + 4;
      param_1 = param_1 + 0x28;
    } while ((int)uVar20 < 7);
    return uVar17 != 0;
  }
  return true;
}

