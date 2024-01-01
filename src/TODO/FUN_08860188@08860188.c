#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08860188(int param_1)

{
  int iVar1;
  
  if (DAT_08aba808 != (int *)0x0) {
    for (iVar1 = *DAT_08aba808; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      if (iVar1 == param_1) {
        return iVar1;
      }
    }
  }
  return 0;
}

