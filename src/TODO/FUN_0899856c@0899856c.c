#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0899856c(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [64];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [64];
  undefined auVar7 [64];
  undefined auVar8 [64];
  undefined4 *puVar9;
  undefined (*pauVar10) [64];
  undefined4 uVar11;
  undefined4 in_V7C;
  
  puVar9 = *(undefined4 **)(param_1 + 0x21e4);
  uVar11 = vmul_s(*(undefined4 *)(param_1 + 0x21d0),in_V7C);
  auVar1 = vidt_q();
  auVar4 = vrot_q(uVar11,0,1,2,0);
  auVar5 = vrot_q(uVar11,0,3,1,0);
  auVar2 = vidt_q();
  *puVar9 = auVar1._0_4_;
  puVar9[1] = auVar1._4_4_;
  puVar9[2] = auVar1._8_4_;
  puVar9[3] = auVar1._12_4_;
  puVar9[4] = auVar4._0_4_;
  puVar9[5] = auVar4._4_4_;
  puVar9[6] = auVar4._8_4_;
  puVar9[7] = auVar4._12_4_;
  puVar9[8] = auVar5._0_4_;
  puVar9[9] = auVar5._4_4_;
  puVar9[10] = auVar5._8_4_;
  puVar9[0xb] = auVar5._12_4_;
  puVar9[0xc] = auVar2._0_4_;
  puVar9[0xd] = auVar2._4_4_;
  puVar9[0xe] = auVar2._8_4_;
  puVar9[0xf] = auVar2._12_4_;
  puVar9 = *(undefined4 **)(param_1 + 0x21e8);
  uVar11 = vmul_s(*(undefined4 *)(param_1 + 0x21d0),in_V7C);
  auVar1 = vidt_q();
  auVar4 = vrot_q(uVar11,0,1,2,0);
  auVar5 = vrot_q(uVar11,0,3,1,0);
  auVar2 = vidt_q();
  *puVar9 = auVar1._0_4_;
  puVar9[1] = auVar1._4_4_;
  puVar9[2] = auVar1._8_4_;
  puVar9[3] = auVar1._12_4_;
  puVar9[4] = auVar4._0_4_;
  puVar9[5] = auVar4._4_4_;
  puVar9[6] = auVar4._8_4_;
  puVar9[7] = auVar4._12_4_;
  puVar9[8] = auVar5._0_4_;
  puVar9[9] = auVar5._4_4_;
  puVar9[10] = auVar5._8_4_;
  puVar9[0xb] = auVar5._12_4_;
  puVar9[0xc] = auVar2._0_4_;
  puVar9[0xd] = auVar2._4_4_;
  puVar9[0xe] = auVar2._8_4_;
  puVar9[0xf] = auVar2._12_4_;
  pauVar10 = *(undefined (**) [64])(param_1 + 0x21e4);
  uVar11 = vmul_s(*(undefined4 *)(param_1 + 0x21d4),in_V7C);
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
  auVar3 = vmmul_q(*pauVar10,auVar3);
  *(int *)*pauVar10 = auVar3._0_4_;
  *(int *)(*pauVar10 + 4) = auVar3._4_4_;
  *(int *)(*pauVar10 + 8) = auVar3._8_4_;
  *(int *)(*pauVar10 + 0xc) = auVar3._12_4_;
  *(int *)(*pauVar10 + 0x10) = auVar3._16_4_;
  *(int *)(*pauVar10 + 0x14) = auVar3._20_4_;
  *(int *)(*pauVar10 + 0x18) = auVar3._24_4_;
  *(int *)(*pauVar10 + 0x1c) = auVar3._28_4_;
  *(int *)(*pauVar10 + 0x20) = auVar3._32_4_;
  *(int *)(*pauVar10 + 0x24) = auVar3._36_4_;
  *(int *)(*pauVar10 + 0x28) = auVar3._40_4_;
  *(int *)(*pauVar10 + 0x2c) = auVar3._44_4_;
  *(int *)(*pauVar10 + 0x30) = auVar3._48_4_;
  *(int *)(*pauVar10 + 0x34) = auVar3._52_4_;
  *(int *)(*pauVar10 + 0x38) = auVar3._56_4_;
  *(int *)(*pauVar10 + 0x3c) = auVar3._60_4_;
  pauVar10 = *(undefined (**) [64])(param_1 + 0x21e8);
  uVar11 = vmul_s(*(undefined4 *)(param_1 + 0x21d4),in_V7C);
  auVar4 = vrot_q(uVar11,1,0,3,0);
  auVar1 = vidt_q();
  auVar5 = vrot_q(uVar11,2,0,1,0);
  auVar2 = vidt_q();
  auVar6._48_16_ = auVar2;
  auVar6._44_4_ = auVar5._12_4_;
  auVar6._40_4_ = auVar5._8_4_;
  auVar6._36_4_ = auVar5._4_4_;
  auVar6._32_4_ = auVar5._0_4_;
  auVar6._28_4_ = auVar1._12_4_;
  auVar6._24_4_ = auVar1._8_4_;
  auVar6._20_4_ = auVar1._4_4_;
  auVar6._16_4_ = auVar1._0_4_;
  auVar6._12_4_ = auVar4._12_4_;
  auVar6._8_4_ = auVar4._8_4_;
  auVar6._4_4_ = auVar4._4_4_;
  auVar6._0_4_ = auVar4._0_4_;
  auVar3 = vmmul_q(*pauVar10,auVar6);
  *(int *)*pauVar10 = auVar3._0_4_;
  *(int *)(*pauVar10 + 4) = auVar3._4_4_;
  *(int *)(*pauVar10 + 8) = auVar3._8_4_;
  *(int *)(*pauVar10 + 0xc) = auVar3._12_4_;
  *(int *)(*pauVar10 + 0x10) = auVar3._16_4_;
  *(int *)(*pauVar10 + 0x14) = auVar3._20_4_;
  *(int *)(*pauVar10 + 0x18) = auVar3._24_4_;
  *(int *)(*pauVar10 + 0x1c) = auVar3._28_4_;
  *(int *)(*pauVar10 + 0x20) = auVar3._32_4_;
  *(int *)(*pauVar10 + 0x24) = auVar3._36_4_;
  *(int *)(*pauVar10 + 0x28) = auVar3._40_4_;
  *(int *)(*pauVar10 + 0x2c) = auVar3._44_4_;
  *(int *)(*pauVar10 + 0x30) = auVar3._48_4_;
  *(int *)(*pauVar10 + 0x34) = auVar3._52_4_;
  *(int *)(*pauVar10 + 0x38) = auVar3._56_4_;
  *(int *)(*pauVar10 + 0x3c) = auVar3._60_4_;
  pauVar10 = *(undefined (**) [64])(param_1 + 0x21e4);
  uVar11 = vmul_s(*(undefined4 *)(param_1 + 0x21d8),in_V7C);
  auVar4 = vrot_q(uVar11,1,2,0,0);
  auVar5 = vrot_q(uVar11,3,1,0,0);
  auVar1 = vidt_q();
  auVar2 = vidt_q();
  auVar7._48_16_ = auVar2;
  auVar7._44_4_ = auVar1._12_4_;
  auVar7._40_4_ = auVar1._8_4_;
  auVar7._36_4_ = auVar1._4_4_;
  auVar7._32_4_ = auVar1._0_4_;
  auVar7._28_4_ = auVar5._12_4_;
  auVar7._24_4_ = auVar5._8_4_;
  auVar7._20_4_ = auVar5._4_4_;
  auVar7._16_4_ = auVar5._0_4_;
  auVar7._12_4_ = auVar4._12_4_;
  auVar7._8_4_ = auVar4._8_4_;
  auVar7._4_4_ = auVar4._4_4_;
  auVar7._0_4_ = auVar4._0_4_;
  auVar3 = vmmul_q(*pauVar10,auVar7);
  *(int *)*pauVar10 = auVar3._0_4_;
  *(int *)(*pauVar10 + 4) = auVar3._4_4_;
  *(int *)(*pauVar10 + 8) = auVar3._8_4_;
  *(int *)(*pauVar10 + 0xc) = auVar3._12_4_;
  *(int *)(*pauVar10 + 0x10) = auVar3._16_4_;
  *(int *)(*pauVar10 + 0x14) = auVar3._20_4_;
  *(int *)(*pauVar10 + 0x18) = auVar3._24_4_;
  *(int *)(*pauVar10 + 0x1c) = auVar3._28_4_;
  *(int *)(*pauVar10 + 0x20) = auVar3._32_4_;
  *(int *)(*pauVar10 + 0x24) = auVar3._36_4_;
  *(int *)(*pauVar10 + 0x28) = auVar3._40_4_;
  *(int *)(*pauVar10 + 0x2c) = auVar3._44_4_;
  *(int *)(*pauVar10 + 0x30) = auVar3._48_4_;
  *(int *)(*pauVar10 + 0x34) = auVar3._52_4_;
  *(int *)(*pauVar10 + 0x38) = auVar3._56_4_;
  *(int *)(*pauVar10 + 0x3c) = auVar3._60_4_;
  pauVar10 = *(undefined (**) [64])(param_1 + 0x21e8);
  uVar11 = vmul_s(*(undefined4 *)(param_1 + 0x21d8),in_V7C);
  auVar4 = vrot_q(uVar11,1,2,0,0);
  auVar5 = vrot_q(uVar11,3,1,0,0);
  auVar1 = vidt_q();
  auVar2 = vidt_q();
  auVar8._48_16_ = auVar2;
  auVar8._44_4_ = auVar1._12_4_;
  auVar8._40_4_ = auVar1._8_4_;
  auVar8._36_4_ = auVar1._4_4_;
  auVar8._32_4_ = auVar1._0_4_;
  auVar8._28_4_ = auVar5._12_4_;
  auVar8._24_4_ = auVar5._8_4_;
  auVar8._20_4_ = auVar5._4_4_;
  auVar8._16_4_ = auVar5._0_4_;
  auVar8._12_4_ = auVar4._12_4_;
  auVar8._8_4_ = auVar4._8_4_;
  auVar8._4_4_ = auVar4._4_4_;
  auVar8._0_4_ = auVar4._0_4_;
  auVar3 = vmmul_q(*pauVar10,auVar8);
  *(int *)*pauVar10 = auVar3._0_4_;
  *(int *)(*pauVar10 + 4) = auVar3._4_4_;
  *(int *)(*pauVar10 + 8) = auVar3._8_4_;
  *(int *)(*pauVar10 + 0xc) = auVar3._12_4_;
  *(int *)(*pauVar10 + 0x10) = auVar3._16_4_;
  *(int *)(*pauVar10 + 0x14) = auVar3._20_4_;
  *(int *)(*pauVar10 + 0x18) = auVar3._24_4_;
  *(int *)(*pauVar10 + 0x1c) = auVar3._28_4_;
  *(int *)(*pauVar10 + 0x20) = auVar3._32_4_;
  *(int *)(*pauVar10 + 0x24) = auVar3._36_4_;
  *(int *)(*pauVar10 + 0x28) = auVar3._40_4_;
  *(int *)(*pauVar10 + 0x2c) = auVar3._44_4_;
  *(int *)(*pauVar10 + 0x30) = auVar3._48_4_;
  *(int *)(*pauVar10 + 0x34) = auVar3._52_4_;
  *(int *)(*pauVar10 + 0x38) = auVar3._56_4_;
  *(int *)(*pauVar10 + 0x3c) = auVar3._60_4_;
  return;
}
