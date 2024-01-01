#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_08a25eb4(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(byte *)(param_1 + 0x19) - 1;
    uVar1 = param_2 + uVar1 & ~uVar1;
  }
  return uVar1;
}

