#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0880cd18(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = FUN_0880cc54();
  iVar2 = FUN_0880cce4(param_1,param_2);
  piVar4 = (int *)(*(int *)(param_1 + 4) + param_2 * 4);
  iVar3 = *piVar4;
  if (iVar3 < iVar2) {
    *piVar4 = iVar2;
    return;
  }
  if (iVar1 < iVar3) {
    *piVar4 = iVar1;
    return;
  }
  *piVar4 = iVar3;
  return;
}

