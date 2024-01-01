#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089970f8(int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x21b0) + 0.0008333334;
  *(float *)(param_1 + 0x21b0) = fVar1;
  if (fVar1 < 0.0) {
    fVar1 = fVar1 + 1.0;
    *(float *)(param_1 + 0x21b0) = fVar1;
  }
  if (1.0 <= fVar1) {
    *(float *)(param_1 + 0x21b0) = fVar1 - 1.0;
  }
  return;
}

