#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08855a58(int param_1,int param_2,undefined4 param_3,undefined4 *param_4,int param_5,
                undefined4 param_6,undefined4 param_7)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined auVar3 [64];
  undefined auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined auVar18 [36];
  undefined auVar19 [36];
  int iVar20;
  undefined *puVar21;
  undefined4 uVar22;
  int iVar23;
  undefined4 uVar24;
  undefined4 *puVar25;
  undefined (*pauVar26) [12];
  undefined4 *puVar27;
  undefined (*pauVar28) [12];
  float fVar29;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 in_V7E;
  undefined4 in_V7F;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined auStack_160 [128];
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  float local_80;
  undefined4 *local_5c;
  undefined4 local_58;
  undefined *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 *local_48;
  int local_44;
  
  local_58 = param_3;
  local_50 = param_7;
  local_4c = param_6;
  FUN_0885ef54();
  *(undefined **)(param_1 + 0x14) = &DAT_08af1974;
  *(undefined **)(param_1 + 0x6e4) = &DAT_08af5624;
  *(undefined **)(param_1 + 0x6f4) = &DAT_08af5564;
  *(undefined4 *)(param_1 + 0x6f0) = 2;
  *(undefined4 *)(param_1 + 0x6e0) = 4;
  *(undefined **)(param_1 + 0x734) = &DAT_08af5684;
  *(undefined *)(param_1 + 0x7e0) = 0;
  local_54 = &DAT_08af5684;
  *(undefined4 *)(param_1 + 0x730) = 6;
  *(undefined **)(param_1 + 0x854) = &DAT_08af5624;
  *(undefined **)(param_1 + 0x864) = &DAT_08af5564;
  *(undefined4 *)(param_1 + 0x860) = 2;
  *(undefined4 *)(param_1 + 0x850) = 4;
  *(undefined **)(param_1 + 0x954) = &DAT_08af5624;
  *(undefined **)(param_1 + 0x964) = &DAT_08af5564;
  *(undefined4 *)(param_1 + 0x960) = 2;
  *(undefined4 *)(param_1 + 0x950) = 4;
  *(int *)(param_1 + 8) = param_2;
  iVar20 = FUN_0884b248();
  *(bool *)(param_1 + 0x941) = iVar20 != 0;
  *(int *)(param_1 + 0x908) = param_5;
  *(undefined *)(param_1 + 0xa7b) = 0;
  pauVar26 = (undefined (*) [12])(param_1 + 0x40);
  auVar1 = vscl_t(*pauVar26,0x3f19999a);
  *(int *)*pauVar26 = auVar1._0_4_;
  *(int *)(param_1 + 0x44) = auVar1._4_4_;
  *(int *)(param_1 + 0x48) = auVar1._8_4_;
  *(undefined4 *)(param_1 + 0x4c) = in_V7D;
  local_5c = (undefined4 *)(param_1 + 0xa60);
  pauVar28 = (undefined (*) [12])(param_1 + 0x20);
  if (((*(int *)(DAT_08ac58c4 + 0x20) == 1) && (*(int *)(DAT_08ac58c4 + 4) == 10)) && (param_5 == 1)
     ) {
    local_168 = 0x3f800000;
    local_16c = 0x3f800000;
    local_170 = 0x3f800000;
    local_164 = 0;
    *(undefined4 *)*pauVar26 = 0x3f800000;
    *(undefined4 *)(param_1 + 0x44) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined *)(param_1 + 0xa7b) = 1;
  }
  iVar20 = FUN_0884c3d0(1);
  if (iVar20 == 0) {
    FUN_08888a64(param_1 + 0x434,5);
  }
  else {
    FUN_08886c58(0x44160000,param_1 + 0x434);
  }
  *(undefined4 *)(param_1 + 0x268) = local_58;
  iVar20 = FUN_0884c3d0(1);
  if (((iVar20 == 0) && (iVar20 = FUN_0889d57c(param_4,param_4), iVar20 == 0)) &&
     ((float)param_4[1] < -500.0)) {
    param_4[1] = 0;
  }
  uVar22 = param_4[1];
  uVar24 = param_4[2];
  uVar13 = param_4[3];
  *local_5c = *param_4;
  local_5c[1] = uVar22;
  local_5c[2] = uVar24;
  local_5c[3] = uVar13;
  uVar22 = param_4[1];
  uVar24 = param_4[2];
  uVar13 = param_4[3];
  *(undefined4 *)*pauVar28 = *param_4;
  *(undefined4 *)(param_1 + 0x24) = uVar22;
  *(undefined4 *)(param_1 + 0x28) = uVar24;
  *(undefined4 *)(param_1 + 0x2c) = uVar13;
  *(undefined4 *)(param_1 + 0x34) = param_4[3];
  iVar20 = *(int *)(param_1 + 0x130);
  uVar22 = *(undefined4 *)(param_1 + 0x24);
  uVar24 = *(undefined4 *)(param_1 + 0x28);
  uVar13 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(iVar20 + 0xb0) = *(undefined4 *)*pauVar28;
  *(undefined4 *)(iVar20 + 0xb4) = uVar22;
  *(undefined4 *)(iVar20 + 0xb8) = uVar24;
  *(undefined4 *)(iVar20 + 0xbc) = uVar13;
  *(undefined4 *)(param_1 + 0x8a0) = *(undefined4 *)*pauVar28;
  *(undefined4 *)(param_1 + 0x8a4) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x8a8) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x8ac) = *(undefined4 *)(param_1 + 0x2c);
  if (*(char *)(param_1 + 0x941) == '\0') {
    *(undefined4 *)(param_1 + 0x20c) = 0;
  }
  else {
    FUN_08862ba4(param_1);
    *(undefined4 *)(param_1 + 0x20c) = 0;
  }
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x6c8) = 0;
  FUN_088550d4(param_1);
  *(undefined4 *)(param_1 + 0x150) = 5;
  FUN_088625e8(param_1,5);
  *(undefined4 *)(param_1 + 0x6bc) = 0;
  auVar3 = vmidt_q();
  *(int *)(param_1 + 0x670) = auVar3._0_4_;
  *(int *)(param_1 + 0x674) = auVar3._16_4_;
  *(int *)(param_1 + 0x678) = auVar3._32_4_;
  *(int *)(param_1 + 0x67c) = auVar3._48_4_;
  *(int *)(param_1 + 0x680) = auVar3._4_4_;
  *(int *)(param_1 + 0x684) = auVar3._20_4_;
  *(int *)(param_1 + 0x688) = auVar3._36_4_;
  *(int *)(param_1 + 0x68c) = auVar3._52_4_;
  *(int *)(param_1 + 0x690) = auVar3._8_4_;
  *(int *)(param_1 + 0x694) = auVar3._24_4_;
  *(int *)(param_1 + 0x698) = auVar3._40_4_;
  *(int *)(param_1 + 0x69c) = auVar3._56_4_;
  *(int *)(param_1 + 0x6a0) = auVar3._12_4_;
  *(int *)(param_1 + 0x6a4) = auVar3._28_4_;
  *(int *)(param_1 + 0x6a8) = auVar3._44_4_;
  *(int *)(param_1 + 0x6ac) = auVar3._60_4_;
  iVar20 = FUN_0884c3d0(1);
  if (iVar20 == 0) {
    strcpy(auStack_160,(&PTR_DAT_08ab0308)[param_2]);
    puVar21 = (undefined *)strrchr(auStack_160,0x2e);
    if (puVar21 != (undefined *)0x0) {
      *puVar21 = 0;
    }
    if (*(char *)(param_1 + 0xa7b) == '\0') {
      strcat(auStack_160,"_stand_60.gmo");
    }
    else {
      strcat(auStack_160,"_stand.gmo");
    }
    local_44 = 0;
    FUN_089d8634();
    uVar22 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar23 = FUN_089d7d74(0x150,0,0);
    FUN_089d816c(uVar22);
    FUN_089d866c();
    iVar20 = local_44;
    if (iVar23 != 0) {
      FUN_088a3594(iVar23,auStack_160);
      iVar20 = iVar23;
    }
    *(int *)(param_1 + 0x6bc) = iVar20;
    uVar22 = local_5c[1];
    uVar24 = local_5c[2];
    uVar13 = local_5c[3];
    *(undefined4 *)(iVar20 + 0x20) = *local_5c;
    *(undefined4 *)(iVar20 + 0x24) = uVar22;
    *(undefined4 *)(iVar20 + 0x28) = uVar24;
    *(undefined4 *)(iVar20 + 0x2c) = uVar13;
    iVar20 = *(int *)(param_1 + 0x6bc);
    iVar23 = *(int *)(iVar20 + 0x130);
    uVar22 = *(undefined4 *)(iVar20 + 0x24);
    uVar24 = *(undefined4 *)(iVar20 + 0x28);
    uVar13 = *(undefined4 *)(iVar20 + 0x2c);
    *(undefined4 *)(iVar23 + 0xb0) = *(undefined4 *)(iVar20 + 0x20);
    *(undefined4 *)(iVar23 + 0xb4) = uVar22;
    *(undefined4 *)(iVar23 + 0xb8) = uVar24;
    *(undefined4 *)(iVar23 + 0xbc) = uVar13;
    *(undefined *)(*(int *)(param_1 + 0x6bc) + 0xbc) = 1;
    FUN_089d8984(*(undefined4 *)(param_1 + 0x6bc),DAT_08aba7a8);
  }
  *(undefined4 *)(param_1 + 0x8c0) = 0;
  *(undefined4 *)(param_1 + 0x8cc) = 0;
  *(undefined4 *)(param_1 + 0x8c4) = 0;
  *(undefined *)(param_1 + 0x940) = 0;
  *(undefined4 *)(param_1 + 0x560) = in_V72;
  *(undefined4 *)(param_1 + 0x564) = in_V76;
  *(undefined4 *)(param_1 + 0x568) = in_V7A;
  *(undefined4 *)(param_1 + 0x56c) = in_V7E;
  *(undefined4 *)(param_1 + 0x8d8) = 0;
  *(undefined4 *)(param_1 + 0x5c8) = 0;
  *(undefined4 *)(param_1 + 0x6c4) = 0;
  *(undefined4 *)(param_1 + 0x6c0) = 0;
  *(undefined *)(param_1 + 0xa42) = 1;
  *(undefined4 *)(param_1 + 0x90c) = 2;
  *(undefined *)(param_1 + 0x942) = 0;
  *(undefined4 *)(param_1 + 0x8dc) = 0;
  *(undefined4 *)(param_1 + 0x900) = 0;
  *(undefined *)(param_1 + 0x943) = 0;
  *(undefined4 *)(param_1 + 0xa2c) = 0;
  *(undefined4 *)(param_1 + 0xa30) = 0;
  *(undefined *)(param_1 + 0xa3e) = 0;
  *(undefined *)(param_1 + 0xa3f) = 0;
  *(undefined *)(param_1 + 0xa3d) = 0;
  *(undefined *)(param_1 + 0xa40) = 0;
  *(undefined4 *)(param_1 + 0xa50) = in_V72;
  *(undefined4 *)(param_1 + 0xa54) = in_V76;
  *(undefined4 *)(param_1 + 0xa58) = in_V7A;
  *(undefined4 *)(param_1 + 0xa5c) = in_V7E;
  *(undefined4 *)(param_1 + 0xa70) = 0;
  *(undefined4 *)(param_1 + 0xa74) = 0;
  *(undefined *)(param_1 + 0xa78) = 0;
  *(undefined *)(param_1 + 0xa7a) = 0;
  *(undefined *)(param_1 + 0xa79) = 0;
  *(undefined4 *)(param_1 + 0xa34) = 0;
  *(undefined4 *)(param_1 + 0xa80) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa84) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x8e0) = in_V72;
  *(undefined4 *)(param_1 + 0x8e4) = in_V76;
  *(undefined4 *)(param_1 + 0x8e8) = in_V7A;
  *(undefined4 *)(param_1 + 0x8ec) = in_V7E;
  *(undefined4 *)(param_1 + 0x8f0) = in_V72;
  *(undefined4 *)(param_1 + 0x8f4) = in_V76;
  *(undefined4 *)(param_1 + 0x8f8) = in_V7A;
  *(undefined4 *)(param_1 + 0x8fc) = in_V7E;
  *(undefined4 *)(param_1 + 0x154) = 2;
  if (*(char *)(param_1 + 0x941) == '\0') {
    *(undefined *)(param_1 + 0xa42) = 0;
  }
  iVar20 = FUN_0889daa8();
  if (iVar20 != 0) {
    *(undefined *)(param_1 + 0xa42) = 0;
  }
  *(undefined4 *)(param_1 + 0x6d0) = 0;
  *(undefined4 *)(param_1 + 0x700) = 0;
  *(undefined4 *)(param_1 + 0x704) = 0;
  *(undefined4 *)(param_1 + 0x708) = 0;
  *(undefined4 *)(param_1 + 0x710) = 0;
  *(undefined4 *)(param_1 + 0x714) = 0;
  *(undefined4 *)(param_1 + 0x718) = 0;
  *(undefined4 *)(param_1 + 0x71c) = 0;
  *(undefined4 *)(param_1 + 0x720) = 0;
  *(undefined4 *)(param_1 + 0x70c) = 0;
  uVar22 = vdot_t(*(undefined (*) [12])(param_1 + 0x710),*(undefined (*) [12])(param_1 + 0x710));
  uVar22 = vsqrt_s(uVar22);
  *(undefined4 *)(param_1 + 0x71c) = uVar22;
  iVar20 = *(int *)(param_1 + 0x130);
  *(undefined4 *)(param_1 + 0x740) = in_V72;
  *(undefined4 *)(param_1 + 0x744) = in_V76;
  *(undefined4 *)(param_1 + 0x748) = in_V7A;
  *(undefined4 *)(param_1 + 0x74c) = in_V7E;
  *(undefined4 *)(param_1 + 0x750) = in_V72;
  *(undefined4 *)(param_1 + 0x754) = in_V76;
  *(undefined4 *)(param_1 + 0x758) = in_V7A;
  *(undefined4 *)(param_1 + 0x75c) = in_V7E;
  *(undefined *)(param_1 + 0x7e0) = 0;
  uVar5 = *(undefined4 *)(iVar20 + 0x84);
  uVar9 = *(undefined4 *)(iVar20 + 0x88);
  uVar14 = *(undefined4 *)(iVar20 + 0x8c);
  uVar22 = *(undefined4 *)(iVar20 + 0x90);
  uVar6 = *(undefined4 *)(iVar20 + 0x94);
  uVar10 = *(undefined4 *)(iVar20 + 0x98);
  uVar15 = *(undefined4 *)(iVar20 + 0x9c);
  uVar24 = *(undefined4 *)(iVar20 + 0xa0);
  uVar7 = *(undefined4 *)(iVar20 + 0xa4);
  uVar11 = *(undefined4 *)(iVar20 + 0xa8);
  uVar16 = *(undefined4 *)(iVar20 + 0xac);
  uVar13 = *(undefined4 *)(iVar20 + 0xb0);
  uVar8 = *(undefined4 *)(iVar20 + 0xb4);
  uVar12 = *(undefined4 *)(iVar20 + 0xb8);
  uVar17 = *(undefined4 *)(iVar20 + 0xbc);
  *(undefined4 *)(param_1 + 0x760) = *(undefined4 *)(iVar20 + 0x80);
  *(undefined4 *)(param_1 + 0x764) = uVar5;
  *(undefined4 *)(param_1 + 0x768) = uVar9;
  *(undefined4 *)(param_1 + 0x76c) = uVar14;
  *(undefined4 *)(param_1 + 0x770) = uVar22;
  *(undefined4 *)(param_1 + 0x774) = uVar6;
  *(undefined4 *)(param_1 + 0x778) = uVar10;
  *(undefined4 *)(param_1 + 0x77c) = uVar15;
  *(undefined4 *)(param_1 + 0x780) = uVar24;
  *(undefined4 *)(param_1 + 0x784) = uVar7;
  *(undefined4 *)(param_1 + 0x788) = uVar11;
  *(undefined4 *)(param_1 + 0x78c) = uVar16;
  *(undefined4 *)(param_1 + 0x790) = uVar13;
  *(undefined4 *)(param_1 + 0x794) = uVar8;
  *(undefined4 *)(param_1 + 0x798) = uVar12;
  *(undefined4 *)(param_1 + 0x79c) = uVar17;
  if (*(char *)(param_1 + 0x7e0) == '\0') {
    uVar22 = *(undefined4 *)(param_1 + 0x760);
    auVar2 = vzero_t();
    auVar18._32_4_ = *(undefined4 *)(param_1 + 0x788);
    auVar18._28_4_ = *(undefined4 *)(param_1 + 0x778);
    auVar18._24_4_ = *(undefined4 *)(param_1 + 0x768);
    auVar18._20_4_ = *(undefined4 *)(param_1 + 0x784);
    auVar18._16_4_ = *(undefined4 *)(param_1 + 0x774);
    auVar18._12_4_ = *(undefined4 *)(param_1 + 0x764);
    auVar18._8_4_ = *(undefined4 *)(param_1 + 0x780);
    auVar18._4_4_ = *(undefined4 *)(param_1 + 0x770);
    auVar18._0_4_ = uVar22;
    auVar1 = vtfm3_t(auVar18,*(undefined (*) [12])(param_1 + 0x790));
    *(undefined4 *)(param_1 + 0x7a0) = uVar22;
    *(undefined4 *)(param_1 + 0x7a4) = *(undefined4 *)(param_1 + 0x770);
    *(undefined4 *)(param_1 + 0x7a8) = *(undefined4 *)(param_1 + 0x780);
    *(int *)(param_1 + 0x7ac) = auVar2._0_4_;
    *(undefined4 *)(param_1 + 0x7b0) = *(undefined4 *)(param_1 + 0x764);
    *(undefined4 *)(param_1 + 0x7b4) = *(undefined4 *)(param_1 + 0x774);
    *(undefined4 *)(param_1 + 0x7b8) = *(undefined4 *)(param_1 + 0x784);
    *(int *)(param_1 + 0x7bc) = auVar2._4_4_;
    auVar1 = vneg_t(auVar1);
    *(undefined4 *)(param_1 + 0x7c0) = *(undefined4 *)(param_1 + 0x768);
    *(undefined4 *)(param_1 + 0x7c4) = *(undefined4 *)(param_1 + 0x778);
    *(undefined4 *)(param_1 + 0x7c8) = *(undefined4 *)(param_1 + 0x788);
    *(int *)(param_1 + 0x7cc) = auVar2._8_4_;
    *(int *)(param_1 + 2000) = auVar1._0_4_;
    *(int *)(param_1 + 0x7d4) = auVar1._4_4_;
    *(int *)(param_1 + 0x7d8) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x7dc) = *(undefined4 *)(param_1 + 0x79c);
    *(undefined *)(param_1 + 0x7e0) = 1;
  }
  iVar23 = 0;
  iVar20 = param_1;
  do {
    *(undefined4 *)(iVar20 + 0x9a0) = 0;
    *(undefined4 *)(iVar20 + 0x9ac) = 0;
    *(undefined4 *)(iVar20 + 0x9fc) = 0x437a0000;
    *(undefined4 *)(iVar20 + 0xa08) = 0;
    *(undefined4 *)(iVar20 + 0xa14) = 0;
    *(undefined4 *)(iVar20 + 0xa20) = 0;
    iVar23 = iVar23 + 1;
    iVar20 = iVar20 + 4;
  } while (iVar23 < 3);
  *(undefined *)(param_1 + 0xa38) = 0;
  *(undefined *)(param_1 + 0xa39) = 0;
  *(undefined *)(param_1 + 0xa3a) = 0;
  *(undefined *)(param_1 + 0xa3b) = 0;
  *(undefined *)(param_1 + 0xa3c) = 0;
  FUN_08855384(param_1,0,0);
  FUN_088553c4(param_1);
  iVar20 = FUN_089ded60(param_1,"spell");
  if (iVar20 != 0) {
    *(int *)(param_1 + 0x6b0) = iVar20 + 0x80;
  }
  iVar20 = FUN_089ded60(param_1,"context00");
  if (iVar20 != 0) {
    *(int *)(param_1 + 0x6b4) = iVar20 + 0x80;
  }
  iVar20 = FUN_089ded60(param_1,"context01");
  if (iVar20 != 0) {
    *(int *)(param_1 + 0x6b8) = iVar20 + 0x80;
  }
  *(undefined4 *)(param_1 + 0x9f0) = 0x459c4000;
  *(undefined4 *)(param_1 + 0x60) = 0x3f000000;
  *(undefined4 *)(param_1 + 100) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x68) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
  local_1a0 = 0;
  local_19c = 0;
  local_198 = 0;
  local_194 = 0x3f800000;
  FUN_089e0344(0x461c4000,param_1,&local_1a0,0);
  *(undefined4 *)(param_1 + 0x590) = 0;
  iVar20 = FUN_0884c3d0(1);
  if (iVar20 == 0) {
    FUN_088556a4(param_1,local_4c,local_50);
  }
  else {
    *(undefined *)(param_1 + 0xa3d) = 1;
    uVar22 = FUN_08855648(param_1);
    uVar24 = FUN_08855650(param_1);
    FUN_088556a4(param_1,uVar22,uVar24);
  }
  *(undefined *)(param_1 + 0xa41) = 1;
  iVar20 = 0;
  puVar27 = (undefined4 *)(param_1 + 0x9c0);
  do {
    uVar22 = vrndf1_s();
    local_80 = (float)vsub_s(uVar22,in_V7F);
    uVar22 = vmul_s(((float)iVar20 * 0.33 + 0.15 + local_80 * 0.23) * 6.283185,in_V7C);
    auVar4 = vrot_q(uVar22,1,0,2,0);
    uStack_d4 = auVar4._12_4_;
    auVar1 = vscl_t(auVar4._0_12_,0x442f0000);
    auVar1 = vadd_t(auVar1,*pauVar28);
    local_e0 = auVar1._0_4_;
    uStack_dc = auVar1._4_4_;
    uStack_d8 = auVar1._8_4_;
    *puVar27 = local_e0;
    puVar27[1] = uStack_dc;
    puVar27[2] = uStack_d8;
    puVar27[3] = uStack_d4;
    iVar20 = iVar20 + 1;
    puVar27 = puVar27 + 4;
  } while (iVar20 < 3);
  local_48 = (undefined4 *)0x0;
  FUN_089d8634();
  uVar22 = FUN_089d81a4();
  FUN_089d816c(1);
  puVar25 = (undefined4 *)FUN_089d7d74(0xc0,0,0);
  FUN_089d816c(uVar22);
  FUN_089d866c();
  puVar27 = local_48;
  if (puVar25 != (undefined4 *)0x0) {
    puVar25[1] = local_54;
    *(undefined *)(puVar25 + 0x2c) = 0;
    *puVar25 = 6;
    puVar27 = puVar25;
  }
  *(undefined4 **)(param_1 + 0x6cc) = puVar27;
  iVar20 = *(int *)(param_1 + 0x130);
  puVar25 = *(undefined4 **)(iVar20 + 0x38);
  uVar22 = puVar25[1];
  uVar24 = puVar25[2];
  uVar13 = puVar25[3];
  puVar27[4] = *puVar25;
  puVar27[5] = uVar22;
  puVar27[6] = uVar24;
  puVar27[7] = uVar13;
  uVar22 = puVar25[5];
  uVar24 = puVar25[6];
  uVar13 = puVar25[7];
  puVar27[8] = puVar25[4];
  puVar27[9] = uVar22;
  puVar27[10] = uVar24;
  puVar27[0xb] = uVar13;
  *(undefined *)(puVar27 + 0x2c) = 0;
  uVar5 = *(undefined4 *)(iVar20 + 0x84);
  uVar9 = *(undefined4 *)(iVar20 + 0x88);
  uVar14 = *(undefined4 *)(iVar20 + 0x8c);
  uVar22 = *(undefined4 *)(iVar20 + 0x90);
  uVar6 = *(undefined4 *)(iVar20 + 0x94);
  uVar10 = *(undefined4 *)(iVar20 + 0x98);
  uVar15 = *(undefined4 *)(iVar20 + 0x9c);
  uVar24 = *(undefined4 *)(iVar20 + 0xa0);
  uVar7 = *(undefined4 *)(iVar20 + 0xa4);
  uVar11 = *(undefined4 *)(iVar20 + 0xa8);
  uVar16 = *(undefined4 *)(iVar20 + 0xac);
  uVar13 = *(undefined4 *)(iVar20 + 0xb0);
  uVar8 = *(undefined4 *)(iVar20 + 0xb4);
  uVar12 = *(undefined4 *)(iVar20 + 0xb8);
  uVar17 = *(undefined4 *)(iVar20 + 0xbc);
  puVar27[0xc] = *(undefined4 *)(iVar20 + 0x80);
  puVar27[0xd] = uVar5;
  puVar27[0xe] = uVar9;
  puVar27[0xf] = uVar14;
  puVar27[0x10] = uVar22;
  puVar27[0x11] = uVar6;
  puVar27[0x12] = uVar10;
  puVar27[0x13] = uVar15;
  puVar27[0x14] = uVar24;
  puVar27[0x15] = uVar7;
  puVar27[0x16] = uVar11;
  puVar27[0x17] = uVar16;
  puVar27[0x18] = uVar13;
  puVar27[0x19] = uVar8;
  puVar27[0x1a] = uVar12;
  puVar27[0x1b] = uVar17;
  iVar20 = *(int *)(param_1 + 0x6cc);
  if (*(char *)(iVar20 + 0xb0) == '\0') {
    auVar2 = vzero_t();
    auVar19._32_4_ = *(undefined4 *)(iVar20 + 0x58);
    auVar19._28_4_ = *(undefined4 *)(iVar20 + 0x48);
    auVar19._24_4_ = *(undefined4 *)(iVar20 + 0x38);
    auVar19._20_4_ = *(undefined4 *)(iVar20 + 0x54);
    auVar19._16_4_ = *(undefined4 *)(iVar20 + 0x44);
    auVar19._12_4_ = *(undefined4 *)(iVar20 + 0x34);
    auVar19._8_4_ = *(undefined4 *)(iVar20 + 0x50);
    auVar19._4_4_ = *(undefined4 *)(iVar20 + 0x40);
    auVar19._0_4_ = *(undefined4 *)(iVar20 + 0x30);
    auVar1 = vtfm3_t(auVar19,*(undefined (*) [12])(iVar20 + 0x60));
    *(undefined4 *)(iVar20 + 0x70) = *(undefined4 *)(iVar20 + 0x30);
    *(undefined4 *)(iVar20 + 0x74) = *(undefined4 *)(iVar20 + 0x40);
    *(undefined4 *)(iVar20 + 0x78) = *(undefined4 *)(iVar20 + 0x50);
    *(int *)(iVar20 + 0x7c) = auVar2._0_4_;
    *(undefined4 *)(iVar20 + 0x80) = *(undefined4 *)(iVar20 + 0x34);
    *(undefined4 *)(iVar20 + 0x84) = *(undefined4 *)(iVar20 + 0x44);
    *(undefined4 *)(iVar20 + 0x88) = *(undefined4 *)(iVar20 + 0x54);
    *(int *)(iVar20 + 0x8c) = auVar2._4_4_;
    auVar1 = vneg_t(auVar1);
    *(undefined4 *)(iVar20 + 0x90) = *(undefined4 *)(iVar20 + 0x38);
    *(undefined4 *)(iVar20 + 0x94) = *(undefined4 *)(iVar20 + 0x48);
    *(undefined4 *)(iVar20 + 0x98) = *(undefined4 *)(iVar20 + 0x58);
    *(int *)(iVar20 + 0x9c) = auVar2._8_4_;
    *(int *)(iVar20 + 0xa0) = auVar1._0_4_;
    *(int *)(iVar20 + 0xa4) = auVar1._4_4_;
    *(int *)(iVar20 + 0xa8) = auVar1._8_4_;
    *(undefined4 *)(iVar20 + 0xac) = *(undefined4 *)(iVar20 + 0x6c);
    *(undefined *)(iVar20 + 0xb0) = 1;
  }
  fVar29 = *(float *)(param_1 + 0x40) * 0.9;
  iVar20 = *(int *)(param_1 + 0x6cc);
  pauVar26 = (undefined (*) [12])(iVar20 + 0x10);
  auVar1 = vscl_t(*pauVar26,fVar29);
  *(int *)*pauVar26 = auVar1._0_4_;
  *(int *)(iVar20 + 0x18) = auVar1._8_4_;
  iVar20 = *(int *)(param_1 + 0x6cc);
  pauVar26 = (undefined (*) [12])(iVar20 + 0x20);
  auVar1 = vscl_t(*pauVar26,fVar29);
  *(int *)*pauVar26 = auVar1._0_4_;
  *(int *)(iVar20 + 0x28) = auVar1._8_4_;
  *(float *)(*(int *)(param_1 + 0x6cc) + 0x24) =
       *(float *)(*(int *)(param_1 + 0x6cc) + 0x24) - 100.0;
  if (*(float *)(*(int *)(param_1 + 0x6cc) + 0x24) <= 30.0) {
    *(undefined4 *)(*(int *)(param_1 + 0x6cc) + 0x24) = 0x41f00000;
  }
  *(undefined4 *)(param_1 + 0xa88) = 0x28;
  *(undefined4 *)(param_1 + 0xa8c) = 0x28;
  FUN_08855840(param_1);
  return param_1;
}

