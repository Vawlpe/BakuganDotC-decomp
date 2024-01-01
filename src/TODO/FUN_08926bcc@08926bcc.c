#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08926bcc(int param_1,char param_2)

{
  undefined uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  
  if (param_2 == '\0') {
    iVar8 = 0x15;
    iVar6 = 0x54;
    iVar5 = param_1 + 0x3c4;
    do {
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),iVar5,1);
      iVar8 = iVar8 + 1;
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 0x28;
    } while (iVar8 < 0x16);
    iVar8 = 0x1b;
    iVar6 = 0x6c;
    iVar5 = param_1 + 0x4b4;
    do {
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),iVar5,1);
      iVar8 = iVar8 + 1;
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 0x28;
    } while (iVar8 < 0x1c);
    iVar8 = 0x18;
    iVar6 = 0x60;
    iVar5 = param_1 + 0x43c;
    do {
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
      FUN_089f4a90(0,0x3f800000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6));
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),iVar5,1);
      iVar8 = iVar8 + 1;
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 0x28;
    } while (iVar8 < 0x19);
    iVar8 = 0x39;
    iVar6 = 0xe4;
    iVar5 = param_1 + 0x964;
    do {
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),iVar5,1);
      iVar8 = iVar8 + 1;
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 0x28;
    } while (iVar8 < 0x3b);
    iVar8 = 0x49;
    iVar6 = 0x124;
    iVar5 = param_1 + 0xbe4;
    do {
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),iVar5,1);
      iVar8 = iVar8 + 1;
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 0x28;
    } while (iVar8 < 0x4b);
    uVar2 = FUN_0892c394(*(undefined *)(param_1 + *(char *)(param_1 + 0x79) + 0x224e));
    uVar7 = uVar2 >> 8 & 0xff;
    uVar2 = uVar2 >> 0x10 & 0xff;
    iVar3 = 0x3d;
    iVar5 = *(int *)(param_1 + 0x1c);
    iVar8 = 0xf4;
    iVar6 = param_1 + 0xa04;
    do {
      if (iVar3 == 0x3d) {
        FUN_089f4a90((float)(uVar7 / 3),(float)(uVar7 % 3),*(undefined4 *)(iVar5 + iVar8));
        iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8);
      }
      else {
        FUN_089f4a90((float)(uVar2 / 3),(float)(uVar2 % 3),*(undefined4 *)(iVar5 + iVar8));
        iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar8);
      }
      *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar8),iVar6,1);
      iVar3 = iVar3 + 1;
      iVar8 = iVar8 + 4;
      iVar6 = iVar6 + 0x28;
      iVar5 = *(int *)(param_1 + 0x1c);
    } while (iVar3 < 0x3f);
    iVar9 = 0x66;
    iVar3 = 0x198;
    iVar8 = param_1 + 0x106c;
    iVar6 = (int)*(char *)(param_1 + 0x76);
    do {
      FUN_089f4a90(0,(float)iVar6,*(undefined4 *)(iVar5 + iVar3));
      iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar8,1);
      iVar9 = iVar9 + 1;
      iVar5 = *(int *)(param_1 + 0x1c);
      iVar3 = iVar3 + 4;
      iVar8 = iVar8 + 0x28;
      iVar6 = (int)*(char *)(param_1 + 0x76);
    } while (iVar9 < 0x67);
    iVar6 = ((uint)*(byte *)(param_1 + *(char *)(param_1 + 0x79) + 0x224e) * 3 + iVar6) * 0x18;
    uVar2 = *(uint *)(&DAT_08a853e4 + iVar6);
    FUN_0891d2e4(*(undefined4 *)(*(int *)(iVar5 + 0x198) + 0x60),
                 *(float *)(*(int *)(iVar5 + 0x198) + 100) + 14.0,param_1,
                 *(undefined4 *)(&DAT_08a853e0 + iVar6),0x61);
    iVar8 = 0x5e;
    iVar6 = 0x178;
    iVar5 = param_1 + 0xf2c;
    do {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 0xbc) = 0;
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),iVar5,1);
      iVar8 = iVar8 + 1;
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 0x28;
    } while (iVar8 < 0x62);
    iVar8 = 0x59;
    iVar6 = 0x164;
    iVar5 = param_1 + 0xe64;
    do {
      FUN_0891d50c(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),
                   *(undefined *)(param_1 + 0x76),
                   *(undefined *)(param_1 + *(char *)(param_1 + 0x79) + 0x224e));
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),iVar5,1);
      iVar8 = iVar8 + 1;
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 0x28;
    } while (iVar8 < 0x5a);
    iVar8 = 0x4d;
    iVar6 = 0x134;
    iVar5 = param_1 + 0xc84;
    do {
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
      if (iVar8 < 0x4f) {
        if (iVar8 < 0x4e) {
          uVar7 = *(uint *)(iVar3 + 0xd0);
        }
        else {
          FUN_089f4594();
          uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6);
          uVar1 = FUN_0891d558(param_1,uVar2 & 0xff);
          FUN_0891d57c(param_1,uVar4,uVar1);
          iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
          *(undefined4 *)(iVar3 + 0xb0) = 0x3f800000;
          *(undefined4 *)(iVar3 + 0xb4) = 0x3f800000;
          *(undefined4 *)(iVar3 + 0xb8) = 0;
          *(undefined4 *)(iVar3 + 0xbc) = 0;
          iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
LAB_089271a8:
          uVar7 = *(uint *)(iVar3 + 0xd0);
        }
      }
      else {
        if (iVar8 < 0x50) {
          *(undefined4 *)(iVar3 + 0xb0) = 0x3e99999a;
          *(undefined4 *)(iVar3 + 0xb4) = 0x3e99999a;
          *(undefined4 *)(iVar3 + 0xb8) = 0;
          *(undefined4 *)(iVar3 + 0xbc) = 0;
          iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
          goto LAB_089271a8;
        }
        uVar7 = *(uint *)(iVar3 + 0xd0);
      }
      *(uint *)(iVar3 + 0xd0) = uVar7 | 1;
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),iVar5,1);
      iVar8 = iVar8 + 1;
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 0x28;
    } while (iVar8 < 0x51);
    iVar8 = 0x85;
    iVar6 = 0x214;
    iVar5 = param_1 + 0x1544;
    do {
      FUN_089f4a90(0,(float)(int)*(char *)(param_1 + 0x76),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6));
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),iVar5,1);
      iVar8 = iVar8 + 1;
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 0x28;
    } while (iVar8 < 0x86);
    iVar8 = 0x86;
    iVar6 = 0x218;
    iVar5 = param_1 + 0x156c;
    do {
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
      fVar10 = *(float *)(param_1 + 0x2264);
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 0x60) = fVar10;
      FUN_089a54cc(0x3f800000,0,*(float *)(param_1 + (iVar8 - 0x86U & 0xff) * 4 + 0x2264) - fVar10,0
                   ,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),iVar5,5);
      iVar8 = iVar8 + 1;
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 0x28;
    } while (iVar8 < 0x8c);
    iVar8 = 0x8d;
    iVar6 = 0x234;
    iVar5 = param_1 + 0x1684;
    do {
      uVar7 = iVar8 - 0x8dU & 0xff;
      uVar2 = (uint)*(byte *)(param_1 + uVar7 + 0x224e);
      FUN_089f4a90((float)(uVar2 / 3),(float)(uVar2 % 3),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6));
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
      fVar10 = *(float *)(param_1 + 0x2264);
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 0x60) = fVar10;
      FUN_089a54cc(0x3f800000,0,*(float *)(param_1 + uVar7 * 4 + 0x2264) - fVar10,0,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),iVar5,5);
      iVar8 = iVar8 + 1;
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 0x28;
    } while (iVar8 < 0x93);
    iVar8 = 0x96;
    iVar6 = 600;
    iVar5 = param_1 + 0x17ec;
    do {
      uVar7 = iVar8 - 0x96U & 0xff;
      uVar2 = (uint)*(byte *)(param_1 + uVar7 + 0x224e);
      FUN_089f4a90((float)(uVar2 / 3),(float)(uVar2 % 3),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6));
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
      fVar10 = *(float *)(param_1 + 0x2264);
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 0x60) = fVar10;
      FUN_089a54cc(0x3f800000,0,*(float *)(param_1 + uVar7 * 4 + 0x2264) - fVar10,0,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),iVar5,5);
      iVar8 = iVar8 + 1;
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 0x28;
    } while (iVar8 < 0x9c);
  }
  else {
    iVar8 = 0x15;
    iVar6 = 0x54;
    iVar5 = param_1 + 0x3c4;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),iVar5,1);
      iVar8 = iVar8 + 1;
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 0x28;
    } while (iVar8 < 0x16);
    iVar8 = 0x1b;
    iVar6 = 0x6c;
    iVar5 = param_1 + 0x4b4;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),iVar5,1);
      iVar8 = iVar8 + 1;
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 0x28;
    } while (iVar8 < 0x1c);
    iVar8 = 0x18;
    iVar6 = 0x60;
    iVar5 = param_1 + 0x43c;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),iVar5,1);
      iVar8 = iVar8 + 1;
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 0x28;
    } while (iVar8 < 0x19);
    iVar8 = 0x39;
    iVar6 = 0xe4;
    iVar5 = param_1 + 0x964;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),iVar5,1);
      iVar8 = iVar8 + 1;
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 0x28;
    } while (iVar8 < 0x3b);
    iVar8 = 0x49;
    iVar6 = 0x124;
    iVar5 = param_1 + 0xbe4;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),iVar5,1);
      iVar8 = iVar8 + 1;
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 0x28;
    } while (iVar8 < 0x4b);
    iVar8 = 0x3d;
    iVar6 = 0xf4;
    iVar5 = param_1 + 0xa04;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),iVar5,1);
      iVar8 = iVar8 + 1;
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 0x28;
    } while (iVar8 < 0x3f);
    iVar8 = 0x66;
    iVar6 = 0x198;
    iVar5 = param_1 + 0x106c;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),iVar5,1);
      iVar8 = iVar8 + 1;
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 0x28;
    } while (iVar8 < 0x67);
    iVar8 = 0x5e;
    iVar6 = 0x178;
    iVar5 = param_1 + 0xf2c;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),iVar5,1);
      iVar8 = iVar8 + 1;
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 0x28;
    } while (iVar8 < 0x62);
    iVar8 = 0x59;
    iVar6 = 0x164;
    iVar5 = param_1 + 0xe64;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),iVar5,1);
      iVar8 = iVar8 + 1;
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 0x28;
    } while (iVar8 < 0x5a);
    iVar8 = 0x4d;
    iVar6 = 0x134;
    iVar5 = param_1 + 0xc84;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),iVar5,1);
      iVar8 = iVar8 + 1;
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 0x28;
    } while (iVar8 < 0x51);
    iVar8 = 0x85;
    iVar6 = 0x214;
    iVar5 = param_1 + 0x1544;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),iVar5,1);
      iVar8 = iVar8 + 1;
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 0x28;
    } while (iVar8 < 0x86);
    iVar8 = 0x86;
    iVar6 = 0x218;
    iVar5 = param_1 + 0x156c;
    do {
      FUN_089a54cc(0x3f800000,0,
                   *(float *)(param_1 + 0x2264) -
                   *(float *)(param_1 + (iVar8 - 0x86U & 0xff) * 4 + 0x2264),param_2,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),iVar5,5);
      iVar8 = iVar8 + 1;
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 0x28;
    } while (iVar8 < 0x8c);
    iVar8 = 0x8d;
    iVar6 = 0x234;
    iVar5 = param_1 + 0x1684;
    do {
      FUN_089a54cc(0x3f800000,0,
                   *(float *)(param_1 + 0x2264) -
                   *(float *)(param_1 + (iVar8 - 0x8dU & 0xff) * 4 + 0x2264),param_2,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),iVar5,5);
      iVar8 = iVar8 + 1;
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 0x28;
    } while (iVar8 < 0x93);
    iVar5 = 0x96;
    iVar6 = 600;
    iVar8 = param_1 + 0x17ec;
    do {
      FUN_089a54cc(0x3f800000,0,
                   *(float *)(param_1 + 0x2264) -
                   *(float *)(param_1 + (iVar5 - 0x96U & 0xff) * 4 + 0x2264),param_2,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),iVar8,5);
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 4;
      iVar8 = iVar8 + 0x28;
    } while (iVar5 < 0x9c);
  }
  return;
}

