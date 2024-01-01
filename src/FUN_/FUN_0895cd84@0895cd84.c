#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895cd84(int param_1,undefined param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar2 = (uint)*(ushort *)(param_1 + 0x5172);
  iVar1 = (int)*(char *)(param_1 + 0x4cda);
  if ((int)uVar2 < (int)(uVar2 + iVar1)) {
    iVar5 = uVar2 << 2;
    iVar4 = param_1 + uVar2 * 0x28 + 0x78;
    uVar6 = uVar2;
    do {
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      if ((int)(uVar6 - uVar2) < iVar1) {
        *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
        iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      }
      FUN_089a5408(0x3fc00000,param_2,iVar3,iVar4,3);
      FUN_089f4a90(0,(float)(uint)*(byte *)(param_1 + (uVar6 - *(ushort *)(param_1 + 0x5172)) +
                                           0x4f74),*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5)
                  );
      uVar2 = (uint)*(ushort *)(param_1 + 0x5172);
      iVar1 = (int)*(char *)(param_1 + 0x4cda);
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
    } while ((int)uVar6 < (int)(uVar2 + iVar1));
  }
  return;
}

