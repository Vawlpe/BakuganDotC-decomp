#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08878ce4(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_08b00870;
  if (DAT_08b00870 != 0) {
    do {
      if (iVar1 == param_1) {
        return iVar1;
      }
      iVar1 = *(int *)(iVar1 + 4);
    } while (iVar1 != 0);
  }
  return 0;
}

