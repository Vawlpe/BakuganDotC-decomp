#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f8624(int param_1,undefined4 param_2)

{
  undefined auVar1 [64];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined2 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  auVar1 = vmidt_q();
  *(int *)(param_1 + 0x30) = auVar1._0_4_;
  *(int *)(param_1 + 0x34) = auVar1._16_4_;
  *(int *)(param_1 + 0x38) = auVar1._32_4_;
  *(int *)(param_1 + 0x3c) = auVar1._48_4_;
  *(int *)(param_1 + 0x40) = auVar1._4_4_;
  *(int *)(param_1 + 0x44) = auVar1._20_4_;
  *(int *)(param_1 + 0x48) = auVar1._36_4_;
  *(int *)(param_1 + 0x4c) = auVar1._52_4_;
  *(int *)(param_1 + 0x50) = auVar1._8_4_;
  *(int *)(param_1 + 0x54) = auVar1._24_4_;
  *(int *)(param_1 + 0x58) = auVar1._40_4_;
  *(int *)(param_1 + 0x5c) = auVar1._56_4_;
  *(int *)(param_1 + 0x60) = auVar1._12_4_;
  *(int *)(param_1 + 100) = auVar1._28_4_;
  *(int *)(param_1 + 0x68) = auVar1._44_4_;
  *(int *)(param_1 + 0x6c) = auVar1._60_4_;
  *(undefined2 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined2 *)(param_1 + 0x76) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0x42c80000;
  *(undefined *)(param_1 + 0x9c) = 0;
  uVar4 = DAT_08b0019c;
  uVar3 = DAT_08b00198;
  uVar2 = DAT_08b00194;
  *(undefined4 *)(param_1 + 0xa0) = DAT_08b00190;
  *(undefined4 *)(param_1 + 0xa4) = uVar2;
  *(undefined4 *)(param_1 + 0xa8) = uVar3;
  *(undefined4 *)(param_1 + 0xac) = uVar4;
  FUN_089f8b70();
  return;
}

