#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08864afc(int param_1)

{
  undefined auVar1 [12];
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if ((*(uint *)(param_1 + 0x144) & 0x400000) != 0) {
    *(undefined4 *)(param_1 + 0x1c4) = 4;
  }
  if (*(int *)(param_1 + 0x1c4) == 0) {
    if ((*(uint *)(param_1 + 0x144) & 0x1000000) == 0) {
      fVar3 = *(float *)(*(int *)(param_1 + 0x4bc) + 0x18);
    }
    else {
      fVar3 = *(float *)(*(int *)(param_1 + 0x4bc) + 0x1c);
    }
    *(float *)(param_1 + 0x2f8) =
         *(float *)(param_1 + 0x2f8) + (fVar3 - *(float *)(param_1 + 0x2f8)) * 0.2;
  }
  else {
    *(float *)(param_1 + 0x2f8) = *(float *)(param_1 + 0x2f8) * 0.8;
    *(int *)(param_1 + 0x1c4) = *(int *)(param_1 + 0x1c4) + -1;
  }
  if ((*(uint *)(param_1 + 0x144) & 2) == 0) {
    fVar4 = *(float *)(param_1 + 0x84);
    fVar3 = (float)FUN_089e10c0();
    *(float *)(param_1 + 0x84) = fVar4 - *(float *)(param_1 + 0x2f8) * fVar3;
    uVar2 = FUN_089e10c0();
    auVar1 = vscl_t(*(undefined (*) [12])(param_1 + 0x80),uVar2);
    local_30 = auVar1._0_4_;
    uStack_2c = auVar1._4_4_;
    uStack_28 = auVar1._8_4_;
    FUN_0886239c(param_1,&local_30);
    if ((*(uint *)(param_1 + 0x144) & 0x40000000) == 0) {
      *(undefined4 *)(param_1 + 0x84) = 0;
      *(undefined4 *)(param_1 + 0x184) = 0;
    }
    else {
      *(int *)(param_1 + 0x184) = *(int *)(param_1 + 0x184) + 1;
    }
  }
  return;
}

