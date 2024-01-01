#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0890c06c(float param_1,undefined4 param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = 1.0 - param_1;
  fVar3 = fVar1 * fVar1;
  fVar2 = param_1 * param_1;
  fVar1 = param_1 * 2.0 * fVar1;
  *param_3 = fVar3 * *param_4 + fVar1 * *param_5 + fVar2 * *param_6;
  param_3[1] = fVar3 * param_4[1] + fVar1 * param_5[1] + fVar2 * param_6[1];
  param_3[2] = fVar3 * param_4[2] + fVar1 * param_5[2] + fVar2 * param_6[2];
  return;
}

