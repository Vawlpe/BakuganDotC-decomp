#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895bc98(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + 0x4d18) != 0) {
      FUN_089de940(*(int *)(param_1 + 0x4d18),0);
      *(undefined4 *)(param_1 + 0x4d18) = 0;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 4);
  return;
}

