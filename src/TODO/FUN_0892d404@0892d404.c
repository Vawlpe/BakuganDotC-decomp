#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_0892d404(int param_1,char param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  cVar2 = '\0';
  if (param_2 == '\0') {
    iVar5 = 0x10;
    iVar4 = 0x40;
    iVar3 = param_1 + 0x2f8;
    do {
      cVar1 = FUN_089a9b24(0x3fc00000,0x3f800000,0x41800000,0x3e99999a,0,
                           *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar3,3);
      cVar2 = cVar2 + cVar1;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar5 < 0x15);
    iVar5 = 0x15;
    iVar4 = 0x54;
    iVar3 = param_1 + 0x3c0;
    do {
      cVar1 = FUN_089a91a0(0x3fc00000,0x3f800000,0x41800000,0,
                           *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar3,0xb);
      cVar2 = cVar2 + cVar1;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar5 < 0x16);
    iVar5 = 0x16;
    iVar4 = 0x58;
    iVar3 = param_1 + 1000;
    do {
      cVar1 = FUN_089a91a0(0x3fc00000,0x3f800000,0x41800000,0,
                           *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar3,7);
      cVar2 = cVar2 + cVar1;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar5 < 0x18);
  }
  else {
    iVar5 = 0x10;
    iVar4 = 0x40;
    iVar3 = param_1 + 0x2f8;
    do {
      cVar1 = FUN_089a9b24(0x3f800000,0x3fc00000,0x41800000,0x3e99999a,param_2,
                           *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar3,3);
      cVar2 = cVar2 + cVar1;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar5 < 0x15);
    iVar5 = 0x15;
    iVar4 = 0x54;
    iVar3 = param_1 + 0x3c0;
    do {
      cVar1 = FUN_089a91a0(0x3f800000,0x3fc00000,0x41800000,param_2,
                           *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar3,0xb);
      cVar2 = cVar2 + cVar1;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar5 < 0x16);
    iVar5 = 0x16;
    iVar4 = 0x58;
    iVar3 = param_1 + 1000;
    do {
      cVar1 = FUN_089a91a0(0x3f800000,0x3fc00000,0x41800000,param_2,
                           *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar3,7);
      cVar2 = cVar2 + cVar1;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar5 < 0x18);
  }
  return cVar2 != '\0';
}

