#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0899830c(float param_1,float param_2,int *param_3)

{
  float fVar1;
  undefined4 local_20;
  
  memset_jak(&local_20,0,8);
  if (param_2 <= param_1) {
    fVar1 = param_1 - param_2;
    param_1 = (param_2 + 6.28) - param_1;
    if (fVar1 <= param_1) {
      local_20 = (uint)local_20._1_3_ << 8;
    }
    else {
      local_20 = CONCAT31(local_20._1_3_,1);
      fVar1 = param_1;
    }
  }
  else {
    fVar1 = (param_1 + 6.28) - param_2;
    if (param_2 - param_1 <= fVar1) {
      local_20 = CONCAT31(local_20._1_3_,1);
      fVar1 = param_2 - param_1;
    }
    else {
      local_20 = (uint)local_20._1_3_ << 8;
    }
  }
  *param_3 = local_20;
  param_3[1] = (int)fVar1;
  return;
}

