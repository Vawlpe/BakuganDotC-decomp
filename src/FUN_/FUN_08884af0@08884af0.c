#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_08884af0(float param_1)

{
  param_1 = 1.570796 - param_1;
  if (3.141593 < param_1) {
    return param_1 - 6.283185;
  }
  if (param_1 <= -3.141593) {
    param_1 = param_1 + 6.283185;
  }
  return param_1;
}

