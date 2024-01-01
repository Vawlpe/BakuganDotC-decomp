#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e39d4(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar1 = *(int *)(param_1 + 0x28) + *(int *)(param_2 + 4);
    *(int *)(param_1 + 0x28) = iVar1;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(int *)(param_2 + 4);
    FUN_089e39d4(iVar1,param_2);
    FUN_089e39d4(*(undefined4 *)(param_1 + 0x2c),param_2);
  }
  else {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + *(int *)(param_2 + 8);
  }
  return;
}

