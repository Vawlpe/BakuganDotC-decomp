#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 *
FUN_089d6d64(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 param_5,undefined param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *param_1 = &DAT_08af5374;
  param_1[5] = param_5;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(param_6);
  uVar2 = FUN_089d7d74(0x40,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  param_1[1] = uVar2;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(param_6);
  uVar2 = FUN_089d7d74(param_4 << 4,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  param_1[2] = uVar2;
  param_1[3] = param_4;
  FUN_089d6f4c(param_1,param_2,param_3);
  *(undefined *)(param_1 + 6) = 0;
  *(undefined *)((int)param_1 + 0x19) = 1;
  return param_1;
}

