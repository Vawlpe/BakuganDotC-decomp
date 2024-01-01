#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_08953afc(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar2 = FUN_0880d354();
  uVar6 = 0xb;
  if (iVar2 == 0) {
    uVar5 = 0xd;
  }
  else {
    uVar6 = 0xe;
    uVar5 = 0x10;
  }
  cVar4 = '\0';
  if (uVar6 <= uVar5) {
    iVar2 = uVar6 << 2;
    iVar7 = param_1 + uVar6 * 0x28 + 0x78;
    do {
      uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2);
      if (param_2 == '\0') {
        cVar1 = FUN_089a91a0(0x3fb33333,0x3f800000,0x41000000,0,uVar3,iVar7,3);
      }
      else {
        cVar1 = FUN_089a91a0(0x3f800000,0x3fb33333,0x41000000,param_2,uVar3,iVar7,3);
      }
      cVar4 = cVar4 + cVar1;
      uVar6 = uVar6 + 1;
      iVar2 = iVar2 + 4;
      iVar7 = iVar7 + 0x28;
    } while (uVar6 <= uVar5);
  }
  return cVar4 == '\x03';
}

