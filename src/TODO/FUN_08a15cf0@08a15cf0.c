#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a15cf0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    piVar2 = (int *)(param_1 + 4);
    for (iVar1 = *(int *)(param_1 + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      piVar2 = (int *)(iVar1 + 4);
    }
    *piVar2 = param_2;
  }
  return;
}

