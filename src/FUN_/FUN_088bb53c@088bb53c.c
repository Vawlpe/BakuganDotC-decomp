#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088bb53c(undefined (*param_1) [12])

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined auVar3 [12];
  int iVar4;
  undefined4 uVar5;
  float fVar6;
  
  iVar4 = FUN_088e1948();
  auVar1 = vsub_t(*param_1,*(undefined (*) [12])(iVar4 + 0x20));
  auVar3._4_4_ = 0;
  auVar3._0_4_ = auVar1._0_4_;
  auVar3._8_4_ = auVar1._8_4_;
  auVar2._4_4_ = 0;
  auVar2._0_4_ = auVar1._0_4_;
  auVar2._8_4_ = auVar1._8_4_;
  uVar5 = vdot_t(auVar2,auVar3);
  fVar6 = (float)vsqrt_s(uVar5);
  if (fVar6 < 6.72) {
    if (0.0 < *(float *)(iVar4 + 0x6c)) {
      *(float *)(iVar4 + 0x6c) = *(float *)(iVar4 + 0x6c) - 0.2;
    }
    else {
      *(undefined4 *)(iVar4 + 0x6c) = 0;
    }
  }
  else if (*(float *)(iVar4 + 0x6c) < 1.0) {
    *(float *)(iVar4 + 0x6c) = *(float *)(iVar4 + 0x6c) + 0.2;
  }
  else {
    *(undefined4 *)(iVar4 + 0x6c) = 0x3f800000;
  }
  return;
}

