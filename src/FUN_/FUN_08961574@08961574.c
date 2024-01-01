#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08961574(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  param_2 = param_2 & 0xff;
  iVar1 = param_2 + 1;
  uVar2 = (uint)*(ushort *)(param_1 + 0x518e) + *(ushort *)(param_1 + 0x5190) * param_2;
  if (uVar2 < (uint)*(ushort *)(param_1 + 0x518e) + (uint)*(ushort *)(param_1 + 0x5190) * iVar1) {
    iVar3 = uVar2 * 4;
    do {
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 4;
    } while ((int)uVar2 <
             (int)((uint)*(ushort *)(param_1 + 0x518e) + (uint)*(ushort *)(param_1 + 0x5190) * iVar1
                  ));
  }
  uVar2 = (uint)*(ushort *)(param_1 + 0x51b6) + *(ushort *)(param_1 + 0x51b8) * param_2;
  if (uVar2 < (uint)*(ushort *)(param_1 + 0x51b6) + (uint)*(ushort *)(param_1 + 0x51b8) * iVar1) {
    iVar3 = uVar2 * 4;
    do {
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 4;
    } while ((int)uVar2 <
             (int)((uint)*(ushort *)(param_1 + 0x51b6) + (uint)*(ushort *)(param_1 + 0x51b8) * iVar1
                  ));
  }
  uVar2 = (uint)*(ushort *)(param_1 + 0x51d6) + *(ushort *)(param_1 + 0x51d8) * param_2;
  if (uVar2 < (uint)*(ushort *)(param_1 + 0x51d6) + (uint)*(ushort *)(param_1 + 0x51d8) * iVar1) {
    iVar3 = uVar2 * 4;
    do {
      iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 4;
    } while ((int)uVar2 <
             (int)((uint)*(ushort *)(param_1 + 0x51d6) + (uint)*(ushort *)(param_1 + 0x51d8) * iVar1
                  ));
  }
  return;
}

