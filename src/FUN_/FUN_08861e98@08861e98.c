#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08861e98(int param_1,undefined4 param_2,undefined param_3)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  bool bVar3;
  bool bVar4;
  undefined auVar5 [12];
  undefined auVar6 [12];
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
  int iVar17;
  uint uVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 in_V7E;
  undefined4 uVar24;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  uint local_c0;
  float local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  float local_44;
  
  if ((*(int *)(param_1 + 0x208) != 0) &&
     ((*(uint *)(*(int *)(param_1 + 0x208) + 0x130) & 0x40) == 0)) {
    iVar19 = *DAT_08aba808;
    bVar4 = false;
    bVar3 = false;
    local_44 = *(float *)(*(int *)(param_1 + 0x4bc) + 0xc);
    local_e0 = in_V72;
    uStack_dc = in_V76;
    uStack_d8 = in_V7A;
    if (iVar19 != 0) {
      do {
        if (iVar19 == param_1) {
          iVar19 = *(int *)(iVar19 + 4);
        }
        else if (*(int *)(iVar19 + 0x208) == 0) {
          iVar19 = *(int *)(iVar19 + 4);
        }
        else if ((*(uint *)(*(int *)(iVar19 + 0x208) + 0x130) & 4) == 0) {
          fVar22 = *(float *)(*(int *)(iVar19 + 0x4bc) + 0xc);
          fVar20 = *(float *)(param_1 + 0x17c);
          bVar3 = false;
          iVar17 = (**(code **)(*(int *)(iVar19 + 0x14) + 0x5c))
                             (iVar19 + *(short *)(*(int *)(iVar19 + 0x14) + 0x58));
          if (iVar17 == 0) {
            iVar17 = (**(code **)(*(int *)(iVar19 + 0x14) + 0x9c))
                               (iVar19 + *(short *)(*(int *)(iVar19 + 0x14) + 0x98));
            if (iVar17 != 0) {
              fVar22 = 180.0;
              fVar20 = 700.0;
              bVar3 = true;
            }
          }
          else {
            fVar20 = *(float *)(iVar19 + 0x40);
            fVar22 = 0.6;
            if ((0.6 <= fVar20) && (fVar22 = fVar20, 1.0 < fVar20)) {
              fVar22 = 1.0;
            }
            fVar22 = fVar22 * 240.0;
            fVar20 = *(float *)(iVar19 + 0x40) * 730.0;
            bVar3 = true;
          }
          fVar22 = local_44 + fVar22;
          uStack_b4 = *(undefined4 *)(param_1 + 0x2c);
          auVar1 = vsub_t(*(undefined (*) [12])(param_1 + 0x20),*(undefined (*) [12])(iVar19 + 0x20)
                         );
          local_c0 = auVar1._0_4_;
          local_bc = auVar1._4_4_;
          uStack_b8 = auVar1._8_4_;
          fVar21 = ABS(local_bc) - fVar20 * 1.2;
          if (fVar21 < 0.0) {
            fVar20 = -fVar21 / fVar20;
            if (1.0 < fVar20) {
              fVar20 = 1.0;
            }
            local_bc = 0.0;
            auVar12._4_4_ = 0;
            auVar12._0_4_ = local_c0;
            auVar12._8_4_ = uStack_b8;
            auVar1._4_4_ = 0;
            auVar1._0_4_ = local_c0;
            auVar1._8_4_ = uStack_b8;
            fVar21 = (float)vdot_t(auVar1,auVar12);
            if ((fVar22 * fVar22 <= fVar21) || (fVar21 <= 0.001)) {
              if (fVar21 <= 0.001) {
                iVar17 = *(int *)(*(int *)(param_1 + 0x208) + 0xf4);
                local_b0 = *(undefined4 *)(iVar17 + 0x10);
                uStack_ac = *(undefined4 *)(iVar17 + 0x14);
                uStack_a8 = *(undefined4 *)(iVar17 + 0x18);
                uStack_a4 = *(undefined4 *)(iVar17 + 0x1c);
                fVar21 = *(float *)(param_1 + 0x34) + 3.141593;
                if (3.141593 < fVar21) {
                  fVar21 = fVar21 - 6.283185;
                }
                else if (fVar21 <= -3.141593) {
                  fVar21 = fVar21 + 6.283185;
                }
                uVar23 = vmul_s(fVar21,in_V7C);
                auVar2 = vrot_q(uVar23,1,0,2,0);
                uStack_b4 = auVar2._12_4_;
                auVar1 = vscl_t(auVar2._0_12_,fVar22 * 2.0);
                local_c0 = auVar1._0_4_;
                local_bc = auVar1._4_4_;
                uStack_b8 = auVar1._8_4_;
                iVar17 = FUN_0881a954(*(undefined4 *)(param_1 + 0x178),&local_b0,&local_c0);
                if (iVar17 != 0) {
                  fVar21 = *(float *)(param_1 + 0x34);
                }
                uVar23 = vmul_s(fVar21,in_V7C);
                auVar2 = vrot_q(uVar23,1,0,2,0);
                uStack_b4 = auVar2._12_4_;
                auVar1 = vscl_t(auVar2._0_12_,fVar20 * 5.0);
                local_c0 = auVar1._0_4_;
                uStack_b8 = auVar1._8_4_;
                local_bc = 0.0;
                auVar6._4_4_ = uStack_dc;
                auVar6._0_4_ = local_e0;
                auVar6._8_4_ = uStack_d8;
                auVar16._4_4_ = 0;
                auVar16._0_4_ = local_c0;
                auVar16._8_4_ = uStack_b8;
                auVar1 = vadd_t(auVar6,auVar16);
                local_e0 = auVar1._0_4_;
                uStack_dc = auVar1._4_4_;
                uStack_d8 = auVar1._8_4_;
                bVar4 = true;
                if (bVar3) break;
                iVar19 = *(int *)(iVar19 + 4);
              }
              else {
                iVar19 = *(int *)(iVar19 + 4);
              }
            }
            else {
              if (fVar22 - SQRT(fVar21) <= fVar22) {
                fVar22 = fVar22 - SQRT(fVar21);
              }
              auVar15._4_4_ = 0;
              auVar15._0_4_ = local_c0;
              auVar15._8_4_ = uStack_b8;
              auVar14._4_4_ = 0;
              auVar14._0_4_ = local_c0;
              auVar14._8_4_ = uStack_b8;
              auVar13._4_4_ = 0;
              auVar13._0_4_ = local_c0;
              auVar13._8_4_ = uStack_b8;
              uVar23 = vdot_t(auVar13,auVar14);
              uVar24 = vcmp_s(8,uVar23,local_c0);
              vrsq_s(uVar23);
              uVar23 = vcmovt_s(in_V7D,(byte)uVar24 & 1);
              uVar23 = vmul_s(uVar23,fVar22 * 0.7 * fVar20);
              auVar1 = vscl_t(auVar15,uVar23);
              local_c0 = auVar1._0_4_;
              local_bc = auVar1._4_4_;
              uStack_b8 = auVar1._8_4_;
              auVar5._4_4_ = uStack_dc;
              auVar5._0_4_ = local_e0;
              auVar5._8_4_ = uStack_d8;
              auVar1 = vadd_t(auVar5,auVar1);
              local_e0 = auVar1._0_4_;
              uStack_dc = auVar1._4_4_;
              uStack_d8 = auVar1._8_4_;
              bVar4 = true;
              uStack_b4 = in_V7D;
              if (bVar3) break;
              iVar19 = *(int *)(iVar19 + 4);
            }
          }
          else {
            iVar19 = *(int *)(iVar19 + 4);
          }
        }
        else {
          iVar19 = *(int *)(iVar19 + 4);
        }
      } while (iVar19 != 0);
    }
    if (bVar4) {
      auVar8._4_4_ = uStack_dc;
      auVar8._0_4_ = local_e0;
      auVar8._8_4_ = uStack_d8;
      auVar7._4_4_ = uStack_dc;
      auVar7._0_4_ = local_e0;
      auVar7._8_4_ = uStack_d8;
      fVar22 = (float)vdot_t(auVar7,auVar8);
      uStack_d4 = in_V7E;
      if (!bVar3) {
        fVar20 = *(float *)(*(int *)(param_1 + 0x4bc) + 0xc);
        if (fVar20 * fVar20 < fVar22) {
          auVar11._4_4_ = uStack_dc;
          auVar11._0_4_ = local_e0;
          auVar11._8_4_ = uStack_d8;
          auVar10._4_4_ = uStack_dc;
          auVar10._0_4_ = local_e0;
          auVar10._8_4_ = uStack_d8;
          auVar9._4_4_ = uStack_dc;
          auVar9._0_4_ = local_e0;
          auVar9._8_4_ = uStack_d8;
          uVar23 = vdot_t(auVar9,auVar10);
          uVar24 = vcmp_s(8,uVar23,local_e0);
          vrsq_s(uVar23);
          uVar23 = vcmovt_s(in_V7D,(byte)uVar24 & 1);
          uVar23 = vmul_s(uVar23,fVar20);
          auVar1 = vscl_t(auVar11,uVar23);
          local_e0 = auVar1._0_4_;
          uStack_dc = auVar1._4_4_;
          uStack_d8 = auVar1._8_4_;
          uVar18 = *(uint *)(param_1 + 0x144);
          uStack_d4 = in_V7D;
        }
        else {
          uVar18 = *(uint *)(param_1 + 0x144);
        }
        *(uint *)(param_1 + 0x144) = uVar18 | 0x10;
      }
      uVar18 = *(uint *)(*(int *)(param_1 + 0x208) + 0x130);
      *(uint *)(*(int *)(param_1 + 0x208) + 0x130) = uVar18 | 0x40;
      local_90 = local_e0;
      uStack_8c = uStack_dc;
      uStack_88 = uStack_d8;
      uStack_84 = uStack_d4;
      FUN_08860b24(param_1,&local_90,param_3);
      if ((uVar18 & 0x40) == 0) {
        *(uint *)(*(int *)(param_1 + 0x208) + 0x130) =
             *(uint *)(*(int *)(param_1 + 0x208) + 0x130) & 0xffffffbf;
      }
    }
  }
  return;
}

