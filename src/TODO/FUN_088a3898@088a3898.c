#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088a3898(int param_1)

{
  undefined auVar1 [16];
  undefined4 uVar2;
  float fVar3;
  
  if (DAT_08af7f80 == 0) {
    DAT_08af7f80 = 1;
    DAT_08af7f90 = 0;
    DAT_08af7f94 = 0;
    DAT_08af7f98 = 0x45066000;
    DAT_08af7f9c = 0;
  }
  auVar1._12_4_ = DAT_08af7f9c;
  auVar1._8_4_ = DAT_08af7f98;
  auVar1._4_4_ = DAT_08af7f94;
  auVar1._0_4_ = DAT_08af7f90;
  auVar1 = vsub_q(auVar1,*(undefined (*) [16])(param_1 + 0x20));
  uVar2 = vdot_t(auVar1._0_12_,auVar1._0_12_);
  fVar3 = (float)vsqrt_s(uVar2);
  if (1.0 <= fVar3) {
    return 0;
  }
  FUN_088a37f4(param_1,0);
  return 1;
}

