#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b9f54(int param_1,char param_2,char param_3)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined4 uVar5;
  undefined auVar6 [16];
  int iVar7;
  undefined (*pauVar8) [12];
  float fVar9;
  undefined4 uVar10;
  undefined4 in_V73;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 uVar11;
  
  *(undefined4 *)(param_1 + 0x308) = DAT_08abd800;
  *(undefined4 *)(param_1 + 0x304) = 0;
  FUN_088b9eac(param_1,0);
  *(undefined4 *)(param_1 + 0x2f4) = 0;
  *(undefined4 *)(param_1 + 0x2f8) = 0x3dfa35dd;
  fVar9 = *(float *)(*(int *)(param_1 + 0x2a0) + 0x34) + 3.141593;
  pauVar8 = (undefined (*) [12])(param_1 + 0x2c0);
  *(float *)(param_1 + 0x2f0) = fVar9;
  if (3.141593 < fVar9) {
    *(float *)(param_1 + 0x2f0) = *(float *)(param_1 + 0x2f0) - 6.283185;
  }
  else if (*(float *)(param_1 + 0x2f0) <= -3.141593) {
    *(float *)(param_1 + 0x2f0) = *(float *)(param_1 + 0x2f0) + 6.283185;
  }
  iVar7 = *(int *)(param_1 + 0x2a0);
  uVar10 = *(undefined4 *)(iVar7 + 0x24);
  uVar11 = *(undefined4 *)(iVar7 + 0x28);
  uVar5 = *(undefined4 *)(iVar7 + 0x2c);
  *(undefined4 *)*pauVar8 = *(undefined4 *)(iVar7 + 0x20);
  *(undefined4 *)(param_1 + 0x2c4) = uVar10;
  *(undefined4 *)(param_1 + 0x2c8) = uVar11;
  *(undefined4 *)(param_1 + 0x2cc) = uVar5;
  *(float *)(param_1 + 0x2c4) = *(float *)(param_1 + 0x2c4) + DAT_08abd804;
  *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)*pauVar8;
  *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)(param_1 + 0x2c4);
  *(undefined4 *)(param_1 + 0x2d8) = *(undefined4 *)(param_1 + 0x2c8);
  *(undefined4 *)(param_1 + 0x2dc) = *(undefined4 *)(param_1 + 0x2cc);
  uVar10 = vmul_s(*(undefined4 *)(param_1 + 0x2f0),in_V7C);
  auVar4 = vrot_q(uVar10,1,0,2,0);
  auVar1 = vscl_t(auVar4._0_12_,DAT_08abd800);
  vpfxs(2,1,0x10,3);
  auVar2 = vmov_t(auVar1);
  uVar10 = vdot_t(auVar2,auVar2);
  uVar11 = vcmp_s(8,uVar10,auVar2._0_4_);
  vrsq_s(uVar10);
  uVar10 = vcmovt_s(in_V7D,(byte)uVar11 & 1);
  vpfxd(4,4,4,5);
  auVar2 = vscl_t(auVar2,uVar10);
  uVar10 = vcst_s(6);
  uVar10 = vmul_s(uVar10,0xbdfa35dd);
  uVar11 = vcos_s(uVar10);
  uVar10 = vsin_s(uVar10);
  auVar2 = vscl_t(auVar2,uVar10);
  if (*(int *)(param_1 + 0x5c4) != 0) {
    FUN_088fa4a4(*(undefined4 *)(param_1 + 0x5c4));
  }
  if (param_2 == '\0') {
    *(undefined4 *)(param_1 + 0x2fc) = 0;
  }
  else {
    auVar6._12_4_ = uVar11;
    auVar6._0_12_ = auVar2;
    auVar3._12_4_ = uVar11;
    auVar3._0_12_ = auVar2;
    vpfxs(0x10,0x11,0x12,3);
    auVar3 = vmov_q(auVar3);
    uVar10 = vmov_s(in_V73);
    auVar4._12_4_ = uVar10;
    auVar4._8_4_ = auVar1._8_4_;
    auVar4._4_4_ = auVar1._4_4_;
    auVar4._0_4_ = auVar1._0_4_;
    auVar4 = vqmul_q(auVar6,auVar4);
    auVar4 = vqmul_q(auVar4,auVar3);
    auVar1 = vadd_t(*pauVar8,auVar4._0_12_);
    *(int *)(param_1 + 0x50) = auVar1._0_4_;
    *(int *)(param_1 + 0x54) = auVar1._4_4_;
    *(int *)(param_1 + 0x58) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x2cc);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)*pauVar8;
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x2c4);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x2c8);
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x2cc);
    *(undefined4 *)(param_1 + 0x2fc) = 0x3f800000;
  }
  if (param_3 == '\0') {
    *(undefined4 *)(param_1 + 0x304) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x300) = 0;
    *(undefined4 *)(param_1 + 0x2fc) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x304) = 1;
  }
  return;
}
