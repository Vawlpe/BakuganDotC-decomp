#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08875144(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  bool bVar3;
  undefined auVar4 [12];
  undefined auVar5 [12];
  undefined auVar6 [12];
  undefined auVar7 [12];
  int iVar8;
  uint uVar9;
  undefined (*pauVar10) [12];
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 uVar16;
  
  pauVar10 = (undefined (*) [12])(param_1 + 0x80);
  if ((*(uint *)(param_1 + 0x16c) & 4) == 0) {
    fVar12 = *(float *)(*(int *)(param_1 + 0x4bc) + 0x34);
    fVar11 = (float)FUN_08865bf8(param_1);
  }
  else {
    fVar12 = *(float *)(*(int *)(param_1 + 0x4bc) + 0x40);
    fVar11 = (float)FUN_08865c1c(param_1);
  }
  iVar8 = FUN_088608b0(param_1,0x19);
  if (iVar8 != 0) {
    iVar8 = FUN_0886002c(param_1);
    if (iVar8 == 0) {
      iVar8 = FUN_089df684(0x3f666666,param_1);
      if (iVar8 != 0) {
        FUN_088608d8(0x3dcccccd,param_1,0x1a,1,0);
        iVar8 = FUN_0885fd08(param_1);
        if ((iVar8 == 0) || (*(char *)(param_1 + 0x390) == '\0')) {
          FUN_08862a84(param_1,5,0,0);
          iVar8 = *(int *)(param_1 + 0x4bc);
        }
        else {
          FUN_08862a84(param_1,6,0,0);
          iVar8 = *(int *)(param_1 + 0x4bc);
        }
        if ((int)((((int)*(char *)(iVar8 + 3) & 0xfU ^ 8) - 8) * 0x1000000) >> 0x18 == 1) {
          FUN_08862a84(param_1,7,0,0);
        }
        if ((*(uint *)(param_1 + 0x16c) & 1) == 0) {
          *(float *)(param_1 + 0x84) = fVar12;
        }
        else {
          uVar15 = vmul_s(*(undefined4 *)(*(int *)(param_1 + 0x168) + 4),in_V7C);
          auVar2 = vrot_q(uVar15,1,0,2,0);
          auVar1 = vscl_t(auVar2._0_12_,fVar11);
          *(int *)*pauVar10 = auVar1._0_4_;
          *(int *)(param_1 + 0x88) = auVar1._8_4_;
          *(float *)(param_1 + 0x84) = fVar12;
        }
        bVar3 = false;
        if (*(char *)(param_1 + 0x391) != '\0') {
          iVar8 = (**(code **)(*(int *)(param_1 + 0x14) + 0xa4))
                            (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0xa0));
          bVar3 = false;
          if (iVar8 != 2) {
            bVar3 = true;
          }
        }
        if (bVar3) {
          *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x84) * 0.8;
        }
        *(undefined4 *)(param_1 + 0x184) = 4;
      }
      uVar9 = *(uint *)(param_1 + 0x16c);
    }
    else {
      FUN_088715b0(param_1,0);
      uVar9 = *(uint *)(param_1 + 0x16c);
    }
    if ((uVar9 & 4) == 0) {
      auVar1 = vscl_t(*pauVar10,0x3f4ccccd);
      *(int *)*pauVar10 = auVar1._0_4_;
      *(int *)(param_1 + 0x88) = auVar1._8_4_;
      return;
    }
    uVar9 = *(uint *)*pauVar10;
    uVar15 = *(undefined4 *)(param_1 + 0x88);
    auVar4._4_4_ = 0;
    auVar4._0_4_ = uVar9;
    auVar4._8_4_ = uVar15;
    auVar1._4_4_ = 0;
    auVar1._0_4_ = uVar9;
    auVar1._8_4_ = uVar15;
    uVar13 = vdot_t(auVar1,auVar4);
    fVar12 = (float)vsqrt_s(uVar13);
    if (fVar12 <= fVar11) {
      return;
    }
    auVar7._4_4_ = 0;
    auVar7._0_4_ = uVar9;
    auVar7._8_4_ = uVar15;
    auVar6._4_4_ = 0;
    auVar6._0_4_ = uVar9;
    auVar6._8_4_ = uVar15;
    auVar5._4_4_ = 0;
    auVar5._0_4_ = uVar9;
    auVar5._8_4_ = uVar15;
    uVar15 = vdot_t(auVar5,auVar6);
    uVar13 = vcmp_s(8,uVar15,uVar9);
    vrsq_s(uVar15);
    uVar15 = vcmovt_s(in_V7D,(byte)uVar13 & 1);
    uVar15 = vmul_s(uVar15,fVar12 + (fVar11 - fVar12) * 0.2);
    auVar1 = vscl_t(auVar7,uVar15);
    *(int *)(param_1 + 0x80) = auVar1._0_4_;
    *(int *)(param_1 + 0x88) = auVar1._8_4_;
    return;
  }
  iVar8 = FUN_088608b0(param_1,0x1a);
  if (((iVar8 != 0) && (*(float *)(param_1 + 0x84) < 0.0)) &&
     (iVar8 = FUN_088608d8(0x3e4ccccd,param_1,0x1b,1,0), iVar8 != 0)) {
    FUN_08862a84(param_1,4,0,0);
  }
  iVar8 = FUN_08862780(param_1,0);
  uVar15 = *(undefined4 *)(param_1 + 0x84);
  if ((*(uint *)(param_1 + 0x16c) & 1) != 0) {
    uVar13 = vmul_s(*(undefined4 *)(*(int *)(param_1 + 0x168) + 4),in_V7C);
    auVar2 = vrot_q(uVar13,1,0,2,0);
    auVar1 = vscl_t(auVar2._0_12_,0x3f800000);
    uVar13 = *(undefined4 *)(param_1 + 0x8c);
    auVar1 = vadd_t(*pauVar10,auVar1);
    *(int *)*pauVar10 = auVar1._0_4_;
    *(int *)(param_1 + 0x84) = auVar1._4_4_;
    *(int *)(param_1 + 0x88) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x8c) = uVar13;
  }
  *(undefined4 *)(param_1 + 0x84) = 0;
  uVar13 = vdot_t(*pauVar10,*pauVar10);
  fVar14 = (float)vsqrt_s(uVar13);
  if (fVar11 < fVar14) {
    uVar13 = vdot_t(*pauVar10,*pauVar10);
    uVar16 = vcmp_s(8,uVar13,*(undefined4 *)*pauVar10);
    vrsq_s(uVar13);
    uVar13 = vcmovt_s(in_V7D,(byte)uVar16 & 1);
    uVar13 = vmul_s(uVar13,fVar14 + (fVar11 - fVar14) * 0.15);
    auVar1 = vscl_t(*pauVar10,uVar13);
    *(int *)*pauVar10 = auVar1._0_4_;
    *(int *)(param_1 + 0x84) = auVar1._4_4_;
    *(int *)(param_1 + 0x88) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x8c) = in_V7D;
  }
  *(undefined4 *)(param_1 + 0x84) = uVar15;
  if (iVar8 == 0) {
    FUN_08862608(*(undefined4 *)(*(int *)(param_1 + 0x168) + 4),0x3e99999a,0,param_1);
  }
  fVar11 = *(float *)(param_1 + 0x84) - *(float *)(param_1 + 0x2f8);
  *(float *)(param_1 + 0x84) = fVar11;
  if (0.0 < fVar11) {
    fVar11 = *(float *)(param_1 + 0x24) -
             (*(float *)(*(int *)(param_1 + 0x4bc) + 0x3c) + *(float *)(param_1 + 0x1e4));
    if (fVar11 <= -100.0) {
      iVar8 = *(int *)(param_1 + 0x184);
      goto LAB_088755d4;
    }
    if (fVar11 < 0.0) {
      *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x84) * fVar11 * -0.01;
    }
  }
  iVar8 = *(int *)(param_1 + 0x184);
LAB_088755d4:
  *(int *)(param_1 + 0x184) = iVar8 + 1;
  FUN_0886239c(param_1);
  if (*(float *)(param_1 + 0x344) <=
      *(float *)(param_1 + 0x24) + *(float *)(*(int *)(param_1 + 0x4bc) + 0x70) +
      *(float *)(param_1 + 0x84) * 0.8) {
    if ((*(uint *)(param_1 + 0x144) & 0x80000000) != 0x80000000) {
      iVar8 = FUN_0886002c(param_1);
      if (iVar8 != 0) {
        FUN_088715b0(param_1,0);
        return;
      }
      if (((*(uint *)(param_1 + 0x16c) & 4) != 0) &&
         (iVar8 = FUN_088886fc(param_1 + 0x434), iVar8 != 0)) {
        FUN_088706f0(param_1,2,0);
        return;
      }
      iVar8 = FUN_088886fc(param_1 + 0x434);
      if (iVar8 == 0) {
        return;
      }
      if (*(char *)(*(int *)(param_1 + 0x4bc) + 1) == '\x01') {
        if (fVar12 * 0.8 <= *(float *)(param_1 + 0x84)) {
          return;
        }
        if ((*(uint *)(param_1 + 0x16c) & 2) == 0) {
          return;
        }
        FUN_0885ff24(param_1,1,0);
        FUN_088608d8(0x3dcccccd,param_1,0x19,0,0);
        if (*(int *)(param_1 + 0x170) != 0) {
          FUN_08854e78(*(undefined4 *)(param_1 + 0x170),0xc,1);
        }
        fVar11 = (float)FUN_089df51c(param_1);
        FUN_089df450(fVar11 * 0.3,param_1);
        return;
      }
      if (fVar12 * 0.3 <= *(float *)(param_1 + 0x84)) {
        return;
      }
      if ((*(uint *)(param_1 + 0x16c) & 0x200) == 0) {
        return;
      }
      FUN_088706f0(param_1,0xd,0);
      return;
    }
    uVar15 = *(undefined4 *)(param_1 + 0x344);
  }
  else {
    uVar15 = *(undefined4 *)(param_1 + 0x344);
  }
  uVar13 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x24) = uVar15;
  FUN_088669ac(param_1);
  *(undefined4 *)(param_1 + 0x24) = uVar13;
  FUN_088706f0(param_1,0xe,0);
  *(undefined4 *)(param_1 + 0x184) = 0;
  return;
}

