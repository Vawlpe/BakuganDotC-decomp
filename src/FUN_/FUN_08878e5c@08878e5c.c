#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4
FUN_08878e5c(float param_1,float param_2,int param_3,undefined4 param_4,int param_5,
            undefined4 param_6)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined4 uVar5;
  undefined auVar6 [12];
  undefined auVar7 [12];
  int iVar8;
  undefined (*pauVar9) [12];
  int iVar10;
  undefined (*pauVar11) [12];
  undefined (*pauVar12) [16];
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 in_V73;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 uVar16;
  
  if (0x78 < *(int *)(param_3 + 0xf4)) {
    FUN_08876ee0(param_3);
    return 1;
  }
  iVar8 = FUN_088779d4(param_3);
  if (iVar8 == 0xc) {
    iVar8 = *(int *)(param_3 + 0xf4);
  }
  else {
    if ((*(char *)(param_3 + 0x114) != '\0') || (iVar8 = FUN_088787a0(param_3), iVar8 != 0)) {
      FUN_08823f5c(DAT_08b00920,param_6,param_3 + 0x60);
      FUN_08876ee0(param_3);
      return 1;
    }
    iVar8 = *(int *)(param_3 + 0xf4);
  }
  pauVar12 = (undefined (*) [16])(param_3 + 0x70);
  if (iVar8 == 0) {
    uVar15 = 0x3f490fdb;
    fVar13 = 40.0;
    iVar8 = FUN_08860344(*(undefined4 *)(param_3 + 0xb0));
    if (iVar8 != 0) {
      auVar2 = vsub_q(*(undefined (*) [16])(param_3 + 0x60),*(undefined (*) [16])(iVar8 + 0x20));
      uVar15 = vzero_s();
      auVar1._8_4_ = auVar2._8_4_;
      auVar1._4_4_ = uVar15;
      auVar1._0_4_ = auVar2._0_4_;
      auVar6._8_4_ = auVar2._8_4_;
      auVar6._4_4_ = uVar15;
      auVar6._0_4_ = auVar2._0_4_;
      uVar15 = vdot_t(auVar1,auVar6);
      fVar14 = (float)vsqrt_s(uVar15);
      fVar13 = fVar14 * 0.0133333;
      if (fVar13 < 35.0) {
        fVar13 = 35.0;
      }
      else if (45.0 < fVar13) {
        fVar13 = 45.0;
      }
      uVar15 = vasin_s((fVar14 * -0.5 * -0.5) / (fVar13 * fVar13));
      uVar15 = vmul_s(uVar15,0x3fc90fdb);
    }
    vpfxs(0x12,1,0,3);
    auVar1 = vmov_t(*(undefined (*) [12])*pauVar12);
    uVar16 = vcst_s(6);
    uVar15 = vmul_s(uVar16,uVar15);
    uVar16 = vcos_s(uVar15);
    uVar15 = vsin_s(uVar15);
    auVar1 = vscl_t(auVar1,uVar15);
    auVar4._12_4_ = uVar16;
    auVar4._0_12_ = auVar1;
    auVar3._12_4_ = uVar16;
    auVar3._0_12_ = auVar1;
    vpfxs(0x10,0x11,0x12,3);
    auVar3 = vmov_q(auVar3);
    uVar15 = vmov_s(in_V73);
    auVar2._12_4_ = uVar15;
    auVar2._8_4_ = *(undefined4 *)(param_3 + 0x78);
    auVar2._4_4_ = *(undefined4 *)(param_3 + 0x74);
    auVar2._0_4_ = *(undefined4 *)*pauVar12;
    auVar2 = vqmul_q(auVar4,auVar2);
    auVar2 = vqmul_q(auVar2,auVar3);
    *(int *)*pauVar12 = auVar2._0_4_;
    *(int *)(param_3 + 0x74) = auVar2._4_4_;
    *(int *)(param_3 + 0x78) = auVar2._8_4_;
    *(int *)(param_3 + 0x7c) = auVar2._12_4_;
    if (0.1396263 < param_2) {
      param_2 = 0.1396263;
    }
    else if (param_2 < -0.1396263) {
      param_2 = -0.1396263;
    }
    uVar15 = vmul_s(param_2,in_V7C);
    auVar2 = vmov_q(*pauVar12);
    auVar3 = vrot_q(uVar15,1,0,3,0);
    auVar4 = vrot_q(uVar15,2,0,1,0);
    uVar15 = vdot_t(*(undefined (*) [12])*pauVar12,auVar3._0_12_);
    uVar16 = vdot_t(*(undefined (*) [12])*pauVar12,auVar4._0_12_);
    *(undefined4 *)*pauVar12 = uVar15;
    *(int *)(param_3 + 0x74) = auVar2._4_4_;
    *(undefined4 *)(param_3 + 0x78) = uVar16;
    *(int *)(param_3 + 0x7c) = auVar2._12_4_;
    iVar8 = *(int *)(param_3 + 0xbc);
    uVar15 = *(undefined4 *)(param_3 + 0x74);
    uVar16 = *(undefined4 *)(param_3 + 0x78);
    uVar5 = *(undefined4 *)(param_3 + 0x7c);
    *(undefined4 *)(iVar8 + 0x90) = *(undefined4 *)*pauVar12;
    *(undefined4 *)(iVar8 + 0x94) = uVar15;
    *(undefined4 *)(iVar8 + 0x98) = uVar16;
    *(undefined4 *)(iVar8 + 0x9c) = uVar5;
    auVar1 = vscl_t(*(undefined (*) [12])*pauVar12,fVar13);
    *(int *)*pauVar12 = auVar1._0_4_;
    *(int *)(param_3 + 0x74) = auVar1._4_4_;
    *(int *)(param_3 + 0x78) = auVar1._8_4_;
    *(undefined4 *)(param_3 + 0x7c) = in_V7D;
    iVar8 = *(int *)(*(int *)(param_3 + 0xbc) + 0x14);
    (**(code **)(iVar8 + 0x14))(*(int *)(param_3 + 0xbc) + (int)*(short *)(iVar8 + 0x10));
    iVar8 = *(int *)(*(int *)(param_3 + 0xbc) + 0x14);
    (**(code **)(iVar8 + 0x14))(*(int *)(param_3 + 0xbc) + (int)*(short *)(iVar8 + 0x10));
    *(undefined4 *)(param_3 + 0x108) = 0x3f800000;
  }
  else {
    iVar8 = FUN_08860344(*(undefined4 *)(param_3 + 0xb0));
    pauVar11 = (undefined (*) [12])(param_3 + 0x60);
    if (iVar8 != 0) {
      fVar13 = (float)atan2f(*(undefined4 *)(param_3 + 0x78),*(undefined4 *)(param_3 + 0x70));
      auVar1 = vsub_t(*(undefined (*) [12])(iVar8 + 0x20),*pauVar11);
      auVar7._4_4_ = 0;
      auVar7._0_4_ = auVar1._0_4_;
      auVar7._8_4_ = auVar1._8_4_;
      vpfxs(0x12,1,0,3);
      auVar1 = vmov_t(auVar7);
      uVar15 = vdot_t(auVar1,auVar1);
      uVar16 = vcmp_s(8,uVar15,auVar1._0_4_);
      vrsq_s(uVar15);
      uVar15 = vcmovt_s(in_V7D,(byte)uVar16 & 1);
      uVar15 = vmul_s(uVar15,param_2);
      auVar1 = vscl_t(auVar1,uVar15);
      auVar1 = vadd_t(*(undefined (*) [12])(iVar8 + 0x20),auVar1);
      fVar14 = (float)atan2f(auVar1._8_4_ - *(float *)(param_3 + 0x68),
                             auVar1._0_4_ - *(float *)(param_3 + 0x60));
      if (3.141593 < fVar14) {
        fVar14 = fVar14 - 6.283185;
      }
      else if (fVar14 <= -3.141593) {
        fVar14 = fVar14 + 6.283185;
      }
      fVar13 = (fVar13 - fVar14) - (float)(int)((fVar13 - fVar14) * 0.3183099) * 6.283185;
      if (fVar13 < 0.0) {
        fVar13 = fVar13 + 6.283185;
      }
      if (3.141593 <= fVar13) {
        fVar13 = 6.283185 - fVar13;
      }
      else {
        fVar13 = -fVar13;
      }
      if (0.08726646 < ABS(fVar13)) {
        fVar13 = fVar13 * 0.1;
        if (0.08726646 < fVar13) {
          fVar14 = 0.08726646;
        }
        else {
          fVar14 = -0.08726646;
          if (-0.08726646 <= fVar13) {
            fVar14 = fVar13;
          }
        }
        uVar15 = vmul_s(fVar14 * param_1,in_V7C);
        auVar2 = vmov_q(*pauVar12);
        auVar3 = vrot_q(uVar15,1,0,3,0);
        auVar4 = vrot_q(uVar15,2,0,1,0);
        uVar15 = vdot_t(*(undefined (*) [12])*pauVar12,auVar3._0_12_);
        uVar16 = vdot_t(*(undefined (*) [12])*pauVar12,auVar4._0_12_);
        *(undefined4 *)*pauVar12 = uVar15;
        *(int *)(param_3 + 0x74) = auVar2._4_4_;
        *(undefined4 *)(param_3 + 0x78) = uVar16;
        *(int *)(param_3 + 0x7c) = auVar2._12_4_;
      }
    }
    *(float *)(param_3 + 0x74) = *(float *)(param_3 + 0x74) + -0.5;
    iVar8 = *(int *)(param_3 + 0xbc);
    uVar15 = *(undefined4 *)(param_3 + 0x74);
    uVar16 = *(undefined4 *)(param_3 + 0x78);
    uVar5 = *(undefined4 *)(param_3 + 0x7c);
    *(undefined4 *)(iVar8 + 0x90) = *(undefined4 *)*pauVar12;
    *(undefined4 *)(iVar8 + 0x94) = uVar15;
    *(undefined4 *)(iVar8 + 0x98) = uVar16;
    *(undefined4 *)(iVar8 + 0x9c) = uVar5;
    iVar8 = *(int *)(param_3 + 0xbc);
    pauVar9 = (undefined (*) [12])(iVar8 + 0x90);
    uVar15 = vdot_t(*pauVar9,*pauVar9);
    uVar16 = vcmp_s(8,uVar15,*(undefined4 *)*pauVar9);
    vrsq_s(uVar15);
    uVar15 = vcmovt_s(in_V7D,(byte)uVar16 & 1);
    vpfxd(4,4,4,5);
    auVar1 = vscl_t(*pauVar9,uVar15);
    *(int *)*pauVar9 = auVar1._0_4_;
    *(int *)(iVar8 + 0x94) = auVar1._4_4_;
    *(int *)(iVar8 + 0x98) = auVar1._8_4_;
    *(undefined4 *)(iVar8 + 0x9c) = in_V7D;
    DAT_08aba940 = 0;
    iVar8 = FUN_08878084(*(undefined4 *)(param_3 + 0xcc),param_3,pauVar11,pauVar12,param_4,3,0,
                         0x31bf337e);
    if (iVar8 != 0) {
      DAT_08aba934 = DAT_08aba934 + 20.0;
      if (((param_5 == 0x25) || (param_5 == 0x9b)) && (iVar8 = FUN_0880d354(), iVar8 != 0)) {
        param_5 = param_5 + 1;
      }
      iVar8 = FUN_08823f5c(DAT_08b00920,param_5,&DAT_08aba930);
      iVar10 = *(int *)(param_3 + 0xb0);
      *(int *)(iVar8 + 0x1fc) = iVar10;
      if (iVar10 != 0) {
        *(undefined4 *)(iVar8 + 0x200) = *(undefined4 *)(iVar10 + 0xc);
      }
      FUN_08876ee0(param_3);
      return 1;
    }
    auVar1 = vscl_t(*(undefined (*) [12])*pauVar12,*(undefined4 *)(param_3 + 0x108));
    uVar15 = *(undefined4 *)(param_3 + 0x6c);
    auVar1 = vadd_t(*pauVar11,auVar1);
    *(int *)*pauVar11 = auVar1._0_4_;
    *(int *)(param_3 + 100) = auVar1._4_4_;
    *(int *)(param_3 + 0x68) = auVar1._8_4_;
    *(undefined4 *)(param_3 + 0x6c) = uVar15;
  }
  return 0;
}

