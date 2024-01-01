#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0884f010(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0880d354();
  if ((iVar1 != 0) && (iVar1 = FUN_0881b22c(), iVar1 != 0)) {
    if (param_2 == '\0') {
      uVar2 = FUN_0881b254();
      FUN_0881b634(uVar2,0x8000000);
    }
    else {
      uVar2 = FUN_0881b254();
      FUN_0881b634(uVar2,0x1000000);
      uVar2 = FUN_0881b254();
      FUN_0881b620(uVar2,0x8000000);
    }
  }
  return;
}

