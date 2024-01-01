#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e35f8(int param_1)

{
  undefined auVar1 [64];
  undefined auVar2 [64];
  
  if (*(char *)(param_1 + 0x200) == '\0') {
    *(undefined *)(param_1 + 0x200) = 1;
    auVar1._60_4_ = *(undefined4 *)(param_1 + 0x10c);
    auVar1._56_4_ = *(undefined4 *)(param_1 + 0xfc);
    auVar1._52_4_ = *(undefined4 *)(param_1 + 0xec);
    auVar1._48_4_ = *(undefined4 *)(param_1 + 0xdc);
    auVar1._44_4_ = *(undefined4 *)(param_1 + 0x108);
    auVar1._40_4_ = *(undefined4 *)(param_1 + 0xf8);
    auVar1._36_4_ = *(undefined4 *)(param_1 + 0xe8);
    auVar1._32_4_ = *(undefined4 *)(param_1 + 0xd8);
    auVar1._28_4_ = *(undefined4 *)(param_1 + 0x104);
    auVar1._24_4_ = *(undefined4 *)(param_1 + 0xf4);
    auVar1._20_4_ = *(undefined4 *)(param_1 + 0xe4);
    auVar1._16_4_ = *(undefined4 *)(param_1 + 0xd4);
    auVar1._12_4_ = *(undefined4 *)(param_1 + 0x100);
    auVar1._8_4_ = *(undefined4 *)(param_1 + 0xf0);
    auVar1._4_4_ = *(undefined4 *)(param_1 + 0xe0);
    auVar1._0_4_ = *(undefined4 *)(param_1 + 0xd0);
    auVar2._60_4_ = *(undefined4 *)(param_1 + 0xcc);
    auVar2._56_4_ = *(undefined4 *)(param_1 + 0xbc);
    auVar2._52_4_ = *(undefined4 *)(param_1 + 0xac);
    auVar2._48_4_ = *(undefined4 *)(param_1 + 0x9c);
    auVar2._44_4_ = *(undefined4 *)(param_1 + 200);
    auVar2._40_4_ = *(undefined4 *)(param_1 + 0xb8);
    auVar2._36_4_ = *(undefined4 *)(param_1 + 0xa8);
    auVar2._32_4_ = *(undefined4 *)(param_1 + 0x98);
    auVar2._28_4_ = *(undefined4 *)(param_1 + 0xc4);
    auVar2._24_4_ = *(undefined4 *)(param_1 + 0xb4);
    auVar2._20_4_ = *(undefined4 *)(param_1 + 0xa4);
    auVar2._16_4_ = *(undefined4 *)(param_1 + 0x94);
    auVar2._12_4_ = *(undefined4 *)(param_1 + 0xc0);
    auVar2._8_4_ = *(undefined4 *)(param_1 + 0xb0);
    auVar2._4_4_ = *(undefined4 *)(param_1 + 0xa0);
    auVar2._0_4_ = *(undefined4 *)(param_1 + 0x90);
    auVar1 = vmmul_q(auVar1,auVar2);
    *(int *)(param_1 + 0x170) = auVar1._0_4_;
    *(int *)(param_1 + 0x174) = auVar1._16_4_;
    *(int *)(param_1 + 0x178) = auVar1._32_4_;
    *(int *)(param_1 + 0x17c) = auVar1._48_4_;
    *(int *)(param_1 + 0x180) = auVar1._4_4_;
    *(int *)(param_1 + 0x184) = auVar1._20_4_;
    *(int *)(param_1 + 0x188) = auVar1._36_4_;
    *(int *)(param_1 + 0x18c) = auVar1._52_4_;
    *(int *)(param_1 + 400) = auVar1._8_4_;
    *(int *)(param_1 + 0x194) = auVar1._24_4_;
    *(int *)(param_1 + 0x198) = auVar1._40_4_;
    *(int *)(param_1 + 0x19c) = auVar1._56_4_;
    *(int *)(param_1 + 0x1a0) = auVar1._12_4_;
    *(int *)(param_1 + 0x1a4) = auVar1._28_4_;
    *(int *)(param_1 + 0x1a8) = auVar1._44_4_;
    *(int *)(param_1 + 0x1ac) = auVar1._60_4_;
  }
  return;
}

