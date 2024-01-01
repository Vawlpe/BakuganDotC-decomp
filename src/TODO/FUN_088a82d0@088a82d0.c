#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088a82d0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_089d8710(param_1,0);
  *(undefined **)(param_1 + 0x14) = &DAT_08af2854;
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined *)(param_1 + 0x1c) = 0;
  iVar1 = DAT_08abd590 + 1;
  *(int *)(param_1 + 0x2c) = DAT_08abd590;
  DAT_08abd590 = iVar1;
  return param_1;
}

