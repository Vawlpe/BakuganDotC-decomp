#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088bcf78(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined auVar3 [12];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined (*pauVar6) [16];
  int iVar7;
  undefined (*pauVar8) [12];
  undefined (*pauVar9) [16];
  undefined (*pauVar10) [12];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 in_V73;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 uVar20;
  undefined auStack_a0 [16];
  float local_90;
  undefined4 uStack_8c;
  float fStack_88;
  undefined4 uStack_84;
  undefined local_80 [36];
  float local_5c;
  
  if (*(int *)(param_1 + 0x2a0) != 0) {
    iVar7 = *(int *)(param_1 + 0x304);
    if (iVar7 < 2) {
      if ((-1 < iVar7) && (iVar7 < 1)) {
        fVar14 = *(float *)(param_1 + 0x354) + DAT_08abd80c;
        pauVar9 = (undefined (*) [16])(param_1 + 0x2c0);
        *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)*pauVar9;
        *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)(param_1 + 0x2c4);
        *(undefined4 *)(param_1 + 0x2d8) = *(undefined4 *)(param_1 + 0x2c8);
        *(undefined4 *)(param_1 + 0x2dc) = *(undefined4 *)(param_1 + 0x2cc);
        auVar2._4_4_ = fVar14;
        auVar2._0_4_ = *(undefined4 *)(param_1 + 0x350);
        auVar2._8_4_ = *(undefined4 *)(param_1 + 0x358);
        auVar2._12_4_ = *(undefined4 *)(param_1 + 0x35c);
        auVar2 = vsub_q(auVar2,*pauVar9);
        auVar2 = vscl_q(auVar2,0x3dcccccd);
        auVar2 = vadd_q(*pauVar9,auVar2);
        *(int *)*pauVar9 = auVar2._0_4_;
        *(int *)(param_1 + 0x2c4) = auVar2._4_4_;
        *(int *)(param_1 + 0x2c8) = auVar2._8_4_;
        *(int *)(param_1 + 0x2cc) = auVar2._12_4_;
        *(int *)(param_1 + 0x300) = *(int *)(param_1 + 0x300) + 4;
        *(float *)(param_1 + 0x2f8) =
             *(float *)(param_1 + 0x2f8) + *(float *)(param_1 + 0x2f8) * -0.2;
        pauVar10 = (undefined (*) [12])(param_1 + 0x50);
        uStack_84 = *(undefined4 *)(param_1 + 0x5c);
        auVar1 = vsub_t(*pauVar10,*(undefined (*) [12])*pauVar9);
        fVar14 = auVar1._0_4_;
        uStack_8c = auVar1._4_4_;
        fVar12 = auVar1._8_4_;
        uVar18 = vdot_t(auVar1,auVar1);
        fVar19 = (float)vsqrt_s(uVar18);
        fVar15 = *(float *)(param_1 + 0x344);
        local_90 = fVar14;
        fStack_88 = fVar12;
        fVar11 = (float)atan2f(uStack_8c,SQRT(fVar14 * fVar14 + fVar12 * fVar12));
        fVar16 = *(float *)(param_1 + 0x2f8);
        fVar12 = (float)atan2f(fVar12,fVar14);
        fVar13 = 0.0;
        pauVar8 = (undefined (*) [12])local_80;
        fVar14 = 0.001;
        if (*(int *)(param_1 + 0x300) < 1) {
          *(float *)(param_1 + 0x2f4) = *(float *)(param_1 + 0x2f4) * 0.8;
        }
        else {
          fVar17 = (float)*(int *)(param_1 + 0x300) * 0.05;
          if (1.0 < fVar17) {
            fVar17 = 1.0;
          }
          fVar13 = fVar12 - *(float *)(param_1 + 0x2f0);
          fVar13 = fVar13 - (float)(int)(fVar13 * 0.3183099) * 6.283185;
          if (fVar13 < 0.0) {
            fVar13 = fVar13 + 6.283185;
          }
          if (3.141593 <= fVar13) {
            fVar13 = 6.283185 - fVar13;
          }
          else {
            fVar13 = -fVar13;
          }
          uVar18 = vmul_s(fVar17 * fVar17 * 3.141593,in_V7C);
          local_5c = (float)vcos_s(uVar18);
          fVar17 = *(float *)(param_1 + 0x2f4) - fVar13 * (1.0 - local_5c) * 0.5 * 0.1;
          fVar17 = fVar17 - (float)(int)(fVar17 * 0.3183099) * 6.283185;
          if (fVar17 < 0.0) {
            fVar17 = fVar17 + 6.283185;
          }
          if (3.141593 <= fVar17) {
            fVar17 = 6.283185 - fVar17;
          }
          else {
            fVar17 = -fVar17;
          }
          *(float *)(param_1 + 0x2f4) = *(float *)(param_1 + 0x2f4) + fVar17 * 0.2;
        }
        uVar18 = vmul_s(fVar12 + *(float *)(param_1 + 0x2f4),in_V7C);
        auVar2 = vrot_q(uVar18,1,0,2,0);
        auVar1 = vscl_t(auVar2._0_12_,fVar19 + (fVar15 - fVar19) * 0.1);
        vpfxs(2,1,0x10,3);
        auVar3 = vmov_t(auVar1);
        uVar18 = vdot_t(auVar3,auVar3);
        uVar20 = vcmp_s(8,uVar18,auVar3._0_4_);
        vrsq_s(uVar18);
        uVar18 = vcmovt_s(in_V7D,(byte)uVar20 & 1);
        vpfxd(4,4,4,5);
        vscl_t(auVar3,uVar18);
        pauVar6 = (undefined (*) [16])FUN_08a29520(-fVar11 + (-fVar16 - -fVar11) * 0.2,auStack_a0);
        vpfxs(0x10,0x11,0x12,3);
        auVar4 = vmov_q(*pauVar6);
        uVar18 = vmov_s(in_V73);
        auVar5._12_4_ = uVar18;
        auVar5._8_4_ = auVar1._8_4_;
        auVar5._4_4_ = auVar1._4_4_;
        auVar5._0_4_ = auVar1._0_4_;
        auVar2 = vqmul_q(*pauVar6,auVar5);
        auVar2 = vqmul_q(auVar2,auVar4);
        *(int *)*pauVar8 = auVar2._0_4_;
        *(int *)(*pauVar8 + 4) = auVar2._4_4_;
        *(int *)(*pauVar8 + 8) = auVar2._8_4_;
        *(int *)pauVar8[1] = auVar2._12_4_;
        uVar18 = *(undefined4 *)(param_1 + 0x2cc);
        auVar1 = vadd_t(*(undefined (*) [12])*pauVar9,*pauVar8);
        *(int *)*pauVar10 = auVar1._0_4_;
        *(int *)(param_1 + 0x54) = auVar1._4_4_;
        *(int *)(param_1 + 0x58) = auVar1._8_4_;
        *(undefined4 *)(param_1 + 0x5c) = uVar18;
        *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)*pauVar9;
        *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x2c4);
        *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x2c8);
        *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x2cc);
        if (ABS(fVar13) < fVar14) {
          uVar18 = *(undefined4 *)(param_1 + 0x5c);
          auVar1 = vsub_t(*pauVar10,*(undefined (*) [12])*pauVar9);
          *(int *)*pauVar8 = auVar1._0_4_;
          *(int *)(*pauVar8 + 4) = auVar1._4_4_;
          *(int *)(*pauVar8 + 8) = auVar1._8_4_;
          *(undefined4 *)pauVar8[1] = uVar18;
          uVar18 = vdot_t(*pauVar8,*pauVar8);
          fVar12 = (float)vsqrt_s(uVar18);
          if (ABS(*(float *)(param_1 + 0x344) - fVar12) < fVar14) {
            *(int *)(param_1 + 0x304) = *(int *)(param_1 + 0x304) + 1;
          }
        }
      }
    }
    else if (iVar7 < 3) {
      *(int *)(param_1 + 0x304) = *(int *)(param_1 + 0x304) + 1;
    }
  }
  return;
}

