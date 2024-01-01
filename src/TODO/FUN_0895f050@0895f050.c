#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895f050(int param_1,undefined param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (('\x02' < *(char *)(param_1 + 0x4cda)) &&
     (uVar5 = (uint)*(ushort *)(param_1 + 0x5180), uVar5 < uVar5 + 3)) {
    iVar4 = uVar5 << 2;
    iVar3 = param_1 + uVar5 * 0x28 + 0x78;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4);
      if (uVar5 == *(ushort *)(param_1 + 0x5180)) {
        FUN_089f4c84();
        uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4);
      }
      FUN_089a5408(0x3fc00000,param_2,uVar2,iVar3,1);
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 0x28;
    } while ((int)uVar5 < (int)(*(ushort *)(param_1 + 0x5180) + 3));
  }
  return;
}

