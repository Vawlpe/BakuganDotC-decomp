#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089bf314(undefined4 *param_1,int param_2,undefined4 param_3)

{
  if (param_2 < 1) {
    if (-1 < param_2) {
      *param_1 = param_3;
      return;
    }
  }
  else {
    if (param_2 < 2) {
      param_1[1] = param_3;
      return;
    }
    if (param_2 < 3) {
      param_1[2] = param_3;
    }
  }
  return;
}

