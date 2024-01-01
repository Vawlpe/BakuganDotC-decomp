#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e0a70(int param_1,code *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xf0);
  iVar2 = 0;
  if (0 < iVar3) {
    do {
      uVar1 = FUN_089e01bc(param_1,iVar2);
      (*param_2)(uVar1,param_3);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  return;
}

