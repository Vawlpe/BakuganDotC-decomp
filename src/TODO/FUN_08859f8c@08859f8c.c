#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08859f8c(float param_1,int param_2,int param_3)

{
  if (param_3 < 0) {
    param_3 = 0;
  }
  else if (2 < param_3) {
    param_3 = 2;
  }
  if (0.0 <= param_1) {
    if (param_1 <= 2000.0) {
      *(float *)(param_2 + param_3 * 4 + 0x9fc) = param_1;
      return;
    }
    *(undefined4 *)(param_2 + param_3 * 4 + 0x9fc) = 0x44fa0000;
    return;
  }
  *(undefined4 *)(param_2 + param_3 * 4 + 0x9fc) = 0;
  return;
}

