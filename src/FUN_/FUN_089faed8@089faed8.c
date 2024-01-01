#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089faed8(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  if (DAT_08ac61a8 == (int *)0x0) {
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    piVar2 = (int *)FUN_089d7d74(0x80,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    DAT_08ac61a8 = piVar2;
    memset_jak(piVar2,0,0x80);
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar3 = FUN_089d7d74(300,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    iVar4 = 0;
    if (iVar3 != 0) {
      FUN_089fb0e0(iVar3);
      iVar4 = iVar3;
    }
    piVar2 = DAT_08ac61a8;
    piVar5 = DAT_08ac61a8 + 2;
    *DAT_08ac61a8 = iVar4;
    piVar2[7] = (int)piVar5;
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar3 = FUN_089d7d74(0x38,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    iVar4 = 0;
    if (iVar3 != 0) {
      FUN_089bb5dc(iVar3,"COMS::Create",2);
      iVar4 = iVar3;
    }
    DAT_08ac61a8[8] = iVar4;
  }
  return;
}

