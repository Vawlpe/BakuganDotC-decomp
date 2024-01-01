#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089f790c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = DAT_08ac6168;
  if (DAT_08ac6168 != 0) {
    do {
      if (iVar2 == param_1) {
        return iVar1;
      }
      iVar2 = *(int *)(iVar2 + 4);
      iVar1 = iVar1 + 1;
    } while (iVar2 != 0);
  }
  return -1;
}

