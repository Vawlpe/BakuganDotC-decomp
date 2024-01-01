#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0894033c(int param_1)

{
  undefined4 uVar1;
  
  FUN_0890990c();
  *(undefined **)(param_1 + 0xc) = &DAT_08af4b94;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined *)(param_1 + 0x76) = *(undefined *)(*(int *)(param_1 + 0x20) + 0x3c);
  *(undefined *)(*(int *)(param_1 + 0x20) + 0x3c) = 1;
  *(undefined4 *)(param_1 + 0x78) = 0;
  uVar1 = DAT_08abefb8;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  DAT_08ac1b28 = 0;
  return param_1;
}

