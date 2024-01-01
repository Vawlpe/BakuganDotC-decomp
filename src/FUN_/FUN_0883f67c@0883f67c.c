#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0883f67c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = FUN_0882d020(param_2);
  if (iVar1 != 0) {
    uVar3 = FUN_0880cc48();
    iVar2 = FUN_0880d0ac(uVar3,7);
    if (iVar2 == 1) {
      uVar3 = *(undefined4 *)(iVar1 + 0x588);
    }
    else {
      uVar3 = *(undefined4 *)(iVar1 + 0x584);
    }
  }
  return uVar3;
}

