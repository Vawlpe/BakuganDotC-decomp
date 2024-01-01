#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08985830(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 == '\0') {
    iVar5 = 0x36;
    iVar4 = 0xd8;
    iVar3 = param_1 + 0x8e4;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      iVar1 = iVar5 + -0x36;
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      if (iVar1 < 1) {
        if (-1 < iVar1) {
          FUN_089a56a0(iVar2,4);
          iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
        }
      }
      else if (iVar1 < 2) {
        FUN_089a56a0(iVar2,5);
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      }
      *(undefined4 *)(iVar2 + 0x128) = 0x10;
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar3,3);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar5 < 0x38);
    iVar5 = 0x3a;
    iVar4 = 0xe8;
    iVar3 = param_1 + 0x984;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0x128) = 0x10;
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      *(undefined4 *)(iVar1 + 0xb0) = 0x3f800000;
      *(undefined4 *)(iVar1 + 0xb4) = 0x3f800000;
      *(undefined4 *)(iVar1 + 0xb8) = 0x3f800000;
      *(undefined4 *)(iVar1 + 0xbc) = 0;
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar3,3);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar5 < 0x3c);
  }
  else {
    iVar5 = 0x36;
    iVar4 = 0xd8;
    iVar3 = param_1 + 0x8e4;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar3,3);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar5 < 0x38);
    iVar5 = 0x3a;
    iVar4 = 0xe8;
    iVar3 = param_1 + 0x984;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar3,3);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar5 < 0x3c);
  }
  return;
}

