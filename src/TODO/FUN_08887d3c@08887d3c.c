#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08887d3c(float param_1,int param_2)

{
  if (*(int *)(param_2 + 0x88) != 0) {
    if (1000.0 < param_1) {
      param_1 = 1000.0;
    }
    if (param_1 < 0.0) {
      param_1 = 0.0;
    }
    *(float *)(param_2 + 0x9c) = param_1;
  }
  return;
}

