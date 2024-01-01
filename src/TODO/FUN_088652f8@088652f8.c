#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088652f8(float param_1,undefined4 param_2,int param_3)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined (*pauVar5) [12];
  undefined (*pauVar6) [16];
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 uVar11;
  
  fVar8 = *(float *)(param_3 + 0x350);
  fVar7 = *(float *)(param_3 + 0x358);
  uVar9 = *(undefined4 *)(param_3 + 0x354);
  *(uint *)(param_3 + 0x144) = *(uint *)(param_3 + 0x144) | 1;
  pauVar5 = (undefined (*) [12])(param_3 + 0x80);
  uVar10 = vdot_t(*pauVar5,*pauVar5);
  uVar11 = vcmp_s(8,uVar10,*(undefined4 *)*pauVar5);
  vrsq_s(uVar10);
  uVar10 = vcmovt_s(in_V7D,(byte)uVar11 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(*pauVar5,uVar10);
  DAT_08af7ba0 = auVar1._0_4_;
  DAT_08af7ba8 = auVar1._8_4_;
  DAT_08af7bac = SQRT(DAT_08af7ba0 * DAT_08af7ba0 + DAT_08af7ba8 * DAT_08af7ba8);
  DAT_08af7ba4 = auVar1._4_4_;
  *(float *)(param_3 + 0x350) = DAT_08af7bac;
  *(int *)(param_3 + 0x354) = auVar1._4_4_;
  *(undefined4 *)(param_3 + 0x358) = 0;
  *(undefined4 *)(param_3 + 0x35c) = 0;
  pauVar6 = (undefined (*) [16])(param_3 + 0x350);
  auVar1._4_4_ = uVar9;
  auVar1._0_4_ = SQRT(fVar8 * fVar8 + fVar7 * fVar7);
  auVar1._8_4_ = 0;
  fVar7 = (float)vdot_t(*(undefined (*) [12])*pauVar6,auVar1);
  if (*(int *)(param_3 + 0x1b8) == 0x10000000) {
    if (*(int *)(param_3 + 0x1bc) == 0) {
      uVar9 = vmul_s(*(float *)(param_3 + 0x34) + 3.141593,in_V7C);
      auVar2 = vmov_q(*pauVar6);
      auVar3 = vrot_q(uVar9,1,0,3,0);
      auVar4 = vrot_q(uVar9,2,0,1,0);
      uVar9 = vdot_t(*(undefined (*) [12])*pauVar6,auVar3._0_12_);
      uVar10 = vdot_t(*(undefined (*) [12])*pauVar6,auVar4._0_12_);
      *(undefined4 *)*pauVar6 = uVar9;
      *(int *)(param_3 + 0x354) = auVar2._4_4_;
      *(undefined4 *)(param_3 + 0x358) = uVar10;
      *(int *)(param_3 + 0x35c) = auVar2._12_4_;
      goto LAB_08865448;
    }
    uVar9 = *(undefined4 *)(param_3 + 0x34);
  }
  else {
    uVar9 = *(undefined4 *)(param_3 + 0x34);
  }
  uVar9 = vmul_s(uVar9,in_V7C);
  auVar2 = vmov_q(*pauVar6);
  auVar3 = vrot_q(uVar9,1,0,3,0);
  auVar4 = vrot_q(uVar9,2,0,1,0);
  uVar9 = vdot_t(*(undefined (*) [12])*pauVar6,auVar3._0_12_);
  uVar10 = vdot_t(*(undefined (*) [12])*pauVar6,auVar4._0_12_);
  *(undefined4 *)*pauVar6 = uVar9;
  *(int *)(param_3 + 0x354) = auVar2._4_4_;
  *(undefined4 *)(param_3 + 0x358) = uVar10;
  *(int *)(param_3 + 0x35c) = auVar2._12_4_;
LAB_08865448:
  auVar2._12_4_ = DAT_08b001ac;
  auVar2._8_4_ = DAT_08b001a8;
  auVar2._4_4_ = DAT_08b001a4;
  auVar2._0_4_ = DAT_08b001a0;
  auVar2 = vsub_q(*pauVar6,auVar2);
  auVar2 = vscl_q(auVar2,param_2);
  auVar3._12_4_ = DAT_08b001ac;
  auVar3._8_4_ = DAT_08b001a8;
  auVar3._4_4_ = DAT_08b001a4;
  auVar3._0_4_ = DAT_08b001a0;
  auVar2 = vadd_q(auVar3,auVar2);
  *(int *)*pauVar6 = auVar2._0_4_;
  *(int *)(param_3 + 0x354) = auVar2._4_4_;
  *(int *)(param_3 + 0x358) = auVar2._8_4_;
  *(int *)(param_3 + 0x35c) = auVar2._12_4_;
  uVar9 = vdot_t(*(undefined (*) [12])*pauVar6,*(undefined (*) [12])*pauVar6);
  uVar10 = vcmp_s(8,uVar9,*(undefined4 *)*pauVar6);
  vrsq_s(uVar9);
  uVar9 = vcmovt_s(in_V7D,(byte)uVar10 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(*(undefined (*) [12])*pauVar6,uVar9);
  *(int *)*pauVar6 = auVar1._0_4_;
  *(int *)(param_3 + 0x354) = auVar1._4_4_;
  *(int *)(param_3 + 0x358) = auVar1._8_4_;
  *(undefined4 *)(param_3 + 0x35c) = in_V7D;
  fVar7 = 1.0 - fVar7;
  *(float *)(param_3 + 800) =
       *(float *)(param_3 + 800) - *(float *)(param_3 + 0x80) * fVar7 * 5.0 * param_1;
  fVar8 = ABS(fVar7) * *(float *)(param_3 + 0x17c) * 0.2;
  if (15.0 < fVar8) {
    fVar8 = param_1 * 15.0;
  }
  else {
    fVar8 = fVar8 * param_1;
  }
  *(float *)(param_3 + 0x324) = *(float *)(param_3 + 0x324) + fVar8;
  *(float *)(param_3 + 0x328) =
       *(float *)(param_3 + 0x328) - *(float *)(param_3 + 0x88) * fVar7 * 5.0 * param_1;
  return;
}

