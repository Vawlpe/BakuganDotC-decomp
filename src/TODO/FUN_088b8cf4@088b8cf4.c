#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b8cf4(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined4 uVar3;
  undefined auVar4 [12];
  undefined auVar5 [12];
  undefined auVar6 [12];
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined (*pauVar10) [12];
  undefined4 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 in_V7F;
  undefined4 uVar17;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  float local_80;
  undefined4 uStack_7c;
  float fStack_78;
  undefined4 uStack_74;
  float local_70;
  undefined4 local_6c;
  float local_68;
  undefined4 local_64;
  float local_48;
  
  iVar7 = *(int *)(param_1 + 0x154);
  if (iVar7 != 10) {
    if (iVar7 != 2) {
      if (iVar7 != 1) {
        if (iVar7 == 0) {
          *(undefined4 *)(param_1 + 0x1f8) = 0;
          *(undefined *)(param_1 + 0x1d0) = 0;
          *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) + 1;
          *(undefined *)(param_1 + 500) = 1;
          return;
        }
        *(undefined *)(param_1 + 0x1d3) = 1;
        *(undefined *)(param_1 + 500) = 0;
        FUN_088b87c4(param_1,0,0);
        return;
      }
      pauVar10 = (undefined (*) [12])(param_1 + 0x80);
      iVar7 = FUN_088b893c(0x3fb33333,param_1,(undefined (*) [12])(param_1 + 0x20),pauVar10,0xbb,1);
      if (iVar7 != 0) {
        iVar7 = *(int *)(param_1 + 0x1f0);
        if (iVar7 < 2) {
          uVar8 = 0;
          if (0 < iVar7) {
            uVar8 = 1;
          }
        }
        else if (iVar7 < 3) {
          uVar8 = 0;
        }
        else if (iVar7 < 4) {
          uVar8 = 3;
        }
        else {
          uVar8 = 0;
        }
        FUN_088dfeec(param_1 + 0x1e0,uVar8);
        if (*(char *)(param_1 + 0x1d0) != '\0') {
          puVar9 = &DAT_08abd650;
          auVar1._8_4_ = DAT_08abd658;
          auVar1._4_4_ = DAT_08abd654;
          auVar1._0_4_ = DAT_08abd650;
          auVar1 = vsub_t(*(undefined (*) [12])(param_1 + 0x20),auVar1);
          uVar8 = vdot_t(auVar1,auVar1);
          uVar17 = vcmp_s(8,uVar8,auVar1._0_4_);
          vrsq_s(uVar8);
          uVar8 = vcmovt_s(in_V7D,(byte)uVar17 & 1);
          vpfxd(4,4,4,5);
          auVar1 = vscl_t(auVar1,uVar8);
          local_a0 = auVar1._0_4_;
          uStack_9c = auVar1._4_4_;
          uStack_98 = auVar1._8_4_;
          uStack_94 = in_V7D;
          iVar7 = FUN_088b8ca0(param_1);
          puVar11 = (undefined4 *)(param_1 + 0x180);
          if (iVar7 != 0) {
            puVar9[1] = (float)puVar9[1] + 0.2;
            auVar2 = vsub_q(*(undefined (*) [16])(DAT_08ac5c90 + 0x70),
                            *(undefined (*) [16])(param_1 + 0x170));
            auVar2 = vscl_q(auVar2,0x3ca3d70a);
            auVar2 = vadd_q(*(undefined (*) [16])(param_1 + 0x170),auVar2);
            local_a0 = auVar2._0_4_;
            uStack_9c = auVar2._4_4_;
            uStack_98 = auVar2._8_4_;
            uStack_94 = auVar2._12_4_;
          }
          uVar8 = puVar9[1];
          uVar17 = puVar9[2];
          uVar3 = puVar9[3];
          *puVar11 = *puVar9;
          *(undefined4 *)(param_1 + 0x184) = uVar8;
          *(undefined4 *)(param_1 + 0x188) = uVar17;
          *(undefined4 *)(param_1 + 0x18c) = uVar3;
          iVar7 = DONE_NotZero_DAT_08AC5258();
          if (iVar7 != 0) {
            uVar8 = DONE_Get_DAT_08AC5258();
            FUN_089c00c4(uVar8,0x2c00022,puVar11,0,1);
          }
          FUN_08824024(DAT_08ac5c70,7,puVar11,&local_a0);
        }
        *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) + 1;
        return;
      }
      uVar8 = vdot_t(*pauVar10,*pauVar10);
      fVar16 = (float)vsqrt_s(uVar8);
      fVar16 = *(float *)(param_1 + 0x1f8) + fVar16;
      *(float *)(param_1 + 0x1f8) = fVar16;
      if (fVar16 <= 150.0) {
        return;
      }
      *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) + 1;
      return;
    }
    uVar8 = vrndf1_s();
    local_48 = (float)vsub_s(uVar8,in_V7F);
    *(float *)(param_1 + 0x1c4) = local_48 * 0.6283185 + -0.3141593;
    *(undefined4 *)(param_1 + 0x1c8) = 0x3ea0d97c;
    *(undefined4 *)(param_1 + 0x1cc) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1c0) = 0x41000000;
    *(undefined *)(param_1 + 0x1fc) = 0x19;
    *(undefined *)(param_1 + 0x1d2) = 1;
    if (*(int *)(param_1 + 0x14c) == 0) {
      *(undefined4 *)(param_1 + 0x154) = 9999;
      return;
    }
    *(undefined4 *)(param_1 + 0x154) = 10;
  }
  if (*(int *)(param_1 + 0x14c) == 0) {
    *(undefined4 *)(param_1 + 0x154) = 9999;
  }
  else {
    FUN_088e1abc(*(undefined4 *)(param_1 + 0x14c),&local_90);
    auVar4._4_4_ = uStack_8c;
    auVar4._0_4_ = local_90;
    auVar4._8_4_ = uStack_88;
    pauVar10 = (undefined (*) [12])(param_1 + 0x20);
    auVar1 = vsub_t(auVar4,*pauVar10);
    local_80 = auVar1._0_4_;
    uStack_7c = auVar1._4_4_;
    fStack_78 = auVar1._8_4_;
    uStack_74 = uStack_84;
    local_64 = uStack_84;
    uVar8 = vdot_t(auVar1,auVar1);
    fVar16 = (float)vsqrt_s(uVar8);
    if (3.0 <= fVar16) {
      iVar7 = *(char *)(param_1 + 0x1fc) + -1;
      *(char *)(param_1 + 0x1fc) = (char)iVar7;
      if (-1 < iVar7 * 0x1000000 >> 0x18) {
        local_70 = local_80;
        local_6c = uStack_7c;
        local_68 = fStack_78;
        fVar12 = (float)atan2f(fStack_78,local_80);
        fVar12 = fVar12 + *(float *)(param_1 + 0x1c4) * *(float *)(param_1 + 0x1cc);
        fVar13 = (float)atan2f(local_6c,SQRT(local_70 * local_70 + local_68 * local_68));
        fVar13 = fVar13 + *(float *)(param_1 + 0x1c8) * *(float *)(param_1 + 0x1cc);
        uVar8 = vmul_s(fVar13,in_V7C);
        fVar14 = (float)vcos_s(uVar8);
        uVar8 = vmul_s(fVar12,in_V7C);
        fVar15 = (float)vcos_s(uVar8);
        uVar8 = vmul_s(fVar13,in_V7C);
        uVar8 = vsin_s(uVar8);
        uVar17 = vmul_s(fVar12,in_V7C);
        fVar12 = (float)vsin_s(uVar17);
        if (*(float *)(param_1 + 0x1c0) < 16.0) {
          *(float *)(param_1 + 0x1c0) = *(float *)(param_1 + 0x1c0) + 0.2;
        }
        if (SQRT(fVar16) * 1.5 < *(float *)(param_1 + 0x1c0)) {
          *(float *)(param_1 + 0x1c0) = SQRT(fVar16) * 1.5;
        }
        auVar5._4_4_ = uVar8;
        auVar5._0_4_ = fVar15 * fVar14;
        auVar5._8_4_ = fVar12 * fVar14;
        auVar1 = vscl_t(auVar5,*(undefined4 *)(param_1 + 0x1c0));
        local_70 = auVar1._0_4_;
        local_6c = auVar1._4_4_;
        local_68 = auVar1._8_4_;
        if ((*(uint *)(*(int *)(param_1 + 0x14c) + 0x144) & 0x20210) == 0) {
          auVar1 = vadd_t(auVar1,*(undefined (*) [12])(*(int *)(param_1 + 0x14c) + 0x80));
          local_70 = auVar1._0_4_;
          local_6c = auVar1._4_4_;
          local_68 = auVar1._8_4_;
        }
        uVar8 = *(undefined4 *)(param_1 + 0x2c);
        auVar6._4_4_ = local_6c;
        auVar6._0_4_ = local_70;
        auVar6._8_4_ = local_68;
        auVar1 = vadd_t(*pauVar10,auVar6);
        *(int *)*pauVar10 = auVar1._0_4_;
        *(int *)(param_1 + 0x24) = auVar1._4_4_;
        *(int *)(param_1 + 0x28) = auVar1._8_4_;
        *(undefined4 *)(param_1 + 0x2c) = uVar8;
        fVar16 = *(float *)(param_1 + 0x1cc) - 0.05;
        *(float *)(param_1 + 0x1cc) = fVar16;
        if (0.0 <= fVar16) {
          return;
        }
        *(undefined4 *)(param_1 + 0x1cc) = 0;
        return;
      }
      iVar7 = *(int *)(param_1 + 0x154);
    }
    else {
      iVar7 = *(int *)(param_1 + 0x154);
    }
    *(int *)(param_1 + 0x154) = iVar7 + 1;
  }
  return;
}

