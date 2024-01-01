#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089982c8(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x10b9) & 1 << ((int)*(char *)(param_1 + 0x109c) & 0x1fU);
  if ((int)*(char *)(param_1 + 0x109c) == 0) {
    uVar1 = 1;
    if (uVar2 != 0) {
      uVar1 = 2;
    }
    return uVar1;
  }
  if (uVar2 == 0) {
    return 1;
  }
  return 0;
}

