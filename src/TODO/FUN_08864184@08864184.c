#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_08864184(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x34);
  fVar1 = (float)atan2f(*(float *)(param_1 + 0x28) - param_2[2],
                        *(float *)(param_1 + 0x20) - *param_2);
  fVar2 = fVar2 - fVar1;
  fVar2 = fVar2 - (float)(int)(fVar2 * 0.3183099) * 6.283185;
  if (fVar2 < 0.0) {
    fVar2 = fVar2 + 6.283185;
  }
  if (3.141593 <= fVar2) {
    fVar2 = 6.283185 - fVar2;
  }
  else {
    fVar2 = -fVar2;
  }
  return 1.570796 < ABS(fVar2);
}

