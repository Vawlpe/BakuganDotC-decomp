#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_089c0698(float **param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_4;
  
  pfVar1 = *param_1;
  fVar3 = (*param_2 - *pfVar1) * (*param_2 - *pfVar1);
  fVar4 = (param_2[1] - pfVar1[1]) * (param_2[1] - pfVar1[1]);
  local_4 = INFINITY;
  fVar2 = (param_2[2] - pfVar1[2]) * (param_2[2] - pfVar1[2]);
  if ((((fVar3 != INFINITY) && (fVar3 != -INFINITY)) && (fVar4 != INFINITY)) &&
     (((fVar4 != -INFINITY && (fVar2 != INFINITY)) && (fVar2 != -INFINITY)))) {
    local_4 = fVar3 + fVar4 + fVar2;
  }
  return local_4;
}

