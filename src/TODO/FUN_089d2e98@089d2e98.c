#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 * FUN_089d2e98(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  uVar2 = FUN_089d7d74(0x2000,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  param_1[3] = uVar2;
  *(undefined *)(param_1 + 4) = 0;
  *(undefined *)((int)param_1 + 0x12) = 0;
  return param_1;
}

