#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088718a4(int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(*(int *)(param_1 + 0x4bc) + 0x70);
  if (fVar1 != 0.0) {
    fVar1 = (*(float *)(param_1 + 0x344) + fVar1) - *(float *)(param_1 + 0x24);
    if (0.0 < fVar1) {
      *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x2f8) + fVar1 * 0.3;
    }
    return 1;
  }
  return 0;
}

