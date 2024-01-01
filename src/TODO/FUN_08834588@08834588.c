#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08834588(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [12];
  undefined auVar5 [12];
  undefined auVar7 [12];
  undefined auVar9 [12];
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
  undefined auVar24 [12];
  undefined auVar25 [12];
  undefined auVar26 [12];
  undefined auVar27 [12];
  undefined auVar28 [12];
  undefined auVar29 [16];
  undefined auVar30 [12];
  undefined auVar31 [12];
  undefined auVar32 [12];
  undefined auVar33 [12];
  undefined auVar34 [12];
  undefined auVar35 [12];
  undefined auVar36 [16];
  int iVar37;
  uint uVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 in_V7C;
  undefined4 in_V7D;
  float local_d0;
  float local_c8;
  float local_c0;
  float local_b8;
  float local_b0;
  float local_a8;
  float local_a0;
  float local_98;
  undefined auVar6 [12];
  undefined auVar8 [12];
  undefined auVar10 [12];
  
  iVar43 = *(int *)(*(int *)(param_1 + 0x14) + 0x180);
  if (iVar43 != 0) {
    *(uint *)(iVar43 + 0xd0) = *(uint *)(iVar43 + 0xd0) | 1;
  }
  *(undefined4 *)(iVar43 + 0x68) = 0;
  iVar43 = *(int *)(*(int *)(param_1 + 0x14) + 0x184);
  if (iVar43 == 0) {
    uRam00000068 = 0;
  }
  else {
    *(uint *)(iVar43 + 0xd0) = *(uint *)(iVar43 + 0xd0) | 1;
    *(undefined4 *)(iVar43 + 0x68) = 0;
  }
  iVar43 = FUN_0882c548(param_1);
  iVar42 = *(int *)(*(int *)(param_1 + 0x14) + 0x318);
  *(float *)(iVar42 + 0x60) = (float)(0x1aa - *(int *)(param_1 + 200));
  iVar40 = *(int *)(param_1 + 0xcc);
  *(undefined4 *)(iVar42 + 0x68) = 0;
  *(float *)(iVar42 + 100) = (float)(0x2f - iVar40);
  if (iVar43 != 0) {
    fVar47 = *(float *)(iVar43 + 0x20) * *(float *)(param_1 + 0xc0);
    fVar48 = *(float *)(iVar43 + 0x34);
    fVar46 = *(float *)(iVar43 + 0x28) * *(float *)(param_1 + 0xc0);
    *(float *)(iVar42 + 0x60) = *(float *)(iVar42 + 0x60) - fVar47;
    *(float *)(iVar42 + 100) = *(float *)(iVar42 + 100) - fVar46;
    iVar43 = *(int *)(*(int *)(param_1 + 0x14) + 0x31c);
    if (fVar48 == 0.0) {
      fVar48 = 1e-05;
    }
    FUN_089f4954(0x3f800000,0x3f800000,fVar48,iVar43,0);
    iVar40 = 0;
    *(undefined4 *)(iVar43 + 0x68) = 0xc0800000;
    iVar43 = 0;
    do {
      iVar37 = FUN_088304d8(param_1,iVar40);
      iVar41 = *(int *)(*(int *)(param_1 + 0x14) + iVar43 + 800);
      uVar50 = in_V7D;
      if (iVar37 == 0) {
        uVar38 = *(uint *)(iVar41 + 0xd0);
LAB_088348bc:
        *(uint *)(iVar41 + 0xd0) = uVar38 & 0xfffffffe;
      }
      else {
        if (*(char *)(iVar37 + 0x4c1) != '\0') {
          uVar38 = *(uint *)(iVar41 + 0xd0);
          goto LAB_088348bc;
        }
        if (*(char *)(iVar37 + 0x476) != '\0') {
          uVar38 = *(uint *)(iVar41 + 0xd0);
          goto LAB_088348bc;
        }
        auVar11._4_4_ = 0;
        auVar11._0_4_ = *(uint *)(iVar37 + 0x20);
        auVar11._8_4_ = *(undefined4 *)(iVar37 + 0x28);
        auVar1 = vscl_t(auVar11,*(undefined4 *)(param_1 + 0xc0));
        uVar49 = auVar1._4_4_;
        fVar44 = auVar1._0_4_ - fVar47;
        fVar45 = auVar1._8_4_ - fVar46;
        fVar48 = (float)atan2f(*(undefined4 *)(DAT_08ac5c90 + 0x78),
                               *(undefined4 *)(DAT_08ac5c90 + 0x70));
        uVar51 = vmul_s(-fVar48 - 1.570796,in_V7C);
        auVar13._4_4_ = uVar49;
        auVar13._0_4_ = fVar44;
        auVar13._8_4_ = fVar45;
        auVar12._4_4_ = uVar49;
        auVar12._0_4_ = fVar44;
        auVar12._8_4_ = fVar45;
        auVar2._4_4_ = uVar49;
        auVar2._0_4_ = fVar44;
        auVar2._8_4_ = fVar45;
        auVar2._12_4_ = in_V7D;
        auVar2 = vmov_q(auVar2);
        uVar49 = auVar2._4_4_;
        auVar2 = vrot_q(uVar51,1,0,3,0);
        auVar3 = vrot_q(uVar51,2,0,1,0);
        local_d0 = (float)vdot_t(auVar12,auVar2._0_12_);
        local_c8 = (float)vdot_t(auVar13,auVar3._0_12_);
        uVar51 = vzero_s();
        auVar4._8_4_ = local_c8;
        auVar4._4_4_ = uVar51;
        auVar4._0_4_ = local_d0;
        auVar1._8_4_ = local_c8;
        auVar1._4_4_ = uVar51;
        auVar1._0_4_ = local_d0;
        fVar48 = (float)vdot_t(auVar4,auVar1);
        if (900.0 < fVar48) {
          auVar16._4_4_ = uVar49;
          auVar16._0_4_ = local_d0;
          auVar16._8_4_ = local_c8;
          auVar15._4_4_ = uVar49;
          auVar15._0_4_ = local_d0;
          auVar15._8_4_ = local_c8;
          auVar14._4_4_ = uVar49;
          auVar14._0_4_ = local_d0;
          auVar14._8_4_ = local_c8;
          uVar49 = vdot_t(auVar14,auVar15);
          uVar51 = vcmp_s(8,uVar49,local_d0);
          vrsq_s(uVar49);
          uVar49 = vcmovt_s(uVar50,(byte)uVar51 & 1);
          uVar49 = vmul_s(uVar49,0x41f00000);
          auVar1 = vscl_t(auVar16,uVar49);
          local_d0 = auVar1._0_4_;
          local_c8 = auVar1._8_4_;
          fVar48 = *(float *)(iVar42 + 0x60);
        }
        else {
          fVar48 = *(float *)(iVar42 + 0x60);
        }
        iVar39 = *(int *)(param_1 + 0xcc);
        fVar44 = *(float *)(iVar42 + 100);
        *(float *)(iVar41 + 0x60) =
             (float)(int)(fVar47 + fVar48 + (float)*(int *)(param_1 + 200) + local_d0);
        *(undefined4 *)(iVar41 + 0x68) = 0xc0a00000;
        *(float *)(iVar41 + 100) = (float)(int)(fVar46 + fVar44 + (float)iVar39 + local_c8);
        FUN_089f4954(0x3f800000,0x3f800000,*(float *)(iVar37 + 0x34) - 1.570796,iVar41,0);
        *(uint *)(iVar41 + 0xd0) = *(uint *)(iVar41 + 0xd0) | 1;
      }
      iVar40 = iVar40 + 1;
      iVar43 = iVar43 + 4;
      in_V7D = uVar50;
    } while (iVar40 < 4);
    iVar40 = 0;
    iVar43 = 0;
    do {
      iVar37 = FUN_08834258(param_1,iVar40);
      iVar41 = *(int *)(*(int *)(param_1 + 0x14) + iVar43 + 0x348);
      uVar49 = uVar50;
      if (iVar37 == 0) {
        uVar38 = *(uint *)(iVar41 + 0xd0);
LAB_08834a70:
        *(uint *)(iVar41 + 0xd0) = uVar38 & 0xfffffffe;
      }
      else {
        if (*(char *)(iVar37 + 0x4c1) != '\0') {
          uVar38 = *(uint *)(iVar41 + 0xd0);
          goto LAB_08834a70;
        }
        auVar17._4_4_ = 0;
        auVar17._0_4_ = *(uint *)(iVar37 + 0x20);
        auVar17._8_4_ = *(undefined4 *)(iVar37 + 0x28);
        auVar1 = vscl_t(auVar17,*(undefined4 *)(param_1 + 0xc0));
        uVar51 = auVar1._4_4_;
        fVar44 = auVar1._0_4_ - fVar47;
        fVar45 = auVar1._8_4_ - fVar46;
        fVar48 = (float)atan2f(*(undefined4 *)(DAT_08ac5c90 + 0x78),
                               *(undefined4 *)(DAT_08ac5c90 + 0x70));
        uVar52 = vmul_s(-fVar48 - 1.570796,in_V7C);
        auVar19._4_4_ = uVar51;
        auVar19._0_4_ = fVar44;
        auVar19._8_4_ = fVar45;
        auVar18._4_4_ = uVar51;
        auVar18._0_4_ = fVar44;
        auVar18._8_4_ = fVar45;
        auVar3._4_4_ = uVar51;
        auVar3._0_4_ = fVar44;
        auVar3._8_4_ = fVar45;
        auVar3._12_4_ = uVar50;
        auVar2 = vmov_q(auVar3);
        uVar50 = auVar2._4_4_;
        auVar2 = vrot_q(uVar52,1,0,3,0);
        auVar3 = vrot_q(uVar52,2,0,1,0);
        local_c0 = (float)vdot_t(auVar18,auVar2._0_12_);
        local_b8 = (float)vdot_t(auVar19,auVar3._0_12_);
        uVar51 = vzero_s();
        auVar5._8_4_ = local_b8;
        auVar5._4_4_ = uVar51;
        auVar5._0_4_ = local_c0;
        auVar6._8_4_ = local_b8;
        auVar6._4_4_ = uVar51;
        auVar6._0_4_ = local_c0;
        fVar48 = (float)vdot_t(auVar5,auVar6);
        if (900.0 < fVar48) {
          auVar22._4_4_ = uVar50;
          auVar22._0_4_ = local_c0;
          auVar22._8_4_ = local_b8;
          auVar21._4_4_ = uVar50;
          auVar21._0_4_ = local_c0;
          auVar21._8_4_ = local_b8;
          auVar20._4_4_ = uVar50;
          auVar20._0_4_ = local_c0;
          auVar20._8_4_ = local_b8;
          uVar50 = vdot_t(auVar20,auVar21);
          uVar51 = vcmp_s(8,uVar50,local_c0);
          vrsq_s(uVar50);
          uVar50 = vcmovt_s(uVar49,(byte)uVar51 & 1);
          uVar50 = vmul_s(uVar50,0x41f00000);
          auVar1 = vscl_t(auVar22,uVar50);
          local_c0 = auVar1._0_4_;
          local_b8 = auVar1._8_4_;
          fVar48 = *(float *)(iVar42 + 0x60);
        }
        else {
          fVar48 = *(float *)(iVar42 + 0x60);
        }
        iVar37 = *(int *)(param_1 + 0xcc);
        fVar44 = *(float *)(iVar42 + 100);
        *(float *)(iVar41 + 0x60) =
             (float)(int)(fVar47 + fVar48 + (float)*(int *)(param_1 + 200) + local_c0);
        *(undefined4 *)(iVar41 + 0x68) = 0xbf800000;
        *(uint *)(iVar41 + 0xd0) = *(uint *)(iVar41 + 0xd0) | 1;
        *(float *)(iVar41 + 100) = (float)(int)(fVar46 + fVar44 + (float)iVar37 + local_b8);
      }
      iVar40 = iVar40 + 1;
      iVar43 = iVar43 + 4;
      uVar50 = uVar49;
    } while (iVar40 < 5);
    iVar40 = 0;
    iVar43 = 0;
    do {
      iVar37 = FUN_08834368(param_1,iVar40);
      iVar41 = *(int *)(*(int *)(param_1 + 0x14) + iVar43 + 0x330);
      uVar50 = uVar49;
      if (iVar37 == 0) {
        uVar38 = *(uint *)(iVar41 + 0xd0);
LAB_08834c24:
        *(uint *)(iVar41 + 0xd0) = uVar38 & 0xfffffffe;
      }
      else {
        if (*(char *)(iVar37 + 0x4c1) != '\0') {
          uVar38 = *(uint *)(iVar41 + 0xd0);
          goto LAB_08834c24;
        }
        auVar23._4_4_ = 0;
        auVar23._0_4_ = *(uint *)(iVar37 + 0x20);
        auVar23._8_4_ = *(undefined4 *)(iVar37 + 0x28);
        auVar1 = vscl_t(auVar23,*(undefined4 *)(param_1 + 0xc0));
        uVar51 = auVar1._4_4_;
        fVar44 = auVar1._0_4_ - fVar47;
        fVar45 = auVar1._8_4_ - fVar46;
        fVar48 = (float)atan2f(*(undefined4 *)(DAT_08ac5c90 + 0x78),
                               *(undefined4 *)(DAT_08ac5c90 + 0x70));
        uVar52 = vmul_s(-fVar48 - 1.570796,in_V7C);
        auVar25._4_4_ = uVar51;
        auVar25._0_4_ = fVar44;
        auVar25._8_4_ = fVar45;
        auVar24._4_4_ = uVar51;
        auVar24._0_4_ = fVar44;
        auVar24._8_4_ = fVar45;
        auVar29._4_4_ = uVar51;
        auVar29._0_4_ = fVar44;
        auVar29._8_4_ = fVar45;
        auVar29._12_4_ = uVar49;
        auVar2 = vmov_q(auVar29);
        uVar49 = auVar2._4_4_;
        auVar2 = vrot_q(uVar52,1,0,3,0);
        auVar3 = vrot_q(uVar52,2,0,1,0);
        local_b0 = (float)vdot_t(auVar24,auVar2._0_12_);
        local_a8 = (float)vdot_t(auVar25,auVar3._0_12_);
        uVar51 = vzero_s();
        auVar7._8_4_ = local_a8;
        auVar7._4_4_ = uVar51;
        auVar7._0_4_ = local_b0;
        auVar8._8_4_ = local_a8;
        auVar8._4_4_ = uVar51;
        auVar8._0_4_ = local_b0;
        fVar48 = (float)vdot_t(auVar7,auVar8);
        if (900.0 < fVar48) {
          auVar28._4_4_ = uVar49;
          auVar28._0_4_ = local_b0;
          auVar28._8_4_ = local_a8;
          auVar27._4_4_ = uVar49;
          auVar27._0_4_ = local_b0;
          auVar27._8_4_ = local_a8;
          auVar26._4_4_ = uVar49;
          auVar26._0_4_ = local_b0;
          auVar26._8_4_ = local_a8;
          uVar49 = vdot_t(auVar26,auVar27);
          uVar51 = vcmp_s(8,uVar49,local_b0);
          vrsq_s(uVar49);
          uVar49 = vcmovt_s(uVar50,(byte)uVar51 & 1);
          uVar49 = vmul_s(uVar49,0x41f00000);
          auVar1 = vscl_t(auVar28,uVar49);
          local_b0 = auVar1._0_4_;
          local_a8 = auVar1._8_4_;
          fVar48 = *(float *)(iVar42 + 0x60);
        }
        else {
          fVar48 = *(float *)(iVar42 + 0x60);
        }
        iVar37 = *(int *)(param_1 + 0xcc);
        fVar44 = *(float *)(iVar42 + 100);
        *(float *)(iVar41 + 0x60) =
             (float)(int)(fVar47 + fVar48 + (float)*(int *)(param_1 + 200) + local_b0);
        *(undefined4 *)(iVar41 + 0x68) = 0xc0400000;
        *(uint *)(iVar41 + 0xd0) = *(uint *)(iVar41 + 0xd0) | 1;
        *(float *)(iVar41 + 100) = (float)(int)(fVar46 + fVar44 + (float)iVar37 + local_a8);
      }
      iVar40 = iVar40 + 1;
      iVar43 = iVar43 + 4;
      uVar49 = uVar50;
    } while (iVar40 < 3);
    iVar43 = 0;
    iVar40 = 0;
    do {
      iVar37 = FUN_08834478(param_1,iVar43);
      iVar41 = *(int *)(*(int *)(param_1 + 0x14) + iVar40 + 0x33c);
      uVar49 = uVar50;
      if (iVar37 == 0) {
        uVar38 = *(uint *)(iVar41 + 0xd0);
LAB_08834dd8:
        *(uint *)(iVar41 + 0xd0) = uVar38 & 0xfffffffe;
      }
      else {
        if (*(char *)(iVar37 + 0x4c1) != '\0') {
          uVar38 = *(uint *)(iVar41 + 0xd0);
          goto LAB_08834dd8;
        }
        auVar30._4_4_ = 0;
        auVar30._0_4_ = *(uint *)(iVar37 + 0x20);
        auVar30._8_4_ = *(undefined4 *)(iVar37 + 0x28);
        auVar1 = vscl_t(auVar30,*(undefined4 *)(param_1 + 0xc0));
        uVar51 = auVar1._4_4_;
        fVar44 = auVar1._0_4_ - fVar47;
        fVar45 = auVar1._8_4_ - fVar46;
        fVar48 = (float)atan2f(*(undefined4 *)(DAT_08ac5c90 + 0x78),
                               *(undefined4 *)(DAT_08ac5c90 + 0x70));
        uVar52 = vmul_s(-fVar48 - 1.570796,in_V7C);
        auVar32._4_4_ = uVar51;
        auVar32._0_4_ = fVar44;
        auVar32._8_4_ = fVar45;
        auVar31._4_4_ = uVar51;
        auVar31._0_4_ = fVar44;
        auVar31._8_4_ = fVar45;
        auVar36._4_4_ = uVar51;
        auVar36._0_4_ = fVar44;
        auVar36._8_4_ = fVar45;
        auVar36._12_4_ = uVar50;
        auVar2 = vmov_q(auVar36);
        uVar50 = auVar2._4_4_;
        auVar2 = vrot_q(uVar52,1,0,3,0);
        auVar3 = vrot_q(uVar52,2,0,1,0);
        local_a0 = (float)vdot_t(auVar31,auVar2._0_12_);
        local_98 = (float)vdot_t(auVar32,auVar3._0_12_);
        uVar51 = vzero_s();
        auVar9._8_4_ = local_98;
        auVar9._4_4_ = uVar51;
        auVar9._0_4_ = local_a0;
        auVar10._8_4_ = local_98;
        auVar10._4_4_ = uVar51;
        auVar10._0_4_ = local_a0;
        fVar48 = (float)vdot_t(auVar9,auVar10);
        if (900.0 < fVar48) {
          auVar35._4_4_ = uVar50;
          auVar35._0_4_ = local_a0;
          auVar35._8_4_ = local_98;
          auVar34._4_4_ = uVar50;
          auVar34._0_4_ = local_a0;
          auVar34._8_4_ = local_98;
          auVar33._4_4_ = uVar50;
          auVar33._0_4_ = local_a0;
          auVar33._8_4_ = local_98;
          uVar50 = vdot_t(auVar33,auVar34);
          uVar51 = vcmp_s(8,uVar50,local_a0);
          vrsq_s(uVar50);
          uVar50 = vcmovt_s(uVar49,(byte)uVar51 & 1);
          uVar50 = vmul_s(uVar50,0x41f00000);
          auVar1 = vscl_t(auVar35,uVar50);
          local_a0 = auVar1._0_4_;
          local_98 = auVar1._8_4_;
          fVar48 = *(float *)(iVar42 + 0x60);
        }
        else {
          fVar48 = *(float *)(iVar42 + 0x60);
        }
        iVar37 = *(int *)(param_1 + 0xcc);
        fVar44 = *(float *)(iVar42 + 100);
        *(float *)(iVar41 + 0x60) =
             (float)(int)(fVar47 + fVar48 + (float)*(int *)(param_1 + 200) + local_a0);
        *(undefined4 *)(iVar41 + 0x68) = 0xc0000000;
        *(uint *)(iVar41 + 0xd0) = *(uint *)(iVar41 + 0xd0) | 1;
        *(float *)(iVar41 + 100) = (float)(int)(fVar46 + fVar44 + (float)iVar37 + local_98);
      }
      iVar43 = iVar43 + 1;
      iVar40 = iVar40 + 4;
      uVar50 = uVar49;
    } while (iVar43 < 3);
  }
  return;
}

