#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f0a74(undefined4 param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  int iVar17;
  undefined4 uVar18;
  
  iVar17 = DAT_08ac5da8;
  if (DAT_08ac5da8 != 0) {
    puVar4 = (undefined4 *)FUN_089f1308(param_1);
    *puVar4 = 0x10080000;
    puVar4[1] = 0xaaa3970;
    uVar18 = 0x23000000;
    if (DAT_08ac5dac != '\0') {
      uVar18 = 0x23000001;
    }
    puVar4[2] = uVar18;
    puVar4[3] = 0xdf000032;
    puVar4[4] = 0xe0000000;
    puVar4[5] = 0xe1000000;
    puVar4[6] = 0x3a000000;
    uVar5 = DAT_08b001c4 >> 8;
    uVar8 = DAT_08b001c8 >> 8;
    puVar4[7] = DAT_08b001c0 >> 8 | 0x3b000000;
    puVar4[8] = uVar5 | 0x3b000000;
    puVar4[9] = uVar8 | 0x3b000000;
    uVar5 = DAT_08b001d4 >> 8;
    uVar8 = DAT_08b001d8 >> 8;
    puVar4[10] = DAT_08b001d0 >> 8 | 0x3b000000;
    puVar4[0xb] = uVar5 | 0x3b000000;
    puVar4[0xc] = uVar8 | 0x3b000000;
    uVar5 = DAT_08b001e4 >> 8;
    uVar8 = DAT_08b001e8 >> 8;
    puVar4[0xd] = DAT_08b001e0 >> 8 | 0x3b000000;
    puVar4[0xe] = uVar5 | 0x3b000000;
    puVar4[0xf] = uVar8 | 0x3b000000;
    uVar5 = DAT_08b001f4 >> 8;
    uVar8 = DAT_08b001f8 >> 8;
    puVar4[0x10] = DAT_08b001f0 >> 8 | 0x3b000000;
    puVar4[0x11] = uVar5 | 0x3b000000;
    puVar4[0x12] = uVar8 | 0x3b000000;
    puVar11 = puVar4 + 0x13;
    bVar2 = false;
    do {
      uVar5 = *(uint *)(iVar17 + 0x84);
      iVar7 = *(int *)(iVar17 + 4);
      *puVar11 = uVar5 & 0xffffff | 0x55000000;
      puVar11[1] = uVar5 >> 0x18 | 0x58000000;
      puVar16 = puVar11 + 2;
      if (*(char *)(iVar17 + 0x88) == '\0') {
        bVar3 = false;
        if (bVar2) {
          *puVar16 = 0x3a000000;
          uVar5 = DAT_08b001c4 >> 8;
          uVar8 = DAT_08b001c8 >> 8;
          puVar11[3] = DAT_08b001c0 >> 8 | 0x3b000000;
          puVar11[4] = uVar5 | 0x3b000000;
          puVar11[5] = uVar8 | 0x3b000000;
          uVar5 = DAT_08b001d4 >> 8;
          uVar8 = DAT_08b001d8 >> 8;
          puVar11[6] = DAT_08b001d0 >> 8 | 0x3b000000;
          puVar11[7] = uVar5 | 0x3b000000;
          puVar11[8] = uVar8 | 0x3b000000;
          uVar5 = DAT_08b001e4 >> 8;
          uVar8 = DAT_08b001e8 >> 8;
          puVar11[9] = DAT_08b001e0 >> 8 | 0x3b000000;
          puVar11[10] = uVar5 | 0x3b000000;
          puVar11[0xb] = uVar8 | 0x3b000000;
          uVar5 = DAT_08b001f4 >> 8;
          uVar8 = DAT_08b001f8 >> 8;
          puVar11[0xc] = DAT_08b001f0 >> 8 | 0x3b000000;
          puVar11[0xd] = uVar5 | 0x3b000000;
          puVar11[0xe] = uVar8 | 0x3b000000;
          puVar16 = puVar11 + 0xf;
        }
      }
      else {
        *puVar16 = 0x3a000000;
        uVar5 = iVar17 + 0x21U & 3;
        uVar8 = -1 << (4 - uVar5) * 8 & 0x3b000000U |
                *(uint *)((iVar17 + 0x21U) - uVar5) >> uVar5 * 8;
        uVar5 = iVar17 + 0x25U & 3;
        uVar12 = -1 << (4 - uVar5) * 8 & 0x3b000000U |
                 *(uint *)((iVar17 + 0x25U) - uVar5) >> uVar5 * 8;
        uVar5 = iVar17 + 0x29U & 3;
        uVar14 = -1 << (4 - uVar5) * 8 & 0x3b000000U |
                 *(uint *)((iVar17 + 0x29U) - uVar5) >> uVar5 * 8;
        puVar11[3] = uVar8;
        puVar11[4] = uVar12;
        puVar11[5] = uVar14;
        uVar5 = iVar17 + 0x31U & 3;
        uVar8 = uVar8 & -1 << (4 - uVar5) * 8 | *(uint *)((iVar17 + 0x31U) - uVar5) >> uVar5 * 8;
        uVar5 = iVar17 + 0x35U & 3;
        uVar12 = uVar12 & -1 << (4 - uVar5) * 8 | *(uint *)((iVar17 + 0x35U) - uVar5) >> uVar5 * 8;
        uVar5 = iVar17 + 0x39U & 3;
        uVar14 = uVar14 & -1 << (4 - uVar5) * 8 | *(uint *)((iVar17 + 0x39U) - uVar5) >> uVar5 * 8;
        puVar11[6] = uVar8;
        puVar11[7] = uVar12;
        puVar11[8] = uVar14;
        uVar5 = iVar17 + 0x41U & 3;
        uVar9 = uVar8 & -1 << (4 - uVar5) * 8 | *(uint *)((iVar17 + 0x41U) - uVar5) >> uVar5 * 8;
        uVar5 = iVar17 + 0x45U & 3;
        uVar13 = uVar12 & -1 << (4 - uVar5) * 8 | *(uint *)((iVar17 + 0x45U) - uVar5) >> uVar5 * 8;
        uVar5 = iVar17 + 0x49U & 3;
        uVar15 = uVar14 & -1 << (4 - uVar5) * 8 | *(uint *)((iVar17 + 0x49U) - uVar5) >> uVar5 * 8;
        puVar11[9] = uVar9;
        puVar11[10] = uVar13;
        puVar11[0xb] = uVar15;
        uVar5 = iVar17 + 0x51U & 3;
        uVar8 = iVar17 + 0x55U & 3;
        uVar14 = *(uint *)((iVar17 + 0x55U) - uVar8);
        uVar12 = iVar17 + 0x59U & 3;
        uVar1 = *(uint *)((iVar17 + 0x59U) - uVar12);
        puVar11[0xc] = uVar9 & -1 << (4 - uVar5) * 8 |
                       *(uint *)((iVar17 + 0x51U) - uVar5) >> uVar5 * 8;
        puVar11[0xd] = uVar13 & -1 << (4 - uVar8) * 8 | uVar14 >> uVar8 * 8;
        puVar11[0xe] = uVar15 & -1 << (4 - uVar12) * 8 | uVar1 >> uVar12 * 8;
        puVar16 = puVar11 + 0xf;
        bVar3 = true;
      }
      bVar2 = bVar3;
      if (*(int *)(iVar17 + 0x8c) == 2) {
        *puVar16 = 0x12000980;
        puVar16[1] = 0x10080000;
        puVar16[2] = 0x2aa38c8;
        puVar16[3] = 0x10080000;
        puVar16[4] = 0x1aa37f0;
        puVar16[5] = 0x60c0409;
        puVar11 = puVar16 + 6;
      }
      else if (*(int *)(iVar17 + 0x8c) == 3) {
        *puVar16 = 0x12000980;
        puVar16[1] = 0x10080000;
        puVar16[2] = 0x2aa38c8;
        puVar16[3] = 0x10080000;
        puVar16[4] = 0x1aa3838;
        puVar16[5] = 0x60c0409;
        puVar11 = puVar16 + 6;
      }
      else if (*(int *)(iVar17 + 0x8c) == 4) {
        *puVar16 = 0x12000980;
        puVar16[1] = 0x10080000;
        puVar16[2] = 0x2aa38c8;
        puVar16[3] = 0x10080000;
        puVar16[4] = 0x1aa3880;
        puVar16[5] = 0x60c0409;
        puVar11 = puVar16 + 6;
      }
      else if (*(int *)(iVar17 + 0x8c) == 5) {
        *puVar16 = 0x12000980;
        puVar16[1] = 0x10080000;
        puVar16[2] = 0x2aa395c;
        puVar16[3] = 0x10080000;
        puVar16[4] = 0x1aa38fc;
        puVar16[5] = 0x402000a;
        puVar16[6] = 0x12000980;
        puVar16[7] = 0x10080000;
        puVar16[8] = 0x2aa3966;
        puVar16[9] = 0x10080000;
        puVar16[10] = 0x1aa38fc;
        puVar16[0xb] = 0x4010006;
        puVar11 = puVar16 + 0xc;
      }
      else {
        puVar10 = puVar16 + 2;
        if (*(int *)(iVar17 + 0x8c) == 1) {
          puVar11 = puVar16 + 8;
          *puVar16 = ((uint)puVar11 >> 0x18 & 0xf) << 0x10 | 0x10000000;
          puVar16[1] = (uint)puVar11 & 0xffffff | 0x8000000;
          *puVar10 = *(uint *)(iVar17 + 0x60);
          puVar16[3] = *(uint *)(iVar17 + 100);
          puVar16[4] = *(uint *)(iVar17 + 0x68);
          puVar16[5] = *(uint *)(iVar17 + 0x70);
          puVar16[6] = *(uint *)(iVar17 + 0x74);
          puVar16[7] = *(uint *)(iVar17 + 0x78);
          *puVar11 = 0x12000980;
          puVar16[9] = 0x10080000;
          puVar11 = puVar16 + 0xb;
          puVar16[10] = 0x2aa38ec;
          if (puVar10 != (uint *)0x0) {
            *puVar11 = ((uint)puVar10 >> 0x18 & 0xf) << 0x10 | 0x10000000;
            puVar16[0xc] = (uint)puVar10 & 0xffffff | 0x1000000;
            puVar11 = puVar16 + 0xd;
          }
          *puVar11 = 0x60f0404;
          puVar11 = puVar11 + 1;
        }
        else {
          puVar10 = puVar16 + 2;
          if (*(int *)(iVar17 + 0x8c) == 6) {
            uVar5 = *(uint *)(iVar17 + 0x80);
            *puVar16 = (uVar5 >> 0x18 & 0xf) << 0x10 | 0x10000000;
            puVar16[1] = uVar5 & 0xffffff | 0xa000000;
            puVar11 = puVar16 + 2;
          }
          else {
            puVar11 = puVar16 + 8;
            *puVar16 = ((uint)puVar11 >> 0x18 & 0xf) << 0x10 | 0x10000000;
            puVar16[1] = (uint)puVar11 & 0xffffff | 0x8000000;
            *puVar10 = *(uint *)(iVar17 + 0x60);
            puVar16[3] = *(uint *)(iVar17 + 100);
            puVar16[4] = *(uint *)(iVar17 + 0x68);
            puVar16[5] = *(uint *)(iVar17 + 0x70);
            puVar16[6] = *(uint *)(iVar17 + 0x74);
            puVar16[7] = *(uint *)(iVar17 + 0x78);
            *puVar11 = 0x12000180;
            puVar11 = puVar16 + 9;
            if (puVar10 != (uint *)0x0) {
              *puVar11 = ((uint)puVar10 >> 0x18 & 0xf) << 0x10 | 0x10000000;
              puVar16[10] = (uint)puVar10 & 0xffffff | 0x1000000;
              puVar11 = puVar16 + 0xb;
            }
            *puVar11 = 0x4010002;
            puVar11 = puVar11 + 1;
          }
        }
      }
      iVar6 = *(int *)(iVar17 + 0x90) + -1;
      *(int *)(iVar17 + 0x90) = iVar6;
      if (iVar6 < 1) {
        (**(code **)(*(int *)(iVar17 + 0x14) + 0xc))
                  (iVar17 + *(short *)(*(int *)(iVar17 + 0x14) + 8),3);
      }
      iVar17 = iVar7;
    } while (iVar7 != 0);
    *puVar11 = 0x37000000;
    FUN_089f13c8(param_1,puVar11 + 1);
  }
  return;
}

