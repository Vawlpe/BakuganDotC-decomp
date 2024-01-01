#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_0892e44c(int param_1,undefined param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  
  cVar5 = '\0';
  iVar4 = 0x1a;
  iVar3 = 0x68;
  iVar2 = param_1 + 0x488;
  do {
    cVar1 = FUN_089a91a0(0x3f800000,0x3f800000,0x41800000,param_2,
                         *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,5);
    cVar5 = cVar5 + cVar1;
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
    iVar2 = iVar2 + 0x28;
  } while (iVar4 < 0x2e);
  iVar4 = 0x2e;
  iVar3 = 0xb8;
  iVar2 = param_1 + 0x7a8;
  do {
    cVar1 = FUN_089a91a0(0x3f800000,0x3f800000,0x41800000,param_2,
                         *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,5);
    cVar5 = cVar5 + cVar1;
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
    iVar2 = iVar2 + 0x28;
  } while (iVar4 < 0x42);
  iVar4 = 0x42;
  iVar3 = 0x108;
  iVar2 = param_1 + 0xac8;
  do {
    cVar1 = FUN_089a91a0(0x3f800000,0x3f800000,0x41800000,param_2,
                         *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,5);
    cVar5 = cVar5 + cVar1;
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
    iVar2 = iVar2 + 0x28;
  } while (iVar4 < 0x56);
  iVar4 = 0x5e;
  iVar3 = 0x178;
  iVar2 = param_1 + 0xf28;
  do {
    cVar1 = FUN_089a91a0(0x3f800000,0x3f800000,0x41800000,param_2,
                         *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,5);
    cVar5 = cVar5 + cVar1;
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
    iVar2 = iVar2 + 0x28;
  } while (iVar4 < 0x72);
  return cVar5 != '\0';
}

