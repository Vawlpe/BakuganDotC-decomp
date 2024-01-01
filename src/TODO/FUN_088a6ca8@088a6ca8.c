#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088a6ca8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined auVar14 [36];
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  undefined (*pauVar18) [12];
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  undefined4 local_f0;
  float fStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  float local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
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
  undefined4 *local_48;
  int local_44;
  
  FUN_088ab2d0();
  *(undefined **)(param_1 + 0x14) = &DAT_08af27b4;
  FUN_088a8f2c(&local_e0,*(int *)(param_1 + 0x130) + 0xb0,0x3fbf2500);
  iVar15 = FUN_088a9614(param_1);
  local_dc = local_dc + -*(float *)(iVar15 + 4);
  *(float *)(param_1 + 0x24) = local_dc;
  *(float *)(*(int *)(param_1 + 0x130) + 0xb4) = local_dc;
  puVar21 = (undefined4 *)(param_1 + 0x350);
  *puVar21 = in_V72;
  *(undefined4 *)(param_1 + 0x354) = in_V76;
  *(undefined4 *)(param_1 + 0x358) = in_V7A;
  *(undefined4 *)(param_1 + 0x35c) = in_V7E;
  puVar22 = (undefined4 *)(param_1 + 0x360);
  *puVar22 = in_V72;
  *(undefined4 *)(param_1 + 0x364) = in_V76;
  *(undefined4 *)(param_1 + 0x368) = in_V7A;
  *(undefined4 *)(param_1 + 0x36c) = in_V7E;
  puVar23 = (undefined4 *)(param_1 + 0x370);
  *puVar23 = in_V72;
  *(undefined4 *)(param_1 + 0x374) = in_V76;
  *(undefined4 *)(param_1 + 0x378) = in_V7A;
  *(undefined4 *)(param_1 + 0x37c) = in_V7E;
  puVar24 = (undefined4 *)(param_1 + 0x380);
  *puVar24 = in_V72;
  *(undefined4 *)(param_1 + 900) = in_V76;
  *(undefined4 *)(param_1 + 0x388) = in_V7A;
  *(undefined4 *)(param_1 + 0x38c) = in_V7E;
  FUN_089e0b98(param_1,0x14);
  *(undefined4 *)(param_1 + 0x60) = 0x3f000000;
  *(undefined4 *)(param_1 + 100) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x68) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3b4) = 0;
  *(undefined4 *)(param_1 + 0x3b8) = 0x3f333333;
  *(undefined4 *)(param_1 + 0x390) = 0;
  *(undefined4 *)(param_1 + 0x394) = 0;
  *(undefined4 *)(param_1 + 0x39c) = 0;
  *(undefined *)(param_1 + 0xbc) = 1;
  *(undefined4 *)(param_1 + 0x228) = 0x3f800000;
  *(undefined4 *)(param_1 + 800) = 0;
  local_44 = 0;
  FUN_089d8634();
  uVar16 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar17 = FUN_089d7d74(0x680,0,0);
  FUN_089d816c(uVar16);
  FUN_089d866c();
  iVar15 = local_44;
  if (iVar17 != 0) {
    local_f0 = local_e0;
    fStack_ec = local_dc;
    uStack_e8 = uStack_d8;
    uStack_e4 = uStack_d4;
    FUN_0885bb14(iVar17,&local_f0);
    iVar15 = iVar17;
  }
  *(int *)(param_1 + 800) = iVar15;
  *(undefined *)(param_1 + 0x3a0) = 0;
  *(undefined4 *)(param_1 + 0x398) = param_4;
  *(undefined *)(param_1 + 0x324) = 0;
  *(undefined4 *)(param_1 + 0x328) = 0;
  *(undefined4 *)(param_1 + 0x32c) = 0;
  *(undefined4 *)(param_1 + 0x330) = 0;
  *(undefined4 *)(param_1 + 0x334) = 0;
  *(undefined4 *)(param_1 + 0x338) = 0;
  *(undefined4 *)(param_1 + 0x3bc) = 0;
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  *(int *)(param_1 + 0x3a4) = param_2 + -0xbb;
  if (param_2 + -0xbb < 0x12) {
    iVar15 = FUN_088a6b70(param_1,*(undefined4 *)(param_1 + 0x3a4));
    iVar15 = iVar15 * 0x18;
    uVar16 = *(undefined4 *)(&DAT_08a853dc + iVar15);
    uVar20 = *(undefined4 *)(&DAT_08a853e0 + iVar15);
    *(undefined4 *)(param_1 + 0x324) = *(undefined4 *)(&DAT_08a853d8 + iVar15);
    uVar19 = *(undefined4 *)(&DAT_08a853e4 + iVar15);
    uVar26 = *(undefined4 *)(&DAT_08a853ec + iVar15);
    *(undefined4 *)(param_1 + 0x328) = uVar16;
    uVar16 = *(undefined4 *)(&DAT_08a853e8 + iVar15);
    *(undefined4 *)(param_1 + 0x32c) = uVar20;
    *(undefined4 *)(param_1 + 0x330) = uVar19;
    *(undefined4 *)(param_1 + 0x334) = uVar16;
    *(undefined4 *)(param_1 + 0x338) = uVar26;
    *(int *)(param_1 + 0x39c) = *(int *)(param_1 + 0x3a4) / 3 + 1;
    uVar16 = *(undefined4 *)(param_1 + 0x334);
  }
  else {
    uVar16 = *(undefined4 *)(param_1 + 0x334);
  }
  uVar16 = FUN_088a6bd4(param_1,uVar16);
  *(undefined4 *)(param_1 + 0x3ac) = uVar16;
  fVar25 = (float)FUN_088a6c2c(param_1,*(undefined4 *)(param_1 + 0x334));
  *(int *)(param_1 + 0x204) = (int)fVar25;
  *(int *)(param_1 + 0x200) = (int)fVar25;
  *(undefined4 *)(param_1 + 0x3b0) = *(undefined4 *)(param_1 + 0x338);
  iVar15 = *(int *)(param_1 + 0x130);
  uVar16 = *(undefined4 *)(iVar15 + 0xb4);
  uVar19 = *(undefined4 *)(iVar15 + 0xb8);
  uVar20 = *(undefined4 *)(iVar15 + 0xbc);
  *puVar24 = *(undefined4 *)(iVar15 + 0xb0);
  *(undefined4 *)(param_1 + 900) = uVar16;
  *(undefined4 *)(param_1 + 0x388) = uVar19;
  *(undefined4 *)(param_1 + 0x38c) = uVar20;
  FUN_0889d57c(puVar24,puVar24);
  *(undefined4 *)(param_1 + 0x33c) = 0;
  switch(*(undefined4 *)(param_1 + 0x3a4)) {
  case 0:
  case 1:
  case 2:
    FUN_089dedf8(param_1,&local_c0,"ef_01");
    *puVar21 = local_c0;
    *(undefined4 *)(param_1 + 0x354) = uStack_bc;
    *(undefined4 *)(param_1 + 0x358) = uStack_b8;
    *(undefined4 *)(param_1 + 0x35c) = uStack_b4;
    iVar15 = FUN_088243d8(DAT_08ac5c70,0x4a,puVar21);
    *(int *)(iVar15 + 0x1fc) = param_1;
    if (param_1 != 0) {
      *(undefined4 *)(iVar15 + 0x200) = *(undefined4 *)(param_1 + 0xc);
    }
    iVar15 = FUN_089dedac(param_1,"ef_02");
    if (iVar15 != 0) {
      FUN_089dedf8(param_1,&local_b0,"ef_02");
      *puVar22 = local_b0;
      *(undefined4 *)(param_1 + 0x364) = uStack_ac;
      *(undefined4 *)(param_1 + 0x368) = uStack_a8;
      *(undefined4 *)(param_1 + 0x36c) = uStack_a4;
      iVar15 = FUN_088243d8(DAT_08ac5c70,0x4a,puVar22);
      *(int *)(iVar15 + 0x1fc) = param_1;
      if (param_1 != 0) {
        *(undefined4 *)(iVar15 + 0x200) = *(undefined4 *)(param_1 + 0xc);
      }
    }
    iVar15 = FUN_089dedac(param_1,"ef_03");
    if (iVar15 != 0) {
      FUN_089dedf8(param_1,&local_a0,"ef_03");
      *puVar23 = local_a0;
      *(undefined4 *)(param_1 + 0x374) = uStack_9c;
      *(undefined4 *)(param_1 + 0x378) = uStack_98;
      *(undefined4 *)(param_1 + 0x37c) = uStack_94;
      iVar15 = FUN_088243d8(DAT_08ac5c70,0x4a,puVar23);
      *(int *)(iVar15 + 0x1fc) = param_1;
      if (param_1 != 0) {
        *(undefined4 *)(iVar15 + 0x200) = *(undefined4 *)(param_1 + 0xc);
      }
    }
    break;
  case 7:
    *puVar21 = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x354) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x358) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x35c) = *(undefined4 *)(param_1 + 0x2c);
    iVar15 = FUN_08824594(DAT_08abd5b0,0x131,puVar21,param_1);
    *(int *)(iVar15 + 0x1fc) = param_1;
    if (param_1 != 0) {
      *(undefined4 *)(iVar15 + 0x200) = *(undefined4 *)(param_1 + 0xc);
    }
    break;
  case 8:
    iVar15 = FUN_089df7ec(param_1,"fz_landmark_ventus03_01");
    if (iVar15 != 0) {
      *(byte *)(iVar15 + 4) = *(byte *)(iVar15 + 4) & 0xef;
      *(undefined *)(iVar15 + 6) = 0;
    }
    *puVar21 = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x354) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x358) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x35c) = *(undefined4 *)(param_1 + 0x2c);
    iVar15 = FUN_08824594(DAT_08abd5b0,0x132,puVar21,param_1);
    *(int *)(iVar15 + 0x1fc) = param_1;
    if (param_1 != 0) {
      *(undefined4 *)(iVar15 + 0x200) = *(undefined4 *)(param_1 + 0xc);
    }
  }
  FUN_088a6c7c();
  DAT_08af7fa0 = FUN_089f7720("HologramEffect");
  local_48 = (undefined4 *)0x0;
  FUN_089d8634();
  uVar16 = FUN_089d81a4();
  FUN_089d816c(1);
  puVar22 = (undefined4 *)FUN_089d7d74(0xc0,0,0);
  FUN_089d816c(uVar16);
  FUN_089d866c();
  puVar21 = local_48;
  if (puVar22 != (undefined4 *)0x0) {
    puVar22[1] = &DAT_08af5684;
    *(undefined *)(puVar22 + 0x2c) = 0;
    *puVar22 = 6;
    puVar21 = puVar22;
  }
  *(undefined4 **)(param_1 + 0x3a8) = puVar21;
  puVar22 = (undefined4 *)FUN_088a9614(param_1);
  iVar15 = *(int *)(param_1 + 0x130);
  uVar16 = puVar22[1];
  uVar19 = puVar22[2];
  uVar20 = puVar22[3];
  puVar21[4] = *puVar22;
  puVar21[5] = uVar16;
  puVar21[6] = uVar19;
  puVar21[7] = uVar20;
  uVar16 = puVar22[5];
  uVar19 = puVar22[6];
  uVar20 = puVar22[7];
  puVar21[8] = puVar22[4];
  puVar21[9] = uVar16;
  puVar21[10] = uVar19;
  puVar21[0xb] = uVar20;
  *(undefined *)(puVar21 + 0x2c) = 0;
  uVar26 = *(undefined4 *)(iVar15 + 0x84);
  uVar6 = *(undefined4 *)(iVar15 + 0x88);
  uVar10 = *(undefined4 *)(iVar15 + 0x8c);
  uVar16 = *(undefined4 *)(iVar15 + 0x90);
  uVar3 = *(undefined4 *)(iVar15 + 0x94);
  uVar7 = *(undefined4 *)(iVar15 + 0x98);
  uVar11 = *(undefined4 *)(iVar15 + 0x9c);
  uVar19 = *(undefined4 *)(iVar15 + 0xa0);
  uVar4 = *(undefined4 *)(iVar15 + 0xa4);
  uVar8 = *(undefined4 *)(iVar15 + 0xa8);
  uVar12 = *(undefined4 *)(iVar15 + 0xac);
  uVar20 = *(undefined4 *)(iVar15 + 0xb0);
  uVar5 = *(undefined4 *)(iVar15 + 0xb4);
  uVar9 = *(undefined4 *)(iVar15 + 0xb8);
  uVar13 = *(undefined4 *)(iVar15 + 0xbc);
  puVar21[0xc] = *(undefined4 *)(iVar15 + 0x80);
  puVar21[0xd] = uVar26;
  puVar21[0xe] = uVar6;
  puVar21[0xf] = uVar10;
  puVar21[0x10] = uVar16;
  puVar21[0x11] = uVar3;
  puVar21[0x12] = uVar7;
  puVar21[0x13] = uVar11;
  puVar21[0x14] = uVar19;
  puVar21[0x15] = uVar4;
  puVar21[0x16] = uVar8;
  puVar21[0x17] = uVar12;
  puVar21[0x18] = uVar20;
  puVar21[0x19] = uVar5;
  puVar21[0x1a] = uVar9;
  puVar21[0x1b] = uVar13;
  iVar15 = *(int *)(param_1 + 0x3a8);
  if (*(char *)(iVar15 + 0xb0) == '\0') {
    auVar1 = vzero_t();
    auVar14._32_4_ = *(undefined4 *)(iVar15 + 0x58);
    auVar14._28_4_ = *(undefined4 *)(iVar15 + 0x48);
    auVar14._24_4_ = *(undefined4 *)(iVar15 + 0x38);
    auVar14._20_4_ = *(undefined4 *)(iVar15 + 0x54);
    auVar14._16_4_ = *(undefined4 *)(iVar15 + 0x44);
    auVar14._12_4_ = *(undefined4 *)(iVar15 + 0x34);
    auVar14._8_4_ = *(undefined4 *)(iVar15 + 0x50);
    auVar14._4_4_ = *(undefined4 *)(iVar15 + 0x40);
    auVar14._0_4_ = *(undefined4 *)(iVar15 + 0x30);
    auVar2 = vtfm3_t(auVar14,*(undefined (*) [12])(iVar15 + 0x60));
    *(undefined4 *)(iVar15 + 0x70) = *(undefined4 *)(iVar15 + 0x30);
    *(undefined4 *)(iVar15 + 0x74) = *(undefined4 *)(iVar15 + 0x40);
    *(undefined4 *)(iVar15 + 0x78) = *(undefined4 *)(iVar15 + 0x50);
    *(int *)(iVar15 + 0x7c) = auVar1._0_4_;
    *(undefined4 *)(iVar15 + 0x80) = *(undefined4 *)(iVar15 + 0x34);
    *(undefined4 *)(iVar15 + 0x84) = *(undefined4 *)(iVar15 + 0x44);
    *(undefined4 *)(iVar15 + 0x88) = *(undefined4 *)(iVar15 + 0x54);
    *(int *)(iVar15 + 0x8c) = auVar1._4_4_;
    auVar2 = vneg_t(auVar2);
    *(undefined4 *)(iVar15 + 0x90) = *(undefined4 *)(iVar15 + 0x38);
    *(undefined4 *)(iVar15 + 0x94) = *(undefined4 *)(iVar15 + 0x48);
    *(undefined4 *)(iVar15 + 0x98) = *(undefined4 *)(iVar15 + 0x58);
    *(int *)(iVar15 + 0x9c) = auVar1._8_4_;
    *(int *)(iVar15 + 0xa0) = auVar2._0_4_;
    *(int *)(iVar15 + 0xa4) = auVar2._4_4_;
    *(int *)(iVar15 + 0xa8) = auVar2._8_4_;
    *(undefined4 *)(iVar15 + 0xac) = *(undefined4 *)(iVar15 + 0x6c);
    *(undefined *)(iVar15 + 0xb0) = 1;
  }
  fVar25 = *(float *)(param_1 + 0x40) * 0.9;
  iVar15 = *(int *)(param_1 + 0x3a8);
  pauVar18 = (undefined (*) [12])(iVar15 + 0x10);
  auVar2 = vscl_t(*pauVar18,fVar25);
  *(int *)*pauVar18 = auVar2._0_4_;
  *(int *)(iVar15 + 0x18) = auVar2._8_4_;
  iVar15 = *(int *)(param_1 + 0x3a8);
  pauVar18 = (undefined (*) [12])(iVar15 + 0x20);
  auVar2 = vscl_t(*pauVar18,fVar25);
  *(int *)*pauVar18 = auVar2._0_4_;
  *(int *)(iVar15 + 0x28) = auVar2._8_4_;
  return param_1;
}

