#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08825a6c(undefined4 param_1,int param_2,uint param_3)

{
  uint uVar1;
  undefined auVar2 [16];
  uint *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined4 in_V74;
  int local_38;
  
  puVar3 = DAT_08ac5c74;
  if (param_2 != 0) {
    uVar4 = FUN_089f1308(param_1);
    puVar5 = (undefined4 *)FUN_089f1490(uVar4,DAT_08ac5c90,0);
    *puVar5 = 0x10080000;
    puVar5[1] = 0xaab9e50;
    puVar5[2] = 0x1e000000;
    iVar15 = DAT_08ac5c90;
    puVar5[3] = *(uint *)(DAT_08ac5c90 + 0x70) >> 8 | 0x63000000;
    puVar5[4] = *(uint *)(iVar15 + 0x74) >> 8 | 0x64000000;
    puVar5[5] = *(uint *)(iVar15 + 0x78) >> 8 | 0x65000000;
    puVar5[6] = DAT_08ab9eb8 | 0x23000000;
    puVar5[7] = param_3 & 0xff | 0x1f000000;
    puVar6 = puVar5 + 8;
    local_38 = 0;
    iVar16 = 0;
    iVar15 = -1;
    do {
      if (*(char *)(param_2 + 0x13c) == '\0') {
        param_2 = *(int *)(param_2 + 4);
      }
      else {
        if (iVar16 == *(int *)(param_2 + 0x18c)) {
          if (local_38 != *(int *)(param_2 + 400)) {
            local_38 = *(int *)(param_2 + 400);
            goto LAB_08825c08;
          }
          iVar8 = *(int *)(param_2 + 0xfc);
        }
        else {
          local_38 = *(int *)(param_2 + 400);
LAB_08825c08:
          iVar16 = *(int *)(param_2 + 0x18c);
          if (iVar16 == 0) {
            *puVar6 = 0x1e000000;
          }
          else {
            puVar6 = (uint *)FUN_089f7110(iVar16,puVar6,local_38);
            *puVar6 = 0x1e000001;
          }
          puVar6 = puVar6 + 1;
          iVar8 = *(int *)(param_2 + 0xfc);
        }
        if (iVar15 != iVar8) {
          iVar15 = *(int *)(param_2 + 0xfc);
          puVar7 = puVar6;
          if (iVar15 < 2) {
            if (-1 < iVar15) {
              if (iVar15 < 1) {
                *puVar6 = 0xdf0000aa;
                puVar6[1] = 0xe0ffffff;
                puVar6[2] = 0xe1000000;
              }
              else {
                *puVar6 = 0xdf000032;
                puVar6[1] = 0xe0000000;
                puVar6[2] = 0xe1000000;
              }
              goto LAB_08825d10;
            }
          }
          else {
            if (iVar15 < 3) {
              *puVar6 = 0xdf0000a2;
              puVar6[1] = 0xe0000000;
              puVar6[2] = 0xe1ffffff;
            }
            else {
              if (3 < iVar15) goto LAB_08825d14;
              *puVar6 = 0xdf0002a2;
              puVar6[1] = 0xe0000000;
              puVar6[2] = 0xe1ffffff;
            }
LAB_08825d10:
            puVar7 = puVar6 + 3;
          }
LAB_08825d14:
          puVar6 = puVar7 + 1;
          if (iVar15 < 2) {
            *puVar7 = *puVar3 & 0xffffff | 0xcf000000;
          }
          else {
            *puVar7 = 0xcf000000;
          }
        }
        *puVar6 = 0x3a000000;
        uVar17 = param_2 + 0x31U & 3;
        uVar9 = -1 << (4 - uVar17) * 8 & 0x3b000000U |
                *(uint *)((param_2 + 0x31U) - uVar17) >> uVar17 * 8;
        uVar17 = param_2 + 0x35U & 3;
        uVar11 = -1 << (4 - uVar17) * 8 & 0x3b000000U |
                 *(uint *)((param_2 + 0x35U) - uVar17) >> uVar17 * 8;
        uVar17 = param_2 + 0x39U & 3;
        uVar13 = -1 << (4 - uVar17) * 8 & 0x3b000000U |
                 *(uint *)((param_2 + 0x39U) - uVar17) >> uVar17 * 8;
        puVar6[1] = uVar9;
        puVar6[2] = uVar11;
        puVar6[3] = uVar13;
        uVar17 = param_2 + 0x41U & 3;
        uVar9 = uVar9 & -1 << (4 - uVar17) * 8 | *(uint *)((param_2 + 0x41U) - uVar17) >> uVar17 * 8
        ;
        uVar17 = param_2 + 0x45U & 3;
        uVar11 = uVar11 & -1 << (4 - uVar17) * 8 |
                 *(uint *)((param_2 + 0x45U) - uVar17) >> uVar17 * 8;
        uVar17 = param_2 + 0x49U & 3;
        uVar13 = uVar13 & -1 << (4 - uVar17) * 8 |
                 *(uint *)((param_2 + 0x49U) - uVar17) >> uVar17 * 8;
        puVar6[4] = uVar9;
        puVar6[5] = uVar11;
        puVar6[6] = uVar13;
        uVar17 = param_2 + 0x51U & 3;
        uVar10 = uVar9 & -1 << (4 - uVar17) * 8 |
                 *(uint *)((param_2 + 0x51U) - uVar17) >> uVar17 * 8;
        uVar17 = param_2 + 0x55U & 3;
        uVar12 = uVar11 & -1 << (4 - uVar17) * 8 |
                 *(uint *)((param_2 + 0x55U) - uVar17) >> uVar17 * 8;
        uVar17 = param_2 + 0x59U & 3;
        uVar14 = uVar13 & -1 << (4 - uVar17) * 8 |
                 *(uint *)((param_2 + 0x59U) - uVar17) >> uVar17 * 8;
        puVar6[7] = uVar10;
        puVar6[8] = uVar12;
        puVar6[9] = uVar14;
        uVar17 = param_2 + 0xb1U & 3;
        uVar9 = param_2 + 0xb5U & 3;
        uVar13 = *(uint *)((param_2 + 0xb5U) - uVar9);
        uVar11 = param_2 + 0xb9U & 3;
        uVar1 = *(uint *)((param_2 + 0xb9U) - uVar11);
        puVar6[10] = uVar10 & -1 << (4 - uVar17) * 8 |
                     *(uint *)((param_2 + 0xb1U) - uVar17) >> uVar17 * 8;
        puVar6[0xb] = uVar12 & -1 << (4 - uVar9) * 8 | uVar13 >> uVar9 * 8;
        puVar6[0xc] = uVar14 & -1 << (4 - uVar11) * 8 | uVar1 >> uVar11 * 8;
        puVar6[0xd] = *(uint *)(param_2 + 0x1b4);
        puVar6[0xe] = *(uint *)(param_2 + 0x1b0);
        if (*(int *)(param_2 + 0x18) == 7) {
          puVar6[0xf] = 0x23000000;
        }
        else {
          puVar6[0xf] = DAT_08ab9eb8 | 0x23000000;
        }
        auVar2 = vsat0_q(*(undefined (*) [16])(param_2 + 0xe0));
        auVar2 = vscl_q(auVar2,in_V74);
        auVar2 = vf2iz_q(auVar2,0x17);
        uVar17 = vi2uc_q(auVar2);
        puVar7 = puVar6 + 0x10;
        if (*(int *)(param_2 + 0x194) != 0) {
          puVar6[0x10] = *(uint *)(param_2 + 0x194);
          puVar7 = puVar6 + 0x11;
        }
        puVar6 = puVar7;
        if (*(char *)(param_2 + 0x1a0) == '\0') {
          *puVar6 = uVar17 & 0xffffff | 0x55000000;
          puVar6[1] = uVar17 >> 0x18 | 0x58000000;
        }
        else {
          *puVar6 = uVar17 & 0xffffff | 0x5c000000;
          puVar6[1] = uVar17 >> 0x18 | 0x5d000000;
        }
        puVar6[2] = *(int *)(param_2 + 0x1a4) << 8 | 0xdbff0007;
        puVar6[3] = *(int *)(param_2 + 0x140) != 0 | 0x1d000000;
        puVar6[4] = *(int *)(param_2 + 0x140) != 1 | 0x9b000000;
        puVar6[5] = *(uint *)(param_2 + 0x170) >> 8 | 0x48000000;
        puVar6[6] = *(uint *)(param_2 + 0x174) >> 8 | 0x49000000;
        puVar6[7] = *(uint *)(param_2 + 0x178) >> 8 | 0x4a000000;
        puVar6[8] = *(uint *)(param_2 + 0x17c) >> 8 | 0x4b000000;
        puVar6[9] = *(byte *)(param_2 + 0x1a0) | 0x17000000;
        puVar6[10] = (uint)(iVar15 == 0) << 1 | 0x53000000 | (uint)*(byte *)(param_2 + 0x1a0);
        puVar6[0xb] = *(byte *)(param_2 + 0x1a1) | 0xe7000000;
        iVar8 = *(int *)(param_2 + 0x1a8);
        if (iVar8 < 1) {
          if (-1 < iVar8) {
            puVar6[0xc] = *(uint *)(param_2 + 0x15c);
            puVar6[0xd] = (*(uint *)(param_2 + 0xf0) >> 0x18 & 0xf) << 0x10 | 0x10000000;
            puVar6[0xe] = *(uint *)(param_2 + 0xf0) & 0xffffff | 0x2000000;
            puVar6[0xf] = (*(uint *)(param_2 + 0xf4) >> 0x18 & 0xf) << 0x10 | 0x10000000;
            puVar6[0x10] = *(uint *)(param_2 + 0xf4) & 0xffffff | 0x1000000;
            puVar6[0x11] = *(int *)(param_2 + 0x164) << 8 | 0x36000000U | *(uint *)(param_2 + 0x160)
            ;
            puVar6[0x12] = 0x4030001;
            puVar6[0x13] = puVar6[0xd];
            puVar6[0x14] = puVar6[0xe];
            puVar6[0x15] = *(uint *)(param_2 + 0x168) | *(int *)(param_2 + 0x184) << 0x10 |
                           *(int *)(param_2 + 0x16c) << 8 |
                           *(int *)(param_2 + 0x188) << 0x12 | 0x6000000U;
            if (*(int *)(param_2 + 0x140) == 3) {
              puVar6[0x16] = 0x9b000000;
              puVar6[0x17] = 0x4030001;
              puVar6[0x18] = puVar6[0xd];
              puVar6[0x19] = puVar6[0xe];
              puVar6[0x1a] = puVar6[0x15];
              puVar6 = puVar6 + 0x1b;
            }
            else {
              puVar6 = puVar6 + 0x16;
            }
            goto LAB_08826238;
          }
          iVar8 = *(int *)(param_2 + 0x194);
        }
        else {
          if (iVar8 < 2) {
            puVar7 = puVar6 + 0xb;
            uVar11 = *(uint *)(param_2 + 0x1ac);
            uVar17 = *(uint *)(param_2 + 0xf0);
            uVar9 = *(uint *)(param_2 + 0xf4);
            if (*(uint *)(param_2 + 0x15c) != 0) {
              *puVar7 = *(uint *)(param_2 + 0x15c) & 0xffffff | 0x12000000;
              puVar7 = puVar6 + 0xc;
            }
            if (uVar17 != 0) {
              *puVar7 = (uVar17 >> 0x18 & 0xf) << 0x10 | 0x10000000;
              puVar7[1] = uVar17 & 0xffffff | 0x2000000;
              puVar7 = puVar7 + 2;
            }
            if (uVar9 != 0) {
              *puVar7 = (uVar9 >> 0x18 & 0xf) << 0x10 | 0x10000000;
              puVar7[1] = uVar9 & 0xffffff | 0x1000000;
              puVar7 = puVar7 + 2;
            }
            *puVar7 = uVar11 | 0x4040000;
            puVar6 = puVar7 + 1;
          }
          else {
            if (2 < iVar8) {
              iVar8 = *(int *)(param_2 + 0x194);
              goto LAB_0882623c;
            }
            puVar6[0xc] = *(uint *)(param_2 + 0x15c);
            puVar6[0xd] = (*(uint *)(param_2 + 0xf0) >> 0x18 & 0xf) << 0x10 | 0x10000000;
            puVar6[0xe] = *(uint *)(param_2 + 0xf0) & 0xffffff | 0x2000000;
            puVar6[0xf] = (*(uint *)(param_2 + 0xf4) >> 0x18 & 0xf) << 0x10 | 0x10000000;
            puVar6[0x10] = *(uint *)(param_2 + 0xf4) & 0xffffff | 0x1000000;
            puVar6[0x11] = *(int *)(param_2 + 0x164) << 8 | 0x36000000U | *(uint *)(param_2 + 0x160)
            ;
            puVar6[0x12] = 0x4030001;
            puVar6[0x13] = puVar6[0xd];
            puVar6[0x14] = puVar6[0xe];
            puVar6[0x15] = *(int *)(param_2 + 0x16c) << 8 | 0x5000000U | *(uint *)(param_2 + 0x168);
            if (*(int *)(param_2 + 0x140) == 3) {
              puVar6[0x16] = 0x9b000000;
              puVar6[0x17] = 0x4030001;
              puVar6[0x18] = puVar6[0xd];
              puVar6[0x19] = puVar6[0xe];
              puVar6[0x1a] = puVar6[0x15];
              puVar6 = puVar6 + 0x1b;
            }
            else {
              puVar6 = puVar6 + 0x16;
            }
          }
LAB_08826238:
          iVar8 = *(int *)(param_2 + 0x194);
        }
LAB_0882623c:
        if (iVar8 != 0) {
          *puVar6 = 0xc0000100;
          puVar6 = puVar6 + 1;
        }
        param_2 = *(int *)(param_2 + 4);
      }
    } while (param_2 != 0);
    *puVar6 = 0x483f8000;
    puVar6[1] = 0x493f8000;
    puVar6[2] = 0x4a000000;
    puVar6[3] = 0x4b000000;
    FUN_089f13c8(param_1,puVar6 + 4);
  }
  return;
}

