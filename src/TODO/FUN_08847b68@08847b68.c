#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08847b68(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [12];
  undefined auVar3 [16];
  undefined auVar4 [12];
  undefined auVar5 [16];
  undefined (*pauVar6) [16];
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float in_V72;
  float in_V76;
  float in_V7A;
  undefined4 in_V7C;
  undefined4 in_V7E;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 uStack_84;
  
  if (*(int *)(param_1 + 0x2a8) != 0) {
    fVar7 = *(float *)(param_1 + 0x30c) + 0.05;
    if (1.0 < fVar7) {
      fVar7 = 1.0;
    }
    *(float *)(param_1 + 0x30c) = fVar7;
    uVar10 = vmul_s(fVar7 * fVar7 * 3.141593,in_V7C);
    fVar7 = (float)vcos_s(uVar10);
    fVar7 = (1.0 - fVar7) * 0.5;
    pauVar6 = (undefined (*) [16])(param_1 + 0x3b0);
    local_90 = in_V72;
    local_8c = in_V76;
    local_88 = in_V7A;
    uStack_84 = in_V7E;
    if (*(int *)(param_1 + 0x380) != 0) {
      auVar1 = vsub_q(**(undefined (**) [16])(param_1 + 0x380),*pauVar6);
      auVar1 = vscl_q(auVar1,0x3da3d70a);
      auVar1 = vadd_q(*pauVar6,auVar1);
      *(int *)*pauVar6 = auVar1._0_4_;
      *(int *)(param_1 + 0x3b4) = auVar1._4_4_;
      *(int *)(param_1 + 0x3b8) = auVar1._8_4_;
      *(int *)(param_1 + 0x3bc) = auVar1._12_4_;
      local_90 = *(float *)*pauVar6;
      local_8c = *(float *)(param_1 + 0x3b4);
      local_88 = *(float *)(param_1 + 0x3b8);
      uStack_84 = *(undefined4 *)(param_1 + 0x3bc);
    }
    local_8c = local_8c + *(float *)(param_1 + 0x390);
    if (*(int *)(param_1 + 900) == 0) {
      fVar8 = (float)atan2f(*(float *)(param_1 + 0x58) - local_88,
                            *(float *)(param_1 + 0x50) - local_90);
    }
    else {
      fVar8 = *(float *)(*(int *)(param_1 + 900) + 4);
    }
    fVar9 = *(float *)(param_1 + 0x3a4) - 0.008;
    *(float *)(param_1 + 0x3a4) = fVar9;
    uVar10 = vmul_s(fVar9,in_V7C);
    fVar9 = (float)vsin_s(uVar10);
    fVar8 = fVar8 + *(float *)(param_1 + 0x3f4) + fVar9 * 0.4;
    if (3.141593 < fVar8) {
      fVar8 = fVar8 - 6.283185;
    }
    else if (fVar8 <= -3.141593) {
      fVar8 = fVar8 + 6.283185;
    }
    uVar10 = vmul_s(fVar8,in_V7C);
    auVar3 = vrot_q(uVar10,1,0,2,0);
    auVar2 = vscl_t(auVar3._0_12_,*(float *)(param_1 + 0x38c) + *(float *)(param_1 + 0x3fc));
    auVar4._4_4_ = local_8c;
    auVar4._0_4_ = local_90;
    auVar4._8_4_ = local_88;
    auVar2 = vadd_t(auVar2,auVar4);
    auVar1._4_4_ = local_8c;
    auVar1._0_4_ = local_90;
    auVar1._8_4_ = local_88;
    auVar1._12_4_ = uStack_84;
    auVar1 = vsub_q(auVar1,*(undefined (*) [16])(param_1 + 0x3d0));
    auVar1 = vscl_q(auVar1,fVar7);
    auVar1 = vadd_q(*(undefined (*) [16])(param_1 + 0x3d0),auVar1);
    *(int *)(param_1 + 0x60) = auVar1._0_4_;
    *(int *)(param_1 + 100) = auVar1._4_4_;
    *(int *)(param_1 + 0x68) = auVar1._8_4_;
    *(int *)(param_1 + 0x6c) = auVar1._12_4_;
    auVar5._4_4_ = auVar2._4_4_ + *(float *)(param_1 + 0x3f8);
    auVar5._0_4_ = auVar2._0_4_;
    auVar5._8_4_ = auVar2._8_4_;
    auVar5._12_4_ = auVar3._12_4_;
    auVar1 = vsub_q(auVar5,*(undefined (*) [16])(param_1 + 0x3c0));
    auVar1 = vscl_q(auVar1,fVar7);
    auVar1 = vadd_q(*(undefined (*) [16])(param_1 + 0x3c0),auVar1);
    *(float *)(param_1 + 0x50) = auVar1._0_4_;
    *(int *)(param_1 + 0x54) = auVar1._4_4_;
    *(int *)(param_1 + 0x58) = auVar1._8_4_;
    *(int *)(param_1 + 0x5c) = auVar1._12_4_;
    fVar7 = *(float *)(param_1 + 0x3f0) +
            (*(float *)(param_1 + 0x398) - *(float *)(param_1 + 0x3f0)) * fVar7;
    *(float *)(param_1 + 0x158) = fVar7;
    if (fVar7 < 5.0) {
      fVar7 = 5.0;
    }
    else if (60.0 < fVar7) {
      fVar7 = 60.0;
    }
    *(float *)(param_1 + 0x158) = fVar7;
  }
  return;
}

