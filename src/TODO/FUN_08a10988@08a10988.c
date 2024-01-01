#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a10988(int *param_1,int param_2)

{
  int iVar1;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    for (iVar1 = *param_1; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      param_1 = (int *)(iVar1 + 4);
    }
    *param_1 = param_2;
    return;
  }
  return;
}

