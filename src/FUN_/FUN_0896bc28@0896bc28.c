#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0896bc28(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x2b74);
  if ((int)uVar2 < (int)(uVar2 + (int)*(char *)(param_1 + 0x2b75))) {
    iVar1 = uVar2 << 2;
    do {
      FUN_0896a294(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1));
      uVar2 = uVar2 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 0xbc) = 0x3f800000;
      iVar1 = iVar1 + 4;
    } while ((int)uVar2 <
             (int)((uint)*(byte *)(param_1 + 0x2b74) + (int)*(char *)(param_1 + 0x2b75)));
  }
  return;
}

