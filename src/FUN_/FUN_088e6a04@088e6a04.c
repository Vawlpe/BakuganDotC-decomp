#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088e6a04(float param_1,float param_2,int param_3,undefined (*param_4) [12],int param_5,
                char param_6)

{
  bool bVar1;
  undefined auVar2 [16];
  undefined auVar3 [12];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined auVar6 [16];
  undefined auVar7 [12];
  undefined auVar8 [12];
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  undefined (*pauVar12) [12];
  int iVar13;
  undefined (*pauVar14) [12];
  int iVar15;
  undefined4 *puVar16;
  float fVar17;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7C;
  undefined4 in_V7E;
  
  iVar15 = 0;
  uVar9 = FUN_088be274();
  iVar10 = FUN_088c2010(uVar9);
  if (iVar10 == 0) {
    uVar9 = atan2f(*(float *)(*param_4 + 8) - *(float *)(param_3 + 0x28),
                   *(float *)*param_4 - *(float *)(param_3 + 0x20));
    fVar17 = (float)FUN_088defe8(uVar9,0x3f800000,*(undefined4 *)(param_3 + 0x424),param_3);
    bVar1 = fVar17 * fVar17 < 0.01;
    if (bVar1) {
      *(undefined4 *)(param_3 + 0x34) = uVar9;
    }
    if (bVar1) {
      auVar2._4_4_ = 0;
      auVar2._0_4_ = *(uint *)(param_3 + 0x20);
      auVar2._8_4_ = *(undefined4 *)(param_3 + 0x28);
      auVar2._12_4_ = *(undefined4 *)(param_3 + 0x2c);
      auVar6._4_4_ = 0;
      auVar6._0_4_ = *(uint *)*param_4;
      auVar6._8_4_ = *(undefined4 *)(*param_4 + 8);
      auVar6._12_4_ = *(undefined4 *)param_4[1];
      auVar2 = vsub_q(auVar2,auVar6);
      uVar9 = vdot_t(auVar2._0_12_,auVar2._0_12_);
      fVar17 = (float)vsqrt_s(uVar9);
      if (fVar17 < param_2) {
        FUN_088def24(0x3e4ccccd,param_3,0,1,0);
        FUN_089c207c(*(undefined4 *)(param_3 + 300),0x2c0003e);
        iVar15 = 1;
        if (param_6 != '\0') {
          uVar9 = vmul_s(*(undefined4 *)(param_3 + 0x34),in_V7C);
          auVar2 = vrot_q(uVar9,1,0,2,0);
          auVar3 = vscl_t(auVar2._0_12_,fVar17);
          *(int *)(param_3 + 0x80) = auVar3._0_4_;
          *(int *)(param_3 + 0x84) = auVar3._4_4_;
          *(int *)(param_3 + 0x88) = auVar3._8_4_;
          *(int *)(param_3 + 0x8c) = auVar2._12_4_;
        }
      }
      else {
        uVar9 = 1;
        uVar11 = *(int *)(param_3 + 8) - 0x4e;
        puVar16 = (undefined4 *)0x0;
        if (uVar11 < 6) {
          if (((*(int *)(param_3 + 8) == 0x4e) || (uVar11 == 1)) || (uVar11 == 2)) {
            puVar16 = (undefined4 *)(&DAT_08a98ce8 + param_5 * 0x10);
            uVar9 = *puVar16;
          }
          else {
            FUN_089c1f8c(*(undefined4 *)(param_3 + 300),0x2c0003e,1,1);
          }
        }
        iVar10 = FUN_088def24(0x3e4ccccd,param_3,uVar9,1,0);
        if (iVar10 == 0) {
          if (puVar16 != (undefined4 *)0x0) {
            iVar13 = puVar16[1];
            iVar10 = *(int *)(param_3 + 0x334) + 1;
            *(int *)(param_3 + 0x334) = iVar10;
            if (iVar13 < iVar10) {
              *(undefined4 *)(param_3 + 0x334) = 0;
            }
            if ((*(int *)(param_3 + 0x334) == puVar16[2]) ||
               (*(int *)(param_3 + 0x334) == puVar16[3])) {
              uVar11 = vrndi_s();
              FUN_089c1f8c(*(undefined4 *)(param_3 + 300),((uVar11 >> 0x10) * 6 >> 0x10) + 0x2c00001
                           ,0,0);
            }
          }
        }
        else {
          *(undefined4 *)(param_3 + 0x334) = 0;
        }
        uVar9 = vmul_s(*(undefined4 *)(param_3 + 0x34),in_V7C);
        auVar2 = vrot_q(uVar9,1,0,2,0);
        auVar3 = vscl_t(auVar2._0_12_,param_1);
        *(int *)(param_3 + 0x80) = auVar3._0_4_;
        *(int *)(param_3 + 0x84) = auVar3._4_4_;
        *(int *)(param_3 + 0x88) = auVar3._8_4_;
        *(int *)(param_3 + 0x8c) = auVar2._12_4_;
      }
    }
    else {
      *(undefined4 *)(param_3 + 0x80) = in_V72;
      *(undefined4 *)(param_3 + 0x84) = in_V76;
      *(undefined4 *)(param_3 + 0x88) = in_V7A;
      *(undefined4 *)(param_3 + 0x8c) = in_V7E;
      if ((0x4d < *(int *)(param_3 + 8)) && (uVar9 = 9, *(int *)(param_3 + 8) < 0x51)) {
        if (fVar17 < 0.0) {
          uVar9 = 10;
        }
        FUN_088def24(0x3e4ccccd,param_3,uVar9,1,0);
      }
    }
    if (iVar15 == 0) {
      pauVar14 = (undefined (*) [12])(param_3 + 0x380);
      pauVar12 = (undefined (*) [12])(param_3 + 0x20);
      auVar3 = vsub_t(*pauVar14,*pauVar12);
      fVar17 = (float)vdot_t(auVar3,auVar3);
      if (fVar17 < param_1 * param_1) {
        auVar3 = vsub_t(*param_4,*pauVar12);
        auVar8._4_4_ = 0;
        auVar8._0_4_ = auVar3._0_4_;
        auVar8._8_4_ = auVar3._8_4_;
        auVar7._4_4_ = 0;
        auVar7._0_4_ = auVar3._0_4_;
        auVar7._8_4_ = auVar3._8_4_;
        fVar17 = (float)vdot_t(auVar7,auVar8);
        if (fVar17 < param_1 * param_1) {
          uVar9 = *(undefined4 *)(*param_4 + 4);
          uVar4 = *(undefined4 *)(*param_4 + 8);
          uVar5 = *(undefined4 *)param_4[1];
          *(undefined4 *)*pauVar14 = *(undefined4 *)*param_4;
          *(undefined4 *)(param_3 + 900) = uVar9;
          *(undefined4 *)(param_3 + 0x388) = uVar4;
          *(undefined4 *)(param_3 + 0x38c) = uVar5;
          *(undefined4 *)(param_3 + 0x364) = 0;
          iVar15 = 1;
        }
      }
      else {
        uVar9 = *(undefined4 *)(param_3 + 0x24);
        uVar4 = *(undefined4 *)(param_3 + 0x28);
        uVar5 = *(undefined4 *)(param_3 + 0x2c);
        *(undefined4 *)*pauVar14 = *(undefined4 *)*pauVar12;
        *(undefined4 *)(param_3 + 900) = uVar9;
        *(undefined4 *)(param_3 + 0x388) = uVar4;
        *(undefined4 *)(param_3 + 0x38c) = uVar5;
        *(undefined4 *)(param_3 + 0x364) = 0;
      }
    }
    return iVar15;
  }
  return 0;
}

