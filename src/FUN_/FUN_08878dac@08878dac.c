#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08878dac(void)

{
  int iVar1;
  
  FUN_08877f88();
  iVar1 = DAT_08b00870;
  while (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 4);
    FUN_08876e10();
  }
  return;
}

