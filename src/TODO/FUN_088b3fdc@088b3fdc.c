#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b3fdc(float *param_1)

{
  *param_1 = *param_1 + param_1[1];
  if (*param_1 < 0.0) {
    *param_1 = *param_1 + 1.0;
  }
  if (1.0 <= *param_1) {
    *param_1 = *param_1 - 1.0;
  }
  return;
}

