#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088df840(float param_1,int param_2)

{
  undefined4 uVar1;
  
  param_1 = param_1 + 3.141593;
  if (3.141593 < param_1) {
    param_1 = param_1 - 6.283185;
  }
  else if (param_1 <= -3.141593) {
    param_1 = param_1 + 6.283185;
  }
  param_1 = *(float *)(param_2 + 0x34) - param_1;
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
  uVar1 = 1;
  if (((0.7853982 <= ABS(param_1)) && (uVar1 = 0, ABS(param_1) <= 2.356194)) &&
     (uVar1 = 2, 0.0 < param_1)) {
    uVar1 = 3;
  }
  return uVar1;
}

