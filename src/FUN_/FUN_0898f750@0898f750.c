#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0898f750(int param_1)

{
  if (*(float *)(param_1 + 0x128c) < 180.0) {
    *(float *)(param_1 + 0x128c) = *(float *)(param_1 + 0x128c) + 1.0;
    return;
  }
  *(float *)(param_1 + 0x1288) = *(float *)(param_1 + 0x1288) + 0.015;
  return;
}

