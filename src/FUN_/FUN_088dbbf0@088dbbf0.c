#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088dbbf0(float *param_1,short *param_2)

{
  short sVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = -((float)(int)*param_2 * 6.283185 * 1.525902e-05 - 1.570796);
  if (3.141593 < fVar4) {
    fVar4 = fVar4 - 6.283185;
LAB_088dbc70:
    sVar1 = param_2[1];
  }
  else {
    if (fVar4 <= -3.141593) {
      fVar4 = fVar4 + 6.283185;
      goto LAB_088dbc70;
    }
    sVar1 = param_2[1];
  }
  fVar2 = -((float)(int)sVar1 * 6.283185 * 1.525902e-05 - 1.570796);
  if (3.141593 < fVar2) {
    fVar2 = fVar2 - 6.283185;
LAB_088dbcc0:
    sVar1 = param_2[2];
  }
  else {
    if (fVar2 <= -3.141593) {
      fVar2 = fVar2 + 6.283185;
      goto LAB_088dbcc0;
    }
    sVar1 = param_2[2];
  }
  fVar3 = -((float)(int)sVar1 * 6.283185 * 1.525902e-05 - 1.570796);
  if (3.141593 < fVar3) {
    fVar3 = fVar3 - 6.283185;
  }
  else {
    if (-3.141593 < fVar3) {
      *param_1 = fVar4;
      goto LAB_088dbd18;
    }
    fVar3 = fVar3 + 6.283185;
  }
  *param_1 = fVar4;
LAB_088dbd18:
  param_1[1] = fVar2;
  param_1[2] = fVar3;
  param_1[3] = 0.0;
  return;
}

