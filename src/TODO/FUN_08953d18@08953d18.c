#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_08953d18(int param_1,char param_2)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  cVar2 = '\0';
  iVar6 = 0x11;
  iVar5 = 0x44;
  iVar4 = param_1 + 800;
  do {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5);
    if (param_2 == '\0') {
      cVar1 = FUN_089a91a0(0x3fb33333,0x3f800000,0x41000000,0,uVar3,iVar4,3);
    }
    else {
      cVar1 = FUN_089a91a0(0x3f800000,0x3fb33333,0x41000000,param_2,uVar3,iVar4,3);
    }
    cVar2 = cVar2 + cVar1;
    iVar6 = iVar6 + 1;
    iVar5 = iVar5 + 4;
    iVar4 = iVar4 + 0x28;
  } while (iVar6 < 0x14);
  return cVar2 == '\x03';
}

