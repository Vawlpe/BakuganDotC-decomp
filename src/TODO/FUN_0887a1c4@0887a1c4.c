#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0887a1c4(float param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6,int param_7)

{
  undefined auVar1 [16];
  undefined auVar2 [12];
  undefined auVar3 [12];
  undefined auVar4 [12];
  undefined auVar5 [16];
  undefined auVar6 [12];
  undefined auVar7 [12];
  undefined auVar8 [64];
  undefined auVar9 [12];
  undefined auVar10 [12];
  undefined auVar11 [12];
  undefined auVar12 [64];
  bool bVar13;
  undefined auVar14 [12];
  undefined auVar15 [12];
  undefined auVar16 [12];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [12];
  int *piVar20;
  int iVar21;
  float *pfVar22;
  int iVar23;
  uint uVar24;
  undefined (*pauVar25) [12];
  undefined (*pauVar26) [16];
  undefined (*pauVar27) [16];
  undefined (*pauVar28) [12];
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 in_V73;
  undefined4 in_V7D;
  undefined4 uVar33;
  undefined4 local_1c0;
  float local_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 uStack_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined (*local_150) [12];
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined auStack_130 [16];
  undefined4 local_120;
  float local_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  int local_5c;
  undefined4 local_58;
  undefined4 *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined (*local_48) [16];
  
  iVar21 = *(int *)(param_2 + 0xf8);
  local_58 = param_4;
  local_50 = param_6;
  local_4c = param_5;
  if (iVar21 < 1) {
    if (iVar21 < 0) {
      iVar21 = *(int *)(param_2 + 0xbc);
    }
    else {
      *(undefined4 *)(param_2 + 0x104) = 0;
      *(undefined4 *)(param_2 + 0x108) = 0x41a00000;
      *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_2 + 0x60);
      *(undefined4 *)(param_2 + 0x94) = *(undefined4 *)(param_2 + 100);
      *(undefined4 *)(param_2 + 0x98) = *(undefined4 *)(param_2 + 0x68);
      *(undefined4 *)(param_2 + 0x9c) = *(undefined4 *)(param_2 + 0x6c);
      fVar29 = (float)atan2f(*(undefined4 *)(param_2 + 0x74),
                             SQRT(*(float *)(param_2 + 0x70) * *(float *)(param_2 + 0x70) +
                                  *(float *)(param_2 + 0x78) * *(float *)(param_2 + 0x78)));
      fVar31 = 0.7853982;
      pauVar25 = (undefined (*) [12])(param_2 + 0x70);
      if (0.7853982 < ABS(fVar29)) {
        if (fVar29 <= 0.0) {
          fVar31 = -0.7853982;
        }
        vpfxs(0x12,1,0,3);
        auVar2 = vmov_t(*pauVar25);
        uVar24 = auVar2._0_4_;
        uVar30 = auVar2._8_4_;
        auVar4._4_4_ = 0;
        auVar4._0_4_ = uVar24;
        auVar4._8_4_ = uVar30;
        auVar3._4_4_ = 0;
        auVar3._0_4_ = uVar24;
        auVar3._8_4_ = uVar30;
        auVar2._4_4_ = 0;
        auVar2._0_4_ = uVar24;
        auVar2._8_4_ = uVar30;
        uVar30 = vdot_t(auVar2,auVar3);
        uVar33 = vcmp_s(8,uVar30,uVar24);
        vrsq_s(uVar30);
        uVar30 = vcmovt_s(in_V7D,(byte)uVar33 & 1);
        vpfxd(4,4,4,5);
        auVar2 = vscl_t(auVar4,uVar30);
        local_1a0 = auVar2._0_4_;
        local_19c = auVar2._4_4_;
        uStack_198 = auVar2._8_4_;
        uVar30 = vcst_s(6);
        uVar30 = vmul_s(uVar30,fVar31 - fVar29);
        uStack_184 = vcos_s(uVar30);
        uVar30 = vsin_s(uVar30);
        auVar2 = vscl_t(auVar2,uVar30);
        local_190 = auVar2._0_4_;
        uStack_18c = auVar2._4_4_;
        uStack_188 = auVar2._8_4_;
        auVar18._12_4_ = uStack_184;
        auVar18._0_12_ = auVar2;
        auVar5._12_4_ = uStack_184;
        auVar5._0_12_ = auVar2;
        vpfxs(0x10,0x11,0x12,3);
        auVar5 = vmov_q(auVar5);
        uVar30 = vmov_s(in_V73);
        auVar1._12_4_ = uVar30;
        auVar1._8_4_ = *(undefined4 *)(param_2 + 0x78);
        auVar1._4_4_ = *(undefined4 *)(param_2 + 0x74);
        auVar1._0_4_ = *(undefined4 *)*pauVar25;
        auVar1 = vqmul_q(auVar18,auVar1);
        auVar1 = vqmul_q(auVar1,auVar5);
        local_1b0 = auVar1._0_4_;
        uStack_1ac = auVar1._4_4_;
        uStack_1a8 = auVar1._8_4_;
        uStack_1a4 = auVar1._12_4_;
        *(undefined4 *)*pauVar25 = local_1b0;
        *(undefined4 *)(param_2 + 0x74) = uStack_1ac;
        *(undefined4 *)(param_2 + 0x78) = uStack_1a8;
        *(undefined4 *)(param_2 + 0x7c) = uStack_1a4;
      }
      iVar21 = FUN_088244ac(DAT_08b00920,param_3,(undefined4 *)(param_2 + 0x90),pauVar25);
      iVar23 = *(int *)(param_2 + 0xb0);
      *(int *)(param_2 + 0xc0) = iVar21;
      *(int *)(iVar21 + 0x1fc) = iVar23;
      if (iVar23 != 0) {
        *(undefined4 *)(iVar21 + 0x200) = *(undefined4 *)(iVar23 + 0xc);
      }
      iVar21 = *(int *)(*(int *)(param_2 + 0xc0) + 0x14);
      (**(code **)(iVar21 + 0x14))(*(int *)(param_2 + 0xc0) + (int)*(short *)(iVar21 + 0x10));
      *(int *)(param_2 + 0xf8) = *(int *)(param_2 + 0xf8) + 1;
      iVar21 = *(int *)(param_2 + 0xf4);
LAB_0887a3c8:
      if (param_7 + 5 < iVar21) {
        if (*(int *)(param_2 + 0xc0) == 0) {
          iVar21 = *(int *)(param_2 + 0xf4);
        }
        else {
          FUN_089f5124(*(undefined4 *)(*(int *)(param_2 + 0xc0) + 0x214));
          *(undefined4 *)(param_2 + 0xc0) = 0;
          *(undefined4 *)(*(int *)(param_2 + 0xbc) + 500) = 0;
          iVar21 = *(int *)(param_2 + 0xf4);
        }
      }
      else {
        iVar21 = *(int *)(param_2 + 0xf4);
      }
      if (param_7 + -5 < iVar21) {
        pfVar22 = (float *)(*(int *)(param_2 + 0xbc) + 0xbc);
        *(float *)(param_2 + 0x108) = *(float *)(param_2 + 0x108) - 0.5;
        *pfVar22 = *pfVar22 - 0.08;
        if (*(float *)(param_2 + 0x108) <= 0.1) {
          FUN_08876ee0(param_2);
          return;
        }
      }
      else {
        *(float *)(param_2 + 0x108) =
             *(float *)(param_2 + 0x108) + (param_1 - *(float *)(param_2 + 0x108)) * 0.2;
        bVar13 = false;
        if ((2 < *(int *)(*(int *)(param_2 + 0xb0) + 0x140)) &&
           (bVar13 = false, *(int *)(*(int *)(param_2 + 0xb0) + 0x140) < 7)) {
          bVar13 = true;
        }
        if ((!bVar13) && ((*(uint *)(*(int *)(param_2 + 0xb0) + 0x148) & 0x20) == 0)) {
          iVar21 = *(int *)(param_2 + 0xbc);
          goto LAB_0887a470;
        }
        *(int *)(param_2 + 0xf4) = param_7;
      }
      iVar21 = *(int *)(param_2 + 0xbc);
    }
  }
  else {
    if (iVar21 < 3) {
      iVar21 = *(int *)(param_2 + 0xf4);
      goto LAB_0887a3c8;
    }
    iVar21 = *(int *)(param_2 + 0xbc);
  }
LAB_0887a470:
  local_54 = (undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(iVar21 + 0x1d0) = *(undefined4 *)(param_2 + 0x108);
  pauVar26 = (undefined (*) [16])(param_2 + 0x60);
  pauVar25 = (undefined (*) [12])(param_2 + 0x70);
  pauVar28 = (undefined (*) [12])(param_2 + 0xd0);
  if (*(int *)(param_2 + 0xf4) < param_7) {
    fVar31 = *(float *)(param_2 + 0x104) + (336.0 - *(float *)(param_2 + 0x104)) * 0.2;
    *(float *)(param_2 + 0x104) = fVar31;
    if (280.0 < fVar31) {
      *(undefined4 *)(param_2 + 0x104) = 0x438c0000;
    }
    iVar21 = *(int *)(param_2 + 0xc0);
  }
  else {
    iVar21 = *(int *)(param_2 + 0xc0);
  }
  if (iVar21 != 0) {
    *(undefined4 *)(*(int *)(param_2 + 0xc0) + 0x1d0) = *(undefined4 *)(param_2 + 0x108);
  }
  iVar21 = *(int *)(*(int *)(param_2 + 0xb0) + 0x130);
  iVar23 = *(int *)(param_2 + 200);
  auVar8._60_4_ = *(undefined4 *)(iVar21 + 0xbc);
  auVar8._56_4_ = *(undefined4 *)(iVar21 + 0xac);
  auVar8._52_4_ = *(undefined4 *)(iVar21 + 0x9c);
  auVar8._48_4_ = *(undefined4 *)(iVar21 + 0x8c);
  auVar8._44_4_ = *(undefined4 *)(iVar21 + 0xb8);
  auVar8._40_4_ = *(undefined4 *)(iVar21 + 0xa8);
  auVar8._36_4_ = *(undefined4 *)(iVar21 + 0x98);
  auVar8._32_4_ = *(undefined4 *)(iVar21 + 0x88);
  auVar8._28_4_ = *(undefined4 *)(iVar21 + 0xb4);
  auVar8._24_4_ = *(undefined4 *)(iVar21 + 0xa4);
  auVar8._20_4_ = *(undefined4 *)(iVar21 + 0x94);
  auVar8._16_4_ = *(undefined4 *)(iVar21 + 0x84);
  auVar8._12_4_ = *(undefined4 *)(iVar21 + 0xb0);
  auVar8._8_4_ = *(undefined4 *)(iVar21 + 0xa0);
  auVar8._4_4_ = *(undefined4 *)(iVar21 + 0x90);
  auVar8._0_4_ = *(undefined4 *)(iVar21 + 0x80);
  auVar12._60_4_ = *(undefined4 *)(iVar23 + 0xbc);
  auVar12._56_4_ = *(undefined4 *)(iVar23 + 0xac);
  auVar12._52_4_ = *(undefined4 *)(iVar23 + 0x9c);
  auVar12._48_4_ = *(undefined4 *)(iVar23 + 0x8c);
  auVar12._44_4_ = *(undefined4 *)(iVar23 + 0xb8);
  auVar12._40_4_ = *(undefined4 *)(iVar23 + 0xa8);
  auVar12._36_4_ = *(undefined4 *)(iVar23 + 0x98);
  auVar12._32_4_ = *(undefined4 *)(iVar23 + 0x88);
  auVar12._28_4_ = *(undefined4 *)(iVar23 + 0xb4);
  auVar12._24_4_ = *(undefined4 *)(iVar23 + 0xa4);
  auVar12._20_4_ = *(undefined4 *)(iVar23 + 0x94);
  auVar12._16_4_ = *(undefined4 *)(iVar23 + 0x84);
  auVar12._12_4_ = *(undefined4 *)(iVar23 + 0xb0);
  auVar12._8_4_ = *(undefined4 *)(iVar23 + 0xa0);
  auVar12._4_4_ = *(undefined4 *)(iVar23 + 0x90);
  auVar12._0_4_ = *(undefined4 *)(iVar23 + 0x80);
  auVar8 = vmmul_q(auVar8,auVar12);
  *(int *)(param_2 + 0x20) = auVar8._0_4_;
  *(int *)(param_2 + 0x24) = auVar8._16_4_;
  *(int *)(param_2 + 0x28) = auVar8._32_4_;
  *(int *)(param_2 + 0x2c) = auVar8._48_4_;
  *(int *)(param_2 + 0x30) = auVar8._4_4_;
  *(int *)(param_2 + 0x34) = auVar8._20_4_;
  *(int *)(param_2 + 0x38) = auVar8._36_4_;
  *(int *)(param_2 + 0x3c) = auVar8._52_4_;
  *(int *)(param_2 + 0x40) = auVar8._8_4_;
  *(int *)(param_2 + 0x44) = auVar8._24_4_;
  *(int *)(param_2 + 0x48) = auVar8._40_4_;
  *(int *)(param_2 + 0x4c) = auVar8._56_4_;
  *(int *)(param_2 + 0x50) = auVar8._12_4_;
  *(int *)(param_2 + 0x54) = auVar8._28_4_;
  *(int *)(param_2 + 0x58) = auVar8._44_4_;
  *(int *)(param_2 + 0x5c) = auVar8._60_4_;
  uVar30 = *(undefined4 *)(param_2 + 0x54);
  uVar33 = *(undefined4 *)(param_2 + 0x58);
  uVar32 = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)*pauVar26 = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_2 + 100) = uVar30;
  *(undefined4 *)(param_2 + 0x68) = uVar33;
  *(undefined4 *)(param_2 + 0x6c) = uVar32;
  if (*(int *)(param_2 + 0xb8) == 0x2a) {
    *(float *)(param_2 + 100) = *(float *)(param_2 + 100) + 40.0;
    auVar2 = vscl_t(*pauVar25,0x41f00000);
    local_180 = auVar2._0_4_;
    uStack_17c = auVar2._4_4_;
    uStack_178 = auVar2._8_4_;
    uVar30 = *(undefined4 *)(param_2 + 0x6c);
    auVar2 = vadd_t(*(undefined (*) [12])*pauVar26,auVar2);
    *(int *)*pauVar26 = auVar2._0_4_;
    *(int *)(param_2 + 100) = auVar2._4_4_;
    *(int *)(param_2 + 0x68) = auVar2._8_4_;
    *(undefined4 *)(param_2 + 0x6c) = uVar30;
  }
  uVar30 = *(undefined4 *)(param_2 + 0x74);
  uVar33 = *(undefined4 *)(param_2 + 0x78);
  uVar32 = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)*pauVar28 = *(undefined4 *)*pauVar25;
  *(undefined4 *)(param_2 + 0xd4) = uVar30;
  *(undefined4 *)(param_2 + 0xd8) = uVar33;
  *(undefined4 *)(param_2 + 0xdc) = uVar32;
  auVar2 = vscl_t(*pauVar28,*(float *)(param_2 + 0x104) * 10.0);
  *(int *)*pauVar28 = auVar2._0_4_;
  *(int *)(param_2 + 0xd4) = auVar2._4_4_;
  *(int *)(param_2 + 0xd8) = auVar2._8_4_;
  *(undefined4 *)(param_2 + 0xdc) = in_V7D;
  if (*(int *)(param_2 + 0xc0) == 0) {
    iVar21 = *(int *)(param_2 + 0xbc);
  }
  else {
    iVar21 = *(int *)(param_2 + 0xc0);
    uStack_164 = *(undefined4 *)(param_2 + 0x7c);
    auVar2 = vneg_t(*pauVar25);
    local_170 = auVar2._0_4_;
    uStack_16c = auVar2._4_4_;
    uStack_168 = auVar2._8_4_;
    *(undefined4 *)(iVar21 + 0x90) = local_170;
    *(undefined4 *)(iVar21 + 0x94) = uStack_16c;
    *(undefined4 *)(iVar21 + 0x98) = uStack_168;
    *(undefined4 *)(iVar21 + 0x9c) = uStack_164;
    iVar21 = *(int *)(param_2 + 0xbc);
  }
  uVar30 = *(undefined4 *)(param_2 + 0x74);
  uVar33 = *(undefined4 *)(param_2 + 0x78);
  uVar32 = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(iVar21 + 0x90) = *(undefined4 *)*pauVar25;
  *(undefined4 *)(iVar21 + 0x94) = uVar30;
  *(undefined4 *)(iVar21 + 0x98) = uVar33;
  *(undefined4 *)(iVar21 + 0x9c) = uVar32;
  local_5c = 0;
  if (*(int *)(param_2 + 0xf4) < param_7) {
    piVar20 = (int *)FUN_088660c8();
    if (piVar20 != (int *)0x0) {
      iVar21 = *piVar20;
      DAT_08b00680 = *(undefined4 *)*pauVar26;
      DAT_08b00688 = *(undefined4 *)(param_2 + 0x68);
      DAT_08b00684 = *(float *)(param_2 + 100) - 50.0;
      DAT_08b00690 = *(undefined4 *)*pauVar28;
      DAT_08b00694 = *(undefined4 *)(param_2 + 0xd4);
      DAT_08b00698 = *(undefined4 *)(param_2 + 0xd8);
      DAT_08b006a0 = param_1 * 6.0 * 0.6;
      DAT_08b0068c = DAT_08b006a0 * DAT_08b006a0;
      uVar30 = vdot_t(*pauVar28,*pauVar28);
      DAT_08b0069c = vsqrt_s(uVar30);
      if (iVar21 != 0) {
        iVar23 = *(int *)(iVar21 + 0x14);
        while( true ) {
          iVar23 = (**(code **)(iVar23 + 0x5c))(iVar21 + *(short *)(iVar23 + 0x58));
          if ((iVar23 == 0) &&
             (iVar23 = (**(code **)(*(int *)(iVar21 + 0x14) + 0x9c))
                                 (iVar21 + *(short *)(*(int *)(iVar21 + 0x14) + 0x98)), iVar23 == 0)
             ) {
            iVar21 = *(int *)(iVar21 + 4);
          }
          else {
            local_1c0 = *(undefined4 *)*pauVar26;
            local_1bc = *(float *)(param_2 + 100);
            uStack_1b8 = *(undefined4 *)(param_2 + 0x68);
            uStack_1b4 = *(undefined4 *)(param_2 + 0x6c);
            iVar23 = FUN_089e565c(&DAT_08b006b0,*(int *)(iVar21 + 0x20c) + 0x30,&local_1c0,
                                  0xffffffff);
            if (iVar23 != 0) {
              auVar17._4_4_ = local_1bc;
              auVar17._0_4_ = local_1c0;
              auVar17._8_4_ = uStack_1b8;
              auVar17._12_4_ = uStack_1b4;
              auVar1 = vsub_q(*pauVar26,auVar17);
              uVar30 = vdot_t(auVar1._0_12_,auVar1._0_12_);
              fVar31 = (float)vsqrt_s(uVar30);
              fVar31 = fVar31 * 0.1 + 3.0;
              if (fVar31 < 10.0) {
                fVar31 = 10.0;
              }
              else if (280.0 < fVar31) {
                fVar31 = 280.0;
              }
              *(float *)(param_2 + 0x104) = fVar31;
              auVar2 = vscl_t(*pauVar25,fVar31 * 10.0);
              local_160 = auVar2._0_4_;
              uStack_15c = auVar2._4_4_;
              uStack_158 = auVar2._8_4_;
              *(undefined4 *)*pauVar28 = local_160;
              *(undefined4 *)(param_2 + 0xd4) = uStack_15c;
              *(undefined4 *)(param_2 + 0xd8) = uStack_158;
              *(undefined4 *)(param_2 + 0xdc) = in_V7D;
            }
            local_1bc = local_1bc + 30.0;
            iVar21 = *(int *)(iVar21 + 4);
          }
          if (iVar21 == 0) break;
          iVar23 = *(int *)(iVar21 + 0x14);
        }
      }
      goto LAB_0887a898;
    }
    iVar21 = *(int *)(param_2 + 0xf4);
  }
  else {
LAB_0887a898:
    iVar21 = *(int *)(param_2 + 0xf4);
  }
  if ((iVar21 < param_7) &&
     (iVar21 = FUN_088783d0(param_1 * 6.0 * 0.5,param_2,pauVar26,pauVar28,local_50,0,1,0x31bf337e),
     iVar21 != 0)) {
    pauVar27 = (undefined (*) [16])&DAT_08aba930;
    iVar21 = local_5c;
    if (DAT_08aba940 == 0) {
LAB_0887aba4:
      local_5c = iVar21;
      FUN_0880d354();
      if ((*(uint *)(param_2 + 0xfc) & 1) == 0) {
        auVar14._4_4_ = DAT_08b00294;
        auVar14._0_4_ = DAT_08b00290;
        auVar14._8_4_ = DAT_08b00298;
        auVar2 = vscl_t(auVar14,0x40400000);
        local_100 = auVar2._0_4_;
        uStack_fc = auVar2._4_4_;
        uStack_f8 = auVar2._8_4_;
        auVar9._8_4_ = DAT_08aba938;
        auVar9._4_4_ = DAT_08aba934;
        auVar9._0_4_ = DAT_08aba930;
        auVar2 = vadd_t(auVar9,auVar2);
        local_110 = auVar2._0_4_;
        uStack_10c = auVar2._4_4_;
        uStack_108 = auVar2._8_4_;
        uStack_104 = DAT_08aba93c;
        iVar23 = FUN_08824024(DAT_08b00920,local_4c,&local_110,&DAT_08b00290);
        (**(code **)(*(int *)(iVar23 + 0x14) + 0x14))
                  (iVar23 + *(short *)(*(int *)(iVar23 + 0x14) + 0x10));
        if (DAT_08b00290 * DAT_08b00290 + DAT_08b00298 * DAT_08b00298 < 1e-05) {
          bVar13 = false;
          if (0.0001 < DAT_08b00294 * DAT_08b00294) {
            bVar13 = true;
          }
        }
        else {
          bVar13 = false;
        }
        if (!bVar13) {
          if (DAT_08b00170 == 0) {
            DAT_08b00170 = 1;
            DAT_08b00160 = 0;
            DAT_08b00168 = 0;
            DAT_08b00164 = 0xbf800000;
            DAT_08b0016c = 0;
          }
          auVar16._4_4_ = DAT_08b00294;
          auVar16._0_4_ = DAT_08b00290;
          auVar16._8_4_ = DAT_08b00298;
          auVar15._4_4_ = DAT_08b00294;
          auVar15._0_4_ = DAT_08b00290;
          auVar15._8_4_ = DAT_08b00298;
          auVar10._8_4_ = DAT_08b00168;
          auVar10._4_4_ = DAT_08b00164;
          auVar10._0_4_ = DAT_08b00160;
          auVar2 = vcrsp_t(auVar10,auVar15);
          auVar3 = vcrsp_t(auVar16,auVar2);
          auVar1 = vidt_q();
          auVar5 = vidt_q();
          auVar6 = vzero_t();
          auVar4 = vcrsp_t(auVar2,auVar3);
          auVar2 = vcrsp_t(auVar3,auVar4);
          uVar30 = vdot_t(auVar2,auVar2);
          uVar33 = vdot_t(auVar3,auVar3);
          uVar32 = vdot_t(auVar4,auVar4);
          auVar11._8_4_ = uVar32;
          auVar11._4_4_ = uVar33;
          auVar11._0_4_ = uVar30;
          auVar7 = vrsq_t(auVar11);
          auVar2 = vscl_t(auVar2,auVar7._0_4_);
          auVar3 = vscl_t(auVar3,auVar7._4_4_);
          auVar4 = vscl_t(auVar4,auVar7._8_4_);
          *(undefined4 *)(iVar23 + 0x20) = auVar2._0_4_;
          *(int *)(iVar23 + 0x24) = auVar2._4_4_;
          *(int *)(iVar23 + 0x28) = auVar2._8_4_;
          *(int *)(iVar23 + 0x2c) = auVar6._0_4_;
          *(int *)(iVar23 + 0x30) = auVar3._0_4_;
          *(int *)(iVar23 + 0x34) = auVar3._4_4_;
          *(int *)(iVar23 + 0x38) = auVar3._8_4_;
          *(int *)(iVar23 + 0x3c) = auVar1._4_4_;
          *(int *)(iVar23 + 0x40) = auVar4._0_4_;
          *(int *)(iVar23 + 0x44) = auVar4._4_4_;
          *(int *)(iVar23 + 0x48) = auVar4._8_4_;
          *(int *)(iVar23 + 0x4c) = auVar6._8_4_;
          *(int *)(iVar23 + 0x50) = auVar5._0_4_;
          *(int *)(iVar23 + 0x54) = auVar5._4_4_;
          *(int *)(iVar23 + 0x58) = auVar5._8_4_;
          *(int *)(iVar23 + 0x5c) = auVar5._12_4_;
          goto LAB_0887ad2c;
        }
        auVar8 = vmidt_q();
        *(undefined4 *)(iVar23 + 0x20) = auVar8._0_4_;
        *(int *)(iVar23 + 0x24) = auVar8._16_4_;
        *(int *)(iVar23 + 0x28) = auVar8._32_4_;
        *(int *)(iVar23 + 0x2c) = auVar8._48_4_;
        *(int *)(iVar23 + 0x30) = auVar8._8_4_;
        *(int *)(iVar23 + 0x34) = auVar8._24_4_;
        *(int *)(iVar23 + 0x38) = auVar8._40_4_;
        *(int *)(iVar23 + 0x3c) = auVar8._56_4_;
        *(int *)(iVar23 + 0x40) = auVar8._4_4_;
        *(int *)(iVar23 + 0x44) = auVar8._20_4_;
        *(int *)(iVar23 + 0x48) = auVar8._36_4_;
        *(int *)(iVar23 + 0x4c) = auVar8._52_4_;
        *(int *)(iVar23 + 0x50) = auVar8._12_4_;
        *(int *)(iVar23 + 0x54) = auVar8._28_4_;
        *(int *)(iVar23 + 0x58) = auVar8._44_4_;
        *(int *)(iVar23 + 0x5c) = auVar8._60_4_;
        iVar23 = *(int *)(param_2 + 0xfc);
      }
      else {
LAB_0887ad2c:
        iVar23 = *(int *)(param_2 + 0xfc);
      }
      *(int *)(param_2 + 0xfc) = iVar23 + 1;
    }
    else {
      iVar21 = *(int *)(*(int *)(DAT_08aba940 + 0x138) + 8);
      if ((iVar21 == 0) || (0x83 < iVar21)) goto LAB_0887aba4;
      uVar24 = 0;
      local_5c = iVar21;
      iVar23 = FUN_0881b22c();
      if ((iVar23 != 0) && (iVar23 = FUN_0880d354(), iVar23 != 0)) {
        uVar24 = 3;
      }
      if (*(int *)(DAT_08aba940 + 0x110) == 0) {
        iVar23 = *(int *)(param_2 + 0x100);
      }
      else {
        iVar23 = *(int *)(DAT_08aba940 + 0x138);
        local_5c = iVar21;
        if ((*(uint *)(param_2 + 0x100) & uVar24) == 0) {
          local_140 = *(undefined4 *)*pauVar26;
          uStack_13c = *(undefined4 *)(param_2 + 100);
          uStack_138 = *(undefined4 *)(param_2 + 0x68);
          uStack_134 = *(undefined4 *)(param_2 + 0x6c);
          local_150 = (undefined (*) [12])(*(int *)(DAT_08aba940 + 0x110) + 0x30);
          iVar21 = (**(code **)(*(int *)(iVar23 + 0x14) + 0x5c))
                             (iVar23 + *(short *)(*(int *)(iVar23 + 0x14) + 0x58));
          if ((iVar21 == 0) &&
             (iVar21 = (**(code **)(*(int *)(iVar23 + 0x14) + 0x9c))
                                 (iVar23 + *(short *)(*(int *)(iVar23 + 0x14) + 0x98)), iVar21 == 0)
             ) {
            auVar19._4_4_ = uStack_13c;
            auVar19._0_4_ = local_140;
            auVar19._8_4_ = uStack_138;
            auVar2 = vsub_t(auVar19,*local_150);
            uVar30 = vdot_t(auVar2,auVar2);
            uVar33 = vcmp_s(8,uVar30,auVar2._0_4_);
            vrsq_s(uVar30);
            uVar30 = vcmovt_s(in_V7D,(byte)uVar33 & 1);
            uVar30 = vmul_s(uVar30,*(undefined4 *)(*(int *)(iVar23 + 0x4bc) + 0xc));
            auVar2 = vscl_t(auVar2,uVar30);
            local_140 = auVar2._0_4_;
            uStack_13c = auVar2._4_4_;
            uStack_138 = auVar2._8_4_;
            uStack_134 = in_V7D;
            iVar21 = FUN_088244ac(DAT_08b00920,local_58,local_150,pauVar25);
            *(undefined4 *)(iVar21 + 0x180) = local_140;
            *(undefined4 *)(iVar21 + 0x184) = uStack_13c;
            *(undefined4 *)(iVar21 + 0x188) = uStack_138;
            *(undefined4 *)(iVar21 + 0x18c) = uStack_134;
          }
          else {
            local_48 = (undefined (*) [16])&DAT_08aba930;
            local_120 = *(undefined4 *)*local_150;
            uStack_118 = *(undefined4 *)(*local_150 + 8);
            uStack_114 = *(undefined4 *)local_150[1];
            local_11c = local_1bc;
            DAT_08b00410 = *(undefined4 *)*pauVar26;
            DAT_08b00414 = *(undefined4 *)(param_2 + 100);
            DAT_08b00418 = *(undefined4 *)(param_2 + 0x68);
            DAT_08b0041c = *(undefined4 *)(param_2 + 0x6c);
            DAT_08b00420 = *(undefined4 *)*pauVar28;
            DAT_08b00424 = *(undefined4 *)(param_2 + 0xd4);
            DAT_08b00428 = *(undefined4 *)(param_2 + 0xd8);
            DAT_08b0042c = *(undefined4 *)(param_2 + 0xdc);
            FUN_089e8894(&DAT_08b00400,&local_120,auStack_130,&local_120);
            auVar6._4_4_ = uStack_13c;
            auVar6._0_4_ = local_140;
            auVar6._8_4_ = uStack_138;
            auVar7._4_4_ = local_11c;
            auVar7._0_4_ = local_120;
            auVar7._8_4_ = uStack_118;
            auVar2 = vsub_t(auVar6,auVar7);
            uVar30 = vdot_t(auVar2,auVar2);
            uVar33 = vcmp_s(8,uVar30,auVar2._0_4_);
            vrsq_s(uVar30);
            uVar30 = vcmovt_s(in_V7D,(byte)uVar33 & 1);
            uVar30 = vmul_s(uVar30,*(undefined4 *)(*(int *)(iVar23 + 0x4bc) + 0xc));
            auVar2 = vscl_t(auVar2,uVar30);
            local_140 = auVar2._0_4_;
            uStack_13c = auVar2._4_4_;
            uStack_138 = auVar2._8_4_;
            uStack_134 = in_V7D;
            iVar21 = FUN_08824024(DAT_08b00920,local_58,&local_120,pauVar25);
            *(undefined4 *)(iVar21 + 0x180) = local_140;
            *(undefined4 *)(iVar21 + 0x184) = uStack_13c;
            *(undefined4 *)(iVar21 + 0x188) = uStack_138;
            *(undefined4 *)(iVar21 + 0x18c) = uStack_134;
            pauVar27 = local_48;
          }
        }
        iVar21 = local_5c;
        if (local_5c < 0x21) {
          if ((*(uint *)(iVar23 + 0x148) & 0x10) == 0) {
            iVar23 = *(int *)(param_2 + 0x100);
          }
          else {
            auVar1 = vsub_q(*pauVar26,*pauVar27);
            uVar30 = vdot_t(auVar1._0_12_,auVar1._0_12_);
            fVar31 = (float)vsqrt_s(uVar30);
            fVar31 = fVar31 * 0.1 + 5.0;
            if (fVar31 < 10.0) {
              fVar31 = 10.0;
            }
            else if (280.0 < fVar31) {
              fVar31 = 280.0;
            }
            *(float *)(param_2 + 0x104) = fVar31;
            auVar2 = vscl_t(*pauVar28,fVar31 * 10.0);
            *(int *)*pauVar28 = auVar2._0_4_;
            *(int *)(param_2 + 0xd4) = auVar2._4_4_;
            *(int *)(param_2 + 0xd8) = auVar2._8_4_;
            *(undefined4 *)(param_2 + 0xdc) = in_V7D;
            iVar23 = *(int *)(param_2 + 0x100);
          }
        }
        else {
          iVar23 = *(int *)(param_2 + 0x100);
        }
      }
      *(int *)(param_2 + 0x100) = iVar23 + 1;
    }
    if (*(int *)pauVar27[1] != 0) {
      iVar21 = *(int *)(*(int *)(*(int *)pauVar27[1] + 0x138) + 8);
    }
    if (18.0 <= param_1) {
      uVar30 = *(undefined4 *)(param_2 + 0x104);
      goto LAB_0887ae10;
    }
    if (((*(int *)pauVar27[1] != 0) && (iVar21 != 0)) && (iVar21 < 0x84)) {
      uVar30 = *(undefined4 *)(param_2 + 0x104);
      goto LAB_0887ae10;
    }
    auVar1 = vsub_q(*pauVar26,*pauVar27);
    uVar30 = vdot_t(auVar1._0_12_,auVar1._0_12_);
    fVar31 = (float)vsqrt_s(uVar30);
    fVar31 = fVar31 * 0.1 + 5.0;
    if (fVar31 < 10.0) {
      fVar31 = 10.0;
    }
    else if (280.0 < fVar31) {
      fVar31 = 280.0;
    }
    *(float *)(param_2 + 0x104) = fVar31;
    auVar2 = vscl_t(*pauVar28,fVar31 * 10.0);
    *(int *)*pauVar28 = auVar2._0_4_;
    *(int *)(param_2 + 0xd4) = auVar2._4_4_;
    *(int *)(param_2 + 0xd8) = auVar2._8_4_;
    *(undefined4 *)(param_2 + 0xdc) = in_V7D;
  }
  uVar30 = *(undefined4 *)(param_2 + 0x104);
LAB_0887ae10:
  *(undefined4 *)(*(int *)(param_2 + 0xbc) + 0x74) = uVar30;
  uVar30 = *(undefined4 *)(param_2 + 0x6c);
  auVar2 = vadd_t(*(undefined (*) [12])*pauVar26,*pauVar28);
  *local_54 = auVar2._0_4_;
  local_54[1] = auVar2._4_4_;
  local_54[2] = auVar2._8_4_;
  local_54[3] = uVar30;
  FUN_088787a0(param_2);
  return;
}

