#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a13dec(float param_1,float *param_2,float *param_3,float *param_4,int param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = 1.0;
  if ((param_1 <= 1.0) && (fVar3 = 0.0, 0.0 <= param_1)) {
    fVar3 = param_1;
  }
  if (0 < param_5) {
    iVar1 = 0;
    do {
      fVar2 = *param_3;
      fVar4 = *param_4;
      iVar1 = iVar1 + 1;
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
      *param_2 = fVar2 + fVar3 * (fVar4 - fVar2);
      param_2 = param_2 + 1;
    } while (param_5 != iVar1);
  }
  return;
}

