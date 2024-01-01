#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_089c0778(int param_1,float *param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 in_V7C;
  
  fVar1 = (float)atan2f((*(float **)(param_1 + 4))[2] - param_2[2],
                        **(float **)(param_1 + 4) - *param_2);
  uVar2 = vmul_s(fVar1 + *(float *)(param_1 + 0x20),in_V7C);
  fVar1 = (float)vsin_s(uVar2);
  return -fVar1;
}

