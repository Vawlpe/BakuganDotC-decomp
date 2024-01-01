#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a2e09c(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != 0) {
    do {
      iVar1 = FUN_08a2e774(param_2);
      if (iVar1 == 0) {
        FUN_08a2e76c(param_2,param_3);
        FUN_08a2e76c(param_3,0);
      }
      else {
        iVar2 = FUN_08a2e764(param_3);
        iVar3 = FUN_08a2e764(iVar1);
        if (iVar2 < iVar3) {
          FUN_08a2e76c(param_2,param_3);
          FUN_08a2e76c(param_3,iVar1);
          return;
        }
      }
      param_2 = iVar1;
    } while (iVar1 != 0);
  }
  return;
}

