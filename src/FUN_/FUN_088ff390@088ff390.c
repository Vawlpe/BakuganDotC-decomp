#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ff390(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(param_1 + 0x770) = *param_3;
  *(undefined4 *)(param_1 + 0x774) = uVar1;
  *(undefined4 *)(param_1 + 0x778) = uVar2;
  *(undefined4 *)(param_1 + 0x77c) = uVar3;
  *(undefined4 *)(param_1 + 0x784) = param_2;
  return;
}

