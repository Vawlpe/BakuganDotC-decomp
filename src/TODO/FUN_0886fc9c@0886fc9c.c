#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0886fc9c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = _DONE_NotZero_DAT_08AC5874();
  if ((iVar1 != 0) && (iVar1 = FUN_089fd84c(), iVar1 != 0)) {
    uVar3 = FUN_089fd868();
    uVar2 = _DONE_Get_DAT_08AC5874();
    uVar2 = FUN_089c6df0(uVar2,param_2);
    uVar3 = FUN_089fdaa4(uVar3,param_1,uVar2);
  }
  return uVar3;
}

