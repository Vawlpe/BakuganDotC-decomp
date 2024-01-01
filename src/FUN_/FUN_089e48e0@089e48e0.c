#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089e48e0(undefined (*param_1) [12],int param_2,float *param_3,undefined4 *param_4)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined (*pauVar7) [12];
  float fVar8;
  float fVar9;
  float fVar10;
  
  pauVar7 = (undefined (*) [12])(param_2 + 0x20);
  fVar9 = (float)vdot_t(*param_1,*pauVar7);
  fVar9 = fVar9 - *(float *)param_1[1];
  if (ABS(fVar9) <= *(float *)(param_2 + 0x40)) {
    *param_3 = 0.0;
    uVar3 = *(undefined4 *)(param_2 + 0x24);
    uVar4 = *(undefined4 *)(param_2 + 0x28);
    uVar5 = *(undefined4 *)(param_2 + 0x2c);
    *param_4 = *(undefined4 *)*pauVar7;
    param_4[1] = uVar3;
    param_4[2] = uVar4;
    param_4[3] = uVar5;
    return 1;
  }
  fVar10 = (float)vdot_t(*param_1,*(undefined (*) [12])(param_2 + 0x30));
  if (fVar10 * fVar9 < 0.0) {
    if (0.0 < fVar9) {
      fVar8 = *(float *)(param_2 + 0x40);
    }
    else {
      fVar8 = -*(float *)(param_2 + 0x40);
    }
    if ((uint)fVar10 < 0x80000001) {
      fVar6 = 1e-05;
      if (1e-05 <= fVar10) {
        fVar6 = fVar10;
      }
    }
    else {
      fVar6 = fVar10;
      if (-1e-05 < fVar10) {
        fVar6 = -1e-05;
      }
    }
    fVar6 = (fVar8 - fVar9) / fVar6;
    *param_3 = fVar6;
    if (fVar6 <= 1.0) {
      fVar9 = *param_3;
      auVar1._4_4_ = fVar9;
      auVar1._0_4_ = fVar9;
      auVar1._8_4_ = fVar9;
      auVar1 = vmul_t(*(undefined (*) [12])(param_2 + 0x30),auVar1);
      uVar3 = *(undefined4 *)(param_2 + 0x2c);
      auVar1 = vadd_t(*pauVar7,auVar1);
      auVar2._4_4_ = fVar8;
      auVar2._0_4_ = fVar8;
      auVar2._8_4_ = fVar8;
      auVar2 = vmul_t(*param_1,auVar2);
      auVar1 = vsub_t(auVar1,auVar2);
      *param_4 = auVar1._0_4_;
      param_4[1] = auVar1._4_4_;
      param_4[2] = auVar1._8_4_;
      param_4[3] = uVar3;
      return 1;
    }
  }
  return 0;
}

