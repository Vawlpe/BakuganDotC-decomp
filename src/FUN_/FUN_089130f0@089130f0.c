#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089130f0(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == '\0') {
    iVar2 = 0;
    iVar3 = 0;
    iVar4 = param_1 + 0x6c;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      FUN_089a5408(0x3fc00000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar4,3);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
      iVar4 = iVar4 + 0x28;
    } while (iVar2 < 5);
    iVar2 = 10;
    iVar3 = 0x28;
    iVar4 = param_1 + 0x1fc;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      FUN_089a54cc(0x3fc00000,0x43000000,0,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar4
                   ,7);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
      iVar4 = iVar4 + 0x28;
    } while (iVar2 < 0xb);
    iVar2 = 0xb;
    iVar3 = 0x2c;
    iVar4 = param_1 + 0x224;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      FUN_089a54cc(0x3fc00000,0x42800000,0,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar4
                   ,0xb);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
      iVar4 = iVar4 + 0x28;
    } while (iVar2 < 0xc);
    iVar2 = 0xc;
    iVar3 = 0x30;
    iVar4 = param_1 + 0x24c;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      FUN_089a54cc(0x3fc00000,0xc2800000,0,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar4
                   ,0xb);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
      iVar4 = iVar4 + 0x28;
    } while (iVar2 < 0xd);
  }
  else {
    iVar2 = 0;
    iVar3 = 0;
    iVar4 = param_1 + 0x6c;
    do {
      FUN_089a5408(0x3fc00000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar4,3);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
      iVar4 = iVar4 + 0x28;
    } while (iVar2 < 5);
    iVar2 = 10;
    iVar3 = 0x28;
    iVar4 = param_1 + 0x1fc;
    do {
      FUN_089a54cc(0x3fc00000,0,0x43000000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3)
                   ,iVar4,7);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
      iVar4 = iVar4 + 0x28;
    } while (iVar2 < 0xb);
    iVar2 = 0xb;
    iVar3 = 0x2c;
    iVar4 = param_1 + 0x224;
    do {
      FUN_089a54cc(0x3fc00000,0,0x42800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3)
                   ,iVar4,0xb);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
      iVar4 = iVar4 + 0x28;
    } while (iVar2 < 0xc);
    iVar2 = 0xc;
    iVar3 = 0x30;
    iVar4 = param_1 + 0x24c;
    do {
      FUN_089a54cc(0x3fc00000,0,0xc2800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3)
                   ,iVar4,0xb);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
      iVar4 = iVar4 + 0x28;
    } while (iVar2 < 0xd);
  }
  return;
}

