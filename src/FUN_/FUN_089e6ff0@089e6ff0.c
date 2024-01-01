#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089e6ff0(int *param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined auVar3 [12];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [12];
  undefined auVar7 [12];
  undefined auVar8 [12];
  undefined auVar9 [12];
  undefined auVar10 [12];
  undefined auVar11 [12];
  undefined auVar12 [12];
  undefined auVar13 [12];
  undefined auVar14 [12];
  undefined auVar15 [12];
  undefined auVar16 [12];
  int iVar17;
  int iVar18;
  float *pfVar19;
  uint *puVar20;
  undefined (*pauVar21) [12];
  int iVar22;
  undefined4 *puVar23;
  undefined (*pauVar24) [12];
  undefined (*pauVar25) [12];
  uint uVar26;
  byte *pbVar27;
  undefined *puVar28;
  int iVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 in_V00;
  float in_V72;
  float in_V76;
  float in_V7A;
  undefined4 in_V7D;
  float in_V7E;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined local_290 [16];
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  int local_274;
  float local_270 [32];
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  float local_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  int iStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  int iStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  int iStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  int iStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined (*local_68) [12];
  undefined1 *local_64;
  undefined4 *local_60;
  undefined (*local_5c) [12];
  undefined (*local_58) [12];
  undefined *local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined4 *local_48;
  
  puVar28 = local_290;
  local_5c = (undefined (*) [12])&DAT_08b00280;
  local_68 = (undefined (*) [12])(param_1 + 0x28);
  local_58 = (undefined (*) [12])&DAT_08b00290;
  iVar22 = 0;
  iVar18 = 0;
  do {
    pauVar24 = (undefined (*) [12])(*param_1 + iVar18);
    uVar33 = *(undefined4 *)pauVar24[1];
    auVar1 = vadd_t(*pauVar24,*(undefined (*) [12])(param_1[1] + iVar18));
    *(int *)*pauVar24 = auVar1._0_4_;
    *(int *)(*pauVar24 + 4) = auVar1._4_4_;
    *(int *)(*pauVar24 + 8) = auVar1._8_4_;
    *(undefined4 *)pauVar24[1] = uVar33;
    if (*(char *)((int)param_1 + iVar22 + 0x7c) == '\0') {
      *(float *)(*param_1 + iVar18 + 4) = *(float *)(*param_1 + iVar18 + 4) - (float)param_1[0x43];
    }
    else {
      *(undefined *)((int)param_1 + iVar22 + 0x7c) = 0;
    }
    iVar22 = iVar22 + 1;
    iVar18 = iVar18 + 0x10;
  } while (iVar22 < 8);
  FUN_089e6b88(param_1,4);
  iVar18 = 0;
  pfVar19 = local_270;
  do {
    *pfVar19 = in_V72;
    pfVar19[1] = in_V76;
    pfVar19[2] = in_V7A;
    pfVar19[3] = in_V7E;
    iVar18 = iVar18 + 1;
    pfVar19 = pfVar19 + 4;
  } while (iVar18 < 8);
  fVar32 = -INFINITY;
  local_64 = &DAT_08aa33d0;
  local_48 = &DAT_08b002d0;
  local_60 = &DAT_08b002e0;
  local_4c = &DAT_08b008e0;
  local_50 = &DAT_08b002f0;
  local_54 = &DAT_08b00300;
  iVar29 = 0;
  iVar18 = 0;
  pauVar24 = (undefined (*) [12])local_270;
  iVar22 = 0;
  do {
    if (*(char *)(param_1 + 0x45) == '\0') {
      fVar30 = *(float *)(*param_1 + iVar18 + 4) - (float)param_1[0x41];
    }
    else {
      puVar23 = (undefined4 *)(*param_1 + iVar18);
      local_1d0 = *puVar23;
      uStack_1c8 = puVar23[2];
      uStack_1c4 = puVar23[3];
      local_1cc = (float)puVar23[1] + 5.0;
      *local_48 = local_1d0;
      local_48[1] = local_1cc;
      local_48[2] = uStack_1c8;
      local_48[3] = uStack_1c4;
      uVar33 = local_4c[1];
      uVar34 = local_4c[2];
      uVar35 = local_4c[3];
      *local_60 = *local_4c;
      local_60[1] = uVar33;
      local_60[2] = uVar34;
      local_60[3] = uVar35;
      in_V00 = *local_60;
      uVar33 = vcmp_s(8,in_V00,in_V00);
      vrcp_s(in_V00);
      uVar33 = vcmovt_s(in_V7D,(byte)uVar33 & 1);
      uVar34 = vcmp_s(8,local_60[1],in_V00);
      vrcp_s(local_60[1]);
      uVar34 = vcmovt_s(in_V7D,(byte)uVar34 & 1);
      uVar35 = vcmp_s(8,local_60[2],in_V00);
      vrcp_s(local_60[2]);
      uVar35 = vcmovt_s(in_V7D,(byte)uVar35 & 1);
      *local_50 = uVar33;
      local_50[1] = uVar34;
      local_50[2] = uVar35;
      local_50[3] = in_V7D;
      iVar17 = FUN_0881a83c(0x3fbf2700,local_54,0);
      if (iVar17 == 0) {
        fVar30 = *(float *)(*param_1 + iVar18 + 4) - (float)param_1[0x41];
        if (fVar32 < (float)param_1[0x41]) {
          fVar32 = (float)param_1[0x41];
        }
        *(undefined *)(param_1 + 0x45) = 0;
      }
      else {
        fVar30 = *(float *)(*param_1 + iVar18 + 4) - *(float *)((int)*local_5c + 4);
        if (fVar32 < *(float *)((int)*local_5c + 4)) {
          fVar32 = *(float *)((int)*local_5c + 4);
        }
      }
    }
    if (fVar30 < 0.0) {
      iVar17 = *param_1;
      *(undefined *)((int)param_1 + iVar29 + 0x7c) = 1;
      uVar26 = 0;
      pbVar27 = local_64 + iVar22;
      *(float *)(iVar17 + iVar18 + 4) = *(float *)(iVar17 + iVar18 + 4) - fVar30;
      iVar17 = 0;
      do {
        if (*pbVar27 == uVar26) {
          fVar31 = *(float *)(*param_1 + iVar17 + 4) - fVar30 * 0.5;
        }
        else {
          fVar31 = *(float *)(*param_1 + iVar17 + 4) - fVar30 * 0.5 * 0.5;
        }
        uVar26 = uVar26 + 1;
        *(float *)(*param_1 + iVar17 + 4) = fVar31;
        pbVar27 = pbVar27 + 1;
        iVar17 = iVar17 + 0x10;
      } while ((int)uVar26 < 8);
      puVar20 = (uint *)(param_1[1] + iVar18);
      if (((*puVar20 | puVar20[1] | puVar20[2]) & 0x7fffffff) != 0) {
        puVar23 = (undefined4 *)(param_1[1] + iVar18);
        uVar33 = puVar23[1];
        uVar34 = puVar23[2];
        uVar35 = puVar23[3];
        *(undefined4 *)*pauVar24 = *puVar23;
        *(undefined4 *)(*pauVar24 + 4) = uVar33;
        *(undefined4 *)(*pauVar24 + 8) = uVar34;
        *(undefined4 *)pauVar24[1] = uVar35;
        auVar1 = vsub_t(*(undefined (*) [12])(*param_1 + iVar18),*local_68);
        uVar33 = vdot_t(auVar1,auVar1);
        uVar34 = vcmp_s(8,uVar33,*(undefined4 *)*local_68);
        vrsq_s(uVar33);
        uVar33 = vcmovt_s(in_V7D,(byte)uVar34 & 1);
        vpfxd(4,4,4,5);
        auVar1 = vscl_t(auVar1,uVar33);
        in_V00 = auVar1._0_4_;
        local_1f0 = in_V00;
        uStack_1ec = auVar1._4_4_;
        uStack_1e8 = auVar1._8_4_;
        uStack_1e4 = in_V7D;
        pauVar21 = (undefined (*) [12])(param_1[1] + iVar18);
        uVar33 = vdot_t(*pauVar21,*pauVar21);
        uVar34 = vcmp_s(8,uVar33,*(undefined4 *)*pauVar21);
        vrsq_s(uVar33);
        uVar33 = vcmovt_s(in_V7D,(byte)uVar34 & 1);
        vpfxd(4,4,4,5);
        auVar2 = vscl_t(*pauVar21,uVar33);
        local_1e0 = auVar2._0_4_;
        uStack_1dc = auVar2._4_4_;
        uStack_1d8 = auVar2._8_4_;
        uStack_1d4 = in_V7D;
        fVar30 = (float)vdot_t(auVar1,auVar2);
        fVar30 = fVar30 * -1.2;
        if (0.0 < fVar30) {
          if (*(char *)(param_1 + 0x45) == '\0') {
            *(float *)(puVar28 + 0x24) = -*(float *)(puVar28 + 0x24);
          }
          else {
            uVar33 = *(undefined4 *)local_58[1];
            auVar1 = vneg_t(*local_58);
            *(int *)*local_58 = auVar1._0_4_;
            *(int *)((int)*local_58 + 4) = auVar1._4_4_;
            *(int *)((int)*local_58 + 8) = auVar1._8_4_;
            *(undefined4 *)local_58[1] = uVar33;
            pauVar21 = (undefined (*) [12])(param_1[1] + iVar18);
            uVar33 = vdot_t(*pauVar21,*pauVar21);
            fVar31 = (float)vsqrt_s(uVar33);
            uVar34 = vdot_t(*pauVar21,*local_58);
            uVar33 = vfim_s(0xc000);
            uVar33 = vmul_s(uVar33,uVar34);
            auVar1 = vscl_t(*local_58,uVar33);
            auVar1 = vadd_t(*pauVar21,auVar1);
            uVar33 = vdot_t(auVar1,auVar1);
            uVar34 = vcmp_s(8,uVar33,auVar1._0_4_);
            uVar33 = vrsq_s(uVar33);
            vpfxs(4,1,2,3);
            uVar33 = vcmovt_s(uVar33,(byte)uVar34 & 1);
            vpfxd(4,4,4,5);
            auVar1 = vscl_t(auVar1,uVar33);
            local_1b0 = auVar1._0_4_;
            uStack_1ac = auVar1._4_4_;
            uStack_1a8 = auVar1._8_4_;
            uStack_1a4 = in_V7D;
            *(int *)*pauVar24 = auVar1._0_4_;
            *(int *)(*pauVar24 + 4) = auVar1._4_4_;
            *(int *)(*pauVar24 + 8) = auVar1._8_4_;
            *(undefined4 *)pauVar24[1] = in_V7D;
            fVar30 = fVar30 * fVar31 * 0.6;
          }
          auVar1 = vscl_t(*pauVar24,fVar30);
          in_V00 = auVar1._0_4_;
          local_1c0 = in_V00;
          uStack_1bc = auVar1._4_4_;
          uStack_1b8 = auVar1._8_4_;
          uStack_1b4 = in_V7D;
          local_1f0 = in_V00;
          uStack_1ec = auVar1._4_4_;
          uStack_1e8 = auVar1._8_4_;
          if (*(float *)(puVar28 + 0x2c) == 0.0) {
            iVar17 = 0;
            pbVar27 = local_64 + iVar22;
            do {
              uVar26 = (uint)*pbVar27;
              fVar30 = local_270[uVar26 * 4 + 3];
              auVar1._4_4_ = uStack_1ec;
              auVar1._0_4_ = local_1f0;
              auVar1._8_4_ = uStack_1e8;
              auVar1 = vadd_t(*(undefined (*) [12])(local_270 + uVar26 * 4),auVar1);
              *(int *)*(undefined (*) [12])(local_270 + uVar26 * 4) = auVar1._0_4_;
              local_270[uVar26 * 4 + 1] = auVar1._4_4_;
              local_270[uVar26 * 4 + 2] = auVar1._8_4_;
              local_270[uVar26 * 4 + 3] = fVar30;
              iVar17 = iVar17 + 1;
              pbVar27 = pbVar27 + 1;
            } while (iVar17 < 3);
            *(undefined4 *)(puVar28 + 0x2c) = 0x3f800000;
            iVar17 = param_1[0x44];
          }
          else {
            iVar17 = param_1[0x44];
          }
        }
        else {
          iVar17 = param_1[0x44];
        }
        param_1[0x44] = iVar17 + 1;
      }
    }
    pauVar21 = local_68;
    iVar29 = iVar29 + 1;
    iVar18 = iVar18 + 0x10;
    puVar28 = puVar28 + 0x10;
    pauVar24 = (undefined (*) [12])(pauVar24[1] + 4);
    iVar22 = iVar22 + 3;
  } while (iVar29 < 8);
  if (*(char *)(param_1 + 0x45) != '\0') {
    param_1[0x41] = (int)fVar32;
  }
  FUN_089e6c38(param_1,4);
  FUN_089e6db8(param_1,&local_280);
  FUN_089e6e2c(param_1,&local_280);
  if ((*(char *)((int)param_1 + 0x115) != '\0') && (param_1[0x58] != 0)) {
    auVar2._4_4_ = uStack_27c;
    auVar2._0_4_ = local_280;
    auVar2._8_4_ = uStack_278;
    auVar1 = vsub_t(auVar2,*pauVar21);
    in_V00 = auVar1._0_4_;
    uStack_19c = auVar1._4_4_;
    uStack_198 = auVar1._8_4_;
    iStack_194 = local_274;
    local_190 = *(undefined4 *)*pauVar21;
    uStack_18c = *(undefined4 *)(*pauVar21 + 4);
    uStack_188 = *(undefined4 *)(*pauVar21 + 8);
    iStack_184 = *(int *)pauVar21[1];
    uVar33 = vdot_t(auVar1,auVar1);
    fVar32 = (float)vsqrt_s(uVar33);
    local_1a0 = in_V00;
    if (0.001 <= fVar32) {
      DAT_08b006a0 = param_1[0x42];
      DAT_08b0069c = local_274;
      DAT_08b00680 = local_190;
      DAT_08b00684 = uStack_18c;
      DAT_08b00688 = uStack_188;
      DAT_08b0068c = iStack_184;
      DAT_08b00690 = in_V00;
      DAT_08b00694 = uStack_19c;
      DAT_08b00698 = uStack_198;
      iVar18 = FUN_0881a83c(0x3fbf2700,&DAT_08b006b0,0);
      pauVar24 = local_5c;
      if (iVar18 != 0) {
        auVar9._4_4_ = uStack_19c;
        auVar9._0_4_ = local_1a0;
        auVar9._8_4_ = uStack_198;
        auVar8._4_4_ = uStack_19c;
        auVar8._0_4_ = local_1a0;
        auVar8._8_4_ = uStack_198;
        auVar3._4_4_ = uStack_19c;
        auVar3._0_4_ = local_1a0;
        auVar3._8_4_ = uStack_198;
        uVar33 = vdot_t(auVar3,auVar8);
        uVar34 = vcmp_s(8,uVar33,local_1a0);
        vrsq_s(uVar33);
        uVar33 = vcmovt_s(in_V7D,(byte)uVar34 & 1);
        vpfxd(4,4,4,5);
        auVar3 = vscl_t(auVar9,uVar33);
        local_160 = auVar3._0_4_;
        uStack_15c = auVar3._4_4_;
        uStack_158 = auVar3._8_4_;
        auVar10._4_4_ = uStack_19c;
        auVar10._0_4_ = local_1a0;
        auVar10._8_4_ = uStack_198;
        auVar1 = vscl_t(auVar10,*(float *)local_5c[3] - 0.01);
        auVar15._4_4_ = uStack_18c;
        auVar15._0_4_ = local_190;
        auVar15._8_4_ = uStack_188;
        auVar1 = vadd_t(auVar15,auVar1);
        auVar12._4_4_ = uStack_19c;
        auVar12._0_4_ = local_1a0;
        auVar12._8_4_ = uStack_198;
        auVar11._4_4_ = uStack_19c;
        auVar11._0_4_ = local_1a0;
        auVar11._8_4_ = uStack_198;
        uVar34 = vdot_t(auVar11,*local_58);
        uVar33 = vfim_s(0xc000);
        uVar33 = vmul_s(uVar33,uVar34);
        auVar2 = vscl_t(*local_58,uVar33);
        auVar2 = vadd_t(auVar12,auVar2);
        uVar33 = vdot_t(auVar2,auVar2);
        uVar34 = vcmp_s(8,uVar33,auVar2._0_4_);
        uVar33 = vrsq_s(uVar33);
        vpfxs(4,1,2,3);
        uVar33 = vcmovt_s(uVar33,(byte)uVar34 & 1);
        vpfxd(4,4,4,5);
        auVar2 = vscl_t(auVar2,uVar33);
        fVar30 = (float)vdot_t(auVar2,auVar3);
        fVar30 = (fVar30 - 1.0) * 0.7;
        if (fVar30 < -1.0) {
          fVar30 = -1.0;
        }
        auVar2 = vscl_t(auVar2,fVar32 * (fVar30 * 0.4 + 1.0) * 0.97);
        local_1a0 = auVar2._0_4_;
        uStack_19c = auVar2._4_4_;
        uStack_198 = auVar2._8_4_;
        auVar2 = vscl_t(auVar2,1.0 - *(float *)local_5c[3]);
        local_170 = auVar2._0_4_;
        uStack_16c = auVar2._4_4_;
        uStack_168 = auVar2._8_4_;
        auVar2 = vscl_t(auVar2,fVar30 + 1.0);
        local_180 = auVar2._0_4_;
        uStack_17c = auVar2._4_4_;
        uStack_178 = auVar2._8_4_;
        auVar1 = vadd_t(auVar1,auVar2);
        DAT_08b00540 = auVar1._0_4_;
        DAT_08b00544 = auVar1._4_4_;
        DAT_08b00548 = auVar1._8_4_;
        DAT_08b00550 = param_1[0x42];
        DAT_08b0054c = iStack_184;
        local_190 = DAT_08b00540;
        uStack_18c = DAT_08b00544;
        uStack_188 = DAT_08b00548;
        (**(code **)(DAT_08b00534 + 0x4c))
                  ((int)&DAT_08b00530 + (int)*(short *)(DAT_08b00534 + 0x48));
        iVar18 = FUN_0881a83c(0x3fbf2700,&DAT_08b00560,0);
        if (iVar18 != 0) {
          auVar1 = vscl_t(*local_58,(float)param_1[0x42] + 0.01);
          local_140 = auVar1._0_4_;
          uStack_13c = auVar1._4_4_;
          uStack_138 = auVar1._8_4_;
          uStack_134 = in_V7D;
          iStack_144 = *(int *)pauVar24[1];
          auVar1 = vadd_t(*pauVar24,auVar1);
          local_150 = auVar1._0_4_;
          uStack_14c = auVar1._4_4_;
          uStack_148 = auVar1._8_4_;
          local_190 = auVar1._0_4_;
          uStack_18c = auVar1._4_4_;
          uStack_188 = auVar1._8_4_;
          iStack_184 = iStack_144;
        }
        auVar16._4_4_ = uStack_18c;
        auVar16._0_4_ = local_190;
        auVar16._8_4_ = uStack_188;
        auVar6._4_4_ = uStack_27c;
        auVar6._0_4_ = local_280;
        auVar6._8_4_ = uStack_278;
        auVar1 = vsub_t(auVar16,auVar6);
        local_170 = auVar1._0_4_;
        uStack_16c = auVar1._4_4_;
        uStack_168 = auVar1._8_4_;
        iStack_164 = iStack_184;
        local_1a0 = auVar1._0_4_;
        uStack_19c = auVar1._4_4_;
        uStack_198 = auVar1._8_4_;
        iStack_194 = iStack_184;
        iVar22 = 0;
        iVar18 = 0;
        pauVar24 = (undefined (*) [12])local_270;
        do {
          uVar33 = *(undefined4 *)pauVar24[1];
          auVar13._4_4_ = uStack_19c;
          auVar13._0_4_ = local_1a0;
          auVar13._8_4_ = uStack_198;
          auVar1 = vadd_t(*pauVar24,auVar13);
          *(int *)*pauVar24 = auVar1._0_4_;
          *(int *)(*pauVar24 + 4) = auVar1._4_4_;
          *(int *)(*pauVar24 + 8) = auVar1._8_4_;
          *(undefined4 *)pauVar24[1] = uVar33;
          pauVar25 = (undefined (*) [12])(*param_1 + iVar18);
          uVar33 = *(undefined4 *)pauVar25[1];
          auVar14._4_4_ = uStack_19c;
          auVar14._0_4_ = local_1a0;
          auVar14._8_4_ = uStack_198;
          auVar1 = vadd_t(*pauVar25,auVar14);
          *(int *)*pauVar25 = auVar1._0_4_;
          *(int *)(*pauVar25 + 4) = auVar1._4_4_;
          *(int *)(*pauVar25 + 8) = auVar1._8_4_;
          *(undefined4 *)pauVar25[1] = uVar33;
          iVar22 = iVar22 + 1;
          iVar18 = iVar18 + 0x10;
          pauVar24 = (undefined (*) [12])(pauVar24[1] + 4);
        } while (iVar22 < 8);
        local_280 = local_190;
        uStack_27c = uStack_18c;
        uStack_278 = uStack_188;
        local_274 = iStack_184;
        in_V00 = local_190;
      }
    }
  }
  FUN_089e6d10(param_1,local_270);
  puVar23 = (undefined4 *)param_1[0x40];
  pauVar24 = (undefined (*) [12])(param_1 + 0x3c);
  uVar33 = vdot_t(*pauVar24,*pauVar24);
  uVar34 = vcmp_s(8,uVar33,in_V00);
  vrsq_s(uVar33);
  uVar33 = vcmovt_s(in_V7D,(byte)uVar34 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(*pauVar24,uVar33);
  auVar2 = vcrsp_t(*(undefined (*) [12])(param_1 + 0x38),auVar1);
  uVar33 = vdot_t(auVar2,auVar2);
  uVar34 = vcmp_s(8,uVar33,auVar2._0_4_);
  vrsq_s(uVar33);
  uVar33 = vcmovt_s(in_V7D,(byte)uVar34 & 1);
  vpfxd(4,4,4,5);
  auVar2 = vscl_t(auVar2,uVar33);
  auVar3 = vcrsp_t(auVar1,auVar2);
  auVar4 = vidt_q();
  auVar5 = vidt_q();
  *puVar23 = auVar2._0_4_;
  puVar23[1] = auVar2._4_4_;
  puVar23[2] = auVar2._8_4_;
  puVar23[3] = auVar4._0_4_;
  puVar23[4] = auVar3._0_4_;
  puVar23[5] = auVar3._4_4_;
  puVar23[6] = auVar3._8_4_;
  puVar23[7] = auVar4._4_4_;
  puVar23[8] = auVar1._0_4_;
  puVar23[9] = auVar1._4_4_;
  puVar23[10] = auVar1._8_4_;
  puVar23[0xb] = auVar4._8_4_;
  puVar23[0xc] = auVar5._0_4_;
  puVar23[0xd] = auVar5._4_4_;
  puVar23[0xe] = auVar5._8_4_;
  puVar23[0xf] = auVar5._12_4_;
  pauVar24 = (undefined (*) [12])(param_1 + 0x30);
  auVar7._4_4_ = uStack_27c;
  auVar7._0_4_ = local_280;
  auVar7._8_4_ = uStack_278;
  auVar1 = vsub_t(auVar7,*pauVar21);
  *(int *)*pauVar24 = auVar1._0_4_;
  param_1[0x31] = auVar1._4_4_;
  param_1[0x32] = auVar1._8_4_;
  param_1[0x33] = local_274;
  iVar18 = *(int *)(*pauVar21 + 4);
  iVar22 = *(int *)(*pauVar21 + 8);
  iVar29 = *(int *)pauVar21[1];
  param_1[0x2c] = *(int *)*pauVar21;
  param_1[0x2d] = iVar18;
  param_1[0x2e] = iVar22;
  param_1[0x2f] = iVar29;
  *(undefined4 *)*pauVar21 = local_280;
  *(undefined4 *)(*pauVar21 + 4) = uStack_27c;
  *(undefined4 *)(*pauVar21 + 8) = uStack_278;
  *(int *)pauVar21[1] = local_274;
  iVar18 = param_1[0x40];
  *(undefined4 *)(iVar18 + 0x30) = local_280;
  *(undefined4 *)(iVar18 + 0x34) = uStack_27c;
  *(undefined4 *)(iVar18 + 0x38) = uStack_278;
  *(undefined4 *)(iVar18 + 0x3c) = 0x3f800000;
  param_1[0x58] = param_1[0x58] + 1;
  uVar33 = vdot_t(*pauVar24,*pauVar24);
  return uVar33;
}

