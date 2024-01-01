#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08854e90(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(undefined4 *)(param_1 + 4) = 0;
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 0x16);
  return;
}

