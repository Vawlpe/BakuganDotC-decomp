#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895d6cc(int param_1,undefined param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)*(ushort *)(param_1 + 0x516a);
  if (uVar4 < uVar4 + 1) {
    iVar3 = uVar4 << 2;
    iVar2 = param_1 + uVar4 * 0x28 + 0x78;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0x68) = 0xc1700000;
      FUN_089a5408(0x3fc00000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,3);
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while ((int)uVar4 < (int)(*(ushort *)(param_1 + 0x516a) + 1));
  }
  return;
}

