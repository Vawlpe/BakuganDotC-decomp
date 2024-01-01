#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088be95c(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [64];
  undefined auVar4 [16];
  undefined auVar5 [16];
  int iVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 in_V7C;
  
  *(int *)(param_1 + 0x614) = *(int *)(param_1 + 0x614) + 1;
  FUN_088b2774();
  FUN_088d8cd8();
  FUN_088a9578();
  FUN_089e0f6c(*(undefined4 *)(param_1 + 0x628));
  FUN_089e0f6c(*(undefined4 *)(param_1 + 0x634));
  FUN_089e0f6c(*(undefined4 *)(param_1 + 0x640));
  FUN_089e0f6c(*(undefined4 *)(param_1 + 0x64c));
  FUN_089e0f6c(*(undefined4 *)(param_1 + 0x658));
  FUN_089e0f6c(*(undefined4 *)(param_1 + 0x670));
  FUN_088dfd40();
  FUN_088b9d98(param_1 + 0x20);
  FUN_089e32ac(DAT_08ac5c90);
  FUN_089e2b14(DAT_08ac5c90,2);
  if (*(int *)(param_1 + 0x6c8) != 0) {
    iVar6 = *(int *)(*(int *)(param_1 + 0x6c8) + 0x520);
    iVar7 = *(int *)(iVar6 + 0x130);
    uVar11 = vmul_s(0x3c23d70a,in_V7C);
    auVar4 = vrot_q(uVar11,1,0,3,0);
    auVar1 = vidt_q();
    auVar5 = vrot_q(uVar11,2,0,1,0);
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
    auVar3 = vmmul_q(*(undefined (*) [64])(iVar7 + 0x80),auVar3);
    *(int *)*(undefined (*) [64])(iVar7 + 0x80) = auVar3._0_4_;
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
    pfVar8 = (float *)(iVar6 + 0x80);
    *pfVar8 = *pfVar8 + 0.003333333;
    if (1.0 <= *(float *)(iVar6 + 0x80)) {
      *pfVar8 = *pfVar8 - 1.0;
    }
    iVar6 = DAT_08abf040;
    pfVar9 = (float *)(DAT_08abf040 + 0x80);
    *pfVar9 = *pfVar9 + 0.01;
    pfVar8 = (float *)(iVar6 + 0x84);
    if (1.0 <= *(float *)(iVar6 + 0x80)) {
      *pfVar9 = *pfVar9 - 1.0;
    }
    *pfVar8 = *pfVar8 + 0.00625;
    if (1.0 <= *(float *)(iVar6 + 0x84)) {
      *pfVar8 = *pfVar8 - 1.0;
      fVar10 = *(float *)(iVar6 + 0x88);
    }
    else {
      fVar10 = *(float *)(iVar6 + 0x88);
    }
    if (fVar10 == 0.0) {
      *(undefined4 *)(iVar6 + 0x88) = 0x3f800000;
    }
    else {
      *(undefined4 *)(iVar6 + 0x88) = 0;
    }
  }
  if (*(int *)(DAT_08ac58c4 + 4) == 1) {
    FUN_088be3b8(param_1);
    iVar6 = *(int *)(param_1 + 0x604);
  }
  else {
    iVar6 = *(int *)(param_1 + 0x604);
  }
  if (iVar6 == 0) {
    iVar6 = *(int *)(param_1 + 0x608);
  }
  else {
    FUN_08823d74(*(undefined4 *)(param_1 + 0x604));
    iVar6 = *(int *)(param_1 + 0x608);
  }
  if (iVar6 == 0) {
    iVar6 = *(int *)(param_1 + 0x610);
  }
  else {
    FUN_08823d74(*(undefined4 *)(param_1 + 0x608));
    iVar6 = *(int *)(param_1 + 0x610);
  }
  if (iVar6 != 0) {
    FUN_088c73b4(*(undefined4 *)(param_1 + 0x610));
  }
  FUN_089f50bc(*(undefined4 *)(param_1 + 0x600));
  FUN_089f50bc(*(undefined4 *)(param_1 + 0x5f8));
  FUN_089f50bc(*(undefined4 *)(param_1 + 0x5fc));
  FUN_088259a4();
  return;
}

