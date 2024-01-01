#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f78c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = DAT_08ac6168;
  if (DAT_08ac6168 != 0) {
    do {
      if (iVar2 == param_1) {
        return;
      }
      iVar1 = *(int *)(iVar1 + 4);
      iVar2 = iVar2 + 1;
    } while (iVar1 != 0);
  }
  FUN_089f6ca4();
  return;
}

