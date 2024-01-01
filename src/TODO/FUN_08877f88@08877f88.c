#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08877f88(void)

{
  int iVar1;
  
  iVar1 = DAT_08b00870;
  if (DAT_08b00870 != 0) {
    do {
      iVar1 = *(int *)(iVar1 + 4);
      FUN_08877ec8();
    } while (iVar1 != 0);
  }
  return;
}

