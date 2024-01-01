#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08962a58(int param_1,undefined param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar3 = (uint)*(ushort *)(param_1 + 0x5192);
  iVar2 = (int)*(char *)(param_1 + 0x4cda);
  if ((int)uVar3 < (int)(uVar3 + iVar2)) {
    iVar7 = uVar3 << 2;
    iVar5 = param_1 + uVar3 * 0x28 + 0x78;
    uVar8 = uVar3;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
      if ((int)(uVar8 - uVar3) < *(char *)(param_1 + 0x4cdb) + 1) {
        *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
      }
      FUN_089a5408(0x3fc00000,param_2,iVar2,iVar5,3);
      uVar3 = (uint)*(ushort *)(param_1 + 0x5192);
      iVar2 = (int)*(char *)(param_1 + 0x4cda);
      uVar8 = uVar8 + 1;
      iVar7 = iVar7 + 4;
      iVar5 = iVar5 + 0x28;
    } while ((int)uVar8 < (int)(uVar3 + iVar2));
  }
  uVar3 = (uint)*(ushort *)(param_1 + 0x5196);
  if ((int)uVar3 < (int)(uVar3 + iVar2)) {
    iVar7 = uVar3 << 2;
    iVar5 = param_1 + uVar3 * 0x28 + 0x78;
    uVar8 = uVar3;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
      if ((int)(uVar8 - uVar3) < *(char *)(param_1 + 0x4cdb) + 1) {
        *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
      }
      *(undefined4 *)(iVar2 + 0xb0) = 0x3e4ccccd;
      *(undefined4 *)(iVar2 + 0xb4) = 0x3f800000;
      *(undefined4 *)(iVar2 + 0xb8) = 0;
      *(undefined4 *)(iVar2 + 0xbc) = *(undefined4 *)(iVar2 + 0xbc);
      FUN_089a5408(0x3fc00000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7),iVar5,3);
      uVar3 = (uint)*(ushort *)(param_1 + 0x5196);
      iVar2 = (int)*(char *)(param_1 + 0x4cda);
      uVar8 = uVar8 + 1;
      iVar7 = iVar7 + 4;
      iVar5 = iVar5 + 0x28;
    } while ((int)uVar8 < (int)(uVar3 + iVar2));
    uVar1 = *(ushort *)(param_1 + 0x519c);
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x519c);
  }
  uVar8 = (uint)uVar1;
  uVar3 = (uint)*(ushort *)(param_1 + 0x519a);
  if ((int)uVar3 < (int)(uVar3 + iVar2 * uVar8)) {
    iVar7 = uVar3 << 2;
    iVar5 = param_1 + uVar3 * 0x28 + 0x78;
    uVar6 = uVar3;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
      if ((int)(uVar6 - uVar3) < (int)((*(char *)(param_1 + 0x4cdb) + 1) * uVar8)) {
        *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
        uVar3 = (uint)*(ushort *)(param_1 + 0x519a);
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
        uVar8 = (uint)*(ushort *)(param_1 + 0x519c);
      }
      FUN_0895f2cc(param_1,iVar2,
                   (int)(uint)*(byte *)(param_1 + (int)(uVar6 - uVar3) / (int)uVar8 + 0x5020) /
                   (((int)(uVar6 - uVar3) % (int)uVar8) * 0x32 + 0x32) != 0);
      FUN_089a5408(0x3fc00000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7),iVar5,3);
      iVar2 = (int)*(char *)(param_1 + 0x4cda);
      uVar8 = (uint)*(ushort *)(param_1 + 0x519c);
      uVar3 = (uint)*(ushort *)(param_1 + 0x519a);
      uVar6 = uVar6 + 1;
      iVar7 = iVar7 + 4;
      iVar5 = iVar5 + 0x28;
    } while ((int)uVar6 < (int)(uVar3 + iVar2 * uVar8));
    uVar1 = *(ushort *)(param_1 + 0x51e4);
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x51e4);
  }
  uVar8 = (uint)uVar1;
  uVar3 = (uint)*(ushort *)(param_1 + 0x51e2);
  if ((int)uVar3 < (int)(uVar3 + iVar2 * uVar8)) {
    iVar7 = uVar3 << 2;
    iVar5 = param_1 + uVar3 * 0x28 + 0x78;
    uVar6 = uVar3;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
      if ((int)(uVar6 - uVar3) / (int)uVar8 == (int)*(char *)(param_1 + 0x4cdb)) {
        *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
        uVar3 = (uint)*(ushort *)(param_1 + 0x51e2);
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
      }
      if ((uVar6 - uVar3 & 1) == 0) {
        FUN_089a56a0(iVar2,4);
        uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7);
      }
      else {
        FUN_089a56a0(iVar2,5);
        uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7);
      }
      FUN_089a5408(0x3fc00000,param_2,uVar4,iVar5,3);
      iVar2 = (int)*(char *)(param_1 + 0x4cda);
      uVar8 = (uint)*(ushort *)(param_1 + 0x51e4);
      uVar3 = (uint)*(ushort *)(param_1 + 0x51e2);
      uVar6 = uVar6 + 1;
      iVar7 = iVar7 + 4;
      iVar5 = iVar5 + 0x28;
    } while ((int)uVar6 < (int)(uVar3 + iVar2 * uVar8));
    uVar1 = *(ushort *)(param_1 + 0x51f4);
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x51f4);
  }
  uVar8 = (uint)uVar1;
  uVar3 = (uint)*(ushort *)(param_1 + 0x51f2);
  if ((int)uVar3 < (int)(uVar3 + iVar2 * uVar8)) {
    iVar2 = uVar3 << 2;
    iVar5 = param_1 + uVar3 * 0x28 + 0x78;
    uVar6 = uVar3;
    do {
      iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2);
      if ((int)(uVar6 - uVar3) / (int)uVar8 <= (int)*(char *)(param_1 + 0x4cdb)) {
        *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) | 1;
        iVar7 = uVar6 - *(ushort *)(param_1 + 0x51f2);
        FUN_089f4a90(0,(float)((int)(uint)*(byte *)(param_1 + iVar7 / (int)(uint)*(ushort *)
                                                                                  (param_1 + 0x51f4)
                                                   + 0x5020) /
                               ((iVar7 % (int)(uint)*(ushort *)(param_1 + 0x51f4)) * 0x32 + 0x32) -
                               1U & 0xff),*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2));
        iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2);
      }
      FUN_089a5408(0x3fc00000,param_2,iVar7,iVar5,3);
      uVar8 = (uint)*(ushort *)(param_1 + 0x51f4);
      uVar6 = uVar6 + 1;
      uVar3 = (uint)*(ushort *)(param_1 + 0x51f2);
      iVar2 = iVar2 + 4;
      iVar5 = iVar5 + 0x28;
    } while ((int)uVar6 < (int)(uVar3 + (int)*(char *)(param_1 + 0x4cda) * uVar8));
  }
  return;
}

