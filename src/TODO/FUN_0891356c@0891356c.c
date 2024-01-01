#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_0891356c(int param_1,char param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  cVar2 = '\0';
  if (param_2 == '\0') {
    iVar3 = 0;
    iVar4 = 0;
    iVar5 = param_1 + 0x6c;
    do {
      cVar1 = FUN_089a9b24(0x3fc00000,0x3f800000,0x41800000,0x3e99999a,0,
                           *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar5,3);
      cVar2 = cVar2 + cVar1;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
      iVar5 = iVar5 + 0x28;
    } while (iVar3 < 5);
    iVar3 = 10;
    iVar4 = 0x28;
    iVar5 = param_1 + 0x1fc;
    do {
      cVar1 = FUN_089a91a0(0x3fc00000,0x3f800000,0x41800000,0,
                           *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar5,7);
      cVar2 = cVar2 + cVar1;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
      iVar5 = iVar5 + 0x28;
    } while (iVar3 < 0xb);
    iVar3 = 0xb;
    iVar4 = 0x2c;
    iVar5 = param_1 + 0x224;
    do {
      cVar1 = FUN_089a91a0(0x3fc00000,0x3f800000,0x41800000,0,
                           *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar5,0xb);
      cVar2 = cVar2 + cVar1;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
      iVar5 = iVar5 + 0x28;
    } while (iVar3 < 0xc);
    iVar3 = 0xc;
    iVar4 = 0x30;
    iVar5 = param_1 + 0x24c;
    do {
      cVar1 = FUN_089a91a0(0x3fc00000,0x3f800000,0x41800000,0,
                           *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar5,0xb);
      cVar2 = cVar2 + cVar1;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
      iVar5 = iVar5 + 0x28;
    } while (iVar3 < 0xd);
  }
  else {
    iVar3 = 0;
    iVar4 = 0;
    iVar5 = param_1 + 0x6c;
    do {
      cVar1 = FUN_089a9b24(0x3f800000,0x3fc00000,0x41800000,0x3e99999a,param_2,
                           *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar5,3);
      cVar2 = cVar2 + cVar1;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
      iVar5 = iVar5 + 0x28;
    } while (iVar3 < 5);
    iVar5 = 10;
    iVar4 = 0x28;
    iVar3 = param_1 + 0x1fc;
    do {
      cVar1 = FUN_089a91a0(0x3f800000,0x3fc00000,0x41800000,param_2,
                           *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar3,7);
      cVar2 = cVar2 + cVar1;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar5 < 0xb);
    iVar5 = 0xb;
    iVar4 = 0x2c;
    iVar3 = param_1 + 0x224;
    do {
      cVar1 = FUN_089a91a0(0x3f800000,0x3fc00000,0x41800000,param_2,
                           *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar3,0xb);
      cVar2 = cVar2 + cVar1;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar5 < 0xc);
    iVar3 = 0xc;
    iVar4 = 0x30;
    iVar5 = param_1 + 0x24c;
    do {
      cVar1 = FUN_089a91a0(0x3f800000,0x3fc00000,0x41800000,param_2,
                           *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar5,0xb);
      cVar2 = cVar2 + cVar1;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
      iVar5 = iVar5 + 0x28;
    } while (iVar3 < 0xd);
  }
  return cVar2 != '\0';
}

