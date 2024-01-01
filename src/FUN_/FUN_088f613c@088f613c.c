#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f613c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = DAT_08abf740;
  if (DAT_08abf740 == 0) {
    FUN_089d8634();
    uVar2 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar3 = FUN_089d7d74(0x14,0,0);
    FUN_089d816c(uVar2);
    FUN_089d866c();
    iVar1 = 0;
    if (iVar3 != 0) {
      FUN_088f60a4(iVar3,param_1);
      iVar1 = iVar3;
    }
  }
  DAT_08abf740 = iVar1;
  return;
}

