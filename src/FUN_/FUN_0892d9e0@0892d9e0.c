#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0892d9e0(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == '\0') {
    iVar4 = 0x56;
    iVar3 = 0x158;
    iVar2 = param_1 + 0xde8;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0x128) = 2;
      FUN_089f4a90(0,(float)(*(ushort *)(param_1 + *(char *)(param_1 + 0x74) * 0xc + 0x1bac) + 5),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3));
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 0x57);
    iVar4 = 0x58;
    iVar3 = 0x160;
    iVar2 = param_1 + 0xe38;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0x128) = 2;
      FUN_089f4a90(0,(float)(*(ushort *)(param_1 + *(char *)(param_1 + 0x74) * 0xc + 0x1bac) + 5),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3));
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,3);
      iVar4 = iVar4 + 1;
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      iVar3 = iVar3 + 4;
      *(undefined4 *)(iVar1 + 0xb0) = 0x3f800000;
      *(undefined4 *)(iVar1 + 0xb4) = 0x3f800000;
      *(undefined4 *)(iVar1 + 0xb8) = 0;
      *(undefined4 *)(iVar1 + 0xbc) = 0;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 0x59);
  }
  else {
    iVar4 = 0x56;
    iVar3 = 0x158;
    iVar2 = param_1 + 0xde8;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 0x57);
    iVar4 = 0x58;
    iVar3 = 0x160;
    iVar2 = param_1 + 0xe38;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 0x59);
  }
  return;
}

