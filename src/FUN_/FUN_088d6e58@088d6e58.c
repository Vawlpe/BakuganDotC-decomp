#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088d6e58(int param_1,undefined4 param_2,int param_3)

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
  undefined auVar20 [64];
  undefined auVar21 [12];
  undefined4 uVar22;
  int iVar23;
  int iVar24;
  undefined (*pauVar25) [64];
  undefined4 in_V7C;
  
  FUN_088d8fdc();
  *(undefined **)(param_1 + 0x14) = &DAT_08af30f4;
  *(undefined **)(param_1 + 0x160) = &DAT_08af319c;
  iVar24 = *(int *)(param_1 + 0x170);
  auVar21._4_4_ = (float)*(int *)(iVar24 + 0x2c) * 0.0002441406;
  auVar21._0_4_ = (float)*(int *)(iVar24 + 0x28) * 0.0002441406;
  auVar21._8_4_ = (float)*(int *)(iVar24 + 0x30) * 0.0002441406;
  vscl_t(auVar21,0x41a00000);
  iVar24 = *(int *)(param_1 + 0x130);
  uVar22 = *(undefined4 *)(param_1 + 0x24);
  uVar10 = *(undefined4 *)(param_1 + 0x28);
  uVar15 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(iVar24 + 0xb0) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(iVar24 + 0xb4) = uVar22;
  *(undefined4 *)(iVar24 + 0xb8) = uVar10;
  *(undefined4 *)(iVar24 + 0xbc) = uVar15;
  *(undefined4 *)(*(int *)(param_1 + 0x130) + 0xbc) = 0x3f800000;
  iVar24 = *(int *)(param_1 + 0x130);
  uVar6 = *(undefined4 *)(iVar24 + 0x84);
  uVar11 = *(undefined4 *)(iVar24 + 0x88);
  uVar16 = *(undefined4 *)(iVar24 + 0x8c);
  uVar22 = *(undefined4 *)(iVar24 + 0x90);
  uVar7 = *(undefined4 *)(iVar24 + 0x94);
  uVar12 = *(undefined4 *)(iVar24 + 0x98);
  uVar17 = *(undefined4 *)(iVar24 + 0x9c);
  uVar10 = *(undefined4 *)(iVar24 + 0xa0);
  uVar8 = *(undefined4 *)(iVar24 + 0xa4);
  uVar13 = *(undefined4 *)(iVar24 + 0xa8);
  uVar18 = *(undefined4 *)(iVar24 + 0xac);
  uVar15 = *(undefined4 *)(iVar24 + 0xb0);
  uVar9 = *(undefined4 *)(iVar24 + 0xb4);
  uVar14 = *(undefined4 *)(iVar24 + 0xb8);
  uVar19 = *(undefined4 *)(iVar24 + 0xbc);
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(iVar24 + 0x80);
  *(undefined4 *)(param_1 + 0x1b4) = uVar6;
  *(undefined4 *)(param_1 + 0x1b8) = uVar11;
  *(undefined4 *)(param_1 + 0x1bc) = uVar16;
  *(undefined4 *)(param_1 + 0x1c0) = uVar22;
  *(undefined4 *)(param_1 + 0x1c4) = uVar7;
  *(undefined4 *)(param_1 + 0x1c8) = uVar12;
  *(undefined4 *)(param_1 + 0x1cc) = uVar17;
  *(undefined4 *)(param_1 + 0x1d0) = uVar10;
  *(undefined4 *)(param_1 + 0x1d4) = uVar8;
  *(undefined4 *)(param_1 + 0x1d8) = uVar13;
  *(undefined4 *)(param_1 + 0x1dc) = uVar18;
  *(undefined4 *)(param_1 + 0x1e0) = uVar15;
  *(undefined4 *)(param_1 + 0x1e4) = uVar9;
  *(undefined4 *)(param_1 + 0x1e8) = uVar14;
  *(undefined4 *)(param_1 + 0x1ec) = uVar19;
  FUN_089d8634();
  uVar22 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar23 = FUN_089d7d74(400,0,0);
  FUN_089d816c(uVar22);
  FUN_089d866c();
  iVar24 = 0;
  if (iVar23 != 0) {
    FUN_0881a358(iVar23,2);
    iVar24 = iVar23;
  }
  *(int *)(param_1 + 0x174) = iVar24;
  uVar22 = FUN_089be054(DAT_08ac520c,PTR_s_fz_quest_obstacle01_ctc_08abf060);
  FUN_0881a484(iVar24,uVar22,9,param_1,0);
  *(undefined *)(*(int *)(param_1 + 0x174) + 0x104) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x174) + 0x144) = 0;
  *(int *)(*(int *)(param_1 + 0x174) + 0x138) = param_1;
  iVar24 = *(int *)(param_1 + 0x174);
  *(undefined4 **)(iVar24 + 0x110) = (undefined4 *)(param_1 + 0x1b0);
  *(undefined *)(iVar24 + 0x10c) = 1;
  iVar24 = *(int *)(param_1 + 0x130);
  pauVar25 = (undefined (*) [64])(iVar24 + 0x80);
  iVar23 = *(int *)(param_3 + 0x30);
  uVar22 = vmul_s((float)*(int *)(param_3 + 0x28) * 0.0002441406,in_V7C);
  auVar1 = vidt_q();
  auVar4 = vrot_q(uVar22,0,1,2,0);
  auVar5 = vrot_q(uVar22,0,3,1,0);
  auVar2 = vidt_q();
  auVar3._48_16_ = auVar2;
  auVar3._44_4_ = auVar5._12_4_;
  auVar3._40_4_ = auVar5._8_4_;
  auVar3._36_4_ = auVar5._4_4_;
  auVar3._32_4_ = auVar5._0_4_;
  auVar3._28_4_ = auVar4._12_4_;
  auVar3._24_4_ = auVar4._8_4_;
  auVar3._20_4_ = auVar4._4_4_;
  auVar3._16_4_ = auVar4._0_4_;
  auVar3._12_4_ = auVar1._12_4_;
  auVar3._8_4_ = auVar1._8_4_;
  auVar3._4_4_ = auVar1._4_4_;
  auVar3._0_4_ = auVar1._0_4_;
  auVar3 = vmmul_q(*pauVar25,auVar3);
  *(int *)*pauVar25 = auVar3._0_4_;
  *(int *)(iVar24 + 0x84) = auVar3._4_4_;
  *(int *)(iVar24 + 0x88) = auVar3._8_4_;
  *(int *)(iVar24 + 0x8c) = auVar3._12_4_;
  *(int *)(iVar24 + 0x90) = auVar3._16_4_;
  *(int *)(iVar24 + 0x94) = auVar3._20_4_;
  *(int *)(iVar24 + 0x98) = auVar3._24_4_;
  *(int *)(iVar24 + 0x9c) = auVar3._28_4_;
  *(int *)(iVar24 + 0xa0) = auVar3._32_4_;
  *(int *)(iVar24 + 0xa4) = auVar3._36_4_;
  *(int *)(iVar24 + 0xa8) = auVar3._40_4_;
  *(int *)(iVar24 + 0xac) = auVar3._44_4_;
  *(int *)(iVar24 + 0xb0) = auVar3._48_4_;
  *(int *)(iVar24 + 0xb4) = auVar3._52_4_;
  *(int *)(iVar24 + 0xb8) = auVar3._56_4_;
  *(int *)(iVar24 + 0xbc) = auVar3._60_4_;
  uVar22 = vmul_s((float)iVar23 * 0.0002441406,in_V7C);
  auVar4 = vrot_q(uVar22,1,2,0,0);
  auVar5 = vrot_q(uVar22,3,1,0,0);
  auVar1 = vidt_q();
  auVar2 = vidt_q();
  auVar20._48_16_ = auVar2;
  auVar20._44_4_ = auVar1._12_4_;
  auVar20._40_4_ = auVar1._8_4_;
  auVar20._36_4_ = auVar1._4_4_;
  auVar20._32_4_ = auVar1._0_4_;
  auVar20._28_4_ = auVar5._12_4_;
  auVar20._24_4_ = auVar5._8_4_;
  auVar20._20_4_ = auVar5._4_4_;
  auVar20._16_4_ = auVar5._0_4_;
  auVar20._12_4_ = auVar4._12_4_;
  auVar20._8_4_ = auVar4._8_4_;
  auVar20._4_4_ = auVar4._4_4_;
  auVar20._0_4_ = auVar4._0_4_;
  auVar3 = vmmul_q(*pauVar25,auVar20);
  *(int *)*pauVar25 = auVar3._0_4_;
  *(int *)(iVar24 + 0x84) = auVar3._4_4_;
  *(int *)(iVar24 + 0x88) = auVar3._8_4_;
  *(int *)(iVar24 + 0x8c) = auVar3._12_4_;
  *(int *)(iVar24 + 0x90) = auVar3._16_4_;
  *(int *)(iVar24 + 0x94) = auVar3._20_4_;
  *(int *)(iVar24 + 0x98) = auVar3._24_4_;
  *(int *)(iVar24 + 0x9c) = auVar3._28_4_;
  *(int *)(iVar24 + 0xa0) = auVar3._32_4_;
  *(int *)(iVar24 + 0xa4) = auVar3._36_4_;
  *(int *)(iVar24 + 0xa8) = auVar3._40_4_;
  *(int *)(iVar24 + 0xac) = auVar3._44_4_;
  *(int *)(iVar24 + 0xb0) = auVar3._48_4_;
  *(int *)(iVar24 + 0xb4) = auVar3._52_4_;
  *(int *)(iVar24 + 0xb8) = auVar3._56_4_;
  *(int *)(iVar24 + 0xbc) = auVar3._60_4_;
  (**(code **)(*(int *)(param_1 + 0x14) + 0x34))
            (0,param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x30));
  FUN_089dffd4(param_1,0);
  FUN_089df49c(param_1);
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0xffffffff;
  iVar24 = DAT_08abf068;
  if (DAT_08abf06c == 0) {
    FUN_089d8634();
    uVar22 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar23 = FUN_089d7d74(0x140,0,0);
    FUN_089d816c(uVar22);
    FUN_089d866c();
    iVar24 = 0;
    if (iVar23 != 0) {
      FUN_089de2e4(iVar23,"fz_quest_obstacle01_ef01.gmo",0);
      iVar24 = iVar23;
    }
    DAT_08abf064 = iVar24;
    FUN_089d8634();
    uVar22 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar23 = FUN_089d7d74(0x140,0,0);
    FUN_089d816c(uVar22);
    FUN_089d866c();
    iVar24 = 0;
    if (iVar23 != 0) {
      FUN_089de2e4(iVar23,"fz_quest_obstacle01_ef02.gmo",0);
      iVar24 = iVar23;
    }
  }
  DAT_08abf068 = iVar24;
  DAT_08abf06c = DAT_08abf06c + 1;
  *(undefined4 *)(param_1 + 0x1f8) = 0x3f800000;
  FUN_088d9868(param_1);
  return param_1;
}
