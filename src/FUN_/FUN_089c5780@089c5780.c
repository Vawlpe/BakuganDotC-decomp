#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c5780(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  uVar2 = FUN_089d7d74(0x21c,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  DAT_08ac5870 = uVar2;
  memset_jak(uVar2,0,0x21c);
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar3 = FUN_089d7d74(0x8be8,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar4 = 0;
  if (iVar3 != 0) {
    FUN_089c7280(iVar3);
    iVar4 = iVar3;
  }
  DAT_08ac5874 = iVar4;
  FUN_089c29cc(0);
  FUN_089c29cc(1);
  return;
}

