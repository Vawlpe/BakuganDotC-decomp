#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e0b98(int param_1,undefined param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xf0);
  iVar2 = 0;
  if (0 < iVar3) {
    do {
      iVar1 = FUN_089e01bc(param_1,iVar2);
      iVar2 = iVar2 + 1;
      *(undefined *)(iVar1 + 7) = param_2;
    } while (iVar2 < iVar3);
  }
  return;
}

