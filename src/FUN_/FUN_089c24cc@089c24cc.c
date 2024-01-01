#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c24cc(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_08ac5278 == (int *)0x0) {
    FUN_089c1c5c(0x1c0);
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    piVar2 = (int *)FUN_089d7d74(8,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    DAT_08ac5278 = piVar2;
    memset_jak(piVar2,0,8);
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar3 = FUN_089d7d74(0x14,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    iVar4 = 0;
    if (iVar3 != 0) {
      FUN_089d74cc(iVar3,0x40,0x40,1);
      iVar4 = iVar3;
    }
    DAT_08ac5278[1] = iVar4;
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar3 = FUN_089d7d74(0x30,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    iVar4 = 0;
    if (iVar3 != 0) {
      FUN_089d90ac(iVar3);
      *(undefined **)(iVar3 + 0x20) = &DAT_08af6fd8;
      iVar4 = iVar3;
    }
    *DAT_08ac5278 = iVar4;
  }
  return;
}

