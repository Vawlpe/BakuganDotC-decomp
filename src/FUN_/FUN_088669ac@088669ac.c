#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088669ac(int param_1)

{
  char cVar1;
  undefined auVar2 [12];
  uint uVar3;
  undefined auVar4 [12];
  undefined auVar5 [12];
  undefined auVar7 [12];
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
  int iVar21;
  undefined4 *puVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 in_V7D;
  undefined4 uVar26;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  float local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  float local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  float local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined auVar6 [12];
  undefined auVar8 [12];
  
  fVar23 = (float)FUN_0889d654();
  fVar23 = *(float *)(param_1 + 0x344) + fVar23;
  iVar21 = FUN_0885fd08(param_1);
  if (iVar21 == 0) {
    cVar1 = *(char *)(param_1 + 0x390);
LAB_08866c1c:
    if (cVar1 == '\0') {
      *(undefined *)(param_1 + 0x390) = 0;
    }
    else {
      if (10.0 < *(float *)(param_1 + 0x84)) {
        local_e0 = *(undefined4 *)(param_1 + 0x340);
        uStack_d8 = *(undefined4 *)(param_1 + 0x348);
        uStack_d4 = *(undefined4 *)(param_1 + 0x34c);
        local_dc = fVar23;
        FUN_08823f5c(DAT_08ac5c70,0x2d);
      }
      *(undefined *)(param_1 + 0x390) = 0;
    }
  }
  else {
    if (fVar23 <= *(float *)(param_1 + 0x24)) {
      cVar1 = *(char *)(param_1 + 0x390);
      goto LAB_08866c1c;
    }
    uVar3 = *(uint *)(param_1 + 0x80);
    uVar25 = vzero_s();
    auVar2._8_4_ = *(undefined4 *)(param_1 + 0x88);
    auVar2._4_4_ = uVar25;
    auVar2._0_4_ = uVar3;
    auVar4._8_4_ = *(undefined4 *)(param_1 + 0x88);
    auVar4._4_4_ = uVar25;
    auVar4._0_4_ = uVar3;
    uVar25 = vdot_t(auVar2,auVar4);
    fVar24 = (float)vsqrt_s(uVar25);
    fVar24 = (180.0 - fVar24 * 6.5) * 0.1;
    if (fVar24 < 3.0) {
      iVar21 = 3;
    }
    else if (15.0 < fVar24) {
      iVar21 = 0xf;
    }
    else {
      iVar21 = (int)fVar24;
    }
    uStack_e4 = *(undefined4 *)(param_1 + 0x34c);
    auVar9._4_4_ = 0;
    auVar9._0_4_ = *(uint *)(param_1 + 0x80);
    auVar9._8_4_ = *(undefined4 *)(param_1 + 0x88);
    auVar2 = vscl_t(auVar9,0x40000000);
    local_100 = auVar2._0_4_;
    local_fc = auVar2._4_4_;
    uStack_f8 = auVar2._8_4_;
    auVar14._4_4_ = fVar23;
    auVar14._0_4_ = *(undefined4 *)(param_1 + 0x340);
    auVar14._8_4_ = *(undefined4 *)(param_1 + 0x348);
    auVar2 = vadd_t(auVar14,auVar2);
    local_f0 = auVar2._0_4_;
    local_ec = auVar2._4_4_;
    uStack_e8 = auVar2._8_4_;
    if (*(char *)(param_1 + 0x390) == '\0') {
      FUN_08823f5c(DAT_08ac5c70,0x29,&local_f0);
      cVar1 = *(char *)(param_1 + 0x390);
    }
    else {
      if (*(int *)(param_1 + 0x414) % iVar21 == 0) {
        FUN_08823f5c(DAT_08ac5c70,0x2a,&local_f0);
      }
      cVar1 = *(char *)(param_1 + 0x390);
    }
    if (((cVar1 == '\0') && (*(float *)(param_1 + 0x84) < -8.0)) && (8 < *(int *)(param_1 + 0x184)))
    {
      FUN_08823f5c(DAT_08ac5c70,0x2c,&local_f0);
      FUN_08862a84(param_1,10,0,0);
    }
    if (iVar21 < 10) {
      if (*(int *)(param_1 + 0x414) % iVar21 != 0) {
        cVar1 = *(char *)(param_1 + 0x390);
        goto LAB_08866b98;
      }
LAB_08866ba0:
      auVar10._4_4_ = local_fc;
      auVar10._0_4_ = local_100;
      auVar10._8_4_ = uStack_f8;
      auVar2 = vscl_t(auVar10,0x3dcccccd);
      local_100 = auVar2._0_4_;
      local_fc = auVar2._4_4_;
      uStack_f8 = auVar2._8_4_;
      FUN_08824024(DAT_08ac5c70,0x2b,&local_f0,&local_100);
    }
    else {
      cVar1 = *(char *)(param_1 + 0x390);
LAB_08866b98:
      if (cVar1 == '\0') goto LAB_08866ba0;
    }
    if (iVar21 < 10) {
      auVar13._4_4_ = local_fc;
      auVar13._0_4_ = local_100;
      auVar13._8_4_ = uStack_f8;
      auVar12._4_4_ = local_fc;
      auVar12._0_4_ = local_100;
      auVar12._8_4_ = uStack_f8;
      auVar11._4_4_ = local_fc;
      auVar11._0_4_ = local_100;
      auVar11._8_4_ = uStack_f8;
      uVar25 = vdot_t(auVar11,auVar12);
      uVar26 = vcmp_s(8,uVar25,local_100);
      vrsq_s(uVar25);
      uVar25 = vcmovt_s(in_V7D,(byte)uVar26 & 1);
      vpfxd(4,4,4,5);
      auVar2 = vscl_t(auVar13,uVar25);
      local_100 = auVar2._0_4_;
      local_fc = auVar2._4_4_;
      uStack_f8 = auVar2._8_4_;
      FUN_08824024(DAT_08ac5c70,0x2e,&local_f0,&local_100);
    }
    *(undefined *)(param_1 + 0x390) = 1;
  }
  iVar21 = FUN_0885fd54(param_1);
  if (iVar21 == 0) {
    cVar1 = *(char *)(param_1 + 0x391);
LAB_08866e14:
    if (cVar1 == '\0') {
      *(undefined *)(param_1 + 0x391) = 0;
    }
    else {
      if (10.0 < *(float *)(param_1 + 0x84)) {
        local_b0 = *(undefined4 *)(param_1 + 0x340);
        uStack_a8 = *(undefined4 *)(param_1 + 0x348);
        uStack_a4 = *(undefined4 *)(param_1 + 0x34c);
        local_ac = fVar23;
        FUN_08823f5c(DAT_08ac5c70,0x36,&local_b0);
        FUN_08823f5c(DAT_08ac5c70,6,&local_b0);
      }
      *(undefined *)(param_1 + 0x391) = 0;
    }
  }
  else {
    if (fVar23 <= *(float *)(param_1 + 0x24)) {
      cVar1 = *(char *)(param_1 + 0x391);
      goto LAB_08866e14;
    }
    uVar3 = *(uint *)(param_1 + 0x80);
    uVar25 = vzero_s();
    auVar5._8_4_ = *(undefined4 *)(param_1 + 0x88);
    auVar5._4_4_ = uVar25;
    auVar5._0_4_ = uVar3;
    auVar6._8_4_ = *(undefined4 *)(param_1 + 0x88);
    auVar6._4_4_ = uVar25;
    auVar6._0_4_ = uVar3;
    uVar25 = vdot_t(auVar5,auVar6);
    fVar24 = (float)vsqrt_s(uVar25);
    fVar24 = (180.0 - fVar24 * 6.5) * 0.1;
    if (fVar24 < 3.0) {
      iVar21 = 3;
    }
    else if (15.0 < fVar24) {
      iVar21 = 0xf;
    }
    else {
      iVar21 = (int)fVar24;
    }
    uStack_b4 = *(undefined4 *)(param_1 + 0x34c);
    auVar15._4_4_ = 0;
    auVar15._0_4_ = *(uint *)(param_1 + 0x80);
    auVar15._8_4_ = *(undefined4 *)(param_1 + 0x88);
    auVar2 = vscl_t(auVar15,0x40000000);
    local_d0 = auVar2._0_4_;
    local_cc = auVar2._4_4_;
    uStack_c8 = auVar2._8_4_;
    auVar17._4_4_ = fVar23;
    auVar17._0_4_ = *(undefined4 *)(param_1 + 0x340);
    auVar17._8_4_ = *(undefined4 *)(param_1 + 0x348);
    auVar2 = vadd_t(auVar17,auVar2);
    local_c0 = auVar2._0_4_;
    local_bc = auVar2._4_4_;
    uStack_b8 = auVar2._8_4_;
    if (((*(char *)(param_1 + 0x391) == '\0') && (*(float *)(param_1 + 0x84) < -8.0)) &&
       (8 < *(int *)(param_1 + 0x184))) {
      FUN_08823f5c(DAT_08ac5c70,0x35,&local_c0);
    }
    if (iVar21 < 10) {
      if (*(int *)(param_1 + 0x414) % iVar21 != 0) {
        cVar1 = *(char *)(param_1 + 0x391);
        goto LAB_08866dd0;
      }
LAB_08866dd8:
      auVar16._4_4_ = local_cc;
      auVar16._0_4_ = local_d0;
      auVar16._8_4_ = uStack_c8;
      auVar2 = vscl_t(auVar16,0x3dcccccd);
      local_d0 = auVar2._0_4_;
      local_cc = auVar2._4_4_;
      uStack_c8 = auVar2._8_4_;
      FUN_08824024(DAT_08ac5c70,0x34,&local_c0,&local_d0);
    }
    else {
      cVar1 = *(char *)(param_1 + 0x391);
LAB_08866dd0:
      if (cVar1 == '\0') goto LAB_08866dd8;
    }
    *(undefined *)(param_1 + 0x391) = 1;
  }
  iVar21 = FUN_0885fd90(param_1);
  if (iVar21 == 0) {
    cVar1 = *(char *)(param_1 + 0x392);
LAB_08867114:
    if (cVar1 == '\0') {
      *(undefined *)(param_1 + 0x392) = 0;
    }
    else {
      if (10.0 < *(float *)(param_1 + 0x84)) {
        local_80 = *(undefined4 *)(param_1 + 0x340);
        uStack_78 = *(undefined4 *)(param_1 + 0x348);
        uStack_74 = *(undefined4 *)(param_1 + 0x34c);
        local_7c = fVar23;
        FUN_08823f5c(DAT_08ac5c70,0x31);
      }
      *(undefined *)(param_1 + 0x392) = 0;
    }
    return;
  }
  if (fVar23 <= *(float *)(param_1 + 0x24)) {
    cVar1 = *(char *)(param_1 + 0x392);
    goto LAB_08867114;
  }
  uVar3 = *(uint *)(param_1 + 0x80);
  uVar25 = vzero_s();
  auVar7._8_4_ = *(undefined4 *)(param_1 + 0x88);
  auVar7._4_4_ = uVar25;
  auVar7._0_4_ = uVar3;
  auVar8._8_4_ = *(undefined4 *)(param_1 + 0x88);
  auVar8._4_4_ = uVar25;
  auVar8._0_4_ = uVar3;
  uVar25 = vdot_t(auVar7,auVar8);
  fVar24 = (float)vsqrt_s(uVar25);
  fVar24 = (180.0 - fVar24 * 6.5) * 0.1;
  if (fVar24 < 3.0) {
    iVar21 = 3;
  }
  else if (15.0 < fVar24) {
    iVar21 = 0xf;
  }
  else {
    iVar21 = (int)fVar24;
  }
  uStack_84 = *(undefined4 *)(param_1 + 0x34c);
  auVar18._4_4_ = 0;
  auVar18._0_4_ = *(uint *)(param_1 + 0x80);
  auVar18._8_4_ = *(undefined4 *)(param_1 + 0x88);
  auVar2 = vscl_t(auVar18,0x40000000);
  local_a0 = auVar2._0_4_;
  local_9c = auVar2._4_4_;
  uStack_98 = auVar2._8_4_;
  auVar20._4_4_ = fVar23;
  auVar20._0_4_ = *(undefined4 *)(param_1 + 0x340);
  auVar20._8_4_ = *(undefined4 *)(param_1 + 0x348);
  auVar2 = vadd_t(auVar20,auVar2);
  local_90 = auVar2._0_4_;
  local_8c = auVar2._4_4_;
  uStack_88 = auVar2._8_4_;
  if (*(char *)(param_1 + 0x392) == '\0') {
    FUN_08823f5c(DAT_08ac5c70,0x32,&local_90);
    cVar1 = *(char *)(param_1 + 0x392);
  }
  else {
    if (*(int *)(param_1 + 0x414) % iVar21 == 0) {
      FUN_08823f5c(DAT_08ac5c70,0x33,&local_90);
    }
    cVar1 = *(char *)(param_1 + 0x392);
  }
  if (((cVar1 == '\0') && (*(float *)(param_1 + 0x84) < -8.0)) && (8 < *(int *)(param_1 + 0x184))) {
    FUN_08823f5c(DAT_08ac5c70,0x30,&local_90);
    FUN_08862a84(param_1,10,0,0);
  }
  if (iVar21 < 10) {
    if (*(int *)(param_1 + 0x414) % iVar21 != 0) {
      cVar1 = *(char *)(param_1 + 0x392);
      goto LAB_08867038;
    }
  }
  else {
    cVar1 = *(char *)(param_1 + 0x392);
LAB_08867038:
    if (cVar1 != '\0') {
      iVar21 = *(int *)(param_1 + 0x168);
      goto LAB_08867074;
    }
  }
  auVar19._4_4_ = local_9c;
  auVar19._0_4_ = local_a0;
  auVar19._8_4_ = uStack_98;
  auVar2 = vscl_t(auVar19,0x3dcccccd);
  local_a0 = auVar2._0_4_;
  local_9c = auVar2._4_4_;
  uStack_98 = auVar2._8_4_;
  FUN_08824024(DAT_08ac5c70,0x2f,&local_90,&local_a0);
  iVar21 = *(int *)(param_1 + 0x168);
LAB_08867074:
  if ((((*(char *)(iVar21 + 0xc) == '\0') &&
       (iVar21 = (**(code **)(*(int *)(param_1 + 0x14) + 0xa4))
                           (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0xa0)), iVar21 != 0)) &&
      (*(int *)(param_1 + 8) != 0xf)) && ((*(uint *)(param_1 + 0x414) & 3) == 0)) {
    uVar25 = 3;
    if ((*(uint *)(param_1 + 0x414) & 4) != 0) {
      uVar25 = 2;
    }
    puVar22 = (undefined4 *)FUN_088606ac(param_1,uVar25,0);
    local_90 = *puVar22;
    uStack_88 = puVar22[2];
    uStack_84 = puVar22[3];
    local_8c = *(undefined4 *)(param_1 + 0x344);
    FUN_08823f5c(DAT_08ac5c70,0x107,&local_90);
  }
  *(undefined *)(param_1 + 0x392) = 1;
  return;
}

