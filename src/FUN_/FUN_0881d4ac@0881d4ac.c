#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0881d4ac(float param_1,float param_2,float param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 in_V7C;
  undefined4 in_V7F;
  
  if (param_3 == 0.0) {
    param_3 = 6.283185;
  }
  uVar3 = vrndf1_s();
  fVar4 = (float)vsub_s(uVar3,in_V7F);
  fVar1 = param_3 * fVar4 - 3.141593;
  uVar3 = vrndf1_s();
  fVar4 = (float)vsub_s(uVar3,in_V7F);
  fVar2 = param_3 * fVar4 - 3.141593;
  uVar3 = vrndf1_s();
  fVar4 = (float)vsub_s(uVar3,in_V7F);
  fVar4 = SQRT((param_2 - param_1) * (param_2 - param_1) * fVar4 + param_1 * param_1);
  uVar3 = vmul_s(fVar2,in_V7C);
  fVar5 = (float)vsin_s(uVar3);
  param_4[2] = fVar5 * fVar4;
  uVar3 = vmul_s(fVar2,in_V7C);
  fVar2 = (float)vcos_s(uVar3);
  fVar2 = fVar2 * fVar4;
  uVar3 = vmul_s(fVar1,in_V7C);
  fVar4 = (float)vsin_s(uVar3);
  *param_4 = fVar4 * fVar2;
  uVar3 = vmul_s(fVar1,in_V7C);
  fVar4 = (float)vcos_s(uVar3);
  param_4[1] = fVar4 * fVar2;
  return;
}

