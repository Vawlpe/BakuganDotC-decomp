#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089eaa70(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_08ac5d80 == (int *)0x0) {
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    piVar2 = (int *)FUN_089d7d74(4,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    DAT_08ac5d80 = piVar2;
    memset_jak(piVar2,0,4);
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar3 = FUN_089d7d74(0x10,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    iVar4 = 0;
    if (iVar3 != 0) {
      FUN_089eaf90(iVar3);
      iVar4 = iVar3;
    }
    *DAT_08ac5d80 = iVar4;
  }
  iVar4 = FUN_089eb750();
  if (iVar4 == 0) {
    FUN_089bf6e8(0x2742,0x32);
  }
  return *DAT_08ac5d80;
}

