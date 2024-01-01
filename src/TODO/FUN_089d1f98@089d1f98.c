#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d1f98(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_08ac5968 == (int *)0x0) {
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    piVar2 = (int *)FUN_089d7d74(8,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    iVar4 = 0;
    DAT_08ac5968 = piVar2;
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar3 = FUN_089d7d74(0x10,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    if (iVar3 != 0) {
      FUN_089d21b4();
      iVar4 = iVar3;
    }
    *DAT_08ac5968 = iVar4;
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar3 = FUN_089d7d74(0x14,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    iVar4 = 0;
    if (iVar3 != 0) {
      FUN_089d74cc(iVar3,8,0x20,1);
      iVar4 = iVar3;
    }
    DAT_08ac5968[1] = iVar4;
  }
  return;
}

