#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088b653c(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_089d8710(param_1,0);
  *(undefined **)(param_1 + 0x14) = &DAT_08af2c84;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(param_1 + 0x20) = *param_3;
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x2c);
  FUN_088b61d4(param_1,param_2);
  FUN_089d8984(param_1,&DAT_08b00950);
  *(undefined4 *)(param_1 + 0x40) = 0;
  return param_1;
}

