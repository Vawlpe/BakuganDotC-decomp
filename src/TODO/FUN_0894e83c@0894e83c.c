#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0894e83c(int param_1,char param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x94) + 0.125;
  if (param_2 == '\0') {
    *(float *)(param_1 + 0x94) = fVar1;
    *(float *)(**(int **)(param_1 + 0x1c) + 0xbc) =
         *(float *)(param_1 + 0x98) + (1.0 - (fVar1 - 1.0) * (fVar1 - 1.0));
    fVar1 = *(float *)(param_1 + 0x94) - 1.0;
    *(float *)(param_1 + 0x2e0) = *(float *)(param_1 + 0x98) + (1.0 - fVar1 * fVar1);
    if (1.0 <= *(float *)(param_1 + 0x94)) {
      *(undefined4 *)(**(int **)(param_1 + 0x1c) + 0xbc) = 0x3f800000;
      return 1;
    }
  }
  else {
    *(float *)(param_1 + 0x94) = fVar1;
    *(float *)(**(int **)(param_1 + 0x1c) + 0xbc) = *(float *)(param_1 + 0x98) - fVar1 * fVar1;
    fVar1 = *(float *)(param_1 + 0x94) - 1.0;
    *(float *)(param_1 + 0x2e0) = *(float *)(param_1 + 0x98) - (1.0 - fVar1 * fVar1);
    if (1.0 <= *(float *)(param_1 + 0x94)) {
      *(uint *)(**(int **)(param_1 + 0x1c) + 0xd0) =
           *(uint *)(**(int **)(param_1 + 0x1c) + 0xd0) & 0xfffffffe;
      return 1;
    }
  }
  return 0;
}

