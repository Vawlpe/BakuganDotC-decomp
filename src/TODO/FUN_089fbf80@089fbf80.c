#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089fbf80(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  for (iVar2 = *(int *)(param_1 + 0x50); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

