#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c9bc8(uint param_1,int param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_2 + (param_1 >> 5) * 4);
  *puVar1 = *puVar1 ^ 1 << (param_1 & 0x1f);
  return;
}

