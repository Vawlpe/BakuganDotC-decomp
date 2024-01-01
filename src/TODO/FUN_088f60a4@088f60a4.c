#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 * FUN_088f60a4(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  uVar2 = FUN_089d7d74(0x28,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  *param_1 = uVar2;
  param_1[1] = 10;
  param_1[2] = 0;
  *(undefined *)(param_1 + 4) = 0;
  FUN_088f55b8(param_1,*param_2,param_2[1]);
  return param_1;
}

