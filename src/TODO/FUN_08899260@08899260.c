#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08899260(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar3 = 0;
  fVar5 = -*(float *)(param_1 + 0xe8);
  fVar4 = -*(float *)(param_1 + 0xe4);
  auVar2._4_4_ = 0;
  auVar2._0_4_ = fVar5;
  auVar2._8_4_ = fVar4;
  auVar1._4_4_ = 0;
  auVar1._0_4_ = fVar5;
  auVar1._8_4_ = fVar4;
  fVar6 = (float)vdot_t(auVar1,auVar2);
  fVar6 = (fVar6 - 0.3) * 1.428571;
  *(float *)(param_1 + 0xec) = fVar6;
  if (0.5 < fVar6) {
    fVar4 = (float)atan2f(fVar4,fVar5);
    fVar4 = 3.141593 - fVar4;
    if (3.141593 < fVar4) {
      fVar4 = fVar4 - 6.283185;
    }
    else if (fVar4 <= -3.141593) {
      fVar4 = fVar4 + 6.283185;
    }
    *(float *)(param_1 + 0xf4) = fVar4;
    uVar3 = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0xec) = 0;
  }
  return uVar3;
}

