#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088aad68(int param_1,undefined4 *param_2)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined auVar3 [64];
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
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined auVar18 [36];
  undefined4 uVar19;
  undefined4 *puVar20;
  int iVar21;
  undefined *puVar22;
  int iVar23;
  undefined4 *puVar24;
  float fVar25;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  undefined auStack_d0 [164];
  undefined4 *local_2c;
  int local_28;
  
  *(undefined4 *)(param_1 + 8) = 0x85;
  *(undefined4 *)(param_1 + 700) = 0;
  if (DAT_08abd5bc == (undefined4 *)0x0) {
    FUN_089d8634();
    uVar19 = FUN_089d81a4();
    FUN_089d816c(1);
    puVar20 = (undefined4 *)FUN_089d7d74(0xc,0,0);
    FUN_089d816c(uVar19);
    FUN_089d866c();
    DAT_08abd5bc = puVar20;
    puVar20[1] = 0;
    *puVar20 = 0;
    DAT_08abd5bc[2] = 0;
  }
  FUN_089d8984(param_1,DAT_08abd5bc);
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  uVar13 = DAT_08b0019c;
  uVar8 = DAT_08b00198;
  uVar19 = DAT_08b00194;
  *(undefined4 *)(param_1 + 0x60) = DAT_08b00190;
  *(undefined4 *)(param_1 + 100) = uVar19;
  *(undefined4 *)(param_1 + 0x68) = uVar8;
  *(undefined4 *)(param_1 + 0x6c) = uVar13;
  *(undefined *)(param_1 + 0x28a) = 0;
  uVar13 = DAT_08b001bc;
  uVar8 = DAT_08b001b8;
  uVar19 = DAT_08b001b4;
  *(undefined4 *)(param_1 + 0x240) = DAT_08b001b0;
  *(undefined4 *)(param_1 + 0x244) = uVar19;
  *(undefined4 *)(param_1 + 0x248) = uVar8;
  *(undefined4 *)(param_1 + 0x24c) = uVar13;
  uVar19 = FUN_088b7768(*(undefined4 *)(param_1 + 0x218));
  *(undefined4 *)(param_1 + 0x144) = uVar19;
  fVar25 = (float)FUN_088aa5ac(param_1,*(undefined4 *)(param_1 + 0x218));
  *(int *)(param_1 + 0x200) = (int)fVar25;
  *(int *)(param_1 + 0x204) = (int)fVar25;
  *(undefined4 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x228) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x80) = in_V72;
  *(undefined4 *)(param_1 + 0x84) = in_V76;
  *(undefined4 *)(param_1 + 0x88) = in_V7A;
  *(undefined4 *)(param_1 + 0x8c) = in_V7E;
  *(undefined4 *)(param_1 + 0x220) = 0;
  iVar21 = FUN_089ceba4(DAT_08ac5934);
  *(int *)(param_1 + 0x224) = iVar21 * 0x1e;
  FUN_088a97cc(param_1);
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  *(undefined4 *)(param_1 + 0x1fc) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0;
  auVar3 = vmidt_q();
  *(int *)(param_1 + 0x170) = auVar3._0_4_;
  *(int *)(param_1 + 0x174) = auVar3._16_4_;
  *(int *)(param_1 + 0x178) = auVar3._32_4_;
  *(int *)(param_1 + 0x17c) = auVar3._48_4_;
  *(int *)(param_1 + 0x180) = auVar3._4_4_;
  *(int *)(param_1 + 0x184) = auVar3._20_4_;
  *(int *)(param_1 + 0x188) = auVar3._36_4_;
  *(int *)(param_1 + 0x18c) = auVar3._52_4_;
  *(int *)(param_1 + 400) = auVar3._8_4_;
  *(int *)(param_1 + 0x194) = auVar3._24_4_;
  *(int *)(param_1 + 0x198) = auVar3._40_4_;
  *(int *)(param_1 + 0x19c) = auVar3._56_4_;
  *(int *)(param_1 + 0x1a0) = auVar3._12_4_;
  *(int *)(param_1 + 0x1a4) = auVar3._28_4_;
  *(int *)(param_1 + 0x1a8) = auVar3._44_4_;
  *(int *)(param_1 + 0x1ac) = auVar3._60_4_;
  *(undefined *)(param_1 + 0x281) = 0;
  *(undefined *)(param_1 + 0x282) = 0;
  *(undefined4 *)(param_1 + 0x22c) = 0;
  *(undefined4 *)(param_1 + 0x260) = 0;
  *(undefined4 *)(param_1 + 0x270) = in_V72;
  *(undefined4 *)(param_1 + 0x274) = in_V76;
  *(undefined4 *)(param_1 + 0x278) = in_V7A;
  *(undefined4 *)(param_1 + 0x27c) = in_V7E;
  *(undefined *)(param_1 + 0x285) = 0;
  *(undefined *)(param_1 + 0x286) = 0;
  *(undefined *)(param_1 + 0x287) = 1;
  *(undefined *)(param_1 + 0x289) = 0;
  iVar21 = FUN_088aab1c(param_1,*(undefined4 *)(param_1 + 0x218));
  if (iVar21 != 0) {
    *(undefined *)(param_1 + 0xbc) = 0;
    uVar13 = DAT_08b0019c;
    uVar8 = DAT_08b00198;
    uVar19 = DAT_08b00194;
    *(undefined4 *)(param_1 + 0x60) = DAT_08b00190;
    *(undefined4 *)(param_1 + 100) = uVar19;
    *(undefined4 *)(param_1 + 0x68) = uVar8;
    *(undefined4 *)(param_1 + 0x6c) = uVar13;
  }
  uVar19 = param_2[1];
  uVar8 = param_2[2];
  uVar13 = param_2[3];
  *(undefined4 *)(param_1 + 0x20) = *param_2;
  *(undefined4 *)(param_1 + 0x24) = uVar19;
  *(undefined4 *)(param_1 + 0x28) = uVar8;
  *(undefined4 *)(param_1 + 0x2c) = uVar13;
  FUN_088aab74(param_1,param_2);
  iVar21 = FUN_088aad3c(param_1);
  if (iVar21 == 0) {
    *(undefined *)(param_1 + 0x287) = 0;
  }
  else {
    strcpy(auStack_d0,(&PTR_DAT_08a8fe48)[*(int *)(param_1 + 0x218) * 3]);
    puVar22 = (undefined *)strrchr(auStack_d0,0x2e);
    if (puVar22 != (undefined *)0x0) {
      *puVar22 = 0;
    }
    strcat(auStack_d0,"_col.ctc");
    iVar21 = FUN_089be054(DAT_08ac520c,auStack_d0);
    if (iVar21 != 0) {
      local_28 = 0;
      FUN_089d8634();
      uVar19 = FUN_089d81a4();
      FUN_089d816c(1);
      iVar23 = FUN_089d7d74(400,0,0);
      FUN_089d816c(uVar19);
      FUN_089d866c();
      iVar21 = local_28;
      if (iVar23 != 0) {
        FUN_0881a358(iVar23,3);
        iVar21 = iVar23;
      }
      *(int *)(param_1 + 0x140) = iVar21;
      uVar19 = FUN_089be054(DAT_08ac520c,auStack_d0);
      FUN_0881a484(iVar21,uVar19,9,param_1,0);
      *(undefined *)(*(int *)(param_1 + 0x140) + 0x104) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x144) = 1;
      *(int *)(*(int *)(param_1 + 0x140) + 0x138) = param_1;
      iVar21 = *(int *)(param_1 + 0x140);
      *(int *)(iVar21 + 0x110) = *(int *)(param_1 + 0x130) + 0x80;
      *(undefined *)(iVar21 + 0x10c) = 1;
      iVar21 = *(int *)(param_1 + 0x218);
      if (iVar21 < 0x6a) {
        if (iVar21 < 7) {
          if (iVar21 < 6) {
            *(undefined *)(param_1 + 0x289) = 0;
          }
          else {
LAB_088ab0e8:
            *(undefined *)(param_1 + 0x289) = 1;
          }
        }
        else {
          if (iVar21 == 0x3f) goto LAB_088ab0e8;
          *(undefined *)(param_1 + 0x289) = 0;
        }
      }
      else if (iVar21 < 0x7d) {
        if ((iVar21 < 0x6c) || (0x7b < iVar21)) goto LAB_088ab0e8;
        *(undefined *)(param_1 + 0x289) = 0;
      }
      else {
        if (iVar21 == 0x85) goto LAB_088ab0e8;
        *(undefined *)(param_1 + 0x289) = 0;
      }
      iVar21 = FUN_088aab58(param_1);
      if (iVar21 == 0) {
        iVar21 = *(int *)(param_1 + 0x208);
        goto LAB_088ab11c;
      }
      if (*(int *)(param_1 + 0x218) == 0x5d) {
        iVar21 = *(int *)(param_1 + 0x208);
        goto LAB_088ab11c;
      }
      *(undefined *)(param_1 + 0x289) = 1;
    }
  }
  iVar21 = *(int *)(param_1 + 0x208);
LAB_088ab11c:
  if (iVar21 == 8) {
    if (*(int *)(param_1 + 0x140) == 0) {
      *(undefined *)(param_1 + 0x280) = 0;
    }
    else {
      iVar21 = *(int *)(param_1 + 0x140);
      *(undefined4 *)(iVar21 + 0x148) = 0xffffffff;
      *(uint *)(iVar21 + 0x130) = *(uint *)(iVar21 + 0x130) | 1;
      *(undefined *)(param_1 + 0x280) = 0;
    }
  }
  else {
    *(undefined *)(param_1 + 0x280) = 0;
  }
  iVar21 = FUN_088a9614(param_1);
  fVar25 = *(float *)(iVar21 + 0x14);
  iVar21 = FUN_088a9614(param_1);
  *(float *)(param_1 + 0x230) = fVar25 - *(float *)(iVar21 + 4);
  memset_jak((undefined *)(param_1 + 0x2b0),0,0xc);
  if ((*(int *)(param_1 + 0x140) != 0) && (*(char *)(param_1 + 0x289) == '\0')) {
    local_2c = (undefined4 *)0x0;
    FUN_089d8634();
    uVar19 = FUN_089d81a4();
    FUN_089d816c(1);
    puVar24 = (undefined4 *)FUN_089d7d74(0xc0,0,0);
    FUN_089d816c(uVar19);
    FUN_089d866c();
    puVar20 = local_2c;
    if (puVar24 != (undefined4 *)0x0) {
      puVar24[1] = &DAT_08af5684;
      *(undefined *)(puVar24 + 0x2c) = 0;
      *puVar24 = 6;
      puVar20 = puVar24;
    }
    *(undefined4 **)(param_1 + 0x318) = puVar20;
    puVar24 = (undefined4 *)FUN_088a9614(param_1);
    iVar21 = *(int *)(param_1 + 0x130);
    uVar19 = puVar24[1];
    uVar8 = puVar24[2];
    uVar13 = puVar24[3];
    puVar20[4] = *puVar24;
    puVar20[5] = uVar19;
    puVar20[6] = uVar8;
    puVar20[7] = uVar13;
    uVar19 = puVar24[5];
    uVar8 = puVar24[6];
    uVar13 = puVar24[7];
    puVar20[8] = puVar24[4];
    puVar20[9] = uVar19;
    puVar20[10] = uVar8;
    puVar20[0xb] = uVar13;
    *(undefined *)(puVar20 + 0x2c) = 0;
    uVar4 = *(undefined4 *)(iVar21 + 0x84);
    uVar9 = *(undefined4 *)(iVar21 + 0x88);
    uVar14 = *(undefined4 *)(iVar21 + 0x8c);
    uVar19 = *(undefined4 *)(iVar21 + 0x90);
    uVar5 = *(undefined4 *)(iVar21 + 0x94);
    uVar10 = *(undefined4 *)(iVar21 + 0x98);
    uVar15 = *(undefined4 *)(iVar21 + 0x9c);
    uVar8 = *(undefined4 *)(iVar21 + 0xa0);
    uVar6 = *(undefined4 *)(iVar21 + 0xa4);
    uVar11 = *(undefined4 *)(iVar21 + 0xa8);
    uVar16 = *(undefined4 *)(iVar21 + 0xac);
    uVar13 = *(undefined4 *)(iVar21 + 0xb0);
    uVar7 = *(undefined4 *)(iVar21 + 0xb4);
    uVar12 = *(undefined4 *)(iVar21 + 0xb8);
    uVar17 = *(undefined4 *)(iVar21 + 0xbc);
    puVar20[0xc] = *(undefined4 *)(iVar21 + 0x80);
    puVar20[0xd] = uVar4;
    puVar20[0xe] = uVar9;
    puVar20[0xf] = uVar14;
    puVar20[0x10] = uVar19;
    puVar20[0x11] = uVar5;
    puVar20[0x12] = uVar10;
    puVar20[0x13] = uVar15;
    puVar20[0x14] = uVar8;
    puVar20[0x15] = uVar6;
    puVar20[0x16] = uVar11;
    puVar20[0x17] = uVar16;
    puVar20[0x18] = uVar13;
    puVar20[0x19] = uVar7;
    puVar20[0x1a] = uVar12;
    puVar20[0x1b] = uVar17;
    iVar21 = *(int *)(param_1 + 0x318);
    if (*(char *)(iVar21 + 0xb0) == '\0') {
      auVar1 = vzero_t();
      auVar18._32_4_ = *(undefined4 *)(iVar21 + 0x58);
      auVar18._28_4_ = *(undefined4 *)(iVar21 + 0x48);
      auVar18._24_4_ = *(undefined4 *)(iVar21 + 0x38);
      auVar18._20_4_ = *(undefined4 *)(iVar21 + 0x54);
      auVar18._16_4_ = *(undefined4 *)(iVar21 + 0x44);
      auVar18._12_4_ = *(undefined4 *)(iVar21 + 0x34);
      auVar18._8_4_ = *(undefined4 *)(iVar21 + 0x50);
      auVar18._4_4_ = *(undefined4 *)(iVar21 + 0x40);
      auVar18._0_4_ = *(undefined4 *)(iVar21 + 0x30);
      auVar2 = vtfm3_t(auVar18,*(undefined (*) [12])(iVar21 + 0x60));
      *(undefined4 *)(iVar21 + 0x70) = *(undefined4 *)(iVar21 + 0x30);
      *(undefined4 *)(iVar21 + 0x74) = *(undefined4 *)(iVar21 + 0x40);
      *(undefined4 *)(iVar21 + 0x78) = *(undefined4 *)(iVar21 + 0x50);
      *(int *)(iVar21 + 0x7c) = auVar1._0_4_;
      *(undefined4 *)(iVar21 + 0x80) = *(undefined4 *)(iVar21 + 0x34);
      *(undefined4 *)(iVar21 + 0x84) = *(undefined4 *)(iVar21 + 0x44);
      *(undefined4 *)(iVar21 + 0x88) = *(undefined4 *)(iVar21 + 0x54);
      *(int *)(iVar21 + 0x8c) = auVar1._4_4_;
      auVar2 = vneg_t(auVar2);
      *(undefined4 *)(iVar21 + 0x90) = *(undefined4 *)(iVar21 + 0x38);
      *(undefined4 *)(iVar21 + 0x94) = *(undefined4 *)(iVar21 + 0x48);
      *(undefined4 *)(iVar21 + 0x98) = *(undefined4 *)(iVar21 + 0x58);
      *(int *)(iVar21 + 0x9c) = auVar1._8_4_;
      *(int *)(iVar21 + 0xa0) = auVar2._0_4_;
      *(int *)(iVar21 + 0xa4) = auVar2._4_4_;
      *(int *)(iVar21 + 0xa8) = auVar2._8_4_;
      *(undefined4 *)(iVar21 + 0xac) = *(undefined4 *)(iVar21 + 0x6c);
      *(undefined *)(iVar21 + 0xb0) = 1;
    }
  }
  FUN_0889d514(param_1);
  return;
}

