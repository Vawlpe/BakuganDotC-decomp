#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089eb250(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    FUN_089f51b8();
    *(undefined4 *)(iVar1 + 0x84) = 0;
    *(undefined *)(param_1 + 8) = 0;
  }
  return;
}

