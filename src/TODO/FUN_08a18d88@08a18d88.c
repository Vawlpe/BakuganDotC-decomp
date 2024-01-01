#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a18d88(uint *param_1,int param_2,int param_3)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ushort *puVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint *local_220;
  uint *local_1d8;
  undefined auStack_180 [5];
  uint auStack_17b [78];
  uint local_40;
  
  iVar21 = *(int *)(param_3 + 0x50);
  uVar2 = *(ushort *)(iVar21 + 0xe);
  local_1d8 = (uint *)0x0;
  puVar18 = *(ushort **)(iVar21 + 4);
  local_220 = param_1;
  if (uVar2 != 0) {
    uVar20 = 0;
    do {
      iVar8 = *(int *)(param_3 + 4) + (short)puVar18[2] * 0xc0;
      puVar7 = param_1 + *puVar18;
      if (param_2 != 0) {
        memcpy_jak(local_220,(int)local_220 + (param_2 - (int)param_1),(int)puVar7 - (int)local_220)
        ;
      }
      uVar3 = puVar18[1];
      if ((uVar3 & 1) != 0) {
        local_1d8 = (uint *)0x0;
      }
      local_220 = puVar7;
      if ((uVar3 & 2) != 0) {
        puVar4 = (undefined4 *)(param_3 + 0x80);
        if ((*(uint *)(param_3 + 0x28) & 1) != 0) {
          puVar4 = &DAT_08aa5240;
        }
        if ((*(uint *)(iVar8 + 0x20) & 0x10000) != 0) {
          FUN_08a13cec(auStack_180,puVar4,iVar8 + 0x80,param_3 + 0x60);
          puVar4 = (undefined4 *)auStack_180;
        }
        local_220 = puVar7 + 0xd;
        *puVar7 = 0x3a000000;
        uVar19 = (int)puVar4 + 1U & 3;
        uVar9 = -1 << (4 - uVar19) * 8 & 0x3b000000U |
                *(uint *)(((int)puVar4 + 1U) - uVar19) >> uVar19 * 8;
        uVar19 = (int)puVar4 + 5U & 3;
        uVar11 = -1 << (4 - uVar19) * 8 & 0x3b000000U |
                 *(uint *)(((int)puVar4 + 5U) - uVar19) >> uVar19 * 8;
        uVar19 = (int)puVar4 + 9U & 3;
        uVar15 = -1 << (4 - uVar19) * 8 & 0x3b000000U |
                 *(uint *)(((int)puVar4 + 9U) - uVar19) >> uVar19 * 8;
        puVar7[1] = uVar9;
        puVar7[2] = uVar11;
        puVar7[3] = uVar15;
        uVar19 = (int)puVar4 + 0x11U & 3;
        uVar9 = uVar9 & -1 << (4 - uVar19) * 8 |
                *(uint *)(((int)puVar4 + 0x11U) - uVar19) >> uVar19 * 8;
        uVar19 = (int)puVar4 + 0x15U & 3;
        uVar11 = uVar11 & -1 << (4 - uVar19) * 8 |
                 *(uint *)(((int)puVar4 + 0x15U) - uVar19) >> uVar19 * 8;
        uVar19 = (int)puVar4 + 0x19U & 3;
        uVar15 = uVar15 & -1 << (4 - uVar19) * 8 |
                 *(uint *)(((int)puVar4 + 0x19U) - uVar19) >> uVar19 * 8;
        puVar7[4] = uVar9;
        puVar7[5] = uVar11;
        puVar7[6] = uVar15;
        uVar19 = (int)puVar4 + 0x21U & 3;
        uVar10 = uVar9 & -1 << (4 - uVar19) * 8 |
                 *(uint *)(((int)puVar4 + 0x21U) - uVar19) >> uVar19 * 8;
        uVar19 = (int)puVar4 + 0x25U & 3;
        uVar12 = uVar11 & -1 << (4 - uVar19) * 8 |
                 *(uint *)(((int)puVar4 + 0x25U) - uVar19) >> uVar19 * 8;
        uVar19 = (int)puVar4 + 0x29U & 3;
        uVar16 = uVar15 & -1 << (4 - uVar19) * 8 |
                 *(uint *)(((int)puVar4 + 0x29U) - uVar19) >> uVar19 * 8;
        puVar7[7] = uVar10;
        puVar7[8] = uVar12;
        puVar7[9] = uVar16;
        uVar19 = (int)puVar4 + 0x31U & 3;
        uVar9 = (int)puVar4 + 0x35U & 3;
        uVar15 = *(uint *)(((int)puVar4 + 0x35U) - uVar9);
        uVar11 = (int)puVar4 + 0x39U & 3;
        uVar13 = *(uint *)(((int)puVar4 + 0x39U) - uVar11);
        puVar7[10] = uVar10 & -1 << (4 - uVar19) * 8 |
                     *(uint *)(((int)puVar4 + 0x31U) - uVar19) >> uVar19 * 8;
        puVar7[0xb] = uVar12 & -1 << (4 - uVar9) * 8 | uVar15 >> uVar9 * 8;
        puVar7[0xc] = uVar16 & -1 << (4 - uVar11) * 8 | uVar13 >> uVar11 * 8;
      }
      if (((uVar3 & 4) != 0) &&
         ((iVar6 = *(int *)(puVar18 + 4), iVar6 == 0 || (local_1d8 == (uint *)0x0)))) {
        uVar19 = (uint)*(ushort *)(iVar8 + 0x1c);
        if (iVar6 == 0) {
          *local_220 = 0xff000000;
          local_220 = local_220 + 1;
        }
        else {
          local_1d8 = local_220 + 3;
          *local_220 = 0x14000000;
          local_220[1] = 0x10000000;
          local_220[2] = uVar19 * 0x34 + 0xc | 0x8000000;
          local_220 = local_1d8;
        }
        if (uVar19 != 0) {
          uVar9 = 0;
          if (iVar6 == 0) {
            local_40 = 0;
            puVar7 = local_220;
            do {
              sVar1 = *(short *)(uVar9 * 2 + *(int *)(iVar8 + 0x10));
              iVar5 = *(int *)(param_3 + 4);
              iVar6 = *(int *)(iVar8 + 0x14);
              *puVar7 = local_40 | 0x2a000000;
              FUN_08a13cec(auStack_180,iVar5 + sVar1 * 0xc0 + 0x80,iVar6 + uVar9 * 0x40,
                           param_3 + 0x60);
              local_220 = puVar7 + 0xd;
              uVar11 = (uint)(auStack_180 + 1) & 3;
              uVar15 = -1 << (4 - uVar11) * 8 & 0x2b000000U |
                       *(uint *)(auStack_180 + 1 + -uVar11) >> uVar11 * 8;
              uVar11 = (uint)auStack_17b & 3;
              uVar13 = -1 << (4 - uVar11) * 8 & 0x2b000000U |
                       *(uint *)((int)auStack_17b - uVar11) >> uVar11 * 8;
              uVar11 = (uint)(auStack_17b + 1) & 3;
              uVar10 = -1 << (4 - uVar11) * 8 & 0x2b000000U |
                       *(uint *)((int)(auStack_17b + 1) - uVar11) >> uVar11 * 8;
              puVar7[1] = uVar15;
              puVar7[2] = uVar13;
              puVar7[3] = uVar10;
              uVar11 = (uint)(auStack_17b + 3) & 3;
              uVar15 = uVar15 & -1 << (4 - uVar11) * 8 |
                       *(uint *)((int)(auStack_17b + 3) - uVar11) >> uVar11 * 8;
              uVar11 = (uint)(auStack_17b + 4) & 3;
              uVar13 = uVar13 & -1 << (4 - uVar11) * 8 |
                       *(uint *)((int)(auStack_17b + 4) - uVar11) >> uVar11 * 8;
              uVar11 = (uint)(auStack_17b + 5) & 3;
              uVar10 = uVar10 & -1 << (4 - uVar11) * 8 |
                       *(uint *)((int)(auStack_17b + 5) - uVar11) >> uVar11 * 8;
              puVar7[4] = uVar15;
              puVar7[5] = uVar13;
              puVar7[6] = uVar10;
              uVar11 = (uint)(auStack_17b + 7) & 3;
              uVar16 = uVar15 & -1 << (4 - uVar11) * 8 |
                       *(uint *)((int)(auStack_17b + 7) - uVar11) >> uVar11 * 8;
              uVar11 = (uint)(auStack_17b + 8) & 3;
              uVar14 = uVar13 & -1 << (4 - uVar11) * 8 |
                       *(uint *)((int)(auStack_17b + 8) - uVar11) >> uVar11 * 8;
              uVar11 = (uint)(auStack_17b + 9) & 3;
              uVar17 = uVar10 & -1 << (4 - uVar11) * 8 |
                       *(uint *)((int)(auStack_17b + 9) - uVar11) >> uVar11 * 8;
              puVar7[7] = uVar16;
              puVar7[8] = uVar14;
              puVar7[9] = uVar17;
              uVar11 = (uint)(auStack_17b + 0xb) & 3;
              uVar15 = (uint)(auStack_17b + 0xc) & 3;
              uVar10 = *(uint *)((int)(auStack_17b + 0xc) - uVar15);
              uVar13 = (uint)(auStack_17b + 0xd) & 3;
              uVar12 = *(uint *)((int)(auStack_17b + 0xd) - uVar13);
              puVar7[10] = uVar16 & -1 << (4 - uVar11) * 8 |
                           *(uint *)((int)(auStack_17b + 0xb) - uVar11) >> uVar11 * 8;
              puVar7[0xb] = uVar14 & -1 << (4 - uVar15) * 8 | uVar10 >> uVar15 * 8;
              puVar7[0xc] = uVar17 & -1 << (4 - uVar13) * 8 | uVar12 >> uVar13 * 8;
              uVar9 = uVar9 + 1;
              local_40 = local_40 + 0xc;
              puVar7 = local_220;
            } while (uVar19 != uVar9);
          }
          else {
            do {
              FUN_08a13cec(auStack_180,
                           *(int *)(param_3 + 4) +
                           *(short *)(uVar9 * 2 + *(int *)(iVar8 + 0x10)) * 0xc0 + 0x80,
                           *(int *)(iVar8 + 0x14) + uVar9 * 0x40,param_3 + 0x60);
              uVar11 = (uint)(auStack_180 + 1) & 3;
              uVar15 = -1 << (4 - uVar11) * 8 & 0x2b000000U |
                       *(uint *)(auStack_180 + 1 + -uVar11) >> uVar11 * 8;
              uVar11 = (uint)auStack_17b & 3;
              uVar13 = -1 << (4 - uVar11) * 8 & 0x2b000000U |
                       *(uint *)((int)auStack_17b - uVar11) >> uVar11 * 8;
              uVar11 = (uint)(auStack_17b + 1) & 3;
              uVar10 = -1 << (4 - uVar11) * 8 & 0x2b000000U |
                       *(uint *)((int)(auStack_17b + 1) - uVar11) >> uVar11 * 8;
              *local_220 = uVar15;
              local_220[1] = uVar13;
              local_220[2] = uVar10;
              uVar11 = (uint)(auStack_17b + 3) & 3;
              uVar15 = uVar15 & -1 << (4 - uVar11) * 8 |
                       *(uint *)((int)(auStack_17b + 3) - uVar11) >> uVar11 * 8;
              uVar11 = (uint)(auStack_17b + 4) & 3;
              uVar13 = uVar13 & -1 << (4 - uVar11) * 8 |
                       *(uint *)((int)(auStack_17b + 4) - uVar11) >> uVar11 * 8;
              uVar11 = (uint)(auStack_17b + 5) & 3;
              uVar10 = uVar10 & -1 << (4 - uVar11) * 8 |
                       *(uint *)((int)(auStack_17b + 5) - uVar11) >> uVar11 * 8;
              local_220[3] = uVar15;
              local_220[4] = uVar13;
              local_220[5] = uVar10;
              uVar11 = (uint)(auStack_17b + 7) & 3;
              uVar16 = uVar15 & -1 << (4 - uVar11) * 8 |
                       *(uint *)((int)(auStack_17b + 7) - uVar11) >> uVar11 * 8;
              uVar11 = (uint)(auStack_17b + 8) & 3;
              uVar14 = uVar13 & -1 << (4 - uVar11) * 8 |
                       *(uint *)((int)(auStack_17b + 8) - uVar11) >> uVar11 * 8;
              uVar11 = (uint)(auStack_17b + 9) & 3;
              uVar17 = uVar10 & -1 << (4 - uVar11) * 8 |
                       *(uint *)((int)(auStack_17b + 9) - uVar11) >> uVar11 * 8;
              local_220[6] = uVar16;
              local_220[7] = uVar14;
              local_220[8] = uVar17;
              uVar11 = (uint)(auStack_17b + 0xb) & 3;
              uVar15 = (uint)(auStack_17b + 0xc) & 3;
              uVar10 = *(uint *)((int)(auStack_17b + 0xc) - uVar15);
              uVar13 = (uint)(auStack_17b + 0xd) & 3;
              uVar12 = *(uint *)((int)(auStack_17b + 0xd) - uVar13);
              local_220[9] = uVar16 & -1 << (4 - uVar11) * 8 |
                             *(uint *)((int)(auStack_17b + 0xb) - uVar11) >> uVar11 * 8;
              local_220[10] = uVar14 & -1 << (4 - uVar15) * 8 | uVar10 >> uVar15 * 8;
              local_220[0xb] = uVar17 & -1 << (4 - uVar13) * 8 | uVar12 >> uVar13 * 8;
              uVar9 = uVar9 + 1;
              local_220[0xc] = 0xb000000;
              local_220 = local_220 + 0xd;
            } while (uVar19 != uVar9);
          }
        }
      }
      uVar20 = uVar20 + 1;
      puVar18 = puVar18 + 6;
    } while (uVar20 != uVar2);
  }
  if (param_2 != 0) {
    memcpy_jak(local_220,param_2 + ((int)local_220 - (int)param_1),
               ((uint)*(ushort *)(iVar21 + 0x12) - ((int)local_220 - (int)param_1 >> 2)) * 4);
  }
  return;
}

