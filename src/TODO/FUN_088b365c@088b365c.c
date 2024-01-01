#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b365c(int param_1,int param_2)

{
  undefined auVar1 [16];
  undefined auVar2 [12];
  undefined auVar3 [12];
  undefined auVar4 [36];
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
  undefined4 *puVar16;
  undefined4 *puVar17;
  int iVar18;
  undefined (*pauVar19) [16];
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  
  iVar18 = param_2 * 0x18;
  fVar20 = 0.0;
  fVar22 = 0.0;
  if (param_2 == 0) {
    fVar20 = -50.0;
  }
  else {
    fVar22 = 50.0;
  }
  uVar23 = *(undefined4 *)(&DAT_08a85250 + iVar18);
  uVar26 = *(undefined4 *)(&DAT_08a85254 + iVar18);
  fVar25 = *(float *)(&DAT_08a85258 + iVar18);
  uVar21 = *(undefined4 *)(&DAT_08a8525c + iVar18);
  uVar24 = *(undefined4 *)(&DAT_08a85260 + iVar18);
  fVar27 = *(float *)(&DAT_08a85264 + iVar18);
  pauVar19 = (undefined (*) [16])(param_1 + 0x70);
  *(undefined4 *)*pauVar19 = uVar23;
  *(undefined4 *)(param_1 + 0x74) = uVar26;
  *(float *)(param_1 + 0x78) = fVar25 + fVar20;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)*(undefined (*) [16])(param_1 + 0x60) = uVar21;
  *(undefined4 *)(param_1 + 100) = uVar24;
  *(float *)(param_1 + 0x68) = fVar27 + fVar22;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  puVar17 = (undefined4 *)(param_1 + 0x30);
  auVar1 = vsub_q(*(undefined (*) [16])(param_1 + 0x60),*pauVar19);
  auVar1 = vscl_q(auVar1,0x3f000000);
  auVar1 = vadd_q(*pauVar19,auVar1);
  *puVar17 = auVar1._0_4_;
  *(int *)(param_1 + 0x34) = auVar1._4_4_;
  *(int *)(param_1 + 0x38) = auVar1._8_4_;
  *(int *)(param_1 + 0x3c) = auVar1._12_4_;
  FUN_0889d57c(puVar17,puVar17);
  if (*(int *)(param_1 + 0x1c) == 0) {
    FUN_089d8634();
    uVar15 = FUN_089d81a4();
    FUN_089d816c(1);
    puVar16 = (undefined4 *)FUN_089d7d74(0xc0,0,0);
    FUN_089d816c(uVar15);
    FUN_089d866c();
    puVar17 = (undefined4 *)0x0;
    if (puVar16 != (undefined4 *)0x0) {
      puVar16[1] = &DAT_08af5684;
      *(undefined *)(puVar16 + 0x2c) = 0;
      *puVar16 = 6;
      puVar17 = puVar16;
    }
    *(undefined4 **)(param_1 + 0x1c) = puVar17;
  }
  iVar18 = *(int *)(param_1 + 0x1c);
  *(undefined4 *)(iVar18 + 0x10) = uVar23;
  *(undefined4 *)(iVar18 + 0x14) = uVar26;
  *(float *)(iVar18 + 0x18) = fVar25 + fVar20;
  *(undefined4 *)(iVar18 + 0x1c) = 0;
  *(undefined4 *)(iVar18 + 0x20) = uVar21;
  *(undefined4 *)(iVar18 + 0x24) = uVar24;
  *(float *)(iVar18 + 0x28) = fVar27 + fVar22;
  *(undefined4 *)(iVar18 + 0x2c) = 0;
  *(undefined *)(iVar18 + 0xb0) = 0;
  uVar14 = DAT_08b001fc;
  uVar13 = DAT_08b001f8;
  uVar12 = DAT_08b001f4;
  uVar11 = DAT_08b001f0;
  uVar10 = DAT_08b001ec;
  uVar9 = DAT_08b001e8;
  uVar8 = DAT_08b001e4;
  uVar7 = DAT_08b001e0;
  uVar6 = DAT_08b001dc;
  uVar5 = DAT_08b001d8;
  uVar15 = DAT_08b001d4;
  uVar26 = DAT_08b001d0;
  uVar24 = DAT_08b001cc;
  uVar23 = DAT_08b001c8;
  uVar21 = DAT_08b001c4;
  *(undefined4 *)(iVar18 + 0x30) = DAT_08b001c0;
  *(undefined4 *)(iVar18 + 0x34) = uVar21;
  *(undefined4 *)(iVar18 + 0x38) = uVar23;
  *(undefined4 *)(iVar18 + 0x3c) = uVar24;
  *(undefined4 *)(iVar18 + 0x40) = uVar26;
  *(undefined4 *)(iVar18 + 0x44) = uVar15;
  *(undefined4 *)(iVar18 + 0x48) = uVar5;
  *(undefined4 *)(iVar18 + 0x4c) = uVar6;
  *(undefined4 *)(iVar18 + 0x50) = uVar7;
  *(undefined4 *)(iVar18 + 0x54) = uVar8;
  *(undefined4 *)(iVar18 + 0x58) = uVar9;
  *(undefined4 *)(iVar18 + 0x5c) = uVar10;
  *(undefined4 *)(iVar18 + 0x60) = uVar11;
  *(undefined4 *)(iVar18 + 100) = uVar12;
  *(undefined4 *)(iVar18 + 0x68) = uVar13;
  *(undefined4 *)(iVar18 + 0x6c) = uVar14;
  iVar18 = *(int *)(param_1 + 0x1c);
  if (*(char *)(iVar18 + 0xb0) == '\0') {
    auVar2 = vzero_t();
    auVar4._32_4_ = *(undefined4 *)(iVar18 + 0x58);
    auVar4._28_4_ = *(undefined4 *)(iVar18 + 0x48);
    auVar4._24_4_ = *(undefined4 *)(iVar18 + 0x38);
    auVar4._20_4_ = *(undefined4 *)(iVar18 + 0x54);
    auVar4._16_4_ = *(undefined4 *)(iVar18 + 0x44);
    auVar4._12_4_ = *(undefined4 *)(iVar18 + 0x34);
    auVar4._8_4_ = *(undefined4 *)(iVar18 + 0x50);
    auVar4._4_4_ = *(undefined4 *)(iVar18 + 0x40);
    auVar4._0_4_ = *(undefined4 *)(iVar18 + 0x30);
    auVar3 = vtfm3_t(auVar4,*(undefined (*) [12])(iVar18 + 0x60));
    *(undefined4 *)(iVar18 + 0x70) = *(undefined4 *)(iVar18 + 0x30);
    *(undefined4 *)(iVar18 + 0x74) = *(undefined4 *)(iVar18 + 0x40);
    *(undefined4 *)(iVar18 + 0x78) = *(undefined4 *)(iVar18 + 0x50);
    *(int *)(iVar18 + 0x7c) = auVar2._0_4_;
    *(undefined4 *)(iVar18 + 0x80) = *(undefined4 *)(iVar18 + 0x34);
    *(undefined4 *)(iVar18 + 0x84) = *(undefined4 *)(iVar18 + 0x44);
    *(undefined4 *)(iVar18 + 0x88) = *(undefined4 *)(iVar18 + 0x54);
    *(int *)(iVar18 + 0x8c) = auVar2._4_4_;
    auVar3 = vneg_t(auVar3);
    *(undefined4 *)(iVar18 + 0x90) = *(undefined4 *)(iVar18 + 0x38);
    *(undefined4 *)(iVar18 + 0x94) = *(undefined4 *)(iVar18 + 0x48);
    *(undefined4 *)(iVar18 + 0x98) = *(undefined4 *)(iVar18 + 0x58);
    *(int *)(iVar18 + 0x9c) = auVar2._8_4_;
    *(int *)(iVar18 + 0xa0) = auVar3._0_4_;
    *(int *)(iVar18 + 0xa4) = auVar3._4_4_;
    *(int *)(iVar18 + 0xa8) = auVar3._8_4_;
    *(undefined4 *)(iVar18 + 0xac) = *(undefined4 *)(iVar18 + 0x6c);
    *(undefined *)(iVar18 + 0xb0) = 1;
  }
  return;
}

