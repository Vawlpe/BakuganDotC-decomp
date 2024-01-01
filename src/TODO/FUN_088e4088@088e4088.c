#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e4088(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [12];
  undefined auVar3 [12];
  undefined auVar4 [12];
  undefined4 uVar5;
  undefined auVar6 [36];
  undefined auVar7 [36];
  undefined auVar8 [12];
  undefined auVar9 [12];
  undefined auVar10 [12];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [12];
  undefined auVar14 [12];
  undefined auVar15 [12];
  undefined auVar16 [16];
  undefined auVar17 [12];
  undefined auVar18 [12];
  undefined auVar19 [16];
  undefined auVar20 [12];
  int *piVar21;
  float fVar22;
  undefined (*pauVar23) [12];
  undefined (*pauVar24) [12];
  int iVar25;
  char cVar26;
  int iVar27;
  undefined4 *puVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 local_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 local_210;
  float local_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
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
  float local_bc;
  int local_80;
  undefined (*local_7c) [12];
  char local_78;
  int local_74;
  undefined *local_70;
  undefined4 *local_6c;
  undefined (*local_68) [16];
  char local_64;
  uint local_60;
  undefined *local_5c;
  undefined4 *local_58;
  undefined4 *local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined4 *local_48;
  
  *(undefined4 *)(param_1 + 0x3f4) = 0;
  if (*(int *)(param_1 + 0x4d4) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x418) == 0) {
    return;
  }
  local_60 = 1 << (*(uint *)(*(int *)(param_1 + 0x174) + 0x134) & 0x1f) ^ 0x1bf077eU | 0x18000000;
  auVar14 = *(undefined (*) [12])(DAT_08ac5c90 + 0x50);
  auVar13 = *(undefined (*) [12])(DAT_08ac5c90 + 0x50);
  uStack_2e4 = *(undefined4 *)(DAT_08ac5c90 + 0x5c);
  pauVar24 = (undefined (*) [12])(DAT_08ac5c90 + 0x70);
  uVar30 = vdot_t(*pauVar24,*pauVar24);
  uVar32 = vcmp_s(8,uVar30,*(undefined4 *)*pauVar24);
  vrsq_s(uVar30);
  uVar30 = vcmovt_s(in_V7D,(byte)uVar32 & 1);
  vpfxd(4,4,4,5);
  auVar2 = vscl_t(*pauVar24,uVar30);
  local_320 = auVar2._0_4_;
  uStack_31c = auVar2._4_4_;
  uStack_318 = auVar2._8_4_;
  *(undefined4 *)(param_1 + 0x2d4) = 0;
  uVar5 = *(undefined4 *)(param_1 + 0x2c);
  iVar25 = *(int *)(param_1 + 0x130);
  auVar6._24_12_ = *(undefined (*) [12])(iVar25 + 0xa0);
  auVar6._20_4_ = *(undefined4 *)(iVar25 + 0x98);
  auVar6._16_4_ = *(undefined4 *)(iVar25 + 0x94);
  auVar6._12_4_ = *(undefined4 *)(iVar25 + 0x90);
  auVar6._8_4_ = *(undefined4 *)(iVar25 + 0x88);
  auVar6._4_4_ = *(undefined4 *)(iVar25 + 0x84);
  auVar6._0_4_ = *(undefined4 *)(iVar25 + 0x80);
  auVar4 = vtfm3_t(auVar6,ZEXT812(0xc1700000));
  auVar3._4_4_ = *(float *)(param_1 + 0x24) + 18.0;
  auVar3._0_4_ = *(undefined4 *)(param_1 + 0x20);
  auVar3._8_4_ = *(undefined4 *)(param_1 + 0x28);
  auVar4 = vadd_t(auVar3,auVar4);
  uVar30 = auVar4._0_4_;
  uVar32 = auVar4._4_4_;
  uVar35 = auVar4._8_4_;
  auVar3 = vscl_t(auVar2,0x43160000);
  auVar3 = vadd_t(auVar13,auVar3);
  local_2f0 = auVar3._0_4_;
  uStack_2ec = auVar3._4_4_;
  uStack_2e8 = auVar3._8_4_;
  uVar33 = vcmp_s(8,local_320,local_320);
  vrcp_s(local_320);
  DAT_08b002f0 = vcmovt_s(in_V7D,(byte)uVar33 & 1);
  uVar33 = vcmp_s(8,uStack_31c,local_320);
  vrcp_s(uStack_31c);
  DAT_08b002f4 = vcmovt_s(in_V7D,(byte)uVar33 & 1);
  uVar33 = vcmp_s(8,uStack_318,local_320);
  vrcp_s(uStack_318);
  DAT_08b002f8 = vcmovt_s(in_V7D,(byte)uVar33 & 1);
  local_50 = (undefined4 *)(param_1 + 0x2f0);
  auVar2 = vscl_t(auVar2,0x42c80000);
  auVar2 = vadd_t(auVar14,auVar2);
  DAT_08b002d0 = uVar30;
  DAT_08b002d4 = uVar32;
  DAT_08b002d8 = uVar35;
  DAT_08b002dc = uVar5;
  DAT_08b002e0 = local_320;
  DAT_08b002e4 = uStack_31c;
  DAT_08b002e8 = uStack_318;
  DAT_08b002ec = in_V7D;
  DAT_08b002fc = in_V7D;
  *local_50 = auVar2._0_4_;
  *(int *)(param_1 + 0x2f4) = auVar2._4_4_;
  *(int *)(param_1 + 0x2f8) = auVar2._8_4_;
  *(undefined4 *)(param_1 + 0x2fc) = uStack_2e4;
  if (*(int *)(param_1 + 0x2d4) != 0) {
    *local_50 = local_2f0;
    *(undefined4 *)(param_1 + 0x2f4) = uStack_2ec;
    *(undefined4 *)(param_1 + 0x2f8) = uStack_2e8;
    *(undefined4 *)(param_1 + 0x2fc) = uStack_2e4;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x418) + 0x6c) = 0x3f800000;
  *(undefined *)(param_1 + 0x4ab) = 0;
  if (*(int *)(param_1 + 0x4d0) != 0) {
    auVar3 = vsub_t(auVar3,auVar4);
    DAT_08b00420 = auVar3._0_4_;
    DAT_08b00424 = auVar3._4_4_;
    DAT_08b00428 = auVar3._8_4_;
    DAT_08b00410 = uVar30;
    DAT_08b00414 = uVar32;
    DAT_08b00418 = uVar35;
    DAT_08b0041c = uVar5;
    DAT_08b0042c = uStack_2e4;
    iVar25 = FUN_0881a83c(local_60,&DAT_08b009c0,0);
    local_4c = (undefined4 *)(param_1 + 0x4b0);
    local_5c = &DAT_08b009c0;
    local_58 = &DAT_08b00420;
    local_54 = &DAT_08b00410;
    if (iVar25 != 0) {
      local_2f0 = DAT_08b00280;
      uStack_2ec = DAT_08b00284;
      uStack_2e8 = DAT_08b00288;
      uStack_2e4 = DAT_08b0028c;
    }
    if (*(int *)(param_1 + 0x4d0) != 0) {
      iVar25 = *(int *)(param_1 + 0x4d0);
      uVar33 = FUN_089f7720("ret_aim");
      *(undefined4 *)(iVar25 + 0xd4) = uVar33;
      *(uint *)(*(int *)(param_1 + 0x4d0) + 0xd0) = *(uint *)(*(int *)(param_1 + 0x4d0) + 0xd0) | 1;
      iVar25 = *(int *)(param_1 + 0x4d0);
      *(undefined4 *)(iVar25 + 0x60) = local_2f0;
      *(undefined4 *)(iVar25 + 100) = uStack_2ec;
      *(undefined4 *)(iVar25 + 0x68) = uStack_2e8;
      *(undefined4 *)(iVar25 + 0x6c) = uStack_2e4;
    }
    *(undefined4 *)(param_1 + 0x4c0) = uVar30;
    *(undefined4 *)(param_1 + 0x4c4) = uVar32;
    *(undefined4 *)(param_1 + 0x4c8) = uVar35;
    *(undefined4 *)(param_1 + 0x4cc) = uVar5;
    *local_4c = local_2f0;
    *(undefined4 *)(param_1 + 0x4b4) = uStack_2ec;
    *(undefined4 *)(param_1 + 0x4b8) = uStack_2e8;
    *(undefined4 *)(param_1 + 0x4bc) = uStack_2e4;
    if (*(int *)(param_1 + 0x4d4) != 0) {
      iVar25 = *(int *)(param_1 + 0x314);
      goto LAB_088e4c30;
    }
    if ((*(uint *)(param_1 + 0x168) & 0x300001) == 0) {
      if (DAT_08af8050 == 0) {
        DAT_08af8050 = 1;
        DAT_08af8054 = 22500.0;
      }
      fVar22 = 1000000.0;
      iVar25 = FUN_088be274();
      iVar27 = *(int *)(iVar25 + 0x658);
      local_2c8 = 0;
      local_2cc = 0;
      local_80 = 0;
      local_2d0 = 0;
      local_2c4 = 0;
      cVar26 = '\0';
      iVar25 = FUN_088e1948();
      if ((iVar25 != 0) && (*(char *)(iVar25 + 0x3a1) != '\0')) {
        cVar26 = '\x01';
      }
      local_74 = param_1;
      local_64 = cVar26;
      if (iVar27 != 0) {
        puVar28 = &DAT_08b00660;
        local_6c = &DAT_08b00680;
        local_7c = (undefined (*) [12])&DAT_08b00690;
        local_70 = &DAT_08b006b0;
        local_68 = (undefined (*) [16])&DAT_08b00280;
        cVar26 = *(char *)(iVar27 + 0x15e);
        do {
          if (cVar26 == '\0') {
            iVar27 = *(int *)(iVar27 + 4);
          }
          else {
            fVar31 = fVar22;
            switch(*(short *)(iVar27 + 0x142)) {
            case 0xbbe:
            case 0xbc7:
            case 0xbdc:
switchD_088e44dc_caseD_bbe:
              iVar25 = *(int *)(iVar27 + 0x14);
LAB_088e4508:
              iVar25 = (**(code **)(iVar25 + 0x9c))(iVar27 + *(short *)(iVar25 + 0x98));
              if (iVar25 == 0) {
                iVar27 = *(int *)(iVar27 + 4);
              }
              else if ((*(short *)(iVar27 + 0x142) == 0xbdc) && (*(char *)(iVar27 + 0x1e1) != '\0'))
              {
                iVar27 = *(int *)(iVar27 + 4);
              }
              else {
                pauVar24 = (undefined (*) [12])(iVar25 + 0x10);
                auVar3 = vsub_t(*pauVar24,auVar4);
                uVar33 = vdot_t(auVar3,auVar3);
                uVar34 = vcmp_s(8,uVar33,auVar3._0_4_);
                vrsq_s(uVar33);
                uVar33 = vcmovt_s(in_V7D,(byte)uVar34 & 1);
                vpfxd(4,4,4,5);
                auVar3 = vscl_t(auVar3,uVar33);
                uVar33 = vdot_t(auVar3,auVar3);
                uVar34 = vcmp_s(8,uVar33,auVar3._0_4_);
                vrsq_s(uVar33);
                uVar33 = vcmovt_s(in_V7D,(byte)uVar34 & 1);
                uVar33 = vmul_s(uVar33,*(float *)(iVar25 + 0x20) * 1.5);
                auVar3 = vscl_t(auVar3,uVar33);
                auVar3 = vsub_t(*pauVar24,auVar3);
                auVar16._12_4_ = *(undefined4 *)(iVar25 + 0x1c);
                auVar16._0_12_ = auVar3;
                auVar1._12_4_ = uVar5;
                auVar1._0_12_ = auVar4;
                auVar1 = vsub_q(auVar16,auVar1);
                fVar31 = (float)vdot_t(auVar1._0_12_,auVar1._0_12_);
                if (fVar31 < DAT_08af8054) {
                  pauVar23 = (undefined (*) [12])(*(int *)(local_74 + 0x314) + 0x50);
                  auVar2._4_4_ = uStack_2ec;
                  auVar2._0_4_ = local_2f0;
                  auVar2._8_4_ = uStack_2e8;
                  auVar3 = vsub_t(auVar2,*pauVar23);
                  auVar2 = vsub_t(*(undefined (*) [12])(iVar27 + 0x20),*pauVar23);
                  uVar33 = vdot_t(auVar3,auVar3);
                  uVar34 = vcmp_s(8,uVar33,auVar3._0_4_);
                  vrsq_s(uVar33);
                  uVar33 = vcmovt_s(in_V7D,(byte)uVar34 & 1);
                  vpfxd(4,4,4,5);
                  auVar3 = vscl_t(auVar3,uVar33);
                  uVar33 = vdot_t(auVar2,auVar2);
                  uVar34 = vcmp_s(8,uVar33,auVar2._0_4_);
                  vrsq_s(uVar33);
                  uVar33 = vcmovt_s(in_V7D,(byte)uVar34 & 1);
                  vpfxd(4,4,4,5);
                  auVar2 = vscl_t(auVar2,uVar33);
                  fVar29 = (float)vdot_t(auVar3,auVar2);
                  if (0.95 < fVar29) {
                    puVar28[0x10] = 0x3fd70a3e;
                    *local_6c = uVar30;
                    local_6c[1] = uVar32;
                    local_6c[2] = uVar35;
                    local_6c[3] = uVar5;
                    uVar33 = *(undefined4 *)(iVar25 + 0x1c);
                    auVar3 = vsub_t(*pauVar24,auVar4);
                    *(int *)*local_7c = auVar3._0_4_;
                    *(int *)((int)*local_7c + 4) = auVar3._4_4_;
                    *(int *)((int)*local_7c + 8) = auVar3._8_4_;
                    *(undefined4 *)local_7c[1] = uVar33;
                    puVar28[0xb] = (float)puVar28[0x10] * (float)puVar28[0x10];
                    uVar33 = vdot_t(*local_7c,*local_7c);
                    uVar33 = vsqrt_s(uVar33);
                    puVar28[0xf] = uVar33;
                    iVar25 = FUN_0881a83c(local_60,local_70,0);
                    fVar29 = fVar31;
                    if (iVar25 != 0) {
                      auVar11._12_4_ = uVar5;
                      auVar11._0_12_ = auVar4;
                      auVar1 = vsub_q(*local_68,auVar11);
                      fVar29 = (float)vdot_t(auVar1._0_12_,auVar1._0_12_);
                    }
                    if (fVar31 <= fVar29) {
                      auVar13._4_4_ = uStack_2ec;
                      auVar13._0_4_ = local_2f0;
                      auVar13._8_4_ = uStack_2e8;
                      auVar3 = vsub_t(auVar13,auVar4);
                      uVar33 = vdot_t(auVar3,auVar3);
                      uVar34 = vcmp_s(8,uVar33,uVar30);
                      vrsq_s(uVar33);
                      uVar33 = vcmovt_s(in_V7D,(byte)uVar34 & 1);
                      vpfxd(4,4,4,5);
                      auVar2 = vscl_t(auVar3,uVar33);
                      auVar3 = vsub_t(*pauVar24,auVar4);
                      uVar33 = vdot_t(auVar3,auVar3);
                      uVar34 = vcmp_s(8,uVar33,uVar30);
                      vrsq_s(uVar33);
                      uVar33 = vcmovt_s(in_V7D,(byte)uVar34 & 1);
                      vpfxd(4,4,4,5);
                      auVar3 = vscl_t(auVar3,uVar33);
                      uVar33 = vdot_t(auVar2,auVar3);
                      fVar29 = (float)FUN_08a05468(uVar33);
                      if (fVar29 < 0.2356195) {
                        if (fVar31 < fVar22) {
                          local_80 = iVar27;
                          local_48 = puVar28;
                          (**(code **)(*(int *)(iVar27 + 0x14) + 0x94))
                                    (iVar27 + *(short *)(*(int *)(iVar27 + 0x14) + 0x90),&local_220)
                          ;
                          local_2d0 = local_220;
                          local_2cc = uStack_21c;
                          local_2c8 = uStack_218;
                          local_2c4 = uStack_214;
                          puVar28 = local_48;
                          goto switchD_088e44dc_caseD_bbf;
                        }
                        iVar27 = *(int *)(iVar27 + 4);
                      }
                      else {
                        iVar27 = *(int *)(iVar27 + 4);
                      }
                    }
                    else {
                      iVar27 = *(int *)(iVar27 + 4);
                    }
                  }
                  else {
                    iVar27 = *(int *)(iVar27 + 4);
                  }
                }
                else {
                  iVar27 = *(int *)(iVar27 + 4);
                }
              }
              break;
            case 0xbbf:
            case 0xbc0:
            case 0xbc1:
            case 0xbc2:
            case 0xbc3:
            case 0xbc4:
            case 0xbc5:
            case 0xbc6:
            case 0xbc8:
            case 0xbc9:
            case 0xbca:
            case 0xbcb:
            case 0xbcc:
            case 0xbcd:
            case 0xbce:
            case 0xbcf:
            case 0xbd0:
            case 0xbd1:
            case 0xbd2:
            case 0xbd3:
            case 0xbd4:
            case 0xbd5:
            case 0xbd6:
            case 0xbd7:
            case 0xbd8:
            case 0xbd9:
            case 0xbda:
            case 0xbdb:
switchD_088e44dc_caseD_bbf:
              iVar27 = *(int *)(iVar27 + 4);
              fVar22 = fVar31;
              break;
            default:
              if (*(short *)(iVar27 + 0x142) == 0x1778) {
                if (*(char *)(iVar27 + 0x1a8) == '\0') {
                  iVar25 = *(int *)(iVar27 + 0x14);
                  goto LAB_088e4508;
                }
                if (local_64 != '\0') goto switchD_088e44dc_caseD_bbe;
                iVar27 = *(int *)(iVar27 + 4);
              }
              else {
                iVar27 = *(int *)(iVar27 + 4);
              }
            }
          }
          if (iVar27 == 0) break;
          cVar26 = *(char *)(iVar27 + 0x15e);
        } while( true );
      }
      piVar21 = (int *)FUN_088dfa48();
      iVar25 = *piVar21;
      local_78 = '\0';
      if (iVar25 != 0) {
        iVar27 = *(int *)(iVar25 + 0x14);
        do {
          iVar27 = (**(code **)(iVar27 + 0x5c))(iVar25 + *(short *)(iVar27 + 0x58));
          if (iVar27 == 0) {
            iVar25 = *(int *)(iVar25 + 4);
          }
          else if (*(int *)(iVar25 + 0x3a0) == 8) {
            iVar25 = *(int *)(iVar25 + 4);
          }
          else {
            local_210 = *(undefined4 *)(iVar25 + 0x1b0);
            uStack_208 = *(undefined4 *)(iVar25 + 0x1b8);
            uStack_204 = *(undefined4 *)(iVar25 + 0x1bc);
            local_20c = *(float *)(iVar25 + 0x1b4) + 12.0;
            auVar19._4_4_ = local_20c;
            auVar19._0_4_ = local_210;
            auVar19._8_4_ = uStack_208;
            auVar19._12_4_ = uStack_204;
            auVar12._12_4_ = uVar5;
            auVar12._0_12_ = auVar4;
            auVar1 = vsub_q(auVar19,auVar12);
            fVar31 = (float)vdot_t(auVar1._0_12_,auVar1._0_12_);
            if (fVar31 < DAT_08af8054) {
              auVar14._4_4_ = uStack_2ec;
              auVar14._0_4_ = local_2f0;
              auVar14._8_4_ = uStack_2e8;
              auVar3 = vsub_t(auVar14,auVar4);
              uVar32 = vdot_t(auVar3,auVar3);
              uVar35 = vcmp_s(8,uVar32,uVar30);
              vrsq_s(uVar32);
              uVar32 = vcmovt_s(in_V7D,(byte)uVar35 & 1);
              vpfxd(4,4,4,5);
              auVar2 = vscl_t(auVar3,uVar32);
              local_200 = auVar2._0_4_;
              local_1fc = auVar2._4_4_;
              local_1f8 = auVar2._8_4_;
              auVar17._4_4_ = local_20c;
              auVar17._0_4_ = local_210;
              auVar17._8_4_ = uStack_208;
              auVar3 = vsub_t(auVar17,auVar4);
              uVar32 = vdot_t(auVar3,auVar3);
              uVar35 = vcmp_s(8,uVar32,uVar30);
              vrsq_s(uVar32);
              uVar32 = vcmovt_s(in_V7D,(byte)uVar35 & 1);
              vpfxd(4,4,4,5);
              auVar3 = vscl_t(auVar3,uVar32);
              local_1f0 = auVar3._0_4_;
              local_1ec = auVar3._4_4_;
              local_1e8 = auVar3._8_4_;
              uVar32 = vdot_t(auVar2,auVar3);
              fVar29 = (float)FUN_08a05468(uVar32);
              if (fVar29 < 0.1570796) {
                iVar27 = *(int *)(iVar25 + 0x130);
                auVar7._24_12_ = *(undefined (*) [12])(iVar27 + 0xa0);
                auVar7._20_4_ = *(undefined4 *)(iVar27 + 0x98);
                auVar7._16_4_ = *(undefined4 *)(iVar27 + 0x94);
                auVar7._12_4_ = *(undefined4 *)(iVar27 + 0x90);
                auVar7._8_4_ = *(undefined4 *)(iVar27 + 0x88);
                auVar7._4_4_ = *(undefined4 *)(iVar27 + 0x84);
                auVar7._0_4_ = *(undefined4 *)(iVar27 + 0x80);
                auVar3 = vtfm3_t(auVar7,ZEXT412(0x3f800000) << 0x40);
                local_1e0 = auVar3._0_4_;
                uStack_1dc = auVar3._4_4_;
                uStack_1d8 = auVar3._8_4_;
                uVar32 = vdot_t(auVar3,auVar3);
                uVar35 = vcmp_s(8,uVar32,local_1e0);
                vrsq_s(uVar32);
                uVar32 = vcmovt_s(in_V7D,(byte)uVar35 & 1);
                vpfxd(4,4,4,5);
                auVar3 = vscl_t(auVar3,uVar32);
                local_1d0 = auVar3._0_4_;
                local_1cc = auVar3._4_4_;
                local_1c8 = auVar3._8_4_;
                auVar10._4_4_ = uStack_31c;
                auVar10._0_4_ = local_320;
                auVar10._8_4_ = uStack_318;
                auVar9._4_4_ = uStack_31c;
                auVar9._0_4_ = local_320;
                auVar9._8_4_ = uStack_318;
                auVar8._4_4_ = uStack_31c;
                auVar8._0_4_ = local_320;
                auVar8._8_4_ = uStack_318;
                uVar32 = vdot_t(auVar8,auVar9);
                uVar35 = vcmp_s(8,uVar32,local_320);
                vrsq_s(uVar32);
                uVar32 = vcmovt_s(in_V7D,(byte)uVar35 & 1);
                vpfxd(4,4,4,5);
                auVar2 = vscl_t(auVar10,uVar32);
                local_320 = auVar2._0_4_;
                uStack_31c = auVar2._4_4_;
                uStack_318 = auVar2._8_4_;
                fVar29 = (float)vdot_t(auVar2,auVar3);
                uVar32 = vmul_s(0x3f860a92,in_V7C);
                local_bc = (float)vcos_s(uVar32);
                if (local_bc < fVar29) {
                  *local_54 = local_210;
                  local_54[1] = local_20c;
                  local_54[2] = uStack_208;
                  local_54[3] = uStack_204;
                  auVar15._4_4_ = uStack_2ec;
                  auVar15._0_4_ = local_2f0;
                  auVar15._8_4_ = uStack_2e8;
                  auVar18._4_4_ = local_20c;
                  auVar18._0_4_ = local_210;
                  auVar18._8_4_ = uStack_208;
                  auVar3 = vsub_t(auVar15,auVar18);
                  local_1c0 = auVar3._0_4_;
                  uStack_1bc = auVar3._4_4_;
                  uStack_1b8 = auVar3._8_4_;
                  uStack_1b4 = uStack_2e4;
                  *local_58 = local_1c0;
                  local_58[1] = uStack_1bc;
                  local_58[2] = uStack_1b8;
                  local_58[3] = uStack_2e4;
                  iVar27 = FUN_0881a83c(local_60,local_5c,0);
                  if (iVar27 == 0) {
                    if (fVar31 < fVar22) {
                      local_78 = '\x01';
                      local_80 = 0;
                      auVar20._4_4_ = local_1ec;
                      auVar20._0_4_ = local_1f0;
                      auVar20._8_4_ = local_1e8;
                      auVar3 = vscl_t(auVar20,SQRT(fVar31) - 6.3);
                      local_1a0 = auVar3._0_4_;
                      uStack_19c = auVar3._4_4_;
                      uStack_198 = auVar3._8_4_;
                      auVar3 = vadd_t(auVar4,auVar3);
                      local_2d0 = auVar3._0_4_;
                      local_2cc = auVar3._4_4_;
                      local_2c8 = auVar3._8_4_;
                      *(int *)(local_74 + 0x3f4) = iVar25;
                      fVar22 = fVar31;
                      local_2c4 = uVar5;
                      local_1b0 = local_2d0;
                      uStack_1ac = local_2cc;
                      uStack_1a8 = local_2c8;
                      uStack_1a4 = uVar5;
                    }
                    goto LAB_088e4b34;
                  }
                  iVar25 = *(int *)(iVar25 + 4);
                }
                else {
                  iVar25 = *(int *)(iVar25 + 4);
                }
              }
              else {
LAB_088e4b34:
                iVar25 = *(int *)(iVar25 + 4);
              }
            }
            else {
              iVar25 = *(int *)(iVar25 + 4);
            }
          }
          if (iVar25 == 0) break;
          iVar27 = *(int *)(iVar25 + 0x14);
        } while( true );
      }
      param_1 = local_74;
      if (local_80 != 0) {
        *(int *)(local_74 + 0x4d4) = local_80;
        puVar28 = (undefined4 *)(local_74 + 0x4e0);
        if (*(int *)(local_74 + 0x4d0) != 0) {
          iVar25 = *(int *)(local_74 + 0x4d0);
          uVar30 = FUN_089f7720("ret_aim_rock");
          *(undefined4 *)(iVar25 + 0xd4) = uVar30;
          *(uint *)(*(int *)(param_1 + 0x4d0) + 0xd0) =
               *(uint *)(*(int *)(param_1 + 0x4d0) + 0xd0) | 1;
        }
        iVar25 = *(int *)(param_1 + 0x4d0);
        *local_4c = local_2d0;
        local_4c[1] = local_2cc;
        local_4c[2] = local_2c8;
        local_4c[3] = local_2c4;
        uVar30 = local_4c[1];
        uVar32 = local_4c[2];
        uVar35 = local_4c[3];
        *(undefined4 *)(iVar25 + 0x60) = *local_4c;
        *(undefined4 *)(iVar25 + 100) = uVar30;
        *(undefined4 *)(iVar25 + 0x68) = uVar32;
        *(undefined4 *)(iVar25 + 0x6c) = uVar35;
        uVar30 = *(undefined4 *)(iVar25 + 100);
        uVar32 = *(undefined4 *)(iVar25 + 0x68);
        uVar35 = *(undefined4 *)(iVar25 + 0x6c);
        *local_50 = *(undefined4 *)(iVar25 + 0x60);
        local_50[1] = uVar30;
        local_50[2] = uVar32;
        local_50[3] = uVar35;
        uVar30 = local_50[1];
        uVar32 = local_50[2];
        uVar35 = local_50[3];
        *puVar28 = *local_50;
        *(undefined4 *)(param_1 + 0x4e4) = uVar30;
        *(undefined4 *)(param_1 + 0x4e8) = uVar32;
        *(undefined4 *)(param_1 + 0x4ec) = uVar35;
        iVar25 = *(int *)(param_1 + 0x314);
        goto LAB_088e4c30;
      }
      if (local_78 == '\0') {
        iVar25 = *(int *)(local_74 + 0x314);
        goto LAB_088e4c30;
      }
      puVar28 = (undefined4 *)(local_74 + 0x4e0);
      if (*(int *)(local_74 + 0x4d0) != 0) {
        iVar25 = *(int *)(local_74 + 0x4d0);
        uVar30 = FUN_089f7720("ret_aim_rock");
        *(undefined4 *)(iVar25 + 0xd4) = uVar30;
        *(uint *)(*(int *)(param_1 + 0x4d0) + 0xd0) =
             *(uint *)(*(int *)(param_1 + 0x4d0) + 0xd0) | 1;
      }
      iVar25 = *(int *)(param_1 + 0x4d0);
      *local_4c = local_2d0;
      local_4c[1] = local_2cc;
      local_4c[2] = local_2c8;
      local_4c[3] = local_2c4;
      uVar30 = local_4c[1];
      uVar32 = local_4c[2];
      uVar35 = local_4c[3];
      *(undefined4 *)(iVar25 + 0x60) = *local_4c;
      *(undefined4 *)(iVar25 + 100) = uVar30;
      *(undefined4 *)(iVar25 + 0x68) = uVar32;
      *(undefined4 *)(iVar25 + 0x6c) = uVar35;
      uVar30 = *(undefined4 *)(iVar25 + 100);
      uVar32 = *(undefined4 *)(iVar25 + 0x68);
      uVar35 = *(undefined4 *)(iVar25 + 0x6c);
      *local_50 = *(undefined4 *)(iVar25 + 0x60);
      local_50[1] = uVar30;
      local_50[2] = uVar32;
      local_50[3] = uVar35;
      uVar30 = local_50[1];
      uVar32 = local_50[2];
      uVar35 = local_50[3];
      *puVar28 = *local_50;
      *(undefined4 *)(param_1 + 0x4e4) = uVar30;
      *(undefined4 *)(param_1 + 0x4e8) = uVar32;
      *(undefined4 *)(param_1 + 0x4ec) = uVar35;
    }
  }
  iVar25 = *(int *)(param_1 + 0x314);
LAB_088e4c30:
  *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(iVar25 + 0x2f8);
  return;
}

