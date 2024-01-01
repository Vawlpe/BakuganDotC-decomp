#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f4954(float param_1,float param_2,float param_3,int param_4,char param_5)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [64];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [64];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 in_V7C;
  
  *(uint *)(param_4 + 0xd0) = *(uint *)(param_4 + 0xd0) | 0x20;
  if ((param_3 == 0.0) && (param_5 == '\0')) {
    FUN_089f4534(*(float *)(param_4 + 0x70) * param_1,*(float *)(param_4 + 0x74) * param_2);
    return;
  }
  auVar3 = vmidt_q();
  uVar8 = vmov_s(*(float *)(param_4 + 0x70) * param_1);
  uVar9 = vmov_s(*(float *)(param_4 + 0x74) * param_2);
  uVar10 = vmov_s(0);
  uVar7 = vmul_s(param_3,in_V7C);
  auVar4 = vrot_q(uVar7,1,2,0,0);
  auVar5 = vrot_q(uVar7,3,1,0,0);
  auVar1 = vidt_q();
  auVar2 = vidt_q();
  auVar6._60_4_ = auVar3._60_4_;
  auVar6._56_4_ = auVar3._44_4_;
  auVar6._52_4_ = auVar3._28_4_;
  auVar6._48_4_ = auVar3._12_4_;
  auVar6._44_4_ = auVar3._56_4_;
  auVar6._40_4_ = uVar10;
  auVar6._36_4_ = auVar3._24_4_;
  auVar6._32_4_ = auVar3._8_4_;
  auVar6._28_4_ = auVar3._52_4_;
  auVar6._24_4_ = auVar3._36_4_;
  auVar6._20_4_ = uVar9;
  auVar6._16_4_ = auVar3._4_4_;
  auVar6._12_4_ = auVar3._48_4_;
  auVar6._8_4_ = auVar3._32_4_;
  auVar6._4_4_ = auVar3._16_4_;
  auVar6._0_4_ = uVar8;
  auVar3._48_16_ = auVar2;
  auVar3._44_4_ = auVar1._12_4_;
  auVar3._40_4_ = auVar1._8_4_;
  auVar3._36_4_ = auVar1._4_4_;
  auVar3._32_4_ = auVar1._0_4_;
  auVar3._28_4_ = auVar5._12_4_;
  auVar3._24_4_ = auVar5._8_4_;
  auVar3._20_4_ = auVar5._4_4_;
  auVar3._16_4_ = auVar5._0_4_;
  auVar3._12_4_ = auVar4._12_4_;
  auVar3._8_4_ = auVar4._8_4_;
  auVar3._4_4_ = auVar4._4_4_;
  auVar3._0_4_ = auVar4._0_4_;
  auVar3 = vmmul_q(auVar6,auVar3);
  *(int *)(param_4 + 0x20) = auVar3._0_4_;
  *(int *)(param_4 + 0x24) = auVar3._4_4_;
  *(int *)(param_4 + 0x28) = auVar3._8_4_;
  *(int *)(param_4 + 0x2c) = auVar3._12_4_;
  *(int *)(param_4 + 0x30) = auVar3._16_4_;
  *(int *)(param_4 + 0x34) = auVar3._20_4_;
  *(int *)(param_4 + 0x38) = auVar3._24_4_;
  *(int *)(param_4 + 0x3c) = auVar3._28_4_;
  *(int *)(param_4 + 0x40) = auVar3._32_4_;
  *(int *)(param_4 + 0x44) = auVar3._36_4_;
  *(int *)(param_4 + 0x48) = auVar3._40_4_;
  *(int *)(param_4 + 0x4c) = auVar3._44_4_;
  *(int *)(param_4 + 0x50) = auVar3._48_4_;
  *(int *)(param_4 + 0x54) = auVar3._52_4_;
  *(int *)(param_4 + 0x58) = auVar3._56_4_;
  *(int *)(param_4 + 0x5c) = auVar3._60_4_;
  return;
}

