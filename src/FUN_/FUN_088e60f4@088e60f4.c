#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e60f4(int param_1)

{
  undefined auVar1 [12];
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  float *pfVar6;
  float *pfVar7;
  undefined4 in_V7D;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0x350) != 0) {
    piVar5 = *(int **)(param_1 + 0x350);
    local_20 = (float)*piVar5 * 0.0002441406;
    local_1c = (float)piVar5[1] * 0.0002441406;
    local_18 = (float)piVar5[2] * 0.0002441406;
    local_14 = 0;
    pfVar6 = &local_20;
    auVar1._4_4_ = local_1c;
    auVar1._0_4_ = local_20;
    auVar1._8_4_ = local_18;
    auVar1 = vscl_t(auVar1,0x41a00000);
    *(int *)(param_1 + 0x20) = auVar1._0_4_;
    *(int *)(param_1 + 0x24) = auVar1._4_4_;
    *(int *)(param_1 + 0x28) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x2c) = in_V7D;
    pfVar7 = (float *)(param_1 + 0x30);
    FUN_088e5914(pfVar6,*(int *)(param_1 + 0x350) + 0xc);
    fVar2 = pfVar6[1];
    fVar3 = pfVar6[2];
    fVar4 = pfVar6[3];
    *pfVar7 = *pfVar6;
    pfVar7[1] = fVar2;
    pfVar7[2] = fVar3;
    pfVar7[3] = fVar4;
    *(int *)(param_1 + 0x3a4) = *(int *)(param_1 + 0x3a4) + 1;
  }
  *(undefined4 *)(param_1 + 0x158) = 0x3fbf2700;
  return;
}

