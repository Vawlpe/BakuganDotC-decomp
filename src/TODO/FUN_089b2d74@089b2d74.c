#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089b2d74(float *param_1,int *param_2,float *param_3)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 in_V7C;
  
  *param_2 = *param_2 + 1;
  if (*param_1 <= 0.006) {
    *param_3 = 1.0;
    return 1;
  }
  fVar1 = *param_1 * 0.6;
  *param_1 = fVar1;
  uVar2 = vmul_s((float)*param_2 * 0.53,in_V7C);
  fVar3 = (float)vcos_s(uVar2);
  *param_3 = 1.0 - fVar3 * fVar1;
  return 0;
}

