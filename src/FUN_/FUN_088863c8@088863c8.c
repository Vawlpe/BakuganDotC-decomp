#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088863c8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_089d9674();
  iVar2 = FUN_089d9e0c(uVar1,param_1);
  if (iVar2 != 0) {
    FUN_08885ed0(iVar2,param_2,param_3);
    return 1;
  }
  return 0;
}

