#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08865e8c(int param_1)

{
  undefined auVar1 [16];
  float fVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (0.0 < *(float *)(param_1 + 0x1fc)) {
    fVar2 = *(float *)(param_1 + 0x1fc) - 0.05;
    *(float *)(param_1 + 0x1fc) = fVar2;
    if (fVar2 <= 0.0) {
      *(undefined4 *)(param_1 + 0x1fc) = 0;
      *(undefined *)(param_1 + 0xb9) = 0;
      return;
    }
    auVar1 = vsat0_q(*(undefined (*) [16])(param_1 + 0x1f0));
    local_20 = auVar1._0_4_;
    uStack_1c = auVar1._4_4_;
    uStack_18 = auVar1._8_4_;
    uStack_14 = auVar1._12_4_;
    (**(code **)(*(int *)(param_1 + 0x14) + 0x24))
              (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x20),&local_20);
  }
  return;
}

