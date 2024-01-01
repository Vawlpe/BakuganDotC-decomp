#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089c2730(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(int *)(DAT_08ac5278 + 4) != 0) {
    iVar3 = FUN_089d76ac(*(int *)(DAT_08ac5278 + 4));
  }
  if (iVar3 == 0) {
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(0);
    iVar2 = FUN_089d7d74(0x40,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    iVar3 = 0;
    if (iVar2 != 0) {
      FUN_089c1d18(iVar2,param_2);
      iVar3 = iVar2;
    }
  }
  else {
    FUN_089c1d18(iVar3,param_2);
  }
  FUN_089d9174(param_1,iVar3);
  return iVar3;
}

