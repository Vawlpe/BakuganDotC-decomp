#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0888746c(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_1 == 3) {
    uVar1 = 3;
  }
  else {
    if (param_3 < 2) {
      if (0 < param_3) {
        uVar1 = 1;
        goto LAB_088874bc;
      }
    }
    else if (param_3 < 3) {
      uVar1 = 2;
      goto LAB_088874bc;
    }
    uVar1 = 0;
  }
LAB_088874bc:
  FUN_088873dc(param_2,param_4,uVar1);
  return;
}

