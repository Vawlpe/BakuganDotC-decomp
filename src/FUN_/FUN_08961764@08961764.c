#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08961764(int param_1,undefined param_2)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint local_30;
  
  local_30 = 0;
  if ('\0' < *(char *)(param_1 + 0x4cdc)) {
    do {
      uVar7 = local_30 & 0xff;
      iVar6 = uVar7 + 1;
      uVar4 = (uint)*(ushort *)(param_1 + 0x518e) + *(ushort *)(param_1 + 0x5190) * uVar7;
      if (uVar4 < (uint)*(ushort *)(param_1 + 0x518e) + (uint)*(ushort *)(param_1 + 0x5190) * iVar6)
      {
        do {
          FUN_089616e0(param_1,param_2,uVar4 & 0xffff);
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 <
                 (int)((uint)*(ushort *)(param_1 + 0x518e) +
                      (uint)*(ushort *)(param_1 + 0x5190) * iVar6));
        uVar2 = *(ushort *)(param_1 + 0x51b8);
      }
      else {
        uVar2 = *(ushort *)(param_1 + 0x51b8);
      }
      uVar4 = (uint)*(ushort *)(param_1 + 0x51b6) + uVar2 * uVar7;
      if (uVar4 < (uint)*(ushort *)(param_1 + 0x51b6) + (uint)uVar2 * iVar6) {
        do {
          FUN_089616e0(param_1,param_2,uVar4 & 0xffff);
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 <
                 (int)((uint)*(ushort *)(param_1 + 0x51b6) +
                      (uint)*(ushort *)(param_1 + 0x51b8) * iVar6));
        uVar2 = *(ushort *)(param_1 + 0x51d8);
      }
      else {
        uVar2 = *(ushort *)(param_1 + 0x51d8);
      }
      uVar4 = (uint)*(ushort *)(param_1 + 0x51d6) + uVar2 * uVar7;
      if (uVar4 < (uint)*(ushort *)(param_1 + 0x51d6) + (uint)uVar2 * iVar6) {
        iVar5 = uVar4 * 4;
        do {
          FUN_089616e0(param_1,param_2,uVar4 & 0xffff);
          cVar1 = *(char *)(param_1 + uVar7 * 2 +
                            (uVar4 - ((uint)*(ushort *)(param_1 + 0x51d6) +
                                     *(ushort *)(param_1 + 0x51d8) * uVar7)) + 0x4fd8);
          iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
          if (cVar1 == -1) {
            *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
            iVar3 = (uint)*(ushort *)(param_1 + 0x51d6) +
                    (uint)*(ushort *)(param_1 + 0x51d8) * iVar6;
          }
          else {
            FUN_0892bdec(iVar3,cVar1);
            iVar3 = (uint)*(ushort *)(param_1 + 0x51d6) +
                    (uint)*(ushort *)(param_1 + 0x51d8) * iVar6;
          }
          uVar4 = uVar4 + 1;
          iVar5 = iVar5 + 4;
        } while ((int)uVar4 < iVar3);
      }
      local_30 = local_30 + 1;
    } while ((int)local_30 < (int)*(char *)(param_1 + 0x4cdc));
  }
  return;
}

