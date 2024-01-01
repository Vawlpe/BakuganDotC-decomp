#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088635cc(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  for (iVar2 = *DAT_08aba808; (iVar2 != 0 && (param_1 != iVar2)); iVar2 = *(int *)(iVar2 + 4)) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

