#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089fd350(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_089bb728(param_1[2]);
  iVar4 = *(int *)(*param_1 + 0x24);
  while (iVar2 = 0, iVar4 != 0) {
    uVar1 = FUN_089fb9d0(iVar4);
    iVar2 = strcmp(uVar1,param_2);
    if (iVar2 == 0) {
      iVar3 = FUN_089fbb30(iVar4,0x10);
      iVar2 = iVar4;
      if (iVar3 == 0) break;
      iVar4 = *(int *)(iVar4 + 4);
    }
    else {
      iVar4 = *(int *)(iVar4 + 4);
    }
  }
  FUN_089bb790(param_1[2]);
  return iVar2;
}

