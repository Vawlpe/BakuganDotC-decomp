#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08858d38(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [64];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [64];
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  float fVar10;
  undefined4 in_V7C;
  
  iVar9 = *(int *)(param_1 + 0x130);
  uVar7 = FUN_089decdc(param_1,0);
  puVar8 = (undefined4 *)FUN_089defd8(param_1,uVar7);
  auVar3._60_4_ = *(undefined4 *)(iVar9 + 0xbc);
  auVar3._56_4_ = *(undefined4 *)(iVar9 + 0xac);
  auVar3._52_4_ = *(undefined4 *)(iVar9 + 0x9c);
  auVar3._48_4_ = *(undefined4 *)(iVar9 + 0x8c);
  auVar3._44_4_ = *(undefined4 *)(iVar9 + 0xb8);
  auVar3._40_4_ = *(undefined4 *)(iVar9 + 0xa8);
  auVar3._36_4_ = *(undefined4 *)(iVar9 + 0x98);
  auVar3._32_4_ = *(undefined4 *)(iVar9 + 0x88);
  auVar3._28_4_ = *(undefined4 *)(iVar9 + 0xb4);
  auVar3._24_4_ = *(undefined4 *)(iVar9 + 0xa4);
  auVar3._20_4_ = *(undefined4 *)(iVar9 + 0x94);
  auVar3._16_4_ = *(undefined4 *)(iVar9 + 0x84);
  auVar3._12_4_ = *(undefined4 *)(iVar9 + 0xb0);
  auVar3._8_4_ = *(undefined4 *)(iVar9 + 0xa0);
  auVar3._4_4_ = *(undefined4 *)(iVar9 + 0x90);
  auVar3._0_4_ = *(undefined4 *)(iVar9 + 0x80);
  auVar6._60_4_ = puVar8[0xf];
  auVar6._56_4_ = puVar8[0xb];
  auVar6._52_4_ = puVar8[7];
  auVar6._48_4_ = puVar8[3];
  auVar6._44_4_ = puVar8[0xe];
  auVar6._40_4_ = puVar8[10];
  auVar6._36_4_ = puVar8[6];
  auVar6._32_4_ = puVar8[2];
  auVar6._28_4_ = puVar8[0xd];
  auVar6._24_4_ = puVar8[9];
  auVar6._20_4_ = puVar8[5];
  auVar6._16_4_ = puVar8[1];
  auVar6._12_4_ = puVar8[0xc];
  auVar6._8_4_ = puVar8[8];
  auVar6._4_4_ = puVar8[4];
  auVar6._0_4_ = *puVar8;
  auVar3 = vmmul_q(auVar3,auVar6);
  *(int *)(param_1 + 0x220) = auVar3._0_4_;
  *(int *)(param_1 + 0x224) = auVar3._16_4_;
  *(int *)(param_1 + 0x228) = auVar3._32_4_;
  *(int *)(param_1 + 0x22c) = auVar3._48_4_;
  *(int *)(param_1 + 0x230) = auVar3._4_4_;
  *(int *)(param_1 + 0x234) = auVar3._20_4_;
  *(int *)(param_1 + 0x238) = auVar3._36_4_;
  *(int *)(param_1 + 0x23c) = auVar3._52_4_;
  *(int *)(param_1 + 0x240) = auVar3._8_4_;
  *(int *)(param_1 + 0x244) = auVar3._24_4_;
  *(int *)(param_1 + 0x248) = auVar3._40_4_;
  *(int *)(param_1 + 0x24c) = auVar3._56_4_;
  *(int *)(param_1 + 0x250) = auVar3._12_4_;
  *(int *)(param_1 + 0x254) = auVar3._28_4_;
  *(int *)(param_1 + 600) = auVar3._44_4_;
  *(int *)(param_1 + 0x25c) = auVar3._60_4_;
  if (*(int *)(param_1 + 0x20c) == 0) {
    iVar9 = *(int *)(param_1 + 0x208);
  }
  else {
    *(undefined *)(*(int *)(param_1 + 0x20c) + 0x10c) = 1;
    iVar9 = *(int *)(param_1 + 0x208);
  }
  if (iVar9 == 0) {
    iVar9 = *(int *)(param_1 + 0x6c8);
  }
  else {
    *(undefined *)(*(int *)(param_1 + 0x208) + 0x10c) = 1;
    iVar9 = *(int *)(param_1 + 0x6c8);
  }
  if (iVar9 == 0) {
    iVar9 = *(int *)(param_1 + 0x6d0);
  }
  else {
    *(undefined *)(*(int *)(param_1 + 0x6c8) + 0x10c) = 1;
    iVar9 = *(int *)(param_1 + 0x6d0);
  }
  if (iVar9 != 0) {
    *(undefined *)(*(int *)(param_1 + 0x6d0) + 0x10c) = 1;
  }
  fVar10 = 1.570796 - *(float *)(param_1 + 0x34);
  if (3.141593 < fVar10) {
    fVar10 = fVar10 - 6.283185;
  }
  else if (fVar10 <= -3.141593) {
    fVar10 = fVar10 + 6.283185;
  }
  uVar7 = vmul_s(fVar10,in_V7C);
  auVar4 = vrot_q(uVar7,1,0,3,0);
  auVar1 = vidt_q();
  auVar5 = vrot_q(uVar7,2,0,1,0);
  auVar2 = vidt_q();
  *(int *)(param_1 + 0x670) = auVar4._0_4_;
  *(int *)(param_1 + 0x674) = auVar4._4_4_;
  *(int *)(param_1 + 0x678) = auVar4._8_4_;
  *(int *)(param_1 + 0x67c) = auVar4._12_4_;
  *(int *)(param_1 + 0x680) = auVar1._0_4_;
  *(int *)(param_1 + 0x684) = auVar1._4_4_;
  *(int *)(param_1 + 0x688) = auVar1._8_4_;
  *(int *)(param_1 + 0x68c) = auVar1._12_4_;
  *(int *)(param_1 + 0x690) = auVar5._0_4_;
  *(int *)(param_1 + 0x694) = auVar5._4_4_;
  *(int *)(param_1 + 0x698) = auVar5._8_4_;
  *(int *)(param_1 + 0x69c) = auVar5._12_4_;
  *(int *)(param_1 + 0x6a0) = auVar2._0_4_;
  *(int *)(param_1 + 0x6a4) = auVar2._4_4_;
  *(int *)(param_1 + 0x6a8) = auVar2._8_4_;
  *(int *)(param_1 + 0x6ac) = auVar2._12_4_;
  *(undefined4 *)(param_1 + 0x6a0) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x6a4) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x6a8) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x6ac) = *(undefined4 *)(param_1 + 0x2c);
  return;
}

