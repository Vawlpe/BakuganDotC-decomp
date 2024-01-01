#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_08919994(int param_1,undefined param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  
  cVar5 = '\0';
  iVar4 = 5;
  iVar3 = 0x14;
  iVar2 = param_1 + 0x140;
  do {
    cVar1 = FUN_089a91a0(0x3f800000,0x3f800000,0x41800000,param_2,
                         *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,5);
    cVar5 = cVar5 + cVar1;
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
    iVar2 = iVar2 + 0x28;
  } while (iVar4 < 0xb);
  iVar4 = 0xb;
  iVar3 = 0x2c;
  iVar2 = param_1 + 0x230;
  do {
    cVar1 = FUN_089a91a0(0x3f800000,0x3f800000,0x41800000,param_2,
                         *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,5);
    cVar5 = cVar5 + cVar1;
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
    iVar2 = iVar2 + 0x28;
  } while (iVar4 < 0x11);
  iVar4 = 0x12;
  iVar3 = 0x48;
  iVar2 = param_1 + 0x348;
  do {
    cVar1 = FUN_089a91a0(0x3f800000,0x3f800000,0x41800000,param_2,
                         *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,5);
    cVar5 = cVar5 + cVar1;
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
    iVar2 = iVar2 + 0x28;
  } while (iVar4 < 0x18);
  return cVar5 != '\0';
}

