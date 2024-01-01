#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089bf354(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 < 1) {
    if (-1 < param_2) {
      return *param_1;
    }
  }
  else {
    if (param_2 < 2) {
      return param_1[1];
    }
    if (param_2 < 3) {
      uVar1 = param_1[2];
    }
  }
  return uVar1;
}

