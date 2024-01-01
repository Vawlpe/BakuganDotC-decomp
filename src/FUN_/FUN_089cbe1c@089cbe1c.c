#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089cbe1c(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  piVar2 = (int *)FUN_089d7d74(0x18,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  DAT_08ac58e0 = piVar2;
  memset_jak(piVar2,0,0x18);
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar3 = FUN_089d7d74(0x14,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar4 = 0;
  if (iVar3 != 0) {
    FUN_08a3047c(iVar3,8);
    iVar4 = iVar3;
  }
  DAT_08ac58e0[1] = iVar4;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar3 = FUN_089d7d74(4,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar4 = 0;
  if (iVar3 != 0) {
    FUN_089cc090(iVar3);
    iVar4 = iVar3;
  }
  *DAT_08ac58e0 = iVar4;
  return;
}

