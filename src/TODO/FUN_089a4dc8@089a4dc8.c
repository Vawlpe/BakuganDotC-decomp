#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_089a4dc8(float param_1)

{
  if (param_1 < 6.28) {
    if (param_1 < 0.0) {
      param_1 = param_1 + 6.28;
    }
    return param_1;
  }
  return param_1 - 6.28;
}

