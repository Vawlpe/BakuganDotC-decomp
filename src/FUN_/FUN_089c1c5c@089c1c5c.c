#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c1c5c(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_08ac5270 != 0) {
    FUN_089d75e8(DAT_08ac5270,3);
    DAT_08ac5270 = 0;
  }
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x14,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_089d74cc(iVar2,4,param_1,1);
    iVar3 = iVar2;
  }
  DAT_08ac5270 = iVar3;
  return;
}

