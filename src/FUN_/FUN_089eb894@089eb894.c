#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089eb894(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (param_2 < 3) {
    uVar3 = FUN_089bf354(param_1,param_2);
  }
  else if ((param_2 == 3) && (iVar1 = FUN_089eac08(), iVar1 != 0)) {
    uVar2 = FUN_089eac30();
    iVar1 = FUN_089eb134(uVar2);
    if (iVar1 != 0) {
      uVar3 = 1;
    }
  }
  return uVar3;
}

