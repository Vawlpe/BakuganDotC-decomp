#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089bc6b8(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_08ac51f8 == (int *)0x0) {
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    piVar2 = (int *)FUN_089d7d74(0xc,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    DAT_08ac51f8 = piVar2;
    memset_jak(piVar2,0,0xc);
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar3 = FUN_089d7d74(0x30,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    iVar4 = 0;
    if (iVar3 != 0) {
      FUN_089bc84c(iVar3);
      iVar4 = iVar3;
    }
    *DAT_08ac51f8 = iVar4;
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar3 = FUN_089d7d74(0x38,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    iVar4 = 0;
    if (iVar3 != 0) {
      FUN_089bb5dc(iVar3,"COPower",1);
      iVar4 = iVar3;
    }
    DAT_08ac51f8[1] = iVar4;
  }
  return;
}

