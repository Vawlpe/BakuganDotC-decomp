#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_0888a35c(float param_1,int param_2,int param_3)

{
  float fVar1;
  
  fVar1 = *(float *)(param_2 + 0x70);
  param_1 = param_1 - (float)param_3 * fVar1;
  if (fVar1 < param_1) {
    param_1 = fVar1;
  }
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  return param_1;
}

