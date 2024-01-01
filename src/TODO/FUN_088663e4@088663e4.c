#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088663e4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (DAT_08aba808 != (int *)0x0) {
    iVar2 = *DAT_08aba808;
  }
  iVar1 = 0;
  for (; (iVar2 != 0 && (iVar2 != param_1)); iVar2 = *(int *)(iVar2 + 4)) {
    if (*(int *)(iVar2 + 8) == *(int *)(param_1 + 8)) {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}

