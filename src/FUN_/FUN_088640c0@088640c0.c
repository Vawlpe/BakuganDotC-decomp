#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088640c0(int param_1,undefined (*param_2) [12])

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined auVar3 [12];
  
  uVar4 = 1;
  auVar1 = vsub_t(*(undefined (*) [12])(param_1 + 0x20),*param_2);
  uVar6 = vzero_s();
  auVar2._8_4_ = auVar1._8_4_;
  auVar2._4_4_ = uVar6;
  auVar2._0_4_ = auVar1._0_4_;
  auVar3._8_4_ = auVar1._8_4_;
  auVar3._4_4_ = uVar6;
  auVar3._0_4_ = auVar1._0_4_;
  uVar6 = vdot_t(auVar2,auVar3);
  uVar6 = vsqrt_s(uVar6);
  fVar5 = (float)atan2f(auVar1._4_4_,uVar6);
  if (0.3141593 < fVar5) {
    uVar4 = 5;
  }
  else if (fVar5 < -0.3141593) {
    uVar4 = 4;
  }
  return uVar4;
}

