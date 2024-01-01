#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089e9a3c(undefined (*param_1) [12],int param_2)

{
  undefined auVar1 [12];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  
  auVar1 = vsub_t(*(undefined (*) [12])(param_1[1] + 4),*param_1);
  fVar2 = auVar1._0_4_;
  fVar4 = auVar1._4_4_;
  fVar6 = auVar1._8_4_;
  uVar14 = viim_s(2);
  auVar1 = vscl_t(*(undefined (*) [12])(param_2 + 0x10),uVar14);
  auVar1 = vadd_t(auVar1,*(undefined (*) [12])(param_2 + 0x20));
  auVar1 = vsub_t(auVar1,*param_1);
  auVar1 = vsub_t(auVar1,*(undefined (*) [12])(param_1[1] + 4));
  fVar3 = auVar1._0_4_;
  fVar5 = auVar1._4_4_;
  fVar7 = auVar1._8_4_;
  fVar9 = *(float *)(param_2 + 0x20);
  if (ABS(fVar3) <= ABS(fVar9) + fVar2) {
    fVar8 = *(float *)(param_2 + 0x24);
    if (ABS(fVar5) <= ABS(fVar8) + fVar4) {
      fVar13 = *(float *)(param_2 + 0x28);
      if (ABS(fVar7) <= ABS(fVar13) + fVar6) {
        fVar12 = ABS(fVar9) + 0.0001;
        fVar10 = ABS(fVar8) + 0.0001;
        fVar11 = ABS(fVar13) + 0.0001;
        if (((ABS(fVar13 * fVar5 - fVar8 * fVar7) <= fVar11 * fVar4 + fVar10 * fVar6) &&
            (ABS(fVar9 * fVar7 - fVar13 * fVar3) <= fVar11 * fVar2 + fVar12 * fVar6)) &&
           (ABS(fVar8 * fVar3 - fVar9 * fVar5) <= fVar10 * fVar2 + fVar12 * fVar4)) {
          return 1;
        }
      }
    }
  }
  return 0;
}

