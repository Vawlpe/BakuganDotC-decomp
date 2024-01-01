#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0896d72c(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  if (('\x02' < *(char *)(param_1 + 0x29bd)) &&
     (uVar3 = (uint)*(byte *)(param_1 + 0x2b96),
     (int)uVar3 < (int)(uVar3 + (int)*(char *)(param_1 + 0x2b97)))) {
    iVar2 = uVar3 << 2;
    do {
      FUN_0896a294(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2) + 0xbc) = 0x3f800000;
      if ((uVar3 - *(byte *)(param_1 + 0x2b96) & 1) == 0) {
        FUN_089f4c84(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2));
        bVar1 = *(byte *)(param_1 + 0x2b96);
      }
      else {
        bVar1 = *(byte *)(param_1 + 0x2b96);
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 4;
    } while ((int)uVar3 < (int)((uint)bVar1 + (int)*(char *)(param_1 + 0x2b97)));
  }
  return;
}

