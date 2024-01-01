#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088ea860(short param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x14,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = (int)param_1;
  iVar4 = 0;
  if (iVar2 != 0) {
    FUN_088ea3cc(iVar2);
    iVar4 = iVar2;
  }
  iVar2 = FUN_088ea47c(iVar4,iVar3);
  if (iVar2 == 0) {
    FUN_088ea52c(iVar4);
    FUN_088ea570(iVar4);
    iVar4 = 0;
  }
  return iVar4;
}

