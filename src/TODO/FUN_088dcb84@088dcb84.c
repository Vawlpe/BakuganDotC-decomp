#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088dcb84(int param_1,undefined (*param_2) [12])

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined auVar3 [16];
  uint uVar4;
  bool bVar5;
  bool bVar6;
  undefined auVar7 [12];
  undefined auVar8 [12];
  undefined auVar9 [12];
  undefined auVar10 [12];
  undefined auVar11 [12];
  undefined auVar12 [12];
  undefined auVar13 [12];
  undefined auVar14 [12];
  undefined auVar15 [12];
  undefined auVar16 [12];
  undefined auVar17 [12];
  undefined auVar18 [12];
  undefined auVar19 [12];
  undefined auVar20 [12];
  undefined auVar21 [12];
  undefined auVar22 [12];
  undefined auVar23 [12];
  int iVar24;
  uint uVar25;
  int iVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 in_V7E;
  undefined4 uVar30;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  uint local_e0;
  float local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  
  *(undefined *)(param_1 + 0x356) = 0;
  if ((*(int *)(param_1 + 0x170) != 0) &&
     ((*(uint *)(*(int *)(param_1 + 0x170) + 0x130) & 0x40) == 0)) {
    iVar26 = *DAT_08abf618;
    bVar6 = false;
    local_100 = in_V72;
    uStack_fc = in_V76;
    uStack_f8 = in_V7A;
    if (iVar26 != 0) {
      do {
        bVar5 = false;
        if (iVar26 == param_1) goto LAB_088dcecc;
        if (*(int *)(iVar26 + 8) == 0x54) {
          iVar26 = *(int *)(iVar26 + 4);
        }
        else if (*(int *)(iVar26 + 0x170) == 0) {
          iVar26 = *(int *)(iVar26 + 4);
        }
        else if ((*(uint *)(*(int *)(iVar26 + 0x170) + 0x130) & 4) == 0) {
          uStack_d4 = *(undefined4 *)(param_1 + 0x2c);
          auVar1 = vsub_t(*(undefined (*) [12])(param_1 + 0x20),*(undefined (*) [12])(iVar26 + 0x20)
                         );
          local_e0 = auVar1._0_4_;
          local_dc = auVar1._4_4_;
          uStack_d8 = auVar1._8_4_;
          if (0.0 <= ABS(local_dc) - 28.8) {
LAB_088dcecc:
            iVar26 = *(int *)(iVar26 + 4);
          }
          else {
            fVar27 = (ABS(local_dc) - 28.8) * -0.04166667;
            if (1.0 < fVar27) {
              fVar27 = 1.0;
            }
            local_dc = 0.0;
            auVar2._4_4_ = 0;
            auVar2._0_4_ = local_e0;
            auVar2._8_4_ = uStack_d8;
            auVar1._4_4_ = 0;
            auVar1._0_4_ = local_e0;
            auVar1._8_4_ = uStack_d8;
            uVar28 = vdot_t(auVar1,auVar2);
            fVar29 = (float)vsqrt_s(uVar28);
            if ((*(float *)(param_1 + 0x240) * 2.0 <= fVar29) || (fVar29 <= 0.001)) {
              if (fVar29 <= 0.001) {
                iVar24 = *(int *)(*(int *)(param_1 + 0x170) + 0xf4);
                local_d0 = *(undefined4 *)(iVar24 + 0x10);
                uStack_cc = *(undefined4 *)(iVar24 + 0x14);
                uStack_c8 = *(undefined4 *)(iVar24 + 0x18);
                uStack_c4 = *(undefined4 *)(iVar24 + 0x1c);
                fVar29 = *(float *)(param_1 + 0x34) + 3.141593;
                if (3.141593 < fVar29) {
                  fVar29 = fVar29 - 6.283185;
                }
                else if (fVar29 <= -3.141593) {
                  fVar29 = fVar29 + 6.283185;
                }
                uVar28 = vmul_s(fVar29,in_V7C);
                auVar3 = vrot_q(uVar28,1,0,2,0);
                uStack_d4 = auVar3._12_4_;
                auVar1 = vscl_t(auVar3._0_12_,*(float *)(param_1 + 0x240) * 2.0);
                local_e0 = auVar1._0_4_;
                local_dc = auVar1._4_4_;
                uStack_d8 = auVar1._8_4_;
                iVar24 = FUN_0881a954(*(undefined4 *)(param_1 + 0x158),&local_d0,&local_e0);
                if (iVar24 != 0) {
                  fVar29 = *(float *)(param_1 + 0x34);
                }
                uVar28 = vmul_s(fVar29,in_V7C);
                auVar3 = vrot_q(uVar28,1,0,2,0);
                uStack_d4 = auVar3._12_4_;
                auVar1 = vscl_t(auVar3._0_12_,fVar27 * 5.0);
                local_e0 = auVar1._0_4_;
                uStack_d8 = auVar1._8_4_;
                local_dc = 0.0;
                auVar8._4_4_ = uStack_fc;
                auVar8._0_4_ = local_100;
                auVar8._8_4_ = uStack_f8;
                auVar20._4_4_ = 0;
                auVar20._0_4_ = local_e0;
                auVar20._8_4_ = uStack_d8;
                auVar1 = vadd_t(auVar8,auVar20);
                local_100 = auVar1._0_4_;
                uStack_fc = auVar1._4_4_;
                uStack_f8 = auVar1._8_4_;
                bVar6 = true;
                bVar5 = true;
              }
            }
            else {
              fVar29 = *(float *)(param_1 + 0x240) * 2.0 - fVar29;
              if (100.0 < fVar29) {
                fVar29 = 70.0;
              }
              else {
                fVar29 = fVar29 * 0.7;
              }
              auVar19._4_4_ = 0;
              auVar19._0_4_ = local_e0;
              auVar19._8_4_ = uStack_d8;
              auVar18._4_4_ = 0;
              auVar18._0_4_ = local_e0;
              auVar18._8_4_ = uStack_d8;
              auVar17._4_4_ = 0;
              auVar17._0_4_ = local_e0;
              auVar17._8_4_ = uStack_d8;
              uVar28 = vdot_t(auVar17,auVar18);
              uVar30 = vcmp_s(8,uVar28,local_e0);
              vrsq_s(uVar28);
              uVar28 = vcmovt_s(in_V7D,(byte)uVar30 & 1);
              uVar28 = vmul_s(uVar28,fVar29 * fVar27);
              auVar1 = vscl_t(auVar19,uVar28);
              local_e0 = auVar1._0_4_;
              local_dc = auVar1._4_4_;
              uStack_d8 = auVar1._8_4_;
              auVar7._4_4_ = uStack_fc;
              auVar7._0_4_ = local_100;
              auVar7._8_4_ = uStack_f8;
              auVar1 = vadd_t(auVar7,auVar1);
              local_100 = auVar1._0_4_;
              uStack_fc = auVar1._4_4_;
              uStack_f8 = auVar1._8_4_;
              bVar6 = true;
              bVar5 = true;
              uStack_d4 = in_V7D;
            }
            if (bVar5) {
              if (*(char *)(param_1 + 0x14c) != '\0') {
                *(undefined *)(iVar26 + 0x356) = 1;
                goto LAB_088dcecc;
              }
              iVar26 = *(int *)(iVar26 + 4);
            }
            else {
              iVar26 = *(int *)(iVar26 + 4);
            }
          }
        }
        else {
          iVar26 = *(int *)(iVar26 + 4);
        }
      } while (iVar26 != 0);
    }
    if (bVar6) {
      auVar10._4_4_ = uStack_fc;
      auVar10._0_4_ = local_100;
      auVar10._8_4_ = uStack_f8;
      auVar9._4_4_ = uStack_fc;
      auVar9._0_4_ = local_100;
      auVar9._8_4_ = uStack_f8;
      fVar27 = (float)vdot_t(auVar9,auVar10);
      uStack_f4 = in_V7E;
      if (*(float *)(param_1 + 0x240) * *(float *)(param_1 + 0x240) < fVar27) {
        auVar13._4_4_ = uStack_fc;
        auVar13._0_4_ = local_100;
        auVar13._8_4_ = uStack_f8;
        auVar12._4_4_ = uStack_fc;
        auVar12._0_4_ = local_100;
        auVar12._8_4_ = uStack_f8;
        auVar11._4_4_ = uStack_fc;
        auVar11._0_4_ = local_100;
        auVar11._8_4_ = uStack_f8;
        uVar28 = vdot_t(auVar11,auVar12);
        uVar30 = vcmp_s(8,uVar28,local_100);
        vrsq_s(uVar28);
        uVar28 = vcmovt_s(in_V7D,(byte)uVar30 & 1);
        uVar28 = vmul_s(uVar28,*(undefined4 *)(param_1 + 0x240));
        auVar1 = vscl_t(auVar13,uVar28);
        local_100 = auVar1._0_4_;
        uStack_fc = auVar1._4_4_;
        uStack_f8 = auVar1._8_4_;
        uStack_f4 = in_V7D;
      }
      iVar26 = *(int *)(param_1 + 0x170);
      uVar25 = *(uint *)(iVar26 + 0x130);
      *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 0x10;
      *(uint *)(iVar26 + 0x130) = *(uint *)(iVar26 + 0x130) | 0x40;
      local_b0 = local_100;
      uStack_ac = uStack_fc;
      uStack_a8 = uStack_f8;
      uStack_a4 = uStack_f4;
      FUN_088dd31c(param_1);
      if ((uVar25 & 0x40) == 0) {
        *(uint *)(*(int *)(param_1 + 0x170) + 0x130) =
             *(uint *)(*(int *)(param_1 + 0x170) + 0x130) & 0xffffffbf;
      }
      uVar25 = *(uint *)*param_2;
      uVar4 = *(uint *)(*param_2 + 8);
      if ((((uVar25 | uVar4) & 0x7fffffff) != 0) && (0.001 < fVar27)) {
        auVar23._4_4_ = 0;
        auVar23._0_4_ = uVar25;
        auVar23._8_4_ = uVar4;
        auVar22._4_4_ = 0;
        auVar22._0_4_ = uVar25;
        auVar22._8_4_ = uVar4;
        auVar21._4_4_ = 0;
        auVar21._0_4_ = uVar25;
        auVar21._8_4_ = uVar4;
        uVar28 = vdot_t(auVar21,auVar22);
        uVar30 = vcmp_s(8,uVar28,uVar25);
        vrsq_s(uVar28);
        uVar28 = vcmovt_s(in_V7D,(byte)uVar30 & 1);
        vpfxd(4,4,4,5);
        auVar1 = vscl_t(auVar23,uVar28);
        auVar16._4_4_ = uStack_fc;
        auVar16._0_4_ = local_100;
        auVar16._8_4_ = uStack_f8;
        auVar15._4_4_ = uStack_fc;
        auVar15._0_4_ = local_100;
        auVar15._8_4_ = uStack_f8;
        auVar14._4_4_ = uStack_fc;
        auVar14._0_4_ = local_100;
        auVar14._8_4_ = uStack_f8;
        uVar28 = vdot_t(auVar14,auVar15);
        uVar30 = vcmp_s(8,uVar28,local_100);
        vrsq_s(uVar28);
        uVar28 = vcmovt_s(in_V7D,(byte)uVar30 & 1);
        vpfxd(4,4,4,5);
        auVar2 = vscl_t(auVar16,uVar28);
        fVar29 = (float)vdot_t(auVar1,auVar2);
        if (fVar29 < 0.0) {
          auVar1 = vscl_t(*param_2,1.0 / (SQRT(fVar27) * fVar29 * -6.0 + 1.0));
          *(int *)*param_2 = auVar1._0_4_;
          *(int *)(*param_2 + 4) = auVar1._4_4_;
          *(int *)(*param_2 + 8) = auVar1._8_4_;
          *(undefined4 *)param_2[1] = in_V7D;
        }
      }
    }
  }
  return;
}

