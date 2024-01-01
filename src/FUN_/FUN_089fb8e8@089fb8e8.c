#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089fb8e8(int param_1,undefined4 param_2,undefined param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_089bb728(*(undefined4 *)(param_1 + 0x4c));
  iVar3 = *(int *)(param_1 + 0x24);
  if (iVar3 != 0) {
    FUN_089d8634();
    FUN_089d7fd8(iVar3,0,0);
    FUN_089d866c();
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  iVar3 = strlen(param_2);
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(param_3);
  uVar2 = FUN_089d7d74(iVar3 + 1,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  strcpy(uVar2,param_2);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x24);
  FUN_089bb790(*(undefined4 *)(param_1 + 0x4c));
  return;
}

