#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_08975fa8(int param_1,undefined param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  cVar2 = '\0';
  if (*(char *)(param_1 + 0x503) == '\0') {
    iVar5 = 3;
    iVar4 = 0xc;
    iVar3 = param_1 + 0xec;
    do {
      cVar1 = FUN_089a91a0(0x3f800000,0x3f800000,*(undefined4 *)(param_1 + 0x54c),param_2,
                           *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar3,1);
      cVar2 = cVar2 + cVar1;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar5 < 6);
    iVar5 = 0xd;
    iVar4 = 0x34;
    iVar3 = param_1 + 0x27c;
    do {
      cVar1 = FUN_089a91a0(0x3f800000,0x3f800000,*(undefined4 *)(param_1 + 0x54c),param_2,
                           *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar3,1);
      cVar2 = cVar2 + cVar1;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar5 < 0x12);
    iVar5 = 10;
    iVar4 = 0x28;
    iVar3 = param_1 + 0x204;
    do {
      cVar1 = FUN_089a91a0(0x3f800000,0x3f800000,*(undefined4 *)(param_1 + 0x54c),param_2,
                           *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar3,1);
      cVar2 = cVar2 + cVar1;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar5 < 0xc);
  }
  else {
    iVar5 = 1;
    iVar4 = 4;
    iVar3 = param_1 + 0x9c;
    do {
      cVar1 = FUN_089a91a0(0x3f800000,0x3f800000,*(undefined4 *)(param_1 + 0x54c),param_2,
                           *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar3,1);
      cVar2 = cVar2 + cVar1;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar5 < 2);
    iVar5 = 6;
    iVar4 = 0x18;
    iVar3 = param_1 + 0x164;
    do {
      cVar1 = FUN_089a91a0(0x3f800000,0x3f800000,*(undefined4 *)(param_1 + 0x54c),param_2,
                           *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar3,1);
      cVar2 = cVar2 + cVar1;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar5 < 10);
    iVar5 = 0xd;
    iVar4 = 0x34;
    iVar3 = param_1 + 0x27c;
    do {
      cVar1 = FUN_089a91a0(0x3f800000,0x3f800000,*(undefined4 *)(param_1 + 0x54c),param_2,
                           *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar3,1);
      cVar2 = cVar2 + cVar1;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar5 < 0x11);
  }
  return cVar2 != '\0';
}

