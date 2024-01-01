#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f6b38(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  if (DAT_08ac6160 == 0) {
    uVar1 = FUN_089be500(&DAT_08ac6240);
    FUN_089d8634();
    uVar2 = FUN_089d81a4();
    FUN_089d816c(1);
    uVar3 = FUN_089d7d74(uVar1 & 0xfffffffc,0,0);
    FUN_089d816c(uVar2);
    FUN_089d866c();
    FUN_089be538(&DAT_08ac6240,uVar3);
    FUN_089d8634();
    uVar2 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar4 = FUN_089d7d74(0x140,0,0);
    FUN_089d816c(uVar2);
    FUN_089d866c();
    iVar5 = 0;
    if (iVar4 != 0) {
      FUN_089f6cdc(iVar4,"NonTexture",uVar3,1);
      iVar5 = iVar4;
    }
    DAT_08ac6160 = iVar5;
    FUN_089f7940();
  }
  return;
}

