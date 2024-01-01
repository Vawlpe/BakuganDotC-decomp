#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088e07c4(float param_1,float param_2,int param_3,float *param_4)

{
  undefined auVar1 [16];
  undefined auVar2 [12];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined auVar5 [16];
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7C;
  undefined4 in_V7E;
  
  iVar8 = 0;
  uVar6 = FUN_088be274();
  iVar7 = FUN_088c2010(uVar6);
  if (iVar7 == 0) {
    uVar6 = atan2f(param_4[2] - *(float *)(param_3 + 0x28),*param_4 - *(float *)(param_3 + 0x20));
    fVar9 = (float)FUN_088defe8(uVar6,0x3f800000,0x3e0efa35,param_3);
    if (0.01 <= fVar9 * fVar9) {
      *(undefined4 *)(param_3 + 0x80) = in_V72;
      *(undefined4 *)(param_3 + 0x84) = in_V76;
      *(undefined4 *)(param_3 + 0x88) = in_V7A;
      *(undefined4 *)(param_3 + 0x8c) = in_V7E;
      if ((0x4d < *(int *)(param_3 + 8)) && (uVar6 = 9, *(int *)(param_3 + 8) < 0x51)) {
        if (fVar9 < 0.0) {
          uVar6 = 10;
        }
        FUN_088def24(0x3e4ccccd,param_3,uVar6,0,0);
      }
    }
    else {
      auVar1._4_4_ = 0;
      auVar1._0_4_ = *(uint *)(param_3 + 0x20);
      auVar1._8_4_ = *(undefined4 *)(param_3 + 0x28);
      auVar1._12_4_ = *(undefined4 *)(param_3 + 0x2c);
      auVar5._4_4_ = 0;
      auVar5._0_4_ = *param_4;
      auVar5._8_4_ = param_4[2];
      auVar5._12_4_ = param_4[3];
      auVar1 = vsub_q(auVar1,auVar5);
      uVar6 = vdot_t(auVar1._0_12_,auVar1._0_12_);
      fVar9 = (float)vsqrt_s(uVar6);
      if (fVar9 < param_2) {
        iVar8 = 1;
      }
      else {
        uVar6 = vmul_s(*(undefined4 *)(param_3 + 0x34),in_V7C);
        auVar1 = vrot_q(uVar6,1,0,2,0);
        auVar2 = vscl_t(auVar1._0_12_,param_1);
        *(int *)(param_3 + 0x80) = auVar2._0_4_;
        *(int *)(param_3 + 0x84) = auVar2._4_4_;
        *(int *)(param_3 + 0x88) = auVar2._8_4_;
        *(int *)(param_3 + 0x8c) = auVar1._12_4_;
      }
    }
    if (iVar8 == 0) {
      auVar2 = vsub_t(*(undefined (*) [12])(param_3 + 0x380),*(undefined (*) [12])(param_3 + 0x20));
      fVar9 = (float)vdot_t(auVar2,auVar2);
      if (fVar9 < param_1 * param_1) {
        iVar7 = *(int *)(param_3 + 0x364) + 1;
        *(int *)(param_3 + 0x364) = iVar7;
        if (0x1e < iVar7) {
          *(undefined4 *)(param_3 + 0x364) = 0;
          iVar8 = 1;
        }
      }
      else {
        uVar6 = *(undefined4 *)(param_3 + 0x24);
        uVar3 = *(undefined4 *)(param_3 + 0x28);
        uVar4 = *(undefined4 *)(param_3 + 0x2c);
        *(undefined4 *)*(undefined (*) [12])(param_3 + 0x380) =
             *(undefined4 *)*(undefined (*) [12])(param_3 + 0x20);
        *(undefined4 *)(param_3 + 900) = uVar6;
        *(undefined4 *)(param_3 + 0x388) = uVar3;
        *(undefined4 *)(param_3 + 0x38c) = uVar4;
        *(undefined4 *)(param_3 + 0x364) = 0;
      }
    }
    return iVar8;
  }
  return 0;
}

