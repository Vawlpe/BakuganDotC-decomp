#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a30868(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != 0) {
    do {
      iVar1 = FUN_08a30f40(param_2);
      if (iVar1 == 0) {
        FUN_08a30f38(param_2,param_3);
        FUN_08a30f38(param_3,0);
      }
      else {
        iVar2 = FUN_08a30f30(param_3);
        iVar3 = FUN_08a30f30(iVar1);
        if (iVar2 < iVar3) {
          FUN_08a30f38(param_2,param_3);
          FUN_08a30f38(param_3,iVar1);
          return;
        }
      }
      param_2 = iVar1;
    } while (iVar1 != 0);
  }
  return;
}

