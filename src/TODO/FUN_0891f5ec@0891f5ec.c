#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0891f5ec(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == '\0') {
    FUN_0891f2a8(param_1,*(undefined *)(param_1 + 0x2176));
    iVar4 = 5;
    iVar3 = 0x14;
    iVar2 = param_1 + 0x144;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0x128) = 8;
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,1);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 6);
  }
  else {
    iVar4 = 5;
    iVar3 = 0x14;
    iVar2 = param_1 + 0x144;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,1);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 6);
  }
  iVar4 = 6;
  iVar3 = 0x18;
  iVar2 = param_1 + 0x16c;
  do {
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
    if ((*(uint *)(iVar1 + 0xd0) & 1) != 0) {
      if (param_2 == '\0') {
        *(undefined4 *)(iVar1 + 0xbc) = 0;
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      }
      FUN_089a5408(0x3f800000,param_2,iVar1,iVar2,1);
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
    iVar2 = iVar2 + 0x28;
  } while (iVar4 < 8);
  iVar4 = 0xc;
  iVar3 = 0x30;
  iVar2 = param_1 + 0x25c;
  do {
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
    if ((*(uint *)(iVar1 + 0xd0) & 1) != 0) {
      if (param_2 == '\0') {
        *(undefined4 *)(iVar1 + 0xbc) = 0;
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      }
      FUN_089a5408(0x3f800000,param_2,iVar1,iVar2,1);
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
    iVar2 = iVar2 + 0x28;
  } while (iVar4 < 0x14);
  return;
}

