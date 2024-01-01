#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895cfe8(int param_1,undefined param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = (uint)*(ushort *)(param_1 + 0x5170);
  iVar2 = (int)*(char *)(param_1 + 0x4cda);
  if ((int)uVar1 < (int)(uVar1 + iVar2)) {
    iVar5 = uVar1 << 2;
    iVar6 = param_1 + uVar1 * 0x28 + 0x78;
    uVar4 = uVar1;
    do {
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      if ((int)(uVar4 - uVar1) < iVar2) {
        if ((int)*(char *)(param_1 + 0x4cdb) < (int)(uVar4 - uVar1)) {
          *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
          iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
        }
        else {
          *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
          iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
        }
      }
      FUN_089a5408(0x3fc00000,param_2,iVar3,iVar6,3);
      uVar1 = (uint)*(ushort *)(param_1 + 0x5170);
      iVar2 = (int)*(char *)(param_1 + 0x4cda);
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 4;
      iVar6 = iVar6 + 0x28;
    } while ((int)uVar4 < (int)(uVar1 + iVar2));
  }
  return;
}

