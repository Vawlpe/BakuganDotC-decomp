#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089e3878(int param_1)

{
  undefined auVar1 [12];
  uint uVar2;
  undefined4 uVar3;
  undefined auVar4 [12];
  float fVar5;
  
  auVar1 = vscl_t(*(undefined (*) [12])(param_1 + 0x70),0x41200000);
  uVar2 = auVar1._0_4_;
  uVar3 = auVar1._8_4_;
  auVar4._4_4_ = 0;
  auVar4._0_4_ = uVar2;
  auVar4._8_4_ = uVar3;
  auVar1._4_4_ = 0;
  auVar1._0_4_ = uVar2;
  auVar1._8_4_ = uVar3;
  fVar5 = (float)vdot_t(auVar1,auVar4);
  if (1.0 < fVar5) {
    fVar5 = (float)atan2f(uVar3,uVar2);
    *(float *)(param_1 + 0x150) = -fVar5;
    if (3.141593 < -fVar5) {
      *(float *)(param_1 + 0x150) = *(float *)(param_1 + 0x150) - 6.283185;
    }
    else if (*(float *)(param_1 + 0x150) <= -3.141593) {
      *(float *)(param_1 + 0x150) = *(float *)(param_1 + 0x150) + 6.283185;
    }
  }
  return *(undefined4 *)(param_1 + 0x150);
}

