#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_08a16978(float param_1,float param_2,float param_3,float param_4,float param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar2 = param_4 - param_1;
  fVar4 = 0.0001;
  fVar5 = fVar2 * 0.01;
  if (fVar5 < 0.0001) {
    fVar7 = -0.0001;
  }
  else {
    fVar7 = -fVar5;
    fVar4 = fVar5;
  }
  fVar6 = 1.0;
  fVar5 = 0.0;
  iVar1 = 0;
  while( true ) {
    if ((fVar7 < fVar2) && (fVar2 < fVar4)) {
      param_2 = param_2 - param_1;
      goto LAB_08a16ac8;
    }
    fVar3 = (param_3 - param_2) / fVar2 - 0.3333333;
    if ((-0.01 < fVar3) && (fVar3 < 0.01)) goto LAB_08a16ac4;
    fVar3 = (param_2 * 3.0 + param_1 + param_3 * 3.0 + param_4) * 0.125;
    fVar2 = param_2 + param_3;
    if (fVar3 <= param_5) {
      param_3 = (param_3 + param_4) * 0.5;
      fVar5 = (fVar6 + fVar5) * 0.5;
      param_2 = (fVar2 * 0.5 + param_3) * 0.5;
      param_1 = fVar3;
    }
    else {
      param_2 = (param_2 + param_1) * 0.5;
      fVar6 = (fVar6 + fVar5) * 0.5;
      param_3 = (fVar2 * 0.5 + param_2) * 0.5;
      param_4 = fVar3;
    }
    if (iVar1 == 7) break;
    iVar1 = iVar1 + 1;
    fVar2 = param_4 - param_1;
  }
  fVar2 = param_4 - param_1;
LAB_08a16ac4:
  param_2 = param_2 - param_1;
LAB_08a16ac8:
  param_2 = param_2 * 3.0;
  fVar2 = fVar2 - param_2;
  if (fVar2 != 0.0) {
    fVar4 = param_2 * param_2 + (param_1 - param_5) * fVar2 * -4.0;
    if (0.0 <= fVar4) {
      fVar4 = SQRT(fVar4);
    }
    else {
      fVar4 = 0.0;
    }
    if (param_2 + fVar2 < 0.0) {
      fVar4 = (-fVar4 - param_2) / (fVar2 + fVar2);
    }
    else {
      fVar4 = (fVar4 - param_2) / (fVar2 + fVar2);
    }
    return fVar4 * (fVar6 - fVar5) + fVar5;
  }
  if (param_2 != 0.0) {
    return (-(param_1 - param_5) / param_2) * (fVar6 - fVar5) + fVar5;
  }
  return (fVar6 - fVar5) * 0.5 + fVar5;
}

