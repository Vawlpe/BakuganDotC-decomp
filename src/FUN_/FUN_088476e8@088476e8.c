#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088476e8(int param_1,char param_2)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined4 uVar5;
  undefined auVar6 [16];
  int iVar7;
  int iVar8;
  float fVar9;
  undefined (*pauVar10) [12];
  undefined (*pauVar11) [16];
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 in_V73;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 uVar15;
  
  iVar7 = FUN_08860344(*(undefined4 *)(param_1 + 0x2a0));
  auVar3 = vsub_q(*(undefined (*) [16])(iVar7 + 0x20),
                  *(undefined (*) [16])(*(int *)(param_1 + 0x2a0) + 0x20));
  uVar13 = vzero_s();
  auVar1._8_4_ = auVar3._8_4_;
  auVar1._4_4_ = uVar13;
  auVar1._0_4_ = auVar3._0_4_;
  auVar2._8_4_ = auVar3._8_4_;
  auVar2._4_4_ = uVar13;
  auVar2._0_4_ = auVar3._0_4_;
  uVar13 = vdot_t(auVar1,auVar2);
  fVar14 = (float)vsqrt_s(uVar13);
  fVar9 = 1.2;
  pauVar10 = (undefined (*) [12])(param_1 + 0x2b0);
  pauVar11 = (undefined (*) [16])(param_1 + 0x2d0);
  if (fVar14 * 0.0007692308 <= 1.2) {
    fVar9 = fVar14 * 0.0007692308;
  }
  fVar9 = 1.2 - fVar9;
  if (1.0 < fVar9) {
    fVar9 = 1.0;
  }
  *(undefined4 *)(param_1 + 0x2ac) = 1;
  fVar12 = (*(float *)(iVar7 + 0x24) - *(float *)(*(int *)(param_1 + 0x2a0) + 0x24)) * 0.1;
  fVar14 = *(float *)(*(int *)(param_1 + 0x400) + 0xc);
  if (fVar12 < -100.0) {
    fVar14 = -100.0;
  }
  else if (fVar12 <= fVar14) {
    fVar14 = fVar12;
  }
  if (fVar14 < 0.0) {
    fVar14 = fVar14 * 0.5;
  }
  *(float *)(param_1 + 0x314) = *(float *)(*(int *)(param_1 + 0x400) + 0xc) - fVar14;
  *(undefined4 *)(param_1 + 0x3fc) = 0;
  *(undefined4 *)(param_1 + 0x3f8) = 0;
  *(undefined4 *)(param_1 + 0x3f4) = 0;
  *(undefined *)(param_1 + 0x324) = 0;
  iVar8 = *(int *)(param_1 + 0x2a0);
  uVar13 = *(undefined4 *)(iVar8 + 0x24);
  uVar15 = *(undefined4 *)(iVar8 + 0x28);
  uVar5 = *(undefined4 *)(iVar8 + 0x2c);
  *(undefined4 *)*pauVar10 = *(undefined4 *)(iVar8 + 0x20);
  *(undefined4 *)(param_1 + 0x2b4) = uVar13;
  *(undefined4 *)(param_1 + 0x2b8) = uVar15;
  *(undefined4 *)(param_1 + 700) = uVar5;
  *(float *)(param_1 + 0x2b4) = *(float *)(param_1 + 0x2b4) + *(float *)(param_1 + 0x314);
  *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)*pauVar10;
  *(undefined4 *)(param_1 + 0x2c4) = *(undefined4 *)(param_1 + 0x2b4);
  *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_1 + 0x2b8);
  *(undefined4 *)(param_1 + 0x2cc) = *(undefined4 *)(param_1 + 700);
  iVar8 = *(int *)(param_1 + 0x2a0);
  uVar13 = *(undefined4 *)(iVar8 + 0x24);
  uVar15 = *(undefined4 *)(iVar8 + 0x28);
  uVar5 = *(undefined4 *)(iVar8 + 0x2c);
  *(undefined4 *)*pauVar11 = *(undefined4 *)(iVar8 + 0x20);
  *(undefined4 *)(param_1 + 0x2d4) = uVar13;
  *(undefined4 *)(param_1 + 0x2d8) = uVar15;
  *(undefined4 *)(param_1 + 0x2dc) = uVar5;
  auVar3 = vsub_q(*(undefined (*) [16])(iVar7 + 0x20),*pauVar11);
  auVar3 = vscl_q(auVar3,0x3f000000);
  auVar3 = vadd_q(*pauVar11,auVar3);
  *(int *)*pauVar11 = auVar3._0_4_;
  *(int *)(param_1 + 0x2d4) = auVar3._4_4_;
  *(int *)(param_1 + 0x2d8) = auVar3._8_4_;
  *(int *)(param_1 + 0x2dc) = auVar3._12_4_;
  *(float *)(param_1 + 0x2d4) = *(float *)(param_1 + 0x2d4) + *(float *)(param_1 + 0x314);
  *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)*pauVar11;
  *(undefined4 *)(param_1 + 0x2e4) = *(undefined4 *)(param_1 + 0x2d4);
  *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(param_1 + 0x2d8);
  *(undefined4 *)(param_1 + 0x2ec) = *(undefined4 *)(param_1 + 0x2dc);
  auVar1 = vsub_t(*(undefined (*) [12])*pauVar11,*pauVar10);
  auVar2 = vsub_t(*pauVar10,*(undefined (*) [12])(param_1 + 0x50));
  fVar14 = (float)atan2f(auVar2._8_4_,auVar2._0_4_);
  fVar12 = (float)atan2f(auVar1._8_4_,auVar1._0_4_);
  fVar12 = (fVar14 - fVar12) - (float)(int)((fVar14 - fVar12) * 0.3183099) * 6.283185;
  if (fVar12 < 0.0) {
    fVar12 = fVar12 + 6.283185;
  }
  if (3.141593 <= fVar12) {
    fVar12 = 6.283185 - fVar12;
  }
  else {
    fVar12 = -fVar12;
  }
  fVar9 = 1.396263 - (1.0 - fVar9) * 1.396263 * 0.7;
  if (fVar12 < 0.0) {
    if (-fVar9 <= fVar12) {
      *(float *)(param_1 + 0x300) = fVar14;
      goto LAB_08847a10;
    }
    fVar12 = fVar12 + fVar9;
  }
  else {
    if (fVar12 <= fVar9) {
      *(float *)(param_1 + 0x300) = fVar14;
      goto LAB_08847a10;
    }
    fVar12 = fVar12 - fVar9;
  }
  fVar14 = fVar14 + fVar12;
  *(float *)(param_1 + 0x300) = fVar14;
LAB_08847a10:
  uVar13 = vmul_s(fVar14,in_V7C);
  auVar3 = vrot_q(uVar13,1,0,2,0);
  auVar1 = vscl_t(auVar3._0_12_,-*(float *)(*(int *)(param_1 + 0x400) + 8));
  uVar13 = FUN_08846f40(*(float *)(param_1 + 0x2d4) - *(float *)(param_1 + 0x314),
                        *(undefined4 *)(*(int *)(param_1 + 0x2a0) + 0x24),
                        *(undefined4 *)(param_1 + 0x348),0x3f800000);
  *(undefined4 *)(param_1 + 0x350) = uVar13;
  vpfxs(2,1,0x10,3);
  auVar2 = vmov_t(auVar1);
  uVar13 = vdot_t(auVar2,auVar2);
  uVar15 = vcmp_s(8,uVar13,auVar2._0_4_);
  vrsq_s(uVar13);
  uVar13 = vcmovt_s(in_V7D,(byte)uVar15 & 1);
  vpfxd(4,4,4,5);
  auVar2 = vscl_t(auVar2,uVar13);
  uVar13 = vcst_s(6);
  uVar13 = vmul_s(uVar13,-*(float *)(param_1 + 0x350));
  uVar15 = vcos_s(uVar13);
  uVar13 = vsin_s(uVar13);
  auVar2 = vscl_t(auVar2,uVar13);
  *(undefined4 *)(param_1 + 0x310) = 0;
  if (param_2 == '\0') {
    *(undefined4 *)(param_1 + 0x30c) = 0;
  }
  else {
    auVar6._12_4_ = uVar15;
    auVar6._0_12_ = auVar2;
    auVar4._12_4_ = uVar15;
    auVar4._0_12_ = auVar2;
    vpfxs(0x10,0x11,0x12,3);
    auVar4 = vmov_q(auVar4);
    uVar13 = vmov_s(in_V73);
    auVar3._12_4_ = uVar13;
    auVar3._8_4_ = auVar1._8_4_;
    auVar3._4_4_ = auVar1._4_4_;
    auVar3._0_4_ = auVar1._0_4_;
    auVar3 = vqmul_q(auVar6,auVar3);
    auVar3 = vqmul_q(auVar3,auVar4);
    uVar13 = *(undefined4 *)(param_1 + 700);
    auVar1 = vadd_t(*pauVar10,auVar3._0_12_);
    *(int *)*(undefined (*) [12])(param_1 + 0x50) = auVar1._0_4_;
    *(int *)(param_1 + 0x54) = auVar1._4_4_;
    *(int *)(param_1 + 0x58) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x5c) = uVar13;
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)*pauVar11;
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x2d4);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x2d8);
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x2dc);
    *(undefined4 *)(param_1 + 0x30c) = 0x3f800000;
  }
  *(undefined4 *)(param_1 + 0x334) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x34c) = 0;
  return;
}

