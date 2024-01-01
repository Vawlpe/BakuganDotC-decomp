#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0885b6bc(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x34,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_0885b658(iVar2,param_1);
    iVar3 = iVar2;
  }
  if (DAT_08aba7f0 == 0) {
    FUN_0885b0c0();
  }
  FUN_089d8984(iVar3,DAT_08aba7f0);
  return iVar3;
}

