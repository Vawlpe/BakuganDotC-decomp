#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089e98b0(undefined (*param_1) [12],int param_2)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined auVar9 [12];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 in_V14;
  undefined4 in_V18;
  undefined4 uVar16;
  
  vpfxs(0,0,0,3);
  auVar9._8_4_ = in_V18;
  auVar9._4_4_ = in_V14;
  auVar9._0_4_ = *(undefined4 *)(param_2 + 0x40);
  auVar9 = vmov_t(auVar9);
  auVar1 = vsub_t(*param_1,auVar9);
  auVar9 = vadd_t(*(undefined (*) [12])(param_1[1] + 4),auVar9);
  auVar2 = vsub_t(auVar9,auVar1);
  fVar3 = auVar2._0_4_;
  fVar5 = auVar2._4_4_;
  fVar7 = auVar2._8_4_;
  uVar16 = viim_s(2);
  auVar2 = vscl_t(*(undefined (*) [12])(param_2 + 0x20),uVar16);
  auVar2 = vadd_t(auVar2,*(undefined (*) [12])(param_2 + 0x30));
  auVar2 = vsub_t(auVar2,auVar1);
  auVar9 = vsub_t(auVar2,auVar9);
  fVar4 = auVar9._0_4_;
  fVar6 = auVar9._4_4_;
  fVar8 = auVar9._8_4_;
  fVar11 = *(float *)(param_2 + 0x30);
  if (ABS(fVar4) <= ABS(fVar11) + fVar3) {
    fVar10 = *(float *)(param_2 + 0x34);
    if (ABS(fVar6) <= ABS(fVar10) + fVar5) {
      fVar15 = *(float *)(param_2 + 0x38);
      if (ABS(fVar8) <= ABS(fVar15) + fVar7) {
        fVar14 = ABS(fVar11) + 0.0001;
        fVar12 = ABS(fVar10) + 0.0001;
        fVar13 = ABS(fVar15) + 0.0001;
        if (((ABS(fVar15 * fVar6 - fVar10 * fVar8) <= fVar13 * fVar5 + fVar12 * fVar7) &&
            (ABS(fVar11 * fVar8 - fVar15 * fVar4) <= fVar13 * fVar3 + fVar14 * fVar7)) &&
           (ABS(fVar10 * fVar4 - fVar11 * fVar6) <= fVar12 * fVar3 + fVar14 * fVar5)) {
          return 1;
        }
      }
    }
  }
  return 0;
}

