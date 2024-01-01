#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_0892e0cc(int param_1,undefined param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  
  cVar5 = '\0';
  iVar4 = 2;
  iVar3 = 8;
  iVar2 = param_1 + 200;
  do {
    cVar1 = FUN_089a91a0(0x3f800000,0x3f800000,0x41800000,param_2,
                         *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,9);
    cVar5 = cVar5 + cVar1;
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
    iVar2 = iVar2 + 0x28;
  } while (iVar4 < 6);
  iVar4 = 8;
  iVar3 = 0x20;
  iVar2 = param_1 + 0x1b8;
  do {
    cVar1 = FUN_089a91a0(0x3f800000,0x3f800000,0x41800000,param_2,
                         *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,9);
    cVar5 = cVar5 + cVar1;
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
    iVar2 = iVar2 + 0x28;
  } while (iVar4 < 0xc);
  iVar4 = 0xc;
  iVar3 = 0x30;
  iVar2 = param_1 + 600;
  do {
    cVar1 = FUN_089a91a0(0x3f800000,0x3f800000,0x41800000,param_2,
                         *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,9);
    cVar5 = cVar5 + cVar1;
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
    iVar2 = iVar2 + 0x28;
  } while (iVar4 < 0x10);
  return cVar5 != '\0';
}

