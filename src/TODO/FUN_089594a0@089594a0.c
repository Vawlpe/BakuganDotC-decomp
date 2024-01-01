#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089594a0(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  
  iVar8 = (int)*(char *)(param_1 + 0x4cda);
  iVar13 = 0;
  uVar7 = (uint)*(ushort *)(param_1 + 0x5194);
  uVar6 = (uint)*(ushort *)(param_1 + 0x5192);
  if (0 < iVar8) {
    do {
      iVar10 = 0;
      if (uVar7 != 0) {
        iVar8 = *(int *)(param_1 + 0x1c);
        do {
          uVar6 = uVar6 + iVar13 * uVar7 + iVar10 & 0xffff;
          iVar14 = uVar6 * 4;
          FUN_089f46dc(*(undefined4 *)(iVar8 + iVar14));
          iVar8 = *(int *)(*(int *)(param_1 + 0x1c) + iVar14);
          *(uint *)(iVar8 + 0xd0) = *(uint *)(iVar8 + 0xd0) | 0x20;
          FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar14));
          iVar8 = *(int *)(param_1 + 0x1c);
          iVar5 = param_1 + uVar6 * 8;
          iVar10 = iVar10 + 1;
          *(undefined4 *)(iVar5 + 0x4118) = *(undefined4 *)(*(int *)(iVar8 + iVar14) + 0x60);
          uVar7 = (uint)*(ushort *)(param_1 + 0x5194);
          *(undefined4 *)(iVar5 + 0x411c) = *(undefined4 *)(*(int *)(iVar8 + iVar14) + 100);
          uVar6 = (uint)*(ushort *)(param_1 + 0x5192);
        } while (iVar10 < (int)uVar7);
        iVar8 = (int)*(char *)(param_1 + 0x4cda);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar8);
  }
  FUN_0895932c(param_1,uVar6,uVar7,*(undefined2 *)(param_1 + 0x5196),
               *(undefined2 *)(param_1 + 0x5198));
  FUN_0895932c(param_1,*(undefined2 *)(param_1 + 0x5192),*(undefined2 *)(param_1 + 0x5194),
               *(undefined2 *)(param_1 + 0x519a),*(undefined2 *)(param_1 + 0x519c));
  FUN_0895932c(param_1,*(undefined2 *)(param_1 + 0x5192),*(undefined2 *)(param_1 + 0x5194),
               *(undefined2 *)(param_1 + 0x51e2),*(undefined2 *)(param_1 + 0x51e4));
  FUN_0895932c(param_1,*(undefined2 *)(param_1 + 0x5192),*(undefined2 *)(param_1 + 0x5194),
               *(undefined2 *)(param_1 + 0x51f2),*(undefined2 *)(param_1 + 0x51f4));
  iVar8 = (int)*(char *)(param_1 + 0x4cda);
  iVar13 = 0;
  uVar6 = (uint)*(ushort *)(param_1 + 0x5182);
  uVar7 = (uint)*(ushort *)(param_1 + 0x5184);
  if (0 < iVar8) {
    uVar9 = (uint)*(ushort *)(param_1 + 0x5194);
    do {
      iVar10 = 0;
      if (uVar9 != 0) {
        iVar8 = *(int *)(param_1 + 0x1c);
        do {
          uVar6 = uVar6 + iVar13 * uVar7 + iVar10 & 0xffff;
          iVar14 = uVar6 * 4;
          FUN_089f46dc(*(undefined4 *)(iVar8 + iVar14));
          iVar8 = *(int *)(*(int *)(param_1 + 0x1c) + iVar14);
          *(uint *)(iVar8 + 0xd0) = *(uint *)(iVar8 + 0xd0) | 0x20;
          FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar14));
          iVar8 = *(int *)(param_1 + 0x1c);
          iVar5 = param_1 + uVar6 * 8;
          *(undefined4 *)(iVar5 + 0x4118) = *(undefined4 *)(*(int *)(iVar8 + iVar14) + 0x60);
          uVar9 = (uint)*(ushort *)(param_1 + 0x5194);
          iVar10 = iVar10 + 1;
          *(undefined4 *)(iVar5 + 0x411c) = *(undefined4 *)(*(int *)(iVar8 + iVar14) + 100);
          uVar6 = (uint)*(ushort *)(param_1 + 0x5182);
          uVar7 = (uint)*(ushort *)(param_1 + 0x5184);
        } while (iVar10 < (int)uVar9);
        iVar8 = (int)*(char *)(param_1 + 0x4cda);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar8);
  }
  FUN_0895932c(param_1,uVar6,uVar7,*(undefined2 *)(param_1 + 0x5186),
               *(undefined2 *)(param_1 + 0x5188));
  FUN_0895932c(param_1,*(undefined2 *)(param_1 + 0x5182),*(undefined2 *)(param_1 + 0x5184),
               *(undefined2 *)(param_1 + 0x518a),*(undefined2 *)(param_1 + 0x518c));
  FUN_0895932c(param_1,*(undefined2 *)(param_1 + 0x5182),*(undefined2 *)(param_1 + 0x5184),
               *(undefined2 *)(param_1 + 0x519e),*(undefined2 *)(param_1 + 0x51a0));
  FUN_0895932c(param_1,*(undefined2 *)(param_1 + 0x5182),*(undefined2 *)(param_1 + 0x5184),
               *(undefined2 *)(param_1 + 0x51a2),*(undefined2 *)(param_1 + 0x51a4));
  FUN_0895932c(param_1,*(undefined2 *)(param_1 + 0x5182),*(undefined2 *)(param_1 + 0x5184),
               *(undefined2 *)(param_1 + 0x51a6),*(undefined2 *)(param_1 + 0x51a8));
  FUN_0895932c(param_1,*(undefined2 *)(param_1 + 0x5182),*(undefined2 *)(param_1 + 0x5184),
               *(undefined2 *)(param_1 + 0x51aa),*(undefined2 *)(param_1 + 0x51ac));
  FUN_0895932c(param_1,*(undefined2 *)(param_1 + 0x5182),*(undefined2 *)(param_1 + 0x5184),
               *(undefined2 *)(param_1 + 0x51ae),*(undefined2 *)(param_1 + 0x51b0));
  FUN_0895932c(param_1,*(undefined2 *)(param_1 + 0x5182),*(undefined2 *)(param_1 + 0x5184),
               *(undefined2 *)(param_1 + 0x51b2),*(undefined2 *)(param_1 + 0x51b4));
  FUN_0895932c(param_1,*(undefined2 *)(param_1 + 0x5182),*(undefined2 *)(param_1 + 0x5184),
               *(undefined2 *)(param_1 + 0x51ba),*(undefined2 *)(param_1 + 0x51bc));
  FUN_0895932c(param_1,*(undefined2 *)(param_1 + 0x5182),*(undefined2 *)(param_1 + 0x5184),
               *(undefined2 *)(param_1 + 0x51be),*(undefined2 *)(param_1 + 0x51c0));
  FUN_0895932c(param_1,*(undefined2 *)(param_1 + 0x5182),*(undefined2 *)(param_1 + 0x5184),
               *(undefined2 *)(param_1 + 0x51c2),*(undefined2 *)(param_1 + 0x51c4));
  FUN_0895932c(param_1,*(undefined2 *)(param_1 + 0x5182),*(undefined2 *)(param_1 + 0x5184),
               *(undefined2 *)(param_1 + 0x51c6),*(undefined2 *)(param_1 + 0x51c8));
  FUN_0895932c(param_1,*(undefined2 *)(param_1 + 0x5182),*(undefined2 *)(param_1 + 0x5184),
               *(undefined2 *)(param_1 + 0x51ce),*(undefined2 *)(param_1 + 0x51d0));
  FUN_0895932c(param_1,*(undefined2 *)(param_1 + 0x5182),*(undefined2 *)(param_1 + 0x5184),
               *(undefined2 *)(param_1 + 0x51d2),*(undefined2 *)(param_1 + 0x51d4));
  FUN_0895932c(param_1,*(undefined2 *)(param_1 + 0x5182),*(undefined2 *)(param_1 + 0x5184),
               *(undefined2 *)(param_1 + 0x51da),*(undefined2 *)(param_1 + 0x51dc));
  FUN_0895932c(param_1,*(undefined2 *)(param_1 + 0x5182),*(undefined2 *)(param_1 + 0x5184),
               *(undefined2 *)(param_1 + 0x51de),*(undefined2 *)(param_1 + 0x51e0));
  FUN_0895932c(param_1,*(undefined2 *)(param_1 + 0x5182),*(undefined2 *)(param_1 + 0x5184),
               *(undefined2 *)(param_1 + 0x51e6),*(undefined2 *)(param_1 + 0x51e8));
  FUN_0895932c(param_1,*(undefined2 *)(param_1 + 0x5182),*(undefined2 *)(param_1 + 0x5184),
               *(undefined2 *)(param_1 + 0x51fa),*(undefined2 *)(param_1 + 0x51fc));
  iVar8 = (int)*(char *)(param_1 + 0x4cda);
  iVar13 = 0;
  uVar6 = (uint)*(ushort *)(param_1 + 0x5190);
  uVar7 = (uint)*(ushort *)(param_1 + 0x518e);
  if (0 < iVar8) {
    uVar9 = (uint)*(ushort *)(param_1 + 0x51e0);
    iVar10 = param_1;
    do {
      iVar5 = 0;
      if (uVar9 != 0) {
        uVar1 = *(ushort *)(param_1 + 0x51ac);
        uVar2 = *(ushort *)(param_1 + 0x51aa);
        uVar3 = *(ushort *)(param_1 + 0x51de);
        iVar4 = *(int *)(param_1 + 0x1c);
        iVar14 = iVar10;
        do {
          uVar12 = (uint)uVar3 + iVar13 * uVar9 + iVar5;
          uVar11 = (uint)uVar2 + iVar13 * (uint)uVar1 + iVar5;
          iVar5 = iVar5 + 1;
          *(float *)(iVar14 + 0x5118) =
               *(float *)(*(int *)(iVar4 + (uVar12 & 0xffff) * 4) + 100) -
               *(float *)(*(int *)(iVar4 + (uVar11 & 0xffff) * 4) + 100);
          iVar14 = iVar14 + 4;
        } while (iVar5 < (int)uVar9);
      }
      iVar13 = iVar13 + 1;
      iVar10 = iVar10 + 0x10;
    } while (iVar13 < iVar8);
  }
  iVar13 = 0;
  if (0 < iVar8) {
    do {
      iVar10 = 0;
      if (uVar6 != 0) {
        iVar8 = *(int *)(param_1 + 0x1c);
        do {
          uVar6 = uVar7 + iVar13 * uVar6 + iVar10 & 0xffff;
          iVar14 = uVar6 * 4;
          FUN_089f46dc(*(undefined4 *)(iVar8 + iVar14));
          iVar8 = *(int *)(*(int *)(param_1 + 0x1c) + iVar14);
          *(uint *)(iVar8 + 0xd0) = *(uint *)(iVar8 + 0xd0) | 0x20;
          FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar14));
          iVar8 = *(int *)(param_1 + 0x1c);
          iVar5 = param_1 + uVar6 * 8;
          *(undefined4 *)(iVar5 + 0x4118) = *(undefined4 *)(*(int *)(iVar8 + iVar14) + 0x60);
          uVar6 = (uint)*(ushort *)(param_1 + 0x5190);
          iVar10 = iVar10 + 1;
          *(undefined4 *)(iVar5 + 0x411c) = *(undefined4 *)(*(int *)(iVar8 + iVar14) + 100);
          uVar7 = (uint)*(ushort *)(param_1 + 0x518e);
        } while (iVar10 < (int)uVar6);
        iVar8 = (int)*(char *)(param_1 + 0x4cda);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar8);
  }
  FUN_0895932c(param_1,uVar7,uVar6,*(undefined2 *)(param_1 + 0x51b6),
               *(undefined2 *)(param_1 + 0x51b8));
  FUN_0895932c(param_1,*(undefined2 *)(param_1 + 0x518e),*(undefined2 *)(param_1 + 0x5190),
               *(undefined2 *)(param_1 + 0x51d6),*(undefined2 *)(param_1 + 0x51d8));
  return;
}

