#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08960e38(int param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  param_2 = param_2 & 0xff;
  iVar8 = param_2 + 1;
  uVar2 = (uint)*(ushort *)(param_1 + 0x51ae) + *(ushort *)(param_1 + 0x51b0) * param_2;
  if (uVar2 < (uint)*(ushort *)(param_1 + 0x51ae) + (uint)*(ushort *)(param_1 + 0x51b0) * iVar8) {
    iVar7 = param_1 + param_2 * 4;
    uVar5 = 0xfffffffe;
    iVar6 = uVar2 * 4;
    do {
      iVar3 = FUN_08960da8(param_1,uVar2 & 0xffff);
      if ((*(byte *)(iVar7 + (iVar3 - ((uint)*(ushort *)(param_1 + 0x51ae) +
                                      *(ushort *)(param_1 + 0x51b0) * param_2)) + 0x4fc8) & 1) == 0)
      {
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
        *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & uVar5;
        uVar1 = *(ushort *)(param_1 + 0x51b0);
      }
      else {
        uVar1 = *(ushort *)(param_1 + 0x51b0);
      }
      uVar2 = iVar3 + 1;
      iVar6 = iVar6 + 4;
    } while ((int)uVar2 < (int)((uint)*(ushort *)(param_1 + 0x51ae) + (uint)uVar1 * iVar8));
  }
  uVar2 = (uint)*(ushort *)(param_1 + 0x51ba) + *(ushort *)(param_1 + 0x51bc) * param_2;
  if (uVar2 < (uint)*(ushort *)(param_1 + 0x51ba) + (uint)*(ushort *)(param_1 + 0x51bc) * iVar8) {
    iVar7 = param_1 + param_2 * 4;
    uVar5 = 0xfffffffe;
    iVar6 = uVar2 * 4;
    do {
      iVar3 = FUN_08960da8(param_1,uVar2 & 0xffff);
      if ((*(byte *)(iVar7 + (iVar3 - ((uint)*(ushort *)(param_1 + 0x51ba) +
                                      *(ushort *)(param_1 + 0x51bc) * param_2)) + 0x4fc8) & 1) == 0)
      {
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
        *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & uVar5;
        uVar1 = *(ushort *)(param_1 + 0x51bc);
      }
      else {
        uVar1 = *(ushort *)(param_1 + 0x51bc);
      }
      uVar2 = iVar3 + 1;
      iVar6 = iVar6 + 4;
    } while ((int)uVar2 < (int)((uint)*(ushort *)(param_1 + 0x51ba) + (uint)uVar1 * iVar8));
  }
  uVar2 = (uint)*(ushort *)(param_1 + 0x51d2) + *(ushort *)(param_1 + 0x51d4) * param_2;
  if (uVar2 < (uint)*(ushort *)(param_1 + 0x51d2) + (uint)*(ushort *)(param_1 + 0x51d4) * iVar8) {
    iVar6 = uVar2 * 4;
    do {
      FUN_08960da8(param_1,uVar2 & 0xffff);
      iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
      if (*(char *)(param_1 + param_2 * 2 +
                    (uVar2 - ((uint)*(ushort *)(param_1 + 0x51d2) +
                             *(ushort *)(param_1 + 0x51d4) * param_2)) + 0x4fd8) == -1) {
        *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) & 0xfffffffe;
        iVar7 = (uint)*(ushort *)(param_1 + 0x51d2) + (uint)*(ushort *)(param_1 + 0x51d4) * iVar8;
      }
      else {
        FUN_0892bdec();
        iVar7 = (uint)*(ushort *)(param_1 + 0x51d2) + (uint)*(ushort *)(param_1 + 0x51d4) * iVar8;
      }
      uVar2 = uVar2 + 1;
      iVar6 = iVar6 + 4;
    } while ((int)uVar2 < iVar7);
  }
  uVar2 = (uint)*(ushort *)(param_1 + 0x51de) + *(ushort *)(param_1 + 0x51e0) * param_2;
  if (uVar2 < (uint)*(ushort *)(param_1 + 0x51de) + (uint)*(ushort *)(param_1 + 0x51e0) * iVar8) {
    iVar6 = uVar2 * 4;
    do {
      FUN_08960da8(param_1,uVar2 & 0xffff);
      FUN_089a56a0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),2);
      if ((*(byte *)(param_1 + param_2 * 4 +
                     (uVar2 - ((uint)*(ushort *)(param_1 + 0x51de) +
                              *(ushort *)(param_1 + 0x51e0) * param_2)) + 0x4fc8) & 1) == 0) {
        iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
        *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) & 0xfffffffe;
        uVar1 = *(ushort *)(param_1 + 0x51e0);
      }
      else {
        uVar1 = *(ushort *)(param_1 + 0x51e0);
      }
      uVar2 = uVar2 + 1;
      iVar6 = iVar6 + 4;
    } while ((int)uVar2 < (int)((uint)*(ushort *)(param_1 + 0x51de) + (uint)uVar1 * iVar8));
  }
  return;
}

