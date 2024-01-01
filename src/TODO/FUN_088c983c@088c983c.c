#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088c983c(int param_1,char param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x1c);
  while (iVar1 != 0) {
    if (param_2 == '\0') {
      if (*(char *)(iVar1 + 0x180) == '\0') {
        FUN_088c8768(iVar1);
        iVar1 = *(int *)(iVar1 + 4);
      }
      else {
        iVar1 = *(int *)(iVar1 + 4);
      }
    }
    else {
      FUN_088c8768(iVar1);
      iVar1 = *(int *)(iVar1 + 4);
    }
  }
  return;
}

