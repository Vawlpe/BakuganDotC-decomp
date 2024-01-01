#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088fa84c(int **param_1,byte *param_2)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  uint *puVar7;
  undefined2 uVar8;
  float fVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  byte *pbVar15;
  int *piVar16;
  uint in_V72;
  uint in_V76;
  uint in_V7A;
  uint in_V7E;
  undefined local_a0;
  undefined uStack_9f;
  undefined local_9e;
  undefined uStack_9d;
  undefined local_9c;
  undefined uStack_9b;
  undefined local_9a;
  undefined uStack_99;
  undefined local_98;
  undefined uStack_97;
  undefined local_96;
  undefined uStack_95;
  undefined local_94;
  undefined uStack_93;
  undefined local_92;
  undefined uStack_91;
  undefined local_84;
  undefined uStack_83;
  int local_74;
  byte *local_68;
  int local_64;
  
  local_64 = 0;
  local_68 = param_2;
  do {
    uVar14 = (uint)local_68[1] << 0x10 | (uint)*local_68 << 0x18 |
             (uint)CONCAT11(local_68[2],local_68[3]);
    if (uVar14 == 0) break;
    pbVar15 = param_2 + uVar14;
    uVar14 = (uint)pbVar15[1] << 0x10 | (uint)*pbVar15 << 0x18 |
             (uint)CONCAT11(pbVar15[2],pbVar15[3]);
    pbVar15 = pbVar15 + 4;
    piVar16 = (int *)0x0;
    if (uVar14 != 0) {
      FUN_089d8634();
      uVar4 = FUN_089d81a4();
      FUN_089d816c(1);
      piVar5 = (int *)FUN_089d7d74(0xc,0,0);
      FUN_089d816c(uVar4);
      FUN_089d866c();
      piVar16 = (int *)0x0;
      if (piVar5 != (int *)0x0) {
        FUN_089d8634();
        uVar4 = FUN_089d81a4();
        FUN_089d816c(1);
        iVar6 = FUN_089d7d74(uVar14 << 2,0,0);
        FUN_089d816c(uVar4);
        FUN_089d866c();
        *piVar5 = iVar6;
        piVar5[1] = uVar14;
        piVar5[2] = 0;
        piVar16 = piVar5;
      }
    }
    local_74 = 0;
    if (0 < (int)uVar14) {
      do {
        FUN_089d8634();
        uVar4 = FUN_089d81a4();
        FUN_089d816c(1);
        puVar7 = (uint *)FUN_089d7d74(0x70,0,0);
        FUN_089d816c(uVar4);
        FUN_089d866c();
        if (puVar7 == (uint *)0x0) {
          iVar6 = piVar16[2];
          puVar7 = (uint *)0x0;
        }
        else {
          *puVar7 = in_V72;
          puVar7[1] = in_V76;
          puVar7[2] = in_V7A;
          puVar7[3] = in_V7E;
          puVar7[7] = 0;
          puVar7[6] = 0;
          puVar7[5] = 0;
          puVar7[4] = 0;
          puVar7[8] = in_V72;
          puVar7[9] = in_V76;
          puVar7[10] = in_V7A;
          puVar7[0xb] = in_V7E;
          FUN_089d8634();
          uVar4 = FUN_089d81a4();
          FUN_089d816c(1);
          uVar10 = FUN_089d7d74(0x14,0,0);
          FUN_089d816c(uVar4);
          FUN_089d866c();
          puVar7[0xc] = uVar10;
          puVar7[0xd] = 10;
          puVar7[0xe] = 0;
          puVar7[0x14] = 0x4079999a;
          puVar7[0x15] = 0x46ea6000;
          iVar6 = piVar16[2];
        }
        iVar11 = piVar16[1];
        iVar13 = iVar11 * 2;
        if (iVar6 < iVar11) {
LAB_088faba0:
          bVar2 = iVar6 < iVar11;
        }
        else {
          bVar2 = iVar6 < iVar11;
          if (iVar13 != 0) {
            FUN_089d8634();
            uVar4 = FUN_089d81a4();
            FUN_089d816c(1);
            iVar6 = FUN_089d7d74(iVar11 << 3,0,0);
            FUN_089d816c(uVar4);
            FUN_089d866c();
            if (iVar13 < piVar16[2]) {
              piVar16[2] = iVar13;
            }
            memcpy_jak(iVar6,*piVar16,piVar16[2] << 2);
            iVar11 = *piVar16;
            piVar16[1] = iVar13;
            if (iVar11 != 0) {
              FUN_089d8634();
              FUN_089d7fd8(iVar11,0,0);
              FUN_089d866c();
              *piVar16 = 0;
            }
            *piVar16 = iVar6;
            iVar6 = piVar16[2];
            iVar11 = piVar16[1];
            goto LAB_088faba0;
          }
        }
        if (bVar2) {
          *(uint **)(*piVar16 + iVar6 * 4) = puVar7;
          piVar16[2] = piVar16[2] + 1;
          bVar1 = pbVar15[1];
        }
        else {
          bVar1 = pbVar15[1];
        }
        if (DAT_08b00944 == 0) {
          DAT_08b00944 = 1;
          DAT_08b00940 = 0;
        }
        *puVar7 = (uint)bVar1 << 0x10 | (uint)*pbVar15 << 0x18 |
                  (uint)CONCAT11(pbVar15[2],pbVar15[3]);
        if (DAT_08b00944 == 0) {
          DAT_08b00944 = 1;
          DAT_08b00940 = 0;
        }
        puVar7[1] = (uint)pbVar15[5] << 0x10 | (uint)pbVar15[4] << 0x18 |
                    (uint)CONCAT11(pbVar15[6],pbVar15[7]);
        if (DAT_08b00944 == 0) {
          DAT_08b00944 = 1;
          DAT_08b00940 = 0;
        }
        puVar7[2] = (uint)pbVar15[9] << 0x10 | (uint)pbVar15[8] << 0x18 |
                    (uint)CONCAT11(pbVar15[10],pbVar15[0xb]);
        if (DAT_08b00ba0 == 0) {
          DAT_08b00ba0 = 1;
          DAT_08b00b9c = 0;
        }
        puVar7[4] = (uint)pbVar15[0xd] << 0x10 | (uint)pbVar15[0xc] << 0x18 |
                    (uint)CONCAT11(pbVar15[0xe],pbVar15[0xf]);
        if (DAT_08b00ba0 == 0) {
          DAT_08b00ba0 = 1;
          DAT_08b00b9c = 0;
        }
        puVar7[5] = (uint)pbVar15[0x11] << 0x10 | (uint)pbVar15[0x10] << 0x18 |
                    (uint)CONCAT11(pbVar15[0x12],pbVar15[0x13]);
        if (DAT_08b00ba0 == 0) {
          DAT_08b00ba0 = 1;
          DAT_08b00b9c = 0;
        }
        puVar7[6] = (uint)pbVar15[0x15] << 0x10 | (uint)pbVar15[0x14] << 0x18 |
                    (uint)CONCAT11(pbVar15[0x16],pbVar15[0x17]);
        if (DAT_08b00ba0 == 0) {
          DAT_08b00ba0 = 1;
          DAT_08b00b9c = 0;
        }
        puVar7[7] = (uint)pbVar15[0x19] << 0x10 | (uint)pbVar15[0x18] << 0x18 |
                    (uint)CONCAT11(pbVar15[0x1a],pbVar15[0x1b]);
        puVar7[0x10] = (uint)pbVar15[0x29] << 0x10 | (uint)pbVar15[0x28] << 0x18 |
                       (uint)CONCAT11(pbVar15[0x2a],pbVar15[0x2b]);
        puVar7[0x11] = (uint)pbVar15[0x2d] << 0x10 | (uint)pbVar15[0x2c] << 0x18 |
                       (uint)CONCAT11(pbVar15[0x2e],pbVar15[0x2f]);
        fVar9 = (float)((uint)pbVar15[0x31] << 0x10 | (uint)pbVar15[0x30] << 0x18 |
                       (uint)CONCAT11(pbVar15[0x32],pbVar15[0x33]));
        puVar7[0x12] = (uint)fVar9;
        if (fVar9 < 1.192093e-07) {
          puVar7[0x12] = 0x44160000;
        }
        puVar7[0x14] = (uint)pbVar15[0x39] << 0x10 | (uint)pbVar15[0x38] << 0x18 |
                       (uint)CONCAT11(pbVar15[0x3a],pbVar15[0x3b]);
        puVar7[0x15] = (uint)pbVar15[0x3d] << 0x10 | (uint)pbVar15[0x3c] << 0x18 |
                       (uint)CONCAT11(pbVar15[0x3e],pbVar15[0x3f]);
        local_a0 = (undefined)*(undefined2 *)(pbVar15 + 0x40);
        uStack_9f = (undefined)((ushort)*(undefined2 *)(pbVar15 + 0x40) >> 8);
        uVar10 = puVar7[0xe];
        uVar12 = puVar7[0xd];
        bVar2 = (int)uVar10 < (int)uVar12;
        if (bVar2) {
LAB_088fb004:
          *(ushort *)(puVar7[0xc] + uVar10 * 2) = CONCAT11(local_a0,uStack_9f);
          puVar7[0xe] = puVar7[0xe] + 1;
          uVar8 = *(undefined2 *)(pbVar15 + 0x42);
        }
        else {
          uVar3 = uVar12 * 2;
          if (uVar3 != 0) {
            FUN_089d8634();
            uVar4 = FUN_089d81a4();
            FUN_089d816c(1);
            uVar12 = FUN_089d7d74(uVar12 * 4,0,0);
            FUN_089d816c(uVar4);
            FUN_089d866c();
            uVar10 = puVar7[0xe];
            if ((int)uVar3 < (int)puVar7[0xe]) {
              puVar7[0xe] = uVar3;
              uVar10 = uVar3;
            }
            memcpy_jak(uVar12,puVar7[0xc],uVar10 * 2);
            uVar10 = puVar7[0xc];
            puVar7[0xd] = uVar3;
            if (uVar10 != 0) {
              FUN_089d8634();
              FUN_089d7fd8(uVar10,0,0);
              FUN_089d866c();
              puVar7[0xc] = 0;
            }
            uVar10 = puVar7[0xe];
            puVar7[0xc] = uVar12;
            bVar2 = (int)uVar10 < (int)puVar7[0xd];
          }
          if (bVar2) goto LAB_088fb004;
          uVar8 = *(undefined2 *)(pbVar15 + 0x42);
        }
        local_9e = (undefined)uVar8;
        uStack_9d = (undefined)((ushort)uVar8 >> 8);
        uVar10 = puVar7[0xe];
        uVar12 = puVar7[0xd];
        bVar2 = (int)uVar10 < (int)uVar12;
        if (bVar2) {
LAB_088fb11c:
          *(ushort *)(puVar7[0xc] + uVar10 * 2) = CONCAT11(local_9e,uStack_9d);
          puVar7[0xe] = puVar7[0xe] + 1;
          uVar8 = *(undefined2 *)(pbVar15 + 0x44);
        }
        else {
          uVar3 = uVar12 * 2;
          if (uVar3 != 0) {
            FUN_089d8634();
            uVar4 = FUN_089d81a4();
            FUN_089d816c(1);
            uVar12 = FUN_089d7d74(uVar12 * 4,0,0);
            FUN_089d816c(uVar4);
            FUN_089d866c();
            uVar10 = puVar7[0xe];
            if ((int)uVar3 < (int)puVar7[0xe]) {
              puVar7[0xe] = uVar3;
              uVar10 = uVar3;
            }
            memcpy_jak(uVar12,puVar7[0xc],uVar10 * 2);
            uVar10 = puVar7[0xc];
            puVar7[0xd] = uVar3;
            if (uVar10 != 0) {
              FUN_089d8634();
              FUN_089d7fd8(uVar10,0,0);
              FUN_089d866c();
              puVar7[0xc] = 0;
            }
            uVar10 = puVar7[0xe];
            puVar7[0xc] = uVar12;
            bVar2 = (int)uVar10 < (int)puVar7[0xd];
          }
          if (bVar2) goto LAB_088fb11c;
          uVar8 = *(undefined2 *)(pbVar15 + 0x44);
        }
        local_9c = (undefined)uVar8;
        uStack_9b = (undefined)((ushort)uVar8 >> 8);
        uVar10 = puVar7[0xe];
        uVar12 = puVar7[0xd];
        bVar2 = (int)uVar10 < (int)uVar12;
        if (bVar2) {
LAB_088fb234:
          *(ushort *)(puVar7[0xc] + uVar10 * 2) = CONCAT11(local_9c,uStack_9b);
          puVar7[0xe] = puVar7[0xe] + 1;
          uVar8 = *(undefined2 *)(pbVar15 + 0x46);
        }
        else {
          uVar3 = uVar12 * 2;
          if (uVar3 != 0) {
            FUN_089d8634();
            uVar4 = FUN_089d81a4();
            FUN_089d816c(1);
            uVar12 = FUN_089d7d74(uVar12 * 4,0,0);
            FUN_089d816c(uVar4);
            FUN_089d866c();
            uVar10 = puVar7[0xe];
            if ((int)uVar3 < (int)puVar7[0xe]) {
              puVar7[0xe] = uVar3;
              uVar10 = uVar3;
            }
            memcpy_jak(uVar12,puVar7[0xc],uVar10 * 2);
            uVar10 = puVar7[0xc];
            puVar7[0xd] = uVar3;
            if (uVar10 != 0) {
              FUN_089d8634();
              FUN_089d7fd8(uVar10,0,0);
              FUN_089d866c();
              puVar7[0xc] = 0;
            }
            uVar10 = puVar7[0xe];
            puVar7[0xc] = uVar12;
            bVar2 = (int)uVar10 < (int)puVar7[0xd];
          }
          if (bVar2) goto LAB_088fb234;
          uVar8 = *(undefined2 *)(pbVar15 + 0x46);
        }
        local_9a = (undefined)uVar8;
        uStack_99 = (undefined)((ushort)uVar8 >> 8);
        uVar10 = puVar7[0xe];
        uVar12 = puVar7[0xd];
        bVar2 = (int)uVar10 < (int)uVar12;
        if (bVar2) {
LAB_088fb34c:
          *(ushort *)(puVar7[0xc] + uVar10 * 2) = CONCAT11(local_9a,uStack_99);
          puVar7[0xe] = puVar7[0xe] + 1;
          uVar8 = *(undefined2 *)(pbVar15 + 0x48);
        }
        else {
          uVar3 = uVar12 * 2;
          if (uVar3 != 0) {
            FUN_089d8634();
            uVar4 = FUN_089d81a4();
            FUN_089d816c(1);
            uVar12 = FUN_089d7d74(uVar12 * 4,0,0);
            FUN_089d816c(uVar4);
            FUN_089d866c();
            uVar10 = puVar7[0xe];
            if ((int)uVar3 < (int)puVar7[0xe]) {
              puVar7[0xe] = uVar3;
              uVar10 = uVar3;
            }
            memcpy_jak(uVar12,puVar7[0xc],uVar10 * 2);
            uVar10 = puVar7[0xc];
            puVar7[0xd] = uVar3;
            if (uVar10 != 0) {
              FUN_089d8634();
              FUN_089d7fd8(uVar10,0,0);
              FUN_089d866c();
              puVar7[0xc] = 0;
            }
            uVar10 = puVar7[0xe];
            puVar7[0xc] = uVar12;
            bVar2 = (int)uVar10 < (int)puVar7[0xd];
          }
          if (bVar2) goto LAB_088fb34c;
          uVar8 = *(undefined2 *)(pbVar15 + 0x48);
        }
        local_98 = (undefined)uVar8;
        uStack_97 = (undefined)((ushort)uVar8 >> 8);
        uVar10 = puVar7[0xe];
        uVar12 = puVar7[0xd];
        bVar2 = (int)uVar10 < (int)uVar12;
        if (bVar2) {
LAB_088fb464:
          *(ushort *)(puVar7[0xc] + uVar10 * 2) = CONCAT11(local_98,uStack_97);
          puVar7[0xe] = puVar7[0xe] + 1;
          uVar8 = *(undefined2 *)(pbVar15 + 0x4a);
        }
        else {
          uVar3 = uVar12 * 2;
          if (uVar3 != 0) {
            FUN_089d8634();
            uVar4 = FUN_089d81a4();
            FUN_089d816c(1);
            uVar12 = FUN_089d7d74(uVar12 * 4,0,0);
            FUN_089d816c(uVar4);
            FUN_089d866c();
            uVar10 = puVar7[0xe];
            if ((int)uVar3 < (int)puVar7[0xe]) {
              puVar7[0xe] = uVar3;
              uVar10 = uVar3;
            }
            memcpy_jak(uVar12,puVar7[0xc],uVar10 * 2);
            uVar10 = puVar7[0xc];
            puVar7[0xd] = uVar3;
            if (uVar10 != 0) {
              FUN_089d8634();
              FUN_089d7fd8(uVar10,0,0);
              FUN_089d866c();
              puVar7[0xc] = 0;
            }
            uVar10 = puVar7[0xe];
            puVar7[0xc] = uVar12;
            bVar2 = (int)uVar10 < (int)puVar7[0xd];
          }
          if (bVar2) goto LAB_088fb464;
          uVar8 = *(undefined2 *)(pbVar15 + 0x4a);
        }
        local_96 = (undefined)uVar8;
        uStack_95 = (undefined)((ushort)uVar8 >> 8);
        uVar10 = puVar7[0xe];
        uVar12 = puVar7[0xd];
        bVar2 = (int)uVar10 < (int)uVar12;
        if (bVar2) {
LAB_088fb57c:
          *(ushort *)(puVar7[0xc] + uVar10 * 2) = CONCAT11(local_96,uStack_95);
          puVar7[0xe] = puVar7[0xe] + 1;
          uVar8 = *(undefined2 *)(pbVar15 + 0x4c);
        }
        else {
          uVar3 = uVar12 * 2;
          if (uVar3 != 0) {
            FUN_089d8634();
            uVar4 = FUN_089d81a4();
            FUN_089d816c(1);
            uVar12 = FUN_089d7d74(uVar12 * 4,0,0);
            FUN_089d816c(uVar4);
            FUN_089d866c();
            uVar10 = puVar7[0xe];
            if ((int)uVar3 < (int)puVar7[0xe]) {
              puVar7[0xe] = uVar3;
              uVar10 = uVar3;
            }
            memcpy_jak(uVar12,puVar7[0xc],uVar10 * 2);
            uVar10 = puVar7[0xc];
            puVar7[0xd] = uVar3;
            if (uVar10 != 0) {
              FUN_089d8634();
              FUN_089d7fd8(uVar10,0,0);
              FUN_089d866c();
              puVar7[0xc] = 0;
            }
            uVar10 = puVar7[0xe];
            puVar7[0xc] = uVar12;
            bVar2 = (int)uVar10 < (int)puVar7[0xd];
          }
          if (bVar2) goto LAB_088fb57c;
          uVar8 = *(undefined2 *)(pbVar15 + 0x4c);
        }
        local_94 = (undefined)uVar8;
        uStack_93 = (undefined)((ushort)uVar8 >> 8);
        uVar10 = puVar7[0xe];
        uVar12 = puVar7[0xd];
        bVar2 = (int)uVar10 < (int)uVar12;
        if (bVar2) {
LAB_088fb694:
          *(ushort *)(puVar7[0xc] + uVar10 * 2) = CONCAT11(local_94,uStack_93);
          puVar7[0xe] = puVar7[0xe] + 1;
          uVar8 = *(undefined2 *)(pbVar15 + 0x4e);
        }
        else {
          uVar3 = uVar12 * 2;
          if (uVar3 != 0) {
            FUN_089d8634();
            uVar4 = FUN_089d81a4();
            FUN_089d816c(1);
            uVar12 = FUN_089d7d74(uVar12 * 4,0,0);
            FUN_089d816c(uVar4);
            FUN_089d866c();
            uVar10 = puVar7[0xe];
            if ((int)uVar3 < (int)puVar7[0xe]) {
              puVar7[0xe] = uVar3;
              uVar10 = uVar3;
            }
            memcpy_jak(uVar12,puVar7[0xc],uVar10 * 2);
            uVar10 = puVar7[0xc];
            puVar7[0xd] = uVar3;
            if (uVar10 != 0) {
              FUN_089d8634();
              FUN_089d7fd8(uVar10,0,0);
              FUN_089d866c();
              puVar7[0xc] = 0;
            }
            uVar10 = puVar7[0xe];
            puVar7[0xc] = uVar12;
            bVar2 = (int)uVar10 < (int)puVar7[0xd];
          }
          if (bVar2) goto LAB_088fb694;
          uVar8 = *(undefined2 *)(pbVar15 + 0x4e);
        }
        local_92 = (undefined)uVar8;
        uStack_91 = (undefined)((ushort)uVar8 >> 8);
        uVar10 = puVar7[0xe];
        uVar12 = puVar7[0xd];
        bVar2 = (int)uVar10 < (int)uVar12;
        if (bVar2) {
LAB_088fb7ac:
          *(ushort *)(puVar7[0xc] + uVar10 * 2) = CONCAT11(local_92,uStack_91);
          puVar7[0xe] = puVar7[0xe] + 1;
        }
        else {
          uVar3 = uVar12 * 2;
          if (uVar3 != 0) {
            FUN_089d8634();
            uVar4 = FUN_089d81a4();
            FUN_089d816c(1);
            uVar12 = FUN_089d7d74(uVar12 * 4,0,0);
            FUN_089d816c(uVar4);
            FUN_089d866c();
            uVar10 = puVar7[0xe];
            if ((int)uVar3 < (int)puVar7[0xe]) {
              puVar7[0xe] = uVar3;
              uVar10 = uVar3;
            }
            memcpy_jak(uVar12,puVar7[0xc],uVar10 * 2);
            uVar10 = puVar7[0xc];
            puVar7[0xd] = uVar3;
            if (uVar10 != 0) {
              FUN_089d8634();
              FUN_089d7fd8(uVar10,0,0);
              FUN_089d866c();
              puVar7[0xc] = 0;
            }
            uVar10 = puVar7[0xe];
            puVar7[0xc] = uVar12;
            bVar2 = (int)uVar10 < (int)puVar7[0xd];
          }
          if (bVar2) goto LAB_088fb7ac;
        }
        if (DAT_08b00944 == 0) {
          DAT_08b00944 = 1;
          DAT_08b00940 = 0;
        }
        puVar7[8] = (uint)pbVar15[0x1d] << 0x10 | (uint)pbVar15[0x1c] << 0x18 |
                    (uint)CONCAT11(pbVar15[0x1e],pbVar15[0x1f]);
        if (DAT_08b00944 == 0) {
          DAT_08b00944 = 1;
          DAT_08b00940 = 0;
        }
        puVar7[9] = (uint)pbVar15[0x21] << 0x10 | (uint)pbVar15[0x20] << 0x18 |
                    (uint)CONCAT11(pbVar15[0x22],pbVar15[0x23]);
        if (DAT_08b00944 == 0) {
          DAT_08b00944 = 1;
          DAT_08b00940 = 0;
        }
        puVar7[10] = (uint)pbVar15[0x25] << 0x10 | (uint)pbVar15[0x24] << 0x18 |
                     (uint)CONCAT11(pbVar15[0x26],pbVar15[0x27]);
        local_84 = (undefined)*(undefined2 *)(pbVar15 + 0x50);
        uStack_83 = (undefined)((ushort)*(undefined2 *)(pbVar15 + 0x50) >> 8);
        puVar7[0xf] = (int)CONCAT11(local_84,uStack_83);
        puVar7[0x13] = (uint)pbVar15[0x35] << 0x10 | (uint)pbVar15[0x34] << 0x18 |
                       (uint)CONCAT11(pbVar15[0x36],pbVar15[0x37]);
        puVar7[0x16] = (uint)pbVar15[0x52];
        puVar7[0x17] = (uint)pbVar15[0x53];
        *(bool *)((int)puVar7 + 0x61) = pbVar15[0x54] != 0;
        local_74 = local_74 + 1;
        pbVar15 = pbVar15 + 0x58;
      } while (local_74 < (int)uVar14);
    }
    iVar6 = (int)param_1[2];
    iVar13 = (int)param_1[1];
    bVar2 = iVar6 < iVar13;
    if (iVar13 <= iVar6) {
      iVar11 = iVar13 * 2;
      bVar2 = iVar6 < iVar13;
      if (iVar11 != 0) {
        FUN_089d8634();
        uVar4 = FUN_089d81a4();
        FUN_089d816c(1);
        iVar13 = FUN_089d7d74(iVar13 << 3,0,0);
        FUN_089d816c(uVar4);
        FUN_089d866c();
        iVar6 = (int)param_1[2];
        if (iVar11 < (int)param_1[2]) {
          param_1[2] = (int *)iVar11;
          iVar6 = iVar11;
        }
        memcpy_jak(iVar13,*param_1,iVar6 << 2);
        iVar6 = (int)*param_1;
        param_1[1] = (int *)iVar11;
        if (iVar6 != 0) {
          FUN_089d8634();
          FUN_089d7fd8(iVar6,0,0);
          FUN_089d866c();
          *param_1 = (int *)0x0;
        }
        *param_1 = (int *)iVar13;
        iVar6 = (int)param_1[2];
        bVar2 = iVar6 < (int)param_1[1];
      }
    }
    if (bVar2) {
      *(int **)((int)*param_1 + iVar6 * 4) = piVar16;
      param_1[2] = (int *)((int)param_1[2] + 1);
    }
    local_64 = local_64 + 1;
    local_68 = local_68 + 4;
  } while (local_64 < 8);
  if ((int)param_1[2] < 1) {
    memset_jak((undefined *)&DAT_08b00bac,0,4);
    iVar6 = DAT_08b00bac;
  }
  else {
    iVar6 = **param_1;
  }
  param_1[3] = (int *)iVar6;
  *(undefined *)(param_1 + 4) = 1;
  return;
}

