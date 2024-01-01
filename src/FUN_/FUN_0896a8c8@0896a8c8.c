#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0896a8c8(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  
  uVar3 = (uint)*(byte *)(param_1 + 0x2b8c);
  iVar7 = uVar3 * 4;
  if ((int)uVar3 < (int)(uVar3 + (int)*(char *)(param_1 + 0x2b8d))) {
    iVar8 = param_1 + iVar7;
    uVar6 = uVar3;
    do {
      if ((int)(uVar6 - uVar3) < (int)*(char *)(param_1 + 0x29bd) << 2) {
        FUN_0896a294(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7));
        uVar3 = uVar6 - *(byte *)(param_1 + 0x2b8c);
        iVar5 = param_1 + ((int)(uVar3 + ((uint)((int)uVar3 >> 2) >> 0x1e)) >> 2) * 4;
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
        if ((int)uVar3 < 0) {
          bVar2 = *(byte *)((iVar5 - (-uVar3 & 3)) + 0x29fc);
        }
        else {
          bVar2 = *(byte *)(iVar5 + (uVar3 & 3) + 0x29fc);
        }
        if ((bVar2 & 1) == 0) {
          *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
          uVar9 = *(undefined4 *)(iVar8 + 0x25fc);
          iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
        }
        else {
          *(undefined4 *)(iVar4 + 0xbc) = 0x3f800000;
          uVar9 = *(undefined4 *)(iVar8 + 0x25fc);
          iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
        }
        *(undefined4 *)(iVar4 + 0x68) = uVar9;
        uVar3 = (uint)*(byte *)(param_1 + 0x2b8c);
        cVar1 = *(char *)(param_1 + 0x2b8d);
      }
      else {
        cVar1 = *(char *)(param_1 + 0x2b8d);
      }
      uVar6 = uVar6 + 1;
      iVar7 = iVar7 + 4;
      iVar8 = iVar8 + 4;
    } while ((int)uVar6 < (int)(uVar3 + (int)cVar1));
  }
  return;
}

