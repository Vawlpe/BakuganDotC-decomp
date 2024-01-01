#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0896c55c(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = *(int *)(param_1 + 0x1c) + (uint)*(byte *)(param_1 + 0x2b72) * 4;
  if (*(char *)(param_1 + 0x29bd) < '\x03') {
    FUN_089f4cb8(*(undefined4 *)(iVar3 + 8));
    uVar1 = (uint)*(byte *)(param_1 + 0x2b88);
    iVar4 = 2;
    iVar3 = uVar1 + (int)*(char *)(param_1 + 0x2b89);
  }
  else {
    FUN_089f4cb8(*(undefined4 *)(iVar3 + 0xc));
    uVar1 = (uint)*(byte *)(param_1 + 0x2b88);
    iVar4 = 4;
    iVar3 = uVar1 + (int)*(char *)(param_1 + 0x2b89);
  }
  if ((int)uVar1 < iVar3) {
    iVar3 = uVar1 << 2;
    uVar5 = uVar1;
    do {
      if ((int)(uVar5 - uVar1) < *(char *)(param_1 + 0x29bd) * 6) {
        if ((int)(uVar5 - uVar1) % 6 < 3) {
          iVar2 = (int)*(char *)(param_1 + 0x2b89);
        }
        else {
          FUN_089f4c84(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3));
          uVar1 = (uint)*(byte *)(param_1 + 0x2b88);
          iVar2 = (int)*(char *)(param_1 + 0x2b89);
        }
      }
      else {
        iVar2 = (int)*(char *)(param_1 + 0x2b89);
      }
      uVar5 = uVar5 + 1;
      iVar3 = iVar3 + 4;
    } while ((int)uVar5 < (int)(uVar1 + iVar2));
  }
  uVar5 = (uint)*(byte *)(param_1 + 0x2b94);
  iVar3 = uVar5 << 2;
  uVar1 = uVar5;
  if (uVar5 < uVar5 + iVar4) {
    do {
      if ((uVar1 - uVar5 & 1) != 0) {
        FUN_089f4c84(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3));
        uVar5 = (uint)*(byte *)(param_1 + 0x2b94);
      }
      if (1 < (int)(uVar1 - uVar5)) {
        FUN_089f4cb8(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3));
        uVar5 = (uint)*(byte *)(param_1 + 0x2b94);
      }
      uVar1 = uVar1 + 1;
      iVar3 = iVar3 + 4;
    } while ((int)uVar1 < (int)(uVar5 + iVar4));
  }
  return;
}

