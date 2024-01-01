#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089758d4(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x40) == 0) {
    return 0;
  }
  iVar4 = (int)*(char *)(param_1 + 0x503);
  iVar3 = param_1 + iVar4 * 5;
  uVar2 = 1 << ((int)*(char *)(param_1 + iVar4 + 0x500) & 0x1fU);
  if (iVar4 == 0) {
    uVar1 = 1;
    if ((*(byte *)(iVar3 + 0x50c) & uVar2) == 0) {
      uVar1 = 2;
    }
    return uVar1;
  }
  uVar1 = 1;
  if ((*(byte *)(iVar3 + *(char *)(param_1 + 0x500) + 0x50c) & uVar2) == 0) {
    uVar1 = 2;
  }
  return uVar1;
}

