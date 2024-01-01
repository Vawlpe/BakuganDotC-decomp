#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0892d15c(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == '\0') {
    iVar4 = 0x10;
    iVar3 = 0x40;
    iVar2 = param_1 + 0x2f8;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      FUN_089a5408(0x3fc00000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 0x15);
    iVar4 = 0x15;
    iVar3 = 0x54;
    iVar2 = param_1 + 0x3c0;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0x128) = 2;
      FUN_089a54cc(0x3fc00000,0x42800000,0,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2
                   ,0xb);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 0x16);
    iVar4 = 0x16;
    iVar3 = 0x58;
    iVar2 = param_1 + 1000;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0x128) = 2;
      FUN_089a54cc(0x3fc00000,0x42800000,0,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2
                   ,7);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 0x18);
  }
  else {
    iVar4 = 0x10;
    iVar3 = 0x40;
    iVar2 = param_1 + 0x2f8;
    do {
      FUN_089a5408(0x3fc00000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 0x15);
    iVar4 = 0x15;
    iVar3 = 0x54;
    iVar2 = param_1 + 0x3c0;
    do {
      FUN_089a54cc(0x3fc00000,0,0x42800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3)
                   ,iVar2,0xb);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 0x16);
    iVar4 = 0x16;
    iVar3 = 0x58;
    iVar2 = param_1 + 1000;
    do {
      FUN_089a54cc(0x3fc00000,0,0x42800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3)
                   ,iVar2,7);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 0x18);
  }
  return;
}

