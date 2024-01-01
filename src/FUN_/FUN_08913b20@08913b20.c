#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_08913b20(int param_1,undefined param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  cVar2 = '\0';
  iVar3 = 0xe;
  iVar4 = 0x38;
  iVar5 = param_1 + 0x29c;
  do {
    cVar1 = FUN_089a91a0(0x3f800000,0x3f800000,0x41800000,param_2,
                         *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar5,1);
    cVar2 = cVar2 + cVar1;
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 4;
    iVar5 = iVar5 + 0x28;
  } while (iVar3 < 0xf);
  iVar3 = 0x10;
  iVar4 = 0x40;
  iVar5 = param_1 + 0x2ec;
  do {
    cVar1 = FUN_089a91a0(0x3f800000,0x3f800000,0x41800000,param_2,
                         *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar5,1);
    cVar2 = cVar2 + cVar1;
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 4;
    iVar5 = iVar5 + 0x28;
  } while (iVar3 < 0x11);
  iVar3 = 0x28;
  iVar4 = 0xa0;
  iVar5 = param_1 + 0x6ac;
  do {
    cVar1 = FUN_089a91a0(0x3f800000,0x3f800000,0x41800000,param_2,
                         *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar5,1);
    cVar2 = cVar2 + cVar1;
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 4;
    iVar5 = iVar5 + 0x28;
  } while (iVar3 < 0x2b);
  return cVar2 != '\0';
}

