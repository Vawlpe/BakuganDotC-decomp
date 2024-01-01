#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089fd3f4(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_089bb728(param_1[2]);
  if (param_3 == 0) {
    iVar3 = *(int *)(*param_1 + 0x24);
  }
  else {
    iVar3 = *(int *)(param_3 + 4);
  }
  while (iVar1 = 0, iVar3 != 0) {
    iVar1 = FUN_089fbf50(iVar3,param_2);
    if (iVar1 == 0) {
      iVar3 = *(int *)(iVar3 + 4);
    }
    else {
      iVar2 = FUN_089fbb30(iVar3,0x10);
      iVar1 = iVar3;
      if (iVar2 == 0) break;
      iVar3 = *(int *)(iVar3 + 4);
    }
  }
  FUN_089bb790(param_1[2]);
  return iVar1;
}

