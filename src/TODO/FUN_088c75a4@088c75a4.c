#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4
FUN_088c75a4(undefined4 *param_1,undefined (*param_2) [12],float *param_3,int *param_4,
            float *param_5)

{
  undefined auVar1 [12];
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 in_V7C;
  
  *param_4 = *param_4 + 1;
  if (*param_3 <= 0.006) {
    *param_1 = *(undefined4 *)*param_2;
    param_1[5] = *(undefined4 *)(*param_2 + 4);
    param_1[10] = *(undefined4 *)(*param_2 + 8);
    *param_5 = 1.0;
    return 1;
  }
  fVar2 = *param_3;
  *param_3 = fVar2 * 0.5;
  uVar3 = vmul_s((float)*param_4 * 0.73,in_V7C);
  fVar4 = (float)vcos_s(uVar3);
  fVar2 = 1.0 - fVar4 * fVar2 * 0.5;
  *param_5 = fVar2;
  auVar1 = vscl_t(*param_2,fVar2);
  *param_1 = auVar1._0_4_;
  param_1[5] = auVar1._4_4_;
  param_1[10] = auVar1._8_4_;
  return 0;
}

