#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a2e584(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_1[2] == 0) {
    iVar1 = FUN_08a2e774(*param_1);
    if (iVar1 == 0) {
      iVar1 = FUN_08a2e774(param_1[1]);
      if (iVar1 != 0) {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

