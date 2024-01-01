#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088d8e70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x40,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_088d8dd4(iVar2);
    iVar3 = iVar2;
  }
  FUN_088d8e20(param_1,iVar3,param_2,param_3,param_4);
  if (DAT_08abf0a8 == 0) {
    FUN_088d8b1c();
  }
  FUN_089d8984(iVar3,DAT_08abf0a8);
  return iVar3;
}

