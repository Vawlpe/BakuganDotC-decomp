#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_08a10908(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((uint)*(ushort *)(param_1 + 2) << 0x1b) >> 0x1f;
  }
  return uVar1;
}

