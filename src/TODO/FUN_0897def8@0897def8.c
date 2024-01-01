#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0897def8(int param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 == '\0') {
    iVar5 = 0x3a;
    iVar4 = 0xe8;
    iVar3 = param_1 + 0x984;
    do {
      uVar1 = iVar5 - 0x3a;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      if (((uint)*(byte *)(param_1 + 0x1134) & 1 << (uVar1 & 0x1f)) == 0) {
        *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      }
      else {
        *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      }
      if ((int)uVar1 < 2) {
        if (0 < (int)uVar1) {
          FUN_089a56a0(iVar2,4);
          iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
        }
LAB_0897e020:
        *(undefined4 *)(iVar2 + 0x128) = 8;
      }
      else {
        if ((int)uVar1 < 3) {
          FUN_089a56a0(iVar2,5);
          iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
          goto LAB_0897e020;
        }
        if ((int)uVar1 < 4) {
          FUN_089a56a0(iVar2,0);
          iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
          goto LAB_0897e020;
        }
        *(undefined4 *)(iVar2 + 0x128) = 8;
      }
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar3,3);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar5 < 0x3e);
    iVar5 = 0x3e;
    iVar4 = 0xf8;
    iVar3 = param_1 + 0xa24;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      if (((uint)*(byte *)(param_1 + 0x1134) & 1 << (iVar5 - 0x3eU & 0x1f)) == 0) {
        *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      }
      else {
        *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      }
      *(undefined4 *)(iVar2 + 0x128) = 8;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      *(undefined4 *)(iVar2 + 0xb0) = 0x3f800000;
      *(undefined4 *)(iVar2 + 0xb4) = 0x3f800000;
      *(undefined4 *)(iVar2 + 0xb8) = 0x3f800000;
      *(undefined4 *)(iVar2 + 0xbc) = 0;
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar3,3);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar5 < 0x42);
  }
  else {
    iVar5 = 0x3a;
    iVar4 = 0xe8;
    iVar3 = param_1 + 0x984;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar3,3);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar5 < 0x3e);
    iVar3 = 0x3e;
    iVar4 = 0xf8;
    iVar5 = param_1 + 0xa24;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar5,3);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
      iVar5 = iVar5 + 0x28;
    } while (iVar3 < 0x42);
  }
  return;
}

