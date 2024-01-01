#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089fd4a0(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_089bb728(param_1[2]);
  iVar2 = *(int *)(*param_1 + 0x24);
  do {
    iVar1 = iVar2;
    if (iVar1 == 0) goto LAB_089fd53c;
    iVar2 = *(int *)(iVar1 + 4);
  } while (iVar1 != param_3);
  iVar2 = FUN_089fbf50(iVar1,param_2);
  if (iVar2 != 0) {
    iVar2 = FUN_089fbf80(iVar1);
    if (iVar2 == 1) {
      FUN_089fbac8(iVar1,0x10);
    }
    else {
      FUN_089fbe84(iVar1,param_2);
    }
  }
LAB_089fd53c:
  FUN_089bb790(param_1[2]);
  return;
}

