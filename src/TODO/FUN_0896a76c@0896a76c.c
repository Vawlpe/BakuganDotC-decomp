#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0896a76c(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x2b80);
  iVar3 = uVar2 + (int)*(char *)(param_1 + 0x2b81);
  iVar7 = uVar2 * 4;
  if ((int)uVar2 < iVar3) {
    iVar8 = param_1 + iVar7;
    uVar6 = uVar2;
    do {
      uVar4 = uVar6 - uVar2;
      if ((int)uVar4 < (int)*(char *)(param_1 + 0x29bd) << 2) {
        iVar3 = param_1 + ((int)(uVar4 + ((uint)((int)uVar4 >> 2) >> 0x1e)) >> 2) * 4;
        iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
        if ((int)uVar4 < 0) {
          bVar1 = *(byte *)((iVar3 - (-uVar4 & 3)) + 0x29fc);
        }
        else {
          bVar1 = *(byte *)(iVar3 + (uVar4 & 3) + 0x29fc);
        }
        if ((bVar1 & 1) == 0) {
          *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
          uVar2 = (uint)*(byte *)(param_1 + 0x2b80);
          iVar3 = uVar2 + (int)*(char *)(param_1 + 0x2b81);
        }
        else {
          FUN_0896a294(param_1,iVar5);
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7) + 0xbc) = 0x3f800000;
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7) + 0x68) =
               *(undefined4 *)(iVar8 + 0x25fc);
          uVar2 = (uint)*(byte *)(param_1 + 0x2b80);
          iVar3 = uVar2 + (int)*(char *)(param_1 + 0x2b81);
        }
      }
      uVar6 = uVar6 + 1;
      iVar7 = iVar7 + 4;
      iVar8 = iVar8 + 4;
    } while ((int)uVar6 < iVar3);
  }
  return;
}

