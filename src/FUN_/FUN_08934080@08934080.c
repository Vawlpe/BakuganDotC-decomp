#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08934080(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == '\0') {
    iVar3 = 7;
    iVar2 = 0x1c;
    iVar1 = param_1 + 400;
    do {
      FUN_089a91a0(0,0x3f800000,0x41800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2),iVar1
                   ,3);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
      iVar1 = iVar1 + 0x28;
    } while (iVar3 < 10);
    iVar3 = 0x30;
    iVar2 = 0xc0;
    iVar1 = param_1 + 0x7f8;
    do {
      FUN_089a91a0(0,0x3f800000,0x41800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2),iVar1
                   ,3);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
      iVar1 = iVar1 + 0x28;
    } while (iVar3 < 0x32);
    iVar3 = 0x28;
    iVar2 = 0xa0;
    iVar1 = param_1 + 0x6b8;
    do {
      FUN_089a91a0(0,0x3f800000,0x41800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2),iVar1
                   ,3);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
      iVar1 = iVar1 + 0x28;
    } while (iVar3 < 0x2a);
  }
  else {
    iVar3 = 7;
    iVar2 = 0x1c;
    iVar1 = param_1 + 400;
    do {
      FUN_089a91a0(0x3f800000,0,0x41800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2)
                   ,iVar1,3);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
      iVar1 = iVar1 + 0x28;
    } while (iVar3 < 10);
    iVar3 = 0x30;
    iVar2 = 0xc0;
    iVar1 = param_1 + 0x7f8;
    do {
      FUN_089a91a0(0x3f800000,0,0x41800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2)
                   ,iVar1,3);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
      iVar1 = iVar1 + 0x28;
    } while (iVar3 < 0x32);
    iVar3 = 0x28;
    iVar2 = 0xa0;
    iVar1 = param_1 + 0x6b8;
    do {
      FUN_089a91a0(0x3f800000,0,0x41800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2)
                   ,iVar1,3);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
      iVar1 = iVar1 + 0x28;
    } while (iVar3 < 0x2a);
  }
  FUN_08933b60(param_1);
  return;
}

