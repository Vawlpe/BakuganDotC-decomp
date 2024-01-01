#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0898f228(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 == '\0') {
    iVar5 = 0x38;
    iVar4 = 0xe0;
    iVar3 = param_1 + 0x934;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      iVar1 = iVar5 + -0x38;
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      if (iVar1 < 2) {
        if (0 < iVar1) {
          FUN_089a56a0(iVar2,4);
          iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
        }
      }
      else if (iVar1 < 3) {
        FUN_089a56a0(iVar2,5);
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      }
      *(undefined4 *)(iVar2 + 0x128) = 8;
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar3,3);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar5 < 0x3b);
    iVar5 = 0x3c;
    iVar4 = 0xf0;
    iVar3 = param_1 + 0x9d4;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0x128) = 8;
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      *(undefined4 *)(iVar1 + 0xb0) = 0x3f800000;
      *(undefined4 *)(iVar1 + 0xb4) = 0x3f800000;
      *(undefined4 *)(iVar1 + 0xb8) = 0x3f800000;
      *(undefined4 *)(iVar1 + 0xbc) = 0;
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar3,3);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar5 < 0x3f);
  }
  else {
    iVar5 = 0x38;
    iVar4 = 0xe0;
    iVar3 = param_1 + 0x934;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar3,3);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar5 < 0x3b);
    iVar5 = 0x3c;
    iVar4 = 0xf0;
    iVar3 = param_1 + 0x9d4;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar3,3);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar5 < 0x3f);
  }
  return;
}

