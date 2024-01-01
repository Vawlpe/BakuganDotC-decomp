#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0896ab84(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x2b8e);
  iVar6 = uVar2 * 4;
  if ((int)uVar2 < (int)(uVar2 + (int)*(char *)(param_1 + 0x2b8f))) {
    iVar7 = param_1 + iVar6;
    uVar5 = uVar2;
    do {
      uVar3 = uVar5 - uVar2;
      if ((int)uVar3 < (int)*(char *)(param_1 + 0x29bd) << 2) {
        iVar4 = param_1 + ((int)(uVar3 + ((uint)((int)uVar3 >> 2) >> 0x1e)) >> 2) * 4;
        if ((int)uVar3 < 0) {
          cVar1 = *(char *)((iVar4 - (-uVar3 & 3)) + 0x29ec);
        }
        else {
          cVar1 = *(char *)(iVar4 + (uVar3 & 3) + 0x29ec);
        }
        if (cVar1 == -1) {
          FUN_0896a294(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6));
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 0xbc) = 0x3f800000;
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 0x68) =
               *(undefined4 *)(iVar7 + 0x25fc);
          uVar2 = (uint)*(byte *)(param_1 + 0x2b8e);
          goto LAB_0896ac78;
        }
        cVar1 = *(char *)(param_1 + 0x2b8f);
      }
      else {
LAB_0896ac78:
        cVar1 = *(char *)(param_1 + 0x2b8f);
      }
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 4;
      iVar7 = iVar7 + 4;
    } while ((int)uVar5 < (int)(uVar2 + (int)cVar1));
  }
  return;
}

