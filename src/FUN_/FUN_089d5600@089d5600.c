#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d5600(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(DAT_08ac5934 + 0x1c) = 1;
  if (DAT_08ac5b7c == 0) {
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar2 = FUN_089d7d74(4,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    DAT_08ac5b7c = iVar2;
    memset_jak(iVar2,0,4);
  }
  iVar2 = DAT_08ac5b80;
  if (DAT_08ac5b80 == 0) {
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar3 = FUN_089d7d74(0x58,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    iVar2 = 0;
    if (iVar3 != 0) {
      FUN_089d6324(iVar3);
      iVar2 = iVar3;
    }
  }
  DAT_08ac5b80 = iVar2;
  return;
}

