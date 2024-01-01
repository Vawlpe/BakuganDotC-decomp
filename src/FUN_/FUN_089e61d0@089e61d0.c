#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e61d0(int param_1,char param_2)

{
  byte bVar1;
  undefined auVar2 [12];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [64];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined4 uVar8;
  undefined auVar9 [64];
  undefined auVar10 [64];
  undefined auVar11 [64];
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  undefined4 *puVar17;
  undefined **ppuVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  int *piVar21;
  int iVar22;
  int iVar23;
  undefined4 in_V7C;
  ushort local_44;
  int local_40;
  undefined **local_38;
  
  iVar23 = *(int *)(param_1 + 0xc4);
  local_44 = 0;
  piVar21 = (int *)(iVar23 + 8);
  local_40 = 0;
  puVar20 = (undefined4 *)0x0;
  iVar22 = 0;
  iVar12 = FUN_089e3968(piVar21,*(undefined2 *)(iVar23 + 6));
  *(int *)(param_1 + 0xd0) = iVar12;
  FUN_089d8634();
  uVar13 = FUN_089d81a4();
  FUN_089d816c(1);
  uVar14 = FUN_089d7d74(iVar12 << 2,0,0);
  FUN_089d816c(uVar13);
  FUN_089d866c();
  *(undefined4 *)(param_1 + 200) = uVar14;
  if (param_2 != '\0') {
    iVar12 = *(int *)(param_1 + 0xd0);
    FUN_089d8634();
    uVar13 = FUN_089d81a4();
    FUN_089d816c(1);
    uVar14 = FUN_089d7d74(iVar12 * 0xc0,0,0);
    FUN_089d816c(uVar13);
    FUN_089d866c();
    *(undefined4 *)(param_1 + 0xcc) = uVar14;
  }
  *(undefined4 *)(param_1 + 0xf4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xf0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xec) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe8) = 0xffffffff;
  if (*(short *)(iVar23 + 6) != 0) {
    local_38 = &PTR_s_Concrete_Ground_08ac5c9c;
    iVar12 = 0;
    do {
      bVar1 = *(byte *)((int)piVar21 + 7);
      puVar19 = (undefined4 *)((int)piVar21 + bVar1 + 8);
      if (*piVar21 == 0x52545441) {
        if (0xf < iVar22) {
          uVar16 = piVar21[1];
          goto LAB_089e65f8;
        }
        uVar16 = 0;
        ppuVar18 = local_38;
        do {
          iVar15 = strcasecmp(*ppuVar18,puVar19);
          if (iVar15 == 0) {
            if ((int)uVar16 < 0xf) {
              *(char *)(param_1 + iVar22 + 0xe8) = (char)uVar16;
            }
            else if ((int)uVar16 < 0x11) {
              if (0xe < (int)uVar16) {
                if ((int)uVar16 < 0x10) {
                  *(undefined *)(param_1 + iVar22 + 0xe8) = 4;
                }
                else {
                  *(undefined *)(param_1 + iVar22 + 0xe8) = 6;
                }
              }
            }
            else if ((int)uVar16 < 0x12) {
              *(undefined *)(param_1 + iVar22 + 0xe8) = 4;
            }
            else if ((int)uVar16 < 0x13) {
              *(undefined *)(param_1 + iVar22 + 0xe8) = 6;
            }
            break;
          }
          uVar16 = uVar16 + 1;
          ppuVar18 = ppuVar18 + 1;
        } while (uVar16 < 0x13);
        iVar22 = iVar22 + 1;
LAB_089e65f4:
        uVar16 = piVar21[1];
      }
      else {
        if (*piVar21 == 0x4853454d) {
          puVar20 = puVar19;
          if (param_2 != '\0') {
            memcpy_jak(*(int *)(param_1 + 0xcc) + iVar12,puVar19,0xc0);
            puVar20 = (undefined4 *)(*(int *)(param_1 + 0xcc) + iVar12);
          }
          iVar15 = local_40 * 4;
          local_40 = local_40 + 1;
          iVar12 = iVar12 + 0xc0;
          *(undefined4 **)(*(int *)(param_1 + 200) + iVar15) = puVar20;
          goto LAB_089e65f4;
        }
        if (*piVar21 == 0x54524556) {
          puVar20[1] = puVar19;
          goto LAB_089e65f4;
        }
        if (*piVar21 == 0x4d524f4e) {
          puVar20[3] = puVar19;
          goto LAB_089e65f4;
        }
        if (*piVar21 == 0x45434146) {
          puVar20[5] = puVar19;
          goto LAB_089e65f4;
        }
        if (*piVar21 == 0x4d4f4547) {
          puVar20[9] = puVar19;
          if ((*(ushort *)(iVar23 + 4) & 0x8000) == 0) {
            auVar5 = vmidt_q();
            uVar13 = auVar5._16_4_;
            uVar14 = auVar5._32_4_;
            iVar15 = puVar20[9];
            auVar2 = vscl_t(*(undefined (*) [12])(puVar20[9] + 0x10),in_V7C);
            auVar11._4_4_ = uVar13;
            auVar11._0_4_ = *(undefined4 *)(iVar15 + 0x20);
            auVar11._8_4_ = uVar14;
            auVar11._12_4_ = auVar5._48_4_;
            auVar11._16_4_ = auVar5._4_4_;
            auVar11._20_4_ = *(undefined4 *)(iVar15 + 0x24);
            auVar11._24_4_ = auVar5._36_4_;
            auVar11._28_4_ = auVar5._52_4_;
            auVar11._32_4_ = auVar5._8_4_;
            auVar11._36_4_ = auVar5._24_4_;
            auVar11._40_4_ = *(undefined4 *)(iVar15 + 0x28);
            auVar11._44_4_ = auVar5._56_4_;
            auVar11._48_4_ = auVar5._12_4_;
            auVar11._52_4_ = auVar5._28_4_;
            auVar11._56_4_ = auVar5._44_4_;
            auVar11._60_4_ = auVar5._60_4_;
            auVar3 = vidt_q();
            auVar6 = vrot_q(auVar2._0_4_,0,1,2,0);
            auVar7 = vrot_q(auVar2._0_4_,0,3,1,0);
            auVar4 = vidt_q();
            auVar5._48_16_ = auVar4;
            auVar5._44_4_ = auVar7._12_4_;
            auVar5._40_4_ = auVar7._8_4_;
            auVar5._36_4_ = auVar7._4_4_;
            auVar5._32_4_ = auVar7._0_4_;
            auVar5._28_4_ = auVar6._12_4_;
            auVar5._24_4_ = auVar6._8_4_;
            auVar5._20_4_ = auVar6._4_4_;
            auVar5._16_4_ = auVar6._0_4_;
            auVar5._12_4_ = auVar3._12_4_;
            auVar5._8_4_ = auVar3._8_4_;
            auVar5._4_4_ = auVar3._4_4_;
            auVar5._0_4_ = auVar3._0_4_;
            auVar5 = vmmul_q(auVar11,auVar5);
            auVar6 = vrot_q(uVar13,1,0,3,0);
            auVar3 = vidt_q();
            auVar7 = vrot_q(uVar13,2,0,1,0);
            auVar9._48_16_ = auVar4;
            auVar9._44_4_ = auVar7._12_4_;
            auVar9._40_4_ = auVar7._8_4_;
            auVar9._36_4_ = auVar7._4_4_;
            auVar9._32_4_ = auVar7._0_4_;
            auVar9._28_4_ = auVar3._12_4_;
            auVar9._24_4_ = auVar3._8_4_;
            auVar9._20_4_ = auVar3._4_4_;
            auVar9._16_4_ = auVar3._0_4_;
            auVar9._12_4_ = auVar6._12_4_;
            auVar9._8_4_ = auVar6._8_4_;
            auVar9._4_4_ = auVar6._4_4_;
            auVar9._0_4_ = auVar6._0_4_;
            auVar5 = vmmul_q(auVar5,auVar9);
            auVar6 = vrot_q(uVar14,1,2,0,0);
            auVar7 = vrot_q(uVar14,3,1,0,0);
            auVar3 = vidt_q();
            auVar10._48_16_ = auVar4;
            auVar10._44_4_ = auVar3._12_4_;
            auVar10._40_4_ = auVar3._8_4_;
            auVar10._36_4_ = auVar3._4_4_;
            auVar10._32_4_ = auVar3._0_4_;
            auVar10._28_4_ = auVar7._12_4_;
            auVar10._24_4_ = auVar7._8_4_;
            auVar10._20_4_ = auVar7._4_4_;
            auVar10._16_4_ = auVar7._0_4_;
            auVar10._12_4_ = auVar6._12_4_;
            auVar10._8_4_ = auVar6._8_4_;
            auVar10._4_4_ = auVar6._4_4_;
            auVar10._0_4_ = auVar6._0_4_;
            auVar5 = vmmul_q(auVar5,auVar10);
            puVar17 = (undefined4 *)puVar20[9];
            uVar13 = *puVar17;
            uVar14 = puVar17[1];
            uVar8 = puVar17[2];
            puVar17 = (undefined4 *)puVar20[9];
            *puVar17 = auVar5._0_4_;
            puVar17[1] = auVar5._4_4_;
            puVar17[2] = auVar5._8_4_;
            puVar17[3] = auVar5._12_4_;
            puVar17[4] = auVar5._16_4_;
            puVar17[5] = auVar5._20_4_;
            puVar17[6] = auVar5._24_4_;
            puVar17[7] = auVar5._28_4_;
            puVar17[8] = auVar5._32_4_;
            puVar17[9] = auVar5._36_4_;
            puVar17[10] = auVar5._40_4_;
            puVar17[0xb] = auVar5._44_4_;
            puVar17[0xc] = uVar13;
            puVar17[0xd] = uVar14;
            puVar17[0xe] = uVar8;
            puVar17[0xf] = 0x3f800000;
            uVar16 = piVar21[1];
          }
          else {
            uVar16 = piVar21[1];
          }
        }
        else {
          if (*piVar21 == 0x42424141) {
            if ((*(ushort *)(iVar23 + 4) & 0x8000) == 0) {
              *(int *)((int)piVar21 + bVar1 + 0xc) =
                   *(int *)((int)piVar21 + bVar1 + 0xc) + (int)puVar19;
              *(int *)((int)piVar21 + bVar1 + 0x10) =
                   *(int *)((int)piVar21 + bVar1 + 0x10) + (int)puVar19;
            }
            puVar20[6] = *puVar19;
            puVar20[7] = *(undefined4 *)((int)piVar21 + bVar1 + 0xc);
            uVar13 = *(undefined4 *)((int)piVar21 + bVar1 + 0x10);
            puVar20[10] = 0;
            puVar20[8] = uVar13;
            if ((*(ushort *)(iVar23 + 4) & 0x8000) == 0) {
              FUN_089e39d4(puVar20[7],puVar19);
            }
            goto LAB_089e65f4;
          }
          uVar16 = piVar21[1];
        }
      }
LAB_089e65f8:
      local_44 = local_44 + 1;
      piVar21 = (int *)((int)puVar19 + ((uVar16 & 0xffffff) + 3 & 0xfffffffc));
    } while (local_44 < *(ushort *)(iVar23 + 6));
  }
  *(ushort *)(iVar23 + 4) = *(ushort *)(iVar23 + 4) | 0x8000;
  return;
}

