#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_08a0c3b4(float param_1,float param_2,int param_3)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  uVar2 = (uint)param_1 & 0x7fffffff;
  if ((uVar2 < 0x31800000) && ((int)param_1 == 0)) {
    if ((uVar2 | param_3 + 1U) == 0) {
      fVar3 = (float)fabsf();
      return 1.0 / fVar3;
    }
    if (param_3 != 1) {
      param_1 = -1.0 / param_1;
    }
    return param_1;
  }
  fVar3 = param_1;
  if (0x3f2ca13f < uVar2) {
    if ((int)param_1 < 0) {
      fVar3 = -param_1;
      param_2 = -param_2;
    }
    fVar3 = (3.774895e-08 - param_2) + (0.7853981 - fVar3);
    param_2 = 0.0;
  }
  fVar4 = fVar3 * fVar3;
  fVar5 = fVar4 * fVar4;
  fVar5 = param_2 + fVar4 * (fVar3 * fVar4 *
                             (fVar5 * (fVar5 * (fVar5 * (fVar5 * (fVar5 * -1.855864e-05 +
                                                                 7.817944e-05) + 0.0005880413) +
                                               0.003592079) + 0.02186949) + 0.1333333 +
                             fVar4 * (fVar5 * (fVar5 * (fVar5 * (fVar5 * (fVar5 * 2.590731e-05 +
                                                                         7.140725e-05) +
                                                                0.0002464631) + 0.001456209) +
                                              0.00886324) + 0.05396825)) + param_2) +
          fVar3 * fVar4 * 0.3333333;
  fVar4 = fVar5 + fVar3;
  if (0x3f2ca13f < uVar2) {
    return (float)(1 - ((int)param_1 >> 0x1e & 2U)) *
           ((float)param_3 - (fVar3 - ((fVar4 * fVar4) / ((float)param_3 + fVar4) - fVar5)) * 2.0);
  }
  if (param_3 != 1) {
    fVar1 = (float)((uint)(-1.0 / fVar4) & 0xfffff000);
    return fVar1 + (-1.0 / fVar4) *
                   (fVar1 * (float)((uint)fVar4 & 0xfffff000) + 1.0 +
                   fVar1 * (fVar5 - ((float)((uint)fVar4 & 0xfffff000) - fVar3)));
  }
  return fVar4;
}

