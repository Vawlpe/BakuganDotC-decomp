#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0886b2f4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x5b0) + *(int *)(param_1 + 0x5b8) * 4);
  iVar1 = 0;
  if (iVar2 != 0) {
    do {
      if ((*(int *)(iVar2 + 0x10) == 0) && (*(int *)(iVar2 + 8) == 0)) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x18;
    } while (iVar1 < 10);
  }
  return 0;
}

