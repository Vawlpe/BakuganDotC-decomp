#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088bd6c8(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined (*pauVar14) [16];
  int iVar15;
  float fVar16;
  float *pfVar17;
  undefined (*pauVar18) [16];
  undefined (*pauVar19) [16];
  undefined (*pauVar20) [16];
  undefined4 *puVar21;
  undefined (*pauVar22) [16];
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  undefined4 in_V73;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 uVar28;
  float local_150;
  undefined4 uStack_14c;
  float fStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  float local_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  float local_120;
  undefined4 local_11c;
  float local_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined auStack_100 [16];
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined auStack_e0 [16];
  undefined local_d0 [16];
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined auStack_b0 [124];
  
  pfVar17 = &local_150;
  if (*(int *)(param_1 + 0x2a0) != 0) {
    iVar15 = *(int *)(param_1 + 0x2a0);
    local_130 = *(undefined4 *)(iVar15 + 0x20);
    uStack_128 = *(undefined4 *)(iVar15 + 0x28);
    uStack_124 = *(undefined4 *)(iVar15 + 0x2c);
    local_12c = *(float *)(iVar15 + 0x24) + DAT_08abd804;
    pauVar19 = (undefined (*) [16])(param_1 + 0x2c0);
    *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)*pauVar19;
    *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)(param_1 + 0x2c4);
    *(undefined4 *)(param_1 + 0x2d8) = *(undefined4 *)(param_1 + 0x2c8);
    *(undefined4 *)(param_1 + 0x2dc) = *(undefined4 *)(param_1 + 0x2cc);
    auVar2._4_4_ = local_12c;
    auVar2._0_4_ = local_130;
    auVar2._8_4_ = uStack_128;
    auVar2._12_4_ = uStack_124;
    auVar2 = vsub_q(auVar2,*pauVar19);
    auVar2 = vscl_q(auVar2,0x3f000000);
    auVar2 = vadd_q(*pauVar19,auVar2);
    *(int *)*pauVar19 = auVar2._0_4_;
    *(int *)(param_1 + 0x2c4) = auVar2._4_4_;
    *(int *)(param_1 + 0x2c8) = auVar2._8_4_;
    *(int *)(param_1 + 0x2cc) = auVar2._12_4_;
    pauVar20 = (undefined (*) [16])(param_1 + 0x50);
    uStack_144 = *(undefined4 *)(param_1 + 0x5c);
    auVar1 = vsub_t(*(undefined (*) [12])*pauVar20,*(undefined (*) [12])*pauVar19);
    local_150 = auVar1._0_4_;
    uStack_14c = auVar1._4_4_;
    fStack_148 = auVar1._8_4_;
    uVar26 = vdot_t(auVar1,auVar1);
    fVar27 = (float)vsqrt_s(uVar26);
    fVar25 = *(float *)(param_1 + 0x308);
    local_120 = local_150;
    local_11c = uStack_14c;
    local_118 = fStack_148;
    uStack_114 = uStack_144;
    fVar23 = (float)atan2f(uStack_14c,SQRT(local_150 * local_150 + fStack_148 * fStack_148));
    fVar23 = -fVar23;
    fVar16 = 0.1;
    puVar21 = (undefined4 *)(param_1 + 0x310);
    pauVar22 = (undefined (*) [16])(param_1 + 0x60);
    if ((*(uint *)(*(int *)(param_1 + 0x2a0) + 0x168) & 0x100000) == 0) {
      if ((*(uint *)(*(int *)(param_1 + 0x2a0) + 0x168) & 0x200000) == 0) {
        fVar16 = *(float *)(param_1 + 0x2f4) * 0.75;
      }
      else {
        fVar24 = *(float *)(param_1 + 0x2f4) + 0.01;
        if (fVar24 <= 0.1) {
          fVar16 = fVar24;
        }
      }
      *(float *)(param_1 + 0x2f4) = fVar16;
    }
    else {
      fVar24 = *(float *)(param_1 + 0x2f4) - 0.01;
      fVar16 = -0.1;
      if (-0.1 <= fVar24) {
        fVar16 = fVar24;
      }
      *(float *)(param_1 + 0x2f4) = fVar16;
    }
    fVar16 = *(float *)(param_1 + 800) + fVar16;
    *(float *)(param_1 + 800) = fVar16;
    uVar26 = vmul_s(fVar16,in_V7C);
    auVar2 = vrot_q(uVar26,1,0,2,0);
    uStack_114 = auVar2._12_4_;
    auVar1 = vscl_t(auVar2._0_12_,fVar27 + (fVar25 - fVar27) * 0.4);
    local_120 = auVar1._0_4_;
    local_11c = auVar1._4_4_;
    local_118 = auVar1._8_4_;
    vpfxs(2,1,0x10,3);
    auVar1 = vmov_t(auVar1);
    fVar16 = *(float *)(param_1 + 0x2fc) + 0.1;
    if (1.0 < fVar16) {
      fVar16 = 1.0;
    }
    *(float *)(param_1 + 0x2fc) = fVar16;
    fVar16 = fVar16 * fVar16;
    *puVar21 = *(undefined4 *)*pauVar20;
    *(undefined4 *)(param_1 + 0x314) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x31c) = *(undefined4 *)(param_1 + 0x5c);
    uVar26 = vdot_t(auVar1,auVar1);
    uVar28 = vcmp_s(8,uVar26,auVar1._0_4_);
    vrsq_s(uVar26);
    uVar26 = vcmovt_s(in_V7D,(byte)uVar28 & 1);
    vpfxd(4,4,4,5);
    auVar1 = vscl_t(auVar1,uVar26);
    local_110 = auVar1._0_4_;
    uStack_10c = auVar1._4_4_;
    uStack_108 = auVar1._8_4_;
    pauVar14 = (undefined (*) [16])
               FUN_08a29520(fVar23 + ((*(float *)(param_1 + 0x3bc) - *(float *)(param_1 + 0x2f8)) -
                                     fVar23) * 0.2,auStack_100,&local_110);
    pauVar18 = (undefined (*) [16])&local_140;
    vpfxs(0x10,0x11,0x12,3);
    auVar3 = vmov_q(*pauVar14);
    uVar26 = vmov_s(in_V73);
    auVar4._12_4_ = uVar26;
    auVar4._8_4_ = local_118;
    auVar4._4_4_ = local_11c;
    auVar4._0_4_ = local_120;
    auVar2 = vqmul_q(*pauVar14,auVar4);
    auVar2 = vqmul_q(auVar2,auVar3);
    local_140 = auVar2._0_4_;
    uStack_13c = auVar2._4_4_;
    uStack_138 = auVar2._8_4_;
    uStack_134 = auVar2._12_4_;
    uVar26 = *(undefined4 *)(param_1 + 0x2cc);
    auVar1 = vadd_t(*(undefined (*) [12])*pauVar19,auVar2._0_12_);
    *pfVar17 = (float)auVar1._0_4_;
    pfVar17[1] = (float)auVar1._4_4_;
    pfVar17[2] = (float)auVar1._8_4_;
    pfVar17[3] = (float)uVar26;
    auVar3._4_4_ = uStack_14c;
    auVar3._0_4_ = local_150;
    auVar3._8_4_ = fStack_148;
    auVar3._12_4_ = uStack_144;
    auVar2 = vsub_q(auVar3,*pauVar20);
    auVar2 = vscl_q(auVar2,fVar16);
    auVar2 = vadd_q(*pauVar20,auVar2);
    *(int *)*pauVar20 = auVar2._0_4_;
    *(int *)(param_1 + 0x54) = auVar2._4_4_;
    *(int *)(param_1 + 0x58) = auVar2._8_4_;
    *(int *)(param_1 + 0x5c) = auVar2._12_4_;
    auVar2 = vsub_q(*pauVar19,*pauVar22);
    auVar2 = vscl_q(auVar2,fVar16);
    auVar2 = vadd_q(*pauVar22,auVar2);
    *(int *)*pauVar22 = auVar2._0_4_;
    *(int *)(param_1 + 100) = auVar2._4_4_;
    *(int *)(param_1 + 0x68) = auVar2._8_4_;
    *(int *)(param_1 + 0x6c) = auVar2._12_4_;
    local_f0 = *puVar21;
    uStack_ec = *(undefined4 *)(param_1 + 0x314);
    uStack_e8 = *(undefined4 *)(param_1 + 0x318);
    uStack_e4 = *(undefined4 *)(param_1 + 0x31c);
    pauVar20 = (undefined (*) [16])
               FUN_08a29520(fVar23 - *(float *)(param_1 + 0x3bc),auStack_e0,&local_110);
    vpfxs(0x10,0x11,0x12,3);
    auVar3 = vmov_q(*pauVar20);
    uVar26 = vmov_s(in_V73);
    auVar5._12_4_ = uVar26;
    auVar5._8_4_ = local_118;
    auVar5._4_4_ = local_11c;
    auVar5._0_4_ = local_120;
    auVar2 = vqmul_q(*pauVar20,auVar5);
    auVar2 = vqmul_q(auVar2,auVar3);
    local_150 = auVar2._0_4_;
    uStack_14c = auVar2._4_4_;
    fStack_148 = auVar2._8_4_;
    uStack_144 = auVar2._12_4_;
    uVar26 = *(undefined4 *)(param_1 + 0x2cc);
    auVar1 = vadd_t(*(undefined (*) [12])*pauVar19,auVar2._0_12_);
    *(int *)*pauVar18 = auVar1._0_4_;
    *(int *)(*pauVar18 + 4) = auVar1._4_4_;
    *(int *)(*pauVar18 + 8) = auVar1._8_4_;
    *(undefined4 *)(*pauVar18 + 0xc) = uVar26;
    auVar9._4_4_ = uStack_ec;
    auVar9._0_4_ = local_f0;
    auVar9._8_4_ = uStack_e8;
    auVar9._12_4_ = uStack_e4;
    auVar8._4_4_ = uStack_ec;
    auVar8._0_4_ = local_f0;
    auVar8._8_4_ = uStack_e8;
    auVar8._12_4_ = uStack_e4;
    auVar2 = vsub_q(*pauVar18,auVar8);
    auVar2 = vscl_q(auVar2,fVar16);
    auVar2 = vadd_q(auVar9,auVar2);
    local_f0 = auVar2._0_4_;
    uStack_ec = auVar2._4_4_;
    uStack_e8 = auVar2._8_4_;
    uStack_e4 = auVar2._12_4_;
    uVar26 = *(undefined4 *)(param_1 + 0x6c);
    auVar1 = vsub_t(*(undefined (*) [12])*pauVar22,auVar2._0_12_);
    *(int *)*pauVar18 = auVar1._0_4_;
    *(int *)(*pauVar18 + 4) = auVar1._4_4_;
    *(int *)(*pauVar18 + 8) = auVar1._8_4_;
    *(undefined4 *)(*pauVar18 + 0xc) = uVar26;
    iVar15 = FUN_0881a910(0x2f800700,&local_f0,pauVar18);
    if (iVar15 == 0) {
      if (*(int *)(param_1 + 0x30c) == 0) {
        if (*(float *)(param_1 + 0x3bc) < 0.0) {
          local_f0 = *puVar21;
          uStack_ec = *(undefined4 *)(param_1 + 0x314);
          uStack_e8 = *(undefined4 *)(param_1 + 0x318);
          uStack_e4 = *(undefined4 *)(param_1 + 0x31c);
          pauVar14 = &local_d0;
          pauVar20 = (undefined (*) [16])
                     FUN_08a29520((fVar23 - *(float *)(param_1 + 0x3bc)) + -0.11,auStack_b0,
                                  &local_110);
          vpfxs(0x10,0x11,0x12,3);
          auVar3 = vmov_q(*pauVar20);
          uVar26 = vmov_s(in_V73);
          auVar7._12_4_ = uVar26;
          auVar7._8_4_ = local_118;
          auVar7._4_4_ = local_11c;
          auVar7._0_4_ = local_120;
          auVar2 = vqmul_q(*pauVar20,auVar7);
          auVar2 = vqmul_q(auVar2,auVar3);
          uVar26 = *(undefined4 *)(param_1 + 0x2cc);
          auVar1 = vadd_t(*(undefined (*) [12])*pauVar19,auVar2._0_12_);
          *(int *)*pauVar14 = auVar1._0_4_;
          *(int *)(*pauVar14 + 4) = auVar1._4_4_;
          *(int *)(*pauVar14 + 8) = auVar1._8_4_;
          *(undefined4 *)(*pauVar14 + 0xc) = uVar26;
          auVar13._4_4_ = uStack_ec;
          auVar13._0_4_ = local_f0;
          auVar13._8_4_ = uStack_e8;
          auVar13._12_4_ = uStack_e4;
          auVar12._4_4_ = uStack_ec;
          auVar12._0_4_ = local_f0;
          auVar12._8_4_ = uStack_e8;
          auVar12._12_4_ = uStack_e4;
          auVar2 = vsub_q(*pauVar14,auVar12);
          auVar2 = vscl_q(auVar2,fVar16);
          auVar2 = vadd_q(auVar13,auVar2);
          local_f0 = auVar2._0_4_;
          uStack_ec = auVar2._4_4_;
          uStack_e8 = auVar2._8_4_;
          uStack_e4 = auVar2._12_4_;
          uStack_b4 = *(undefined4 *)(param_1 + 0x6c);
          auVar1 = vsub_t(*(undefined (*) [12])*pauVar22,auVar2._0_12_);
          local_c0 = auVar1._0_4_;
          uStack_bc = auVar1._4_4_;
          uStack_b8 = auVar1._8_4_;
          iVar15 = FUN_0881a910(0x2f800700,&local_f0);
          if ((iVar15 == 0) &&
             (fVar16 = *(float *)(param_1 + 0x3bc) + 0.05, *(float *)(param_1 + 0x3bc) = fVar16,
             0.0 < fVar16)) {
            *(undefined4 *)(param_1 + 0x3bc) = 0;
          }
        }
      }
      else {
        *(int *)(param_1 + 0x30c) = *(int *)(param_1 + 0x30c) + -1;
      }
    }
    else {
      auVar10._4_4_ = uStack_ec;
      auVar10._0_4_ = local_f0;
      auVar10._8_4_ = uStack_e8;
      auVar10._12_4_ = uStack_e4;
      auVar2 = vsub_q(auVar10,*pauVar19);
      fVar16 = (float)vdot_t(auVar2._0_12_,auVar2._0_12_);
      auVar11._4_4_ = uStack_ec;
      auVar11._0_4_ = local_f0;
      auVar11._8_4_ = uStack_e8;
      auVar11._12_4_ = uStack_e4;
      auVar6._12_4_ = DAT_08b0028c;
      auVar6._8_4_ = DAT_08b00288;
      auVar6._4_4_ = DAT_08b00284;
      auVar6._0_4_ = DAT_08b00280;
      auVar2 = vsub_q(auVar11,auVar6);
      fVar23 = (float)vdot_t(auVar2._0_12_,auVar2._0_12_);
      if (fVar23 < fVar16) {
        if (*(float *)(param_1 + 0x2f8) - *(float *)(param_1 + 0x3bc) < 1.420796) {
          *(float *)(param_1 + 0x3bc) = *(float *)(param_1 + 0x3bc) - 0.05;
        }
        *(undefined4 *)(param_1 + 0x30c) = 1;
      }
    }
  }
  return;
}

