#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08933da4(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == '\0') {
    iVar4 = 7;
    iVar3 = 0x1c;
    iVar2 = param_1 + 400;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0x128) = 2;
      FUN_089a5408(0,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 10);
    iVar4 = 0x30;
    iVar3 = 0xc0;
    iVar2 = param_1 + 0x7f8;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0x128) = 2;
      FUN_089a5408(0,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 0x32);
    iVar4 = 0x28;
    iVar3 = 0xa0;
    iVar2 = param_1 + 0x6b8;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      if (*(char *)(param_1 + iVar4 + 0x19dc) == -1) {
        *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      }
      else {
        *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
        FUN_0892bdec(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),
                     *(undefined *)(param_1 + iVar4 + 0x19dc));
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      }
      *(undefined4 *)(iVar1 + 0x128) = 2;
      FUN_089a5408(0,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 0x2a);
    FUN_08933b60(param_1);
  }
  else {
    iVar4 = 7;
    iVar3 = 0x1c;
    iVar2 = param_1 + 400;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 10);
    iVar4 = 0x30;
    iVar3 = 0xc0;
    iVar2 = param_1 + 0x7f8;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 0x32);
    iVar2 = 0x28;
    iVar3 = 0xa0;
    iVar4 = param_1 + 0x6b8;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar4,3);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
      iVar4 = iVar4 + 0x28;
    } while (iVar2 < 0x2a);
  }
  return;
}

