#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_08975ef0(int param_1,undefined param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  
  cVar5 = '\0';
  iVar4 = 0x12;
  iVar3 = 0x48;
  iVar2 = param_1 + 0x344;
  do {
    cVar1 = FUN_089a91a0(0x3f800000,0x3f800000,*(undefined4 *)(param_1 + 0x54c),param_2,
                         *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3),iVar2,1);
    cVar5 = cVar5 + cVar1;
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
    iVar2 = iVar2 + 0x28;
  } while (iVar4 < 0x14);
  return cVar5 != '\0';
}

