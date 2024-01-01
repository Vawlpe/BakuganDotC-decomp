#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a8960(void)

{
  int iVar1;
  
  if (DAT_08abd594 != (int *)0x0) {
    for (iVar1 = *DAT_08abd594; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      FUN_088a8908(iVar1);
    }
  }
  return;
}

