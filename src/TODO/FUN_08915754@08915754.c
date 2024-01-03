#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08915754(int param_1,char param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 == '\0') {
    iVar4 = 0xd;
    iVar5 = 0x34;
    iVar6 = param_1 + 0x274;
    do {
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar6,3);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
      iVar6 = iVar6 + 0x28;
    } while (iVar4 < 0xe);
    iVar4 = 0xf;
    iVar5 = 0x3c;
    iVar6 = param_1 + 0x2c4;
    do {
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar6,3);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
      iVar6 = iVar6 + 0x28;
    } while (iVar4 < 0x10);
    iVar4 = 0x27;
    iVar5 = 0x9c;
    iVar6 = param_1 + 0x684;
    do {
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar6,3);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
      iVar6 = iVar6 + 0x28;
    } while (iVar4 < 0x28);
    piVar1 = (int *)DONE_Get_DAT_08AAC9E0();
    iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x5c);
    FUN_08914254(*(undefined4 *)(iVar4 + 0x60),*(undefined4 *)(iVar4 + 100),param_1,
                 *(undefined4 *)(*piVar1 + 0x464),0x17,0);
    iVar4 = 0x11;
    iVar5 = 0x44;
    iVar6 = param_1 + 0x314;
    do {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0xbc) = 0;
      FUN_089a54cc(0x3f800000,0,0,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar6,9);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
      iVar6 = iVar6 + 0x28;
    } while (iVar4 < 0x18);
    uVar2 = DONE_Get_DAT_08AAC9E0();
    uVar2 = FUN_0880d0ac(uVar2,0x2d);
    iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x78);
    FUN_08914254(*(undefined4 *)(iVar4 + 0x60),*(undefined4 *)(iVar4 + 100),param_1,uVar2,0x1e,1);
    iVar4 = 0x18;
    iVar5 = 0x60;
    iVar6 = param_1 + 0x42c;
    do {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0xbc) = 0;
      FUN_089a54cc(0x3f800000,0,0,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar6,9);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
      iVar6 = iVar6 + 0x28;
    } while (iVar4 < 0x1f);
    piVar1 = (int *)DONE_Get_DAT_08AAC9E0();
    iVar6 = *(int *)(*piVar1 + 0x464);
    uVar2 = DONE_Get_DAT_08AAC9E0();
    iVar4 = FUN_0880d0ac(uVar2,0x2d);
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x94);
    FUN_08914254(*(undefined4 *)(iVar5 + 0x60),*(undefined4 *)(iVar5 + 100),param_1,iVar6 - iVar4,
                 0x25,0);
    iVar4 = 0x1f;
    iVar5 = 0x7c;
    iVar6 = param_1 + 0x544;
    do {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0xbc) = 0;
      FUN_089a54cc(0x3f800000,0,0,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar6,9);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
      iVar6 = iVar6 + 0x28;
    } while (iVar4 < 0x26);
  }
  else {
    iVar4 = 0xd;
    iVar5 = 0x34;
    iVar6 = param_1 + 0x274;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar6,3);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
      iVar6 = iVar6 + 0x28;
    } while (iVar4 < 0xe);
    iVar4 = 0xf;
    iVar5 = 0x3c;
    iVar6 = param_1 + 0x2c4;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar6,3);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
      iVar6 = iVar6 + 0x28;
    } while (iVar4 < 0x10);
    iVar4 = 0x27;
    iVar5 = 0x9c;
    iVar6 = param_1 + 0x684;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar6,3);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
      iVar6 = iVar6 + 0x28;
    } while (iVar4 < 0x28);
    iVar6 = 0x11;
    iVar5 = 0x44;
    iVar4 = param_1 + 0x314;
    do {
      FUN_089a54cc(0x3f800000,0,0,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar4,9)
      ;
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
    } while (iVar6 < 0x18);
    iVar6 = 0x18;
    iVar5 = 0x60;
    iVar4 = param_1 + 0x42c;
    do {
      FUN_089a54cc(0x3f800000,0,0,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar4,9)
      ;
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
    } while (iVar6 < 0x1f);
    iVar4 = 0x1f;
    iVar5 = 0x7c;
    iVar6 = param_1 + 0x544;
    do {
      FUN_089a54cc(0x3f800000,0,0,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar6,9)
      ;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
      iVar6 = iVar6 + 0x28;
    } while (iVar4 < 0x26);
  }
  return;
}

