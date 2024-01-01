#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a02a4c(int param_1,int param_2,undefined4 param_3,code *param_4,int param_5,int param_6)

{
  param_1 = param_1 - param_6;
  if (param_4 == (code *)0x0) {
    FUN_08a02ff4(param_1);
  }
  else if (param_5 == 0) {
    (*param_4)(param_1);
  }
  else {
    (*param_4)(param_1,param_6 + param_2);
  }
  return;
}

