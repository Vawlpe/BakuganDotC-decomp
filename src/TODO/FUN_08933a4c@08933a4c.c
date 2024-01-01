#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_08933a4c(int param_1,undefined param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  
  cVar4 = '\0';
  iVar5 = 0x1c;
  iVar3 = 0x70;
  iVar2 = param_1 + 0x4d8;
  do {
    cVar1 = FUN_089a91a0(0x3f800000,0x3f800000,0x41800000,param_2,
                         *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,1);
    cVar4 = cVar4 + cVar1;
    iVar5 = iVar5 + 1;
    iVar3 = iVar3 + 4;
    iVar2 = iVar2 + 0x28;
  } while (iVar5 < 0x22);
  iVar3 = 0;
  iVar5 = 0;
  iVar2 = param_1 + 0x78;
  do {
    cVar1 = FUN_089a91a0(0x3f800000,0x3f800000,0x41800000,param_2,
                         *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,1);
    cVar4 = cVar4 + cVar1;
    iVar3 = iVar3 + 4;
    iVar5 = iVar5 + 0x28;
    iVar2 = iVar2 + 0x28;
  } while (iVar5 < 1);
  return cVar4 != '\0';
}

