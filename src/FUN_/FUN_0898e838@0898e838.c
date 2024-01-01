#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0898e838(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == '\0') {
    iVar4 = 0x29;
    iVar3 = 0xa4;
    iVar2 = param_1 + 0x6dc;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0x128) = 4;
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      if (iVar4 == 0x29) {
        *(undefined4 *)(iVar1 + 0xb0) = 0x3f000000;
        *(undefined4 *)(iVar1 + 0xb4) = 0x3f000000;
        *(undefined4 *)(iVar1 + 0xb8) = 0x3f000000;
        *(undefined4 *)(iVar1 + 0xbc) = 0;
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      }
      FUN_089a5408(0x3f800000,0,iVar1,iVar2,3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 0x2b);
    iVar4 = 0x2c;
    iVar3 = 0xb0;
    iVar2 = param_1 + 0x754;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0x128) = 4;
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 0x2e);
  }
  else {
    iVar4 = 0x29;
    iVar3 = 0xa4;
    iVar2 = param_1 + 0x6dc;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 0x2b);
    iVar4 = 0x2c;
    iVar3 = 0xb0;
    iVar2 = param_1 + 0x754;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 0x2e);
  }
  return;
}

