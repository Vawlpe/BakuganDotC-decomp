#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ea620(int *param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (*param_1 == 0) {
    return;
  }
  iVar2 = *param_1;
  fVar5 = (float)(int)*param_2 * 6.283185 * 1.525902e-05;
  if (3.141593 < fVar5) {
    fVar5 = fVar5 - 6.283185;
LAB_088ea6a4:
    sVar1 = param_2[1];
  }
  else {
    if (fVar5 <= -3.141593) {
      fVar5 = fVar5 + 6.283185;
      goto LAB_088ea6a4;
    }
    sVar1 = param_2[1];
  }
  fVar3 = (float)(int)sVar1 * 6.283185 * 1.525902e-05;
  if (3.141593 < fVar3) {
    fVar3 = fVar3 - 6.283185;
  }
  else {
    if (-3.141593 < fVar3) {
      sVar1 = param_2[2];
      goto LAB_088ea6f0;
    }
    fVar3 = fVar3 + 6.283185;
  }
  sVar1 = param_2[2];
LAB_088ea6f0:
  fVar4 = (float)(int)sVar1 * 6.283185 * 1.525902e-05;
  if (3.141593 < fVar4) {
    fVar4 = fVar4 - 6.283185;
  }
  else if (fVar4 <= -3.141593) {
    fVar4 = fVar4 + 6.283185;
  }
  *(float *)(iVar2 + 0x30) = fVar5;
  *(float *)(iVar2 + 0x34) = fVar3;
  *(float *)(iVar2 + 0x38) = fVar4;
  *(undefined4 *)(iVar2 + 0x3c) = 0;
  return;
}

