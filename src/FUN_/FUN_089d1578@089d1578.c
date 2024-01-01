#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d1578(int param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  int *piVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  uint *puVar19;
  uint uVar20;
  
  FUN_089bb728(*(undefined4 *)(param_1 + 8));
  puVar8 = *(uint **)(param_1 + 0xf0);
  piVar12 = *(int **)(param_1 + 0xf8);
  uVar13 = 0;
  iVar9 = *(int *)(param_1 + 0x138);
  piVar14 = piVar12;
  if (*(int *)(param_1 + 0x148) != 0) {
    do {
      if (0xb < *(uint *)(param_1 + 0x150)) {
        *(int *)(param_1 + 0x134) = iVar9;
        goto LAB_089d167c;
      }
      if (iVar9 + 1 == *piVar12) {
        piVar10 = (int *)(DAT_08ac5940 + *(uint *)(param_1 + 0x150) * 0x50);
        iVar17 = piVar14[1];
        iVar6 = piVar14[2];
        *piVar10 = *piVar14;
        iVar9 = piVar14[3];
        piVar10[1] = iVar17;
        iVar17 = piVar14[4];
        piVar10[2] = iVar6;
        iVar6 = piVar14[5];
        piVar10[3] = iVar9;
        iVar9 = piVar14[6];
        piVar10[4] = iVar17;
        iVar17 = piVar14[7];
        piVar10[5] = iVar6;
        iVar6 = piVar14[8];
        piVar10[6] = iVar9;
        iVar9 = piVar14[9];
        piVar10[7] = iVar17;
        piVar10[8] = iVar6;
        piVar10[9] = iVar9;
        iVar9 = *(int *)(param_1 + 0x138) + 1;
        *(int *)(param_1 + 0x138) = iVar9;
        *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + 1;
        uVar15 = *(uint *)(param_1 + 0x148);
      }
      else {
        uVar15 = *(uint *)(param_1 + 0x148);
      }
      uVar13 = uVar13 + 1;
      piVar12 = piVar12 + 10;
      piVar14 = piVar14 + 10;
    } while (uVar13 < uVar15);
  }
  *(int *)(param_1 + 0x134) = iVar9;
LAB_089d167c:
  uVar16 = *(uint *)(param_1 + 0x140);
  uVar20 = 0;
  uVar13 = 0;
  uVar15 = 0;
  if (uVar16 != 0) {
    iVar9 = 0;
    puVar11 = puVar8;
    puVar19 = puVar8;
    do {
      uVar3 = *puVar11;
      uVar7 = *(int *)(param_1 + 0x13c) + 1;
      if (uVar3 == uVar7) {
        if (*(uint *)(param_1 + 300) < uVar3) break;
        if (uVar15 < *(uint *)(param_1 + 0x150)) {
          puVar18 = (uint *)(DAT_08ac5940 + iVar9);
          uVar2 = uVar15;
          iVar6 = iVar9;
          do {
            iVar9 = iVar6;
            uVar15 = uVar2;
            if (*puVar18 == uVar3) {
              bVar1 = uVar13 < uVar16;
              if (uVar3 != uVar7) goto LAB_089d178c;
              uVar16 = puVar19[1];
              uVar3 = puVar19[2];
              puVar18[10] = *puVar19;
              uVar7 = puVar19[3];
              puVar18[0xb] = uVar16;
              uVar16 = puVar19[4];
              puVar18[0xc] = uVar3;
              uVar3 = puVar19[5];
              puVar18[0xd] = uVar7;
              uVar7 = puVar19[6];
              puVar18[0xe] = uVar16;
              uVar16 = puVar19[7];
              puVar18[0xf] = uVar3;
              uVar3 = puVar19[8];
              puVar18[0x10] = uVar7;
              uVar7 = puVar19[9];
              puVar18[0x11] = uVar16;
              puVar18[0x12] = uVar3;
              puVar18[0x13] = uVar7;
              *(int *)(param_1 + 0x13c) = *(int *)(param_1 + 0x13c) + 1;
              *(int *)(param_1 + 0x14c) = *(int *)(param_1 + 0x14c) + 1;
              uVar13 = uVar13 + 1;
              uVar16 = *(uint *)(param_1 + 0x140);
              break;
            }
            puVar18 = puVar18 + 0x14;
            uVar2 = uVar15 + 1;
            iVar6 = iVar9 + 0x50;
          } while (uVar15 + 1 < *(uint *)(param_1 + 0x150));
          iVar9 = iVar9 + 0x50;
          uVar15 = uVar15 + 1;
          bVar1 = uVar13 < uVar16;
        }
        else {
          bVar1 = uVar13 < uVar16;
        }
LAB_089d178c:
        if (!bVar1) break;
      }
      uVar20 = uVar20 + 1;
      puVar11 = puVar11 + 10;
      puVar19 = puVar19 + 10;
    } while (uVar20 < uVar16);
  }
  if ((int)uVar13 < 1) {
    *(char *)(param_1 + 0x1c) = (char)uVar16;
  }
  else {
    uVar16 = uVar16 - uVar13;
    uVar15 = 0;
    *(uint *)(param_1 + 0x140) = uVar16;
    if (uVar16 != 0) {
      puVar11 = puVar8 + uVar13 * 10;
      do {
        uVar16 = puVar11[1];
        uVar20 = puVar11[2];
        *puVar8 = *puVar11;
        uVar13 = puVar11[3];
        puVar8[1] = uVar16;
        uVar16 = puVar11[4];
        puVar8[2] = uVar20;
        uVar20 = puVar11[5];
        puVar8[3] = uVar13;
        uVar13 = puVar11[6];
        puVar8[4] = uVar16;
        uVar16 = puVar11[7];
        puVar8[5] = uVar20;
        uVar20 = puVar11[8];
        puVar8[6] = uVar13;
        uVar13 = puVar11[9];
        puVar8[7] = uVar16;
        puVar8[8] = uVar20;
        puVar8[9] = uVar13;
        uVar16 = *(uint *)(param_1 + 0x140);
        uVar15 = uVar15 + 1;
        puVar8 = puVar8 + 10;
        puVar11 = puVar11 + 10;
      } while (uVar15 < uVar16);
    }
    *(char *)(param_1 + 0x1c) = (char)uVar16;
  }
  *(ushort *)(param_1 + 0x3e) =
       *(ushort *)(param_1 + 0x3e) & 0xf800 |
       (short)*(undefined4 *)(param_1 + 0x140) * 0x28 & 0x7ffU;
  if (*(int *)(param_1 + 0x14c) != 0) {
    if (((*(uint *)(DAT_08ac5940 + 4) | *(uint *)(DAT_08ac5940 + 0x2c)) & 0x30000000) == 0) {
      DAT_08ac5948 = 2;
    }
    else {
      DAT_08ac5948 = 0;
      if ((*(uint *)(DAT_08ac5940 + 0x2c) & 0x10000000) == 0) {
        DAT_08ac5948 = 1;
      }
    }
    if (((*(uint *)(DAT_08ac5940 + 4) & 0x1000000) != 0) &&
       ((*(uint *)(DAT_08ac5940 + 0x2c) & 0x1000000) != 0)) {
      iVar9 = FUN_0881b22c();
      if (iVar9 == 0) {
        iVar9 = *(int *)(param_1 + 0x11c);
      }
      else {
        uVar4 = FUN_0881b254();
        uVar5 = FUN_0881b254();
        uVar13 = FUN_0881b64c(uVar5);
        FUN_0881b620(uVar4,uVar13 | 0x800000);
        iVar9 = *(int *)(param_1 + 0x11c);
      }
      if (iVar9 == 0) {
        *(undefined4 *)(param_1 + 0x11c) = 0xf;
      }
    }
  }
  FUN_089bb790(*(undefined4 *)(param_1 + 8));
  return;
}

