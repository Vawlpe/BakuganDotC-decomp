#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0885d078(int param_1,undefined (*param_2) [12])

{
  char cVar1;
  undefined auVar2 [12];
  undefined auVar3 [12];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  int iVar7;
  undefined (*pauVar8) [16];
  int iVar9;
  undefined (*pauVar10) [12];
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 uVar15;
  
  iVar9 = 5;
  pauVar10 = (undefined (*) [12])(param_1 + 0x80);
  if (*(int *)(param_1 + 0x170) != 0) {
    FUN_08854e78(*(undefined4 *)(param_1 + 0x170),0xe,1);
  }
  *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 0x1000000;
  fVar14 = *(float *)(param_1 + 0x174);
  fVar11 = (float)FUN_08865d74(param_1);
  fVar12 = (float)FUN_089e10c0();
  fVar14 = fVar14 - fVar11 * fVar12;
  fVar11 = (float)FUN_08865cc8(param_1);
  if (fVar11 <= fVar14) {
    fVar11 = fVar14;
  }
  *(float *)(param_1 + 0x174) = fVar11;
  cVar1 = *(char *)(*(int *)(param_1 + 0x4bc) + 2);
  if (cVar1 < '\x01') {
    if (-1 < cVar1) {
      fVar11 = (*(float *)(param_1 + 0x344) + *(float *)(*(int *)(param_1 + 0x4bc) + 0x5c)) -
               *(float *)(param_1 + 0x24);
      if (fVar11 < 0.0) {
        fVar11 = 0.0;
      }
      *(float *)(param_1 + 0x84) =
           *(float *)(param_1 + 0x2f8) + fVar11 * 0.3 + *(float *)(param_1 + 0x3e0);
      goto LAB_0885d304;
    }
    fVar11 = *(float *)(param_1 + 0x24);
  }
  else if (cVar1 < '\x02') {
    if (*(float *)(*(int *)(param_1 + 0x4bc) + 0x5c) == 0.0) {
      fVar11 = *(float *)(param_1 + 0x2f8) * 0.7 + *(float *)(param_1 + 0x3e0) * 0.2 +
               *(float *)(param_1 + 0x84);
      *(float *)(param_1 + 0x84) = fVar11;
      if (0.0 < fVar11) {
        fVar11 = 0.0;
      }
      *(float *)(param_1 + 0x84) = fVar11;
    }
    else {
      fVar11 = (*(float *)(param_1 + 0x344) + *(float *)(*(int *)(param_1 + 0x4bc) + 0x5c)) -
               *(float *)(param_1 + 0x24);
      if (fVar11 < 0.0) {
        *(float *)(param_1 + 0x84) =
             *(float *)(param_1 + 0x2f8) * 0.5 + *(float *)(param_1 + 0x3e0) * 0.2 +
             *(float *)(param_1 + 0x84);
      }
      else {
        fVar11 = fVar11 * 0.2;
        if (2.0 < fVar11) {
          fVar11 = 2.0;
        }
        *(float *)(param_1 + 0x84) =
             *(float *)(param_1 + 0x2f8) * 0.5 + fVar11 + *(float *)(param_1 + 0x3e0) * 0.2 +
             *(float *)(param_1 + 0x84);
      }
      *(float *)(param_1 + 0x84) =
           *(float *)(param_1 + 0x84) +
           (*(float *)(param_1 + 0x2f8) * 0.7 - *(float *)(param_1 + 0x84)) * 0.1;
    }
LAB_0885d304:
    fVar11 = *(float *)(param_1 + 0x24);
  }
  else {
    fVar11 = *(float *)(param_1 + 0x24);
  }
  if (fVar11 < *(float *)(*param_2 + 4)) {
    fVar12 = *(float *)(param_1 + 0x3e0);
    fVar11 = (float)FUN_08865da4(param_1);
    fVar12 = fVar12 + fVar11 * 0.7;
    fVar11 = (float)FUN_08865dec(param_1);
    fVar11 = fVar11 - *(float *)(param_1 + 0x2f8);
    if (fVar12 <= fVar11) {
      fVar11 = fVar12;
    }
    *(float *)(param_1 + 0x3e0) = fVar11;
  }
  else {
    *(float *)(param_1 + 0x3e0) = *(float *)(param_1 + 0x3e0) * 0.8;
  }
  fVar12 = *(float *)(param_1 + 0x3dc);
  fVar11 = (float)atan2f(*(float *)(*param_2 + 8) - *(float *)(param_1 + 0x28),
                         *(float *)*param_2 - *(float *)(param_1 + 0x20));
  fVar12 = fVar12 - fVar11;
  fVar12 = fVar12 - (float)(int)(fVar12 * 0.3183099) * 6.283185;
  if (fVar12 < 0.0) {
    fVar12 = fVar12 + 6.283185;
  }
  if (3.141593 <= fVar12) {
    fVar12 = 6.283185 - fVar12;
  }
  else {
    fVar12 = -fVar12;
  }
  fVar14 = *(float *)(param_1 + 0x3dc);
  fVar11 = (float)FUN_08865d50(param_1);
  fVar14 = fVar14 + fVar12 * fVar11 * 0.8;
  *(float *)(param_1 + 0x3dc) = fVar14;
  if (3.141593 < fVar14) {
    *(float *)(param_1 + 0x3dc) = *(float *)(param_1 + 0x3dc) - 6.283185;
  }
  else {
    if (-3.141593 < *(float *)(param_1 + 0x3dc)) {
      uVar13 = *(undefined4 *)(param_1 + 0x3dc);
      goto LAB_0885d468;
    }
    *(float *)(param_1 + 0x3dc) = *(float *)(param_1 + 0x3dc) + 6.283185;
  }
  uVar13 = *(undefined4 *)(param_1 + 0x3dc);
LAB_0885d468:
  iVar7 = FUN_08862838(uVar13,param_1);
  if (*(char *)(*(int *)(param_1 + 0x4bc) + 1) != '\x01') {
    auVar2 = vsub_t(*param_2,*(undefined (*) [12])(param_1 + 0x20));
    uVar13 = vdot_t(auVar2,auVar2);
    uVar15 = vcmp_s(8,uVar13,auVar2._0_4_);
    vrsq_s(uVar13);
    uVar13 = vcmovt_s(in_V7D,(byte)uVar15 & 1);
    vpfxd(4,4,4,5);
    auVar2 = vscl_t(auVar2,uVar13);
    uVar13 = vdot_t(*pauVar10,*pauVar10);
    uVar15 = vcmp_s(8,uVar13,*(undefined4 *)*pauVar10);
    vrsq_s(uVar13);
    uVar13 = vcmovt_s(in_V7D,(byte)uVar15 & 1);
    vpfxd(4,4,4,5);
    auVar3 = vscl_t(*pauVar10,uVar13);
    fVar14 = (float)vdot_t(auVar3,auVar2);
    uVar13 = vmul_s(ABS(fVar12),in_V7C);
    fVar11 = (float)vcos_s(uVar13);
    fVar12 = *(float *)(param_1 + 0x84) +
             fVar11 * auVar2._4_4_ * *(float *)(param_1 + 0x174) * (fVar14 + 1.0) * 0.6;
    *(float *)(param_1 + 0x84) = fVar12;
    fVar11 = *(float *)(*(int *)(param_1 + 0x4bc) + 0x34) * 0.7;
    if ((fVar11 < fVar12) || (fVar11 = -fVar11, fVar12 < fVar11)) {
      *(float *)(param_1 + 0x84) = fVar11;
    }
    else {
      *(float *)(param_1 + 0x84) = fVar12;
    }
  }
  if (iVar7 < 2) {
    if (-1 < iVar7) {
      iVar9 = 5;
    }
  }
  else if (iVar7 < 3) {
    iVar9 = 7;
  }
  else if (iVar7 < 4) {
    iVar9 = 6;
  }
  FUN_08862608(*(undefined4 *)(param_1 + 0x3dc),0x3e99999a,0,param_1);
  uVar13 = vmul_s(*(undefined4 *)(param_1 + 0x3dc),in_V7C);
  auVar4 = vrot_q(uVar13,1,0,2,0);
  auVar2 = vscl_t(auVar4._0_12_,*(undefined4 *)(param_1 + 0x174));
  *(int *)*pauVar10 = auVar2._0_4_;
  *(int *)(param_1 + 0x88) = auVar2._8_4_;
  *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 1;
  uVar13 = vdot_t(*pauVar10,*pauVar10);
  uVar15 = vcmp_s(8,uVar13,*(undefined4 *)*pauVar10);
  vrsq_s(uVar13);
  uVar13 = vcmovt_s(in_V7D,(byte)uVar15 & 1);
  vpfxd(4,4,4,5);
  auVar2 = vscl_t(*pauVar10,uVar13);
  *(float *)(param_1 + 0x350) = auVar2._4_4_ * -0.9;
  *(undefined4 *)(param_1 + 0x354) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x358) = 0;
  *(undefined4 *)(param_1 + 0x35c) = 0;
  pauVar8 = (undefined (*) [16])(param_1 + 0x350);
  uVar13 = vmul_s(*(undefined4 *)(param_1 + 0x34),in_V7C);
  auVar4 = vmov_q(*pauVar8);
  auVar5 = vrot_q(uVar13,1,0,3,0);
  auVar6 = vrot_q(uVar13,2,0,1,0);
  uVar13 = vdot_t(*(undefined (*) [12])*pauVar8,auVar5._0_12_);
  uVar15 = vdot_t(*(undefined (*) [12])*pauVar8,auVar6._0_12_);
  *(undefined4 *)*pauVar8 = uVar13;
  *(int *)(param_1 + 0x354) = auVar4._4_4_;
  *(undefined4 *)(param_1 + 0x358) = uVar15;
  *(int *)(param_1 + 0x35c) = auVar4._12_4_;
  uVar13 = vdot_t(*(undefined (*) [12])*pauVar8,*(undefined (*) [12])*pauVar8);
  uVar15 = vcmp_s(8,uVar13,*(undefined4 *)*pauVar8);
  vrsq_s(uVar13);
  uVar13 = vcmovt_s(in_V7D,(byte)uVar15 & 1);
  vpfxd(4,4,4,5);
  auVar2 = vscl_t(*(undefined (*) [12])*pauVar8,uVar13);
  *(int *)*pauVar8 = auVar2._0_4_;
  *(int *)(param_1 + 0x354) = auVar2._4_4_;
  *(int *)(param_1 + 0x358) = auVar2._8_4_;
  *(undefined4 *)(param_1 + 0x35c) = in_V7D;
  iVar7 = FUN_088602ec(param_1,1);
  if (iVar7 != 0) {
    iVar9 = iVar9 + 0xd;
  }
  FUN_088608d8(0x3e4ccccd,param_1,iVar9,1,0);
  return;
}

