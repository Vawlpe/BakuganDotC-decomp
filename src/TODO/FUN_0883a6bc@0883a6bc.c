#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0883a6bc(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0xb0,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_089f840c(iVar2,param_2,param_1 + 0xa94);
    iVar3 = iVar2;
  }
  *(int *)(*(int *)(param_1 + 0xa8c) + param_3 * 4) = iVar3;
  return;
}

