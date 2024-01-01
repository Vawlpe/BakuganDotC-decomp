#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08845e7c(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)FUN_088660c8();
  if (((piVar1 != (int *)0x0) && (param_1 != 0)) && (*(int *)(DAT_08ac58c4 + 0x20) == 2)) {
    iVar2 = 0;
    for (iVar3 = *piVar1; (iVar3 != 0 && (param_1 != iVar3)); iVar3 = *(int *)(iVar3 + 4)) {
      if (*(int *)(iVar3 + 8) == *(int *)(param_1 + 8)) {
        iVar2 = iVar2 + 1;
      }
    }
    return iVar2;
  }
  return 0;
}

