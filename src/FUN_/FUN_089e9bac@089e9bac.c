#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089e9bac(float param_1,undefined (*param_2) [12],int param_3)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  float fVar3;
  
  if (ABS(*(float *)(param_3 + 0x20)) < 0.0001) {
    if (*(float *)(param_3 + 0x10) < *(float *)*param_2) {
      return 0;
    }
    if (*(float *)(param_2[1] + 4) < *(float *)(param_3 + 0x10)) {
      return 0;
    }
    fVar3 = *(float *)(param_3 + 0x28);
  }
  else {
    fVar3 = *(float *)(param_3 + 0x28);
  }
  if (ABS(fVar3) < 0.0001) {
    if (*(float *)(param_3 + 0x18) < *(float *)(*param_2 + 8)) {
      return 0;
    }
    if (*(float *)param_2[2] < *(float *)(param_3 + 0x18)) {
      return 0;
    }
    fVar3 = *(float *)(param_3 + 0x24);
  }
  else {
    fVar3 = *(float *)(param_3 + 0x24);
  }
  if ((0.0001 <= ABS(fVar3)) ||
     ((*(float *)(*param_2 + 4) <= *(float *)(param_3 + 0x14) &&
      (*(float *)(param_3 + 0x14) <= *(float *)(param_2[1] + 8))))) {
    auVar1 = vsub_t(*param_2,*(undefined (*) [12])(param_3 + 0x10));
    auVar2 = vmul_t(auVar1,*(undefined (*) [12])(param_3 + 0x30));
    auVar1 = vsub_t(*(undefined (*) [12])(param_2[1] + 4),*(undefined (*) [12])(param_3 + 0x10));
    auVar1 = vmul_t(auVar1,*(undefined (*) [12])(param_3 + 0x30));
    fVar3 = 0.0;
    if (0.0 < auVar2._0_4_) {
      fVar3 = auVar2._0_4_;
    }
    if (param_1 < auVar1._0_4_) {
      param_1 = auVar1._0_4_;
    }
    if (fVar3 <= param_1) {
      if (fVar3 < auVar2._8_4_) {
        fVar3 = auVar2._8_4_;
      }
      if (param_1 < auVar1._8_4_) {
        param_1 = auVar1._8_4_;
      }
      if (fVar3 <= param_1) {
        if (fVar3 < auVar2._4_4_) {
          fVar3 = auVar2._4_4_;
        }
        if (param_1 < auVar1._4_4_) {
          param_1 = auVar1._4_4_;
        }
        if (fVar3 <= param_1) {
          DAT_08ac5d68 = fVar3;
          return 1;
        }
      }
    }
  }
  return 0;
}

