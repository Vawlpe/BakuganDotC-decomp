#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08862608(float param_1,float param_2,float param_3,int param_4)

{
  float fVar1;
  
  param_1 = *(float *)(param_4 + 0x34) - param_1;
  param_1 = param_1 - (float)(int)(param_1 * 0.3183099) * 6.283185;
  if (param_1 < 0.0) {
    param_1 = param_1 + 6.283185;
  }
  if (3.141593 <= param_1) {
    param_1 = 6.283185 - param_1;
  }
  else {
    param_1 = -param_1;
  }
  param_1 = param_1 * param_2;
  if ((param_3 != 0.0) &&
     ((fVar1 = param_3, param_3 < param_1 || (fVar1 = -param_3, param_1 < -param_3)))) {
    param_1 = fVar1;
  }
  *(float *)(param_4 + 0x34) = *(float *)(param_4 + 0x34) + param_1;
  fVar1 = *(float *)(param_4 + 0x34);
  if (3.141593 < fVar1) {
    *(float *)(param_4 + 0x34) = fVar1 - 6.283185;
    return;
  }
  if (fVar1 <= -3.141593) {
    *(float *)(param_4 + 0x34) = fVar1 + 6.283185;
  }
  return;
}

