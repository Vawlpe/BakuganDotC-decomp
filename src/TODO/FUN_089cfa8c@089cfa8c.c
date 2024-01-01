#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089cfa8c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_089cf9a4();
  if (iVar1 == 0) {
    FUN_089d8634();
    uVar2 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar3 = FUN_089d7d74(0x15c,0,0);
    FUN_089d816c(uVar2);
    FUN_089d866c();
    iVar1 = 0;
    if (iVar3 != 0) {
      FUN_089d0194(iVar3,param_1);
      iVar1 = iVar3;
    }
  }
  return iVar1;
}

