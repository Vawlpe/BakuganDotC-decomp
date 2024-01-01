#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_089be500(ushort *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (ushort *)0x0) {
    uVar1 = (uint)*(byte *)(param_1 + 1) << 0x10 | (uint)*(byte *)((int)param_1 + 3) << 0x18 |
            (uint)*param_1;
  }
  return uVar1;
}

