#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08925004(int param_1,char param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 == '\0') {
    iVar6 = 0xb4;
    iVar5 = 0x2d0;
    iVar4 = param_1 + 0x1c9c;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      *(undefined4 *)(iVar2 + 0xc0) = 0;
      *(undefined4 *)(iVar2 + 0xc4) = 0;
      *(undefined4 *)(iVar2 + 200) = 0;
      *(undefined4 *)(iVar2 + 0xcc) = 0x3f800000;
      FUN_0891d070(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),0);
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar4,1);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
    } while (iVar6 < 0xb6);
    iVar6 = 0xb7;
    iVar5 = 0x2dc;
    iVar4 = param_1 + 0x1d14;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      if (iVar6 < 0xb9) {
        if (0xb6 < iVar6) {
          if (iVar6 < 0xb8) {
            bVar1 = *(byte *)(param_1 + 0x218c);
            goto LAB_0892513c;
          }
          bVar1 = *(byte *)(param_1 + 0x218c);
LAB_08925184:
          if ((bVar1 & 2) == 0) {
            *(undefined4 *)(iVar2 + 0xb0) = 0x3f800000;
            *(undefined4 *)(iVar2 + 0xb4) = 0x3f800000;
            *(undefined4 *)(iVar2 + 0xb8) = 0x3f800000;
            *(undefined4 *)(iVar2 + 0xbc) = 0;
            iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
          }
          else {
            *(undefined4 *)(iVar2 + 0xb0) = 0x3f000000;
            *(undefined4 *)(iVar2 + 0xb4) = 0x3f000000;
            *(undefined4 *)(iVar2 + 0xb8) = 0x3f000000;
            *(undefined4 *)(iVar2 + 0xbc) = 0;
            iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
          }
        }
LAB_089251c8:
        uVar3 = *(uint *)(iVar2 + 0xd0);
      }
      else {
        if (iVar6 < 0xba) {
          bVar1 = *(byte *)(param_1 + 0x218c);
LAB_0892513c:
          if ((bVar1 & 1) == 0) {
            *(undefined4 *)(iVar2 + 0xb0) = 0x3f800000;
            *(undefined4 *)(iVar2 + 0xb4) = 0x3f800000;
            *(undefined4 *)(iVar2 + 0xb8) = 0x3f800000;
            *(undefined4 *)(iVar2 + 0xbc) = 0;
            iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
          }
          else {
            *(undefined4 *)(iVar2 + 0xb0) = 0x3f000000;
            *(undefined4 *)(iVar2 + 0xb4) = 0x3f000000;
            *(undefined4 *)(iVar2 + 0xb8) = 0x3f000000;
            *(undefined4 *)(iVar2 + 0xbc) = 0;
            iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
          }
          goto LAB_089251c8;
        }
        if (iVar6 < 0xbb) {
          bVar1 = *(byte *)(param_1 + 0x218c);
          goto LAB_08925184;
        }
        uVar3 = *(uint *)(iVar2 + 0xd0);
      }
      *(uint *)(iVar2 + 0xd0) = uVar3 | 1;
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar4,1);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
    } while (iVar6 < 0xbb);
    iVar6 = 0x80;
    iVar5 = 0x200;
    iVar4 = param_1 + 0x147c;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      *(undefined4 *)(iVar2 + 0xc0) = 0;
      *(undefined4 *)(iVar2 + 0xc4) = 0;
      *(undefined4 *)(iVar2 + 200) = 0;
      *(undefined4 *)(iVar2 + 0xcc) = 0x3f800000;
      FUN_0891d0cc(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),0);
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar4,1);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
    } while (iVar6 < 0x81);
    iVar6 = 0x82;
    iVar5 = 0x208;
    iVar4 = param_1 + 0x14cc;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      if ((*(byte *)(param_1 + 0x218c) & 4) == 0) {
        *(undefined4 *)(iVar2 + 0xb0) = 0x3f800000;
        *(undefined4 *)(iVar2 + 0xb4) = 0x3f800000;
        *(undefined4 *)(iVar2 + 0xb8) = 0x3f800000;
        *(undefined4 *)(iVar2 + 0xbc) = 0;
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      }
      else {
        *(undefined4 *)(iVar2 + 0xb0) = 0x3f000000;
        *(undefined4 *)(iVar2 + 0xb4) = 0x3f000000;
        *(undefined4 *)(iVar2 + 0xb8) = 0x3f000000;
        *(undefined4 *)(iVar2 + 0xbc) = 0;
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      }
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar4,1);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
    } while (iVar6 < 0x83);
  }
  else {
    iVar6 = 0xb4;
    iVar5 = 0x2d0;
    iVar4 = param_1 + 0x1c9c;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar4,1);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
    } while (iVar6 < 0xb6);
    iVar6 = 0xb7;
    iVar5 = 0x2dc;
    iVar4 = param_1 + 0x1d14;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar4,1);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
    } while (iVar6 < 0xbb);
    iVar6 = 0x80;
    iVar5 = 0x200;
    iVar4 = param_1 + 0x147c;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar4,1);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
    } while (iVar6 < 0x81);
    iVar6 = 0x82;
    iVar5 = 0x208;
    iVar4 = param_1 + 0x14cc;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar4,1);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
    } while (iVar6 < 0x83);
  }
  return;
}

