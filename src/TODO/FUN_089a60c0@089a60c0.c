#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089a60c0(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [64];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined4 uVar6;
  undefined auVar7 [64];
  undefined auVar8 [64];
  char *pcVar9;
  undefined uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined (*pauVar16) [64];
  int iVar17;
  undefined4 *puVar18;
  uint uVar19;
  int iVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 in_V7C;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined auStack_188 [64];
  undefined auStack_148 [64];
  undefined auStack_108 [72];
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  char *local_7c;
  char *local_78;
  char *local_74;
  char *local_70;
  undefined *local_6c;
  undefined **local_68;
  char *local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  undefined4 *local_4c;
  
  memset_jak((undefined *)(param_1 + 0x578),0,200);
  memset_jak((undefined *)(param_1 + 0x640),0,0x28);
  FUN_089e29e4(param_1 + 0x6b0);
  *(undefined4 *)(param_1 + 0x710) = 0;
  *(undefined4 *)(param_1 + 0x714) = 0;
  *(undefined4 *)(param_1 + 0x718) = 0;
  *(undefined4 *)(param_1 + 0x71c) = 0;
  *(undefined4 *)(param_1 + 0x700) = 0;
  *(undefined4 *)(param_1 + 0x704) = 0x42a00000;
  *(undefined4 *)(param_1 + 0x70c) = 0;
  *(undefined4 *)(param_1 + 0x708) = 0x43480000;
  FUN_089e2b14(param_1 + 0x6b0,0xffffffff);
  FUN_089d8634();
  uVar11 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar12 = FUN_089d7d74(0x140,0,0);
  FUN_089d816c(uVar11);
  FUN_089d866c();
  iVar13 = 0;
  if (iVar12 != 0) {
    FUN_089de2e4(iVar12,"menu_daiza.gmo",0);
    iVar13 = iVar12;
  }
  *(int *)(param_1 + 0x6a0) = iVar13;
  local_1a0 = 0x3f19999a;
  local_19c = 0x3f19999a;
  local_198 = 0x3f19999a;
  local_194 = 0x3f800000;
  FUN_089e0344(0x41000000,iVar13,&local_1a0,0);
  iVar13 = FUN_089ded60(*(undefined4 *)(param_1 + 0x6a0),"_02_base");
  *(int *)(param_1 + 0x6a4) = iVar13;
  *(int *)(param_1 + 0x6a8) = iVar13 + 0x80;
  local_c0 = *(undefined4 *)(iVar13 + 0xb0);
  uStack_bc = *(undefined4 *)(iVar13 + 0xb4);
  uStack_b8 = *(undefined4 *)(iVar13 + 0xb8);
  uStack_b4 = *(undefined4 *)(iVar13 + 0xbc);
  puVar15 = *(undefined4 **)(param_1 + 0x6a8);
  uVar11 = vmul_s(0xbfc90fdb,in_V7C);
  auVar1 = vidt_q();
  auVar4 = vrot_q(uVar11,0,1,2,0);
  auVar5 = vrot_q(uVar11,0,3,1,0);
  auVar2 = vidt_q();
  *puVar15 = auVar1._0_4_;
  puVar15[1] = auVar1._4_4_;
  puVar15[2] = auVar1._8_4_;
  puVar15[3] = auVar1._12_4_;
  puVar15[4] = auVar4._0_4_;
  puVar15[5] = auVar4._4_4_;
  puVar15[6] = auVar4._8_4_;
  puVar15[7] = auVar4._12_4_;
  puVar15[8] = auVar5._0_4_;
  puVar15[9] = auVar5._4_4_;
  puVar15[10] = auVar5._8_4_;
  puVar15[0xb] = auVar5._12_4_;
  puVar15[0xc] = auVar2._0_4_;
  puVar15[0xd] = auVar2._4_4_;
  puVar15[0xe] = auVar2._8_4_;
  puVar15[0xf] = auVar2._12_4_;
  fVar22 = (float)(int)*(char *)(param_1 + 0x74) * 1.256;
  *(float *)(param_1 + 0x65c) = fVar22;
  pauVar16 = *(undefined (**) [64])(param_1 + 0x6a8);
  uVar11 = vmul_s(fVar22,in_V7C);
  auVar4 = vrot_q(uVar11,1,0,3,0);
  auVar1 = vidt_q();
  auVar5 = vrot_q(uVar11,2,0,1,0);
  auVar2 = vidt_q();
  auVar3._48_16_ = auVar2;
  auVar3._44_4_ = auVar5._12_4_;
  auVar3._40_4_ = auVar5._8_4_;
  auVar3._36_4_ = auVar5._4_4_;
  auVar3._32_4_ = auVar5._0_4_;
  auVar3._28_4_ = auVar1._12_4_;
  auVar3._24_4_ = auVar1._8_4_;
  auVar3._20_4_ = auVar1._4_4_;
  auVar3._16_4_ = auVar1._0_4_;
  auVar3._12_4_ = auVar4._12_4_;
  auVar3._8_4_ = auVar4._8_4_;
  auVar3._4_4_ = auVar4._4_4_;
  auVar3._0_4_ = auVar4._0_4_;
  auVar3 = vmmul_q(*pauVar16,auVar3);
  *(int *)*pauVar16 = auVar3._0_4_;
  *(int *)(*pauVar16 + 4) = auVar3._4_4_;
  *(int *)(*pauVar16 + 8) = auVar3._8_4_;
  *(int *)(*pauVar16 + 0xc) = auVar3._12_4_;
  *(int *)(*pauVar16 + 0x10) = auVar3._16_4_;
  *(int *)(*pauVar16 + 0x14) = auVar3._20_4_;
  *(int *)(*pauVar16 + 0x18) = auVar3._24_4_;
  *(int *)(*pauVar16 + 0x1c) = auVar3._28_4_;
  *(int *)(*pauVar16 + 0x20) = auVar3._32_4_;
  *(int *)(*pauVar16 + 0x24) = auVar3._36_4_;
  *(int *)(*pauVar16 + 0x28) = auVar3._40_4_;
  *(int *)(*pauVar16 + 0x2c) = auVar3._44_4_;
  *(int *)(*pauVar16 + 0x30) = auVar3._48_4_;
  *(int *)(*pauVar16 + 0x34) = auVar3._52_4_;
  *(int *)(*pauVar16 + 0x38) = auVar3._56_4_;
  *(int *)(*pauVar16 + 0x3c) = auVar3._60_4_;
  iVar13 = *(int *)(param_1 + 0x6a8);
  *(undefined4 *)(iVar13 + 0x30) = local_c0;
  *(undefined4 *)(iVar13 + 0x34) = uStack_bc;
  *(undefined4 *)(iVar13 + 0x38) = uStack_b8;
  *(undefined4 *)(iVar13 + 0x3c) = uStack_b4;
  *(undefined4 *)(*(int *)(param_1 + 0x6a0) + 0x6c) = 0;
  uVar19 = 0;
  local_64 = "menu_worldmap.gmo";
  local_68 = &PTR_DAT_08ab0308;
  local_6c = &DAT_08ab9c2c;
  local_7c = "%s.gmo";
  local_70 = "menu_itembox.gmo";
  local_74 = "menu_gauntlet.gmo";
  local_78 = "menu_credit.gmo";
  puVar15 = (undefined4 *)(param_1 + 0x950);
  iVar13 = param_1;
  iVar12 = param_1;
  iVar20 = param_1;
  do {
    uVar10 = FUN_089a602c(param_1,uVar19 & 0xff,*(undefined *)(param_1 + 0x74));
    *(undefined *)(iVar12 + 0x594) = uVar10;
    if (4 < uVar19) goto LAB_089a6a28;
    local_4c = puVar15;
    if (uVar19 == 1) {
      local_54 = 0;
      FUN_089d8634();
      uVar11 = FUN_089d81a4();
      FUN_089d816c(1);
      iVar14 = FUN_089d7d74(0x140,0,0);
      FUN_089d816c(uVar11);
      FUN_089d866c();
      puVar15 = local_4c;
      iVar17 = local_54;
      if (iVar14 != 0) {
        FUN_089de2e4(iVar14,local_68[1],0);
        iVar17 = iVar14;
      }
      *(int *)(iVar13 + 0x68c) = iVar17;
      FUN_089e0860();
      puVar18 = *(undefined4 **)(local_6c + 4);
      if (puVar18 == (undefined4 *)0x0) {
        iVar17 = *(int *)(iVar13 + 0x68c);
      }
      else {
        uVar11 = FUN_089d9674();
        iVar17 = FUN_089d9c84(uVar11,*puVar18);
        if (iVar17 == -1) {
          FUN_089b4c84(auStack_188,local_7c,*puVar18);
          uVar11 = FUN_089d9674();
          FUN_089d9914(uVar11,auStack_188);
        }
        uVar21 = *(undefined4 *)(iVar13 + 0x68c);
        local_4c = puVar15;
        uVar11 = FUN_089d9674();
        uVar11 = FUN_089d9c84(uVar11,*puVar18);
        FUN_089df400(0x3e4ccccd,uVar21,uVar11,1);
        iVar17 = *(int *)(iVar13 + 0x68c);
        puVar15 = local_4c;
      }
      (**(code **)(*(int *)(iVar17 + 0x14) + 0x3c))
                (iVar17 + *(short *)(*(int *)(iVar17 + 0x14) + 0x38));
      *(undefined4 *)(*(int *)(iVar13 + 0x68c) + 8) = 1;
      FUN_0885e260(*(undefined4 *)(iVar13 + 0x68c));
      iVar17 = *(int *)(*(int *)(iVar13 + 0x68c) + 0x130);
      *(undefined4 *)(iVar17 + 0xa8) = 0x3eb33333;
      *(undefined4 *)(iVar17 + 0x94) = 0x3eb33333;
      *(undefined4 *)(iVar17 + 0x80) = 0x3eb33333;
      iVar17 = *(int *)(*(int *)(iVar13 + 0x68c) + 0x130);
      uVar11 = vmul_s(0xbf19999a,in_V7C);
      auVar4 = vrot_q(uVar11,1,0,3,0);
      auVar1 = vidt_q();
      auVar5 = vrot_q(uVar11,2,0,1,0);
      auVar2 = vidt_q();
      auVar7._48_16_ = auVar2;
      auVar7._44_4_ = auVar5._12_4_;
      auVar7._40_4_ = auVar5._8_4_;
      auVar7._36_4_ = auVar5._4_4_;
      auVar7._32_4_ = auVar5._0_4_;
      auVar7._28_4_ = auVar1._12_4_;
      auVar7._24_4_ = auVar1._8_4_;
      auVar7._20_4_ = auVar1._4_4_;
      auVar7._16_4_ = auVar1._0_4_;
      auVar7._12_4_ = auVar4._12_4_;
      auVar7._8_4_ = auVar4._8_4_;
      auVar7._4_4_ = auVar4._4_4_;
      auVar7._0_4_ = auVar4._0_4_;
      auVar3 = vmmul_q(*(undefined (*) [64])(iVar17 + 0x80),auVar7);
      *(int *)*(undefined (*) [64])(iVar17 + 0x80) = auVar3._0_4_;
      *(int *)(iVar17 + 0x84) = auVar3._4_4_;
      *(int *)(iVar17 + 0x88) = auVar3._8_4_;
      *(int *)(iVar17 + 0x8c) = auVar3._12_4_;
      *(int *)(iVar17 + 0x90) = auVar3._16_4_;
      *(int *)(iVar17 + 0x94) = auVar3._20_4_;
      *(int *)(iVar17 + 0x98) = auVar3._24_4_;
      *(int *)(iVar17 + 0x9c) = auVar3._28_4_;
      *(int *)(iVar17 + 0xa0) = auVar3._32_4_;
      *(int *)(iVar17 + 0xa4) = auVar3._36_4_;
      *(int *)(iVar17 + 0xa8) = auVar3._40_4_;
      *(int *)(iVar17 + 0xac) = auVar3._44_4_;
      *(int *)(iVar17 + 0xb0) = auVar3._48_4_;
      *(int *)(iVar17 + 0xb4) = auVar3._52_4_;
      *(int *)(iVar17 + 0xb8) = auVar3._56_4_;
      *(int *)(iVar17 + 0xbc) = auVar3._60_4_;
      iVar17 = *(int *)(*(int *)(iVar13 + 0x68c) + 0x130);
      uVar11 = vmul_s(0x3e4ccccd,in_V7C);
      auVar1 = vidt_q();
      auVar4 = vrot_q(uVar11,0,1,2,0);
      auVar5 = vrot_q(uVar11,0,3,1,0);
      auVar2 = vidt_q();
      auVar8._48_16_ = auVar2;
      auVar8._44_4_ = auVar5._12_4_;
      auVar8._40_4_ = auVar5._8_4_;
      auVar8._36_4_ = auVar5._4_4_;
      auVar8._32_4_ = auVar5._0_4_;
      auVar8._28_4_ = auVar4._12_4_;
      auVar8._24_4_ = auVar4._8_4_;
      auVar8._20_4_ = auVar4._4_4_;
      auVar8._16_4_ = auVar4._0_4_;
      auVar8._12_4_ = auVar1._12_4_;
      auVar8._8_4_ = auVar1._8_4_;
      auVar8._4_4_ = auVar1._4_4_;
      auVar8._0_4_ = auVar1._0_4_;
      auVar3 = vmmul_q(*(undefined (*) [64])(iVar17 + 0x80),auVar8);
      *(int *)*(undefined (*) [64])(iVar17 + 0x80) = auVar3._0_4_;
      *(int *)(iVar17 + 0x84) = auVar3._4_4_;
      *(int *)(iVar17 + 0x88) = auVar3._8_4_;
      *(int *)(iVar17 + 0x8c) = auVar3._12_4_;
      *(int *)(iVar17 + 0x90) = auVar3._16_4_;
      *(int *)(iVar17 + 0x94) = auVar3._20_4_;
      *(int *)(iVar17 + 0x98) = auVar3._24_4_;
      *(int *)(iVar17 + 0x9c) = auVar3._28_4_;
      *(int *)(iVar17 + 0xa0) = auVar3._32_4_;
      *(int *)(iVar17 + 0xa4) = auVar3._36_4_;
      *(int *)(iVar17 + 0xa8) = auVar3._40_4_;
      *(int *)(iVar17 + 0xac) = auVar3._44_4_;
      *(int *)(iVar17 + 0xb0) = auVar3._48_4_;
      *(int *)(iVar17 + 0xb4) = auVar3._52_4_;
      *(int *)(iVar17 + 0xb8) = auVar3._56_4_;
      *(int *)(iVar17 + 0xbc) = auVar3._60_4_;
      *(undefined4 *)(*(int *)(iVar13 + 0x68c) + 0x24) = 0x40a00000;
      iVar17 = *(int *)(*(int *)(iVar13 + 0x68c) + 0x14);
      (**(code **)(iVar17 + 0x34))
                (0x3f800000,*(int *)(iVar13 + 0x68c) + (int)*(short *)(iVar17 + 0x30));
      iVar17 = *(int *)(iVar13 + 0x68c);
    }
    else if (uVar19 == 2) {
      local_5c = 0;
      FUN_089d8634();
      uVar11 = FUN_089d81a4();
      FUN_089d816c(1);
      iVar14 = FUN_089d7d74(0x140,0,0);
      FUN_089d816c(uVar11);
      FUN_089d866c();
      puVar15 = local_4c;
      iVar17 = local_5c;
      if (iVar14 != 0) {
        FUN_089de2e4(iVar14,local_74,0);
        iVar17 = iVar14;
      }
      *(int *)(iVar13 + 0x68c) = iVar17;
      iVar17 = *(int *)(iVar17 + 0x130);
      *(undefined4 *)(iVar17 + 0xa8) = 0x3ec28f5c;
      *(undefined4 *)(iVar17 + 0x94) = 0x3ec28f5c;
      *(undefined4 *)(iVar17 + 0x80) = 0x3ec28f5c;
      *(undefined4 *)(*(int *)(iVar13 + 0x68c) + 0x24) = 0x42200000;
      iVar17 = *(int *)(*(int *)(iVar13 + 0x68c) + 0x14);
      (**(code **)(iVar17 + 0x34))
                (0x3f800000,*(int *)(iVar13 + 0x68c) + (int)*(short *)(iVar17 + 0x30));
      iVar17 = *(int *)(iVar13 + 0x68c);
    }
    else {
      if (uVar19 == 3) {
        local_60 = 0;
        FUN_089d8634();
        uVar11 = FUN_089d81a4();
        FUN_089d816c(1);
        iVar14 = FUN_089d7d74(0x140,0,0);
        FUN_089d816c(uVar11);
        FUN_089d866c();
        puVar15 = local_4c;
        iVar17 = local_60;
        if (iVar14 != 0) {
          FUN_089de2e4(iVar14,local_78,0);
          iVar17 = iVar14;
        }
        *(int *)(iVar13 + 0x68c) = iVar17;
        iVar17 = *(int *)(iVar17 + 0x130);
        uVar11 = vmul_s(0x3dc7ae14,in_V7C);
        auVar4 = vrot_q(uVar11,1,0,3,0);
        auVar1 = vidt_q();
        auVar5 = vrot_q(uVar11,2,0,1,0);
        auVar2 = vidt_q();
        *(int *)(iVar17 + 0x80) = auVar4._0_4_;
        *(int *)(iVar17 + 0x84) = auVar4._4_4_;
        *(int *)(iVar17 + 0x88) = auVar4._8_4_;
        *(int *)(iVar17 + 0x8c) = auVar4._12_4_;
        *(int *)(iVar17 + 0x90) = auVar1._0_4_;
        *(int *)(iVar17 + 0x94) = auVar1._4_4_;
        *(int *)(iVar17 + 0x98) = auVar1._8_4_;
        *(int *)(iVar17 + 0x9c) = auVar1._12_4_;
        *(int *)(iVar17 + 0xa0) = auVar5._0_4_;
        *(int *)(iVar17 + 0xa4) = auVar5._4_4_;
        *(int *)(iVar17 + 0xa8) = auVar5._8_4_;
        *(int *)(iVar17 + 0xac) = auVar5._12_4_;
        *(int *)(iVar17 + 0xb0) = auVar2._0_4_;
        *(int *)(iVar17 + 0xb4) = auVar2._4_4_;
        *(int *)(iVar17 + 0xb8) = auVar2._8_4_;
        *(int *)(iVar17 + 0xbc) = auVar2._12_4_;
        iVar17 = *(int *)(*(int *)(iVar13 + 0x68c) + 0x130);
        *(undefined4 *)(iVar17 + 0xa8) = 0x3eb33333;
        *(undefined4 *)(iVar17 + 0x94) = 0x3eb33333;
        *(undefined4 *)(iVar17 + 0x80) = 0x3eb33333;
        *(undefined4 *)(*(int *)(iVar13 + 0x68c) + 0x24) = 0x41d80000;
        iVar17 = *(int *)(*(int *)(iVar13 + 0x68c) + 0x14);
        (**(code **)(iVar17 + 0x34))
                  (0x3f800000,*(int *)(iVar13 + 0x68c) + (int)*(short *)(iVar17 + 0x30));
      }
      else {
        if (uVar19 == 4) {
          local_58 = 0;
          FUN_089d8634();
          uVar11 = FUN_089d81a4();
          FUN_089d816c(1);
          iVar14 = FUN_089d7d74(0x140,0,0);
          FUN_089d816c(uVar11);
          FUN_089d866c();
          puVar15 = local_4c;
          iVar17 = local_58;
          if (iVar14 != 0) {
            FUN_089de2e4(iVar14,local_70,0);
            iVar17 = iVar14;
          }
          *(int *)(iVar13 + 0x68c) = iVar17;
          iVar17 = *(int *)(iVar17 + 0x130);
          uVar11 = vmul_s(0x3e800000,in_V7C);
          auVar4 = vrot_q(uVar11,1,0,3,0);
          auVar1 = vidt_q();
          auVar5 = vrot_q(uVar11,2,0,1,0);
          auVar2 = vidt_q();
          *(int *)(iVar17 + 0x80) = auVar4._0_4_;
          *(int *)(iVar17 + 0x84) = auVar4._4_4_;
          *(int *)(iVar17 + 0x88) = auVar4._8_4_;
          *(int *)(iVar17 + 0x8c) = auVar4._12_4_;
          *(int *)(iVar17 + 0x90) = auVar1._0_4_;
          *(int *)(iVar17 + 0x94) = auVar1._4_4_;
          *(int *)(iVar17 + 0x98) = auVar1._8_4_;
          *(int *)(iVar17 + 0x9c) = auVar1._12_4_;
          *(int *)(iVar17 + 0xa0) = auVar5._0_4_;
          *(int *)(iVar17 + 0xa4) = auVar5._4_4_;
          *(int *)(iVar17 + 0xa8) = auVar5._8_4_;
          *(int *)(iVar17 + 0xac) = auVar5._12_4_;
          *(int *)(iVar17 + 0xb0) = auVar2._0_4_;
          *(int *)(iVar17 + 0xb4) = auVar2._4_4_;
          *(int *)(iVar17 + 0xb8) = auVar2._8_4_;
          *(int *)(iVar17 + 0xbc) = auVar2._12_4_;
          iVar17 = *(int *)(*(int *)(iVar13 + 0x68c) + 0x130);
          *(undefined4 *)(iVar17 + 0xa8) = 0x3f19999a;
          *(undefined4 *)(iVar17 + 0x94) = 0x3f19999a;
          *(undefined4 *)(iVar17 + 0x80) = 0x3f19999a;
          *(undefined4 *)(*(int *)(iVar13 + 0x68c) + 0x24) = 0x41600000;
          local_4c = puVar15;
          FUN_089a3ff4(0,auStack_148);
          pcVar9 = local_7c;
          FUN_089b4c84(auStack_188,local_7c,auStack_148);
          uVar11 = FUN_089d9674();
          FUN_089d9914(uVar11,auStack_188);
          FUN_089a3ff4(1,auStack_108);
          FUN_089b4c84(auStack_188,pcVar9,auStack_108);
          uVar11 = FUN_089d9674();
          FUN_089d9914(uVar11,auStack_188);
          FUN_089e0860(*(undefined4 *)(iVar13 + 0x68c));
          puVar15 = local_4c;
          if (*(char *)(param_1 + 0x74) == '\x04') {
            FUN_089df3b0(0x3e4ccccd,*(undefined4 *)(iVar13 + 0x68c),auStack_148,0);
            FUN_089a6080(param_1,1);
            iVar17 = *(int *)(iVar13 + 0x68c);
          }
          else {
            FUN_089df3b0(0x3e4ccccd,*(undefined4 *)(iVar13 + 0x68c),auStack_108,0);
            FUN_089a6080(param_1,0);
            iVar17 = *(int *)(iVar13 + 0x68c);
          }
          (**(code **)(*(int *)(iVar17 + 0x14) + 0x34))
                    (0x43480000,iVar17 + *(short *)(*(int *)(iVar17 + 0x14) + 0x30));
          iVar17 = *(int *)(*(int *)(iVar13 + 0x68c) + 0x14);
          (**(code **)(iVar17 + 0x3c))(*(int *)(iVar13 + 0x68c) + (int)*(short *)(iVar17 + 0x38));
          iVar17 = *(int *)(iVar13 + 0x68c);
          goto LAB_089a6a2c;
        }
        local_50 = 0;
        FUN_089d8634();
        uVar11 = FUN_089d81a4();
        FUN_089d816c(1);
        iVar14 = FUN_089d7d74(0x140,0,0);
        FUN_089d816c(uVar11);
        FUN_089d866c();
        puVar15 = local_4c;
        iVar17 = local_50;
        if (iVar14 != 0) {
          FUN_089de2e4(iVar14,local_64,0);
          iVar17 = iVar14;
        }
        *(int *)(iVar13 + 0x68c) = iVar17;
        iVar17 = *(int *)(iVar17 + 0x130);
        *(undefined4 *)(iVar17 + 0xa8) = 0x3f000000;
        *(undefined4 *)(iVar17 + 0x94) = 0x3f000000;
        *(undefined4 *)(iVar17 + 0x80) = 0x3f000000;
        *(undefined4 *)(*(int *)(iVar13 + 0x68c) + 0x24) = 0x41c80000;
      }
LAB_089a6a28:
      iVar17 = *(int *)(iVar13 + 0x68c);
    }
LAB_089a6a2c:
    if (iVar17 != 0) {
      *(undefined *)(*(int *)(iVar13 + 0x68c) + 0xbc) = 1;
      local_b0 = 0x3ecccccd;
      local_ac = 0x3ecccccd;
      local_a8 = 0x3ecccccd;
      local_a4 = 0x3f800000;
      FUN_089e0344(0x41000000,*(undefined4 *)(iVar13 + 0x68c),&local_b0,0);
      iVar17 = *(int *)(iVar13 + 0x68c);
      uVar11 = *(undefined4 *)(iVar17 + 0x24);
      uVar21 = *(undefined4 *)(iVar17 + 0x28);
      uVar6 = *(undefined4 *)(iVar17 + 0x2c);
      *puVar15 = *(undefined4 *)(iVar17 + 0x20);
      puVar15[1] = uVar11;
      puVar15[2] = uVar21;
      puVar15[3] = uVar6;
      uVar11 = FUN_089a4dc8((float)(uint)*(byte *)(iVar12 + 0x594) * 1.256 + 1.57);
      *(undefined4 *)(iVar12 + 0x58c) = uVar11;
      FUN_089a4d34(uVar11,*(undefined4 *)(iVar20 + 0x950),*(undefined4 *)(iVar20 + 0x958),0,0,
                   &local_a0,0x46);
      *(undefined4 *)(*(int *)(iVar13 + 0x68c) + 0x20) = local_a0;
      *(undefined4 *)(*(int *)(iVar13 + 0x68c) + 0x28) = local_9c;
      iVar17 = *(int *)(iVar13 + 0x68c);
      iVar14 = *(int *)(iVar17 + 0x130);
      uVar11 = *(undefined4 *)(iVar17 + 0x24);
      uVar21 = *(undefined4 *)(iVar17 + 0x28);
      uVar6 = *(undefined4 *)(iVar17 + 0x2c);
      *(undefined4 *)(iVar14 + 0xb0) = *(undefined4 *)(iVar17 + 0x20);
      *(undefined4 *)(iVar14 + 0xb4) = uVar11;
      *(undefined4 *)(iVar14 + 0xb8) = uVar21;
      *(undefined4 *)(iVar14 + 0xbc) = uVar6;
      *(undefined4 *)(*(int *)(*(int *)(iVar13 + 0x68c) + 0x130) + 0xbc) = 0x3f800000;
      *(undefined4 *)(*(int *)(iVar13 + 0x68c) + 0x6c) = 0;
    }
    uVar19 = uVar19 + 1;
    iVar12 = iVar12 + 0x28;
    iVar13 = iVar13 + 4;
    iVar20 = iVar20 + 0x10;
    puVar15 = puVar15 + 4;
    if (4 < (int)uVar19) {
      return;
    }
  } while( true );
}

