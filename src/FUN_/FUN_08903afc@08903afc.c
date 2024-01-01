#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08903afc(int param_1)

{
  bool bVar1;
  undefined auVar2 [12];
  undefined auVar3 [12];
  int iVar4;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  float local_230;
  float local_228;
  undefined4 local_224;
  undefined4 local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  uint local_160;
  uint local_15c;
  uint local_158;
  uint local_154;
  uint local_150;
  uint local_14c;
  uint local_148;
  uint local_144;
  uint local_140;
  undefined4 local_13c;
  float local_138;
  float local_134;
  float local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  undefined4 local_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  
  local_228 = 0.0;
  local_230 = 0.0;
  local_224 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar4 = *(int *)(param_1 + 0x14);
    local_230 = *(float *)(iVar4 + 0x20);
    local_228 = *(float *)(iVar4 + 0x28);
    local_224 = *(undefined4 *)(iVar4 + 0x2c);
  }
  iVar4 = *(int *)(param_1 + 0x28);
  if (iVar4 < 1) {
    if (iVar4 < 0) {
      iVar4 = *(int *)(param_1 + 0x50);
      goto LAB_08904558;
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
LAB_08903b90:
    uVar8 = 0;
    if (*(int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x44) * 0xc + 8) == 0) {
      bVar1 = false;
    }
    else {
      iVar4 = *(int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x44) * 0xc);
      if (*(int *)(param_1 + 0x2c) < iVar4) {
        piVar5 = (int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x44) * 0xc);
        uVar7 = *(uint *)(piVar5[2] + *(int *)(param_1 + 0x2c) * 0x34);
        if (*(int *)(param_1 + 0x2c) + 1 < *piVar5) {
          iVar4 = *(int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x44) * 0xc + 8) +
                  *(int *)(param_1 + 0x2c) * 0x34;
          local_1ec = *(undefined4 *)(iVar4 + 0x34);
          local_1e8 = *(float *)(iVar4 + 0x38);
          local_1e4 = *(float *)(iVar4 + 0x3c);
          local_1e0 = *(float *)(iVar4 + 0x40);
          local_1dc = *(undefined4 *)(iVar4 + 0x44);
          local_1d8 = *(undefined4 *)(iVar4 + 0x48);
          local_1d4 = *(undefined4 *)(iVar4 + 0x4c);
          local_1d0 = *(undefined4 *)(iVar4 + 0x50);
          local_1cc = *(undefined4 *)(iVar4 + 0x54);
          local_1c4 = *(undefined4 *)(iVar4 + 0x5c);
          local_1c8 = *(undefined4 *)(iVar4 + 0x58);
          local_1c0 = *(undefined4 *)(iVar4 + 0x60);
          local_1bc = *(undefined4 *)(iVar4 + 100);
        }
        else if (*(int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x44) * 0xc) + -1 < 0) {
          memset_jak(&local_1ec,0,0x34);
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
        }
        else {
          piVar5 = (int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x44) * 0xc);
          iVar4 = piVar5[2] + *piVar5 * 0x34;
          local_1ec = *(undefined4 *)(iVar4 + -0x34);
          local_1e8 = *(float *)(iVar4 + -0x30);
          local_1e4 = *(float *)(iVar4 + -0x2c);
          local_1e0 = *(float *)(iVar4 + -0x28);
          local_1dc = *(undefined4 *)(iVar4 + -0x24);
          local_1d8 = *(undefined4 *)(iVar4 + -0x20);
          local_1d4 = *(undefined4 *)(iVar4 + -0x1c);
          local_1d0 = *(undefined4 *)(iVar4 + -0x18);
          local_1cc = *(undefined4 *)(iVar4 + -0x14);
          local_1c4 = *(undefined4 *)(iVar4 + -0xc);
          local_1c8 = *(undefined4 *)(iVar4 + -0x10);
          local_1c0 = *(undefined4 *)(iVar4 + -8);
          local_1bc = *(undefined4 *)(iVar4 + -4);
          uVar8 = 1;
        }
        if ((int)(uVar7 >> 0x10) <= *(int *)(param_1 + 0x24)) {
          local_180 = local_1dc;
          local_17c = local_1d8;
          local_178 = local_1d4;
          local_174 = 0;
          auVar3._4_4_ = local_1e4 * 0.1;
          auVar3._0_4_ = local_1e8 * 0.1;
          auVar3._8_4_ = local_1e0 * 0.1;
          auVar2._4_4_ = 0;
          auVar2._0_4_ = local_230;
          auVar2._8_4_ = local_228;
          auVar2 = vadd_t(auVar3,auVar2);
          local_1b0 = auVar2._0_4_;
          uStack_1ac = auVar2._4_4_;
          uStack_1a8 = auVar2._8_4_;
          local_184 = 0;
          uStack_1a4 = 0;
          local_1a0 = local_1dc;
          uStack_19c = local_1d8;
          uStack_198 = local_1d4;
          uStack_194 = 0;
          local_190 = local_1b0;
          local_18c = uStack_1ac;
          local_188 = uStack_1a8;
          FUN_088fdffc(*(undefined4 *)(param_1 + 0x50),&local_1b0,&local_1a0,local_1ec._2_2_);
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
          goto LAB_08903ee0;
        }
        iVar4 = *(int *)(param_1 + 0x48);
      }
      else {
        *(int *)(param_1 + 0x2c) = iVar4 + -1;
        uVar8 = 1;
LAB_08903ee0:
        iVar4 = *(int *)(param_1 + 0x48);
      }
      iVar4 = *(int *)(*(int *)(param_1 + 0x10) + iVar4 * 0xc);
      if (*(int *)(param_1 + 0x30) < iVar4) {
        piVar5 = (int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x48) * 0xc);
        puVar6 = (uint *)(piVar5[2] + *(int *)(param_1 + 0x30) * 0x34);
        local_170 = *puVar6;
        local_16c = puVar6[1];
        local_168 = puVar6[2];
        local_164 = puVar6[3];
        local_160 = puVar6[4];
        local_15c = puVar6[5];
        local_158 = puVar6[6];
        local_154 = puVar6[7];
        local_150 = puVar6[8];
        local_148 = puVar6[10];
        local_14c = puVar6[9];
        local_144 = puVar6[0xb];
        local_140 = puVar6[0xc];
        if (*(int *)(param_1 + 0x30) + 1 < *piVar5) {
          iVar4 = *(int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x48) * 0xc + 8) +
                  *(int *)(param_1 + 0x30) * 0x34;
          local_13c = *(undefined4 *)(iVar4 + 0x34);
          local_138 = *(float *)(iVar4 + 0x38);
          local_134 = *(float *)(iVar4 + 0x3c);
          local_130 = *(float *)(iVar4 + 0x40);
          local_12c = *(undefined4 *)(iVar4 + 0x44);
          local_128 = *(undefined4 *)(iVar4 + 0x48);
          local_124 = *(undefined4 *)(iVar4 + 0x4c);
          local_120 = *(undefined4 *)(iVar4 + 0x50);
          local_11c = *(undefined4 *)(iVar4 + 0x54);
          local_114 = *(undefined4 *)(iVar4 + 0x5c);
          local_118 = *(undefined4 *)(iVar4 + 0x58);
          local_110 = *(undefined4 *)(iVar4 + 0x60);
          local_10c = *(undefined4 *)(iVar4 + 100);
        }
        else if (*(int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x48) * 0xc) + -1 < 0) {
          memset_jak(&local_13c,0,0x34);
          *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
        }
        else {
          piVar5 = (int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x48) * 0xc);
          iVar4 = piVar5[2] + *piVar5 * 0x34;
          local_13c = *(undefined4 *)(iVar4 + -0x34);
          local_138 = *(float *)(iVar4 + -0x30);
          local_134 = *(float *)(iVar4 + -0x2c);
          local_130 = *(float *)(iVar4 + -0x28);
          local_12c = *(undefined4 *)(iVar4 + -0x24);
          local_128 = *(undefined4 *)(iVar4 + -0x20);
          local_124 = *(undefined4 *)(iVar4 + -0x1c);
          local_120 = *(undefined4 *)(iVar4 + -0x18);
          local_11c = *(undefined4 *)(iVar4 + -0x14);
          local_114 = *(undefined4 *)(iVar4 + -0xc);
          local_118 = *(undefined4 *)(iVar4 + -0x10);
          local_110 = *(undefined4 *)(iVar4 + -8);
          local_10c = *(undefined4 *)(iVar4 + -4);
        }
        if ((int)(local_170 >> 0x10) <= *(int *)(param_1 + 0x24)) {
          local_100 = local_138 * 0.1;
          fStack_fc = local_134 * 0.1;
          fStack_f8 = local_130 * 0.1;
          local_d4 = 0;
          local_d0 = local_12c;
          local_cc = local_128;
          local_c8 = local_124;
          local_c4 = 0;
          uStack_f4 = 0;
          local_f0 = local_12c;
          uStack_ec = local_128;
          uStack_e8 = local_124;
          uStack_e4 = 0;
          local_e0 = local_100;
          local_dc = fStack_fc;
          local_d8 = fStack_f8;
          FUN_088fe03c(*(undefined4 *)(param_1 + 0x50),&local_100,&local_f0,local_13c._2_2_);
          *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
          goto LAB_089041f0;
        }
        iVar4 = *(int *)(param_1 + 0x10);
      }
      else {
        *(int *)(param_1 + 0x30) = iVar4 + -1;
LAB_089041f0:
        iVar4 = *(int *)(param_1 + 0x10);
      }
      if (*(int *)(iVar4 + 0xa4) == 0) {
        bVar1 = uVar8 + 1 < 2;
      }
      else if (*(int *)(param_1 + 0x34) < *(int *)(iVar4 + 0xa0)) {
        puVar6 = (uint *)(*(int *)(*(int *)(param_1 + 0x10) + 0xa4) +
                         *(int *)(param_1 + 0x34) * 0x30);
        local_c0 = *puVar6;
        local_bc = puVar6[1];
        local_b8 = puVar6[2];
        local_b0 = puVar6[4];
        local_b4 = puVar6[3];
        local_ac = puVar6[5];
        local_a8 = puVar6[6];
        local_a0 = puVar6[8];
        local_a4 = puVar6[7];
        local_9c = puVar6[9];
        local_98 = puVar6[10];
        local_94 = puVar6[0xb];
        bVar1 = uVar8 < 2;
        if (*(int *)(param_1 + 0x34) + 1 < *(int *)(*(int *)(param_1 + 0x10) + 0xa0)) {
          iVar4 = *(int *)(*(int *)(param_1 + 0x10) + 0xa4) + *(int *)(param_1 + 0x34) * 0x30;
          local_90 = *(undefined4 *)(iVar4 + 0x30);
          local_8c = *(float *)(iVar4 + 0x34);
          local_88 = *(float *)(iVar4 + 0x38);
          local_80 = *(undefined4 *)(iVar4 + 0x40);
          local_84 = *(float *)(iVar4 + 0x3c);
          local_7c = *(undefined4 *)(iVar4 + 0x44);
          local_78 = *(undefined4 *)(iVar4 + 0x48);
          local_70 = *(undefined4 *)(iVar4 + 0x50);
          local_74 = *(undefined4 *)(iVar4 + 0x4c);
          local_6c = *(undefined4 *)(iVar4 + 0x54);
          local_68 = *(undefined4 *)(iVar4 + 0x58);
          local_64 = *(undefined4 *)(iVar4 + 0x5c);
        }
        else if (*(int *)(*(int *)(param_1 + 0x10) + 0xa0) + -1 < 0) {
          memset_jak(&local_90,0,0x30);
          *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
        }
        else {
          iVar4 = *(int *)(*(int *)(param_1 + 0x10) + 0xa4) +
                  *(int *)(*(int *)(param_1 + 0x10) + 0xa0) * 0x30;
          local_90 = *(undefined4 *)(iVar4 + -0x30);
          local_8c = *(float *)(iVar4 + -0x2c);
          local_88 = *(float *)(iVar4 + -0x28);
          local_80 = *(undefined4 *)(iVar4 + -0x20);
          local_84 = *(float *)(iVar4 + -0x24);
          local_7c = *(undefined4 *)(iVar4 + -0x1c);
          local_78 = *(undefined4 *)(iVar4 + -0x18);
          local_70 = *(undefined4 *)(iVar4 + -0x10);
          local_74 = *(undefined4 *)(iVar4 + -0x14);
          local_6c = *(undefined4 *)(iVar4 + -0xc);
          local_68 = *(undefined4 *)(iVar4 + -8);
          local_64 = *(undefined4 *)(iVar4 + -4);
        }
        if ((int)(local_c0 >> 0x10) <= *(int *)(param_1 + 0x24)) {
          local_60 = local_8c * 0.1;
          local_5c = local_88 * 0.1;
          local_58 = local_84 * 0.1;
          local_54 = 0;
          if ((((uint)local_230 | (uint)local_228) & 0x7fffffff) != 0) {
            local_60 = local_230;
            local_5c = 0.0;
            local_58 = local_228;
            local_54 = local_224;
          }
          iVar4 = *(int *)(param_1 + 0x18);
          if (iVar4 < 0x13) {
            if (iVar4 < 0x10) goto LAB_089044f8;
LAB_089044d0:
            local_50 = local_60;
            fStack_4c = local_5c;
            fStack_48 = local_58;
            uStack_44 = local_54;
            FUN_088fe07c(local_6c,0,*(undefined4 *)(param_1 + 0x50),&local_50,local_90._2_2_);
            iVar4 = *(int *)(param_1 + 0x34);
          }
          else {
            if (iVar4 == 0x18) goto LAB_089044d0;
LAB_089044f8:
            local_50 = local_60;
            fStack_4c = local_5c;
            fStack_48 = local_58;
            uStack_44 = local_54;
            FUN_088fe07c(local_6c,local_b0,*(undefined4 *)(param_1 + 0x50),&local_50,local_90._2_2_)
            ;
            iVar4 = *(int *)(param_1 + 0x34);
          }
          *(int *)(param_1 + 0x34) = iVar4 + 1;
        }
      }
      else {
        *(int *)(param_1 + 0x34) = *(int *)(iVar4 + 0xa0) + -1;
        bVar1 = uVar8 + 1 < 2;
      }
    }
    if (bVar1) {
      iVar4 = *(int *)(param_1 + 0x50);
      goto LAB_08904558;
    }
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  else {
    if (iVar4 < 2) goto LAB_08903b90;
    if (2 < iVar4) {
      iVar4 = *(int *)(param_1 + 0x50);
      goto LAB_08904558;
    }
    *(undefined *)(param_1 + 0x4d) = 1;
  }
  iVar4 = *(int *)(param_1 + 0x50);
LAB_08904558:
  *(undefined4 *)(iVar4 + 0x350) = *(undefined4 *)(param_1 + 0x24);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  return;
}

