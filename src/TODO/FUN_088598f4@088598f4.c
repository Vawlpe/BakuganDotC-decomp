#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088598f4(int param_1,int param_2,int param_3,int param_4,undefined param_5)

{
  uint uVar1;
  
  *(int *)(param_1 + 0x9a0) = param_2;
  *(int *)(param_1 + 0x9a4) = param_3;
  *(int *)(param_1 + 0x9a8) = param_4;
  *(undefined *)(param_1 + 0xa41) = param_5;
  uVar1 = (uint)(param_2 != 0);
  if (param_3 != 0) {
    uVar1 = uVar1 + 1;
  }
  if (param_4 != 0) {
    uVar1 = uVar1 + 1;
  }
  *(uint *)(param_1 + 0xa2c) = uVar1;
  *(uint *)(param_1 + 0xa30) = uVar1;
  if (uVar1 != 0) {
    *(undefined *)(param_1 + 0xa39) = 1;
    *(undefined4 *)(param_1 + 0x900) = 10;
    *(undefined *)(param_1 + 0xa3e) = 0;
  }
  return;
}

