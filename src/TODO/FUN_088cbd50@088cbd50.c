#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088cbd50(int param_1,float *param_2)

{
  FUN_088cba2c();
  param_2[1] = *(float *)(param_1 + 0x54) + 16.0 + param_2[1];
  if (*(int *)(param_1 + 0x70) == 1) {
    *param_2 = *param_2 + 24.0;
  }
  return;
}

