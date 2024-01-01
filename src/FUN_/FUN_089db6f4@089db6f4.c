#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089db6f4(uint **param_1,int param_2,int param_3,int param_4,char param_5)

{
  uint uVar1;
  undefined auVar2 [12];
  undefined auVar3 [12];
  undefined auVar4 [12];
  undefined auVar5 [12];
  undefined auVar6 [12];
  undefined auVar7 [64];
  undefined auVar8 [64];
  undefined auVar9 [64];
  undefined auVar11 [12];
  undefined auVar12 [12];
  undefined auVar13 [12];
  byte bVar14;
  code *pcVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  short *psVar24;
  undefined4 uVar25;
  int iVar26;
  int iVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 in_V73;
  undefined4 in_V77;
  undefined4 in_V7B;
  undefined4 in_V7F;
  uint *local_80 [4];
  undefined local_70 [4];
  undefined auStack_6c [4];
  undefined auStack_68 [4];
  undefined4 uStack_64;
  undefined local_60 [4];
  undefined auStack_5c [4];
  undefined auStack_58 [4];
  undefined4 uStack_54;
  undefined local_50 [4];
  undefined auStack_4c [4];
  undefined auStack_48 [4];
  undefined4 uStack_44;
  undefined local_40 [4];
  undefined auStack_3c [4];
  undefined auStack_38 [4];
  undefined4 uStack_34;
  float local_30;
  uint *local_2c;
  undefined *local_28;
  undefined auVar10 [64];
  
  psVar24 = *(short **)(param_2 + 4);
  local_80[0] = *param_1;
  uVar25 = 0;
  if ((*(byte *)((int)psVar24 + 3) & 3) == 0) {
    *local_80[0] = 0x1d000000;
    local_80[0][1] = 0;
  }
  else if ((*(byte *)((int)psVar24 + 3) & 3) == 1) {
    *local_80[0] = 0x1d000001;
    local_80[0][1] = 0x9b000000;
  }
  else {
    *local_80[0] = 0x1d000001;
    local_80[0][1] = 0x9b000001;
  }
  local_80[0][2] = (uint)*(byte *)((int)psVar24 + 7) << 8 | 0xdcff0000 | DAT_08ac5c60;
  local_80[0][3] = ((int)*(char *)(psVar24 + 2) & 0xcU) >> 2 | 0x1f000000;
  uVar23 = 0;
  if (DAT_08ac5bec == '\0') {
    if (*(char *)(psVar24 + 3) == '\x01') {
      local_30 = DAT_08b0215c + 90.0;
    }
    else {
      local_30 = DAT_08b0215c + (float)(int)*(char *)(psVar24 + 3) * 3.0;
    }
  }
  else if (*(char *)(psVar24 + 3) == '\x01') {
    uVar23 = 1;
    local_30 = DAT_08b0215c + 90.0;
  }
  else {
    uVar23 = 0;
    local_30 = DAT_08b0215c + (float)(int)*(char *)(psVar24 + 3) * 3.0;
  }
  local_80[0][4] = (uint)local_30 >> 8 | 0x47000000;
  DAT_08ac5c48 = local_30;
  if (DAT_08ac5c60 == 0) {
    local_80[0][5] = 0x24000000;
    local_80[0][6] = 0xdd000000;
  }
  else {
    local_80[0][5] = 0x24000001;
    local_80[0][6] = 0xdd020000;
  }
  if ((((int)*(char *)(psVar24 + 2) & 0xcU) >> 2 & 2) == 0) {
    local_80[0] = local_80[0] + 7;
  }
  else {
    local_80[0][7] = 0x17000000;
    local_80[0][8] = 0x90ffffff;
    local_80[0] = local_80[0] + 9;
  }
  if ((*(byte *)(psVar24 + 2) & 0x10) != 0) {
    uVar23 = 1;
  }
  if (param_5 == '\0') {
    *local_80[0] = 0x22000001;
    uVar17 = 0xdbff0106;
    if ((*psVar24 != 0) && ((uint)(int)*psVar24 < DAT_08ac5be8)) {
      uVar17 = (int)*psVar24 << 8 | 0xdbff0006;
    }
    local_80[0][1] = uVar17;
    puVar16 = local_80[0] + 2;
    uVar17 = ((int)*(char *)(psVar24 + 2) & 0xc0U) >> 6;
    if (uVar17 < 2) {
      if (uVar17 == 0) {
        *puVar16 = 0xdf0000aa;
        local_80[0][3] = 0xe0ffffff;
        local_80[0][4] = 0xe1000000;
      }
      else {
        *puVar16 = 0xdf000032;
        local_80[0][3] = 0xe0000000;
        local_80[0][4] = 0xe1000000;
      }
LAB_089dba68:
      puVar16 = local_80[0] + 5;
    }
    else {
      if (uVar17 < 3) {
        *puVar16 = 0xdf0000a2;
        local_80[0][3] = 0xe0000000;
        local_80[0][4] = 0xe1ffffff;
        goto LAB_089dba68;
      }
      if (uVar17 < 4) {
        *puVar16 = 0xdf0002a2;
        local_80[0][3] = 0xe0000000;
        local_80[0][4] = 0xe1ffffff;
        goto LAB_089dba68;
      }
    }
    local_80[0] = puVar16;
    if (1 < ((int)*(char *)(psVar24 + 2) & 0xc0U) >> 6) {
      *local_80[0] = 0xcf000000;
      uVar23 = 1;
      local_80[0] = local_80[0] + 1;
    }
    *local_80[0] = uVar23 | 0xe7000000;
    local_80[0] = local_80[0] + 1;
    if (*(char *)((int)psVar24 + 5) == 0) {
      pcVar15 = *(code **)(psVar24 + 4);
    }
    else {
      iVar26 = *(char *)((int)psVar24 + 5) + -1;
      iVar27 = *(int *)(*(int *)(param_3 + 0x10) +
                        (*(uint *)(*(int *)(param_2 + 8) + 0x24) & 0x3ff) * 0x10 + 4);
      FUN_089f7168(*(undefined4 *)(iVar27 + 8),iVar26);
      local_80[0] = (uint *)FUN_089f7110(*(undefined4 *)(iVar27 + 8),local_80[0],iVar26);
      pcVar15 = *(code **)(psVar24 + 4);
    }
    if (pcVar15 != (code *)0x0) {
      if (*(int *)(psVar24 + 6) == 0) {
        (*pcVar15)(local_80,DAT_08ac5c2c);
      }
      else {
        (*pcVar15)(local_80,*(int *)(psVar24 + 6));
      }
      uVar25 = 1;
    }
    goto LAB_089dbeb0;
  }
  *local_80[0] = (uint)*(byte *)((int)psVar24 + 7) << 8 | 0xdcff0002;
  local_2c = local_80[0] + 1;
  local_28 = local_70;
  if ((*(byte *)((int)psVar24 + 3) & 0x1c) == 0) {
    auVar7._60_4_ = *(undefined4 *)(param_3 + 0xbc);
    auVar7._56_4_ = *(undefined4 *)(param_3 + 0xac);
    auVar7._52_4_ = *(undefined4 *)(param_3 + 0x9c);
    auVar7._48_4_ = *(undefined4 *)(param_3 + 0x8c);
    auVar7._44_4_ = *(undefined4 *)(param_3 + 0xb8);
    auVar7._40_4_ = *(undefined4 *)(param_3 + 0xa8);
    auVar7._36_4_ = *(undefined4 *)(param_3 + 0x98);
    auVar7._32_4_ = *(undefined4 *)(param_3 + 0x88);
    auVar7._28_4_ = *(undefined4 *)(param_3 + 0xb4);
    auVar7._24_4_ = *(undefined4 *)(param_3 + 0xa4);
    auVar7._20_4_ = *(undefined4 *)(param_3 + 0x94);
    auVar7._16_4_ = *(undefined4 *)(param_3 + 0x84);
    auVar7._12_4_ = *(undefined4 *)(param_3 + 0xb0);
    auVar7._8_4_ = *(undefined4 *)(param_3 + 0xa0);
    auVar7._4_4_ = *(undefined4 *)(param_3 + 0x90);
    auVar7._0_4_ = *(undefined4 *)(param_3 + 0x80);
    auVar8._60_4_ = *(undefined4 *)(param_4 + 0xbc);
    auVar8._56_4_ = *(undefined4 *)(param_4 + 0xac);
    auVar8._52_4_ = *(undefined4 *)(param_4 + 0x9c);
    auVar8._48_4_ = *(undefined4 *)(param_4 + 0x8c);
    auVar8._44_4_ = *(undefined4 *)(param_4 + 0xb8);
    auVar8._40_4_ = *(undefined4 *)(param_4 + 0xa8);
    auVar8._36_4_ = *(undefined4 *)(param_4 + 0x98);
    auVar8._32_4_ = *(undefined4 *)(param_4 + 0x88);
    auVar8._28_4_ = *(undefined4 *)(param_4 + 0xb4);
    auVar8._24_4_ = *(undefined4 *)(param_4 + 0xa4);
    auVar8._20_4_ = *(undefined4 *)(param_4 + 0x94);
    auVar8._16_4_ = *(undefined4 *)(param_4 + 0x84);
    auVar8._12_4_ = *(undefined4 *)(param_4 + 0xb0);
    auVar8._8_4_ = *(undefined4 *)(param_4 + 0xa0);
    auVar8._4_4_ = *(undefined4 *)(param_4 + 0x90);
    auVar8._0_4_ = *(undefined4 *)(param_4 + 0x80);
    auVar7 = vmmul_q(auVar7,auVar8);
    uVar25 = auVar7._4_4_;
    uVar28 = auVar7._20_4_;
    uVar29 = auVar7._36_4_;
    auVar4._4_4_ = auVar7._16_4_;
    auVar4._0_4_ = auVar7._0_4_;
    auVar4._8_4_ = auVar7._32_4_;
    auVar13._4_4_ = uVar28;
    auVar13._0_4_ = uVar25;
    auVar13._8_4_ = uVar29;
    auVar12._4_4_ = uVar28;
    auVar12._0_4_ = uVar25;
    auVar12._8_4_ = uVar29;
    auVar11._4_4_ = uVar28;
    auVar11._0_4_ = uVar25;
    auVar11._8_4_ = uVar29;
    auVar6._4_4_ = uVar28;
    auVar6._0_4_ = uVar25;
    auVar6._8_4_ = uVar29;
    auVar3._4_4_ = uVar28;
    auVar3._0_4_ = uVar25;
    auVar3._8_4_ = uVar29;
    auVar5 = vzero_t();
    auVar3 = vcrsp_t(auVar4,auVar3);
    auVar4 = vcrsp_t(auVar6,auVar3);
    uVar25 = vdot_t(auVar4,auVar4);
    uVar28 = vdot_t(auVar11,auVar12);
    uVar29 = vdot_t(auVar3,auVar3);
    auVar2._8_4_ = uVar29;
    auVar2._4_4_ = uVar28;
    auVar2._0_4_ = uVar25;
    auVar6 = vrsq_t(auVar2);
    auVar4 = vscl_t(auVar4,auVar6._0_4_);
    auVar2 = vscl_t(auVar13,auVar6._4_4_);
    auVar3 = vscl_t(auVar3,auVar6._8_4_);
    auVar9._60_4_ = *(undefined4 *)(DAT_08ac5c90 + 0x1ec);
    auVar9._56_4_ = *(undefined4 *)(DAT_08ac5c90 + 0x1dc);
    auVar9._52_4_ = *(undefined4 *)(DAT_08ac5c90 + 0x1cc);
    auVar9._48_4_ = *(undefined4 *)(DAT_08ac5c90 + 0x1bc);
    auVar9._44_4_ = *(undefined4 *)(DAT_08ac5c90 + 0x1e8);
    auVar9._40_4_ = *(undefined4 *)(DAT_08ac5c90 + 0x1d8);
    auVar9._36_4_ = *(undefined4 *)(DAT_08ac5c90 + 0x1c8);
    auVar9._32_4_ = *(undefined4 *)(DAT_08ac5c90 + 0x1b8);
    auVar9._28_4_ = *(undefined4 *)(DAT_08ac5c90 + 0x1e4);
    auVar9._24_4_ = *(undefined4 *)(DAT_08ac5c90 + 0x1d4);
    auVar9._20_4_ = *(undefined4 *)(DAT_08ac5c90 + 0x1c4);
    auVar9._16_4_ = *(undefined4 *)(DAT_08ac5c90 + 0x1b4);
    auVar9._12_4_ = *(undefined4 *)(DAT_08ac5c90 + 0x1e0);
    auVar9._8_4_ = *(undefined4 *)(DAT_08ac5c90 + 0x1d0);
    auVar9._4_4_ = *(undefined4 *)(DAT_08ac5c90 + 0x1c0);
    auVar9._0_4_ = *(undefined4 *)(DAT_08ac5c90 + 0x1b0);
    auVar10._60_4_ = in_V7F;
    auVar10._56_4_ = auVar5._8_4_;
    auVar10._52_4_ = auVar7._52_4_;
    auVar10._48_4_ = auVar5._0_4_;
    auVar10._44_4_ = in_V7B;
    auVar10._40_4_ = auVar3._8_4_;
    auVar10._36_4_ = auVar2._8_4_;
    auVar10._32_4_ = auVar4._8_4_;
    auVar10._28_4_ = in_V77;
    auVar10._24_4_ = auVar3._4_4_;
    auVar10._20_4_ = auVar2._4_4_;
    auVar10._16_4_ = auVar4._4_4_;
    auVar10._12_4_ = in_V73;
    auVar10._8_4_ = auVar3._0_4_;
    auVar10._4_4_ = auVar2._0_4_;
    auVar10._0_4_ = auVar4._0_4_;
    auVar7 = vmmul_q(auVar9,auVar10);
    local_70 = auVar7._0_4_;
    local_60 = auVar7._4_4_;
    local_50 = auVar7._8_4_;
    local_40 = auVar7._12_4_;
    auStack_6c = auVar7._16_4_;
    auStack_5c = auVar7._20_4_;
    auStack_4c = auVar7._24_4_;
    auStack_3c = auVar7._28_4_;
    auStack_68 = auVar7._32_4_;
    auStack_58 = auVar7._36_4_;
    auStack_48 = auVar7._40_4_;
    auStack_38 = auVar7._44_4_;
    uStack_64 = auVar7._48_4_;
    uStack_54 = auVar7._52_4_;
    uStack_44 = auVar7._56_4_;
    uStack_34 = auVar7._60_4_;
    *local_2c = 0x40000000;
    uVar23 = (uint)(local_70 + 1) & 3;
    uVar17 = -1 << (4 - uVar23) * 8 & 0x41000000U | *(uint *)(local_70 + 1 + -uVar23) >> uVar23 * 8;
    uVar23 = (uint)(auStack_6c + 1) & 3;
    uVar19 = -1 << (4 - uVar23) * 8 & 0x41000000U |
             *(uint *)(auStack_6c + 1 + -uVar23) >> uVar23 * 8;
    uVar23 = (uint)(auStack_68 + 1) & 3;
    uVar21 = -1 << (4 - uVar23) * 8 & 0x41000000U |
             *(uint *)(auStack_68 + 1 + -uVar23) >> uVar23 * 8;
    local_80[0][2] = uVar17;
    local_80[0][3] = uVar19;
    local_80[0][4] = uVar21;
    uVar23 = (uint)(local_60 + 1) & 3;
    uVar17 = uVar17 & -1 << (4 - uVar23) * 8 | *(uint *)(local_60 + 1 + -uVar23) >> uVar23 * 8;
    uVar23 = (uint)(auStack_5c + 1) & 3;
    uVar19 = uVar19 & -1 << (4 - uVar23) * 8 | *(uint *)(auStack_5c + 1 + -uVar23) >> uVar23 * 8;
    uVar23 = (uint)(auStack_58 + 1) & 3;
    uVar21 = uVar21 & -1 << (4 - uVar23) * 8 | *(uint *)(auStack_58 + 1 + -uVar23) >> uVar23 * 8;
    local_80[0][5] = uVar17;
    local_80[0][6] = uVar19;
    local_80[0][7] = uVar21;
    uVar23 = (uint)(local_50 + 1) & 3;
    uVar18 = uVar17 & -1 << (4 - uVar23) * 8 | *(uint *)(local_50 + 1 + -uVar23) >> uVar23 * 8;
    uVar23 = (uint)(auStack_4c + 1) & 3;
    uVar20 = uVar19 & -1 << (4 - uVar23) * 8 | *(uint *)(auStack_4c + 1 + -uVar23) >> uVar23 * 8;
    uVar23 = (uint)(auStack_48 + 1) & 3;
    uVar22 = uVar21 & -1 << (4 - uVar23) * 8 | *(uint *)(auStack_48 + 1 + -uVar23) >> uVar23 * 8;
    local_80[0][8] = uVar18;
    local_80[0][9] = uVar20;
    local_80[0][10] = uVar22;
    uVar23 = (uint)(local_40 + 1) & 3;
    uVar17 = (uint)(auStack_3c + 1) & 3;
    uVar21 = *(uint *)(auStack_3c + 1 + -uVar17);
    uVar19 = (uint)(auStack_38 + 1) & 3;
    uVar1 = *(uint *)(auStack_38 + 1 + -uVar19);
    local_80[0][0xb] =
         uVar18 & -1 << (4 - uVar23) * 8 | *(uint *)(local_40 + 1 + -uVar23) >> uVar23 * 8;
    local_80[0][0xc] = uVar20 & -1 << (4 - uVar17) * 8 | uVar21 >> uVar17 * 8;
    local_80[0][0xd] = uVar22 & -1 << (4 - uVar19) * 8 | uVar1 >> uVar19 * 8;
    local_80[0] = local_80[0] + 0xe;
    local_80[0] = (uint *)FUN_089dd7dc(local_80[0],
                                       (((int)*(char *)((int)psVar24 + 3) & 0xe0U) >> 5) + 6);
    bVar14 = *(byte *)(psVar24 + 2) & 3;
    if (bVar14 < 2) {
      if (bVar14 == 0) {
        *local_80[0] = 0xdf0000aa;
        local_80[0][1] = 0xe0ffffff;
        local_80[0][2] = 0xe1000000;
      }
      else {
        *local_80[0] = 0xdf000032;
        local_80[0][1] = 0xe0000000;
        local_80[0][2] = 0xe1000000;
      }
LAB_089dbe20:
      local_80[0] = local_80[0] + 3;
    }
    else {
      if (bVar14 < 3) {
        *local_80[0] = 0xdf0000a2;
        local_80[0][1] = 0xe0000000;
        local_80[0][2] = 0xe1ffffff;
        goto LAB_089dbe20;
      }
      if (bVar14 < 4) {
        *local_80[0] = 0xdf0002a2;
        local_80[0][1] = 0xe0000000;
        local_80[0][2] = 0xe1ffffff;
        goto LAB_089dbe20;
      }
    }
    if (((int)*(char *)((int)psVar24 + 3) & 0xe0U) == 0xc0) {
      *local_80[0] = 0x9b000001;
      local_80[0][1] = 0xde000007;
      local_80[0][2] = 0xdcff0001;
      goto LAB_089dbe74;
    }
  }
  else {
    local_80[0] = local_2c;
    local_80[0] = (uint *)FUN_089dd768(local_2c,(((int)*(char *)((int)psVar24 + 3) & 0x1cU) >> 2) -
                                                1);
    *local_80[0] = 0xdf000032;
    local_80[0][1] = 0xe0000000;
    local_80[0][2] = 0xe1000000;
LAB_089dbe74:
    local_80[0] = local_80[0] + 3;
  }
  *local_80[0] = DAT_08ac5be8 | 0x58000000;
  local_80[0][1] = 0x56ffffff;
  uVar25 = 2;
  local_80[0] = local_80[0] + 2;
LAB_089dbeb0:
  *param_1 = local_80[0];
  return uVar25;
}

