#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_089138b4(int param_1,undefined param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  cVar2 = '\0';
  iVar3 = 0xd;
  iVar4 = 0x34;
  iVar5 = param_1 + 0x274;
  do {
    cVar1 = FUN_089a91a0(0x3f800000,0x3f800000,0x41800000,param_2,
                         *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar5,1);
    cVar2 = cVar2 + cVar1;
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 4;
    iVar5 = iVar5 + 0x28;
  } while (iVar3 < 0xe);
  iVar3 = 0xf;
  iVar4 = 0x3c;
  iVar5 = param_1 + 0x2c4;
  do {
    cVar1 = FUN_089a91a0(0x3f800000,0x3f800000,0x41800000,param_2,
                         *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar5,1);
    cVar2 = cVar2 + cVar1;
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 4;
    iVar5 = iVar5 + 0x28;
  } while (iVar3 < 0x10);
  iVar3 = 0x27;
  iVar4 = 0x9c;
  iVar5 = param_1 + 0x684;
  do {
    cVar1 = FUN_089a91a0(0x3f800000,0x3f800000,0x41800000,param_2,
                         *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar5,1);
    cVar2 = cVar2 + cVar1;
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 4;
    iVar5 = iVar5 + 0x28;
  } while (iVar3 < 0x28);
  iVar5 = 0x11;
  iVar4 = 0x44;
  iVar3 = param_1 + 0x314;
  do {
    cVar1 = FUN_089a91a0(0x3f800000,0x3f800000,0x41800000,param_2,
                         *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar3,9);
    cVar2 = cVar2 + cVar1;
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 4;
    iVar3 = iVar3 + 0x28;
  } while (iVar5 < 0x18);
  iVar5 = 0x18;
  iVar4 = 0x60;
  iVar3 = param_1 + 0x42c;
  do {
    cVar1 = FUN_089a91a0(0x3f800000,0x3f800000,0x41800000,param_2,
                         *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar3,9);
    cVar2 = cVar2 + cVar1;
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 4;
    iVar3 = iVar3 + 0x28;
  } while (iVar5 < 0x1f);
  iVar3 = 0x1f;
  iVar4 = 0x7c;
  iVar5 = param_1 + 0x544;
  do {
    cVar1 = FUN_089a91a0(0x3f800000,0x3f800000,0x41800000,param_2,
                         *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar5,9);
    cVar2 = cVar2 + cVar1;
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 4;
    iVar5 = iVar5 + 0x28;
  } while (iVar3 < 0x26);
  return cVar2 != '\0';
}

