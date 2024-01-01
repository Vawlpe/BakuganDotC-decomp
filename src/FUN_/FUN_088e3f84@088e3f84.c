#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined FUN_088e3f84(int param_1)

{
  undefined auVar1 [12];
  undefined4 uVar2;
  undefined uVar3;
  float *pfVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  
  if (*(int *)(param_1 + 0x418) != 0) {
    auVar1 = *(undefined (*) [12])(*(int *)(param_1 + 0x418) + 0x20);
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x418) + 0x2c);
    FUN_088e3d9c(param_1);
    pfVar4 = (float *)(*(int *)(param_1 + 0x418) + 0x84);
    *pfVar4 = *pfVar4 + -0.08;
    auVar1 = vadd_t(auVar1,*(undefined (*) [12])(*(int *)(param_1 + 0x418) + 0x80));
    uVar3 = *(undefined *)(*(int *)(param_1 + 0x418) + 0x1d2);
    if (-150.0 <= auVar1._4_4_) {
      iVar5 = *(int *)(param_1 + 0x418);
    }
    else {
      uVar3 = 1;
      iVar5 = *(int *)(param_1 + 0x418);
    }
    uVar6 = vdot_t(*(undefined (*) [12])(iVar5 + 0x80),*(undefined (*) [12])(iVar5 + 0x80));
    fVar7 = (float)vsqrt_s(uVar6);
    if (fVar7 < 0.1) {
      uVar3 = 1;
    }
    iVar5 = *(int *)(param_1 + 0x418);
    *(int *)(iVar5 + 0x20) = auVar1._0_4_;
    *(float *)(iVar5 + 0x24) = auVar1._4_4_;
    *(int *)(iVar5 + 0x28) = auVar1._8_4_;
    *(undefined4 *)(iVar5 + 0x2c) = uVar2;
    return uVar3;
  }
  return 1;
}

