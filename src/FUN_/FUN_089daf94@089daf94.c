#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_089daf94(uint param_1)

{
  uint uVar1;
  
  uVar1 = (int)param_1 >> 10 & 0x1f;
  if ((param_1 & 0x7fff) != 0) {
    uVar1 = uVar1 + 0x70;
  }
  return (param_1 & 0x3ff) << 0xd | (param_1 & 0x8000) << 0x10 | uVar1 << 0x17;
}

