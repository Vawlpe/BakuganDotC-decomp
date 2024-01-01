#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0880d5cc(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 local_10;
  
  if (((*param_1 != 0) && (-1 < param_2)) && (param_2 < 3)) {
    local_10 = param_3;
    FUN_0880d554(param_1,param_2,&local_10);
    *(undefined4 *)(*param_1 + param_2 * 4 + 8) = local_10;
  }
  return;
}

