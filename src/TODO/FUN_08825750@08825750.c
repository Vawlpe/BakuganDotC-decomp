#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08825750(undefined4 param_1,undefined4 param_2)

{
  undefined auVar1 [64];
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  FUN_089d8634();
  uVar2 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar3 = FUN_089d7d74(0x1c0,0,0);
  FUN_089d816c(uVar2);
  FUN_089d866c();
  iVar4 = 0;
  if (iVar3 != 0) {
    FUN_088253ac(iVar3);
    iVar4 = iVar3;
  }
  *(undefined4 *)(iVar4 + 0x18) = param_1;
  *(undefined4 *)(iVar4 + 0x1c) = 0;
  *(undefined4 *)(iVar4 + 0x198) = param_2;
  *(undefined4 *)(iVar4 + 0x20) = 4;
  auVar1 = vmidt_q();
  *(int *)(iVar4 + 0x30) = auVar1._0_4_;
  *(int *)(iVar4 + 0x34) = auVar1._16_4_;
  *(int *)(iVar4 + 0x38) = auVar1._32_4_;
  *(int *)(iVar4 + 0x3c) = auVar1._48_4_;
  *(int *)(iVar4 + 0x40) = auVar1._4_4_;
  *(int *)(iVar4 + 0x44) = auVar1._20_4_;
  *(int *)(iVar4 + 0x48) = auVar1._36_4_;
  *(int *)(iVar4 + 0x4c) = auVar1._52_4_;
  *(int *)(iVar4 + 0x50) = auVar1._8_4_;
  *(int *)(iVar4 + 0x54) = auVar1._24_4_;
  *(int *)(iVar4 + 0x58) = auVar1._40_4_;
  *(int *)(iVar4 + 0x5c) = auVar1._56_4_;
  *(int *)(iVar4 + 0x60) = auVar1._12_4_;
  *(int *)(iVar4 + 100) = auVar1._28_4_;
  *(int *)(iVar4 + 0x68) = auVar1._44_4_;
  *(int *)(iVar4 + 0x6c) = auVar1._60_4_;
  *(undefined4 *)(iVar4 + 0x144) = 0x3f800000;
  *(undefined4 *)(iVar4 + 0x148) = 0x3f800000;
  *(undefined4 *)(iVar4 + 0x178) = 0;
  *(undefined4 *)(iVar4 + 0x17c) = 0;
  *(undefined4 *)(iVar4 + 0x160) = 1;
  *(undefined4 *)(iVar4 + 0x164) = 8;
  return;
}

