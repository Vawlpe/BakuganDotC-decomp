#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ac020(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = FUN_0880cc48();
  FUN_0880c85c(uVar1,10);
  uVar1 = FUN_0880cc48();
  FUN_0880c97c(uVar1,10);
  uVar1 = FUN_0880cc48();
  FUN_0880c8f4(uVar1,10);
  FUN_089ab6d8(param_1);
  iVar2 = FUN_089abfa0(param_1);
  if (iVar2 == 1) {
    piVar3 = (int *)FUN_0880cc48();
    *(undefined *)(*piVar3 + 0x6ab) = 0;
  }
  return;
}

