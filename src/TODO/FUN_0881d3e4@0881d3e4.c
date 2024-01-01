#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0881d3e4(float param_1,float param_2,float param_3,float *param_4)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined4 in_V7C;
  undefined4 in_V7F;
  
  if (param_3 == 0.0) {
    param_3 = 6.283185;
  }
  uVar2 = vrndf1_s();
  fVar3 = (float)vsub_s(uVar2,in_V7F);
  fVar1 = param_3 * fVar3 - 3.141593;
  uVar2 = vrndf1_s();
  fVar3 = (float)vsub_s(uVar2,in_V7F);
  fVar3 = SQRT((param_2 - param_1) * (param_2 - param_1) * fVar3 + param_1 * param_1);
  uVar2 = vmul_s(fVar1,in_V7C);
  fVar4 = (float)vsin_s(uVar2);
  *param_4 = fVar4 * fVar3;
  uVar2 = vmul_s(fVar1,in_V7C);
  fVar1 = (float)vcos_s(uVar2);
  param_4[1] = fVar1 * fVar3;
  param_4[2] = 0.0;
  return;
}

