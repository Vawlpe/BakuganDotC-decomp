#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089a4d34(undefined4 param_1,float param_2,float param_3,float param_4,float param_5,
                 float *param_6,int param_7)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 in_V7C;
  
  uVar3 = vmul_s(param_1,in_V7C);
  fVar4 = (float)vcos_s(uVar3);
  uVar3 = vmul_s(param_1,in_V7C);
  fVar5 = (float)vsin_s(uVar3);
  fVar1 = (float)param_7;
  if (param_7 < 0) {
    fVar1 = fVar1 + 4.294967e+09;
  }
  fVar2 = (float)param_7;
  if (param_7 < 0) {
    fVar2 = fVar2 + 4.294967e+09;
  }
  *param_6 = param_2 + (fVar1 - param_4) * fVar4;
  param_6[1] = param_3 + (fVar2 - param_5) * fVar5;
  return;
}

