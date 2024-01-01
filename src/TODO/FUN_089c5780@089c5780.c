#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c5780(void)

{
  undefined4 uVar1;
  undefined *ptr;
  int iVar2;
  int iVar3;
  
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  ptr = (undefined *)FUN_089d7d74(0x21c,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  DAT_08ac5870 = ptr;
  memset_jak(ptr,0,0x21c);
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x8be8,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_089c7280(iVar2);
    iVar3 = iVar2;
  }
  DAT_08ac5874 = iVar3;
  FUN_089c29cc(0);
  FUN_089c29cc(1);
  return;
}

