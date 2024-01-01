#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08871dc8(int param_1)

{
  char cVar1;
  undefined auVar2 [12];
  undefined auVar3 [12];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  int iVar7;
  int iVar8;
  undefined (*pauVar9) [16];
  int iVar10;
  undefined (*pauVar11) [12];
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  float local_d0;
  undefined4 uStack_cc;
  float local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b0;
  float local_ac;
  undefined4 uStack_a8;
  undefined4 local_a0;
  float local_9c;
  undefined4 uStack_98;
  undefined4 local_90;
  float local_8c;
  undefined4 uStack_88;
  float local_64;
  float local_40;
  
  iVar10 = 5;
  pauVar11 = (undefined (*) [12])(param_1 + 0x80);
  if (*(int *)(param_1 + 0x170) != 0) {
    FUN_08854e78(*(undefined4 *)(param_1 + 0x170),0xe,1);
  }
  FUN_0885ff24(param_1,3,0);
  *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 0x1000000;
  iVar7 = FUN_0885fc80(param_1);
  if (iVar7 == 0) {
    fVar16 = *(float *)(param_1 + 0x174);
  }
  else {
    uVar14 = vdot_t(*pauVar11,*pauVar11);
    uVar15 = vcmp_s(8,uVar14,*(undefined4 *)*pauVar11);
    vrsq_s(uVar14);
    uVar14 = vcmovt_s(in_V7D,(byte)uVar15 & 1);
    vpfxd(4,4,4,5);
    auVar3 = vscl_t(*pauVar11,uVar14);
    local_e0 = auVar3._0_4_;
    uStack_dc = auVar3._4_4_;
    uStack_d8 = auVar3._8_4_;
    FUN_08824024(DAT_08ac5c70,0x1d,param_1 + 0x20,&local_e0);
    FUN_08824024(DAT_08ac5c70,0x1d,param_1 + 0x20,&local_e0);
    fVar16 = *(float *)(param_1 + 0x174);
  }
  fVar12 = (float)FUN_08865d74(param_1);
  fVar13 = (float)FUN_089e10c0();
  fVar16 = fVar16 - fVar12 * fVar13;
  fVar12 = (float)FUN_08865cc8(param_1);
  if (fVar12 <= fVar16) {
    fVar12 = fVar16;
  }
  *(float *)(param_1 + 0x174) = fVar12;
  cVar1 = *(char *)(*(int *)(param_1 + 0x4bc) + 2);
  if (cVar1 < '\x01') {
    if (-1 < cVar1) {
      fVar16 = (*(float *)(param_1 + 0x344) + *(float *)(*(int *)(param_1 + 0x4bc) + 0x5c)) -
               *(float *)(param_1 + 0x24);
      if (fVar16 < 0.0) {
        fVar16 = 0.0;
      }
      *(float *)(param_1 + 0x84) =
           *(float *)(param_1 + 0x2f8) + fVar16 * 0.3 + *(float *)(param_1 + 0x3e0);
      goto LAB_088720a0;
    }
    fVar16 = *(float *)(param_1 + 0x3e0);
  }
  else if (cVar1 < '\x02') {
    if (*(float *)(*(int *)(param_1 + 0x4bc) + 0x5c) == 0.0) {
      fVar16 = *(float *)(param_1 + 0x2f8) * 0.7 + *(float *)(param_1 + 0x3e0) * 0.2 +
               *(float *)(param_1 + 0x84);
      *(float *)(param_1 + 0x84) = fVar16;
      if (0.0 < fVar16) {
        fVar16 = 0.0;
      }
      *(float *)(param_1 + 0x84) = fVar16;
    }
    else {
      fVar16 = (*(float *)(param_1 + 0x344) + *(float *)(*(int *)(param_1 + 0x4bc) + 0x5c)) -
               *(float *)(param_1 + 0x24);
      if (fVar16 < 0.0) {
        *(float *)(param_1 + 0x84) =
             *(float *)(param_1 + 0x2f8) * 0.5 + *(float *)(param_1 + 0x3e0) * 0.2 +
             *(float *)(param_1 + 0x84);
      }
      else {
        fVar16 = fVar16 * 0.2;
        if (2.0 < fVar16) {
          fVar16 = 2.0;
        }
        *(float *)(param_1 + 0x84) =
             *(float *)(param_1 + 0x2f8) * 0.5 + fVar16 + *(float *)(param_1 + 0x3e0) * 0.2 +
             *(float *)(param_1 + 0x84);
      }
      *(float *)(param_1 + 0x84) =
           *(float *)(param_1 + 0x84) +
           (*(float *)(param_1 + 0x2f8) * 0.7 - *(float *)(param_1 + 0x84)) * 0.1;
    }
LAB_088720a0:
    fVar16 = *(float *)(param_1 + 0x3e0);
  }
  else {
    fVar16 = *(float *)(param_1 + 0x3e0);
  }
  *(float *)(param_1 + 0x3e0) = fVar16 * 0.8;
  iVar7 = FUN_08860344(param_1);
  if (iVar7 == 0) {
    iVar10 = 5;
    uVar15 = *(undefined4 *)(*(int *)(param_1 + 0x168) + 4);
    uVar14 = FUN_08865d50(param_1);
    fVar16 = (float)FUN_08862608(uVar15,uVar14,0,param_1);
    uVar14 = vmul_s(*(undefined4 *)(param_1 + 0x34),in_V7C);
    auVar4 = vrot_q(uVar14,1,0,2,0);
    auVar3 = vscl_t(auVar4._0_12_,*(undefined4 *)(param_1 + 0x174));
    *(int *)*pauVar11 = auVar3._0_4_;
    *(int *)(param_1 + 0x88) = auVar3._8_4_;
    if (*(char *)(*(int *)(param_1 + 0x4bc) + 2) != '\0') goto LAB_088726a0;
    *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 1;
    fVar16 = *(float *)(param_1 + 0x3e4) + (fVar16 * 0.5 - *(float *)(param_1 + 0x3e4)) * 0.1;
    pauVar9 = (undefined (*) [16])(param_1 + 0x350);
    *(float *)(param_1 + 0x3e4) = fVar16;
    if (0.6 < fVar16) {
      uVar14 = 0x3f19999a;
LAB_088725f8:
      *(undefined4 *)(param_1 + 0x3e4) = uVar14;
    }
    else {
      uVar14 = 0xbf19999a;
      if (fVar16 < -0.6) goto LAB_088725f8;
      *(float *)(param_1 + 0x3e4) = fVar16;
    }
    uVar14 = vdot_t(*pauVar11,*pauVar11);
    uVar15 = vcmp_s(8,uVar14,*(undefined4 *)*pauVar11);
    vrsq_s(uVar14);
    uVar14 = vcmovt_s(in_V7D,(byte)uVar15 & 1);
    vpfxd(4,4,4,5);
    auVar3 = vscl_t(*pauVar11,uVar14);
    local_90 = auVar3._0_4_;
    local_8c = auVar3._4_4_;
    uStack_88 = auVar3._8_4_;
    *(float *)(param_1 + 0x350) = local_8c * -0.9;
    *(undefined4 *)(param_1 + 0x354) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x358) = *(undefined4 *)(param_1 + 0x3e4);
    *(undefined4 *)(param_1 + 0x35c) = 0;
    uVar14 = vmul_s(*(undefined4 *)(param_1 + 0x34),in_V7C);
    auVar4 = vmov_q(*pauVar9);
    auVar5 = vrot_q(uVar14,1,0,3,0);
    auVar6 = vrot_q(uVar14,2,0,1,0);
    uVar14 = vdot_t(*(undefined (*) [12])*pauVar9,auVar5._0_12_);
    uVar15 = vdot_t(*(undefined (*) [12])*pauVar9,auVar6._0_12_);
    *(undefined4 *)*pauVar9 = uVar14;
    *(int *)(param_1 + 0x354) = auVar4._4_4_;
    *(undefined4 *)(param_1 + 0x358) = uVar15;
    *(int *)(param_1 + 0x35c) = auVar4._12_4_;
    uVar14 = vdot_t(*(undefined (*) [12])*pauVar9,*(undefined (*) [12])*pauVar9);
    uVar15 = vcmp_s(8,uVar14,*(undefined4 *)*pauVar9);
    vrsq_s(uVar14);
    uVar14 = vcmovt_s(in_V7D,(byte)uVar15 & 1);
    vpfxd(4,4,4,5);
    auVar3 = vscl_t(*(undefined (*) [12])*pauVar9,uVar14);
    *(int *)*pauVar9 = auVar3._0_4_;
    *(int *)(param_1 + 0x354) = auVar3._4_4_;
    *(int *)(param_1 + 0x358) = auVar3._8_4_;
    *(undefined4 *)(param_1 + 0x35c) = in_V7D;
    goto LAB_088726a0;
  }
  iVar7 = FUN_08860344(param_1);
  fVar16 = 1.0;
  pauVar9 = (undefined (*) [16])(param_1 + 0x350);
  if ((*(uint *)(param_1 + 0x16c) & 1) == 0) {
    local_40 = 1.0;
    fVar12 = *(float *)(param_1 + 0x3dc);
    local_d0 = *(float *)*(undefined (*) [12])(iVar7 + 0x20);
    uStack_cc = *(undefined4 *)(iVar7 + 0x24);
    local_c8 = *(float *)(iVar7 + 0x28);
    uStack_c4 = *(undefined4 *)(iVar7 + 0x2c);
    fVar16 = (float)atan2f(local_c8 - *(float *)(param_1 + 0x28),
                           local_d0 - *(float *)(param_1 + 0x20));
    fVar12 = fVar12 - fVar16;
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
    fVar17 = *(float *)(param_1 + 0x3dc);
    fVar13 = (float)FUN_08865d50(param_1);
    fVar16 = local_40;
    fVar17 = fVar17 + fVar12 * fVar13 * 0.8;
    *(float *)(param_1 + 0x3dc) = fVar17;
    if (3.141593 < fVar17) {
      *(float *)(param_1 + 0x3dc) = *(float *)(param_1 + 0x3dc) - 6.283185;
LAB_088722c0:
      uVar14 = *(undefined4 *)(param_1 + 0x3dc);
    }
    else {
      if (*(float *)(param_1 + 0x3dc) <= -3.141593) {
        *(float *)(param_1 + 0x3dc) = *(float *)(param_1 + 0x3dc) + 6.283185;
        goto LAB_088722c0;
      }
      uVar14 = *(undefined4 *)(param_1 + 0x3dc);
    }
    iVar8 = FUN_08862838(uVar14,param_1);
    if (*(char *)(*(int *)(param_1 + 0x4bc) + 1) != '\x01') {
      auVar3 = vsub_t(*(undefined (*) [12])(iVar7 + 0x20),*(undefined (*) [12])(param_1 + 0x20));
      uVar14 = vdot_t(auVar3,auVar3);
      uVar15 = vcmp_s(8,uVar14,auVar3._0_4_);
      vrsq_s(uVar14);
      uVar14 = vcmovt_s(in_V7D,(byte)uVar15 & 1);
      vpfxd(4,4,4,5);
      auVar3 = vscl_t(auVar3,uVar14);
      local_b0 = auVar3._0_4_;
      local_ac = auVar3._4_4_;
      uStack_a8 = auVar3._8_4_;
      uVar14 = vdot_t(*pauVar11,*pauVar11);
      uVar15 = vcmp_s(8,uVar14,*(undefined4 *)*pauVar11);
      vrsq_s(uVar14);
      uVar14 = vcmovt_s(in_V7D,(byte)uVar15 & 1);
      vpfxd(4,4,4,5);
      auVar2 = vscl_t(*pauVar11,uVar14);
      local_c0 = auVar2._0_4_;
      uStack_bc = auVar2._4_4_;
      uStack_b8 = auVar2._8_4_;
      fVar13 = (float)vdot_t(auVar2,auVar3);
      uVar14 = vmul_s(ABS(fVar12),in_V7C);
      local_64 = (float)vcos_s(uVar14);
      fVar13 = *(float *)(param_1 + 0x84) +
               local_64 * local_ac * *(float *)(param_1 + 0x174) * (fVar13 + fVar16) * 0.6;
      *(float *)(param_1 + 0x84) = fVar13;
      fVar12 = *(float *)(*(int *)(param_1 + 0x4bc) + 0x34) * 0.7;
      if ((fVar12 < fVar13) || (fVar12 = -fVar12, fVar13 < fVar12)) {
        *(float *)(param_1 + 0x84) = fVar12;
      }
      else {
        *(float *)(param_1 + 0x84) = fVar13;
      }
    }
  }
  else {
    fVar12 = *(float *)(param_1 + 0x3dc) - *(float *)(*(int *)(param_1 + 0x168) + 4);
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
    fVar17 = *(float *)(param_1 + 0x3dc);
    fVar13 = (float)FUN_08865d50(param_1);
    fVar17 = fVar17 + fVar12 * fVar13;
    *(float *)(param_1 + 0x3dc) = fVar17;
    if (3.141593 < fVar17) {
      *(float *)(param_1 + 0x3dc) = *(float *)(param_1 + 0x3dc) - 6.283185;
    }
    else if (*(float *)(param_1 + 0x3dc) <= -3.141593) {
      *(float *)(param_1 + 0x3dc) = *(float *)(param_1 + 0x3dc) + 6.283185;
    }
    iVar8 = FUN_088629cc(param_1);
  }
  if (iVar8 < 2) {
    if (-1 < iVar8) {
      iVar10 = 5;
      goto LAB_08872424;
    }
    uVar14 = *(undefined4 *)(param_1 + 0x3dc);
  }
  else {
    if (iVar8 < 3) {
      iVar10 = 7;
    }
    else {
      if (3 < iVar8) {
        uVar14 = *(undefined4 *)(param_1 + 0x3dc);
        goto LAB_08872428;
      }
      iVar10 = 6;
    }
LAB_08872424:
    uVar14 = *(undefined4 *)(param_1 + 0x3dc);
  }
LAB_08872428:
  FUN_08862608(uVar14,0x3e99999a,0,param_1);
  uVar14 = vmul_s(*(undefined4 *)(param_1 + 0x3dc),in_V7C);
  auVar4 = vrot_q(uVar14,1,0,2,0);
  auVar3 = vscl_t(auVar4._0_12_,*(undefined4 *)(param_1 + 0x174));
  *(int *)*pauVar11 = auVar3._0_4_;
  *(int *)(param_1 + 0x88) = auVar3._8_4_;
  *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 1;
  uVar14 = vdot_t(*pauVar11,*pauVar11);
  uVar15 = vcmp_s(8,uVar14,*(undefined4 *)*pauVar11);
  vrsq_s(uVar14);
  uVar14 = vcmovt_s(in_V7D,(byte)uVar15 & 1);
  vpfxd(4,4,4,5);
  auVar3 = vscl_t(*pauVar11,uVar14);
  local_a0 = auVar3._0_4_;
  local_9c = auVar3._4_4_;
  uStack_98 = auVar3._8_4_;
  *(float *)(param_1 + 0x350) = local_9c * -0.9;
  *(float *)(param_1 + 0x354) = fVar16;
  *(undefined4 *)(param_1 + 0x358) = 0;
  *(undefined4 *)(param_1 + 0x35c) = 0;
  uVar14 = vmul_s(*(undefined4 *)(param_1 + 0x34),in_V7C);
  auVar4 = vmov_q(*pauVar9);
  auVar5 = vrot_q(uVar14,1,0,3,0);
  auVar6 = vrot_q(uVar14,2,0,1,0);
  uVar14 = vdot_t(*(undefined (*) [12])*pauVar9,auVar5._0_12_);
  uVar15 = vdot_t(*(undefined (*) [12])*pauVar9,auVar6._0_12_);
  *(undefined4 *)*pauVar9 = uVar14;
  *(int *)(param_1 + 0x354) = auVar4._4_4_;
  *(undefined4 *)(param_1 + 0x358) = uVar15;
  *(int *)(param_1 + 0x35c) = auVar4._12_4_;
  uVar14 = vdot_t(*(undefined (*) [12])*pauVar9,*(undefined (*) [12])*pauVar9);
  uVar15 = vcmp_s(8,uVar14,*(undefined4 *)*pauVar9);
  vrsq_s(uVar14);
  uVar14 = vcmovt_s(in_V7D,(byte)uVar15 & 1);
  vpfxd(4,4,4,5);
  auVar3 = vscl_t(*(undefined (*) [12])*pauVar9,uVar14);
  *(int *)*pauVar9 = auVar3._0_4_;
  *(int *)(param_1 + 0x354) = auVar3._4_4_;
  *(int *)(param_1 + 0x358) = auVar3._8_4_;
  *(undefined4 *)(param_1 + 0x35c) = in_V7D;
LAB_088726a0:
  iVar7 = FUN_088602ec(param_1,1);
  if (iVar7 != 0) {
    iVar10 = iVar10 + 0xd;
  }
  return iVar10;
}

