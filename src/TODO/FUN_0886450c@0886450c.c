#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0886450c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (param_2 < 0x12) {
    if (param_2 % 3 == 1) {
      return 2;
    }
    if (param_2 % 3 == 2) {
      uVar1 = 3;
    }
  }
  return uVar1;
}

