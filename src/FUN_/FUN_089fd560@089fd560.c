#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089fd560(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_089bb728(param_1[2]);
  iVar3 = *(int *)(*param_1 + 0x24);
  if (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 4);
    while( true ) {
      iVar2 = iVar1;
      iVar1 = FUN_089fbf50(iVar3,param_2);
      if (iVar1 != 0) {
        iVar1 = FUN_089fbf80(iVar3);
        if (iVar1 == 1) {
          FUN_089fbac8(iVar3,0x10);
        }
        else {
          FUN_089fbe84(iVar3,param_2);
        }
      }
      if (iVar2 == 0) break;
      iVar1 = *(int *)(iVar2 + 4);
      iVar3 = iVar2;
    }
  }
  FUN_089bb790(param_1[2]);
  return;
}

