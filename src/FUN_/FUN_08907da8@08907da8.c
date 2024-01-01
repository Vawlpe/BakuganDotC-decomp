#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08907da8(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_089d8710(param_1,0);
  *(undefined **)(param_1 + 0x14) = &DAT_08af6fc8;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *(undefined4 *)(param_1 + 0x18) = *param_2;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_3 + 0x1c);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_3 + 0x20);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_3 + 0x24);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_3 + 0x28);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_3 + 0x2c);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_3 + 0x30);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_3 + 0x34);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_3 + 0x38);
  FUN_08907d60(param_1,param_2);
  return param_1;
}

