#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08945ed8(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [64];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [64];
  int iVar7;
  undefined4 uVar8;
  undefined4 in_V7C;
  
  if (DAT_08af8098 == 0) {
    DAT_08af8098 = 1;
    uVar8 = vmul_s(0x3c8efa35,in_V7C);
    DAT_08af809c = (float)vsin_s(uVar8);
  }
  iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + 0x18);
  uVar8 = vmul_s(-DAT_08af809c,in_V7C);
  auVar4 = vrot_q(uVar8,1,2,0,0);
  auVar5 = vrot_q(uVar8,3,1,0,0);
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
  auVar3 = vmmul_q(*(undefined (*) [64])(iVar7 + 0x20),auVar3);
  *(int *)*(undefined (*) [64])(iVar7 + 0x20) = auVar3._0_4_;
  *(int *)(iVar7 + 0x24) = auVar3._4_4_;
  *(int *)(iVar7 + 0x28) = auVar3._8_4_;
  *(int *)(iVar7 + 0x2c) = auVar3._12_4_;
  *(int *)(iVar7 + 0x30) = auVar3._16_4_;
  *(int *)(iVar7 + 0x34) = auVar3._20_4_;
  *(int *)(iVar7 + 0x38) = auVar3._24_4_;
  *(int *)(iVar7 + 0x3c) = auVar3._28_4_;
  *(int *)(iVar7 + 0x40) = auVar3._32_4_;
  *(int *)(iVar7 + 0x44) = auVar3._36_4_;
  *(int *)(iVar7 + 0x48) = auVar3._40_4_;
  *(int *)(iVar7 + 0x4c) = auVar3._44_4_;
  *(int *)(iVar7 + 0x50) = auVar3._48_4_;
  *(int *)(iVar7 + 0x54) = auVar3._52_4_;
  *(int *)(iVar7 + 0x58) = auVar3._56_4_;
  *(int *)(iVar7 + 0x5c) = auVar3._60_4_;
  iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + 0x1c);
  uVar8 = vmul_s(DAT_08af809c,in_V7C);
  auVar4 = vrot_q(uVar8,1,2,0,0);
  auVar5 = vrot_q(uVar8,3,1,0,0);
  auVar1 = vidt_q();
  auVar2 = vidt_q();
  auVar6._48_16_ = auVar2;
  auVar6._44_4_ = auVar1._12_4_;
  auVar6._40_4_ = auVar1._8_4_;
  auVar6._36_4_ = auVar1._4_4_;
  auVar6._32_4_ = auVar1._0_4_;
  auVar6._28_4_ = auVar5._12_4_;
  auVar6._24_4_ = auVar5._8_4_;
  auVar6._20_4_ = auVar5._4_4_;
  auVar6._16_4_ = auVar5._0_4_;
  auVar6._12_4_ = auVar4._12_4_;
  auVar6._8_4_ = auVar4._8_4_;
  auVar6._4_4_ = auVar4._4_4_;
  auVar6._0_4_ = auVar4._0_4_;
  auVar3 = vmmul_q(*(undefined (*) [64])(iVar7 + 0x20),auVar6);
  *(int *)*(undefined (*) [64])(iVar7 + 0x20) = auVar3._0_4_;
  *(int *)(iVar7 + 0x24) = auVar3._4_4_;
  *(int *)(iVar7 + 0x28) = auVar3._8_4_;
  *(int *)(iVar7 + 0x2c) = auVar3._12_4_;
  *(int *)(iVar7 + 0x30) = auVar3._16_4_;
  *(int *)(iVar7 + 0x34) = auVar3._20_4_;
  *(int *)(iVar7 + 0x38) = auVar3._24_4_;
  *(int *)(iVar7 + 0x3c) = auVar3._28_4_;
  *(int *)(iVar7 + 0x40) = auVar3._32_4_;
  *(int *)(iVar7 + 0x44) = auVar3._36_4_;
  *(int *)(iVar7 + 0x48) = auVar3._40_4_;
  *(int *)(iVar7 + 0x4c) = auVar3._44_4_;
  *(int *)(iVar7 + 0x50) = auVar3._48_4_;
  *(int *)(iVar7 + 0x54) = auVar3._52_4_;
  *(int *)(iVar7 + 0x58) = auVar3._56_4_;
  *(int *)(iVar7 + 0x5c) = auVar3._60_4_;
  return;
}

