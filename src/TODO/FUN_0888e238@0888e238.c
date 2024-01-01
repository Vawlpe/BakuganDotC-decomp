#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_0888e238(float param_1,float param_2,int param_3,undefined (*param_4) [16])

{
  undefined auVar1 [16];
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  
  if (*(int *)(param_3 + 0x1a0) != 0) {
    auVar1 = vsub_q(*(undefined (*) [16])(*(int *)(param_3 + 0x1a0) + 0x20),*param_4);
    uVar3 = vdot_t(auVar1._0_12_,auVar1._0_12_);
    fVar4 = (float)vsqrt_s(uVar3);
    if (fVar4 < param_1 * param_1) {
      fVar2 = (float)atan2f(*(float *)(*param_4 + 8) - *(float *)(*(int *)(param_3 + 0x1a0) + 0x28),
                            *(float *)*param_4 - *(float *)(*(int *)(param_3 + 0x1a0) + 0x20));
      fVar2 = fVar2 - *(float *)(*(int *)(param_3 + 0x1a0) + 0x34);
      fVar2 = fVar2 - (float)(int)(fVar2 * 0.3183099) * 6.283185;
      if (fVar2 < 0.0) {
        fVar2 = fVar2 + 6.283185;
      }
      if (3.141593 <= fVar2) {
        fVar2 = 6.283185 - fVar2;
      }
      else {
        fVar2 = -fVar2;
      }
      if (ABS(fVar2) < param_2 * 0.01745329) {
        return fVar4;
      }
    }
  }
  return 0.0;
}

