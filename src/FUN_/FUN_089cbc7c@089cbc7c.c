#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 * FUN_089cbc7c(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  param_1[4] = &DAT_08af52bc;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_089cbe08(param_1,0);
  iVar1 = FUN_089cc058();
  if (iVar1 != 0) {
    uVar2 = FUN_089cc080();
    FUN_089cc3ec(uVar2,param_1);
  }
  return param_1;
}

