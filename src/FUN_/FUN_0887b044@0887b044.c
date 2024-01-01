#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0887b044(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined auVar3 [16];
  undefined auVar4 [12];
  uint uVar5;
  undefined auVar6 [16];
  undefined4 uVar7;
  undefined auVar8 [12];
  undefined auVar9 [12];
  undefined auVar10 [16];
  int iVar11;
  int iVar12;
  undefined (*pauVar13) [16];
  undefined (*pauVar14) [12];
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 in_V73;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 uVar20;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  
  if (0x3c < *(int *)(param_2 + 0xf4)) {
    FUN_08876ee0(param_2);
    return;
  }
  iVar11 = FUN_08860344(*(undefined4 *)(param_2 + 0xb0));
  if (*(int *)(param_2 + 0xf4) == 0) {
    *(undefined4 *)(param_2 + 0x20) = param_1;
    auVar1 = vscl_t(*(undefined (*) [12])(param_2 + 0x70),param_1);
    *(int *)*(undefined (*) [12])(param_2 + 0x70) = auVar1._0_4_;
    *(int *)(param_2 + 0x74) = auVar1._4_4_;
    *(int *)(param_2 + 0x78) = auVar1._8_4_;
    *(undefined4 *)(param_2 + 0x7c) = in_V7D;
    fVar16 = 1.0;
    if (*(float *)(param_2 + 0x10c) != 0.0) {
      fVar16 = 1.8;
    }
    fVar15 = *(float *)(*(int *)(*(int *)(param_2 + 0xb0) + 0x168) + 4) -
             *(float *)(*(int *)(param_2 + 0xb0) + 0x34);
    fVar15 = fVar15 - (float)(int)(fVar15 * 0.3183099) * 6.283185;
    if (fVar15 < 0.0) {
      fVar15 = fVar15 + 6.283185;
    }
    if (3.141593 <= fVar15) {
      fVar15 = 6.283185 - fVar15;
    }
    else {
      fVar15 = -fVar15;
    }
    if (0.0 < fVar15) {
      fVar15 = -0.5654867;
    }
    else {
      fVar15 = 0.5654867;
    }
    *(float *)(param_2 + 0x104) = fVar16 * fVar15;
    *(undefined4 *)(param_2 + 0x10c) = 0x3f800000;
    *(float *)(param_2 + 0x108) = fVar16 * 0.1570796;
    *(undefined4 *)(param_2 + 0x24) = 0x7f800000;
    if (iVar11 != 0) {
      uVar18 = *(undefined4 *)(iVar11 + 0x24);
      uVar20 = *(undefined4 *)(iVar11 + 0x28);
      uVar7 = *(undefined4 *)(iVar11 + 0x2c);
      *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(iVar11 + 0x20);
      *(undefined4 *)(param_2 + 0x94) = uVar18;
      *(undefined4 *)(param_2 + 0x98) = uVar20;
      *(undefined4 *)(param_2 + 0x9c) = uVar7;
    }
    iVar12 = *(int *)(param_2 + 0xbc);
  }
  else {
    iVar12 = *(int *)(param_2 + 0xbc);
  }
  if (iVar12 == 0) {
    iVar11 = *(int *)(param_2 + 0xf4);
  }
  else {
    if ((iVar11 == 0) || (*(int *)(param_2 + 0xfc) != 0)) {
      FUN_08877af0(*(undefined4 *)(param_2 + 0x20),0x42dc0000,param_2,1,0);
      *(undefined4 *)(param_2 + 0xfc) = 1;
    }
    else {
      pauVar13 = (undefined (*) [16])(param_2 + 0x90);
      auVar1 = vsub_t(*(undefined (*) [12])(iVar11 + 0x20),*(undefined (*) [12])*pauVar13);
      auVar1 = vscl_t(auVar1,0x3e99999a);
      local_100 = auVar1._0_4_;
      local_fc = auVar1._4_4_;
      local_f8 = auVar1._8_4_;
      fVar16 = (float)vdot_t(auVar1,auVar1);
      pauVar14 = (undefined (*) [12])(param_2 + 0x70);
      if (400.0 < fVar16) {
        uVar18 = vdot_t(auVar1,auVar1);
        uVar20 = vcmp_s(8,uVar18,local_100);
        vrsq_s(uVar18);
        uVar18 = vcmovt_s(in_V7D,(byte)uVar20 & 1);
        uVar18 = vmul_s(uVar18,0x41a00000);
        auVar1 = vscl_t(auVar1,uVar18);
        local_100 = auVar1._0_4_;
        local_fc = auVar1._4_4_;
        local_f8 = auVar1._8_4_;
      }
      uVar18 = *(undefined4 *)(param_2 + 0x9c);
      auVar1._4_4_ = local_fc;
      auVar1._0_4_ = local_100;
      auVar1._8_4_ = local_f8;
      auVar1 = vadd_t(*(undefined (*) [12])*pauVar13,auVar1);
      *(int *)*pauVar13 = auVar1._0_4_;
      *(int *)(param_2 + 0x94) = auVar1._4_4_;
      *(int *)(param_2 + 0x98) = auVar1._8_4_;
      *(undefined4 *)(param_2 + 0x9c) = uVar18;
      auVar4._4_4_ = *(float *)(param_2 + 0x94) + 100.0;
      auVar4._0_4_ = *(undefined4 *)*pauVar13;
      auVar4._8_4_ = *(undefined4 *)(param_2 + 0x98);
      auVar1 = vsub_t(auVar4,*(undefined (*) [12])(param_2 + 0x60));
      fVar16 = auVar1._0_4_;
      fVar15 = auVar1._8_4_;
      fVar17 = (float)vdot_t(auVar1,auVar1);
      if ((*(float *)(param_2 + 0x24) < fVar17) || (fVar17 < 40000.0)) {
        *(undefined4 *)(param_2 + 0xfc) = 1;
        uVar18 = vdot_t(*pauVar14,*pauVar14);
        uVar20 = vcmp_s(8,uVar18,*(undefined4 *)*pauVar14);
        vrsq_s(uVar18);
        uVar18 = vcmovt_s(in_V7D,(byte)uVar20 & 1);
        vpfxd(4,4,4,5);
        auVar1 = vscl_t(*pauVar14,uVar18);
        *(int *)(param_2 + 0x80) = auVar1._0_4_;
        *(int *)(param_2 + 0x84) = auVar1._4_4_;
        *(int *)(param_2 + 0x88) = auVar1._8_4_;
        *(undefined4 *)(param_2 + 0x8c) = in_V7D;
        FUN_08877af0(*(undefined4 *)(param_2 + 0x20),0x42480000,param_2,1,0);
        *(undefined4 *)(param_2 + 0xe0) = 0x3da3d70a;
      }
      else {
        *(float *)(param_2 + 0x24) = fVar17;
        auVar3 = vsub_q(*(undefined (*) [16])(*(int *)(param_2 + 0xb0) + 0x20),*pauVar13);
        uVar18 = vdot_t(auVar3._0_12_,auVar3._0_12_);
        fVar19 = (float)vsqrt_s(uVar18);
        fVar17 = *(float *)(param_2 + 0x10c) +
                 (SQRT(fVar17) / fVar19 - *(float *)(param_2 + 0x10c)) * 0.2;
        *(float *)(param_2 + 0x10c) = fVar17;
        if (fVar17 < 0.0) {
          *(undefined4 *)(param_2 + 0x10c) = 0;
        }
        fVar17 = (float)atan2f(fVar15,fVar16);
        fVar17 = fVar17 + *(float *)(param_2 + 0x104) * *(float *)(param_2 + 0x10c);
        fVar16 = (float)atan2f(auVar1._4_4_,SQRT(fVar16 * fVar16 + fVar15 * fVar15));
        fVar16 = fVar16 + *(float *)(param_2 + 0x108) * *(float *)(param_2 + 0x10c);
        uVar18 = vmul_s(fVar16,in_V7C);
        fVar15 = (float)vcos_s(uVar18);
        uVar18 = vmul_s(fVar17,in_V7C);
        fVar19 = (float)vcos_s(uVar18);
        uVar18 = vmul_s(fVar16,in_V7C);
        uVar18 = vsin_s(uVar18);
        uVar20 = vmul_s(fVar17,in_V7C);
        fVar16 = (float)vsin_s(uVar20);
        *(float *)(param_2 + 0x70) = fVar19 * fVar15;
        *(undefined4 *)(param_2 + 0x74) = uVar18;
        *(float *)(param_2 + 0x78) = fVar16 * fVar15;
        *(undefined4 *)(param_2 + 0x7c) = 0;
        auVar1 = vscl_t(*pauVar14,*(undefined4 *)(param_2 + 0x20));
        *(int *)*pauVar14 = auVar1._0_4_;
        *(int *)(param_2 + 0x74) = auVar1._4_4_;
        *(int *)(param_2 + 0x78) = auVar1._8_4_;
        *(undefined4 *)(param_2 + 0x7c) = in_V7D;
      }
    }
    if (iVar11 != 0) {
      auVar1 = vsub_t(*(undefined (*) [12])(iVar11 + 0x20),
                      *(undefined (*) [12])(*(int *)(param_2 + 0xb0) + 0x20));
      vpfxs(0x12,1,0,3);
      auVar4 = vmov_t(auVar1);
      uVar5 = auVar4._0_4_;
      uVar18 = auVar4._8_4_;
      auVar9._4_4_ = 0;
      auVar9._0_4_ = uVar5;
      auVar9._8_4_ = uVar18;
      auVar8._4_4_ = 0;
      auVar8._0_4_ = uVar5;
      auVar8._8_4_ = uVar18;
      auVar2._4_4_ = 0;
      auVar2._0_4_ = uVar5;
      auVar2._8_4_ = uVar18;
      uVar18 = vdot_t(auVar2,auVar8);
      uVar20 = vcmp_s(8,uVar18,uVar5);
      vrsq_s(uVar18);
      uVar18 = vcmovt_s(in_V7D,(byte)uVar20 & 1);
      vpfxd(4,4,4,5);
      auVar4 = vscl_t(auVar9,uVar18);
      uVar18 = vcst_s(6);
      uVar18 = vmul_s(uVar18,0x3fc90fdb);
      uVar20 = vcos_s(uVar18);
      uVar18 = vsin_s(uVar18);
      auVar4 = vscl_t(auVar4,uVar18);
      auVar10._12_4_ = uVar20;
      auVar10._0_12_ = auVar4;
      auVar6._12_4_ = uVar20;
      auVar6._0_12_ = auVar4;
      vpfxs(0x10,0x11,0x12,3);
      auVar6 = vmov_q(auVar6);
      uVar18 = vmov_s(in_V73);
      auVar3._12_4_ = uVar18;
      auVar3._8_4_ = auVar1._8_4_;
      auVar3._4_4_ = auVar1._4_4_;
      auVar3._0_4_ = auVar1._0_4_;
      auVar3 = vqmul_q(auVar10,auVar3);
      auVar3 = vqmul_q(auVar3,auVar6);
      auVar4 = auVar3._0_12_;
      uVar18 = vdot_t(auVar4,auVar4);
      uVar20 = vcmp_s(8,uVar18,auVar3._0_4_);
      vrsq_s(uVar18);
      uVar18 = vcmovt_s(in_V7D,(byte)uVar20 & 1);
      uVar18 = vmul_s(uVar18,0x43e10000);
      auVar4 = vscl_t(auVar4,uVar18);
      auVar1 = vscl_t(auVar1,0x3f000000);
      auVar1 = vadd_t(*(undefined (*) [12])(*(int *)(param_2 + 0xb0) + 0x20),auVar1);
      auVar1 = vadd_t(auVar4,auVar1);
      auVar1 = vsub_t(auVar1,*(undefined (*) [12])(param_2 + 0x60));
      iVar11 = *(int *)(param_2 + 0xbc);
      pauVar14 = (undefined (*) [12])(param_2 + 0x70);
      uVar18 = vdot_t(*pauVar14,*pauVar14);
      uVar20 = vcmp_s(8,uVar18,auVar3._0_4_);
      vrsq_s(uVar18);
      uVar18 = vcmovt_s(in_V7D,(byte)uVar20 & 1);
      vpfxd(4,4,4,5);
      auVar4 = vscl_t(*pauVar14,uVar18);
      auVar1 = vcrsp_t(auVar1,auVar4);
      uVar18 = vdot_t(auVar1,auVar1);
      uVar20 = vcmp_s(8,uVar18,auVar1._0_4_);
      vrsq_s(uVar18);
      uVar18 = vcmovt_s(in_V7D,(byte)uVar20 & 1);
      vpfxd(4,4,4,5);
      auVar1 = vscl_t(auVar1,uVar18);
      auVar2 = vcrsp_t(auVar4,auVar1);
      auVar3 = vidt_q();
      auVar6 = vidt_q();
      *(int *)(iVar11 + 0x20) = auVar1._0_4_;
      *(int *)(iVar11 + 0x24) = auVar1._4_4_;
      *(int *)(iVar11 + 0x28) = auVar1._8_4_;
      *(int *)(iVar11 + 0x2c) = auVar3._0_4_;
      *(int *)(iVar11 + 0x30) = auVar2._0_4_;
      *(int *)(iVar11 + 0x34) = auVar2._4_4_;
      *(int *)(iVar11 + 0x38) = auVar2._8_4_;
      *(int *)(iVar11 + 0x3c) = auVar3._4_4_;
      *(int *)(iVar11 + 0x40) = auVar4._0_4_;
      *(int *)(iVar11 + 0x44) = auVar4._4_4_;
      *(int *)(iVar11 + 0x48) = auVar4._8_4_;
      *(int *)(iVar11 + 0x4c) = auVar3._8_4_;
      *(int *)(iVar11 + 0x50) = auVar6._0_4_;
      *(int *)(iVar11 + 0x54) = auVar6._4_4_;
      *(int *)(iVar11 + 0x58) = auVar6._8_4_;
      *(int *)(iVar11 + 0x5c) = auVar6._12_4_;
    }
    iVar11 = *(int *)(param_2 + 0xf4);
  }
  if (iVar11 != 0) {
    iVar11 = FUN_0887979c(param_2,param_3);
    if (iVar11 != 0) {
      return;
    }
    iVar11 = FUN_08878084(*(undefined4 *)(param_2 + 0xcc),param_2,param_2 + 0x60,param_2 + 0x70,
                          param_4,3,0,0x31bf337e);
    if (iVar11 != 0) {
      if (DAT_08aba940 == 0) {
        FUN_08878cc4(param_2,param_3,&DAT_08aba930);
        return;
      }
      FUN_08878cc4(param_2,param_3,&DAT_08aba930);
      return;
    }
  }
  uVar18 = *(undefined4 *)(param_2 + 0x6c);
  auVar1 = vadd_t(*(undefined (*) [12])(param_2 + 0x60),*(undefined (*) [12])(param_2 + 0x70));
  *(int *)*(undefined (*) [12])(param_2 + 0x60) = auVar1._0_4_;
  *(int *)(param_2 + 100) = auVar1._4_4_;
  *(int *)(param_2 + 0x68) = auVar1._8_4_;
  *(undefined4 *)(param_2 + 0x6c) = uVar18;
  return;
}

