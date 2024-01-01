#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088b67d4(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = DAT_08b00950;
  if (DAT_08b00950 != 0) {
    do {
      iVar2 = *(int *)(iVar2 + 4);
      iVar1 = iVar1 + 1;
    } while (iVar2 != 0);
  }
  return iVar1;
}

