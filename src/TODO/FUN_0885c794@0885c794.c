#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0885c794(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  uint uVar3;
  bool bVar4;
  undefined auVar5 [12];
  undefined auVar6 [12];
  undefined auVar7 [12];
  undefined auVar8 [12];
  int iVar9;
  int iVar10;
  undefined (*pauVar11) [12];
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 uVar17;
  
  pauVar11 = (undefined (*) [12])(param_1 + 0x80);
  if ((*(uint *)(param_1 + 0x16c) & 4) == 0) {
    fVar14 = *(float *)(*(int *)(param_1 + 0x4bc) + 0x34);
    fVar12 = (float)FUN_08865bf8(param_1);
  }
  else {
    fVar14 = *(float *)(*(int *)(param_1 + 0x4bc) + 0x40);
    fVar12 = (float)FUN_08865c1c(param_1);
  }
  iVar9 = FUN_088608b0(param_1,0x19);
  if (iVar9 == 0) {
    if (*(char *)(*(int *)(param_1 + 0x4bc) + 1) == '\x01') {
      iVar9 = FUN_088608b0(param_1,0x1a);
      if (((iVar9 != 0) && (*(float *)(param_1 + 0x84) < 0.0)) &&
         (iVar9 = FUN_088608d8(0x3e4ccccd,param_1,0x1b,1,0), iVar9 != 0)) {
        FUN_08862a84(param_1,4,0,0);
      }
    }
    else if (*(float *)(param_1 + 0x84) < 0.0) {
      FUN_088608d8(0x3e4ccccd,param_1,0,1,0);
    }
    iVar9 = FUN_08862780(param_1,0);
    uVar13 = *(undefined4 *)(param_1 + 0x84);
    if ((*(uint *)(param_1 + 0x16c) & 1) != 0) {
      uVar16 = vmul_s(*(undefined4 *)(*(int *)(param_1 + 0x168) + 4),in_V7C);
      auVar2 = vrot_q(uVar16,1,0,2,0);
      auVar1 = vscl_t(auVar2._0_12_,0x3f800000);
      uVar16 = *(undefined4 *)(param_1 + 0x8c);
      auVar1 = vadd_t(*pauVar11,auVar1);
      *(int *)*pauVar11 = auVar1._0_4_;
      *(int *)(param_1 + 0x84) = auVar1._4_4_;
      *(int *)(param_1 + 0x88) = auVar1._8_4_;
      *(undefined4 *)(param_1 + 0x8c) = uVar16;
    }
    *(undefined4 *)(param_1 + 0x84) = 0;
    uVar16 = vdot_t(*pauVar11,*pauVar11);
    fVar15 = (float)vsqrt_s(uVar16);
    if (fVar12 < fVar15) {
      uVar16 = vdot_t(*pauVar11,*pauVar11);
      uVar17 = vcmp_s(8,uVar16,*(undefined4 *)*pauVar11);
      vrsq_s(uVar16);
      uVar16 = vcmovt_s(in_V7D,(byte)uVar17 & 1);
      uVar16 = vmul_s(uVar16,fVar15 + (fVar12 - fVar15) * 0.15);
      auVar1 = vscl_t(*pauVar11,uVar16);
      *(int *)*pauVar11 = auVar1._0_4_;
      *(int *)(param_1 + 0x84) = auVar1._4_4_;
      *(int *)(param_1 + 0x88) = auVar1._8_4_;
      *(undefined4 *)(param_1 + 0x8c) = in_V7D;
    }
    *(undefined4 *)(param_1 + 0x84) = uVar13;
    if (iVar9 == 0) {
      FUN_08862608(*(undefined4 *)(*(int *)(param_1 + 0x168) + 4),0x3e99999a,0,param_1);
    }
    *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x84) - *(float *)(param_1 + 0x2f8);
    FUN_0886239c(param_1);
    if ((*(float *)(param_1 + 0x24) + *(float *)(*(int *)(param_1 + 0x4bc) + 0x70) +
         *(float *)(param_1 + 0x84) * 0.8 < *(float *)(param_1 + 0x344)) ||
       ((*(uint *)(param_1 + 0x144) & 0x80000000) == 0x80000000)) {
      FUN_088706f0(param_1,0xe,0);
    }
    else {
      iVar9 = param_1 + 0x434;
      if (((*(uint *)(param_1 + 0x16c) & 0x10) == 0) || (iVar10 = FUN_088886fc(iVar9), iVar10 == 0))
      {
        if (((*(uint *)(param_1 + 0x16c) & 4) == 0) || (iVar10 = FUN_088886fc(iVar9), iVar10 == 0))
        {
          iVar9 = FUN_088886fc(iVar9);
          if (iVar9 != 0) {
            if (*(char *)(*(int *)(param_1 + 0x4bc) + 1) == '\x01') {
              if ((*(float *)(param_1 + 0x84) < fVar14 * 0.5) &&
                 ((*(uint *)(param_1 + 0x16c) & 2) != 0)) {
                FUN_088706f0(param_1,0xc,0);
                fVar12 = (float)FUN_089df51c(param_1);
                FUN_089df450(fVar12 * 0.3,param_1);
                return;
              }
            }
            else if ((*(uint *)(param_1 + 0x16c) & 0x200) != 0) {
              FUN_088706f0(param_1,0xd,0);
            }
          }
        }
        else {
          FUN_088706f0(param_1,2,0);
        }
      }
      else {
        FUN_088715b0(param_1,0);
      }
    }
  }
  else {
    if (*(char *)(*(int *)(param_1 + 0x4bc) + 1) == '\x01') {
      iVar9 = FUN_089df684(0x3f4ccccd,param_1);
      if (iVar9 != 0) {
        FUN_088608d8(0x3dcccccd,param_1,0x1a,1,0);
        iVar9 = FUN_0885fd08(param_1);
        if (iVar9 == 0) {
          FUN_08862a84(param_1,5,0,0);
          iVar9 = *(int *)(param_1 + 0x4bc);
        }
        else {
          FUN_08862a84(param_1,6,0,0);
          iVar9 = *(int *)(param_1 + 0x4bc);
        }
        if ((int)((((int)*(char *)(iVar9 + 3) & 0xfU ^ 8) - 8) * 0x1000000) >> 0x18 == 1) {
          FUN_08862a84(param_1,7,0,0);
        }
        if ((*(uint *)(param_1 + 0x16c) & 1) == 0) {
          *(float *)(param_1 + 0x84) = fVar14;
        }
        else {
          uVar13 = vmul_s(*(undefined4 *)(*(int *)(param_1 + 0x168) + 4),in_V7C);
          auVar2 = vrot_q(uVar13,1,0,2,0);
          auVar1 = vscl_t(auVar2._0_12_,fVar12);
          *(int *)*pauVar11 = auVar1._0_4_;
          *(int *)(param_1 + 0x88) = auVar1._8_4_;
          *(float *)(param_1 + 0x84) = fVar14;
        }
        bVar4 = false;
        if (*(char *)(param_1 + 0x391) != '\0') {
          iVar9 = (**(code **)(*(int *)(param_1 + 0x14) + 0xa4))
                            (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0xa0));
          bVar4 = false;
          if (iVar9 != 2) {
            bVar4 = true;
          }
        }
        if (bVar4) {
          *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x84) * 0.8;
        }
        *(undefined4 *)(param_1 + 0x184) = 4;
      }
    }
    else {
      iVar9 = FUN_089df684(0x3ecccccd,param_1);
      if (iVar9 != 0) {
        FUN_088608d8(0x3dcccccd,param_1,0,1,0);
        iVar9 = FUN_0885fd08(param_1);
        if (iVar9 == 0) {
          FUN_08862a84(param_1,5,0,0);
          iVar9 = *(int *)(param_1 + 0x4bc);
        }
        else {
          FUN_08862a84(param_1,6,0,0);
          iVar9 = *(int *)(param_1 + 0x4bc);
        }
        if ((int)((((int)*(char *)(iVar9 + 3) & 0xfU ^ 8) - 8) * 0x1000000) >> 0x18 == 1) {
          FUN_08862a84(param_1,7,0,0);
        }
        if ((*(uint *)(param_1 + 0x16c) & 1) == 0) {
          *(float *)(param_1 + 0x84) = fVar14;
        }
        else {
          uVar13 = vmul_s(*(undefined4 *)(*(int *)(param_1 + 0x168) + 4),in_V7C);
          auVar2 = vrot_q(uVar13,1,0,2,0);
          auVar1 = vscl_t(auVar2._0_12_,fVar12);
          *(int *)*pauVar11 = auVar1._0_4_;
          *(int *)(param_1 + 0x88) = auVar1._8_4_;
          *(float *)(param_1 + 0x84) = fVar14;
        }
        bVar4 = false;
        if (*(char *)(param_1 + 0x391) != '\0') {
          iVar9 = (**(code **)(*(int *)(param_1 + 0x14) + 0xa4))
                            (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0xa0));
          bVar4 = false;
          if (iVar9 != 2) {
            bVar4 = true;
          }
        }
        if (bVar4) {
          *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x84) * 0.8;
        }
        *(undefined4 *)(param_1 + 0x184) = 4;
      }
    }
    if ((*(uint *)(param_1 + 0x16c) & 4) == 0) {
      auVar1 = vscl_t(*pauVar11,0x3f4ccccd);
      *(int *)*pauVar11 = auVar1._0_4_;
      *(int *)(param_1 + 0x88) = auVar1._8_4_;
    }
    else {
      uVar3 = *(uint *)*pauVar11;
      uVar13 = *(undefined4 *)(param_1 + 0x88);
      auVar5._4_4_ = 0;
      auVar5._0_4_ = uVar3;
      auVar5._8_4_ = uVar13;
      auVar1._4_4_ = 0;
      auVar1._0_4_ = uVar3;
      auVar1._8_4_ = uVar13;
      uVar16 = vdot_t(auVar1,auVar5);
      fVar14 = (float)vsqrt_s(uVar16);
      if (fVar12 < fVar14) {
        auVar8._4_4_ = 0;
        auVar8._0_4_ = uVar3;
        auVar8._8_4_ = uVar13;
        auVar7._4_4_ = 0;
        auVar7._0_4_ = uVar3;
        auVar7._8_4_ = uVar13;
        auVar6._4_4_ = 0;
        auVar6._0_4_ = uVar3;
        auVar6._8_4_ = uVar13;
        uVar13 = vdot_t(auVar6,auVar7);
        uVar16 = vcmp_s(8,uVar13,uVar3);
        vrsq_s(uVar13);
        uVar13 = vcmovt_s(in_V7D,(byte)uVar16 & 1);
        uVar13 = vmul_s(uVar13,fVar14 + (fVar12 - fVar14) * 0.2);
        auVar1 = vscl_t(auVar8,uVar13);
        *(int *)(param_1 + 0x80) = auVar1._0_4_;
        *(int *)(param_1 + 0x88) = auVar1._8_4_;
      }
    }
  }
  return;
}

