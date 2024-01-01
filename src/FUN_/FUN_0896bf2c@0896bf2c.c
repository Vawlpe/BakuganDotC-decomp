#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0896bf2c(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x2b82);
  if ((int)uVar2 < (int)(uVar2 + (int)*(char *)(param_1 + 0x2b83))) {
    iVar3 = uVar2 << 2;
    uVar4 = uVar2;
    do {
      if ((int)(uVar4 - uVar2) < (int)*(char *)(param_1 + 0x29bd)) {
        FUN_0896a294(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3));
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0xbc) = 0x3f800000;
        uVar2 = (uint)*(byte *)(param_1 + 0x2b82);
        cVar1 = *(char *)(param_1 + 0x2b83);
      }
      else {
        cVar1 = *(char *)(param_1 + 0x2b83);
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 4;
    } while ((int)uVar4 < (int)(uVar2 + (int)cVar1));
  }
  return;
}

