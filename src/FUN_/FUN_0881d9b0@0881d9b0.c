#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0881d9b0(float param_1,undefined4 param_2,float param_3,int param_4)

{
  undefined auVar1 [12];
  uint uVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [12];
  undefined auVar7 [12];
  undefined auVar8 [12];
  undefined auVar9 [12];
  undefined auVar10 [12];
  int iVar11;
  int *piVar12;
  int iVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 in_V7C;
  undefined4 in_V7D;
  
  iVar11 = FUN_088660c8();
  if (iVar11 != 0) {
    piVar12 = (int *)FUN_088660c8();
    iVar11 = *piVar12;
    if (iVar11 != 0) {
      iVar13 = *(int *)(iVar11 + 0x150);
      while( true ) {
        if (iVar13 < 5) {
          iVar13 = (**(code **)(*(int *)(iVar11 + 0x14) + 0xa4))
                             (iVar11 + *(short *)(*(int *)(iVar11 + 0x14) + 0xa0));
          if (iVar13 == DAT_08abd4c4) {
            iVar11 = *(int *)(iVar11 + 4);
          }
          else {
            auVar1 = vsub_t(*(undefined (*) [12])(param_4 + 0x60),
                            *(undefined (*) [12])(iVar11 + 0x20));
            uVar2 = auVar1._0_4_;
            uVar15 = auVar1._8_4_;
            if (ABS(auVar1._4_4_) < param_3) {
              uVar16 = vzero_s();
              auVar1._8_4_ = uVar15;
              auVar1._4_4_ = uVar16;
              auVar1._0_4_ = uVar2;
              auVar6._8_4_ = uVar15;
              auVar6._4_4_ = uVar16;
              auVar6._0_4_ = uVar2;
              fVar14 = (float)vdot_t(auVar1,auVar6);
              if (fVar14 < param_1 * param_1) {
                fVar14 = SQRT(param_1 * param_1 - fVar14);
                if (param_1 * 0.75 < fVar14) {
                  fVar14 = fVar14 - ((fVar14 - param_1 * 0.75) / (param_1 * 0.25)) * param_1;
                }
                fVar14 = fVar14 * 0.02;
                if (25.0 < fVar14) {
                  fVar14 = 25.0;
                }
                auVar9._4_4_ = 0;
                auVar9._0_4_ = uVar2;
                auVar9._8_4_ = uVar15;
                auVar8._4_4_ = 0;
                auVar8._0_4_ = uVar2;
                auVar8._8_4_ = uVar15;
                auVar7._4_4_ = 0;
                auVar7._0_4_ = uVar2;
                auVar7._8_4_ = uVar15;
                uVar15 = vdot_t(auVar7,auVar8);
                uVar16 = vcmp_s(8,uVar15,uVar2);
                vrsq_s(uVar15);
                uVar15 = vcmovt_s(in_V7D,(byte)uVar16 & 1);
                uVar15 = vmul_s(uVar15,fVar14);
                auVar1 = vscl_t(auVar9,uVar15);
                uVar15 = vmul_s(param_2,in_V7C);
                auVar3._12_4_ = in_V7D;
                auVar3._0_12_ = auVar1;
                auVar3 = vmov_q(auVar3);
                auVar4 = vrot_q(uVar15,1,0,3,0);
                auVar5 = vrot_q(uVar15,2,0,1,0);
                uVar16 = vdot_t(auVar1,auVar4._0_12_);
                uVar17 = vdot_t(auVar1,auVar5._0_12_);
                uVar15 = *(undefined4 *)(iVar11 + 0x32c);
                auVar10._4_4_ = auVar3._4_4_;
                auVar10._0_4_ = uVar16;
                auVar10._8_4_ = uVar17;
                auVar1 = vadd_t(*(undefined (*) [12])(iVar11 + 800),auVar10);
                *(int *)*(undefined (*) [12])(iVar11 + 800) = auVar1._0_4_;
                *(int *)(iVar11 + 0x324) = auVar1._4_4_;
                *(int *)(iVar11 + 0x328) = auVar1._8_4_;
                *(undefined4 *)(iVar11 + 0x32c) = uVar15;
                iVar11 = *(int *)(iVar11 + 4);
              }
              else {
                iVar11 = *(int *)(iVar11 + 4);
              }
            }
            else {
              iVar11 = *(int *)(iVar11 + 4);
            }
          }
        }
        else {
          iVar11 = *(int *)(iVar11 + 4);
        }
        if (iVar11 == 0) break;
        iVar13 = *(int *)(iVar11 + 0x150);
      }
    }
  }
  return;
}

