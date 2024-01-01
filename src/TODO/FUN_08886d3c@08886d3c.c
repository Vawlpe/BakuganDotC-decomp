#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08886d3c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    if (*(int *)(param_1 + 0x104) == param_2) {
      return 1;
    }
    param_1 = param_1 + 4;
  } while (iVar1 < 6);
  return 0;
}

