#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089fd778(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = DAT_08ac61f0;
  if (DAT_08ac61f0 == 0) {
    FUN_089d8634();
    uVar2 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar3 = FUN_089d7d74(8,0,0);
    FUN_089d816c(uVar2);
    FUN_089d866c();
    iVar1 = 0;
    if (iVar3 != 0) {
      FUN_089fd874(iVar3);
      iVar1 = iVar3;
    }
  }
  DAT_08ac61f0 = iVar1;
  return;
}

