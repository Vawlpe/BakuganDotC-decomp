#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined FUN_088dd31c(int param_1,undefined (*param_2) [12])

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined4 uVar5;
  undefined auVar6 [12];
  undefined auVar7 [12];
  undefined auVar8 [12];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [12];
  undefined auVar12 [12];
  undefined auVar13 [12];
  undefined auVar14 [12];
  undefined auVar15 [12];
  undefined auVar16 [12];
  undefined auVar17 [12];
  undefined auVar18 [12];
  undefined auVar19 [12];
  undefined auVar20 [16];
  undefined auVar21 [12];
  undefined auVar22 [12];
  undefined auVar23 [12];
  undefined auVar24 [12];
  undefined auVar25 [12];
  undefined auVar26 [12];
  undefined auVar27 [12];
  undefined auVar28 [12];
  undefined auVar29 [12];
  undefined auVar30 [12];
  undefined auVar31 [12];
  undefined auVar32 [12];
  undefined auVar33 [12];
  undefined auVar34 [12];
  undefined auVar35 [16];
  undefined auVar36 [16];
  undefined auVar37 [12];
  undefined auVar38 [16];
  undefined auVar39 [12];
  undefined auVar40 [12];
  undefined auVar41 [12];
  undefined auVar42 [12];
  undefined auVar43 [16];
  undefined auVar44 [16];
  undefined auVar45 [12];
  undefined auVar46 [12];
  int iVar47;
  bool bVar48;
  uint uVar49;
  undefined (*pauVar50) [12];
  undefined (*pauVar51) [12];
  uint uVar52;
  float fVar53;
  undefined4 uVar54;
  undefined4 in_V72;
  undefined4 in_V73;
  undefined4 in_V76;
  undefined4 in_V77;
  undefined4 in_V7A;
  undefined4 in_V7B;
  float in_V7D;
  undefined4 in_V7E;
  undefined4 in_V7F;
  undefined4 uVar55;
  float local_290;
  float local_28c;
  float local_288;
  float fStack_284;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  float local_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float local_250;
  float fStack_24c;
  float fStack_248;
  float local_240;
  float fStack_23c;
  float fStack_238;
  float local_230;
  float fStack_22c;
  float fStack_228;
  uint local_220;
  uint local_21c;
  uint local_218;
  float fStack_214;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  float fStack_204;
  uint local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  float local_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  float fStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined (*local_58) [12];
  undefined (*local_54) [12];
  uint local_50;
  undefined (*local_4c) [12];
  uint local_48;
  undefined local_44;
  uint local_40;
  
  if (4 < DAT_08abf61c) {
    return 1;
  }
  DAT_08abf61c = DAT_08abf61c + 1;
  local_44 = 0;
  local_48 = (uint)((*(uint *)(param_1 + 0x144) & 0x40000000) != 0);
  *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 0x40000000;
  fStack_284 = *(float *)param_2[1];
  pauVar51 = (undefined (*) [12])(param_1 + 0x20);
  local_280 = *(undefined4 *)*pauVar51;
  uStack_27c = *(undefined4 *)(param_1 + 0x24);
  uStack_278 = *(undefined4 *)(param_1 + 0x28);
  uStack_274 = *(undefined4 *)(param_1 + 0x2c);
  pauVar50 = (undefined (*) [12])(param_1 + 0x270);
  auVar1 = vadd_t(*param_2,*pauVar50);
  local_290 = auVar1._0_4_;
  local_288 = auVar1._8_4_;
  *(float *)(*param_2 + 4) = *(float *)(*param_2 + 4) + *(float *)(param_1 + 0x274);
  local_28c = 0.0;
  local_58 = (undefined (*) [12])(param_1 + 0x280);
  if (1e-05 <= *(float *)(param_1 + 0x260) * *(float *)(param_1 + 0x260) +
               *(float *)(param_1 + 0x268) * *(float *)(param_1 + 0x268)) {
    bVar48 = false;
  }
  else {
    bVar48 = false;
    if (0.0001 < *(float *)(param_1 + 0x264) * *(float *)(param_1 + 0x264)) {
      bVar48 = true;
    }
  }
  local_270 = in_V73;
  uStack_26c = in_V77;
  uStack_268 = in_V7B;
  uStack_264 = in_V7F;
  if (!bVar48) {
    uVar52 = *(uint *)(param_1 + 0x268);
    fVar53 = -*(float *)(param_1 + 0x260);
    auVar45._4_4_ = 0;
    auVar45._0_4_ = uVar52;
    auVar45._8_4_ = fVar53;
    auVar2._4_4_ = 0;
    auVar2._0_4_ = uVar52;
    auVar2._8_4_ = fVar53;
    auVar1._4_4_ = 0;
    auVar1._0_4_ = uVar52;
    auVar1._8_4_ = fVar53;
    uVar54 = vdot_t(auVar1,auVar2);
    uVar55 = vcmp_s(8,uVar54,uVar52);
    vrsq_s(uVar54);
    uVar54 = vcmovt_s(in_V7D,(byte)uVar55 & 1);
    vpfxd(4,4,4,5);
    auVar1 = vscl_t(auVar45,uVar54);
    local_150 = auVar1._0_4_;
    local_14c = auVar1._4_4_;
    local_148 = auVar1._8_4_;
    local_40 = local_48;
    uVar54 = FUN_08a05468(*(undefined4 *)(param_1 + 0x264));
    auVar46._4_4_ = local_14c;
    auVar46._0_4_ = local_150;
    auVar46._8_4_ = local_148;
    uVar55 = vcst_s(6);
    uVar54 = vmul_s(uVar55,uVar54);
    uStack_264 = vcos_s(uVar54);
    uVar54 = vsin_s(uVar54);
    auVar1 = vscl_t(auVar46,uVar54);
    local_270 = auVar1._0_4_;
    uStack_26c = auVar1._4_4_;
    uStack_268 = auVar1._8_4_;
    local_48 = local_40;
  }
  if (local_48 == 0) {
    auVar20._4_4_ = uStack_26c;
    auVar20._0_4_ = local_270;
    auVar20._8_4_ = uStack_268;
    auVar20._12_4_ = uStack_264;
    auVar4._4_4_ = uStack_26c;
    auVar4._0_4_ = local_270;
    auVar4._8_4_ = uStack_268;
    auVar4._12_4_ = uStack_264;
    vpfxs(0x10,0x11,0x12,3);
    auVar4 = vmov_q(auVar4);
    uVar54 = vmov_s(in_V73);
    auVar3._12_4_ = uVar54;
    auVar3._8_4_ = local_288;
    auVar3._4_4_ = local_28c;
    auVar3._0_4_ = local_290;
    auVar3 = vqmul_q(auVar20,auVar3);
    auVar3 = vqmul_q(auVar3,auVar4);
    local_290 = auVar3._0_4_;
    local_28c = auVar3._4_4_;
    local_288 = auVar3._8_4_;
    fStack_284 = auVar3._12_4_;
    local_260 = local_290;
    fStack_25c = local_28c;
    fStack_258 = local_288;
    fStack_254 = fStack_284;
  }
  *(undefined4 *)*pauVar50 = in_V72;
  *(undefined4 *)(param_1 + 0x274) = in_V76;
  *(undefined4 *)(param_1 + 0x278) = in_V7A;
  *(undefined4 *)(param_1 + 0x27c) = in_V7E;
  auVar15._4_4_ = local_28c;
  auVar15._0_4_ = local_290;
  auVar15._8_4_ = local_288;
  auVar14._4_4_ = local_28c;
  auVar14._0_4_ = local_290;
  auVar14._8_4_ = local_288;
  uVar54 = vdot_t(auVar14,auVar15);
  fVar53 = (float)vsqrt_s(uVar54);
  local_54 = pauVar50;
  if (*(float *)(param_1 + 0x1c0) < fVar53 * 1.05) {
    auVar16._4_4_ = local_28c;
    auVar16._0_4_ = local_290;
    auVar16._8_4_ = local_288;
    auVar1 = vscl_t(auVar16,0x3f000000);
    local_290 = auVar1._0_4_;
    local_28c = auVar1._4_4_;
    local_288 = auVar1._8_4_;
    fStack_284 = in_V7D;
    local_250 = local_290;
    fStack_24c = local_28c;
    fStack_248 = local_288;
    FUN_088dd31c(param_1);
    if (*(float *)(param_1 + 0x1c0) < fVar53 * 0.5 * 1.05) {
      auVar17._4_4_ = local_28c;
      auVar17._0_4_ = local_290;
      auVar17._8_4_ = local_288;
      auVar1 = vscl_t(auVar17,0x3f000000);
      local_290 = auVar1._0_4_;
      local_28c = auVar1._4_4_;
      local_288 = auVar1._8_4_;
      fStack_284 = in_V7D;
      local_240 = local_290;
      fStack_23c = local_28c;
      fStack_238 = local_288;
      FUN_088dd31c(param_1);
      if (*(float *)(param_1 + 0x1c0) < fVar53 * 0.5 * 0.5 * 1.05) {
        auVar18._4_4_ = local_28c;
        auVar18._0_4_ = local_290;
        auVar18._8_4_ = local_288;
        auVar1 = vscl_t(auVar18,0x3f000000);
        local_290 = auVar1._0_4_;
        local_28c = auVar1._4_4_;
        local_288 = auVar1._8_4_;
        fStack_284 = in_V7D;
        local_230 = local_290;
        fStack_22c = local_28c;
        fStack_228 = local_288;
        FUN_088dd31c(param_1);
      }
    }
  }
  local_4c = (undefined (*) [12])&DAT_08b00690;
  uVar54 = *(undefined4 *)(param_1 + 0x2c);
  auVar19._4_4_ = local_28c;
  auVar19._0_4_ = local_290;
  auVar19._8_4_ = local_288;
  auVar1 = vadd_t(*pauVar51,auVar19);
  *(int *)*pauVar51 = auVar1._0_4_;
  *(int *)(param_1 + 0x24) = auVar1._4_4_;
  *(int *)(param_1 + 0x28) = auVar1._8_4_;
  *(undefined4 *)(param_1 + 0x2c) = uVar54;
  DAT_08b00690 = local_290;
  DAT_08b00694 = local_28c;
  DAT_08b00698 = local_288;
  DAT_08b0069c = fStack_284;
  FUN_088dcb84(param_1,&local_290);
  if (*(char *)(param_1 + 0x14c) == '\0') {
    iVar47 = (**(code **)(*(int *)(param_1 + 0x14) + 0x9c))
                       (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x98));
    if (iVar47 == 0) {
      DAT_08b00550 = *(float *)(param_1 + 0x1c0);
    }
    else {
      DAT_08b00550 = *(float *)(param_1 + 0x1c0) * 0.8;
    }
  }
  else if (*(int *)(DAT_08ac58c4 + 4) == 8) {
    DAT_08b00550 = *(float *)(param_1 + 0x1c0) * 0.8;
  }
  else {
    DAT_08b00550 = *(float *)(param_1 + 0x1c0);
  }
  bVar48 = true;
  *(undefined4 *)*local_58 = in_V72;
  *(undefined4 *)(*local_58 + 4) = in_V76;
  *(undefined4 *)(*local_58 + 8) = in_V7A;
  *(undefined4 *)local_58[1] = in_V7E;
  if ((local_290 != 0.0) || (local_288 != 0.0)) {
    uVar54 = *(undefined4 *)(param_1 + 0x24);
    uVar55 = *(undefined4 *)(param_1 + 0x28);
    uVar5 = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)*local_58 = *(undefined4 *)*pauVar51;
    *(undefined4 *)(*local_58 + 4) = uVar54;
    *(undefined4 *)(*local_58 + 8) = uVar55;
    *(undefined4 *)local_58[1] = uVar5;
    bVar48 = false;
    DAT_08b00540 = *(undefined4 *)*pauVar51;
    DAT_08b00548 = *(undefined4 *)(param_1 + 0x28);
    DAT_08b0054c = *(undefined4 *)(param_1 + 0x2c);
    DAT_08b00544 = *(float *)(param_1 + 0x24) + DAT_08b00550;
    (**(code **)(DAT_08b00534 + 0x4c))((int)&DAT_08b00530 + (int)*(short *)(DAT_08b00534 + 0x48));
    iVar47 = (**(code **)(*(int *)(param_1 + 0x14) + 0x9c))
                       (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x98));
    if (iVar47 != 0) {
      DAT_08b00550 = *(float *)(param_1 + 0x1c0);
    }
    iVar47 = FUN_0881a83c(*(undefined4 *)(param_1 + 0x158),&DAT_08b00560,1);
    if (iVar47 != 0) {
      bVar48 = true;
      if (*(int *)(iVar47 + 0x134) == 8) {
        *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 0x200;
      }
      FUN_088dd0cc(&DAT_08b00530,pauVar51,&local_290,0);
      DAT_08b00540 = *(undefined4 *)*pauVar51;
      DAT_08b00548 = *(undefined4 *)(param_1 + 0x28);
      DAT_08b0054c = *(undefined4 *)(param_1 + 0x2c);
      DAT_08b00544 = *(float *)(param_1 + 0x24) + DAT_08b00550;
      (**(code **)(DAT_08b00534 + 0x4c))((int)&DAT_08b00530 + (int)*(short *)(DAT_08b00534 + 0x48));
      iVar47 = FUN_0881a83c(*(undefined4 *)(param_1 + 0x158),&DAT_08b00560,1);
      if (iVar47 != 0) {
        if (ABS(DAT_08b00294) < 0.1) {
          *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 0x20000;
        }
        FUN_088dd0cc(&DAT_08b00530,pauVar51,&local_290,0);
        DAT_08b00540 = *(undefined4 *)*pauVar51;
        DAT_08b00548 = *(undefined4 *)(param_1 + 0x28);
        DAT_08b0054c = *(undefined4 *)(param_1 + 0x2c);
        DAT_08b00544 = *(float *)(param_1 + 0x24) + DAT_08b00550;
        (**(code **)(DAT_08b00534 + 0x4c))
                  ((int)&DAT_08b00530 + (int)*(short *)(DAT_08b00534 + 0x48));
        iVar47 = FUN_0881a83c(*(undefined4 *)(param_1 + 0x158),&DAT_08b00560,1);
        if (iVar47 != 0) {
          *(undefined4 *)*pauVar51 = local_280;
          *(undefined4 *)(param_1 + 0x24) = uStack_27c;
          *(undefined4 *)(param_1 + 0x28) = uStack_278;
          *(undefined4 *)(param_1 + 0x2c) = uStack_274;
        }
      }
    }
    uVar54 = *(undefined4 *)local_58[1];
    auVar1 = vsub_t(*local_58,*pauVar51);
    *(int *)*local_58 = auVar1._0_4_;
    *(int *)(*local_58 + 4) = auVar1._4_4_;
    *(int *)(*local_58 + 8) = auVar1._8_4_;
    *(undefined4 *)local_58[1] = uVar54;
  }
  if (bVar48) {
    fVar53 = *(float *)(*param_2 + 4);
  }
  else {
    if (*(float *)(param_1 + 0x1c0) < 6.0) {
      fVar53 = *(float *)(param_1 + 0x1c0) + 0.1;
      if (6.0 < fVar53) {
        fVar53 = 6.0;
      }
      *(float *)(param_1 + 0x1c0) = fVar53;
    }
    fVar53 = *(float *)(*param_2 + 4);
  }
  DAT_08b00540 = *(undefined4 *)*pauVar51;
  DAT_08b00548 = *(undefined4 *)(param_1 + 0x28);
  DAT_08b0054c = *(undefined4 *)(param_1 + 0x2c);
  DAT_08b00544 = *(float *)(param_1 + 0x24) + DAT_08b00550;
  local_50 = (uint)(fVar53 <= 0.0);
  (**(code **)(DAT_08b00534 + 0x4c))((int)&DAT_08b00530 + (int)*(short *)(DAT_08b00534 + 0x48));
  if (fVar53 <= 0.0 == 0) {
    DAT_08b006a0 = *(float *)(param_1 + 0x1c0) - 13.0;
    DAT_08b00680 = *(undefined4 *)*pauVar51;
    DAT_08b00688 = *(undefined4 *)(param_1 + 0x28);
    DAT_08b0068c = *(float *)(param_1 + 0x2c);
    DAT_08b00684 = (*(float *)(param_1 + 0x1c0) - 13.0) + *(float *)(*param_2 + 4) +
                   *(float *)(param_1 + 0x24);
    DAT_08b00694 = *(float *)(param_1 + 0x15c) + *(float *)(*param_2 + 4);
    DAT_08b00690 = 0.0;
    DAT_08b00698 = 0.0;
    DAT_08b0069c = 0.0;
    iVar47 = FUN_0881a83c(*(undefined4 *)(param_1 + 0x158),&DAT_08b006b0,4);
    if (iVar47 == 0) {
      fVar53 = *(float *)(*param_2 + 4);
    }
    else if (*(float *)(param_1 + 0x24) + 1.0 < DAT_08b00284) {
      auVar13._4_4_ = DAT_08b00684;
      auVar13._0_4_ = DAT_08b00680;
      auVar13._8_4_ = DAT_08b00688;
      auVar1 = vadd_t(auVar13,*local_4c);
      local_210 = auVar1._0_4_;
      uStack_20c = auVar1._4_4_;
      uStack_208 = auVar1._8_4_;
      fStack_204 = DAT_08b0068c;
      auVar6._8_4_ = DAT_08b00288;
      auVar6._4_4_ = DAT_08b00284;
      auVar6._0_4_ = DAT_08b00280;
      auVar1 = vsub_t(auVar1,auVar6);
      local_220 = auVar1._0_4_;
      local_218 = auVar1._8_4_;
      fStack_214 = DAT_08b0068c;
      local_21c = 0;
      auVar22._4_4_ = 0;
      auVar22._0_4_ = local_220;
      auVar22._8_4_ = local_218;
      auVar21._4_4_ = 0;
      auVar21._0_4_ = local_220;
      auVar21._8_4_ = local_218;
      uVar54 = vdot_t(auVar21,auVar22);
      fVar53 = (float)vsqrt_s(uVar54);
      if (fVar53 < (*(float *)(param_1 + 0x1c0) - 13.0) * 0.5) {
        *(float *)(*param_2 + 4) =
             ((DAT_08b00684 + DAT_08b002a0) -
             ((*(float *)(param_1 + 0x1c0) - 13.0) + *(float *)(param_1 + 0x15c))) -
             *(float *)(param_1 + 0x24);
        bVar48 = true;
        FUN_089dedf8(param_1,&local_1f0,"Bip01_Head");
        uStack_1f4 = *(undefined4 *)(param_1 + 0x2c);
        auVar7._8_4_ = DAT_08b00288;
        auVar7._4_4_ = DAT_08b00284;
        auVar7._0_4_ = DAT_08b00280;
        auVar1 = vsub_t(*pauVar51,auVar7);
        local_200 = auVar1._0_4_;
        uStack_1fc = auVar1._4_4_;
        uStack_1f8 = auVar1._8_4_;
        auVar24._4_4_ = 0;
        auVar24._0_4_ = local_200;
        auVar24._8_4_ = uStack_1f8;
        auVar23._4_4_ = 0;
        auVar23._0_4_ = local_200;
        auVar23._8_4_ = uStack_1f8;
        uVar54 = vdot_t(auVar23,auVar24);
        fVar53 = (float)vsqrt_s(uVar54);
        fStack_214 = in_V7D;
        if (fVar53 < (*(float *)(param_1 + 0x1c0) - 13.0) * 0.4) {
          bVar48 = false;
          *(undefined4 *)(param_1 + 0x84) = 0;
          auVar31._4_4_ = local_1ec;
          auVar31._0_4_ = local_1f0;
          auVar31._8_4_ = uStack_1e8;
          auVar1 = vsub_t(*(undefined (*) [12])(DAT_08ac5c90 + 0x50),auVar31);
          uVar54 = vdot_t(auVar1,auVar1);
          uVar55 = vcmp_s(8,uVar54,local_1f0);
          vrsq_s(uVar54);
          uVar54 = vcmovt_s(in_V7D,(byte)uVar55 & 1);
          vpfxd(4,4,4,5);
          auVar1 = vscl_t(auVar1,uVar54);
          auVar1 = vscl_t(auVar1,0x40400000);
          local_220 = auVar1._0_4_;
          local_21c = auVar1._4_4_;
          local_218 = auVar1._8_4_;
          auVar32._4_4_ = local_1ec;
          auVar32._0_4_ = local_1f0;
          auVar32._8_4_ = uStack_1e8;
          auVar1 = vadd_t(auVar32,auVar1);
          local_1f0 = auVar1._0_4_;
          uStack_1e8 = auVar1._8_4_;
          local_1ec = auVar1._4_4_ + 2.0;
          auVar35._4_4_ = local_1ec;
          auVar35._0_4_ = local_1f0;
          auVar35._8_4_ = uStack_1e8;
          auVar35._12_4_ = uStack_1e4;
          auVar9._12_4_ = DAT_08b0028c;
          auVar9._8_4_ = DAT_08b00288;
          auVar9._4_4_ = DAT_08b00284;
          auVar9._0_4_ = DAT_08b00280;
          auVar3 = vsub_q(auVar9,auVar35);
          uVar54 = vdot_t(auVar3._0_12_,auVar3._0_12_);
          vsqrt_s(uVar54);
        }
        else {
          local_1c0 = DAT_08b00280;
          fStack_1bc = DAT_08b00284;
          uStack_1b8 = DAT_08b00288;
          uStack_1b4 = DAT_08b0028c;
          auVar27._4_4_ = 0;
          auVar27._0_4_ = local_200;
          auVar27._8_4_ = uStack_1f8;
          auVar26._4_4_ = 0;
          auVar26._0_4_ = local_200;
          auVar26._8_4_ = uStack_1f8;
          auVar25._4_4_ = 0;
          auVar25._0_4_ = local_200;
          auVar25._8_4_ = uStack_1f8;
          uVar54 = vdot_t(auVar25,auVar26);
          uVar55 = vcmp_s(8,uVar54,local_200);
          vrsq_s(uVar54);
          uVar54 = vcmovt_s(in_V7D,(byte)uVar55 & 1);
          uVar54 = vmul_s(uVar54,0x3f000000);
          auVar1 = vscl_t(auVar27,uVar54);
          local_220 = auVar1._0_4_;
          local_21c = auVar1._4_4_;
          local_218 = auVar1._8_4_;
          auVar11._4_4_ = DAT_08b00284;
          auVar11._0_4_ = DAT_08b00280;
          auVar11._8_4_ = DAT_08b00288;
          auVar1 = vadd_t(auVar11,auVar1);
          DAT_08b00410 = auVar1._0_4_;
          DAT_08b00418 = auVar1._8_4_;
          DAT_08b0041c = DAT_08b0028c;
          DAT_08b00414 = auVar1._4_4_ - 3.0;
          local_1c8 = 0x41000000;
          local_1cc = 0x41000000;
          local_1d0 = 0x41000000;
          local_1c4 = 0;
          auVar37._8_4_ = 0x41000000;
          auVar37._0_8_ = 0x4100000041000000;
          auVar8._8_4_ = DAT_08b001a8;
          auVar8._4_4_ = DAT_08b001a4;
          auVar8._0_4_ = DAT_08b001a0;
          auVar1 = vmul_t(auVar8,auVar37);
          DAT_08b00420 = auVar1._0_4_;
          DAT_08b00424 = auVar1._4_4_;
          DAT_08b00428 = auVar1._8_4_;
          DAT_08b0042c = in_V7D;
          local_1e0 = DAT_08b00420;
          uStack_1dc = DAT_08b00424;
          uStack_1d8 = DAT_08b00428;
          iVar47 = FUN_0881a83c(*(undefined4 *)(param_1 + 0x158),&DAT_08b00430,0);
          if (iVar47 != 0) {
            bVar48 = false;
            *(undefined4 *)(param_1 + 0x84) = 0;
            auVar33._4_4_ = local_1ec;
            auVar33._0_4_ = local_1f0;
            auVar33._8_4_ = uStack_1e8;
            auVar1 = vsub_t(*(undefined (*) [12])(DAT_08ac5c90 + 0x50),auVar33);
            uVar54 = vdot_t(auVar1,auVar1);
            uVar55 = vcmp_s(8,uVar54,local_1f0);
            vrsq_s(uVar54);
            uVar54 = vcmovt_s(in_V7D,(byte)uVar55 & 1);
            vpfxd(4,4,4,5);
            auVar1 = vscl_t(auVar1,uVar54);
            auVar1 = vscl_t(auVar1,0x40400000);
            local_220 = auVar1._0_4_;
            local_21c = auVar1._4_4_;
            local_218 = auVar1._8_4_;
            auVar34._4_4_ = local_1ec;
            auVar34._0_4_ = local_1f0;
            auVar34._8_4_ = uStack_1e8;
            auVar1 = vadd_t(auVar34,auVar1);
            local_1f0 = auVar1._0_4_;
            uStack_1e8 = auVar1._8_4_;
            local_1ec = auVar1._4_4_ + 2.0;
            auVar38._4_4_ = fStack_1bc;
            auVar38._0_4_ = local_1c0;
            auVar38._8_4_ = uStack_1b8;
            auVar38._12_4_ = uStack_1b4;
            auVar36._4_4_ = local_1ec;
            auVar36._0_4_ = local_1f0;
            auVar36._8_4_ = uStack_1e8;
            auVar36._12_4_ = uStack_1e4;
            auVar3 = vsub_q(auVar38,auVar36);
            uVar54 = vdot_t(auVar3._0_12_,auVar3._0_12_);
            vsqrt_s(uVar54);
            fStack_214 = in_V7D;
          }
        }
        if (bVar48) {
          if (((local_220 | local_21c | local_218) & 0x7fffffff) != 0) {
            auVar30._4_4_ = local_21c;
            auVar30._0_4_ = local_220;
            auVar30._8_4_ = local_218;
            auVar29._4_4_ = local_21c;
            auVar29._0_4_ = local_220;
            auVar29._8_4_ = local_218;
            auVar28._4_4_ = local_21c;
            auVar28._0_4_ = local_220;
            auVar28._8_4_ = local_218;
            uVar54 = vdot_t(auVar28,auVar29);
            uVar55 = vcmp_s(8,uVar54,local_220);
            vrsq_s(uVar54);
            uVar54 = vcmovt_s(in_V7D,(byte)uVar55 & 1);
            uVar54 = vmul_s(uVar54,0x3e4ccccd);
            auVar1 = vscl_t(auVar30,uVar54);
            local_220 = auVar1._0_4_;
            local_21c = auVar1._4_4_;
            local_218 = auVar1._8_4_;
            uVar54 = *(undefined4 *)local_54[1];
            auVar1 = vadd_t(*local_54,auVar1);
            *(int *)*local_54 = auVar1._0_4_;
            *(int *)(*local_54 + 4) = auVar1._4_4_;
            *(int *)(*local_54 + 8) = auVar1._8_4_;
            *(undefined4 *)local_54[1] = uVar54;
            fStack_214 = in_V7D;
            goto LAB_088ddd90;
          }
          fVar53 = *(float *)(*param_2 + 4);
        }
        else {
          fVar53 = *(float *)(*param_2 + 4);
        }
      }
      else {
        fVar53 = *(float *)(*param_2 + 4);
      }
    }
    else {
LAB_088ddd90:
      fVar53 = *(float *)(*param_2 + 4);
    }
  }
  else {
    fVar53 = *(float *)(*param_2 + 4);
  }
  uVar52 = local_48;
  if (0.0 < fVar53) {
    *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + *(float *)(*param_2 + 4);
  }
  else if ((*(uint *)(param_1 + 0x144) & 8) == 0) {
    DAT_08b00680 = *(undefined4 *)*pauVar51;
    DAT_08b00688 = *(undefined4 *)(param_1 + 0x28);
    DAT_08b00684 = *(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x1c0);
    DAT_08b00694 = *(float *)(*param_2 + 4);
    DAT_08b00690 = 0.0;
    DAT_08b00698 = 0.0;
    DAT_08b0069c = 0.0;
    DAT_08b006a0 = *(float *)(param_1 + 0x1c0);
    DAT_08b0068c = DAT_08b006a0 * DAT_08b006a0;
    iVar47 = FUN_0881a83c(*(undefined4 *)(param_1 + 0x158),&DAT_08b006b0,2);
    if (iVar47 == 0) {
      *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + *(float *)(*param_2 + 4);
    }
    else {
      if (*(float *)(*param_2 + 4) <= 0.0) {
        *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) - (DAT_08b002a0 - 0.0001);
      }
      if (DAT_08b002b8 != 0) {
        bVar48 = false;
        if ((DAT_08b00290 * DAT_08b00290 + DAT_08b00298 * DAT_08b00298 < 1e-05) &&
           (bVar48 = false, 0.0001 < DAT_08b00294 * DAT_08b00294)) {
          bVar48 = true;
        }
        if (!bVar48) {
          auVar12._4_4_ = DAT_08b00294;
          auVar12._0_4_ = DAT_08b00290;
          auVar12._8_4_ = DAT_08b00298;
          vpfxs(0x12,1,0,3);
          auVar1 = vmov_t(auVar12);
          uVar49 = auVar1._0_4_;
          uVar54 = auVar1._8_4_;
          auVar41._4_4_ = 0;
          auVar41._0_4_ = uVar49;
          auVar41._8_4_ = uVar54;
          auVar40._4_4_ = 0;
          auVar40._0_4_ = uVar49;
          auVar40._8_4_ = uVar54;
          auVar39._4_4_ = 0;
          auVar39._0_4_ = uVar49;
          auVar39._8_4_ = uVar54;
          uVar54 = vdot_t(auVar39,auVar40);
          uVar55 = vcmp_s(8,uVar54,uVar49);
          vrsq_s(uVar54);
          uVar54 = vcmovt_s(in_V7D,(byte)uVar55 & 1);
          vpfxd(4,4,4,5);
          auVar1 = vscl_t(auVar41,uVar54);
          uVar54 = vcst_s(6);
          uVar54 = vmul_s(uVar54,0xbfc90fdb);
          uVar55 = vcos_s(uVar54);
          uVar54 = vsin_s(uVar54);
          auVar1 = vscl_t(auVar1,uVar54);
          auVar44._12_4_ = uVar55;
          auVar44._0_12_ = auVar1;
          auVar43._12_4_ = uVar55;
          auVar43._0_12_ = auVar1;
          vpfxs(0x10,0x11,0x12,3);
          auVar4 = vmov_q(auVar43);
          uVar54 = vmov_s(in_V73);
          auVar10._12_4_ = uVar54;
          auVar10._8_4_ = DAT_08b00298;
          auVar10._4_4_ = DAT_08b00294;
          auVar10._0_4_ = DAT_08b00290;
          auVar3 = vqmul_q(auVar44,auVar10);
          auVar3 = vqmul_q(auVar3,auVar4);
          uVar54 = vdot_t(*param_2,*param_2);
          uVar55 = vcmp_s(8,uVar54,*(undefined4 *)*param_2);
          vrsq_s(uVar54);
          uVar54 = vcmovt_s(in_V7D,(byte)uVar55 & 1);
          vpfxd(4,4,4,5);
          auVar1 = vscl_t(*param_2,uVar54);
          fVar53 = (float)vdot_t(auVar1,auVar3._0_12_);
          fVar53 = fVar53 - 0.2;
          if (fVar53 < 0.0) {
            fVar53 = 0.0;
          }
          auVar1 = vscl_t(auVar3._0_12_,fVar53);
          uVar54 = *(undefined4 *)local_54[1];
          auVar1 = vadd_t(*local_54,auVar1);
          *(int *)*local_54 = auVar1._0_4_;
          *(int *)(*local_54 + 4) = auVar1._4_4_;
          *(int *)(*local_54 + 8) = auVar1._8_4_;
          *(undefined4 *)local_54[1] = uVar54;
          if (uVar52 != 0) {
            uVar54 = vdot_t(*local_54,*local_54);
            uVar55 = vcmp_s(8,uVar54,*(undefined4 *)*local_54);
            vrsq_s(uVar54);
            uVar54 = vcmovt_s(in_V7D,(byte)uVar55 & 1);
            vpfxd(4,4,4,5);
            auVar1 = vscl_t(*local_54,uVar54);
            pauVar50 = (undefined (*) [12])(param_1 + 0x80);
            uVar54 = vdot_t(*pauVar50,*pauVar50);
            uVar55 = vcmp_s(8,uVar54,*(undefined4 *)*pauVar50);
            vrsq_s(uVar54);
            uVar54 = vcmovt_s(in_V7D,(byte)uVar55 & 1);
            vpfxd(4,4,4,5);
            auVar2 = vscl_t(*pauVar50,uVar54);
            fVar53 = (float)vdot_t(auVar1,auVar2);
            if (0.0 <= fVar53) {
              uVar54 = *(undefined4 *)local_54[1];
              auVar42._4_4_ = 0;
              auVar42._0_4_ = *(uint *)*pauVar50;
              auVar42._8_4_ = *(undefined4 *)(param_1 + 0x88);
              auVar1 = vsub_t(*local_54,auVar42);
              *(int *)*local_54 = auVar1._0_4_;
              *(int *)(*local_54 + 4) = auVar1._4_4_;
              *(int *)(*local_54 + 8) = auVar1._8_4_;
              *(undefined4 *)local_54[1] = uVar54;
              *(float *)(param_1 + 0x80) = *(float *)(param_1 + 0x80) * 0.9;
              *(float *)(param_1 + 0x88) = *(float *)(param_1 + 0x88) * 0.9;
            }
          }
        }
      }
      bVar48 = false;
      if ((6 < DAT_08b002b4) && (DAT_08b002b4 < 0xb)) {
        bVar48 = true;
      }
      if (local_50 != 0) {
        if ((bVar48) || (DAT_08b00294 <= 0.3)) {
          if ((!bVar48) || (DAT_08b00294 <= 0.78)) goto LAB_088de194;
          uVar49 = *(uint *)(param_1 + 0x144);
        }
        else {
          uVar49 = *(uint *)(param_1 + 0x144);
        }
        *(uint *)(param_1 + 0x144) = uVar49 & 0xbfffffff;
        local_44 = 1;
      }
    }
  }
  else {
    *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + *(float *)(*param_2 + 4);
    if (*(float *)(param_1 + 0x24) < *(float *)(param_1 + 0x294)) {
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x294);
      *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) & 0xbfffffff;
      local_44 = 1;
    }
  }
LAB_088de194:
  if ((uVar52 != 0) && ((*(uint *)(param_1 + 0x144) & 0x40000000) == 0)) {
    *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 0x80000000;
  }
  return local_44;
}

