#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895d29c(int param_1,undefined param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = (uint)*(ushort *)(param_1 + 0x5160);
  iVar4 = uVar2 << 2;
  iVar3 = param_1 + uVar2 * 0x28 + 0x78;
  uVar5 = uVar2;
  do {
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
    FUN_089a5408(0x3fc00000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar3,3);
    uVar5 = uVar5 + 1;
    iVar4 = iVar4 + 4;
    iVar3 = iVar3 + 0x28;
  } while (uVar5 <= uVar2);
  return;
}

