#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d2d10(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  piVar2 = (int *)FUN_089d7d74(0x28,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  DAT_08ac5978 = piVar2;
  memset_jak(piVar2,0,0x28);
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar3 = FUN_089d7d74(0x14,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar4 = 0;
  if (iVar3 != 0) {
    FUN_089d2e98(iVar3);
    iVar4 = iVar3;
  }
  *DAT_08ac5978 = iVar4;
  return;
}

