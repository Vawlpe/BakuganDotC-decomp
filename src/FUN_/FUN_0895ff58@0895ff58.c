#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895ff58(int param_1,uint param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = (param_2 & 0xff) + 1;
  uVar2 = (uint)*(ushort *)(param_1 + 0x51e2) +
          (uint)*(ushort *)(param_1 + 0x51e4) * (param_2 & 0xff);
  uVar4 = (uint)*(ushort *)(param_1 + 0x51e2) + (uint)*(ushort *)(param_1 + 0x51e4) * iVar1;
  if (param_3 == '\0') {
    if (uVar2 < uVar4) {
      iVar5 = uVar2 * 4;
      do {
        iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
        *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
        uVar2 = uVar2 + 1;
        iVar5 = iVar5 + 4;
      } while ((int)uVar2 <
               (int)((uint)*(ushort *)(param_1 + 0x51e2) +
                    (uint)*(ushort *)(param_1 + 0x51e4) * iVar1));
    }
  }
  else {
    iVar5 = uVar2 * 4;
    if (uVar2 < uVar4) {
      do {
        iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
        *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
        uVar2 = uVar2 + 1;
        iVar5 = iVar5 + 4;
      } while ((int)uVar2 <
               (int)((uint)*(ushort *)(param_1 + 0x51e2) +
                    (uint)*(ushort *)(param_1 + 0x51e4) * iVar1));
    }
  }
  return;
}

