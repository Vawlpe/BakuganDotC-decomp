#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089d8e54(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    do {
      param_1 = *(int *)(param_1 + 4);
      iVar1 = iVar1 + 1;
    } while (param_1 != 0);
  }
  return iVar1;
}

