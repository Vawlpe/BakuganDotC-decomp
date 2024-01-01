#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e0af0(int param_1,undefined4 param_2,code *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0xf0);
  iVar3 = 0;
  if (0 < iVar4) {
    do {
      uVar1 = FUN_089df234(param_1,iVar3);
      iVar2 = strstr(uVar1,param_2);
      if (iVar2 != 0) {
        uVar1 = FUN_089e01bc(param_1,iVar3);
        (*param_3)(uVar1,param_4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  return;
}

