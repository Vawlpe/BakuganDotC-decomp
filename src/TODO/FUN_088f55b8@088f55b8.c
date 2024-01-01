#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f55b8(int **param_1,byte *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  undefined2 *puVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  undefined2 *puVar12;
  uint uVar13;
  int iVar14;
  byte *pbVar15;
  uint uVar16;
  byte *pbVar17;
  uint in_V72;
  uint in_V76;
  uint in_V7A;
  uint in_V7E;
  undefined local_7c;
  undefined uStack_7b;
  undefined local_7a;
  undefined uStack_79;
  int local_68;
  byte *local_5c;
  uint local_58;
  
  local_58 = 0;
  local_5c = param_2;
  do {
    uVar16 = (uint)local_5c[1] << 0x10 | (uint)*local_5c << 0x18 |
             (uint)CONCAT11(local_5c[2],local_5c[3]);
    if (uVar16 == 0) break;
    pbVar17 = param_2 + uVar16;
    uVar16 = (uint)pbVar17[1] << 0x10 | (uint)*pbVar17 << 0x18 |
             (uint)CONCAT11(pbVar17[2],pbVar17[3]);
    pbVar17 = pbVar17 + 4;
    piVar11 = (int *)0x0;
    if (uVar16 != 0) {
      FUN_089d8634();
      uVar2 = FUN_089d81a4();
      FUN_089d816c(1);
      piVar3 = (int *)FUN_089d7d74(0xc,0,0);
      FUN_089d816c(uVar2);
      FUN_089d866c();
      piVar11 = (int *)0x0;
      if (piVar3 != (int *)0x0) {
        FUN_089d8634();
        uVar2 = FUN_089d81a4();
        FUN_089d816c(1);
        iVar4 = FUN_089d7d74(uVar16 << 2,0,0);
        FUN_089d816c(uVar2);
        FUN_089d866c();
        *piVar3 = iVar4;
        piVar3[1] = uVar16;
        piVar3[2] = 0;
        piVar11 = piVar3;
      }
    }
    local_68 = 0;
    if (0 < (int)uVar16) {
      do {
        FUN_089d8634();
        uVar2 = FUN_089d81a4();
        FUN_089d816c(1);
        puVar5 = (uint *)FUN_089d7d74(0x60,0,0);
        FUN_089d816c(uVar2);
        FUN_089d866c();
        puVar8 = (uint *)0x0;
        if (puVar5 != (uint *)0x0) {
          *puVar5 = in_V72;
          puVar5[1] = in_V76;
          puVar5[2] = in_V7A;
          puVar5[3] = in_V7E;
          puVar5[7] = 0;
          puVar5[6] = 0;
          puVar5[5] = 0;
          puVar5[4] = 0;
          puVar5[8] = in_V72;
          puVar5[9] = in_V76;
          puVar5[10] = in_V7A;
          puVar5[0xb] = in_V7E;
          puVar5[0xc] = in_V72;
          puVar5[0xd] = in_V76;
          puVar5[0xe] = in_V7A;
          puVar5[0xf] = in_V7E;
          puVar5[0x10] = 2;
          FUN_089d8634();
          uVar2 = FUN_089d81a4();
          FUN_089d816c(1);
          uVar6 = FUN_089d7d74(0x28,0,0);
          FUN_089d816c(uVar2);
          FUN_089d866c();
          puVar5[0x11] = uVar6;
          puVar5[0x12] = 10;
          puVar5[0x13] = 0;
          *(undefined *)(puVar5 + 0x14) = 0;
          *(undefined *)((int)puVar5 + 0x51) = 0;
          puVar8 = puVar5;
        }
        if (DAT_08b00944 == 0) {
          DAT_08b00944 = 1;
          DAT_08b00940 = 0;
        }
        *puVar8 = (uint)pbVar17[1] << 0x10 | (uint)*pbVar17 << 0x18 |
                  (uint)CONCAT11(pbVar17[2],pbVar17[3]);
        if (DAT_08b00944 == 0) {
          DAT_08b00944 = 1;
          DAT_08b00940 = 0;
        }
        puVar8[1] = (uint)pbVar17[5] << 0x10 | (uint)pbVar17[4] << 0x18 |
                    (uint)CONCAT11(pbVar17[6],pbVar17[7]);
        if (DAT_08b00944 == 0) {
          DAT_08b00944 = 1;
          DAT_08b00940 = 0;
        }
        puVar8[2] = (uint)pbVar17[9] << 0x10 | (uint)pbVar17[8] << 0x18 |
                    (uint)CONCAT11(pbVar17[10],pbVar17[0xb]);
        if (DAT_08b00ba0 == 0) {
          DAT_08b00ba0 = 1;
          DAT_08b00b9c = 0;
        }
        puVar8[4] = (uint)pbVar17[0xd] << 0x10 | (uint)pbVar17[0xc] << 0x18 |
                    (uint)CONCAT11(pbVar17[0xe],pbVar17[0xf]);
        if (DAT_08b00ba0 == 0) {
          DAT_08b00ba0 = 1;
          DAT_08b00b9c = 0;
        }
        puVar8[5] = (uint)pbVar17[0x11] << 0x10 | (uint)pbVar17[0x10] << 0x18 |
                    (uint)CONCAT11(pbVar17[0x12],pbVar17[0x13]);
        if (DAT_08b00ba0 == 0) {
          DAT_08b00ba0 = 1;
          DAT_08b00b9c = 0;
        }
        puVar8[6] = (uint)pbVar17[0x15] << 0x10 | (uint)pbVar17[0x14] << 0x18 |
                    (uint)CONCAT11(pbVar17[0x16],pbVar17[0x17]);
        if (DAT_08b00ba0 == 0) {
          DAT_08b00ba0 = 1;
          DAT_08b00b9c = 0;
        }
        puVar8[7] = (uint)pbVar17[0x19] << 0x10 | (uint)pbVar17[0x18] << 0x18 |
                    (uint)CONCAT11(pbVar17[0x1a],pbVar17[0x1b]);
        if (DAT_08b00944 == 0) {
          DAT_08b00944 = 1;
          DAT_08b00940 = 0;
        }
        puVar8[0xc] = (uint)pbVar17[0x29] << 0x10 | (uint)pbVar17[0x28] << 0x18 |
                      (uint)CONCAT11(pbVar17[0x2a],pbVar17[0x2b]);
        if (DAT_08b00944 == 0) {
          DAT_08b00944 = 1;
          DAT_08b00940 = 0;
        }
        puVar8[0xd] = (uint)pbVar17[0x2d] << 0x10 | (uint)pbVar17[0x2c] << 0x18 |
                      (uint)CONCAT11(pbVar17[0x2e],pbVar17[0x2f]);
        if (DAT_08b00944 == 0) {
          DAT_08b00944 = 1;
          DAT_08b00940 = 0;
        }
        puVar8[0xe] = (uint)pbVar17[0x31] << 0x10 | (uint)pbVar17[0x30] << 0x18 |
                      (uint)CONCAT11(pbVar17[0x32],pbVar17[0x33]);
        if (DAT_08b00944 == 0) {
          DAT_08b00944 = 1;
          DAT_08b00940 = 0;
        }
        puVar8[8] = (uint)pbVar17[0x1d] << 0x10 | (uint)pbVar17[0x1c] << 0x18 |
                    (uint)CONCAT11(pbVar17[0x1e],pbVar17[0x1f]);
        if (DAT_08b00944 == 0) {
          DAT_08b00944 = 1;
          DAT_08b00940 = 0;
        }
        puVar8[9] = (uint)pbVar17[0x21] << 0x10 | (uint)pbVar17[0x20] << 0x18 |
                    (uint)CONCAT11(pbVar17[0x22],pbVar17[0x23]);
        if (DAT_08b00944 == 0) {
          DAT_08b00944 = 1;
          DAT_08b00940 = 0;
        }
        puVar8[10] = (uint)pbVar17[0x25] << 0x10 | (uint)pbVar17[0x24] << 0x18 |
                     (uint)CONCAT11(pbVar17[0x26],pbVar17[0x27]);
        iVar4 = 0;
        *(byte *)(puVar8 + 0x14) = pbVar17[0x4c];
        *(byte *)((int)puVar8 + 0x51) = pbVar17[0x4d];
        puVar8[0x10] = (uint)pbVar17[0x4e];
        pbVar15 = pbVar17;
        do {
          if (pbVar17[iVar4 + 0x48] != 0) {
            FUN_089d8634();
            uVar2 = FUN_089d81a4();
            FUN_089d816c(1);
            puVar7 = (undefined2 *)FUN_089d7d74(6,0,0);
            FUN_089d816c(uVar2);
            FUN_089d866c();
            puVar12 = (undefined2 *)0x0;
            if (puVar7 != (undefined2 *)0x0) {
              *puVar7 = 0xffff;
              puVar7[1] = 0xffff;
              *(undefined *)(puVar7 + 2) = 0;
              puVar12 = puVar7;
            }
            local_7c = (undefined)*(undefined2 *)(pbVar15 + 0x34);
            uStack_7b = (undefined)((ushort)*(undefined2 *)(pbVar15 + 0x34) >> 8);
            *puVar12 = CONCAT11(local_7c,uStack_7b);
            local_7a = (undefined)*(undefined2 *)(pbVar15 + 0x3c);
            uStack_79 = (undefined)((ushort)*(undefined2 *)(pbVar15 + 0x3c) >> 8);
            puVar12[1] = CONCAT11(local_7a,uStack_79);
            *(bool *)(puVar12 + 2) = pbVar17[iVar4 + 0x44] != 0;
            uVar9 = puVar8[0x13];
            uVar13 = puVar8[0x12];
            uVar6 = uVar13 * 2;
            if ((int)uVar9 < (int)uVar13) {
LAB_088f5dd8:
              bVar1 = (int)uVar9 < (int)uVar13;
            }
            else {
              bVar1 = (int)uVar9 < (int)uVar13;
              if (uVar6 != 0) {
                FUN_089d8634();
                uVar2 = FUN_089d81a4();
                FUN_089d816c(1);
                uVar13 = FUN_089d7d74(uVar13 << 3,0,0);
                FUN_089d816c(uVar2);
                FUN_089d866c();
                uVar9 = puVar8[0x13];
                if ((int)uVar6 < (int)puVar8[0x13]) {
                  puVar8[0x13] = uVar6;
                  uVar9 = uVar6;
                }
                memcpy_jak(uVar13,puVar8[0x11],uVar9 << 2);
                uVar9 = puVar8[0x11];
                puVar8[0x12] = uVar6;
                if (uVar9 != 0) {
                  FUN_089d8634();
                  FUN_089d7fd8(uVar9,0,0);
                  FUN_089d866c();
                  puVar8[0x11] = 0;
                }
                puVar8[0x11] = uVar13;
                uVar9 = puVar8[0x13];
                uVar13 = puVar8[0x12];
                goto LAB_088f5dd8;
              }
            }
            if (bVar1) {
              *(undefined2 **)(puVar8[0x11] + uVar9 * 4) = puVar12;
              puVar8[0x13] = puVar8[0x13] + 1;
            }
          }
          iVar4 = iVar4 + 1;
          pbVar15 = pbVar15 + 2;
        } while (iVar4 < 4);
        iVar14 = piVar11[2];
        iVar10 = piVar11[1];
        iVar4 = iVar10 * 2;
        if (iVar14 < iVar10) {
LAB_088f5ed8:
          bVar1 = iVar14 < iVar10;
        }
        else {
          bVar1 = iVar14 < iVar10;
          if (iVar4 != 0) {
            FUN_089d8634();
            uVar2 = FUN_089d81a4();
            FUN_089d816c(1);
            iVar10 = FUN_089d7d74(iVar10 << 3,0,0);
            FUN_089d816c(uVar2);
            FUN_089d866c();
            iVar14 = piVar11[2];
            if (iVar4 < iVar14) {
              piVar11[2] = iVar4;
              iVar14 = piVar11[2];
            }
            memcpy_jak(iVar10,*piVar11,iVar14 << 2);
            piVar11[1] = iVar4;
            iVar4 = *piVar11;
            if (iVar4 == 0) {
              *piVar11 = iVar10;
            }
            else {
              FUN_089d8634();
              FUN_089d7fd8(iVar4,0,0);
              FUN_089d866c();
              *piVar11 = 0;
              *piVar11 = iVar10;
            }
            iVar14 = piVar11[2];
            iVar10 = piVar11[1];
            goto LAB_088f5ed8;
          }
        }
        if (bVar1) {
          *(uint **)(*piVar11 + iVar14 * 4) = puVar8;
          piVar11[2] = piVar11[2] + 1;
        }
        local_68 = local_68 + 1;
        pbVar17 = pbVar17 + 0x50;
      } while (local_68 < (int)uVar16);
    }
    iVar4 = (int)param_1[2];
    iVar10 = (int)param_1[1];
    bVar1 = iVar4 < iVar10;
    if (iVar10 <= iVar4) {
      iVar14 = iVar10 * 2;
      bVar1 = iVar4 < iVar10;
      if (iVar14 != 0) {
        FUN_089d8634();
        uVar2 = FUN_089d81a4();
        FUN_089d816c(1);
        iVar10 = FUN_089d7d74(iVar10 << 3,0,0);
        FUN_089d816c(uVar2);
        FUN_089d866c();
        iVar4 = (int)param_1[2];
        if (iVar14 < (int)param_1[2]) {
          param_1[2] = (int *)iVar14;
          iVar4 = iVar14;
        }
        memcpy_jak(iVar10,*param_1,iVar4 << 2);
        iVar4 = (int)*param_1;
        param_1[1] = (int *)iVar14;
        if (iVar4 != 0) {
          FUN_089d8634();
          FUN_089d7fd8(iVar4,0,0);
          FUN_089d866c();
          *param_1 = (int *)0x0;
        }
        *param_1 = (int *)iVar10;
        iVar4 = (int)param_1[2];
        bVar1 = iVar4 < (int)param_1[1];
      }
    }
    if (bVar1) {
      *(int **)((int)*param_1 + iVar4 * 4) = piVar11;
      param_1[2] = (int *)((int)param_1[2] + 1);
    }
    local_58 = local_58 + 1;
    local_5c = local_5c + 4;
  } while (local_58 < 8);
  if ((int)param_1[2] < 1) {
    memset_jak((undefined *)&DAT_08b00fc4,0,4);
    iVar4 = DAT_08b00fc4;
  }
  else {
    iVar4 = **param_1;
  }
  param_1[3] = (int *)iVar4;
  *(undefined *)(param_1 + 4) = 1;
  return;
}

