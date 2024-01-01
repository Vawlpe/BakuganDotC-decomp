#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d0b94(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [64];
  undefined auVar4 [16];
  undefined auVar5 [16];
  int iVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 in_V7C;
  
  fVar7 = (float)atan2f(*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0xc4));
  fVar7 = *(float *)(*(int *)(param_1 + 0x74) + 0x34) + fVar7 + 3.141593;
  if (3.141593 < fVar7) {
    fVar7 = fVar7 - 6.283185;
  }
  else if (fVar7 <= -3.141593) {
    fVar7 = fVar7 + 6.283185;
  }
  fVar8 = fVar7 - 1.570796;
  FUN_089f4954(0x3f800000,0x3f800000,fVar8,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x34),0);
  iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x34);
  *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) | 0x20;
  if (3.141593 < fVar7) {
    fVar8 = (fVar7 - 6.283185) - 1.570796;
  }
  else if (fVar7 <= -3.141593) {
    fVar8 = (fVar7 + 6.283185) - 1.570796;
  }
  FUN_089f4a20(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x34));
  iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x34);
  uVar9 = vmul_s(fVar8,in_V7C);
  auVar4 = vrot_q(uVar9,1,2,0,0);
  auVar5 = vrot_q(uVar9,3,1,0,0);
  auVar1 = vidt_q();
  auVar2 = vidt_q();
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
  auVar3 = vmmul_q(*(undefined (*) [64])(iVar6 + 0x20),auVar3);
  *(int *)*(undefined (*) [64])(iVar6 + 0x20) = auVar3._0_4_;
  *(int *)(iVar6 + 0x24) = auVar3._4_4_;
  *(int *)(iVar6 + 0x28) = auVar3._8_4_;
  *(int *)(iVar6 + 0x2c) = auVar3._12_4_;
  *(int *)(iVar6 + 0x30) = auVar3._16_4_;
  *(int *)(iVar6 + 0x34) = auVar3._20_4_;
  *(int *)(iVar6 + 0x38) = auVar3._24_4_;
  *(int *)(iVar6 + 0x3c) = auVar3._28_4_;
  *(int *)(iVar6 + 0x40) = auVar3._32_4_;
  *(int *)(iVar6 + 0x44) = auVar3._36_4_;
  *(int *)(iVar6 + 0x48) = auVar3._40_4_;
  *(int *)(iVar6 + 0x4c) = auVar3._44_4_;
  *(int *)(iVar6 + 0x50) = auVar3._48_4_;
  *(int *)(iVar6 + 0x54) = auVar3._52_4_;
  *(int *)(iVar6 + 0x58) = auVar3._56_4_;
  *(int *)(iVar6 + 0x5c) = auVar3._60_4_;
  iVar6 = *(int *)(*(int *)(param_1 + 0x1c) + 0x34);
  *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) | 0x20;
  return;
}

