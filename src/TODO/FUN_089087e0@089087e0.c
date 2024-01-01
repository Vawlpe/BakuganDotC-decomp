#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089087e0(uint *param_1,uint *param_2,uint param_3,char param_4)

{
  short sVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  byte bStack_57;
  ushort uStack_56;
  int local_50;
  uint local_4c;
  undefined2 *local_44;
  
  if (param_4 == '\0') {
    param_3 = param_1[1];
    param_1 = param_1 + 1 + *param_1;
    if (param_1 == (uint *)0x0) {
      return;
    }
    sVar1 = *(short *)(param_1 + 1);
  }
  else {
    sVar1 = *(short *)(param_1 + 1);
  }
  iVar14 = (sVar1 + 1) * 4;
  uVar2 = *(ushort *)((int)param_1 + iVar14 + 10);
  uVar7 = iVar14 + 0xc;
  uVar5 = (uint)uVar2;
  local_44 = (undefined2 *)0x0;
  if (uVar5 != 0) {
    FUN_089d8634();
    uVar4 = FUN_089d81a4();
    FUN_089d816c(1);
    local_44 = (undefined2 *)FUN_089d7d74(uVar5 << 2,0,0);
    FUN_089d816c(uVar4);
    FUN_089d866c();
    iVar14 = 0;
    puVar9 = local_44;
    if (uVar5 != 0) {
      do {
        uVar3 = ((undefined2 *)((int)param_1 + uVar7))[1];
        *puVar9 = *(undefined2 *)((int)param_1 + uVar7);
        puVar9[1] = uVar3;
        uVar7 = uVar7 + 4;
        iVar14 = iVar14 + 1;
        puVar9 = puVar9 + 2;
      } while (iVar14 < (int)(uint)uVar2);
    }
  }
  local_4c = 0;
  local_50 = 0;
  puVar15 = param_2;
  puVar16 = param_2;
  puVar17 = param_2;
  puVar18 = param_2;
  puVar19 = param_2;
  if (0 < *(short *)(param_1 + 1)) {
    do {
      if (param_3 <= uVar7) break;
      uVar5 = *(uint *)((int)param_1 + uVar7 + 4);
      bStack_57 = (byte)(uVar5 >> 8);
      uVar7 = uVar7 + 0xc;
      if (bStack_57 < 6) {
        uStack_56 = (ushort)(uVar5 >> 0x10);
        uVar6 = (uint)uStack_56;
        if (bStack_57 == 1) {
          puVar18[0x18] = uVar6;
          if (uVar6 != 0) {
            uVar6 = puVar18[0x19];
            if (uVar6 != 0) {
              FUN_089d8634();
              FUN_089d7fd8(uVar6,0,0);
              FUN_089d866c();
              puVar18[0x19] = 0;
            }
            FUN_089d8634();
            uVar4 = FUN_089d81a4();
            FUN_089d816c(1);
            uVar5 = FUN_089d7d74((uVar5 >> 0x10) * 0x38,0,0);
            FUN_089d816c(uVar4);
            FUN_089d866c();
            puVar18[0x19] = uVar5;
          }
          iVar8 = 0;
          iVar14 = 0;
          if (uStack_56 != 0) {
            do {
              puVar10 = (undefined4 *)((int)param_1 + uVar7);
              uVar12 = puVar10[1];
              puVar11 = (undefined4 *)(puVar18[0x19] + iVar14);
              uVar13 = puVar10[2];
              *puVar11 = *puVar10;
              uVar4 = puVar10[3];
              puVar11[1] = uVar12;
              uVar12 = puVar10[4];
              puVar11[2] = uVar13;
              uVar13 = puVar10[5];
              puVar11[3] = uVar4;
              uVar4 = puVar10[6];
              puVar11[4] = uVar12;
              uVar12 = puVar10[7];
              puVar11[5] = uVar13;
              uVar13 = puVar10[8];
              uVar20 = puVar10[10];
              puVar11[6] = uVar4;
              uVar4 = puVar10[9];
              puVar11[7] = uVar12;
              uVar12 = puVar10[0xb];
              puVar11[8] = uVar13;
              uVar13 = puVar10[0xc];
              puVar11[9] = uVar4;
              uVar4 = puVar10[0xd];
              puVar11[10] = uVar20;
              puVar11[0xb] = uVar12;
              puVar11[0xc] = uVar13;
              puVar11[0xd] = uVar4;
              iVar8 = iVar8 + 1;
              uVar7 = uVar7 + 0x38;
              iVar14 = iVar14 + 0x38;
            } while (iVar8 < (int)(uint)uStack_56);
          }
          puVar18 = puVar18 + 2;
        }
        else if (bStack_57 == 2) {
          puVar17[0x28] = uVar6;
          if (uVar6 != 0) {
            uVar5 = puVar17[0x29];
            if (uVar5 != 0) {
              FUN_089d8634();
              FUN_089d7fd8(uVar5,0,0);
              FUN_089d866c();
              puVar17[0x29] = 0;
            }
            FUN_089d8634();
            uVar4 = FUN_089d81a4();
            FUN_089d816c(1);
            uVar5 = FUN_089d7d74((uint)uStack_56 * 0x30,0,0);
            FUN_089d816c(uVar4);
            FUN_089d866c();
            puVar17[0x29] = uVar5;
          }
          iVar8 = 0;
          iVar14 = 0;
          if (uStack_56 != 0) {
            do {
              puVar10 = (undefined4 *)((int)param_1 + uVar7);
              uVar12 = puVar10[1];
              uVar13 = puVar10[2];
              puVar11 = (undefined4 *)(puVar17[0x29] + iVar14);
              uVar21 = puVar10[4];
              *puVar11 = *puVar10;
              uVar4 = puVar10[3];
              puVar11[1] = uVar12;
              puVar11[2] = uVar13;
              uVar12 = puVar10[5];
              puVar11[3] = uVar4;
              uVar4 = puVar10[6];
              uVar20 = puVar10[8];
              puVar11[4] = uVar21;
              uVar13 = puVar10[7];
              puVar11[5] = uVar12;
              uVar21 = puVar10[9];
              puVar11[6] = uVar4;
              uVar4 = puVar10[10];
              puVar11[7] = uVar13;
              puVar11[8] = uVar20;
              uVar12 = puVar10[0xb];
              puVar11[9] = uVar21;
              puVar11[10] = uVar4;
              puVar11[0xb] = uVar12;
              iVar8 = iVar8 + 1;
              uVar7 = uVar7 + 0x30;
              iVar14 = iVar14 + 0x30;
            } while (iVar8 < (int)(uint)uStack_56);
          }
          puVar17 = puVar17 + 2;
        }
        else if (bStack_57 == 3) {
          puVar16[0x38] = uVar6;
          if (uVar6 != 0) {
            uVar5 = puVar16[0x39];
            if (uVar5 != 0) {
              FUN_089d8634();
              FUN_089d7fd8(uVar5,0,0);
              FUN_089d866c();
              puVar16[0x39] = 0;
            }
            FUN_089d8634();
            uVar4 = FUN_089d81a4();
            FUN_089d816c(1);
            uVar5 = FUN_089d7d74((uint)uStack_56 * 0x38,0,0);
            FUN_089d816c(uVar4);
            FUN_089d866c();
            puVar16[0x39] = uVar5;
          }
          iVar8 = 0;
          iVar14 = 0;
          if (uStack_56 != 0) {
            do {
              puVar10 = (undefined4 *)((int)param_1 + uVar7);
              uVar12 = puVar10[1];
              puVar11 = (undefined4 *)(puVar16[0x39] + iVar14);
              uVar13 = puVar10[2];
              *puVar11 = *puVar10;
              uVar4 = puVar10[3];
              puVar11[1] = uVar12;
              uVar12 = puVar10[4];
              puVar11[2] = uVar13;
              uVar13 = puVar10[5];
              puVar11[3] = uVar4;
              uVar4 = puVar10[6];
              puVar11[4] = uVar12;
              uVar12 = puVar10[7];
              puVar11[5] = uVar13;
              uVar13 = puVar10[8];
              uVar20 = puVar10[10];
              puVar11[6] = uVar4;
              uVar4 = puVar10[9];
              puVar11[7] = uVar12;
              puVar11[8] = uVar13;
              uVar13 = puVar10[0xb];
              puVar11[9] = uVar4;
              uVar12 = puVar10[0xc];
              puVar11[10] = uVar20;
              uVar4 = puVar10[0xd];
              puVar11[0xb] = uVar13;
              puVar11[0xc] = uVar12;
              puVar11[0xd] = uVar4;
              iVar8 = iVar8 + 1;
              uVar7 = uVar7 + 0x38;
              iVar14 = iVar14 + 0x38;
            } while (iVar8 < (int)(uint)uStack_56);
          }
          puVar16 = puVar16 + 2;
        }
        else if (bStack_57 == 4) {
          puVar15[0x48] = uVar6;
          if (uVar6 != 0) {
            uVar5 = puVar15[0x49];
            if (uVar5 != 0) {
              FUN_089d8634();
              FUN_089d7fd8(uVar5,0,0);
              FUN_089d866c();
              puVar15[0x49] = 0;
            }
            FUN_089d8634();
            uVar4 = FUN_089d81a4();
            FUN_089d816c(1);
            uVar5 = FUN_089d7d74((uint)uStack_56 * 0x30,0,0);
            FUN_089d816c(uVar4);
            FUN_089d866c();
            puVar15[0x49] = uVar5;
          }
          iVar8 = 0;
          iVar14 = 0;
          if (uStack_56 != 0) {
            do {
              puVar10 = (undefined4 *)((int)param_1 + uVar7);
              uVar12 = puVar10[1];
              uVar13 = puVar10[2];
              puVar11 = (undefined4 *)(puVar15[0x49] + iVar14);
              uVar21 = puVar10[4];
              *puVar11 = *puVar10;
              uVar4 = puVar10[3];
              puVar11[1] = uVar12;
              puVar11[2] = uVar13;
              uVar12 = puVar10[5];
              puVar11[3] = uVar4;
              uVar4 = puVar10[6];
              uVar20 = puVar10[8];
              puVar11[4] = uVar21;
              uVar13 = puVar10[7];
              puVar11[5] = uVar12;
              puVar11[6] = uVar4;
              uVar12 = puVar10[9];
              puVar11[7] = uVar13;
              uVar13 = puVar10[10];
              puVar11[8] = uVar20;
              uVar4 = puVar10[0xb];
              puVar11[9] = uVar12;
              puVar11[10] = uVar13;
              puVar11[0xb] = uVar4;
              iVar8 = iVar8 + 1;
              uVar7 = uVar7 + 0x30;
              iVar14 = iVar14 + 0x30;
            } while (iVar8 < (int)(uint)uStack_56);
          }
          puVar15 = puVar15 + 2;
        }
        else if (bStack_57 == 5) {
          puVar19[0x58] = uVar6;
          if (uVar6 != 0) {
            uVar5 = puVar19[0x59];
            if (uVar5 != 0) {
              FUN_089d8634();
              FUN_089d7fd8(uVar5,0,0);
              FUN_089d866c();
              puVar19[0x59] = 0;
            }
            FUN_089d8634();
            uVar4 = FUN_089d81a4();
            FUN_089d816c(1);
            uVar5 = FUN_089d7d74((uint)uStack_56 << 4,0,0);
            FUN_089d816c(uVar4);
            FUN_089d866c();
            puVar19[0x59] = uVar5;
          }
          iVar14 = 0;
          iVar8 = 0;
          if (uStack_56 != 0) {
            do {
              puVar10 = (undefined4 *)((int)param_1 + uVar7);
              uVar12 = puVar10[1];
              puVar11 = (undefined4 *)(puVar19[0x59] + iVar8);
              uVar13 = puVar10[2];
              *puVar11 = *puVar10;
              uVar4 = puVar10[3];
              puVar11[1] = uVar12;
              puVar11[2] = uVar13;
              puVar11[3] = uVar4;
              iVar14 = iVar14 + 1;
              uVar7 = uVar7 + 0x10;
              iVar8 = iVar8 + 0x10;
            } while (iVar14 < (int)(uint)uStack_56);
          }
          puVar19 = puVar19 + 2;
        }
        else {
          *param_2 = uVar6;
          local_4c = local_4c + 1;
          param_2[1] = local_4c;
          uVar5 = param_2[2];
          if ((uStack_56 != 0) || (uVar5 == 0)) {
            if (uVar5 != 0) {
              FUN_089d8634();
              FUN_089d7fd8(uVar5,0,0);
              FUN_089d866c();
              param_2[2] = 0;
            }
            FUN_089d8634();
            uVar4 = FUN_089d81a4();
            FUN_089d816c(1);
            uVar5 = FUN_089d7d74((uint)uStack_56 * 0x34,0,0);
            FUN_089d816c(uVar4);
            FUN_089d866c();
            param_2[2] = uVar5;
          }
          if (uStack_56 != 0) {
            iVar14 = 0;
            iVar8 = 0;
            if (uStack_56 != 0) {
              do {
                puVar10 = (undefined4 *)((int)param_1 + uVar7);
                uVar12 = puVar10[1];
                puVar11 = (undefined4 *)(param_2[2] + iVar8);
                uVar13 = puVar10[2];
                *puVar11 = *puVar10;
                uVar4 = puVar10[3];
                puVar11[1] = uVar12;
                uVar12 = puVar10[4];
                puVar11[2] = uVar13;
                uVar13 = puVar10[5];
                puVar11[3] = uVar4;
                uVar4 = puVar10[6];
                puVar11[4] = uVar12;
                uVar12 = puVar10[7];
                puVar11[5] = uVar13;
                uVar13 = puVar10[8];
                uVar20 = puVar10[10];
                puVar11[6] = uVar4;
                uVar4 = puVar10[9];
                puVar11[7] = uVar12;
                puVar11[8] = uVar13;
                uVar12 = puVar10[0xb];
                puVar11[9] = uVar4;
                uVar4 = puVar10[0xc];
                puVar11[10] = uVar20;
                puVar11[0xb] = uVar12;
                puVar11[0xc] = uVar4;
                iVar14 = iVar14 + 1;
                uVar7 = uVar7 + 0x34;
                iVar8 = iVar8 + 0x34;
              } while (iVar14 < (int)(uint)uStack_56);
            }
          }
          param_2 = param_2 + 3;
        }
      }
      local_50 = local_50 + 1;
    } while (local_50 < *(short *)(param_1 + 1));
  }
  if (local_44 != (undefined2 *)0x0) {
    FUN_089d8634();
    FUN_089d7fd8(local_44,0,0);
    FUN_089d866c();
  }
  return;
}

