#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Switch with 1 destination removed at 0x088d8e60 : 12 cases all go to same destination

void FUN_088d8e20(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(param_2 + 0x20) = *param_3;
  *(undefined4 *)(param_2 + 0x24) = uVar1;
  *(undefined4 *)(param_2 + 0x28) = uVar2;
  *(undefined4 *)(param_2 + 0x2c) = uVar3;
  *(undefined4 *)(param_2 + 0x34) = param_4;
  *(undefined4 *)(param_2 + 0x30) = param_5;
  *(undefined4 *)(param_2 + 0x3c) = param_1;
  return;
}

