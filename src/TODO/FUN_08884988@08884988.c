#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08884988(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [12];
  undefined auVar3 [12];
  undefined auVar4 [12];
  undefined4 uVar5;
  undefined (*pauVar6) [12];
  float fVar7;
  undefined4 uVar8;
  uint uVar9;
  float fVar10;
  undefined4 in_V7C;
  
  uVar5 = 0;
  pauVar6 = (undefined (*) [12])(param_1 + 0x30);
  auVar4 = *pauVar6;
  uVar9 = *(uint *)(WeirdBuff + 0x30);
  uVar8 = *(undefined4 *)(WeirdBuff + 0x34);
  *(uint *)(param_1 + 0x40) = uVar9;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = uVar8;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  auVar3._4_4_ = 0;
  auVar3._0_4_ = uVar9;
  auVar3._8_4_ = uVar8;
  auVar2._4_4_ = 0;
  auVar2._0_4_ = uVar9;
  auVar2._8_4_ = uVar8;
  fVar10 = (float)vdot_t(auVar2,auVar3);
  fVar10 = (fVar10 - 0.3) * 1.428571;
  *(float *)(param_1 + 0x20) = fVar10;
  if (0.5 < fVar10) {
    fVar10 = (float)atan2f(uVar8,uVar9);
    fVar10 = 3.141593 - fVar10;
    if (3.141593 < fVar10) {
      fVar10 = fVar10 - 6.283185;
    }
    else if (fVar10 <= -3.141593) {
      fVar10 = fVar10 + 6.283185;
    }
    fVar7 = (float)FUN_08884910(param_1);
    *(float *)(param_1 + 0x28) = fVar10 + fVar7;
    uVar5 = vmul_s(fVar10 + fVar7,in_V7C);
    auVar1 = vrot_q(uVar5,1,0,2,0);
    *(int *)*pauVar6 = auVar1._0_4_;
    *(int *)(param_1 + 0x34) = auVar1._4_4_;
    *(int *)(param_1 + 0x38) = auVar1._8_4_;
    *(int *)(param_1 + 0x3c) = auVar1._12_4_;
    uVar5 = vdot_t(*pauVar6,auVar4);
    *(undefined4 *)(param_1 + 0x24) = uVar5;
    uVar5 = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return uVar5;
}

