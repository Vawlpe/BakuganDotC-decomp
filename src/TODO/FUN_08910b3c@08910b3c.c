#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08910b3c(int param_1)

{
  float fVar1;
  
  *(float *)(*(int *)(param_1 + 0x18) + 0x70) = *(float *)(*(int *)(param_1 + 0x18) + 0x70) + 0.2;
  fVar1 = (1.0 - *(float *)(param_1 + 0x148)) * 0.6;
  *(float *)(param_1 + 0x148) = *(float *)(param_1 + 0x148) + (fVar1 - 0.01);
  if (ABS(fVar1) < 0.02) {
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x70) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x148) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x28) = 2;
    FUN_08909df4(param_1,1);
  }
  return;
}

