#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4
FUN_088879d8(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  
  if (param_2 < 2) {
    if (0 < param_2) {
      uVar1 = FUN_088874d8(param_1,param_2,param_3,param_4,param_5);
      return uVar1;
    }
  }
  else if (param_2 < 4) {
    uVar1 = FUN_088877ec(param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  if (param_4 == 0) {
    uVar1 = FUN_08887710(param_3,0,param_5);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

