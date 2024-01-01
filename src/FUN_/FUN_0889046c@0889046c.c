#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0889046c(int param_1,int param_2)

{
  undefined auVar1 [16];
  undefined auVar2 [12];
  undefined4 uVar4;
  undefined auVar3 [12];
  
  if (param_2 == 0) {
    param_2 = *(int *)(param_1 + 0x96c);
  }
  if (param_2 == 0) {
    return 0xbf800000;
  }
  auVar1 = vsub_q(*(undefined (*) [16])(*(int *)(param_1 + 0x1a0) + 0x20),
                  *(undefined (*) [16])(param_2 + 0x20));
  uVar4 = vzero_s();
  auVar2._8_4_ = auVar1._8_4_;
  auVar2._4_4_ = uVar4;
  auVar2._0_4_ = auVar1._0_4_;
  auVar3._8_4_ = auVar1._8_4_;
  auVar3._4_4_ = uVar4;
  auVar3._0_4_ = auVar1._0_4_;
  uVar4 = vdot_t(auVar2,auVar3);
  uVar4 = vsqrt_s(uVar4);
  return uVar4;
}

