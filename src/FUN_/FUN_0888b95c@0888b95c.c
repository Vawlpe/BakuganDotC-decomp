#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0888b95c(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  undefined auVar3 [16];
  undefined auVar4 [64];
  bool bVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined **ppuVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined local_100 [4];
  undefined auStack_fc [4];
  undefined auStack_f8 [4];
  undefined4 uStack_f4;
  undefined local_f0 [4];
  undefined auStack_ec [4];
  undefined auStack_e8 [4];
  undefined4 uStack_e4;
  undefined local_e0 [4];
  undefined auStack_dc [4];
  undefined auStack_d8 [4];
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined local_c0 [4];
  undefined local_bc [4];
  undefined local_b8 [4];
  undefined4 uStack_b4;
  float local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined auStack_a0 [8];
  float local_98;
  undefined4 local_90;
  float local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 *local_80;
  undefined *local_7c;
  undefined *local_78;
  undefined4 *local_74;
  undefined *local_70;
  undefined *local_6c;
  undefined4 *local_68;
  undefined *local_64;
  undefined *local_60;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined **local_48;
  
  if (DAT_08af7f40 == 0) {
    DAT_08af7f40 = 1;
    DAT_08af7f5c = 0;
    DAT_08af7f58 = 0x47000000;
    DAT_08af7f54 = 0x47000000;
    DAT_08af7f50 = 0x47000000;
  }
  auVar4 = vmidt_q();
  local_d0 = auVar4._12_4_;
  uStack_cc = auVar4._28_4_;
  uStack_c8 = auVar4._44_4_;
  uStack_c4 = auVar4._60_4_;
  auVar3._4_4_ = auVar4._16_4_;
  auVar3._0_4_ = auVar4._0_4_;
  auVar3._8_4_ = auVar4._32_4_;
  auVar3._12_4_ = auVar4._48_4_;
  auVar6._4_4_ = auVar4._20_4_;
  auVar6._0_4_ = auVar4._4_4_;
  auVar6._8_4_ = auVar4._36_4_;
  auVar6._12_4_ = auVar4._52_4_;
  auVar7._4_4_ = auVar4._24_4_;
  auVar7._0_4_ = auVar4._8_4_;
  auVar7._8_4_ = auVar4._40_4_;
  auVar7._12_4_ = auVar4._56_4_;
  auVar3 = vscl_q(auVar3,DAT_08af7f50);
  local_100 = auVar3._0_4_;
  auStack_fc = auVar3._4_4_;
  auStack_f8 = auVar3._8_4_;
  uStack_f4 = auVar3._12_4_;
  auVar3 = vscl_q(auVar6,DAT_08af7f54);
  local_f0 = auVar3._0_4_;
  auStack_ec = auVar3._4_4_;
  auStack_e8 = auVar3._8_4_;
  uStack_e4 = auVar3._12_4_;
  auVar3 = vscl_q(auVar7,DAT_08af7f58);
  local_e0 = auVar3._0_4_;
  auStack_dc = auVar3._4_4_;
  auStack_d8 = auVar3._8_4_;
  uStack_d4 = auVar3._12_4_;
  if (DAT_08b00890 != 0) {
    uVar25 = 0x3f800000;
    uVar24 = 0x42200000;
    ppuVar22 = &PTR_s_stage_cam_japan_1_MAF_08ac0000;
    iVar20 = DAT_08b00890;
    local_54 = param_1;
    do {
      uVar8 = FUN_089f1308(local_54);
      uVar8 = FUN_089f1490(uVar8,ppuVar22[0x1724],0);
      puVar9 = (undefined4 *)FUN_089e3014(DAT_08ac5c8c,uVar8,0xffffffff);
      *puVar9 = 0xdf000032;
      puVar9[1] = 0xe0000000;
      puVar9[2] = 0xe1000000;
      puVar9[3] = 0xdcff0001;
      puVar9[4] = 0x17000000;
      puVar9[5] = 0x22000000;
      puVar9[6] = 0x1e000000;
      puVar9[7] = 0x21000001;
      puVar9[8] = 0xe9000000;
      puVar9[9] = 0xe7000000;
      puVar11 = puVar9 + 10;
      iVar21 = 0;
      iVar19 = 0;
      do {
        iVar10 = FUN_088b2fa4(iVar19);
        if (iVar10 != 0) {
          iVar21 = iVar21 + 1;
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 < 3);
      bVar5 = true;
      if (*(int *)(iVar20 + 0x28) == 0) {
LAB_0888bb74:
        cVar12 = *(char *)(iVar20 + 0x90);
      }
      else {
        iVar19 = *(int *)(*(int *)(iVar20 + 0x28) + 0x14);
        iVar19 = (**(code **)(iVar19 + 0x5c))
                           (*(int *)(iVar20 + 0x28) + (int)*(short *)(iVar19 + 0x58));
        if (iVar19 == 0) {
          cVar12 = *(char *)(iVar20 + 0x90);
        }
        else {
          iVar19 = *(int *)(*(int *)(iVar20 + 0x28) + 0x14);
          iVar19 = (**(code **)(iVar19 + 0x8c))
                             (*(int *)(iVar20 + 0x28) + (int)*(short *)(iVar19 + 0x88));
          if (iVar19 != 0) {
            bVar5 = false;
            goto LAB_0888bb74;
          }
          cVar12 = *(char *)(iVar20 + 0x90);
        }
      }
      if (cVar12 == '\0') {
LAB_0888bf70:
        iVar20 = *(int *)(iVar20 + 4);
      }
      else {
        if (bVar5) {
          iVar19 = FUN_0888a108(iVar20);
          if (iVar19 == 0) {
            iVar19 = FUN_0888b824(iVar20);
            if (iVar19 == 0) {
              FUN_089e3584(ppuVar22[0x1724],local_c0,iVar20 + 0x60);
              FUN_089beef4(auStack_a0);
              if (-3.0 < local_98) {
                local_b8 = (undefined  [4])-local_98;
                local_c0 = (undefined  [4])(float)(int)(float)local_c0;
                local_bc = (undefined  [4])((float)(int)(float)local_bc - 12.0);
                *puVar11 = 0x23000001;
                local_74 = puVar9 + 0xb;
                *local_74 = 0x3a000000;
                uVar1 = (uint)(local_100 + 1) & 3;
                uVar13 = -1 << (4 - uVar1) * 8 & 0x3b000000U |
                         *(uint *)(local_100 + 1 + -uVar1) >> uVar1 * 8;
                uVar1 = (uint)(auStack_fc + 1) & 3;
                uVar15 = -1 << (4 - uVar1) * 8 & 0x3b000000U |
                         *(uint *)(auStack_fc + 1 + -uVar1) >> uVar1 * 8;
                uVar1 = (uint)(auStack_f8 + 1) & 3;
                uVar17 = -1 << (4 - uVar1) * 8 & 0x3b000000U |
                         *(uint *)(auStack_f8 + 1 + -uVar1) >> uVar1 * 8;
                puVar9[0xc] = uVar13;
                puVar9[0xd] = uVar15;
                puVar9[0xe] = uVar17;
                uVar1 = (uint)(local_f0 + 1) & 3;
                uVar13 = uVar13 & -1 << (4 - uVar1) * 8 |
                         *(uint *)(local_f0 + 1 + -uVar1) >> uVar1 * 8;
                uVar1 = (uint)(auStack_ec + 1) & 3;
                uVar15 = uVar15 & -1 << (4 - uVar1) * 8 |
                         *(uint *)(auStack_ec + 1 + -uVar1) >> uVar1 * 8;
                uVar1 = (uint)(auStack_e8 + 1) & 3;
                uVar17 = uVar17 & -1 << (4 - uVar1) * 8 |
                         *(uint *)(auStack_e8 + 1 + -uVar1) >> uVar1 * 8;
                puVar9[0xf] = uVar13;
                puVar9[0x10] = uVar15;
                puVar9[0x11] = uVar17;
                uVar1 = (uint)(local_e0 + 1) & 3;
                uVar14 = uVar13 & -1 << (4 - uVar1) * 8 |
                         *(uint *)(local_e0 + 1 + -uVar1) >> uVar1 * 8;
                uVar1 = (uint)(auStack_dc + 1) & 3;
                uVar16 = uVar15 & -1 << (4 - uVar1) * 8 |
                         *(uint *)(auStack_dc + 1 + -uVar1) >> uVar1 * 8;
                uVar1 = (uint)(auStack_d8 + 1) & 3;
                uVar18 = uVar17 & -1 << (4 - uVar1) * 8 |
                         *(uint *)(auStack_d8 + 1 + -uVar1) >> uVar1 * 8;
                puVar9[0x12] = uVar14;
                puVar9[0x13] = uVar16;
                puVar9[0x14] = uVar18;
                uVar1 = (uint)(local_c0 + 1) & 3;
                uVar13 = (uint)(local_bc + 1) & 3;
                uVar17 = *(uint *)(local_bc + 1 + -uVar13);
                uVar15 = (uint)(local_b8 + 1) & 3;
                uVar2 = *(uint *)(local_b8 + 1 + -uVar15);
                puVar9[0x15] = uVar14 & -1 << (4 - uVar1) * 8 |
                               *(uint *)(local_c0 + 1 + -uVar1) >> uVar1 * 8;
                puVar9[0x16] = uVar16 & -1 << (4 - uVar13) * 8 | uVar17 >> uVar13 * 8;
                puVar9[0x17] = uVar18 & -1 << (4 - uVar15) * 8 | uVar2 >> uVar15 * 8;
                *(undefined (*) [4])(iVar20 + 0x40) = local_c0;
                *(undefined (*) [4])(iVar20 + 0x44) = local_bc;
                *(undefined (*) [4])(iVar20 + 0x48) = local_b8;
                *(undefined (*) [4])(iVar20 + 0x4c) = local_bc;
                local_70 = local_100;
                local_6c = local_c0;
                puVar11 = (undefined4 *)FUN_0888ab98(0xbf800000,iVar20,puVar9 + 0x18);
              }
            }
            iVar19 = FUN_0888b8f8(iVar20);
            if (iVar19 == 0) {
              iVar20 = *(int *)(iVar20 + 4);
              goto LAB_0888bf74;
            }
            local_bc = (undefined  [4])
                       (float)((*(int *)(*(int *)(iVar20 + 0x2c) + 0x21c) - iVar21) * 0x10 + 0xd0);
            local_90 = 0x42280000;
            local_88 = 0xc47a0000;
            local_84 = 0;
            local_c0 = (undefined  [4])0x42280000;
            local_b8 = (undefined  [4])0xc47a0000;
            uStack_b4 = 0;
            *puVar11 = 0x23000000;
            local_68 = puVar11 + 1;
            *local_68 = 0x3a000000;
            uVar1 = (uint)(local_100 + 1) & 3;
            uVar13 = -1 << (4 - uVar1) * 8 & 0x3b000000U |
                     *(uint *)(local_100 + 1 + -uVar1) >> uVar1 * 8;
            uVar1 = (uint)(auStack_fc + 1) & 3;
            uVar15 = -1 << (4 - uVar1) * 8 & 0x3b000000U |
                     *(uint *)(auStack_fc + 1 + -uVar1) >> uVar1 * 8;
            uVar1 = (uint)(auStack_f8 + 1) & 3;
            uVar17 = -1 << (4 - uVar1) * 8 & 0x3b000000U |
                     *(uint *)(auStack_f8 + 1 + -uVar1) >> uVar1 * 8;
            puVar11[2] = uVar13;
            puVar11[3] = uVar15;
            puVar11[4] = uVar17;
            uVar1 = (uint)(local_f0 + 1) & 3;
            uVar13 = uVar13 & -1 << (4 - uVar1) * 8 | *(uint *)(local_f0 + 1 + -uVar1) >> uVar1 * 8;
            uVar1 = (uint)(auStack_ec + 1) & 3;
            uVar15 = uVar15 & -1 << (4 - uVar1) * 8 |
                     *(uint *)(auStack_ec + 1 + -uVar1) >> uVar1 * 8;
            uVar1 = (uint)(auStack_e8 + 1) & 3;
            uVar17 = uVar17 & -1 << (4 - uVar1) * 8 |
                     *(uint *)(auStack_e8 + 1 + -uVar1) >> uVar1 * 8;
            puVar11[5] = uVar13;
            puVar11[6] = uVar15;
            puVar11[7] = uVar17;
            uVar1 = (uint)(local_e0 + 1) & 3;
            uVar14 = uVar13 & -1 << (4 - uVar1) * 8 | *(uint *)(local_e0 + 1 + -uVar1) >> uVar1 * 8;
            uVar1 = (uint)(auStack_dc + 1) & 3;
            uVar16 = uVar15 & -1 << (4 - uVar1) * 8 |
                     *(uint *)(auStack_dc + 1 + -uVar1) >> uVar1 * 8;
            uVar1 = (uint)(auStack_d8 + 1) & 3;
            uVar18 = uVar17 & -1 << (4 - uVar1) * 8 |
                     *(uint *)(auStack_d8 + 1 + -uVar1) >> uVar1 * 8;
            puVar11[8] = uVar14;
            puVar11[9] = uVar16;
            puVar11[10] = uVar18;
            uVar1 = (uint)(local_c0 + 1) & 3;
            uVar13 = (uint)(local_bc + 1) & 3;
            uVar17 = *(uint *)(local_bc + 1 + -uVar13);
            uVar15 = (uint)(local_b8 + 1) & 3;
            uVar2 = *(uint *)(local_b8 + 1 + -uVar15);
            puVar11[0xb] = uVar14 & -1 << (4 - uVar1) * 8 |
                           *(uint *)(local_c0 + 1 + -uVar1) >> uVar1 * 8;
            puVar11[0xc] = uVar16 & -1 << (4 - uVar13) * 8 | uVar17 >> uVar13 * 8;
            puVar11[0xd] = uVar18 & -1 << (4 - uVar15) * 8 | uVar2 >> uVar15 * 8;
            uVar8 = *(undefined4 *)(iVar20 + 0x84);
            local_8c = (float)local_bc;
            local_64 = local_100;
            local_60 = local_c0;
            iVar19 = FUN_0888b304(iVar20);
            if (iVar19 == 0) {
              *(undefined4 *)(iVar20 + 0x84) = uVar25;
            }
            *(undefined (*) [4])(iVar20 + 0x40) = local_c0;
            *(undefined (*) [4])(iVar20 + 0x44) = local_bc;
            *(undefined (*) [4])(iVar20 + 0x48) = local_b8;
            *(undefined (*) [4])(iVar20 + 0x4c) = local_bc;
            puVar11 = (undefined4 *)FUN_0888ab98(uVar24,iVar20,puVar11 + 0xe);
            *(undefined4 *)(iVar20 + 0x84) = uVar8;
          }
          else {
            *(undefined *)(iVar20 + 0x91) = 1;
            local_50 = uVar24;
            local_4c = uVar25;
            local_48 = ppuVar22;
            fVar23 = (float)FUN_0888a158(iVar20);
            local_c0 = (undefined  [4])(fVar23 * 0.5 + 62.0);
            local_ac = 0x43680000;
            local_a8 = 0xc47a0000;
            local_a4 = 0;
            local_bc = (undefined  [4])0x43680000;
            local_b8 = (undefined  [4])0xc47a0000;
            uStack_b4 = 0;
            *puVar11 = 0x23000000;
            local_80 = puVar9 + 0xb;
            *local_80 = 0x3a000000;
            uVar1 = (uint)(local_100 + 1) & 3;
            uVar13 = -1 << (4 - uVar1) * 8 & 0x3b000000U |
                     *(uint *)(local_100 + 1 + -uVar1) >> uVar1 * 8;
            uVar1 = (uint)(auStack_fc + 1) & 3;
            uVar15 = -1 << (4 - uVar1) * 8 & 0x3b000000U |
                     *(uint *)(auStack_fc + 1 + -uVar1) >> uVar1 * 8;
            uVar1 = (uint)(auStack_f8 + 1) & 3;
            uVar17 = -1 << (4 - uVar1) * 8 & 0x3b000000U |
                     *(uint *)(auStack_f8 + 1 + -uVar1) >> uVar1 * 8;
            puVar9[0xc] = uVar13;
            puVar9[0xd] = uVar15;
            puVar9[0xe] = uVar17;
            uVar1 = (uint)(local_f0 + 1) & 3;
            uVar13 = uVar13 & -1 << (4 - uVar1) * 8 | *(uint *)(local_f0 + 1 + -uVar1) >> uVar1 * 8;
            uVar1 = (uint)(auStack_ec + 1) & 3;
            uVar15 = uVar15 & -1 << (4 - uVar1) * 8 |
                     *(uint *)(auStack_ec + 1 + -uVar1) >> uVar1 * 8;
            uVar1 = (uint)(auStack_e8 + 1) & 3;
            uVar17 = uVar17 & -1 << (4 - uVar1) * 8 |
                     *(uint *)(auStack_e8 + 1 + -uVar1) >> uVar1 * 8;
            puVar9[0xf] = uVar13;
            puVar9[0x10] = uVar15;
            puVar9[0x11] = uVar17;
            uVar1 = (uint)(local_e0 + 1) & 3;
            uVar14 = uVar13 & -1 << (4 - uVar1) * 8 | *(uint *)(local_e0 + 1 + -uVar1) >> uVar1 * 8;
            uVar1 = (uint)(auStack_dc + 1) & 3;
            uVar16 = uVar15 & -1 << (4 - uVar1) * 8 |
                     *(uint *)(auStack_dc + 1 + -uVar1) >> uVar1 * 8;
            uVar1 = (uint)(auStack_d8 + 1) & 3;
            uVar18 = uVar17 & -1 << (4 - uVar1) * 8 |
                     *(uint *)(auStack_d8 + 1 + -uVar1) >> uVar1 * 8;
            puVar9[0x12] = uVar14;
            puVar9[0x13] = uVar16;
            puVar9[0x14] = uVar18;
            uVar1 = (uint)(local_c0 + 1) & 3;
            uVar13 = (uint)(local_bc + 1) & 3;
            uVar17 = *(uint *)(local_bc + 1 + -uVar13);
            uVar15 = (uint)(local_b8 + 1) & 3;
            uVar2 = *(uint *)(local_b8 + 1 + -uVar15);
            puVar9[0x15] = uVar14 & -1 << (4 - uVar1) * 8 |
                           *(uint *)(local_c0 + 1 + -uVar1) >> uVar1 * 8;
            puVar9[0x16] = uVar16 & -1 << (4 - uVar13) * 8 | uVar17 >> uVar13 * 8;
            puVar9[0x17] = uVar18 & -1 << (4 - uVar15) * 8 | uVar2 >> uVar15 * 8;
            *(undefined (*) [4])(iVar20 + 0x40) = local_c0;
            *(undefined4 *)(iVar20 + 0x44) = 0x43680000;
            *(undefined4 *)(iVar20 + 0x48) = 0xc47a0000;
            *(undefined4 *)(iVar20 + 0x4c) = 0x43680000;
            local_b0 = (float)local_c0;
            local_7c = local_100;
            local_78 = local_c0;
            puVar11 = (undefined4 *)FUN_0888ab98(0xbf800000,iVar20,puVar9 + 0x18);
            ppuVar22 = local_48;
            uVar24 = local_50;
            uVar25 = local_4c;
          }
          goto LAB_0888bf70;
        }
        iVar20 = *(int *)(iVar20 + 4);
      }
LAB_0888bf74:
      FUN_089f13c8(local_54,puVar11);
    } while (iVar20 != 0);
  }
  return;
}

