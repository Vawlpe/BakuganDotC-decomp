#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0888eb14(int param_1,int param_2)

{
  undefined auVar1 [16];
  undefined4 uVar2;
  
  if (param_2 == 0) {
    param_2 = *(int *)(param_1 + 0x96c);
  }
  if (param_2 == 0) {
    return 0xbf800000;
  }
  auVar1 = vsub_q(*(undefined (*) [16])(*(int *)(param_1 + 0x1a0) + 0x20),
                  *(undefined (*) [16])(param_2 + 0x20));
  uVar2 = vdot_t(auVar1._0_12_,auVar1._0_12_);
  uVar2 = vsqrt_s(uVar2);
  return uVar2;
}

