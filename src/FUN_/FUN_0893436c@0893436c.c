#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0893436c(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == '\0') {
    iVar4 = 0x26;
    iVar3 = 0x98;
    iVar2 = param_1 + 0x668;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0x128) = 2;
      FUN_08934310(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),0);
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 0x27);
    iVar4 = 0x2f;
    iVar3 = 0xbc;
    iVar2 = param_1 + 2000;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0x128) = 2;
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 0x30);
  }
  else {
    iVar4 = 0x26;
    iVar3 = 0x98;
    iVar2 = param_1 + 0x668;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 0x27);
    iVar4 = 0x2f;
    iVar3 = 0xbc;
    iVar2 = param_1 + 2000;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 0x30);
  }
  return;
}

