#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08884b5c(uint param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined auVar1 [16];
  undefined auVar2 [12];
  undefined auVar3 [12];
  undefined auVar4 [12];
  undefined4 uVar5;
  undefined (*pauVar6) [12];
  float fVar7;
  float fVar8;
  undefined4 in_V7C;
  
  uVar5 = 0;
  pauVar6 = (undefined (*) [12])(param_4 + 0x30);
  auVar4 = *pauVar6;
  *(uint *)(param_4 + 0x40) = param_1;
  *(undefined4 *)(param_4 + 0x44) = 0;
  *(undefined4 *)(param_4 + 0x48) = param_2;
  *(undefined4 *)(param_4 + 0x4c) = 0;
  auVar3._4_4_ = 0;
  auVar3._0_4_ = param_1;
  auVar3._8_4_ = param_2;
  auVar2._4_4_ = 0;
  auVar2._0_4_ = param_1;
  auVar2._8_4_ = param_2;
  fVar8 = (float)vdot_t(auVar2,auVar3);
  fVar8 = (fVar8 - 0.3) * 1.428571;
  *(float *)(param_4 + 0x20) = fVar8;
  if (fVar8 <= 0.5) {
    *(undefined4 *)(param_4 + 0x20) = 0;
  }
  else {
    fVar8 = (float)atan2f(param_2,param_1);
    fVar8 = 3.141593 - fVar8;
    if (3.141593 < fVar8) {
      fVar8 = fVar8 - 6.283185;
    }
    else if (fVar8 <= -3.141593) {
      fVar8 = fVar8 + 6.283185;
    }
    fVar7 = (float)FUN_08884af0(param_3,param_4);
    *(float *)(param_4 + 0x28) = fVar8 + fVar7;
    uVar5 = vmul_s(fVar8 + fVar7,in_V7C);
    auVar1 = vrot_q(uVar5,1,0,2,0);
    *(int *)*pauVar6 = auVar1._0_4_;
    *(int *)(param_4 + 0x34) = auVar1._4_4_;
    *(int *)(param_4 + 0x38) = auVar1._8_4_;
    *(int *)(param_4 + 0x3c) = auVar1._12_4_;
    uVar5 = vdot_t(*pauVar6,auVar4);
    *(undefined4 *)(param_4 + 0x24) = uVar5;
    uVar5 = 1;
  }
  return uVar5;
}

