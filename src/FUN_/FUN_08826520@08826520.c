#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08826520(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [64];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined auVar23 [64];
  undefined (*pauVar24) [16];
  undefined4 uVar25;
  int iVar26;
  int iVar27;
  float fVar28;
  undefined auStack_30 [24];
  
  iVar26 = *(int *)(param_1 + 0x1c);
  if (iVar26 < 2) {
    if (iVar26 < 0) {
      return;
    }
    if (iVar26 < 1) {
      *(undefined4 *)(param_1 + 0xf0) = 0;
      *(undefined4 *)(param_1 + 0x1a8) = 1;
      *(undefined4 *)(param_1 + 0x1ac) = 4;
      *(undefined4 *)(param_1 + 0x15c) = 0x81;
      *(undefined **)(param_1 + 0xf4) = &DAT_08a645d0;
      *(undefined4 *)(param_1 + 0x170) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x174) = 0x3f800000;
      *(undefined4 *)(param_1 + 0xfc) = 1;
      uVar25 = FUN_089f7720("kemuri1");
      *(undefined4 *)(param_1 + 0x18c) = uVar25;
      *(undefined *)(param_1 + 0x13c) = 1;
      *(undefined *)(param_1 + 0x1a0) = 0;
      *(undefined4 *)(param_1 + 0x178) = 0;
      *(undefined4 *)(param_1 + 0x17c) = 0;
      *(undefined4 *)(param_1 + 0xe0) = 0;
      *(undefined4 *)(param_1 + 0xe4) = 0;
      *(undefined4 *)(param_1 + 0xe8) = 0;
      *(undefined4 *)(param_1 + 0xec) = 0x3f000000;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      *(undefined4 *)(param_1 + 0x160) = 1;
      *(undefined4 *)(param_1 + 0x164) = 1;
      uVar10 = DAT_08b001ac;
      uVar9 = DAT_08b001a8;
      uVar25 = DAT_08b001a4;
      *(undefined4 *)(param_1 + 0xd0) = DAT_08b001a0;
      *(undefined4 *)(param_1 + 0xd4) = uVar25;
      *(undefined4 *)(param_1 + 0xd8) = uVar9;
      *(undefined4 *)(param_1 + 0xdc) = uVar10;
      return;
    }
    fVar28 = *(float *)(param_1 + 0x150) * 0.09;
    iVar26 = *(int *)(param_1 + 0x154);
    pauVar24 = (undefined (*) [16])FUN_08a2954c(auStack_30,(undefined4 *)(param_1 + 0xd0));
    vpfxs(3,2,0x11,0x10);
    auVar1 = vmov_q(*pauVar24);
    vpfxs(0x12,3,0,0x11);
    auVar2 = vmov_q(*pauVar24);
    vpfxs(1,0x10,3,0x12);
    auVar3 = vmov_q(*pauVar24);
    vpfxs(3,2,0x11,0);
    auVar4 = vmov_q(*pauVar24);
    vpfxs(0x12,3,0,1);
    auVar5 = vmov_q(*pauVar24);
    vpfxs(1,0x10,3,2);
    auVar6 = vmov_q(*pauVar24);
    vpfxs(0x10,0x11,0x12,3);
    auVar7 = vmov_q(*pauVar24);
    auVar8._48_16_ = auVar7;
    auVar8._44_4_ = auVar6._12_4_;
    auVar8._40_4_ = auVar6._8_4_;
    auVar8._36_4_ = auVar6._4_4_;
    auVar8._32_4_ = auVar6._0_4_;
    auVar8._28_4_ = auVar5._12_4_;
    auVar8._24_4_ = auVar5._8_4_;
    auVar8._20_4_ = auVar5._4_4_;
    auVar8._16_4_ = auVar5._0_4_;
    auVar8._12_4_ = auVar4._12_4_;
    auVar8._8_4_ = auVar4._8_4_;
    auVar8._4_4_ = auVar4._4_4_;
    auVar8._0_4_ = auVar4._0_4_;
    auVar23._48_16_ = *pauVar24;
    auVar23._44_4_ = auVar3._12_4_;
    auVar23._40_4_ = auVar3._8_4_;
    auVar23._36_4_ = auVar3._4_4_;
    auVar23._32_4_ = auVar3._0_4_;
    auVar23._28_4_ = auVar2._12_4_;
    auVar23._24_4_ = auVar2._8_4_;
    auVar23._20_4_ = auVar2._4_4_;
    auVar23._16_4_ = auVar2._0_4_;
    auVar23._12_4_ = auVar1._12_4_;
    auVar23._8_4_ = auVar1._8_4_;
    auVar23._4_4_ = auVar1._4_4_;
    auVar23._0_4_ = auVar1._0_4_;
    auVar8 = vmmul_q(auVar8,auVar23);
    auVar1 = vidt_q();
    auVar2 = vidt_q();
    *(int *)(iVar26 + 0x30) = auVar8._0_4_;
    *(int *)(iVar26 + 0x34) = auVar8._4_4_;
    *(int *)(iVar26 + 0x38) = auVar8._8_4_;
    *(int *)(iVar26 + 0x3c) = auVar1._0_4_;
    *(int *)(iVar26 + 0x40) = auVar8._16_4_;
    *(int *)(iVar26 + 0x44) = auVar8._20_4_;
    *(int *)(iVar26 + 0x48) = auVar8._24_4_;
    *(int *)(iVar26 + 0x4c) = auVar1._4_4_;
    *(int *)(iVar26 + 0x50) = auVar8._32_4_;
    *(int *)(iVar26 + 0x54) = auVar8._36_4_;
    *(int *)(iVar26 + 0x58) = auVar8._40_4_;
    *(int *)(iVar26 + 0x5c) = auVar1._8_4_;
    *(int *)(iVar26 + 0x60) = auVar2._0_4_;
    *(int *)(iVar26 + 100) = auVar2._4_4_;
    *(int *)(iVar26 + 0x68) = auVar2._8_4_;
    *(int *)(iVar26 + 0x6c) = auVar2._12_4_;
    iVar26 = *(int *)(param_1 + 0x158);
    iVar27 = *(int *)(param_1 + 0x154);
    uVar11 = *(undefined4 *)(iVar27 + 0x34);
    uVar15 = *(undefined4 *)(iVar27 + 0x38);
    uVar19 = *(undefined4 *)(iVar27 + 0x3c);
    uVar25 = *(undefined4 *)(iVar27 + 0x40);
    uVar12 = *(undefined4 *)(iVar27 + 0x44);
    uVar16 = *(undefined4 *)(iVar27 + 0x48);
    uVar20 = *(undefined4 *)(iVar27 + 0x4c);
    uVar9 = *(undefined4 *)(iVar27 + 0x50);
    uVar13 = *(undefined4 *)(iVar27 + 0x54);
    uVar17 = *(undefined4 *)(iVar27 + 0x58);
    uVar21 = *(undefined4 *)(iVar27 + 0x5c);
    uVar10 = *(undefined4 *)(iVar27 + 0x60);
    uVar14 = *(undefined4 *)(iVar27 + 100);
    uVar18 = *(undefined4 *)(iVar27 + 0x68);
    uVar22 = *(undefined4 *)(iVar27 + 0x6c);
    *(undefined4 *)(iVar26 + 0x30) = *(undefined4 *)(iVar27 + 0x30);
    *(undefined4 *)(iVar26 + 0x34) = uVar11;
    *(undefined4 *)(iVar26 + 0x38) = uVar15;
    *(undefined4 *)(iVar26 + 0x3c) = uVar19;
    *(undefined4 *)(iVar26 + 0x40) = uVar25;
    *(undefined4 *)(iVar26 + 0x44) = uVar12;
    *(undefined4 *)(iVar26 + 0x48) = uVar16;
    *(undefined4 *)(iVar26 + 0x4c) = uVar20;
    *(undefined4 *)(iVar26 + 0x50) = uVar9;
    *(undefined4 *)(iVar26 + 0x54) = uVar13;
    *(undefined4 *)(iVar26 + 0x58) = uVar17;
    *(undefined4 *)(iVar26 + 0x5c) = uVar21;
    *(undefined4 *)(iVar26 + 0x60) = uVar10;
    *(undefined4 *)(iVar26 + 100) = uVar14;
    *(undefined4 *)(iVar26 + 0x68) = uVar18;
    *(undefined4 *)(iVar26 + 0x6c) = uVar22;
    iVar26 = *(int *)(param_1 + 0x154);
    auVar1 = vscl_q(*(undefined (*) [16])(iVar26 + 0x30),fVar28);
    auVar2 = vscl_q(*(undefined (*) [16])(iVar26 + 0x40),fVar28);
    auVar3 = vscl_q(*(undefined (*) [16])(iVar26 + 0x50),fVar28);
    *(int *)*(undefined (*) [16])(iVar26 + 0x30) = auVar1._0_4_;
    *(int *)(iVar26 + 0x34) = auVar1._4_4_;
    *(int *)(iVar26 + 0x38) = auVar1._8_4_;
    *(int *)(iVar26 + 0x3c) = auVar1._12_4_;
    *(int *)(iVar26 + 0x40) = auVar2._0_4_;
    *(int *)(iVar26 + 0x44) = auVar2._4_4_;
    *(int *)(iVar26 + 0x48) = auVar2._8_4_;
    *(int *)(iVar26 + 0x4c) = auVar2._12_4_;
    *(int *)(iVar26 + 0x50) = auVar3._0_4_;
    *(int *)(iVar26 + 0x54) = auVar3._4_4_;
    *(int *)(iVar26 + 0x58) = auVar3._8_4_;
    *(int *)(iVar26 + 0x5c) = auVar3._12_4_;
    iVar26 = *(int *)(param_1 + 0x158);
    auVar1 = vscl_q(*(undefined (*) [16])(iVar26 + 0x30),-fVar28);
    auVar2 = vscl_q(*(undefined (*) [16])(iVar26 + 0x40),fVar28 * -6.0);
    auVar3 = vscl_q(*(undefined (*) [16])(iVar26 + 0x50),-fVar28);
    *(int *)*(undefined (*) [16])(iVar26 + 0x30) = auVar1._0_4_;
    *(int *)(iVar26 + 0x34) = auVar1._4_4_;
    *(int *)(iVar26 + 0x38) = auVar1._8_4_;
    *(int *)(iVar26 + 0x3c) = auVar1._12_4_;
    *(int *)(iVar26 + 0x40) = auVar2._0_4_;
    *(int *)(iVar26 + 0x44) = auVar2._4_4_;
    *(int *)(iVar26 + 0x48) = auVar2._8_4_;
    *(int *)(iVar26 + 0x4c) = auVar2._12_4_;
    *(int *)(iVar26 + 0x50) = auVar3._0_4_;
    *(int *)(iVar26 + 0x54) = auVar3._4_4_;
    *(int *)(iVar26 + 0x58) = auVar3._8_4_;
    *(int *)(iVar26 + 0x5c) = auVar3._12_4_;
    iVar26 = *(int *)(param_1 + 0x1c);
  }
  else {
    if (2 < iVar26) {
      if (3 < iVar26) {
        return;
      }
      if (param_1 == 0) {
        return;
      }
      (**(code **)(*(int *)(param_1 + 0x14) + 0xc))
                (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 8),3);
      return;
    }
    iVar26 = *(int *)(param_1 + 0x1c);
  }
  if (iVar26 == 2) {
    *(undefined4 *)(*(int *)(param_1 + 0x154) + 0x1c) = 2;
    *(undefined4 *)(*(int *)(param_1 + 0x158) + 0x1c) = 2;
    *(undefined *)(param_1 + 0x13c) = 0;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  }
  return;
}

