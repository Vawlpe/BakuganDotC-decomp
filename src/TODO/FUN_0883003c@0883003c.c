#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0883003c(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)(*(int *)(param_2 + 0xa8c) + param_3 * 4) != 0) {
    iVar1 = *(int *)(*(int *)(param_2 + 0xa8c) + param_3 * 4);
    *(undefined4 *)(iVar1 + 0xa0) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0xa4) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0xa8) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0xac) = param_1;
  }
  return;
}

