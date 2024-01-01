#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_08846f40(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 in_V7D;
  undefined4 in_V7F;
  
  param_2 = param_2 - param_1;
  uVar2 = vmin_s(param_2 * 0.01,in_V7F);
  fVar1 = (float)vmax_s(uVar2,in_V7D);
  fVar1 = fVar1 * param_4 * (0.8726646 - param_3) + param_3;
  if (param_2 < 0.0) {
    if (1.5 < SQRT(-param_2) * 0.05) {
      param_4 = param_4 * 1.5;
    }
    else {
      param_4 = SQRT(-param_2) * 0.05 * param_4;
    }
    fVar1 = fVar1 - param_4 * (param_3 - -0.8726646);
  }
  return fVar1;
}

