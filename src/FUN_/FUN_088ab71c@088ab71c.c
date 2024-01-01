#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088ab71c(undefined (*param_1) [16],undefined4 *param_2,float *param_3)

{
  char cVar1;
  undefined auVar2 [16];
  undefined auVar3 [12];
  undefined auVar4 [16];
  undefined auVar5 [36];
  undefined auVar6 [36];
  bool bVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 local_1f0;
  undefined *local_1ec;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
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
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined local_140;
  undefined4 local_130;
  undefined *local_12c;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined local_80;
  undefined *local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  float *local_30;
  
  local_34 = 0;
  DAT_08b00410 = *(undefined4 *)*param_1;
  DAT_08b00414 = *(undefined4 *)(*param_1 + 4);
  DAT_08b00418 = *(undefined4 *)(*param_1 + 8);
  DAT_08b0041c = *(undefined4 *)(*param_1 + 0xc);
  DAT_08b00420 = *param_2;
  DAT_08b00424 = param_2[1];
  DAT_08b00428 = param_2[2];
  DAT_08b0042c = param_2[3];
  fVar12 = INFINITY;
  *param_3 = INFINITY;
  local_38 = 0;
  local_30 = param_3;
  if ((DAT_08abd5bc != (int *)0x0) && (iVar10 = *DAT_08abd5bc, iVar10 != 0)) {
    local_40 = &DAT_08af5684;
    cVar1 = *(char *)(iVar10 + 0x281);
    fVar13 = fVar12;
    while( true ) {
      fVar12 = fVar13;
      if (cVar1 == '\0') {
        iVar11 = FUN_088a97cc(iVar10);
        if (iVar11 == 0) {
          bVar7 = false;
          if (*(int *)(iVar10 + 0x318) == 0) {
            local_1ec = local_40;
            local_140 = 0;
            local_1f0 = 6;
            puVar9 = (undefined4 *)FUN_088a9614(iVar10);
            iVar11 = *(int *)(iVar10 + 0x130);
            local_1e0 = *puVar9;
            uStack_1dc = puVar9[1];
            uStack_1d8 = puVar9[2];
            uStack_1d4 = puVar9[3];
            local_1d0 = puVar9[4];
            uStack_1cc = puVar9[5];
            uStack_1c8 = puVar9[6];
            uStack_1c4 = puVar9[7];
            local_1c0 = *(undefined4 *)(iVar11 + 0x80);
            uStack_1bc = *(undefined4 *)(iVar11 + 0x84);
            uStack_1b8 = *(undefined4 *)(iVar11 + 0x88);
            uStack_1b4 = *(undefined4 *)(iVar11 + 0x8c);
            local_1b0 = *(undefined4 *)(iVar11 + 0x90);
            uStack_1ac = *(undefined4 *)(iVar11 + 0x94);
            uStack_1a8 = *(undefined4 *)(iVar11 + 0x98);
            uStack_1a4 = *(undefined4 *)(iVar11 + 0x9c);
            local_1a0 = *(undefined4 *)(iVar11 + 0xa0);
            uStack_19c = *(undefined4 *)(iVar11 + 0xa4);
            uStack_198 = *(undefined4 *)(iVar11 + 0xa8);
            uStack_194 = *(undefined4 *)(iVar11 + 0xac);
            local_190 = *(undefined4 *)*(undefined (*) [12])(iVar11 + 0xb0);
            uStack_18c = *(undefined4 *)(iVar11 + 0xb4);
            uStack_188 = *(undefined4 *)(iVar11 + 0xb8);
            uStack_184 = *(undefined4 *)(iVar11 + 0xbc);
            local_140 = 1;
            auVar3 = vzero_t();
            uStack_174 = auVar3._0_4_;
            uStack_164 = auVar3._4_4_;
            uStack_154 = auVar3._8_4_;
            auVar5._32_4_ = uStack_198;
            auVar5._28_4_ = uStack_1a8;
            auVar5._24_4_ = uStack_1b8;
            auVar5._20_4_ = uStack_19c;
            auVar5._16_4_ = uStack_1ac;
            auVar5._12_4_ = uStack_1bc;
            auVar5._8_4_ = local_1a0;
            auVar5._4_4_ = local_1b0;
            auVar5._0_4_ = local_1c0;
            auVar3 = vtfm3_t(auVar5,*(undefined (*) [12])(iVar11 + 0xb0));
            auVar3 = vneg_t(auVar3);
            local_150 = auVar3._0_4_;
            uStack_14c = auVar3._4_4_;
            uStack_148 = auVar3._8_4_;
            local_180 = local_1c0;
            uStack_17c = local_1b0;
            uStack_178 = local_1a0;
            local_170 = uStack_1bc;
            uStack_16c = uStack_1ac;
            uStack_168 = uStack_19c;
            local_160 = uStack_1b8;
            uStack_15c = uStack_1a8;
            uStack_158 = uStack_198;
            uStack_144 = uStack_184;
            iVar11 = FUN_089ea250(&local_1f0,&DAT_08b00400);
            if (iVar11 != 0) {
              bVar7 = true;
            }
          }
          else {
            iVar11 = FUN_089ea250(*(undefined4 *)(iVar10 + 0x318),&DAT_08b00400);
            if (iVar11 != 0) {
              bVar7 = true;
            }
          }
          if (bVar7) {
            auVar2._12_4_ = DAT_08b0028c;
            auVar2._8_4_ = DAT_08b00288;
            auVar2._4_4_ = DAT_08b00284;
            auVar2._0_4_ = DAT_08b00280;
            auVar2 = vsub_q(*param_1,auVar2);
            uVar14 = vdot_t(auVar2._0_12_,auVar2._0_12_);
            fVar12 = (float)vsqrt_s(uVar14);
            if (fVar12 < fVar13) {
              iVar11 = *(int *)(iVar10 + 4);
              local_38 = iVar10;
            }
            else {
              iVar11 = *(int *)(iVar10 + 4);
              fVar12 = fVar13;
            }
          }
          else {
            iVar11 = *(int *)(iVar10 + 4);
          }
        }
        else {
          iVar11 = *(int *)(iVar10 + 4);
        }
      }
      else {
        iVar11 = *(int *)(iVar10 + 4);
      }
      if (iVar11 == 0) break;
      cVar1 = *(char *)(iVar11 + 0x281);
      iVar10 = iVar11;
      fVar13 = fVar12;
    }
  }
  piVar8 = (int *)FUN_088660c8();
  if (piVar8 == (int *)0x0) {
    *local_30 = fVar12;
    return 0;
  }
  iVar10 = *piVar8;
  local_3c = 0;
  if (iVar10 == 0) {
    local_3c = 0;
  }
  else {
    local_40 = &DAT_08af5684;
    cVar1 = *(char *)(iVar10 + 0x4c1);
    fVar13 = fVar12;
    while( true ) {
      fVar12 = fVar13;
      if (cVar1 == '\0') {
        iVar11 = (**(code **)(*(int *)(iVar10 + 0x14) + 0x5c))
                           (iVar10 + *(short *)(*(int *)(iVar10 + 0x14) + 0x58));
        if (iVar11 == 0) {
          iVar11 = *(int *)(iVar10 + 4);
        }
        else {
          local_12c = local_40;
          local_130 = 6;
          iVar11 = *(int *)(iVar10 + 0x130);
          puVar9 = *(undefined4 **)(iVar11 + 0x38);
          local_120 = *puVar9;
          uStack_11c = puVar9[1];
          uStack_118 = puVar9[2];
          uStack_114 = puVar9[3];
          local_110 = puVar9[4];
          uStack_10c = puVar9[5];
          uStack_108 = puVar9[6];
          uStack_104 = puVar9[7];
          local_100 = *(undefined4 *)(iVar11 + 0x80);
          uStack_fc = *(undefined4 *)(iVar11 + 0x84);
          uStack_f8 = *(undefined4 *)(iVar11 + 0x88);
          uStack_f4 = *(undefined4 *)(iVar11 + 0x8c);
          local_f0 = *(undefined4 *)(iVar11 + 0x90);
          uStack_ec = *(undefined4 *)(iVar11 + 0x94);
          uStack_e8 = *(undefined4 *)(iVar11 + 0x98);
          uStack_e4 = *(undefined4 *)(iVar11 + 0x9c);
          local_e0 = *(undefined4 *)(iVar11 + 0xa0);
          uStack_dc = *(undefined4 *)(iVar11 + 0xa4);
          uStack_d8 = *(undefined4 *)(iVar11 + 0xa8);
          uStack_d4 = *(undefined4 *)(iVar11 + 0xac);
          local_d0 = *(undefined4 *)*(undefined (*) [12])(iVar11 + 0xb0);
          uStack_cc = *(undefined4 *)(iVar11 + 0xb4);
          uStack_c8 = *(undefined4 *)(iVar11 + 0xb8);
          uStack_c4 = *(undefined4 *)(iVar11 + 0xbc);
          local_80 = 1;
          auVar3 = vzero_t();
          uStack_b4 = auVar3._0_4_;
          uStack_a4 = auVar3._4_4_;
          uStack_94 = auVar3._8_4_;
          auVar6._32_4_ = uStack_d8;
          auVar6._28_4_ = uStack_e8;
          auVar6._24_4_ = uStack_f8;
          auVar6._20_4_ = uStack_dc;
          auVar6._16_4_ = uStack_ec;
          auVar6._12_4_ = uStack_fc;
          auVar6._8_4_ = local_e0;
          auVar6._4_4_ = local_f0;
          auVar6._0_4_ = local_100;
          auVar3 = vtfm3_t(auVar6,*(undefined (*) [12])(iVar11 + 0xb0));
          auVar3 = vneg_t(auVar3);
          local_90 = auVar3._0_4_;
          uStack_8c = auVar3._4_4_;
          uStack_88 = auVar3._8_4_;
          local_c0 = local_100;
          uStack_bc = local_f0;
          uStack_b8 = local_e0;
          local_b0 = uStack_fc;
          uStack_ac = uStack_ec;
          uStack_a8 = uStack_dc;
          local_a0 = uStack_f8;
          uStack_9c = uStack_e8;
          uStack_98 = uStack_d8;
          uStack_84 = uStack_c4;
          iVar11 = FUN_089ea250(&local_130,&DAT_08b00400);
          if (iVar11 == 0) {
            iVar11 = *(int *)(iVar10 + 4);
          }
          else {
            auVar4._12_4_ = DAT_08b0028c;
            auVar4._8_4_ = DAT_08b00288;
            auVar4._4_4_ = DAT_08b00284;
            auVar4._0_4_ = DAT_08b00280;
            auVar2 = vsub_q(*param_1,auVar4);
            uVar14 = vdot_t(auVar2._0_12_,auVar2._0_12_);
            fVar12 = (float)vsqrt_s(uVar14);
            if (fVar12 <= fVar13) {
              iVar11 = *(int *)(iVar10 + 4);
              local_3c = iVar10;
            }
            else {
              iVar11 = *(int *)(iVar10 + 4);
              fVar12 = fVar13;
            }
          }
        }
      }
      else {
        iVar11 = *(int *)(iVar10 + 4);
      }
      if (iVar11 == 0) break;
      cVar1 = *(char *)(iVar11 + 0x4c1);
      iVar10 = iVar11;
      fVar13 = fVar12;
    }
  }
  if (local_3c == 0) {
    if (local_38 != 0) {
      switch(*(undefined4 *)(local_38 + 0x208)) {
      case 0:
      case 1:
      case 2:
      case 4:
        local_34 = 1;
        break;
      case 5:
      case 6:
        local_34 = 4;
        break;
      case 8:
        local_34 = 2;
      }
    }
  }
  else {
    local_34 = 3;
  }
  *local_30 = fVar12;
  return local_34;
}

