#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08855840(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [64];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [64];
  int iVar7;
  int iVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 in_V7C;
  
  iVar7 = *(int *)(param_1 + 0x130);
  fVar9 = 1.570796 - *(float *)(param_1 + 0x34);
  if (3.141593 < fVar9) {
    fVar9 = fVar9 - 6.283185;
  }
  else if (fVar9 <= -3.141593) {
    fVar9 = fVar9 + 6.283185;
  }
  auVar3 = vmidt_q();
  uVar11 = vmov_s(*(undefined4 *)(param_1 + 0x40));
  uVar12 = vmov_s(*(undefined4 *)(param_1 + 0x44));
  uVar13 = vmov_s(*(undefined4 *)(param_1 + 0x48));
  uVar10 = vmul_s(fVar9,in_V7C);
  auVar4 = vrot_q(uVar10,1,0,3,0);
  auVar1 = vidt_q();
  auVar5 = vrot_q(uVar10,2,0,1,0);
  auVar2 = vidt_q();
  auVar6._60_4_ = auVar3._60_4_;
  auVar6._56_4_ = auVar3._44_4_;
  auVar6._52_4_ = auVar3._28_4_;
  auVar6._48_4_ = auVar3._12_4_;
  auVar6._44_4_ = auVar3._56_4_;
  auVar6._40_4_ = uVar13;
  auVar6._36_4_ = auVar3._24_4_;
  auVar6._32_4_ = auVar3._8_4_;
  auVar6._28_4_ = auVar3._52_4_;
  auVar6._24_4_ = auVar3._36_4_;
  auVar6._20_4_ = uVar12;
  auVar6._16_4_ = auVar3._4_4_;
  auVar6._12_4_ = auVar3._48_4_;
  auVar6._8_4_ = auVar3._32_4_;
  auVar6._4_4_ = auVar3._16_4_;
  auVar6._0_4_ = uVar11;
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
  auVar3 = vmmul_q(auVar6,auVar3);
  *(int *)(iVar7 + 0x80) = auVar3._0_4_;
  *(int *)(iVar7 + 0x84) = auVar3._4_4_;
  *(int *)(iVar7 + 0x88) = auVar3._8_4_;
  *(int *)(iVar7 + 0x8c) = auVar3._12_4_;
  *(int *)(iVar7 + 0x90) = auVar3._16_4_;
  *(int *)(iVar7 + 0x94) = auVar3._20_4_;
  *(int *)(iVar7 + 0x98) = auVar3._24_4_;
  *(int *)(iVar7 + 0x9c) = auVar3._28_4_;
  *(int *)(iVar7 + 0xa0) = auVar3._32_4_;
  *(int *)(iVar7 + 0xa4) = auVar3._36_4_;
  *(int *)(iVar7 + 0xa8) = auVar3._40_4_;
  *(int *)(iVar7 + 0xac) = auVar3._44_4_;
  *(int *)(iVar7 + 0xb0) = auVar3._48_4_;
  *(int *)(iVar7 + 0xb4) = auVar3._52_4_;
  *(int *)(iVar7 + 0xb8) = auVar3._56_4_;
  *(int *)(iVar7 + 0xbc) = auVar3._60_4_;
  iVar7 = *(int *)(param_1 + 0x130);
  uVar10 = *(undefined4 *)(param_1 + 0x24);
  uVar11 = *(undefined4 *)(param_1 + 0x28);
  uVar12 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(iVar7 + 0xb0) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(iVar7 + 0xb4) = uVar10;
  *(undefined4 *)(iVar7 + 0xb8) = uVar11;
  *(undefined4 *)(iVar7 + 0xbc) = uVar12;
  *(undefined4 *)(*(int *)(param_1 + 0x130) + 0xbc) = 0x3f800000;
  if (*(int *)(param_1 + 0x6bc) != 0) {
    iVar7 = *(int *)(*(int *)(param_1 + 0x6bc) + 0x130);
    fVar9 = 1.570796 - *(float *)(param_1 + 0x34);
    if (3.141593 < fVar9) {
      fVar9 = fVar9 - 6.283185;
    }
    else if (fVar9 <= -3.141593) {
      fVar9 = fVar9 + 6.283185;
    }
    uVar10 = vmul_s(fVar9,in_V7C);
    auVar4 = vrot_q(uVar10,1,0,3,0);
    auVar1 = vidt_q();
    auVar5 = vrot_q(uVar10,2,0,1,0);
    auVar2 = vidt_q();
    *(int *)(iVar7 + 0x80) = auVar4._0_4_;
    *(int *)(iVar7 + 0x84) = auVar4._4_4_;
    *(int *)(iVar7 + 0x88) = auVar4._8_4_;
    *(int *)(iVar7 + 0x8c) = auVar4._12_4_;
    *(int *)(iVar7 + 0x90) = auVar1._0_4_;
    *(int *)(iVar7 + 0x94) = auVar1._4_4_;
    *(int *)(iVar7 + 0x98) = auVar1._8_4_;
    *(int *)(iVar7 + 0x9c) = auVar1._12_4_;
    *(int *)(iVar7 + 0xa0) = auVar5._0_4_;
    *(int *)(iVar7 + 0xa4) = auVar5._4_4_;
    *(int *)(iVar7 + 0xa8) = auVar5._8_4_;
    *(int *)(iVar7 + 0xac) = auVar5._12_4_;
    *(int *)(iVar7 + 0xb0) = auVar2._0_4_;
    *(int *)(iVar7 + 0xb4) = auVar2._4_4_;
    *(int *)(iVar7 + 0xb8) = auVar2._8_4_;
    *(int *)(iVar7 + 0xbc) = auVar2._12_4_;
    iVar7 = FUN_0884c3d0(1);
    if (iVar7 == 0) {
      iVar7 = *(int *)(param_1 + 0x6bc);
      uVar10 = *(undefined4 *)(param_1 + 0xa64);
      uVar11 = *(undefined4 *)(param_1 + 0xa68);
      uVar12 = *(undefined4 *)(param_1 + 0xa6c);
      *(undefined4 *)(iVar7 + 0x20) = *(undefined4 *)(param_1 + 0xa60);
      *(undefined4 *)(iVar7 + 0x24) = uVar10;
      *(undefined4 *)(iVar7 + 0x28) = uVar11;
      *(undefined4 *)(iVar7 + 0x2c) = uVar12;
      iVar7 = *(int *)(param_1 + 0x6bc);
    }
    else {
      iVar7 = *(int *)(param_1 + 0x6bc);
    }
    iVar8 = *(int *)(iVar7 + 0x130);
    uVar10 = *(undefined4 *)(iVar7 + 0x24);
    uVar11 = *(undefined4 *)(iVar7 + 0x28);
    uVar12 = *(undefined4 *)(iVar7 + 0x2c);
    *(undefined4 *)(iVar8 + 0xb0) = *(undefined4 *)(iVar7 + 0x20);
    *(undefined4 *)(iVar8 + 0xb4) = uVar10;
    *(undefined4 *)(iVar8 + 0xb8) = uVar11;
    *(undefined4 *)(iVar8 + 0xbc) = uVar12;
    fVar9 = *(float *)(param_1 + 0xa84);
    *(float *)(*(int *)(param_1 + 0x6bc) + 0x6c) = fVar9;
    if (fVar9 <= 0.0) {
      FUN_088a37f4(*(undefined4 *)(param_1 + 0x6bc),0);
    }
    else {
      FUN_088a37f4(*(undefined4 *)(param_1 + 0x6bc),1);
    }
  }
  return;
}

