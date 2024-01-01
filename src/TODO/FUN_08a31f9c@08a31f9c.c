#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_08a31f9c(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1[2] != 0) {
    return true;
  }
  iVar1 = FUN_08a321a0(*param_1);
  if (iVar1 != 0) {
    return true;
  }
  iVar1 = FUN_08a321a0(param_1[1]);
  return iVar1 != 0;
}

