#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0892f3a4(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x40) == 0) {
    return 0;
  }
  uVar2 = (uint)*(byte *)(param_1 + *(char *)(param_1 + 0x74) * 0xc + 0x1ba4);
  uVar1 = 2;
  if ((uVar2 != 0) && (uVar1 = 1, (*(uint *)(param_1 + 0x1cec) & 1 << (uVar2 & 0x1f)) != 0)) {
    uVar1 = 2;
  }
  return uVar1;
}

