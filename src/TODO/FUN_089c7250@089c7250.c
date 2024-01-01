#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089c7250(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + 0xa0) == 0) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 0x20);
  return -1;
}

