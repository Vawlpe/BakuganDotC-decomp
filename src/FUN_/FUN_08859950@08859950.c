#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08859950(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  
  *(int *)(param_1 + 0x9a0) = param_2;
  *(int *)(param_1 + 0x9a4) = param_3;
  *(int *)(param_1 + 0x9a8) = param_4;
  uVar1 = (uint)(param_2 != 0);
  if (param_3 != 0) {
    uVar1 = uVar1 + 1;
  }
  if (param_4 != 0) {
    uVar1 = uVar1 + 1;
  }
  *(uint *)(param_1 + 0xa30) = uVar1;
  return;
}

