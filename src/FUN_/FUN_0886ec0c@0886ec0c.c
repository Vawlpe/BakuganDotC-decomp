#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0886ec0c(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined auVar3 [12];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined4 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  undefined (*pauVar11) [12];
  undefined (*pauVar12) [12];
  undefined4 *puVar13;
  undefined (*pauVar14) [16];
  undefined (*pauVar15) [12];
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 in_V72;
  undefined4 in_V73;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 in_V7E;
  undefined4 in_V7F;
  undefined4 uVar19;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined *local_fc;
  int local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  float local_b4;
  float local_a4;
  undefined4 local_98;
  
  bVar8 = false;
  iVar9 = FUN_08860188(*(undefined4 *)(param_1 + 0x3c8));
  if (iVar9 == 0) {
    *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) & 0xfffffff7;
    iVar9 = *(int *)(param_1 + 0x20c);
    *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
    *(uint *)(iVar9 + 0x130) = *(uint *)(iVar9 + 0x130) & 0xfffffffe;
    *(undefined4 *)(iVar9 + 0x148) = 0;
    *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) & 0xfffffeff;
    FUN_088706f0(param_1,0,0);
    (**(code **)(*(int *)(param_1 + 0x14) + 0xd4))
              (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0xd0));
    return;
  }
  iVar10 = *(int *)(param_1 + 0x3cc);
  if (iVar10 < 2) {
    if (-1 < iVar10) {
      pauVar12 = (undefined (*) [12])(param_1 + 0x400);
      pauVar14 = (undefined (*) [16])(param_1 + 0x3f0);
      if (iVar10 < 1) {
        *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) * 0.9;
        uVar18 = *(undefined4 *)(param_1 + 0x254);
        uVar19 = *(undefined4 *)(param_1 + 600);
        uVar7 = *(undefined4 *)(param_1 + 0x25c);
        *(undefined4 *)*pauVar12 = *(undefined4 *)*(undefined (*) [12])(param_1 + 0x250);
        *(undefined4 *)(param_1 + 0x404) = uVar18;
        *(undefined4 *)(param_1 + 0x408) = uVar19;
        *(undefined4 *)(param_1 + 0x40c) = uVar7;
        pauVar12 = (undefined (*) [12])(param_1 + 0x80);
        uVar18 = vdot_t(*pauVar12,*pauVar12);
        uVar19 = vcmp_s(8,uVar18,*(undefined4 *)*pauVar12);
        vrsq_s(uVar18);
        uVar18 = vcmovt_s(in_V7D,(byte)uVar19 & 1);
        vpfxd(4,4,4,5);
        auVar1 = vscl_t(*pauVar12,uVar18);
        *(int *)*pauVar14 = auVar1._0_4_;
        *(int *)(param_1 + 0x3f4) = auVar1._4_4_;
        *(int *)(param_1 + 0x3f8) = auVar1._8_4_;
        *(undefined4 *)(param_1 + 0x3fc) = in_V7D;
        *(undefined4 *)*pauVar12 = in_V72;
        *(undefined4 *)(param_1 + 0x84) = in_V76;
        *(undefined4 *)(param_1 + 0x88) = in_V7A;
        *(undefined4 *)(param_1 + 0x8c) = in_V7E;
        *(undefined4 *)(param_1 + 0x174) = 0x43480000;
        *(int *)(param_1 + 0x3cc) = *(int *)(param_1 + 0x3cc) + 1;
        *(undefined4 *)(param_1 + 0x3d4) = 1;
        *(undefined4 *)(param_1 + 0x3d0) = 0xf;
        *(undefined4 *)(param_1 + 0x3dc) = 0;
        *(undefined4 *)(param_1 + 0x3d8) = 0;
        *(undefined4 *)(param_1 + 0x1c4) = 10;
        *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) | 8;
      }
      else {
        fVar17 = *(float *)(param_1 + 0x3dc) + 0.0625;
        pauVar15 = (undefined (*) [12])(iVar9 + 0x250);
        if (1.0 < fVar17) {
          fVar17 = 1.0;
        }
        *(float *)(param_1 + 0x3dc) = fVar17;
        uVar18 = vmul_s(fVar17 * 3.141593,in_V7C);
        local_b4 = (float)vcos_s(uVar18);
        *(float *)(param_1 + 0x84) =
             ((*(float *)(iVar9 + 0x24) + 40.0) - *(float *)(param_1 + 0x24)) * 0.2 *
             (1.0 - local_b4) * 0.5;
        auVar1 = vsub_t(*pauVar15,*(undefined (*) [12])(param_1 + 0x250));
        uVar18 = vdot_t(auVar1,auVar1);
        fVar16 = (float)vsqrt_s(uVar18);
        fVar17 = *(float *)(*(int *)(iVar9 + 0x4bc) + 0xc) +
                 *(float *)(*(int *)(param_1 + 0x4bc) + 0xc);
        if (fVar17 < fVar16) {
          uVar18 = vmul_s(*(float *)(param_1 + 0x3dc) * 3.141593,in_V7C);
          local_a4 = (float)vcos_s(uVar18);
          uVar18 = vdot_t(auVar1,auVar1);
          uVar19 = vcmp_s(8,uVar18,auVar1._0_4_);
          vrsq_s(uVar18);
          uVar18 = vcmovt_s(in_V7D,(byte)uVar19 & 1);
          uVar18 = vmul_s(uVar18,(1.0 - local_a4) * 0.5 * 0.01 * (fVar16 - fVar17));
          auVar1 = vscl_t(auVar1,uVar18);
          uVar18 = *(undefined4 *)(param_1 + 0x8c);
          auVar2._4_4_ = 0;
          auVar2._0_4_ = auVar1._0_4_;
          auVar2._8_4_ = auVar1._8_4_;
          auVar1 = vadd_t(*(undefined (*) [12])(param_1 + 0x80),auVar2);
          *(int *)*(undefined (*) [12])(param_1 + 0x80) = auVar1._0_4_;
          *(int *)(param_1 + 0x84) = auVar1._4_4_;
          *(int *)(param_1 + 0x88) = auVar1._8_4_;
          *(undefined4 *)(param_1 + 0x8c) = uVar18;
          *(undefined4 *)(param_1 + 0x1c4) = 10;
        }
        else {
          *(undefined4 *)(param_1 + 0x1c4) = 10;
        }
        uVar18 = vmin_s(*(float *)(param_1 + 0x6c) - 0.3,in_V7F);
        local_98 = vmax_s(uVar18,in_V7D);
        *(undefined4 *)(param_1 + 0x6c) = local_98;
        auVar1 = vscl_t(*(undefined (*) [12])*pauVar14,*(undefined4 *)(param_1 + 0x174));
        uVar18 = *(undefined4 *)(param_1 + 0x40c);
        auVar1 = vadd_t(*pauVar12,auVar1);
        *(int *)*pauVar12 = auVar1._0_4_;
        *(int *)(param_1 + 0x404) = auVar1._4_4_;
        *(int *)(param_1 + 0x408) = auVar1._8_4_;
        *(undefined4 *)(param_1 + 0x40c) = uVar18;
        iVar10 = *(int *)(param_1 + 0x3d4) + 1;
        *(int *)(param_1 + 0x3d4) = iVar10;
        if (*(int *)(param_1 + 0x3d0) < iVar10) {
          if (*(int *)(param_1 + 0x3d0) < 3) {
            *(int *)(param_1 + 0x3d8) = *(int *)(param_1 + 0x3d8) + 1;
          }
          else {
            *(int *)(param_1 + 0x3d0) = *(int *)(param_1 + 0x3d0) + -1;
          }
          pauVar11 = (undefined (*) [12])(param_1 + 0x80);
          if (*(int *)(param_1 + 0x3d8) < 5) {
            *(undefined4 *)(param_1 + 0x3d4) = 0;
            uVar18 = *(undefined4 *)(iVar9 + 0x254);
            uVar19 = *(undefined4 *)(iVar9 + 600);
            uVar7 = *(undefined4 *)(iVar9 + 0x25c);
            *(undefined4 *)*pauVar14 = *(undefined4 *)*pauVar15;
            *(undefined4 *)(param_1 + 0x3f4) = uVar18;
            *(undefined4 *)(param_1 + 0x3f8) = uVar19;
            *(undefined4 *)(param_1 + 0x3fc) = uVar7;
            uVar18 = *(undefined4 *)(param_1 + 0x3fc);
            auVar1 = vsub_t(*(undefined (*) [12])*pauVar14,*pauVar12);
            *(int *)*pauVar14 = auVar1._0_4_;
            *(int *)(param_1 + 0x3f4) = auVar1._4_4_;
            *(int *)(param_1 + 0x3f8) = auVar1._8_4_;
            *(undefined4 *)(param_1 + 0x3fc) = uVar18;
            *(undefined4 *)(param_1 + 0x3f4) = 0;
            uVar18 = vdot_t(*(undefined (*) [12])*pauVar14,*(undefined (*) [12])*pauVar14);
            uVar19 = vcmp_s(8,uVar18,*(undefined4 *)*pauVar14);
            vrsq_s(uVar18);
            uVar18 = vcmovt_s(in_V7D,(byte)uVar19 & 1);
            vpfxd(4,4,4,5);
            auVar1 = vscl_t(*(undefined (*) [12])*pauVar14,uVar18);
            *(int *)*pauVar14 = auVar1._0_4_;
            *(int *)(param_1 + 0x3f4) = auVar1._4_4_;
            *(int *)(param_1 + 0x3f8) = auVar1._8_4_;
            *(undefined4 *)(param_1 + 0x3fc) = in_V7D;
            vpfxs(2,1,0x10,3);
            auVar1 = vmov_t(*(undefined (*) [12])*pauVar14);
            fVar17 = (float)FUN_089bedc4(0x3f060a92);
            uVar18 = vcst_s(6);
            uVar18 = vmul_s(uVar18,fVar17 + 0.1745329);
            uVar19 = vcos_s(uVar18);
            uVar18 = vsin_s(uVar18);
            auVar1 = vscl_t(auVar1,uVar18);
            auVar6._12_4_ = uVar19;
            auVar6._0_12_ = auVar1;
            auVar5._12_4_ = uVar19;
            auVar5._0_12_ = auVar1;
            vpfxs(0x10,0x11,0x12,3);
            auVar5 = vmov_q(auVar5);
            uVar18 = vmov_s(in_V73);
            auVar4._12_4_ = uVar18;
            auVar4._8_4_ = *(undefined4 *)(param_1 + 0x3f8);
            auVar4._4_4_ = *(undefined4 *)(param_1 + 0x3f4);
            auVar4._0_4_ = *(undefined4 *)*pauVar14;
            auVar4 = vqmul_q(auVar6,auVar4);
            auVar4 = vqmul_q(auVar4,auVar5);
            *(int *)*pauVar14 = auVar4._0_4_;
            *(int *)(param_1 + 0x3f4) = auVar4._4_4_;
            *(int *)(param_1 + 0x3f8) = auVar4._8_4_;
            *(int *)(param_1 + 0x3fc) = auVar4._12_4_;
            uVar18 = vmul_s(0x3e32b8c2,in_V7C);
            auVar4 = vmov_q(*pauVar14);
            auVar5 = vrot_q(uVar18,1,0,3,0);
            auVar6 = vrot_q(uVar18,2,0,1,0);
            uVar18 = vdot_t(*(undefined (*) [12])*pauVar14,auVar5._0_12_);
            uVar19 = vdot_t(*(undefined (*) [12])*pauVar14,auVar6._0_12_);
            *(undefined4 *)*pauVar14 = uVar18;
            *(int *)(param_1 + 0x3f4) = auVar4._4_4_;
            *(undefined4 *)(param_1 + 0x3f8) = uVar19;
            *(int *)(param_1 + 0x3fc) = auVar4._12_4_;
            auVar1 = vscl_t(*(undefined (*) [12])*pauVar14,0x43fa0000);
            uVar19 = *(undefined4 *)(iVar9 + 0x25c);
            auVar1 = vsub_t(*pauVar15,auVar1);
            uVar18 = auVar1._0_4_;
            *(undefined4 *)*pauVar12 = uVar18;
            *(int *)(param_1 + 0x404) = auVar1._4_4_;
            *(int *)(param_1 + 0x408) = auVar1._8_4_;
            *(undefined4 *)(param_1 + 0x40c) = uVar19;
            iVar10 = FUN_08824024(DAT_08ac5c70,0xf3,pauVar12,pauVar14);
            uVar19 = vdot_t(*(undefined (*) [12])*pauVar14,*(undefined (*) [12])*pauVar14);
            uVar18 = vcmp_s(8,uVar19,uVar18);
            vrsq_s(uVar19);
            uVar18 = vcmovt_s(in_V7D,(byte)uVar18 & 1);
            vpfxd(4,4,4,5);
            auVar1 = vscl_t(*(undefined (*) [12])*pauVar14,uVar18);
            auVar3._8_4_ = DAT_08b001a8;
            auVar3._4_4_ = DAT_08b001a4;
            auVar3._0_4_ = DAT_08b001a0;
            auVar2 = vcrsp_t(auVar3,auVar1);
            uVar18 = vdot_t(auVar2,auVar2);
            uVar19 = vcmp_s(8,uVar18,auVar2._0_4_);
            vrsq_s(uVar18);
            uVar18 = vcmovt_s(in_V7D,(byte)uVar19 & 1);
            vpfxd(4,4,4,5);
            auVar2 = vscl_t(auVar2,uVar18);
            auVar3 = vcrsp_t(auVar1,auVar2);
            auVar4 = vidt_q();
            auVar5 = vidt_q();
            *(int *)(iVar10 + 0x20) = auVar2._0_4_;
            *(int *)(iVar10 + 0x24) = auVar2._4_4_;
            *(int *)(iVar10 + 0x28) = auVar2._8_4_;
            *(int *)(iVar10 + 0x2c) = auVar4._0_4_;
            *(int *)(iVar10 + 0x30) = auVar3._0_4_;
            *(int *)(iVar10 + 0x34) = auVar3._4_4_;
            *(int *)(iVar10 + 0x38) = auVar3._8_4_;
            *(int *)(iVar10 + 0x3c) = auVar4._4_4_;
            *(int *)(iVar10 + 0x40) = auVar1._0_4_;
            *(int *)(iVar10 + 0x44) = auVar1._4_4_;
            *(int *)(iVar10 + 0x48) = auVar1._8_4_;
            *(int *)(iVar10 + 0x4c) = auVar4._8_4_;
            *(int *)(iVar10 + 0x50) = auVar5._0_4_;
            *(int *)(iVar10 + 0x54) = auVar5._4_4_;
            *(int *)(iVar10 + 0x58) = auVar5._8_4_;
            *(int *)(iVar10 + 0x5c) = auVar5._12_4_;
          }
          else {
            uVar18 = *(undefined4 *)(param_1 + 0x2c);
            auVar1 = vsub_t(*(undefined (*) [12])(param_1 + 0x20),
                            *(undefined (*) [12])(iVar9 + 0x20));
            *(int *)*pauVar11 = auVar1._0_4_;
            *(int *)(param_1 + 0x84) = auVar1._4_4_;
            *(int *)(param_1 + 0x88) = auVar1._8_4_;
            *(undefined4 *)(param_1 + 0x8c) = uVar18;
            *(undefined4 *)(param_1 + 0x84) = 0;
            uVar18 = vdot_t(*pauVar11,*pauVar11);
            uVar19 = vcmp_s(8,uVar18,*(undefined4 *)*pauVar11);
            vrsq_s(uVar18);
            uVar18 = vcmovt_s(in_V7D,(byte)uVar19 & 1);
            uVar18 = vmul_s(uVar18,0x42480000);
            auVar1 = vscl_t(*pauVar11,uVar18);
            *(int *)*pauVar11 = auVar1._0_4_;
            *(int *)(param_1 + 0x84) = auVar1._4_4_;
            *(int *)(param_1 + 0x88) = auVar1._8_4_;
            *(undefined4 *)(param_1 + 0x8c) = in_V7D;
            *(int *)(param_1 + 0x3cc) = *(int *)(param_1 + 0x3cc) + 1;
            uVar18 = atan2f(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x80));
            FUN_0886003c(uVar18,param_1);
            *(undefined4 *)(param_1 + 0x6c) = 0x3ecccccd;
            *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) & 0xfffffff7;
          }
        }
        else if (*(int *)(param_1 + 0x3d4) == 1) {
          bVar8 = true;
        }
      }
    }
    goto LAB_0886f434;
  }
  if (iVar10 < 3) {
    *(float *)(param_1 + 0x6c) =
         *(float *)(param_1 + 0x6c) + (1.0 - *(float *)(param_1 + 0x6c)) * 0.1;
    pauVar12 = (undefined (*) [12])(param_1 + 0x80);
    auVar1 = vscl_t(*pauVar12,0x3f666666);
    *(int *)*pauVar12 = auVar1._0_4_;
    *(int *)(param_1 + 0x84) = auVar1._4_4_;
    *(int *)(param_1 + 0x88) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x8c) = in_V7D;
    *(undefined4 *)(param_1 + 0x1c4) = 10;
    fVar17 = (float)vdot_t(*pauVar12,*pauVar12);
    if (fVar17 < 25.0) {
      *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x174) = 0;
      FUN_088608d8(0x3e4ccccd,param_1,0xd,0,0);
      *(undefined4 *)(param_1 + 0x3d4) = 0;
      *(int *)(param_1 + 0x3cc) = *(int *)(param_1 + 0x3cc) + 1;
      *(undefined4 *)(param_1 + 0x3d8) = 0;
    }
    goto LAB_0886f434;
  }
  if (3 < iVar10) goto LAB_0886f434;
  auVar1 = vscl_t(*(undefined (*) [12])(param_1 + 0x80),0x3f666666);
  *(int *)*(undefined (*) [12])(param_1 + 0x80) = auVar1._0_4_;
  *(int *)(param_1 + 0x84) = auVar1._4_4_;
  *(int *)(param_1 + 0x88) = auVar1._8_4_;
  *(undefined4 *)(param_1 + 0x8c) = in_V7D;
  *(undefined4 *)(param_1 + 0x1c4) = 10;
  iVar10 = *(int *)(param_1 + 0x3d4) + 1;
  *(int *)(param_1 + 0x3d4) = iVar10;
  if (iVar10 == 0x12) {
    FUN_08823f5c(DAT_08ac5c70,0xa4,(undefined (*) [12])(iVar9 + 0x20));
    pauVar12 = (undefined (*) [12])(param_1 + 0x3f0);
    uVar18 = *(undefined4 *)(iVar9 + 0x2c);
    auVar1 = vsub_t(*(undefined (*) [12])(iVar9 + 0x20),*(undefined (*) [12])(param_1 + 0x20));
    *(int *)*pauVar12 = auVar1._0_4_;
    *(int *)(param_1 + 0x3f4) = auVar1._4_4_;
    *(int *)(param_1 + 0x3f8) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x3fc) = uVar18;
    uVar18 = vdot_t(*pauVar12,*pauVar12);
    uVar19 = vcmp_s(8,uVar18,*(undefined4 *)*pauVar12);
    vrsq_s(uVar18);
    uVar18 = vcmovt_s(in_V7D,(byte)uVar19 & 1);
    vpfxd(4,4,4,5);
    auVar1 = vscl_t(*pauVar12,uVar18);
    *(int *)*pauVar12 = auVar1._0_4_;
    *(int *)(param_1 + 0x3f4) = auVar1._4_4_;
    *(int *)(param_1 + 0x3f8) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x3fc) = in_V7D;
    bVar8 = true;
    *(undefined4 *)(param_1 + 0x1a4) = 0x3c;
LAB_0886f41c:
    iVar10 = *(int *)(param_1 + 0x3d4);
  }
  else {
    if (*(int *)(param_1 + 0x3d4) == 0x1e) {
      iVar10 = *(int *)(param_1 + 0x20c);
      *(undefined4 *)(iVar10 + 0x148) = 0;
      *(uint *)(iVar10 + 0x130) = *(uint *)(iVar10 + 0x130) & 0xfffffffe;
      *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) & 0xfffffeff;
      FUN_088706f0(param_1,0,0);
      if (*(int *)(iVar9 + 0x3c0) == param_1) {
        *(undefined4 *)(iVar9 + 0x3c0) = 0;
      }
      (**(code **)(*(int *)(param_1 + 0x14) + 0xd4))
                (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0xd0));
      goto LAB_0886f41c;
    }
    iVar10 = *(int *)(param_1 + 0x3d4);
  }
  if (iVar10 == 0xe) {
    FUN_08860170(param_1,1);
  }
LAB_0886f434:
  if (bVar8) {
    local_100 = 0;
    local_fc = &DAT_08b00560;
    local_f0 = 1;
    local_ec = 0;
    local_e8 = 0x86;
    local_e4 = 1;
    local_e0 = 0;
    local_dc = 0;
    local_d8 = 0;
    local_d4 = 0;
    local_110 = DAT_08b007d0;
    local_10c = DAT_08b007d4;
    local_108 = DAT_08b007d8;
    local_104 = DAT_08b007dc;
    local_f4 = *(undefined4 *)(param_1 + 0x20c);
    local_f8 = param_1;
    local_ec = atan2f(*(undefined4 *)(param_1 + 0x3f8),*(undefined4 *)(param_1 + 0x3f0));
    DAT_08b00550 = 500.0;
    puVar13 = (undefined4 *)(param_1 + 0x250);
    local_d0 = *puVar13;
    uStack_cc = *(undefined4 *)(param_1 + 0x254);
    uStack_c8 = *(undefined4 *)(param_1 + 600);
    uStack_c4 = *(undefined4 *)(param_1 + 0x25c);
    auVar1 = vscl_t(*(undefined (*) [12])(param_1 + 0x3f0),0x42c80000);
    uVar18 = *(undefined4 *)(iVar9 + 0x25c);
    auVar1 = vsub_t(*(undefined (*) [12])(iVar9 + 0x250),auVar1);
    DAT_08b00540 = auVar1._0_4_;
    DAT_08b00544 = auVar1._4_4_;
    DAT_08b00548 = auVar1._8_4_;
    *puVar13 = DAT_08b00540;
    *(int *)(param_1 + 0x254) = auVar1._4_4_;
    *(int *)(param_1 + 600) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x25c) = uVar18;
    DAT_08b0054c = DAT_08b00550 * DAT_08b00550;
    if (*(int *)(param_1 + 0x3cc) == 3) {
      local_e8 = 0x87;
      DAT_08ab02f0 = 1;
    }
    if (3 < *(int *)(param_1 + 0x3d8)) {
      DAT_08ab02f0 = 0x3c;
    }
    FUN_0881a608(0xffffffff,*(undefined4 *)(iVar9 + 0x20c),&local_110,0);
    *puVar13 = local_d0;
    *(undefined4 *)(param_1 + 0x254) = uStack_cc;
    *(undefined4 *)(param_1 + 600) = uStack_c8;
    *(undefined4 *)(param_1 + 0x25c) = uStack_c4;
    *(undefined4 *)(*(int *)(param_1 + 0x20c) + 0x140) = 0;
    FUN_089c1f8c(*(undefined4 *)(param_1 + 300),0x200099,0,0);
  }
  return;
}

