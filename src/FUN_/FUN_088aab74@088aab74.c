#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088aab74(int param_1,undefined4 *param_2)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [64];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [64];
  int iVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 in_V7C;
  
  *(undefined4 *)(param_1 + 0x60) = 0x3e99999a;
  *(undefined4 *)(param_1 + 100) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x68) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
  iVar7 = FUN_088aab58(param_1);
  if (iVar7 == 0) {
    fVar8 = (float)param_2[1];
    iVar7 = FUN_088a9614(param_1);
    param_2[1] = fVar8 + -*(float *)(iVar7 + 4);
    if (0x98 < *(int *)(param_1 + 0x218)) {
      if (0x9a < *(int *)(param_1 + 0x218)) {
        fVar8 = (float)param_2[3];
        goto LAB_088aac04;
      }
      param_2[1] = (float)param_2[1] - 60.0;
    }
    fVar8 = (float)param_2[3];
  }
  else {
    fVar8 = (float)param_2[3];
  }
LAB_088aac04:
  fVar8 = fVar8 * 0.01745329;
  param_2[3] = fVar8;
  *(float *)(param_1 + 0x34) = fVar8;
  iVar7 = *(int *)(param_1 + 0x130);
  auVar3 = vmidt_q();
  uVar10 = vmov_s(*(undefined4 *)(param_1 + 0x40));
  uVar11 = vmov_s(*(undefined4 *)(param_1 + 0x44));
  uVar12 = vmov_s(*(undefined4 *)(param_1 + 0x48));
  uVar9 = vmul_s(fVar8,in_V7C);
  auVar4 = vrot_q(uVar9,1,0,3,0);
  auVar1 = vidt_q();
  auVar5 = vrot_q(uVar9,2,0,1,0);
  auVar2 = vidt_q();
  auVar6._60_4_ = auVar3._60_4_;
  auVar6._56_4_ = auVar3._44_4_;
  auVar6._52_4_ = auVar3._28_4_;
  auVar6._48_4_ = auVar3._12_4_;
  auVar6._44_4_ = auVar3._56_4_;
  auVar6._40_4_ = uVar12;
  auVar6._36_4_ = auVar3._24_4_;
  auVar6._32_4_ = auVar3._8_4_;
  auVar6._28_4_ = auVar3._52_4_;
  auVar6._24_4_ = auVar3._36_4_;
  auVar6._20_4_ = uVar11;
  auVar6._16_4_ = auVar3._4_4_;
  auVar6._12_4_ = auVar3._48_4_;
  auVar6._8_4_ = auVar3._32_4_;
  auVar6._4_4_ = auVar3._16_4_;
  auVar6._0_4_ = uVar10;
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
  uVar9 = param_2[1];
  uVar10 = param_2[2];
  uVar11 = param_2[3];
  *(undefined4 *)(iVar7 + 0xb0) = *param_2;
  *(undefined4 *)(iVar7 + 0xb4) = uVar9;
  *(undefined4 *)(iVar7 + 0xb8) = uVar10;
  *(undefined4 *)(iVar7 + 0xbc) = uVar11;
  *(undefined *)(param_1 + 0xbc) = 1;
  iVar7 = *(int *)(param_1 + 0x130);
  uVar9 = *(undefined4 *)(iVar7 + 0xb4);
  uVar10 = *(undefined4 *)(iVar7 + 0xb8);
  uVar11 = *(undefined4 *)(iVar7 + 0xbc);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar7 + 0xb0);
  *(undefined4 *)(param_1 + 0x24) = uVar9;
  *(undefined4 *)(param_1 + 0x28) = uVar10;
  *(undefined4 *)(param_1 + 0x2c) = uVar11;
  *(undefined4 *)(param_1 + 0x1d0) = 0x10;
  *(undefined4 *)(param_1 + 0x1fc) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x234) = *(undefined4 *)(param_1 + 0x24);
  return;
}

