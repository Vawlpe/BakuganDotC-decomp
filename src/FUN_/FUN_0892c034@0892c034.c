#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0892c034(int param_1,uint param_2,uint param_3)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [64];
  undefined auVar4 [16];
  undefined auVar5 [16];
  int iVar6;
  undefined4 uVar7;
  undefined4 in_V7C;
  undefined4 auStack_c0 [44];
  
  memcpy_jak(auStack_c0,&DAT_08ac163c,0xb0);
  iVar6 = *(int *)(param_1 + 0x130);
  uVar7 = vmul_s(auStack_c0[(param_2 & 0xff) * 2 + (param_3 & 0xff)],in_V7C);
  auVar4 = vrot_q(uVar7,1,0,3,0);
  auVar1 = vidt_q();
  auVar5 = vrot_q(uVar7,2,0,1,0);
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
  auVar3 = vmmul_q(*(undefined (*) [64])(iVar6 + 0x80),auVar3);
  *(int *)*(undefined (*) [64])(iVar6 + 0x80) = auVar3._0_4_;
  *(int *)(iVar6 + 0x84) = auVar3._4_4_;
  *(int *)(iVar6 + 0x88) = auVar3._8_4_;
  *(int *)(iVar6 + 0x8c) = auVar3._12_4_;
  *(int *)(iVar6 + 0x90) = auVar3._16_4_;
  *(int *)(iVar6 + 0x94) = auVar3._20_4_;
  *(int *)(iVar6 + 0x98) = auVar3._24_4_;
  *(int *)(iVar6 + 0x9c) = auVar3._28_4_;
  *(int *)(iVar6 + 0xa0) = auVar3._32_4_;
  *(int *)(iVar6 + 0xa4) = auVar3._36_4_;
  *(int *)(iVar6 + 0xa8) = auVar3._40_4_;
  *(int *)(iVar6 + 0xac) = auVar3._44_4_;
  *(int *)(iVar6 + 0xb0) = auVar3._48_4_;
  *(int *)(iVar6 + 0xb4) = auVar3._52_4_;
  *(int *)(iVar6 + 0xb8) = auVar3._56_4_;
  *(int *)(iVar6 + 0xbc) = auVar3._60_4_;
  return;
}

