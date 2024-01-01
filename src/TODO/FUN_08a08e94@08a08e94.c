#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_08a08e94(float param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = (uint)param_1 & 0x7fffffff;
  if (uVar1 == 0x3f800000) {
    if ((int)param_1 < 1) {
      fVar2 = 3.141593;
    }
    else {
      fVar2 = 0.0;
    }
    return fVar2;
  }
  if (0x3f800000 < uVar1) {
    return -NAN;
  }
  if (0x3effffff < uVar1) {
    if ((int)param_1 < 0) {
      fVar3 = (param_1 + 1.0) * 0.5;
      fVar2 = (float)FUN_08a0a6c4();
      return 3.141593 -
             (fVar2 + (((fVar3 * (fVar3 * (fVar3 * (fVar3 * (fVar3 * (fVar3 * 3.479331e-05 +
                                                                     0.000791535) + -0.04005554) +
                                                   0.2012125) + -0.3255658) + 0.1666667)) /
                       (fVar3 * (fVar3 * (fVar3 * (fVar3 * 0.07703815 + -0.688284) + 2.020946) +
                                -2.403395) + 1.0)) * fVar2 - 7.549789e-08)) * 2.0;
    }
    fVar4 = (1.0 - param_1) * 0.5;
    fVar3 = (float)FUN_08a0a6c4(fVar4);
    fVar2 = (float)((uint)fVar3 & 0xfffff000);
    return (fVar2 + ((fVar4 * (fVar4 * (fVar4 * (fVar4 * (fVar4 * (fVar4 * 3.479331e-05 +
                                                                  0.000791535) + -0.04005554) +
                                                0.2012125) + -0.3255658) + 0.1666667)) /
                    (fVar4 * (fVar4 * (fVar4 * (fVar4 * 0.07703815 + -0.688284) + 2.020946) +
                             -2.403395) + 1.0)) * fVar3 + (fVar4 - fVar2 * fVar2) / (fVar2 + fVar3))
           * 2.0;
  }
  if (uVar1 < 0x23000001) {
    return 1.570796;
  }
  fVar2 = param_1 * param_1;
  return 1.570796 -
         (param_1 -
         (7.549789e-08 -
         ((fVar2 * (fVar2 * (fVar2 * (fVar2 * (fVar2 * (fVar2 * 3.479331e-05 + 0.000791535) +
                                              -0.04005554) + 0.2012125) + -0.3255658) + 0.1666667))
         / (fVar2 * (fVar2 * (fVar2 * (fVar2 * 0.07703815 + -0.688284) + 2.020946) + -2.403395) +
           1.0)) * param_1));
}

