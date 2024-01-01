#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089dcf2c(uint **param_1)

{
  short sVar1;
  uint *puVar2;
  
  sVar1 = *(short *)(param_1[9] + 2);
  puVar2 = *param_1;
  *param_1 = puVar2 + 1;
  *puVar2 = sVar1 != 0x83 | 0x5e000000;
  return;
}

