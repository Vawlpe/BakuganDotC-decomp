#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0889d1a8(float *param_1)

{
  float fVar1;
  
  fVar1 = param_1[1] + param_1[3];
  param_1[1] = fVar1;
  if (1.0 <= fVar1) {
    param_1[1] = fVar1 - 1.0;
    *param_1 = *param_1 + param_1[2];
    if (*param_1 < 0.0) {
      *param_1 = *param_1 + 1.0;
      fVar1 = *param_1;
    }
    else {
      fVar1 = *param_1;
    }
    if (1.0 <= fVar1) {
      *param_1 = *param_1 - 1.0;
    }
  }
  return;
}

