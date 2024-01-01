#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Removing unreachable block (ram,0x089801d4)

void FUN_0897fe88(int param_1)

{
  byte bVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [64];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined (*pauVar17) [64];
  int iVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 in_V7C;
  
  FUN_089a5278();
  *(undefined4 *)(param_1 + 0xee8) = 0;
  if ((*(char *)(param_1 + 0xee4) < '\x01') && (-1 < *(char *)(param_1 + 0xee4))) {
    FUN_089a535c(param_1 + 0x164);
    iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0x18);
    *(uint *)(iVar9 + 0xd0) = *(uint *)(iVar9 + 0xd0) | 1;
    FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x18));
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x18));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 0xbc) = 0x3f800000;
    iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0x18);
    *(undefined4 *)(iVar9 + 0xcc) = 0x3f800000;
    *(undefined4 *)(iVar9 + 0xc0) = 0x3e99999a;
    *(undefined4 *)(iVar9 + 0xc4) = 0x3e99999a;
    *(undefined4 *)(iVar9 + 200) = 0x3e99999a;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 0x68) =
         *(undefined4 *)(param_1 + 0xba4);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 0x60) =
         *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0xee0) * 4) + 0x60)
    ;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 100) =
         *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0xee0) * 4) + 100);
    FUN_089a5794(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x18),
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x118),param_1 + 0xb64);
    iVar19 = 0;
    iVar18 = 0;
    iVar9 = param_1;
    do {
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar18));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar18) + 0x68) =
           *(undefined4 *)(iVar9 + 0xb8c);
      if (iVar19 == *(char *)(param_1 + 0xee0)) {
        iVar10 = *(int *)(*(int *)(param_1 + 0x1c) + iVar18);
        *(undefined4 *)(iVar10 + 0xc0) = 0x3e99999a;
        *(undefined4 *)(iVar10 + 0xc4) = 0x3e99999a;
        *(undefined4 *)(iVar10 + 200) = 0x3e99999a;
        *(undefined4 *)(iVar10 + 0xcc) = 0x3f800000;
        FUN_0897a48c(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar18),1);
      }
      else {
        iVar10 = *(int *)(*(int *)(param_1 + 0x1c) + iVar18);
        *(undefined4 *)(iVar10 + 0xc0) = 0;
        *(undefined4 *)(iVar10 + 0xc4) = 0;
        *(undefined4 *)(iVar10 + 200) = 0;
        *(undefined4 *)(iVar10 + 0xcc) = 0x3f800000;
        FUN_0897a48c(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar18),0);
      }
      iVar19 = iVar19 + 1;
      iVar18 = iVar18 + 4;
      iVar9 = iVar9 + 4;
    } while (iVar19 < 6);
    iVar19 = 0x1b;
    iVar9 = 0x6c;
    iVar18 = param_1 + 0x6c;
    do {
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar9));
      iVar19 = iVar19 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar9) + 0x68) =
           *(undefined4 *)(iVar18 + 0xb8c);
      iVar9 = iVar9 + 4;
      iVar18 = iVar18 + 4;
    } while (iVar19 < 0x21);
    uVar11 = 0x3ecccccd;
    uVar12 = 0x3e3851ec;
    fVar13 = 0.2;
    uVar15 = 0;
    fVar14 = 3.141593;
    fVar21 = 0.5;
    uVar16 = 0x4048f5c3;
    iVar9 = param_1;
    iVar18 = param_1;
    do {
      if (*(int *)(iVar9 + 0x12a4) != 0) {
        iVar19 = *(int *)(*(int *)(iVar9 + 0x12a4) + 0x130);
        uVar23 = vmul_s(uVar16,in_V7C);
        auVar5 = vrot_q(uVar23,1,0,3,0);
        auVar2 = vidt_q();
        auVar6 = vrot_q(uVar23,2,0,1,0);
        auVar3 = vidt_q();
        *(int *)(iVar19 + 0x80) = auVar5._0_4_;
        *(int *)(iVar19 + 0x84) = auVar5._4_4_;
        *(int *)(iVar19 + 0x88) = auVar5._8_4_;
        *(int *)(iVar19 + 0x8c) = auVar5._12_4_;
        *(int *)(iVar19 + 0x90) = auVar2._0_4_;
        *(int *)(iVar19 + 0x94) = auVar2._4_4_;
        *(int *)(iVar19 + 0x98) = auVar2._8_4_;
        *(int *)(iVar19 + 0x9c) = auVar2._12_4_;
        *(int *)(iVar19 + 0xa0) = auVar6._0_4_;
        *(int *)(iVar19 + 0xa4) = auVar6._4_4_;
        *(int *)(iVar19 + 0xa8) = auVar6._8_4_;
        *(int *)(iVar19 + 0xac) = auVar6._12_4_;
        *(int *)(iVar19 + 0xb0) = auVar3._0_4_;
        *(int *)(iVar19 + 0xb4) = auVar3._4_4_;
        *(int *)(iVar19 + 0xb8) = auVar3._8_4_;
        *(int *)(iVar19 + 0xbc) = auVar3._12_4_;
        pauVar17 = (undefined (*) [64])(*(int *)(*(int *)(iVar9 + 0x12a4) + 0x130) + 0x80);
        uVar23 = FUN_0897b2b4(param_1,uVar15 & 0xff);
        uVar23 = vmul_s(uVar23,in_V7C);
        auVar2 = vidt_q();
        auVar5 = vrot_q(uVar23,0,1,2,0);
        auVar6 = vrot_q(uVar23,0,3,1,0);
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
        auVar4 = vmmul_q(*pauVar17,auVar4);
        *(int *)*pauVar17 = auVar4._0_4_;
        *(int *)(*pauVar17 + 4) = auVar4._4_4_;
        *(int *)(*pauVar17 + 8) = auVar4._8_4_;
        *(int *)(*pauVar17 + 0xc) = auVar4._12_4_;
        *(int *)(*pauVar17 + 0x10) = auVar4._16_4_;
        *(int *)(*pauVar17 + 0x14) = auVar4._20_4_;
        *(int *)(*pauVar17 + 0x18) = auVar4._24_4_;
        *(int *)(*pauVar17 + 0x1c) = auVar4._28_4_;
        *(int *)(*pauVar17 + 0x20) = auVar4._32_4_;
        *(int *)(*pauVar17 + 0x24) = auVar4._36_4_;
        *(int *)(*pauVar17 + 0x28) = auVar4._40_4_;
        *(int *)(*pauVar17 + 0x2c) = auVar4._44_4_;
        *(int *)(*pauVar17 + 0x30) = auVar4._48_4_;
        *(int *)(*pauVar17 + 0x34) = auVar4._52_4_;
        *(int *)(*pauVar17 + 0x38) = auVar4._56_4_;
        *(int *)(*pauVar17 + 0x3c) = auVar4._60_4_;
        bVar1 = *(byte *)(iVar18 + 0x1140);
        if (bVar1 == 0) {
          *(undefined4 *)(iVar9 + 0x137c) = uVar11;
          iVar19 = *(int *)(*(int *)(iVar9 + 0x12a4) + 0x130);
          auVar2 = vscl_q(*(undefined (*) [16])(iVar19 + 0x80),uVar11);
          auVar3 = vscl_q(*(undefined (*) [16])(iVar19 + 0x90),uVar11);
          auVar5 = vscl_q(*(undefined (*) [16])(iVar19 + 0xa0),uVar11);
          *(int *)*(undefined (*) [16])(iVar19 + 0x80) = auVar2._0_4_;
          *(int *)(iVar19 + 0x84) = auVar2._4_4_;
          *(int *)(iVar19 + 0x88) = auVar2._8_4_;
          *(int *)(iVar19 + 0x8c) = auVar2._12_4_;
          *(int *)(iVar19 + 0x90) = auVar3._0_4_;
          *(int *)(iVar19 + 0x94) = auVar3._4_4_;
          *(int *)(iVar19 + 0x98) = auVar3._8_4_;
          *(int *)(iVar19 + 0x9c) = auVar3._12_4_;
          *(int *)(iVar19 + 0xa0) = auVar5._0_4_;
          *(int *)(iVar19 + 0xa4) = auVar5._4_4_;
          *(int *)(iVar19 + 0xa8) = auVar5._8_4_;
          *(int *)(iVar19 + 0xac) = auVar5._12_4_;
          fVar20 = *(float *)(param_1 + 0x1308);
        }
        else if (bVar1 < 2) {
          *(undefined4 *)(iVar9 + 0x137c) = uVar12;
          iVar19 = *(int *)(*(int *)(iVar9 + 0x12a4) + 0x130);
          auVar2 = vscl_q(*(undefined (*) [16])(iVar19 + 0x80),uVar12);
          auVar3 = vscl_q(*(undefined (*) [16])(iVar19 + 0x90),uVar12);
          auVar5 = vscl_q(*(undefined (*) [16])(iVar19 + 0xa0),uVar12);
          *(int *)*(undefined (*) [16])(iVar19 + 0x80) = auVar2._0_4_;
          *(int *)(iVar19 + 0x84) = auVar2._4_4_;
          *(int *)(iVar19 + 0x88) = auVar2._8_4_;
          *(int *)(iVar19 + 0x8c) = auVar2._12_4_;
          *(int *)(iVar19 + 0x90) = auVar3._0_4_;
          *(int *)(iVar19 + 0x94) = auVar3._4_4_;
          *(int *)(iVar19 + 0x98) = auVar3._8_4_;
          *(int *)(iVar19 + 0x9c) = auVar3._12_4_;
          *(int *)(iVar19 + 0xa0) = auVar5._0_4_;
          *(int *)(iVar19 + 0xa4) = auVar5._4_4_;
          *(int *)(iVar19 + 0xa8) = auVar5._8_4_;
          *(int *)(iVar19 + 0xac) = auVar5._12_4_;
          fVar20 = *(float *)(param_1 + 0x1308);
        }
        else if (bVar1 < 3) {
          *(float *)(iVar9 + 0x137c) = fVar13;
          iVar19 = *(int *)(*(int *)(iVar9 + 0x12a4) + 0x130);
          auVar2 = vscl_q(*(undefined (*) [16])(iVar19 + 0x80),fVar13);
          auVar3 = vscl_q(*(undefined (*) [16])(iVar19 + 0x90),fVar13);
          auVar5 = vscl_q(*(undefined (*) [16])(iVar19 + 0xa0),fVar13);
          *(int *)*(undefined (*) [16])(iVar19 + 0x80) = auVar2._0_4_;
          *(int *)(iVar19 + 0x84) = auVar2._4_4_;
          *(int *)(iVar19 + 0x88) = auVar2._8_4_;
          *(int *)(iVar19 + 0x8c) = auVar2._12_4_;
          *(int *)(iVar19 + 0x90) = auVar3._0_4_;
          *(int *)(iVar19 + 0x94) = auVar3._4_4_;
          *(int *)(iVar19 + 0x98) = auVar3._8_4_;
          *(int *)(iVar19 + 0x9c) = auVar3._12_4_;
          *(int *)(iVar19 + 0xa0) = auVar5._0_4_;
          *(int *)(iVar19 + 0xa4) = auVar5._4_4_;
          *(int *)(iVar19 + 0xa8) = auVar5._8_4_;
          *(int *)(iVar19 + 0xac) = auVar5._12_4_;
          fVar20 = *(float *)(param_1 + 0x1308);
        }
        else {
          fVar20 = *(float *)(param_1 + 0x1308);
        }
        uVar23 = vmul_s(*(float *)(param_1 + 0x1304) * fVar14,in_V7C);
        fVar22 = (float)vcos_s(uVar23);
        *(float *)(*(int *)(iVar9 + 0x12a4) + 0x24) = fVar20 + (1.0 - fVar22) * fVar21 * fVar13;
        iVar19 = *(int *)(iVar9 + 0x12a4);
        iVar10 = *(int *)(iVar19 + 0x130);
        uVar23 = *(undefined4 *)(iVar19 + 0x24);
        uVar7 = *(undefined4 *)(iVar19 + 0x28);
        uVar8 = *(undefined4 *)(iVar19 + 0x2c);
        *(undefined4 *)(iVar10 + 0xb0) = *(undefined4 *)(iVar19 + 0x20);
        *(undefined4 *)(iVar10 + 0xb4) = uVar23;
        *(undefined4 *)(iVar10 + 0xb8) = uVar7;
        *(undefined4 *)(iVar10 + 0xbc) = uVar8;
        *(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x12a4) + 0x130) + 0xbc) = 0x3f800000;
      }
      uVar15 = uVar15 + 1;
      iVar9 = iVar9 + 4;
      iVar18 = iVar18 + 0x28;
    } while ((int)uVar15 < 7);
    FUN_0897b8b0(param_1,1);
  }
  return;
}

