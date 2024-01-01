#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c6b38(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    if (*(int *)(param_1 + 0x1d0) == param_2) {
      *(undefined4 *)(param_1 + 0x1e0) = 0x3e000000;
      return;
    }
    param_1 = param_1 + 0x20;
  } while (iVar1 < 0x20);
  return;
}

