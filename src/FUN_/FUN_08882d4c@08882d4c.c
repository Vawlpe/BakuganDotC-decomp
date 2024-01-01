#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08882d4c(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [64];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined4 uVar6;
  undefined auVar7 [64];
  uint uVar8;
  undefined (*pauVar9) [16];
  int iVar10;
  int iVar11;
  undefined (*pauVar12) [12];
  int iVar13;
  undefined4 uVar14;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 uVar15;
  
  if (0x3c < *(int *)(param_1 + 0xf4)) {
    FUN_08876ee0(param_1);
    return;
  }
  if (*(int *)(param_1 + 0xf4) != 0) {
    iVar10 = FUN_0887979c(param_1,0xc5);
    if (iVar10 != 0) {
      return;
    }
    FUN_08877af0(0x428c0000,0x42700000,param_1,1,0);
    pauVar12 = (undefined (*) [12])(param_1 + 0x60);
    iVar10 = (int)*(float *)(param_1 + 0x10c);
    if (iVar10 < 6) {
      if (4 < iVar10) {
        uVar14 = 0x5f;
        goto LAB_08882e18;
      }
    }
    else {
      uVar14 = 0x60;
      if (iVar10 < 7) goto LAB_08882e18;
    }
    uVar14 = 0x5d;
LAB_08882e18:
    iVar10 = FUN_08878084(*(undefined4 *)(param_1 + 0xcc),param_1,pauVar12,
                          (undefined (*) [12])(param_1 + 0x70),uVar14,3,0,0x31bf337e);
    if (iVar10 == 0) {
      uVar14 = *(undefined4 *)(param_1 + 0x6c);
      auVar1 = vadd_t(*pauVar12,*(undefined (*) [12])(param_1 + 0x70));
      *(int *)*pauVar12 = auVar1._0_4_;
      *(int *)(param_1 + 100) = auVar1._4_4_;
      *(int *)(param_1 + 0x68) = auVar1._8_4_;
      *(undefined4 *)(param_1 + 0x6c) = uVar14;
      return;
    }
    FUN_08878cc4(param_1,0xc5,&DAT_08aba930);
    return;
  }
  *(undefined4 *)(param_1 + 0xe0) = 0;
  pauVar9 = (undefined (*) [16])(param_1 + 0x80);
  if (DAT_08af7e50 == 0) {
    DAT_08af7e50 = 1;
    DAT_08af7e60 = 0x41a00000;
    DAT_08af7e64 = 0;
    DAT_08af7e68 = 0;
    DAT_08af7e6c = 0;
    DAT_08af7e70 = 0;
    DAT_08af7e74 = 0;
    DAT_08af7e78 = 0;
    DAT_08af7e7c = 0;
    DAT_08af7e80 = 0x41a00000;
    DAT_08af7e88 = 0x41a00000;
    DAT_08af7e84 = 0x41f00000;
    DAT_08af7e8c = 0;
    DAT_08af7e90 = 0;
    DAT_08af7e98 = 0;
    DAT_08af7e94 = 0x3fc00000;
    DAT_08af7e9c = 0;
    DAT_08af7ea0 = 0x41a00000;
    DAT_08af7ea8 = 0x41a00000;
    DAT_08af7ea4 = 0xc1f00000;
    DAT_08af7eac = 0;
    DAT_08af7eb0 = 0;
    DAT_08af7eb4 = 0x3fc00000;
    DAT_08af7eb8 = 0;
    DAT_08af7ebc = 0;
    DAT_08af7ec0 = 0x41a00000;
    DAT_08af7ec4 = 0x41f00000;
    DAT_08af7ecc = 0;
    DAT_08af7ec8 = 0xc1200000;
    DAT_08af7ed0 = 0;
    DAT_08af7ed4 = 0x3dcccccd;
    DAT_08af7ed8 = 0;
    DAT_08af7edc = 0;
    DAT_08af7ee0 = 0x41a00000;
    DAT_08af7ee4 = 0xc1f00000;
    DAT_08af7ee8 = 0xc1200000;
    DAT_08af7eec = 0;
    DAT_08af7ef0 = 0;
    DAT_08af7ef4 = 0x3dcccccd;
    DAT_08af7ef8 = 0;
    DAT_08af7efc = 0;
    DAT_08af7f00 = 0;
    DAT_08af7f04 = 0;
    DAT_08af7f08 = 0;
    DAT_08af7f0c = 0;
    DAT_08af7f10 = 0;
    DAT_08af7f14 = 0xbecccccd;
    DAT_08af7f18 = 0;
    DAT_08af7f1c = 0;
    DAT_08af7f20 = 0;
    DAT_08af7f24 = 0;
    DAT_08af7f28 = 0;
    DAT_08af7f2c = 0;
    DAT_08af7f30 = 0;
    DAT_08af7f38 = 0;
    DAT_08af7f34 = 0xc0200000;
    DAT_08af7f3c = 0;
  }
  iVar13 = (int)*(float *)(param_1 + 0x10c);
  iVar10 = *(int *)(*(int *)(param_1 + 0xb0) + 0x130);
  iVar11 = *(int *)(param_1 + 200);
  auVar2._60_4_ = *(undefined4 *)(iVar10 + 0xbc);
  auVar2._56_4_ = *(undefined4 *)(iVar10 + 0xac);
  auVar2._52_4_ = *(undefined4 *)(iVar10 + 0x9c);
  auVar2._48_4_ = *(undefined4 *)(iVar10 + 0x8c);
  auVar2._44_4_ = *(undefined4 *)(iVar10 + 0xb8);
  auVar2._40_4_ = *(undefined4 *)(iVar10 + 0xa8);
  auVar2._36_4_ = *(undefined4 *)(iVar10 + 0x98);
  auVar2._32_4_ = *(undefined4 *)(iVar10 + 0x88);
  auVar2._28_4_ = *(undefined4 *)(iVar10 + 0xb4);
  auVar2._24_4_ = *(undefined4 *)(iVar10 + 0xa4);
  auVar2._20_4_ = *(undefined4 *)(iVar10 + 0x94);
  auVar2._16_4_ = *(undefined4 *)(iVar10 + 0x84);
  auVar2._12_4_ = *(undefined4 *)(iVar10 + 0xb0);
  auVar2._8_4_ = *(undefined4 *)(iVar10 + 0xa0);
  auVar2._4_4_ = *(undefined4 *)(iVar10 + 0x90);
  auVar2._0_4_ = *(undefined4 *)(iVar10 + 0x80);
  auVar7._60_4_ = *(undefined4 *)(iVar11 + 0xbc);
  auVar7._56_4_ = *(undefined4 *)(iVar11 + 0xac);
  auVar7._52_4_ = *(undefined4 *)(iVar11 + 0x9c);
  auVar7._48_4_ = *(undefined4 *)(iVar11 + 0x8c);
  auVar7._44_4_ = *(undefined4 *)(iVar11 + 0xb8);
  auVar7._40_4_ = *(undefined4 *)(iVar11 + 0xa8);
  auVar7._36_4_ = *(undefined4 *)(iVar11 + 0x98);
  auVar7._32_4_ = *(undefined4 *)(iVar11 + 0x88);
  auVar7._28_4_ = *(undefined4 *)(iVar11 + 0xb4);
  auVar7._24_4_ = *(undefined4 *)(iVar11 + 0xa4);
  auVar7._20_4_ = *(undefined4 *)(iVar11 + 0x94);
  auVar7._16_4_ = *(undefined4 *)(iVar11 + 0x84);
  auVar7._12_4_ = *(undefined4 *)(iVar11 + 0xb0);
  auVar7._8_4_ = *(undefined4 *)(iVar11 + 0xa0);
  auVar7._4_4_ = *(undefined4 *)(iVar11 + 0x90);
  auVar7._0_4_ = *(undefined4 *)(iVar11 + 0x80);
  auVar2 = vmmul_q(auVar2,auVar7);
  *(undefined4 *)(param_1 + 0x20) = auVar2._0_4_;
  *(int *)(param_1 + 0x24) = auVar2._16_4_;
  *(int *)(param_1 + 0x28) = auVar2._32_4_;
  *(int *)(param_1 + 0x2c) = auVar2._48_4_;
  *(int *)(param_1 + 0x30) = auVar2._4_4_;
  *(int *)(param_1 + 0x34) = auVar2._20_4_;
  *(int *)(param_1 + 0x38) = auVar2._36_4_;
  *(int *)(param_1 + 0x3c) = auVar2._52_4_;
  *(int *)(param_1 + 0x40) = auVar2._8_4_;
  *(int *)(param_1 + 0x44) = auVar2._24_4_;
  *(int *)(param_1 + 0x48) = auVar2._40_4_;
  *(int *)(param_1 + 0x4c) = auVar2._56_4_;
  *(int *)(param_1 + 0x50) = auVar2._12_4_;
  *(int *)(param_1 + 0x54) = auVar2._28_4_;
  *(int *)(param_1 + 0x58) = auVar2._44_4_;
  *(int *)(param_1 + 0x5c) = auVar2._60_4_;
  uVar14 = vfim_s(0x3c00);
  auVar4._8_8_ = *(undefined8 *)(param_1 + 0x30);
  auVar4._4_4_ = *(undefined4 *)(param_1 + 0x24);
  auVar4._0_4_ = *(undefined4 *)(param_1 + 0x20);
  auVar3._12_4_ = uVar14;
  auVar3._8_4_ = (&DAT_08af7e68)[iVar13 * 8];
  auVar3._4_4_ = (&DAT_08af7e64)[iVar13 * 8];
  auVar3._0_4_ = (&DAT_08af7e60)[iVar13 * 8];
  auVar3 = vtfm4_q(auVar4,auVar3);
  *(int *)(param_1 + 0x60) = auVar3._0_4_;
  *(int *)(param_1 + 100) = auVar3._4_4_;
  *(int *)(param_1 + 0x68) = auVar3._8_4_;
  *(int *)(param_1 + 0x6c) = auVar3._12_4_;
  auVar1._8_4_ = 0x3e4ccccd;
  auVar1._0_8_ = 0x3e4ccccd3e4ccccd;
  auVar1 = vmul_t(*(undefined (*) [12])(&DAT_08af7e70 + iVar13 * 8),auVar1);
  uVar14 = *(undefined4 *)(param_1 + 0x8c);
  auVar1 = vadd_t(*(undefined (*) [12])*pauVar9,auVar1);
  *(int *)*pauVar9 = auVar1._0_4_;
  *(int *)(param_1 + 0x84) = auVar1._4_4_;
  *(int *)(param_1 + 0x88) = auVar1._8_4_;
  *(undefined4 *)(param_1 + 0x8c) = uVar14;
  uVar14 = vdot_t(*(undefined (*) [12])*pauVar9,*(undefined (*) [12])*pauVar9);
  uVar15 = vcmp_s(8,uVar14,*(undefined4 *)*pauVar9);
  vrsq_s(uVar14);
  uVar14 = vcmovt_s(in_V7D,(byte)uVar15 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(*(undefined (*) [12])*pauVar9,uVar14);
  *(int *)*pauVar9 = auVar1._0_4_;
  *(int *)(param_1 + 0x84) = auVar1._4_4_;
  *(int *)(param_1 + 0x88) = auVar1._8_4_;
  *(undefined4 *)(param_1 + 0x8c) = in_V7D;
  uVar8 = (int)*(float *)(param_1 + 0x10c) & 0xff;
  if (uVar8 < 3) {
    if (uVar8 != 0) {
      if (uVar8 < 2) goto LAB_08883120;
      goto LAB_08883168;
    }
  }
  else {
    if (uVar8 < 4) {
LAB_08883120:
      uVar14 = vmul_s(0xbe860a92,in_V7C);
      auVar3 = vmov_q(*pauVar9);
      auVar4 = vrot_q(uVar14,1,0,3,0);
      auVar5 = vrot_q(uVar14,2,0,1,0);
      uVar14 = vdot_t(*(undefined (*) [12])*pauVar9,auVar4._0_12_);
      uVar15 = vdot_t(*(undefined (*) [12])*pauVar9,auVar5._0_12_);
      *(undefined4 *)*pauVar9 = uVar14;
      *(int *)(param_1 + 0x84) = auVar3._4_4_;
      *(undefined4 *)(param_1 + 0x88) = uVar15;
      *(int *)(param_1 + 0x8c) = auVar3._12_4_;
      iVar10 = *(int *)(param_1 + 0xbc);
      goto LAB_08883198;
    }
    if (4 < uVar8) {
      iVar10 = *(int *)(param_1 + 0xbc);
      goto LAB_08883198;
    }
LAB_08883168:
    uVar14 = vmul_s(0x3e860a92,in_V7C);
    auVar3 = vmov_q(*pauVar9);
    auVar4 = vrot_q(uVar14,1,0,3,0);
    auVar5 = vrot_q(uVar14,2,0,1,0);
    uVar14 = vdot_t(*(undefined (*) [12])*pauVar9,auVar4._0_12_);
    uVar15 = vdot_t(*(undefined (*) [12])*pauVar9,auVar5._0_12_);
    *(undefined4 *)*pauVar9 = uVar14;
    *(int *)(param_1 + 0x84) = auVar3._4_4_;
    *(undefined4 *)(param_1 + 0x88) = uVar15;
    *(int *)(param_1 + 0x8c) = auVar3._12_4_;
  }
  iVar10 = *(int *)(param_1 + 0xbc);
LAB_08883198:
  uVar14 = *(undefined4 *)(param_1 + 0x84);
  uVar15 = *(undefined4 *)(param_1 + 0x88);
  uVar6 = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(iVar10 + 0x90) = *(undefined4 *)*pauVar9;
  *(undefined4 *)(iVar10 + 0x94) = uVar14;
  *(undefined4 *)(iVar10 + 0x98) = uVar15;
  *(undefined4 *)(iVar10 + 0x9c) = uVar6;
  return;
}

