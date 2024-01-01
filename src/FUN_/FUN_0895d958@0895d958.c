#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895d958(int param_1,undefined param_2)

{
  undefined uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  
  uVar8 = (uint)*(ushort *)(param_1 + 0x5162);
  if (uVar8 < uVar8 + 0x14) {
    iVar7 = uVar8 << 2;
    iVar6 = param_1 + uVar8 * 0x28 + 0x78;
    do {
      piVar2 = (int *)FUN_0880cc48();
      uVar3 = FUN_0895647c(param_1,0,uVar8 - *(ushort *)(param_1 + 0x5162) & 0xff);
      iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
      if ((int)uVar3 < 0) {
        uVar4 = -(-uVar3 & 7) & 0x1f;
      }
      else {
        uVar4 = uVar3 & 7;
      }
      if (((uint)*(byte *)(*piVar2 + ((int)(uVar3 + ((uint)((int)uVar3 >> 3) >> 0x1d)) >> 3) + 0x5be
                          ) & 1 << uVar4) != 0) {
        *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
        uVar9 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7);
        uVar1 = FUN_0895647c(param_1,0,uVar8 - *(ushort *)(param_1 + 0x5162) & 0xff);
        FUN_0895d8f4(param_1,uVar9,uVar1);
        iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
      }
      FUN_089a5408(0x3fc00000,param_2,iVar5,iVar6,3);
      uVar8 = uVar8 + 1;
      iVar7 = iVar7 + 4;
      iVar6 = iVar6 + 0x28;
    } while ((int)uVar8 < (int)(*(ushort *)(param_1 + 0x5162) + 0x14));
  }
  uVar8 = (uint)*(ushort *)(param_1 + 0x5164);
  if (uVar8 < uVar8 + 0x14) {
    iVar7 = uVar8 << 2;
    iVar6 = param_1 + uVar8 * 0x28 + 0x78;
    do {
      iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
      *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
      FUN_089a5408(0x3fc00000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7),iVar6,3);
      uVar8 = uVar8 + 1;
      iVar7 = iVar7 + 4;
      iVar6 = iVar6 + 0x28;
    } while ((int)uVar8 < (int)(*(ushort *)(param_1 + 0x5164) + 0x14));
  }
  uVar8 = (uint)*(ushort *)(param_1 + 0x5166);
  if (uVar8 < uVar8 + 0x14) {
    iVar7 = uVar8 << 2;
    iVar6 = param_1 + uVar8 * 0x28 + 0x78;
    do {
      piVar2 = (int *)FUN_0880cc48();
      uVar3 = FUN_0895647c(param_1,0,uVar8 - *(ushort *)(param_1 + 0x5166) & 0xff);
      iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
      if ((int)uVar3 < 0) {
        uVar4 = -(-uVar3 & 7) & 0x1f;
      }
      else {
        uVar4 = uVar3 & 7;
      }
      if (((uint)*(byte *)(*piVar2 + ((int)(uVar3 + ((uint)((int)uVar3 >> 3) >> 0x1d)) >> 3) + 0x5be
                          ) & 1 << uVar4) == 0) {
        *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
        iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
      }
      FUN_089a5408(0x3fc00000,param_2,iVar5,iVar6,3);
      uVar8 = uVar8 + 1;
      iVar7 = iVar7 + 4;
      iVar6 = iVar6 + 0x28;
    } while ((int)uVar8 < (int)(*(ushort *)(param_1 + 0x5166) + 0x14));
  }
  uVar8 = (uint)*(ushort *)(param_1 + 0x51f6);
  if (uVar8 < uVar8 + *(ushort *)(param_1 + 0x51f8)) {
    iVar6 = uVar8 << 2;
    iVar7 = param_1 + uVar8 * 0x28 + 0x78;
    do {
      piVar2 = (int *)FUN_0880cc48();
      uVar3 = FUN_0895647c(param_1,0,uVar8 - *(ushort *)(param_1 + 0x51f6) & 0xff);
      if ((int)uVar3 < 0) {
        uVar4 = -(-uVar3 & 7) & 0x1f;
      }
      else {
        uVar4 = uVar3 & 7;
      }
      if (((uint)*(byte *)(*piVar2 + ((int)(uVar3 + ((uint)((int)uVar3 >> 3) >> 0x1d)) >> 3) + 0x5be
                          ) & 1 << uVar4) == 0) {
        iVar5 = *(int *)(param_1 + 0x1c);
      }
      else {
        piVar2 = (int *)FUN_0880cc48();
        uVar3 = FUN_0895647c(param_1,0,uVar8 - *(ushort *)(param_1 + 0x51f6) & 0xff);
        if ((int)uVar3 < 0) {
          uVar4 = -(-uVar3 & 7) & 0x1f;
        }
        else {
          uVar4 = uVar3 & 7;
        }
        if (((uint)*(byte *)(*piVar2 + ((int)(uVar3 + ((uint)((int)uVar3 >> 3) >> 0x1d)) >> 3) +
                            0x5de) & 1 << uVar4) == 0) {
          iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
          *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
          iVar5 = *(int *)(param_1 + 0x1c);
        }
        else {
          iVar5 = *(int *)(param_1 + 0x1c);
        }
      }
      FUN_089a5408(0x3fc00000,param_2,*(undefined4 *)(iVar5 + iVar6),iVar7,3);
      uVar8 = uVar8 + 1;
      iVar6 = iVar6 + 4;
      iVar7 = iVar7 + 0x28;
    } while ((int)uVar8 <
             (int)((uint)*(ushort *)(param_1 + 0x51f6) + (uint)*(ushort *)(param_1 + 0x51f8)));
  }
  return;
}

