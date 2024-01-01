#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089ad394(int param_1)

{
  int iVar1;
  undefined uVar2;
  
  if ((*(byte *)(*(int *)(param_1 + 0x20) + 8) & 0x10) != 0) {
    iVar1 = (int)*(char *)(param_1 + 0x74);
    uVar2 = 4;
    if ((iVar1 != 0) && (uVar2 = 3, iVar1 < 4)) {
      uVar2 = (undefined)((uint)((iVar1 + -1) * 0x1000000) >> 0x18);
    }
    *(undefined *)(param_1 + 0x74) = uVar2;
    return 1;
  }
  if ((*(byte *)(*(int *)(param_1 + 0x20) + 8) & 0x40) != 0) {
    iVar1 = (int)*(char *)(param_1 + 0x74);
    uVar2 = 0;
    if ((iVar1 != *(byte *)(param_1 + 0xbb3) - 1) && (uVar2 = 0, iVar1 < 4)) {
      uVar2 = (undefined)((uint)((iVar1 + 1) * 0x1000000) >> 0x18);
    }
    *(undefined *)(param_1 + 0x74) = uVar2;
    return 1;
  }
  return 0;
}

