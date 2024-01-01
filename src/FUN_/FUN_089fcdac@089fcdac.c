#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089fcdac(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x14,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_089fcea0(iVar2);
    iVar3 = iVar2;
  }
  DAT_08ac61e8 = iVar3;
  FUN_089fb65c();
  return DAT_08ac61e8;
}

