#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0889d230(float *param_1)

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

