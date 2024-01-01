#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089a537c(float param_1,int param_2,int param_3)

{
  float fVar1;
  
  if (*(char *)(param_3 + 7) == '\0') {
    fVar1 = *(float *)(param_3 + 0x20) + 0.3 / param_1;
    *(float *)(param_3 + 0x20) = fVar1;
    if (0.3 <= fVar1) {
      *(undefined4 *)(param_3 + 0x20) = 0x3e99999a;
      *(undefined *)(param_3 + 7) = 1;
      fVar1 = 0.3;
    }
  }
  else {
    fVar1 = *(float *)(param_3 + 0x20) - 0.3 / param_1;
    *(float *)(param_3 + 0x20) = fVar1;
    if (fVar1 <= 0.0) {
      *(undefined4 *)(param_3 + 0x20) = 0;
      fVar1 = 0.0;
      *(undefined *)(param_3 + 7) = 0;
    }
  }
  fVar1 = 0.3 - fVar1;
  *(undefined4 *)(param_2 + 0xcc) = 0x3f800000;
  *(float *)(param_2 + 0xc0) = fVar1;
  *(float *)(param_2 + 0xc4) = fVar1;
  *(float *)(param_2 + 200) = fVar1;
  return;
}

