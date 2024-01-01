#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d8cd8(void)

{
  int iVar1;
  
  if (DAT_08abf0a8 != (int *)0x0) {
    for (iVar1 = *DAT_08abf0a8; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      FUN_088d8c98(iVar1);
    }
  }
  return;
}

