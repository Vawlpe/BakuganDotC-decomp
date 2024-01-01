#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b82e8(int param_1)

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
  undefined auVar17 [64];
  undefined auVar18 [64];
  undefined auVar19 [64];
  undefined4 *puVar20;
  int iVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 in_V7C;
  
  if (*(char *)(param_1 + 0x1d1) == '\0') {
    if (3.141593 < *(float *)(param_1 + 0x30)) {
      *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) - 6.283185;
    }
    else if (*(float *)(param_1 + 0x30) <= -3.141593) {
      *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + 6.283185;
    }
    if (3.141593 < *(float *)(param_1 + 0x34)) {
      *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) - 6.283185;
    }
    else if (*(float *)(param_1 + 0x34) <= -3.141593) {
      *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + 6.283185;
    }
    if (3.141593 < *(float *)(param_1 + 0x38)) {
      *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x38) - 6.283185;
    }
    else if (*(float *)(param_1 + 0x38) <= -3.141593) {
      *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x38) + 6.283185;
    }
    iVar21 = *(int *)(param_1 + 0x130);
    fVar22 = 1.570796 - *(float *)(param_1 + 0x34);
    if (3.141593 < fVar22) {
      fVar22 = fVar22 - 6.283185;
    }
    else if (fVar22 <= -3.141593) {
      fVar22 = fVar22 + 6.283185;
    }
    auVar3 = vmidt_q();
    uVar24 = vmov_s(*(undefined4 *)(param_1 + 0x40));
    uVar25 = vmov_s(*(undefined4 *)(param_1 + 0x44));
    uVar26 = vmov_s(*(undefined4 *)(param_1 + 0x48));
    uVar23 = vmul_s(fVar22,in_V7C);
    auVar4 = vrot_q(uVar23,1,0,3,0);
    auVar1 = vidt_q();
    auVar5 = vrot_q(uVar23,2,0,1,0);
    auVar2 = vidt_q();
    auVar17._60_4_ = auVar3._60_4_;
    auVar17._56_4_ = auVar3._44_4_;
    auVar17._52_4_ = auVar3._28_4_;
    auVar17._48_4_ = auVar3._12_4_;
    auVar17._44_4_ = auVar3._56_4_;
    auVar17._40_4_ = uVar26;
    auVar17._36_4_ = auVar3._24_4_;
    auVar17._32_4_ = auVar3._8_4_;
    auVar17._28_4_ = auVar3._52_4_;
    auVar17._24_4_ = auVar3._36_4_;
    auVar17._20_4_ = uVar25;
    auVar17._16_4_ = auVar3._4_4_;
    auVar17._12_4_ = auVar3._48_4_;
    auVar17._8_4_ = auVar3._32_4_;
    auVar17._4_4_ = auVar3._16_4_;
    auVar17._0_4_ = uVar24;
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
    auVar3 = vmmul_q(auVar17,auVar3);
    *(int *)(iVar21 + 0x80) = auVar3._0_4_;
    *(int *)(iVar21 + 0x84) = auVar3._4_4_;
    *(int *)(iVar21 + 0x88) = auVar3._8_4_;
    *(int *)(iVar21 + 0x8c) = auVar3._12_4_;
    *(int *)(iVar21 + 0x90) = auVar3._16_4_;
    *(int *)(iVar21 + 0x94) = auVar3._20_4_;
    *(int *)(iVar21 + 0x98) = auVar3._24_4_;
    *(int *)(iVar21 + 0x9c) = auVar3._28_4_;
    *(int *)(iVar21 + 0xa0) = auVar3._32_4_;
    *(int *)(iVar21 + 0xa4) = auVar3._36_4_;
    *(int *)(iVar21 + 0xa8) = auVar3._40_4_;
    *(int *)(iVar21 + 0xac) = auVar3._44_4_;
    *(int *)(iVar21 + 0xb0) = auVar3._48_4_;
    *(int *)(iVar21 + 0xb4) = auVar3._52_4_;
    *(int *)(iVar21 + 0xb8) = auVar3._56_4_;
    *(int *)(iVar21 + 0xbc) = auVar3._60_4_;
    iVar21 = *(int *)(param_1 + 0x130);
    uVar23 = vmul_s(*(undefined4 *)(param_1 + 0x38),in_V7C);
    auVar1 = vidt_q();
    auVar4 = vrot_q(uVar23,0,1,2,0);
    auVar5 = vrot_q(uVar23,0,3,1,0);
    auVar2 = vidt_q();
    auVar18._48_16_ = auVar2;
    auVar18._44_4_ = auVar5._12_4_;
    auVar18._40_4_ = auVar5._8_4_;
    auVar18._36_4_ = auVar5._4_4_;
    auVar18._32_4_ = auVar5._0_4_;
    auVar18._28_4_ = auVar4._12_4_;
    auVar18._24_4_ = auVar4._8_4_;
    auVar18._20_4_ = auVar4._4_4_;
    auVar18._16_4_ = auVar4._0_4_;
    auVar18._12_4_ = auVar1._12_4_;
    auVar18._8_4_ = auVar1._8_4_;
    auVar18._4_4_ = auVar1._4_4_;
    auVar18._0_4_ = auVar1._0_4_;
    auVar3 = vmmul_q(*(undefined (*) [64])(iVar21 + 0x80),auVar18);
    *(int *)*(undefined (*) [64])(iVar21 + 0x80) = auVar3._0_4_;
    *(int *)(iVar21 + 0x84) = auVar3._4_4_;
    *(int *)(iVar21 + 0x88) = auVar3._8_4_;
    *(int *)(iVar21 + 0x8c) = auVar3._12_4_;
    *(int *)(iVar21 + 0x90) = auVar3._16_4_;
    *(int *)(iVar21 + 0x94) = auVar3._20_4_;
    *(int *)(iVar21 + 0x98) = auVar3._24_4_;
    *(int *)(iVar21 + 0x9c) = auVar3._28_4_;
    *(int *)(iVar21 + 0xa0) = auVar3._32_4_;
    *(int *)(iVar21 + 0xa4) = auVar3._36_4_;
    *(int *)(iVar21 + 0xa8) = auVar3._40_4_;
    *(int *)(iVar21 + 0xac) = auVar3._44_4_;
    *(int *)(iVar21 + 0xb0) = auVar3._48_4_;
    *(int *)(iVar21 + 0xb4) = auVar3._52_4_;
    *(int *)(iVar21 + 0xb8) = auVar3._56_4_;
    *(int *)(iVar21 + 0xbc) = auVar3._60_4_;
    iVar21 = *(int *)(param_1 + 0x130);
    uVar23 = vmul_s(*(undefined4 *)(param_1 + 0x30),in_V7C);
    auVar4 = vrot_q(uVar23,1,2,0,0);
    auVar5 = vrot_q(uVar23,3,1,0,0);
    auVar1 = vidt_q();
    auVar2 = vidt_q();
    auVar19._48_16_ = auVar2;
    auVar19._44_4_ = auVar1._12_4_;
    auVar19._40_4_ = auVar1._8_4_;
    auVar19._36_4_ = auVar1._4_4_;
    auVar19._32_4_ = auVar1._0_4_;
    auVar19._28_4_ = auVar5._12_4_;
    auVar19._24_4_ = auVar5._8_4_;
    auVar19._20_4_ = auVar5._4_4_;
    auVar19._16_4_ = auVar5._0_4_;
    auVar19._12_4_ = auVar4._12_4_;
    auVar19._8_4_ = auVar4._8_4_;
    auVar19._4_4_ = auVar4._4_4_;
    auVar19._0_4_ = auVar4._0_4_;
    auVar3 = vmmul_q(*(undefined (*) [64])(iVar21 + 0x80),auVar19);
    *(int *)*(undefined (*) [64])(iVar21 + 0x80) = auVar3._0_4_;
    *(int *)(iVar21 + 0x84) = auVar3._4_4_;
    *(int *)(iVar21 + 0x88) = auVar3._8_4_;
    *(int *)(iVar21 + 0x8c) = auVar3._12_4_;
    *(int *)(iVar21 + 0x90) = auVar3._16_4_;
    *(int *)(iVar21 + 0x94) = auVar3._20_4_;
    *(int *)(iVar21 + 0x98) = auVar3._24_4_;
    *(int *)(iVar21 + 0x9c) = auVar3._28_4_;
    *(int *)(iVar21 + 0xa0) = auVar3._32_4_;
    *(int *)(iVar21 + 0xa4) = auVar3._36_4_;
    *(int *)(iVar21 + 0xa8) = auVar3._40_4_;
    *(int *)(iVar21 + 0xac) = auVar3._44_4_;
    *(int *)(iVar21 + 0xb0) = auVar3._48_4_;
    *(int *)(iVar21 + 0xb4) = auVar3._52_4_;
    *(int *)(iVar21 + 0xb8) = auVar3._56_4_;
    *(int *)(iVar21 + 0xbc) = auVar3._60_4_;
    iVar21 = *(int *)(param_1 + 0x130);
    uVar23 = *(undefined4 *)(param_1 + 0x24);
    uVar24 = *(undefined4 *)(param_1 + 0x28);
    uVar25 = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(iVar21 + 0xb0) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(iVar21 + 0xb4) = uVar23;
    *(undefined4 *)(iVar21 + 0xb8) = uVar24;
    *(undefined4 *)(iVar21 + 0xbc) = uVar25;
    if (*(int *)(param_1 + 0x148) != 0) {
      iVar21 = *(int *)(param_1 + 0x130);
      uVar23 = *(undefined4 *)(iVar21 + 0xb4);
      uVar24 = *(undefined4 *)(iVar21 + 0xb8);
      uVar25 = *(undefined4 *)(iVar21 + 0xbc);
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar21 + 0xb0);
      *(undefined4 *)(param_1 + 0x24) = uVar23;
      *(undefined4 *)(param_1 + 0x28) = uVar24;
      *(undefined4 *)(param_1 + 0x2c) = uVar25;
      iVar21 = *(int *)(param_1 + 0x130);
      puVar20 = *(undefined4 **)(param_1 + 0x148);
      uVar26 = puVar20[1];
      uVar9 = puVar20[2];
      uVar13 = puVar20[3];
      uVar23 = puVar20[4];
      uVar6 = puVar20[5];
      uVar10 = puVar20[6];
      uVar14 = puVar20[7];
      uVar24 = puVar20[8];
      uVar7 = puVar20[9];
      uVar11 = puVar20[10];
      uVar15 = puVar20[0xb];
      uVar25 = puVar20[0xc];
      uVar8 = puVar20[0xd];
      uVar12 = puVar20[0xe];
      uVar16 = puVar20[0xf];
      *(undefined4 *)(iVar21 + 0x80) = *puVar20;
      *(undefined4 *)(iVar21 + 0x84) = uVar26;
      *(undefined4 *)(iVar21 + 0x88) = uVar9;
      *(undefined4 *)(iVar21 + 0x8c) = uVar13;
      *(undefined4 *)(iVar21 + 0x90) = uVar23;
      *(undefined4 *)(iVar21 + 0x94) = uVar6;
      *(undefined4 *)(iVar21 + 0x98) = uVar10;
      *(undefined4 *)(iVar21 + 0x9c) = uVar14;
      *(undefined4 *)(iVar21 + 0xa0) = uVar24;
      *(undefined4 *)(iVar21 + 0xa4) = uVar7;
      *(undefined4 *)(iVar21 + 0xa8) = uVar11;
      *(undefined4 *)(iVar21 + 0xac) = uVar15;
      *(undefined4 *)(iVar21 + 0xb0) = uVar25;
      *(undefined4 *)(iVar21 + 0xb4) = uVar8;
      *(undefined4 *)(iVar21 + 0xb8) = uVar12;
      *(undefined4 *)(iVar21 + 0xbc) = uVar16;
    }
  }
  return;
}

