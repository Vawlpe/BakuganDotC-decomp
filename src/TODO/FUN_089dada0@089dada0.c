#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_089dada0(float param_1,float param_2,float param_3,float param_4,float param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar3 = param_4 - param_1;
  fVar7 = fVar3 * 0.01;
  if (fVar3 * 0.01 < 0.0001) {
    fVar7 = 0.0001;
  }
  fVar8 = 0.0;
  iVar1 = 0;
  fVar2 = 1.0;
  do {
    if ((-fVar7 < fVar3) && (fVar3 < fVar7)) {
      param_2 = param_2 - param_1;
      goto LAB_089daee8;
    }
    fVar5 = (param_3 - param_2) / fVar3 - 0.3333333;
    if ((-0.01 < fVar5) && (fVar5 < 0.01)) {
      param_2 = param_2 - param_1;
      goto LAB_089daee8;
    }
    fVar6 = (param_2 + param_3) * 0.5;
    fVar5 = (param_1 + param_2 * 3.0 + param_3 * 3.0 + param_4) * 0.125;
    fVar4 = (fVar8 + fVar2) * 0.5;
    if (param_5 < fVar5) {
      param_2 = (param_1 + param_2) * 0.5;
      fVar3 = fVar5 - param_1;
      param_3 = (param_2 + fVar6) * 0.5;
      fVar2 = fVar4;
    }
    else {
      param_3 = (param_3 + param_4) * 0.5;
      fVar3 = param_4 - fVar5;
      param_2 = (fVar6 + param_3) * 0.5;
      param_1 = fVar5;
      fVar5 = param_4;
      fVar8 = fVar4;
    }
    iVar1 = iVar1 + 1;
    param_4 = fVar5;
  } while (iVar1 < 8);
  param_2 = param_2 - param_1;
LAB_089daee8:
  param_2 = param_2 * 3.0;
  fVar3 = fVar3 - param_2;
  fVar2 = fVar2 - fVar8;
  if (fVar3 == 0.0) {
    if (param_2 == 0.0) {
      fVar2 = fVar2 * 0.5;
    }
    else {
      fVar2 = fVar2 * (-(param_1 - param_5) / param_2);
    }
    return fVar2 + fVar8;
  }
  fVar7 = param_2 * param_2 - fVar3 * 4.0 * (param_1 - param_5);
  if (fVar7 < 0.0) {
    fVar7 = 0.0;
  }
  fVar7 = SQRT(fVar7);
  if (fVar3 + param_2 < 0.0) {
    fVar7 = -fVar7;
  }
  return fVar2 * ((fVar7 - param_2) / (fVar3 * 2.0)) + fVar8;
}

