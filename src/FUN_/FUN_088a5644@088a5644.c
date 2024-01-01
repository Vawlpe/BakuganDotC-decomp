#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a5644(undefined4 param_1)

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
    FUN_088a5530(iVar2);
    iVar3 = iVar2;
  }
  *(undefined4 *)(iVar3 + 0x18) = param_1;
  return;
}

