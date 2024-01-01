#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_088904b4(undefined4 param_1,int param_2,int param_3)

{
  float fVar1;
  
  fVar1 = 0.0;
  if ((param_2 != 0) && (param_3 != 0)) {
    fVar1 = (float)atan2f(*(float *)(param_3 + 0x28) - *(float *)(param_2 + 0x28),
                          *(float *)(param_3 + 0x20) - *(float *)(param_2 + 0x20));
    fVar1 = *(float *)(param_2 + 0x34) - fVar1;
    fVar1 = fVar1 - (float)(int)(fVar1 * 0.3183099) * 6.283185;
    if (fVar1 < 0.0) {
      fVar1 = fVar1 + 6.283185;
    }
    if (3.141593 <= fVar1) {
      fVar1 = 6.283185 - fVar1;
    }
    else {
      fVar1 = -fVar1;
    }
  }
  return fVar1;
}

