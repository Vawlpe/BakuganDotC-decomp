#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088ff77c(undefined4 param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  undefined4 uVar1;
  
  if (param_4 == '\0') {
    uVar1 = FUN_088fe9ec(param_2,param_3,0);
  }
  else {
    FUN_089e1074(1);
    uVar1 = FUN_088fe9ec(param_2,param_3,2);
    uVar1 = FUN_088fe9ec(uVar1,param_3,1);
    FUN_089e1074(0);
    FUN_089e1084(0);
  }
  return uVar1;
}

