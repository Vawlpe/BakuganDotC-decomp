#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088baba4(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 uVar7;
  
  FUN_088b9eac(param_1,3);
  *(undefined4 *)(param_1 + 0x304) = 0;
  *(undefined4 *)(param_1 + 0x2f4) = 0;
  *(undefined4 *)(param_1 + 0x2fc) = 0;
  *(undefined4 *)(param_1 + 0x308) = DAT_08abd800;
  *(undefined4 *)(param_1 + 0x2f8) = 0x3dfa35dd;
  fVar5 = *(float *)(*(int *)(param_1 + 0x2a0) + 0x34) + 3.141593;
  *(float *)(param_1 + 0x2f0) = fVar5;
  if (3.141593 < fVar5) {
    *(float *)(param_1 + 0x2f0) = *(float *)(param_1 + 0x2f0) - 6.283185;
  }
  else if (*(float *)(param_1 + 0x2f0) <= -3.141593) {
    *(float *)(param_1 + 0x2f0) = *(float *)(param_1 + 0x2f0) + 6.283185;
  }
  iVar4 = *(int *)(param_1 + 0x2a0);
  uVar6 = *(undefined4 *)(iVar4 + 0x24);
  uVar7 = *(undefined4 *)(iVar4 + 0x28);
  uVar3 = *(undefined4 *)(iVar4 + 0x2c);
  *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(iVar4 + 0x20);
  *(undefined4 *)(param_1 + 0x2c4) = uVar6;
  *(undefined4 *)(param_1 + 0x2c8) = uVar7;
  *(undefined4 *)(param_1 + 0x2cc) = uVar3;
  *(float *)(param_1 + 0x2c4) = *(float *)(param_1 + 0x2c4) + DAT_08abd804;
  *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)(param_1 + 0x2c0);
  *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)(param_1 + 0x2c4);
  *(undefined4 *)(param_1 + 0x2d8) = *(undefined4 *)(param_1 + 0x2c8);
  *(undefined4 *)(param_1 + 0x2dc) = *(undefined4 *)(param_1 + 0x2cc);
  uVar6 = vmul_s(*(undefined4 *)(param_1 + 0x2f0),in_V7C);
  auVar2 = vrot_q(uVar6,1,0,2,0);
  auVar1 = vscl_t(auVar2._0_12_,DAT_08abd800);
  vpfxs(2,1,0x10,3);
  auVar1 = vmov_t(auVar1);
  uVar6 = vdot_t(auVar1,auVar1);
  uVar7 = vcmp_s(8,uVar6,auVar1._0_4_);
  vrsq_s(uVar6);
  uVar6 = vcmovt_s(in_V7D,(byte)uVar7 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(auVar1,uVar6);
  uVar6 = vcst_s(6);
  uVar6 = vmul_s(uVar6,0xbdfa35dd);
  vcos_s(uVar6);
  uVar6 = vsin_s(uVar6);
  vscl_t(auVar1,uVar6);
  *(undefined4 *)(param_1 + 0x300) = 0;
  *(undefined4 *)(param_1 + 0x2fc) = 0x3f800000;
  return;
}

