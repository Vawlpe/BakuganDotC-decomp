#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0883a770(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_3 + 0xa8c) + param_4 * 4);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x60) = param_1;
    *(undefined4 *)(*(int *)(*(int *)(param_3 + 0xa8c) + param_4 * 4) + 100) = param_2;
  }
  return;
}

