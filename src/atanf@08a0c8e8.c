#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float atanf(float param_1)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  uVar2 = (uint)param_1 & 0x7fffffff;
  if (0x507fffff < uVar2) {
    if (0x7f800000 < uVar2) {
      return param_1 + param_1;
    }
    if ((int)param_1 < 1) {
      fVar3 = -1.570796;
    }
    else {
      fVar3 = 1.570796;
    }
    return fVar3;
  }
  if (uVar2 < 0x3ee00000) {
    if ((uVar2 < 0x31000000) && (1.0 < param_1 + 1e+30)) {
      return param_1;
    }
    fVar5 = param_1 * param_1;
    iVar1 = -1;
    fVar3 = param_1;
  }
  else {
    fVar3 = (float)fabsf(param_1);
    if (uVar2 < 0x3f980000) {
      if (uVar2 < 0x3f300000) {
        fVar3 = (fVar3 * 2.0 - 1.0) / (fVar3 + 2.0);
        iVar1 = 0;
        fVar5 = fVar3 * fVar3;
      }
      else {
        fVar3 = (fVar3 - 1.0) / (fVar3 + 1.0);
        iVar1 = 1;
        fVar5 = fVar3 * fVar3;
      }
    }
    else if (uVar2 < 0x401c0000) {
      fVar3 = (fVar3 - 1.5) / (fVar3 * 1.5 + 1.0);
      iVar1 = 2;
      fVar5 = fVar3 * fVar3;
    }
    else {
      fVar3 = -1.0 / fVar3;
      iVar1 = 3;
      fVar5 = fVar3 * fVar3;
    }
  }
  fVar4 = fVar5 * fVar5;
  fVar5 = fVar3 * (fVar5 * (fVar4 * (fVar4 * (fVar4 * (fVar4 * (fVar4 * 0.01628582 + 0.04976878) +
                                                      0.06661073) + 0.09090887) + 0.1428571) +
                           0.3333333) +
                  fVar4 * (fVar4 * (fVar4 * (fVar4 * (fVar4 * -0.03653157 + -0.0583357) +
                                            -0.07691876) + -0.1111111) + -0.2));
  if (iVar1 < 0) {
    return fVar3 - fVar5;
  }
  fVar3 = *(float *)(&UNK_08aa4f70 + iVar1 * 4) -
          ((fVar5 - *(float *)(&UNK_08aa4f80 + iVar1 * 4)) - fVar3);
  if ((int)param_1 < 0) {
    fVar3 = -fVar3;
  }
  return fVar3;
}

