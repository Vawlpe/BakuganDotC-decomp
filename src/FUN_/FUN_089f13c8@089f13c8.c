#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f13c8(int param_1,undefined4 *param_2)

{
  uint *puVar1;
  
  DAT_08ac5db4 = param_2 + 1;
  *param_2 = 0xb000000;
  puVar1 = *(uint **)(param_1 + 0x30);
  *puVar1 = ((uint)DAT_08ac5db4 >> 0x18 & 0xf) << 0x10 | 0x10000000;
  puVar1[1] = (uint)DAT_08ac5db4 & 0xffffff | 0x8000000;
  return;
}

