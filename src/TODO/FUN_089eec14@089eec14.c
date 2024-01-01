#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float * FUN_089eec14(float param_1,float param_2,float param_3,float param_4,float *param_5)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  param_5[3] = param_4;
  if (param_2 == 0.0) {
    param_5[2] = param_3;
    param_5[1] = param_3;
    *param_5 = param_3;
    return param_5;
  }
  if (param_1 < 0.0) {
    param_1 = param_1 + 360.0;
  }
  if (360.0 <= param_1) {
    param_1 = param_1 - 360.0;
  }
  if (360.0 <= param_1) {
    param_1 = param_1 - 360.0;
  }
  iVar5 = (int)(param_1 * 0.01666667);
  uVar1 = iVar5 - 1;
  fVar3 = param_1 * 0.01666667 - (float)iVar5;
  fVar4 = param_3 * (1.0 - param_2);
  fVar2 = param_3 * (1.0 - fVar3 * param_2);
  fVar3 = param_3 * (1.0 - param_2 * (1.0 - fVar3));
  if (uVar1 < 5) {
    if (iVar5 == 1) {
      *param_5 = fVar2;
      param_5[1] = param_3;
      param_5[2] = fVar4;
      return param_5;
    }
    if (uVar1 == 1) {
      *param_5 = fVar4;
      param_5[1] = param_3;
      param_5[2] = fVar3;
      return param_5;
    }
    if (uVar1 == 2) {
      *param_5 = fVar4;
      param_5[1] = fVar2;
      param_5[2] = param_3;
      return param_5;
    }
    if (uVar1 == 3) {
      *param_5 = fVar3;
      param_5[1] = fVar4;
      param_5[2] = param_3;
      return param_5;
    }
    if (uVar1 == 4) {
      *param_5 = param_3;
      param_5[1] = fVar4;
      param_5[2] = fVar2;
      return param_5;
    }
  }
  *param_5 = param_3;
  param_5[1] = fVar3;
  param_5[2] = fVar4;
  return param_5;
}

