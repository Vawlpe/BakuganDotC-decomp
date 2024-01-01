#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08961198(int param_1,uint param_2)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  param_2 = param_2 & 0xff;
  iVar5 = param_2 + 1;
  uVar4 = (uint)*(ushort *)(param_1 + 0x518e) + *(ushort *)(param_1 + 0x5190) * param_2;
  if (uVar4 < (uint)*(ushort *)(param_1 + 0x518e) + (uint)*(ushort *)(param_1 + 0x5190) * iVar5) {
    do {
      FUN_08960100(param_1,0,uVar4 & 0xffff);
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 <
             (int)((uint)*(ushort *)(param_1 + 0x518e) + (uint)*(ushort *)(param_1 + 0x5190) * iVar5
                  ));
    uVar2 = *(ushort *)(param_1 + 0x51b8);
  }
  else {
    uVar2 = *(ushort *)(param_1 + 0x51b8);
  }
  uVar4 = (uint)*(ushort *)(param_1 + 0x51b6) + uVar2 * param_2;
  if (uVar4 < (uint)*(ushort *)(param_1 + 0x51b6) + (uint)uVar2 * iVar5) {
    do {
      FUN_08960100(param_1,0,uVar4 & 0xffff);
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 <
             (int)((uint)*(ushort *)(param_1 + 0x51b6) + (uint)*(ushort *)(param_1 + 0x51b8) * iVar5
                  ));
    uVar2 = *(ushort *)(param_1 + 0x51d8);
  }
  else {
    uVar2 = *(ushort *)(param_1 + 0x51d8);
  }
  uVar4 = (uint)*(ushort *)(param_1 + 0x51d6) + uVar2 * param_2;
  if (uVar4 < (uint)*(ushort *)(param_1 + 0x51d6) + (uint)uVar2 * iVar5) {
    iVar6 = uVar4 * 4;
    do {
      FUN_08960100(param_1,0,uVar4 & 0xffff);
      cVar1 = *(char *)(param_1 + param_2 * 2 +
                        (uVar4 - ((uint)*(ushort *)(param_1 + 0x51d6) +
                                 *(ushort *)(param_1 + 0x51d8) * param_2)) + 0x4fd8);
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
      if (cVar1 == -1) {
        *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
        iVar3 = (uint)*(ushort *)(param_1 + 0x51d6) + (uint)*(ushort *)(param_1 + 0x51d8) * iVar5;
      }
      else {
        FUN_0892bdec(iVar3,cVar1);
        iVar3 = (uint)*(ushort *)(param_1 + 0x51d6) + (uint)*(ushort *)(param_1 + 0x51d8) * iVar5;
      }
      uVar4 = uVar4 + 1;
      iVar6 = iVar6 + 4;
    } while ((int)uVar4 < iVar3);
  }
  return;
}

