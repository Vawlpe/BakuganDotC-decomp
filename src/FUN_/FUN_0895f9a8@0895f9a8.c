#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895f9a8(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  param_2 = param_2 & 0xff;
  uVar2 = (uint)*(ushort *)(param_1 + 0x519c);
  iVar3 = param_2 + 1;
  uVar1 = (uint)*(ushort *)(param_1 + 0x519a);
  uVar5 = uVar1 + uVar2 * param_2;
  iVar4 = uVar5 * 4;
  if (uVar5 < uVar1 + uVar2 * iVar3) {
    do {
      FUN_0895f2cc(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),
                   (int)(uint)*(byte *)(param_1 + (int)(uVar5 - uVar1) / (int)uVar2 + 0x5020) /
                   (((int)(uVar5 - uVar1) % (int)uVar2) * 0x32 + 0x32) != 0);
      uVar2 = (uint)*(ushort *)(param_1 + 0x519c);
      uVar1 = (uint)*(ushort *)(param_1 + 0x519a);
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 4;
    } while ((int)uVar5 < (int)(uVar1 + uVar2 * iVar3));
  }
  uVar2 = (uint)*(ushort *)(param_1 + 0x51f4);
  uVar1 = (uint)*(ushort *)(param_1 + 0x51f2);
  uVar5 = uVar1 + param_2 * uVar2;
  if (uVar5 < uVar1 + iVar3 * uVar2) {
    iVar4 = uVar5 * 4;
    do {
      FUN_089f4a90(0,(float)((int)(uint)*(byte *)(param_1 + (int)(uVar5 - uVar1) / (int)uVar2 +
                                                 0x5020) /
                             (((int)(uVar5 - uVar1) % (int)uVar2) * 0x32 + 0x32) - 1U & 0xff),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4));
      uVar2 = (uint)*(ushort *)(param_1 + 0x51f4);
      uVar1 = (uint)*(ushort *)(param_1 + 0x51f2);
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 4;
    } while ((int)uVar5 < (int)(uVar1 + iVar3 * uVar2));
  }
  return;
}

