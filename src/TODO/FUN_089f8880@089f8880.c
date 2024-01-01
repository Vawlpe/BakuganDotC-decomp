#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_089f8880(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x88) != 0) {
    uVar1 = *(uint *)(*(int *)(param_1 + 0x88) + 0x34) & 0xffff;
  }
  return uVar1;
}

