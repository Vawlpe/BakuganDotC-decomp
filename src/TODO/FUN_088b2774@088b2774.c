#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b2774(void)

{
  int iVar1;
  
  if (DAT_08abd620 != (int *)0x0) {
    for (iVar1 = *DAT_08abd620; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      FUN_088b2734(iVar1);
    }
  }
  FUN_088a8960();
  FUN_088b3d94();
  FUN_088a5a10();
  return;
}

