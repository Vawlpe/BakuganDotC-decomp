#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08880408(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  float fVar4;
  undefined (*pauVar5) [16];
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 in_V7C;
  
  if (*(int *)(param_1 + 0xf4) == 0) {
    if ((int)*(float *)(param_1 + 0x10c) == 0) {
      uVar8 = 0xb983126f;
    }
    else {
      uVar8 = 0x3983126f;
    }
    *(undefined4 *)(param_1 + 0xe0) = uVar8;
    *(undefined4 *)(param_1 + 0x10c) = 0;
    goto LAB_088804d0;
  }
  fVar6 = *(float *)(param_1 + 0x10c) + *(float *)(param_1 + 0xe0);
  if (0.01 < fVar6) {
    fVar4 = 0.01;
LAB_088804a0:
    *(float *)(param_1 + 0x10c) = fVar4;
  }
  else {
    fVar4 = -0.01;
    if (fVar6 < -0.01) goto LAB_088804a0;
    *(float *)(param_1 + 0x10c) = fVar6;
    fVar4 = fVar6;
  }
  pauVar5 = (undefined (*) [16])(param_1 + 0x70);
  uVar8 = vmul_s(fVar4,in_V7C);
  auVar1 = vmov_q(*pauVar5);
  auVar2 = vrot_q(uVar8,1,0,3,0);
  auVar3 = vrot_q(uVar8,2,0,1,0);
  uVar8 = vdot_t(*(undefined (*) [12])*pauVar5,auVar2._0_12_);
  uVar7 = vdot_t(*(undefined (*) [12])*pauVar5,auVar3._0_12_);
  *(undefined4 *)*pauVar5 = uVar8;
  *(int *)(param_1 + 0x74) = auVar1._4_4_;
  *(undefined4 *)(param_1 + 0x78) = uVar7;
  *(int *)(param_1 + 0x7c) = auVar1._12_4_;
LAB_088804d0:
  FUN_0887a1c4(0x41100000,param_1,0xf0,0xf1,0xf2,0x4d,0x28);
  return;
}

