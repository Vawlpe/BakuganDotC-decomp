#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08989f7c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = *(char *)(param_1 + 0x8e1) * 6;
  if (0 < iVar1) {
    iVar3 = (int)*(char *)(param_1 + 0x8e0);
    iVar2 = iVar3 + iVar1;
    do {
      iVar4 = iVar4 + 1;
      if (iVar2 < 0x15) {
        *(char *)(param_1 + 0x8e0) = (char)iVar3;
        return;
      }
      iVar3 = iVar3 + -1;
      iVar2 = iVar2 + -1;
    } while (iVar4 < iVar1);
  }
  return;
}

