#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f0430(int param_1,undefined (*param_2) [16],undefined4 *param_3,undefined4 param_4)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [12];
  undefined auVar4 [12];
  undefined auVar5 [12];
  undefined auVar6 [16];
  undefined auVar7 [64];
  undefined auVar8 [16];
  undefined auVar9 [36];
  undefined auVar10 [64];
  bool bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined (*pauVar15) [16];
  undefined4 *puVar16;
  undefined (*pauVar17) [12];
  int iVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 in_V74;
  undefined4 in_V7D;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  
  pauVar17 = (undefined (*) [12])(param_1 + 0x30);
  if (DAT_08af86d0 == 0) {
    DAT_08af86d0 = 1;
    DAT_08af86e0 = 0x3f800000;
    DAT_08af86e4 = 0;
    DAT_08af86e8 = 0;
    DAT_08af86ec = 0x3f800000;
    DAT_08af86f4 = 0;
    DAT_08af86f0 = 0xbf800000;
    DAT_08af86f8 = 0;
    DAT_08af86fc = 0x3f800000;
    DAT_08af8700 = 0;
    DAT_08af8704 = 0x3f800000;
    DAT_08af8708 = 0;
    DAT_08af870c = 0x3f800000;
    DAT_08af8710 = 0;
    DAT_08af8714 = 0xbf800000;
    DAT_08af8718 = 0;
    DAT_08af871c = 0x3f800000;
    DAT_08af8720 = 0x3f800000;
    DAT_08af8724 = 0;
    DAT_08af8728 = 0;
    DAT_08af872c = 0x3f800000;
    DAT_08af8730 = 0xbf800000;
    DAT_08af8734 = 0;
    DAT_08af8738 = 0;
    DAT_08af873c = 0x3f800000;
    DAT_08af8740 = 0;
    DAT_08af8744 = 0;
    DAT_08af8748 = 0xbf800000;
    DAT_08af874c = 0x3f800000;
    DAT_08af8750 = 0;
    DAT_08af8754 = 0;
    DAT_08af8758 = 0x3f800000;
    DAT_08af875c = 0x3f800000;
  }
  local_58 = 0;
  puVar16 = &DAT_08b001c0;
  if (param_3 != (undefined4 *)0x0) {
    puVar16 = param_3;
  }
  auVar9._24_12_ = *(undefined (*) [12])(puVar16 + 8);
  auVar9._20_4_ = puVar16[6];
  auVar9._16_4_ = puVar16[5];
  auVar9._12_4_ = puVar16[4];
  auVar9._8_4_ = puVar16[2];
  auVar9._4_4_ = puVar16[1];
  auVar9._0_4_ = *puVar16;
  auVar5 = vtfm3_t(auVar9,*pauVar17);
  local_a0 = auVar5._0_4_;
  uStack_9c = auVar5._4_4_;
  uStack_98 = auVar5._8_4_;
  uVar20 = vfim_s(0x3c00);
  auVar1._8_8_ = *(undefined8 *)(puVar16 + 4);
  auVar1._4_4_ = puVar16[1];
  auVar1._0_4_ = *puVar16;
  auVar6._12_4_ = uVar20;
  auVar6._8_4_ = *(undefined4 *)(param_1 + 0x28);
  auVar6._4_4_ = *(undefined4 *)(param_1 + 0x24);
  auVar6._0_4_ = *(undefined4 *)(param_1 + 0x20);
  auVar6 = vtfm4_q(auVar1,auVar6);
  local_90 = auVar6._0_4_;
  uStack_8c = auVar6._4_4_;
  uStack_88 = auVar6._8_4_;
  uStack_84 = auVar6._12_4_;
  FUN_089d8634();
  uVar20 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar12 = FUN_089d7d74(0xa0,0,0);
  FUN_089d816c(uVar20);
  FUN_089d866c();
  iVar18 = 0;
  if (iVar12 != 0) {
    FUN_089efae0(iVar12);
    iVar18 = iVar12;
  }
  auVar6 = vsat0_q(*param_2);
  auVar6 = vscl_q(auVar6,in_V74);
  auVar6 = vf2iz_q(auVar6,0x17);
  uVar20 = vi2uc_q(auVar6);
  *(undefined4 *)(iVar18 + 0x84) = uVar20;
  *(undefined4 *)(iVar18 + 0x8c) = 2;
  pauVar15 = (undefined (*) [16])(iVar18 + 0x20);
  if (*(float *)(param_1 + 0x30) * *(float *)(param_1 + 0x30) +
      *(float *)(param_1 + 0x38) * *(float *)(param_1 + 0x38) < 1e-05) {
    bVar11 = false;
    if (0.0001 < *(float *)(param_1 + 0x34) * *(float *)(param_1 + 0x34)) {
      bVar11 = true;
    }
  }
  else {
    bVar11 = false;
  }
  if (bVar11) {
    local_58 = 4;
    auVar7 = vmidt_q();
    *(int *)*pauVar15 = auVar7._0_4_;
    *(int *)(iVar18 + 0x24) = auVar7._16_4_;
    *(int *)(iVar18 + 0x28) = auVar7._32_4_;
    *(int *)(iVar18 + 0x2c) = auVar7._48_4_;
    *(int *)(iVar18 + 0x30) = auVar7._4_4_;
    *(int *)(iVar18 + 0x34) = auVar7._20_4_;
    *(int *)(iVar18 + 0x38) = auVar7._36_4_;
    *(int *)(iVar18 + 0x3c) = auVar7._52_4_;
    *(int *)(iVar18 + 0x40) = auVar7._8_4_;
    *(int *)(iVar18 + 0x44) = auVar7._24_4_;
    *(int *)(iVar18 + 0x48) = auVar7._40_4_;
    *(int *)(iVar18 + 0x4c) = auVar7._56_4_;
    *(int *)(iVar18 + 0x50) = auVar7._12_4_;
    *(int *)(iVar18 + 0x54) = auVar7._28_4_;
    *(int *)(iVar18 + 0x58) = auVar7._44_4_;
    *(int *)(iVar18 + 0x5c) = auVar7._60_4_;
    iVar12 = 8;
  }
  else {
    uVar19 = vdot_t(*pauVar17,*pauVar17);
    uVar20 = vcmp_s(8,uVar19,uVar20);
    vrsq_s(uVar19);
    uVar20 = vcmovt_s(in_V7D,(byte)uVar20 & 1);
    vpfxd(4,4,4,5);
    auVar5 = vscl_t(*pauVar17,uVar20);
    auVar3._8_4_ = DAT_08b008e8;
    auVar3._4_4_ = DAT_08b008e4;
    auVar3._0_4_ = DAT_08b008e0;
    auVar3 = vcrsp_t(auVar3,auVar5);
    uVar20 = vdot_t(auVar3,auVar3);
    uVar19 = vcmp_s(8,uVar20,auVar3._0_4_);
    vrsq_s(uVar20);
    uVar20 = vcmovt_s(in_V7D,(byte)uVar19 & 1);
    vpfxd(4,4,4,5);
    auVar3 = vscl_t(auVar3,uVar20);
    auVar4 = vcrsp_t(auVar5,auVar3);
    auVar6 = vidt_q();
    auVar1 = vidt_q();
    *(int *)*pauVar15 = auVar3._0_4_;
    *(int *)(iVar18 + 0x24) = auVar3._4_4_;
    *(int *)(iVar18 + 0x28) = auVar3._8_4_;
    *(int *)(iVar18 + 0x2c) = auVar6._0_4_;
    *(int *)(iVar18 + 0x30) = auVar4._0_4_;
    *(int *)(iVar18 + 0x34) = auVar4._4_4_;
    *(int *)(iVar18 + 0x38) = auVar4._8_4_;
    *(int *)(iVar18 + 0x3c) = auVar6._4_4_;
    *(int *)(iVar18 + 0x40) = auVar5._0_4_;
    *(int *)(iVar18 + 0x44) = auVar5._4_4_;
    *(int *)(iVar18 + 0x48) = auVar5._8_4_;
    *(int *)(iVar18 + 0x4c) = auVar6._8_4_;
    *(int *)(iVar18 + 0x50) = auVar1._0_4_;
    *(int *)(iVar18 + 0x54) = auVar1._4_4_;
    *(int *)(iVar18 + 0x58) = auVar1._8_4_;
    *(int *)(iVar18 + 0x5c) = auVar1._12_4_;
    iVar12 = 4;
  }
  uVar20 = *(undefined4 *)(param_1 + 0x40);
  auVar6 = vscl_q(*pauVar15,uVar20);
  auVar1 = vscl_q(*(undefined (*) [16])(iVar18 + 0x30),uVar20);
  auVar2 = vscl_q(*(undefined (*) [16])(iVar18 + 0x40),uVar20);
  *(int *)*pauVar15 = auVar6._0_4_;
  *(int *)(iVar18 + 0x24) = auVar6._4_4_;
  *(int *)(iVar18 + 0x28) = auVar6._8_4_;
  *(int *)(iVar18 + 0x2c) = auVar6._12_4_;
  *(int *)(iVar18 + 0x30) = auVar1._0_4_;
  *(int *)(iVar18 + 0x34) = auVar1._4_4_;
  *(int *)(iVar18 + 0x38) = auVar1._8_4_;
  *(int *)(iVar18 + 0x3c) = auVar1._12_4_;
  *(int *)(iVar18 + 0x40) = auVar2._0_4_;
  *(int *)(iVar18 + 0x44) = auVar2._4_4_;
  *(int *)(iVar18 + 0x48) = auVar2._8_4_;
  *(int *)(iVar18 + 0x4c) = auVar2._12_4_;
  auVar7._60_4_ = puVar16[0xf];
  auVar7._56_4_ = puVar16[0xb];
  auVar7._52_4_ = puVar16[7];
  auVar7._48_4_ = puVar16[3];
  auVar7._44_4_ = puVar16[0xe];
  auVar7._40_4_ = puVar16[10];
  auVar7._36_4_ = puVar16[6];
  auVar7._32_4_ = puVar16[2];
  auVar7._28_4_ = puVar16[0xd];
  auVar7._24_4_ = puVar16[9];
  auVar7._20_4_ = puVar16[5];
  auVar7._16_4_ = puVar16[1];
  auVar7._12_4_ = puVar16[0xc];
  auVar7._8_4_ = puVar16[8];
  auVar7._4_4_ = puVar16[4];
  auVar7._0_4_ = *puVar16;
  auVar10._60_4_ = *(undefined4 *)(iVar18 + 0x5c);
  auVar10._56_4_ = *(undefined4 *)(iVar18 + 0x4c);
  auVar10._52_4_ = *(undefined4 *)(iVar18 + 0x3c);
  auVar10._48_4_ = *(undefined4 *)(iVar18 + 0x2c);
  auVar10._44_4_ = *(undefined4 *)(iVar18 + 0x58);
  auVar10._40_4_ = *(undefined4 *)(iVar18 + 0x48);
  auVar10._36_4_ = *(undefined4 *)(iVar18 + 0x38);
  auVar10._32_4_ = *(undefined4 *)(iVar18 + 0x28);
  auVar10._28_4_ = *(undefined4 *)(iVar18 + 0x54);
  auVar10._24_4_ = *(undefined4 *)(iVar18 + 0x44);
  auVar10._20_4_ = *(undefined4 *)(iVar18 + 0x34);
  auVar10._16_4_ = *(undefined4 *)(iVar18 + 0x24);
  auVar10._12_4_ = *(undefined4 *)(iVar18 + 0x50);
  auVar10._8_4_ = *(undefined4 *)(iVar18 + 0x40);
  auVar10._4_4_ = *(undefined4 *)(iVar18 + 0x30);
  auVar10._0_4_ = *(undefined4 *)*pauVar15;
  auVar7 = vmmul_q(auVar7,auVar10);
  *(int *)*pauVar15 = auVar7._0_4_;
  *(int *)(iVar18 + 0x24) = auVar7._16_4_;
  *(int *)(iVar18 + 0x28) = auVar7._32_4_;
  *(int *)(iVar18 + 0x2c) = auVar7._48_4_;
  *(int *)(iVar18 + 0x30) = auVar7._4_4_;
  *(int *)(iVar18 + 0x34) = auVar7._20_4_;
  *(int *)(iVar18 + 0x38) = auVar7._36_4_;
  *(int *)(iVar18 + 0x3c) = auVar7._52_4_;
  *(int *)(iVar18 + 0x40) = auVar7._8_4_;
  *(int *)(iVar18 + 0x44) = auVar7._24_4_;
  *(int *)(iVar18 + 0x48) = auVar7._40_4_;
  *(int *)(iVar18 + 0x4c) = auVar7._56_4_;
  *(int *)(iVar18 + 0x50) = auVar7._12_4_;
  *(int *)(iVar18 + 0x54) = auVar7._28_4_;
  *(int *)(iVar18 + 0x58) = auVar7._44_4_;
  *(int *)(iVar18 + 0x5c) = auVar7._60_4_;
  *(undefined4 *)(iVar18 + 0x50) = local_90;
  *(undefined4 *)(iVar18 + 0x54) = uStack_8c;
  *(undefined4 *)(iVar18 + 0x58) = uStack_88;
  *(undefined4 *)(iVar18 + 0x5c) = uStack_84;
  *(undefined4 *)(iVar18 + 0x5c) = 0x3f800000;
  *(undefined4 *)(iVar18 + 0x90) = param_4;
  *(undefined *)(iVar18 + 0x88) = 1;
  local_40 = 0;
  FUN_089d8634();
  uVar20 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar13 = FUN_089d7d74(0xa0,0,0);
  FUN_089d816c(uVar20);
  FUN_089d866c();
  iVar14 = local_40;
  if (iVar13 != 0) {
    FUN_089efb30(iVar13,iVar18);
    iVar14 = iVar13;
  }
  *(undefined4 *)(iVar14 + 0x8c) = 3;
  *(undefined4 *)(iVar14 + 0x90) = param_4;
  local_44 = 0;
  FUN_089d8634();
  uVar20 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar13 = FUN_089d7d74(0xa0,0,0);
  FUN_089d816c(uVar20);
  FUN_089d866c();
  iVar14 = local_44;
  if (iVar13 != 0) {
    FUN_089efb30(iVar13,iVar18);
    iVar14 = iVar13;
  }
  *(undefined4 *)(iVar14 + 0x8c) = 4;
  *(undefined4 *)(iVar14 + 0x90) = param_4;
  local_48 = 0;
  FUN_089d8634();
  uVar20 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar14 = FUN_089d7d74(0xa0,0,0);
  FUN_089d816c(uVar20);
  FUN_089d866c();
  local_54 = local_48;
  if (iVar14 != 0) {
    FUN_089efb30(iVar14,iVar18);
    local_54 = iVar14;
  }
  uVar20 = *(undefined4 *)(local_54 + 0x5c);
  auVar5._4_4_ = uStack_9c;
  auVar5._0_4_ = local_a0;
  auVar5._8_4_ = uStack_98;
  auVar5 = vadd_t(*(undefined (*) [12])(local_54 + 0x50),auVar5);
  *(int *)*(undefined (*) [12])(local_54 + 0x50) = auVar5._0_4_;
  *(int *)(local_54 + 0x54) = auVar5._4_4_;
  *(int *)(local_54 + 0x58) = auVar5._8_4_;
  *(undefined4 *)(local_54 + 0x5c) = uVar20;
  *(undefined4 *)(local_54 + 0x5c) = 0x3f800000;
  *(undefined4 *)(local_54 + 0x90) = param_4;
  local_4c = 0;
  FUN_089d8634();
  uVar20 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar13 = FUN_089d7d74(0xa0,0,0);
  FUN_089d816c(uVar20);
  FUN_089d866c();
  iVar14 = local_4c;
  if (iVar13 != 0) {
    FUN_089efb30(iVar13,local_54);
    iVar14 = iVar13;
  }
  *(undefined4 *)(iVar14 + 0x8c) = 3;
  *(undefined4 *)(iVar14 + 0x90) = param_4;
  local_50 = 0;
  local_54 = iVar14;
  FUN_089d8634();
  uVar20 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar13 = FUN_089d7d74(0xa0,0,0);
  FUN_089d816c(uVar20);
  FUN_089d866c();
  iVar14 = local_50;
  if (iVar13 != 0) {
    FUN_089efb30(iVar13,local_54);
    iVar14 = iVar13;
  }
  *(undefined4 *)(iVar14 + 0x8c) = 4;
  *(undefined4 *)(iVar14 + 0x90) = param_4;
  if (local_58 < iVar12) {
    puVar16 = &DAT_08af86e0 + local_58 * 4;
    iVar14 = local_58;
    do {
      uVar20 = vfim_s(0x3c00);
      auVar8._8_8_ = *(undefined8 *)(iVar18 + 0x30);
      auVar8._4_4_ = *(undefined4 *)(iVar18 + 0x24);
      auVar8._0_4_ = *(undefined4 *)*pauVar15;
      auVar2._12_4_ = uVar20;
      auVar2._8_4_ = puVar16[2];
      auVar2._4_4_ = puVar16[1];
      auVar2._0_4_ = *puVar16;
      auVar6 = vtfm4_q(auVar8,auVar2);
      local_80 = auVar6._0_4_;
      uStack_7c = auVar6._4_4_;
      uStack_78 = auVar6._8_4_;
      uStack_74 = auVar6._12_4_;
      iVar13 = FUN_089efc70(&local_80,&local_a0,param_2,0);
      *(undefined4 *)(iVar13 + 0x90) = param_4;
      iVar14 = iVar14 + 1;
      puVar16 = puVar16 + 4;
    } while (iVar14 < iVar12);
  }
  return;
}

