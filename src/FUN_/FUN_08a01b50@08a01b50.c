#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint * FUN_08a01b50(int param_1,undefined4 *param_2,undefined4 *param_3,undefined (*param_4) [16],
                   undefined (*param_5) [16])

{
  uint uVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [64];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined auVar8 [64];
  uint *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined4 in_V74;
  undefined local_90 [4];
  undefined auStack_8c [4];
  undefined auStack_88 [4];
  undefined4 uStack_84;
  undefined local_80 [4];
  undefined auStack_7c [4];
  undefined auStack_78 [4];
  undefined4 uStack_74;
  undefined local_70 [4];
  undefined auStack_6c [4];
  undefined auStack_68 [4];
  undefined4 uStack_64;
  undefined local_60 [4];
  undefined auStack_5c [4];
  undefined auStack_58 [4];
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 *local_30;
  undefined *local_2c;
  
  auVar4._60_4_ = param_3[0xf];
  auVar4._56_4_ = param_3[0xb];
  auVar4._52_4_ = param_3[7];
  auVar4._48_4_ = param_3[3];
  auVar4._44_4_ = param_3[0xe];
  auVar4._40_4_ = param_3[10];
  auVar4._36_4_ = param_3[6];
  auVar4._32_4_ = param_3[2];
  auVar4._28_4_ = param_3[0xd];
  auVar4._24_4_ = param_3[9];
  auVar4._20_4_ = param_3[5];
  auVar4._16_4_ = param_3[1];
  auVar4._12_4_ = param_3[0xc];
  auVar4._8_4_ = param_3[8];
  auVar4._4_4_ = param_3[4];
  auVar4._0_4_ = *param_3;
  auVar8._60_4_ = *(undefined4 *)(param_1 + 0x6c);
  auVar8._56_4_ = *(undefined4 *)(param_1 + 0x5c);
  auVar8._52_4_ = *(undefined4 *)(param_1 + 0x4c);
  auVar8._48_4_ = *(undefined4 *)(param_1 + 0x3c);
  auVar8._44_4_ = *(undefined4 *)(param_1 + 0x68);
  auVar8._40_4_ = *(undefined4 *)(param_1 + 0x58);
  auVar8._36_4_ = *(undefined4 *)(param_1 + 0x48);
  auVar8._32_4_ = *(undefined4 *)(param_1 + 0x38);
  auVar8._28_4_ = *(undefined4 *)(param_1 + 100);
  auVar8._24_4_ = *(undefined4 *)(param_1 + 0x54);
  auVar8._20_4_ = *(undefined4 *)(param_1 + 0x44);
  auVar8._16_4_ = *(undefined4 *)(param_1 + 0x34);
  auVar8._12_4_ = *(undefined4 *)(param_1 + 0x60);
  auVar8._8_4_ = *(undefined4 *)(param_1 + 0x50);
  auVar8._4_4_ = *(undefined4 *)(param_1 + 0x40);
  auVar8._0_4_ = *(undefined4 *)(param_1 + 0x30);
  auVar4 = vmmul_q(auVar4,auVar8);
  local_90 = auVar4._0_4_;
  local_80 = auVar4._4_4_;
  local_70 = auVar4._8_4_;
  local_60 = auVar4._12_4_;
  auStack_8c = auVar4._16_4_;
  auStack_7c = auVar4._20_4_;
  auStack_6c = auVar4._24_4_;
  auStack_5c = auVar4._28_4_;
  auStack_88 = auVar4._32_4_;
  auStack_78 = auVar4._36_4_;
  auStack_68 = auVar4._40_4_;
  auStack_58 = auVar4._44_4_;
  uStack_84 = auVar4._48_4_;
  uStack_74 = auVar4._52_4_;
  uStack_64 = auVar4._56_4_;
  uStack_54 = auVar4._60_4_;
  local_2c = local_90;
  auVar3 = vmul_q(*(undefined (*) [16])(param_1 + 0x70),*param_4);
  local_50 = auVar3._0_4_;
  uStack_4c = auVar3._4_4_;
  uStack_48 = auVar3._8_4_;
  uStack_44 = auVar3._12_4_;
  auVar2 = vadd_q(*(undefined (*) [16])(param_1 + 0x80),*param_5);
  local_40 = auVar2._0_4_;
  uStack_3c = auVar2._4_4_;
  uStack_38 = auVar2._8_4_;
  uStack_34 = auVar2._12_4_;
  if (*(short *)(*(int *)(param_1 + 0x28) + 0xc) == 2) {
    puVar9 = (uint *)FUN_089f9290(*(undefined4 *)(param_1 + 0x94),param_2,local_2c,&local_50,
                                  &local_40);
  }
  else {
    *param_2 = 0x3a000000;
    uVar21 = (uint)(local_90 + 1) & 3;
    uVar14 = -1 << (4 - uVar21) * 8 & 0x3b000000U | *(uint *)(local_90 + 1 + -uVar21) >> uVar21 * 8;
    uVar21 = (uint)(auStack_8c + 1) & 3;
    uVar16 = -1 << (4 - uVar21) * 8 & 0x3b000000U |
             *(uint *)(auStack_8c + 1 + -uVar21) >> uVar21 * 8;
    uVar21 = (uint)(auStack_88 + 1) & 3;
    uVar19 = -1 << (4 - uVar21) * 8 & 0x3b000000U |
             *(uint *)(auStack_88 + 1 + -uVar21) >> uVar21 * 8;
    param_2[1] = uVar14;
    param_2[2] = uVar16;
    param_2[3] = uVar19;
    uVar21 = (uint)(local_80 + 1) & 3;
    uVar14 = uVar14 & -1 << (4 - uVar21) * 8 | *(uint *)(local_80 + 1 + -uVar21) >> uVar21 * 8;
    uVar21 = (uint)(auStack_7c + 1) & 3;
    uVar16 = uVar16 & -1 << (4 - uVar21) * 8 | *(uint *)(auStack_7c + 1 + -uVar21) >> uVar21 * 8;
    uVar21 = (uint)(auStack_78 + 1) & 3;
    uVar19 = uVar19 & -1 << (4 - uVar21) * 8 | *(uint *)(auStack_78 + 1 + -uVar21) >> uVar21 * 8;
    param_2[4] = uVar14;
    param_2[5] = uVar16;
    param_2[6] = uVar19;
    uVar21 = (uint)(local_70 + 1) & 3;
    uVar15 = uVar14 & -1 << (4 - uVar21) * 8 | *(uint *)(local_70 + 1 + -uVar21) >> uVar21 * 8;
    uVar21 = (uint)(auStack_6c + 1) & 3;
    uVar17 = uVar16 & -1 << (4 - uVar21) * 8 | *(uint *)(auStack_6c + 1 + -uVar21) >> uVar21 * 8;
    uVar21 = (uint)(auStack_68 + 1) & 3;
    uVar20 = uVar19 & -1 << (4 - uVar21) * 8 | *(uint *)(auStack_68 + 1 + -uVar21) >> uVar21 * 8;
    param_2[7] = uVar15;
    param_2[8] = uVar17;
    param_2[9] = uVar20;
    uVar21 = (uint)(local_60 + 1) & 3;
    uVar14 = (uint)(auStack_5c + 1) & 3;
    uVar19 = *(uint *)(auStack_5c + 1 + -uVar14);
    uVar16 = (uint)(auStack_58 + 1) & 3;
    uVar1 = *(uint *)(auStack_58 + 1 + -uVar16);
    param_2[10] = uVar15 & -1 << (4 - uVar21) * 8 | *(uint *)(local_60 + 1 + -uVar21) >> uVar21 * 8;
    param_2[0xb] = uVar17 & -1 << (4 - uVar14) * 8 | uVar19 >> uVar14 * 8;
    param_2[0xc] = uVar20 & -1 << (4 - uVar16) * 8 | uVar1 >> uVar16 * 8;
    auVar3 = vsat0_q(auVar3);
    auVar3 = vscl_q(auVar3,in_V74);
    auVar3 = vf2iz_q(auVar3,0x17);
    uVar21 = vi2uc_q(auVar3);
    param_2[0xd] = uVar21 & 0xffffff | 0x55000000;
    param_2[0xe] = uVar21 >> 0x18 | 0x58000000;
    auVar2 = vsat0_q(auVar2);
    auVar2 = vscl_q(auVar2,in_V74);
    auVar2 = vf2iz_q(auVar2,0x17);
    uVar21 = vi2uc_q(auVar2);
    param_2[0xf] = uVar21 & 0xffffff | 0x57000000;
    puVar10 = param_2 + 0x10;
    if (*(int *)(param_1 + 0x98) == -1) {
      *puVar10 = 0xdf000032;
      param_2[0x11] = 0xe0000000;
      param_2[0x12] = 0xe1000000;
      puVar10 = param_2 + 0x13;
    }
    else {
      iVar11 = *(int *)(param_1 + 0x98);
      if (iVar11 < 2) {
        if (-1 < iVar11) {
          if (iVar11 < 1) {
            *puVar10 = 0xdf0000aa;
            param_2[0x11] = 0xe0ffffff;
            param_2[0x12] = 0xe1000000;
            puVar10 = param_2 + 0x13;
          }
          else {
            *puVar10 = 0xdf000032;
            param_2[0x11] = 0xe0000000;
            param_2[0x12] = 0xe1000000;
            puVar10 = param_2 + 0x13;
          }
        }
      }
      else if (iVar11 < 3) {
        *puVar10 = 0xdf0000a2;
        param_2[0x11] = 0xe0000000;
        param_2[0x12] = 0xe1ffffff;
        puVar10 = param_2 + 0x13;
      }
      else if (iVar11 < 4) {
        *puVar10 = 0xdf0002a2;
        param_2[0x11] = 0xe0000000;
        param_2[0x12] = 0xe1ffffff;
        puVar10 = param_2 + 0x13;
      }
    }
    local_30 = param_2;
    puVar10 = (undefined4 *)FUN_089f7110(*(undefined4 *)(param_1 + 0x90),puVar10,0);
    *puVar10 = 0xc6000101;
    if (*(undefined **)(param_1 + 0xe0) == &DAT_08aa4070) {
      uVar21 = *(uint *)(param_1 + 0xe0);
      puVar10[1] = 0x12000081;
      puVar9 = puVar10 + 2;
      if (uVar21 != 0) {
        *puVar9 = (uVar21 >> 0x18 & 0xf) << 0x10 | 0x10000000;
        puVar10[3] = uVar21 & 0xffffff | 0x1000000;
        puVar9 = puVar10 + 4;
      }
      *puVar9 = 0x4040004;
      puVar9 = puVar9 + 1;
    }
    else {
      uVar21 = (int)puVar10 + 0x1b;
      puVar12 = (undefined4 *)(uVar21 & 0xfffffff0);
      puVar13 = puVar12 + 0xc;
      puVar10[1] = ((uint)puVar13 >> 0x18 & 0xf) << 0x10 | 0x10000000;
      puVar10[2] = (uint)puVar13 & 0xffffff | 0x8000000;
      puVar18 = *(undefined4 **)(param_1 + 0xe0);
      uVar14 = 0;
      puVar10 = puVar12;
      do {
        uVar5 = puVar18[1];
        uVar6 = puVar18[2];
        uVar7 = puVar18[3];
        *puVar10 = *puVar18;
        puVar10[1] = uVar5;
        puVar10[2] = uVar6;
        puVar10[3] = uVar7;
        uVar14 = uVar14 + 1;
        puVar10 = puVar10 + 4;
        puVar18 = puVar18 + 4;
      } while (uVar14 < 3);
      *puVar13 = 0x12000083;
      puVar9 = puVar12 + 0xd;
      if (puVar12 != (undefined4 *)0x0) {
        *puVar9 = (uVar21 >> 0x18 & 0xf) << 0x10 | 0x10000000;
        puVar12[0xe] = uVar21 & 0xfffff0 | 0x1000000;
        puVar9 = puVar12 + 0xf;
      }
      *puVar9 = 0x4040004;
      puVar9 = puVar9 + 1;
    }
  }
  return puVar9;
}

