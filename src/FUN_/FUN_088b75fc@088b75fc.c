#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b75fc(void)

{
  int iVar1;
  
  iVar1 = DAT_08b00950;
  if (DAT_08b00950 != 0) {
    do {
      iVar1 = *(int *)(iVar1 + 4);
      FUN_088b6fc0();
    } while (iVar1 != 0);
  }
  return;
}

