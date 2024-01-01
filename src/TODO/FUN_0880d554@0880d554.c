#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0880d554(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0880d510();
  iVar2 = FUN_0880d54c(param_1,param_2);
  iVar3 = *param_3;
  if (iVar3 < iVar2) {
    *param_3 = iVar2;
    return;
  }
  if (iVar1 < iVar3) {
    *param_3 = iVar1;
    return;
  }
  *param_3 = iVar3;
  return;
}

