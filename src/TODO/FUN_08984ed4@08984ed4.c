#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08984ed4(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == '\0') {
    iVar4 = 0x25;
    iVar3 = 0x94;
    iVar2 = param_1 + 0x63c;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0x128) = 4;
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      if (iVar4 == 0x25) {
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
    } while (iVar4 < 0x27);
    iVar4 = 0x28;
    iVar3 = 0xa0;
    iVar2 = param_1 + 0x6b4;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0x128) = 4;
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 0x2a);
  }
  else {
    iVar4 = 0x25;
    iVar3 = 0x94;
    iVar2 = param_1 + 0x63c;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 0x27);
    iVar4 = 0x28;
    iVar3 = 0xa0;
    iVar2 = param_1 + 0x6b4;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 0x2a);
  }
  return;
}

