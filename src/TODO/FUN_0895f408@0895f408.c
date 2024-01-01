#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_0895f408(int param_1,char param_2)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  uVar9 = (uint)*(ushort *)(param_1 + 0x5192);
  iVar3 = (int)*(char *)(param_1 + 0x4cda);
  cVar5 = '\0';
  if ((int)uVar9 < (int)(uVar9 + iVar3)) {
    iVar8 = uVar9 << 2;
    iVar7 = param_1 + uVar9 * 0x28 + 0x78;
    do {
      uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8);
      if (param_2 == '\0') {
        cVar2 = FUN_089a91a0(0x3fc00000,0x3f800000,0x41000000,0,uVar4,iVar7,3);
        iVar3 = (int)*(char *)(param_1 + 0x4cda);
        iVar6 = (uint)*(ushort *)(param_1 + 0x5192) + iVar3;
      }
      else {
        cVar2 = FUN_089a91a0(0x3f800000,0x3fc00000,0x41000000,param_2,uVar4,iVar7,3);
        iVar3 = (int)*(char *)(param_1 + 0x4cda);
        iVar6 = (uint)*(ushort *)(param_1 + 0x5192) + iVar3;
      }
      cVar5 = cVar5 + cVar2;
      uVar9 = uVar9 + 1;
      iVar8 = iVar8 + 4;
      iVar7 = iVar7 + 0x28;
    } while ((int)uVar9 < iVar6);
  }
  uVar9 = (uint)*(ushort *)(param_1 + 0x5196);
  if ((int)uVar9 < (int)(uVar9 + iVar3)) {
    iVar8 = uVar9 << 2;
    iVar7 = param_1 + uVar9 * 0x28 + 0x78;
    do {
      uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8);
      if (param_2 == '\0') {
        cVar2 = FUN_089a91a0(0x3fc00000,0x3f800000,0x41000000,0,uVar4,iVar7,3);
        iVar3 = (int)*(char *)(param_1 + 0x4cda);
        iVar6 = (uint)*(ushort *)(param_1 + 0x5196) + iVar3;
      }
      else {
        cVar2 = FUN_089a91a0(0x3f800000,0x3fc00000,0x41000000,param_2,uVar4,iVar7,3);
        iVar3 = (int)*(char *)(param_1 + 0x4cda);
        iVar6 = (uint)*(ushort *)(param_1 + 0x5196) + iVar3;
      }
      cVar5 = cVar5 + cVar2;
      uVar9 = uVar9 + 1;
      iVar8 = iVar8 + 4;
      iVar7 = iVar7 + 0x28;
    } while ((int)uVar9 < iVar6);
    uVar1 = *(ushort *)(param_1 + 0x519c);
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x519c);
  }
  uVar9 = (uint)*(ushort *)(param_1 + 0x519a);
  if ((int)uVar9 < (int)(uVar9 + iVar3 * (uint)uVar1)) {
    iVar8 = uVar9 << 2;
    iVar7 = param_1 + uVar9 * 0x28 + 0x78;
    do {
      uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8);
      if (param_2 == '\0') {
        cVar2 = FUN_089a91a0(0x3fc00000,0x3f800000,0x41000000,0,uVar4,iVar7,3);
        iVar3 = (int)*(char *)(param_1 + 0x4cda);
        iVar6 = (uint)*(ushort *)(param_1 + 0x519a) + iVar3 * (uint)*(ushort *)(param_1 + 0x519c);
      }
      else {
        cVar2 = FUN_089a91a0(0x3f800000,0x3fc00000,0x41000000,param_2,uVar4,iVar7,3);
        iVar3 = (int)*(char *)(param_1 + 0x4cda);
        iVar6 = (uint)*(ushort *)(param_1 + 0x519a) + iVar3 * (uint)*(ushort *)(param_1 + 0x519c);
      }
      cVar5 = cVar5 + cVar2;
      uVar9 = uVar9 + 1;
      iVar8 = iVar8 + 4;
      iVar7 = iVar7 + 0x28;
    } while ((int)uVar9 < iVar6);
    uVar1 = *(ushort *)(param_1 + 0x51e4);
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x51e4);
  }
  uVar9 = (uint)*(ushort *)(param_1 + 0x51e2);
  if ((int)uVar9 < (int)(uVar9 + iVar3 * (uint)uVar1)) {
    iVar8 = uVar9 << 2;
    iVar7 = param_1 + uVar9 * 0x28 + 0x78;
    do {
      uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8);
      if (param_2 == '\0') {
        cVar2 = FUN_089a91a0(0x3fc00000,0x3f800000,0x41000000,0,uVar4,iVar7,3);
        iVar3 = (int)*(char *)(param_1 + 0x4cda);
        iVar6 = (uint)*(ushort *)(param_1 + 0x51e2) + iVar3 * (uint)*(ushort *)(param_1 + 0x51e4);
      }
      else {
        cVar2 = FUN_089a91a0(0x3f800000,0x3fc00000,0x41000000,param_2,uVar4,iVar7,3);
        iVar3 = (int)*(char *)(param_1 + 0x4cda);
        iVar6 = (uint)*(ushort *)(param_1 + 0x51e2) + iVar3 * (uint)*(ushort *)(param_1 + 0x51e4);
      }
      cVar5 = cVar5 + cVar2;
      uVar9 = uVar9 + 1;
      iVar8 = iVar8 + 4;
      iVar7 = iVar7 + 0x28;
    } while ((int)uVar9 < iVar6);
    uVar1 = *(ushort *)(param_1 + 0x51f4);
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x51f4);
  }
  uVar9 = (uint)*(ushort *)(param_1 + 0x51f2);
  if ((int)uVar9 < (int)(uVar9 + iVar3 * (uint)uVar1)) {
    iVar3 = uVar9 << 2;
    iVar7 = param_1 + uVar9 * 0x28 + 0x78;
    do {
      uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3);
      if (param_2 == '\0') {
        cVar2 = FUN_089a91a0(0x3fc00000,0x3f800000,0x41000000,0,uVar4,iVar7,3);
        iVar8 = (uint)*(ushort *)(param_1 + 0x51f2) +
                (int)*(char *)(param_1 + 0x4cda) * (uint)*(ushort *)(param_1 + 0x51f4);
      }
      else {
        cVar2 = FUN_089a91a0(0x3f800000,0x3fc00000,0x41000000,param_2,uVar4,iVar7,3);
        iVar8 = (uint)*(ushort *)(param_1 + 0x51f2) +
                (int)*(char *)(param_1 + 0x4cda) * (uint)*(ushort *)(param_1 + 0x51f4);
      }
      cVar5 = cVar5 + cVar2;
      uVar9 = uVar9 + 1;
      iVar3 = iVar3 + 4;
      iVar7 = iVar7 + 0x28;
    } while ((int)uVar9 < iVar8);
  }
  FUN_0895f328(param_1,*(undefined2 *)(param_1 + 0x5192),*(undefined2 *)(param_1 + 0x5194),
               *(undefined2 *)(param_1 + 0x5196),*(undefined2 *)(param_1 + 0x5198),
               *(undefined *)(param_1 + 0x4cdb));
  FUN_0895f328(param_1,*(undefined2 *)(param_1 + 0x5192),*(undefined2 *)(param_1 + 0x5194),
               *(undefined2 *)(param_1 + 0x519a),*(undefined2 *)(param_1 + 0x519c),
               *(undefined *)(param_1 + 0x4cdb));
  FUN_0895f328(param_1,*(undefined2 *)(param_1 + 0x5192),*(undefined2 *)(param_1 + 0x5194),
               *(undefined2 *)(param_1 + 0x51e2),*(undefined2 *)(param_1 + 0x51e4),
               *(undefined *)(param_1 + 0x4cdb));
  FUN_0895f328(param_1,*(undefined2 *)(param_1 + 0x5192),*(undefined2 *)(param_1 + 0x5194),
               *(undefined2 *)(param_1 + 0x51f2),*(undefined2 *)(param_1 + 0x51f4),
               *(undefined *)(param_1 + 0x4cdb));
  return cVar5 != '\0';
}

