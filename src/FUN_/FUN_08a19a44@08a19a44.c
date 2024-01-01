#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a19a44(int param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  ushort *puVar3;
  ushort uVar4;
  int *piVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  ushort *puVar10;
  uint *puVar11;
  ushort *puVar12;
  
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar2 = *(int *)(param_2 + 2);
  sVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x28) = 0;
  puVar12 = (ushort *)(iVar2 + (int)param_2);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  puVar10 = puVar12;
  if (-1 < sVar1) {
    puVar10 = (ushort *)((int)param_2 + *(int *)(param_2 + 4));
  }
  if (puVar10 < puVar12) {
LAB_08a19abc:
    do {
      uVar4 = *puVar10;
LAB_08a19ac0:
      while( true ) {
        puVar11 = (uint *)(puVar10 + 4);
        if (-1 < (short)uVar4) {
          puVar11 = (uint *)((uint)puVar10[1] + (int)puVar10);
        }
        uVar6 = uVar4 & 0x7fff;
        if (uVar6 == 0x83) {
          FUN_08a13fd8(param_1 + 0x1c,puVar11);
          uVar7 = puVar11[4];
          *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xffffff;
          puVar10 = (ushort *)((int)puVar10 + *(int *)(puVar10 + 2));
          *(uint *)(param_1 + 0x28) = uVar7;
          if (puVar10 < puVar12) goto LAB_08a19abc;
          uVar7 = *(uint *)(param_1 + 0x10);
          goto LAB_08a19b24;
        }
        if (0x83 < uVar6) break;
        if (uVar6 == 0x81) {
          uVar7 = 1 << (*puVar11 & 0x1f);
          uVar8 = *(uint *)(param_1 + 0x30) & ~uVar7;
          *(uint *)(param_1 + 0x30) = uVar8;
          *(uint *)(param_1 + 0x34) = uVar7 | *(uint *)(param_1 + 0x34);
          if (puVar11[1] == 0) {
            uVar7 = 0;
          }
          *(uint *)(param_1 + 0x30) = uVar7 | uVar8;
          puVar10 = (ushort *)((int)puVar10 + *(int *)(puVar10 + 2));
          if (puVar12 <= puVar10) {
            uVar7 = *(uint *)(param_1 + 0x10);
            goto LAB_08a19b24;
          }
          uVar4 = *puVar10;
        }
        else if (uVar6 < 0x82) {
          if (uVar6 != 9) {
            iVar2 = *(int *)(puVar10 + 2);
            goto LAB_08a19b10;
          }
          if (puVar10 == (ushort *)0x0) {
LAB_08a19d74:
            uVar7 = 0;
          }
          else {
            puVar9 = (ushort *)((int)puVar10 + *(int *)(puVar10 + 2));
            puVar3 = puVar9;
            if (-1 < (short)uVar4) {
              puVar3 = (ushort *)((int)puVar10 + *(int *)(puVar10 + 4));
            }
            uVar7 = 0;
            if (puVar3 < puVar9) {
              uVar4 = *puVar3;
              while ((uVar4 & 0x7fff) != 0x92) {
                puVar3 = (ushort *)((int)puVar3 + *(int *)(puVar3 + 2));
                if (puVar9 <= puVar3) goto LAB_08a19d74;
                uVar4 = *puVar3;
              }
              if (puVar3 == (ushort *)0x0) goto LAB_08a19d74;
              piVar5 = (int *)(puVar3 + 4);
              if (-1 < (short)uVar4) {
                piVar5 = (int *)((uint)puVar3[1] + (int)puVar3);
              }
              if (piVar5 == (int *)0x0) {
                uVar7 = 0;
              }
              else {
                uVar7 = *piVar5 - 0x82;
              }
            }
          }
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1 << (uVar7 & 0x1f);
          puVar10 = (ushort *)((int)puVar10 + *(int *)(puVar10 + 2));
          if (puVar12 <= puVar10) {
            uVar7 = *(uint *)(param_1 + 0x10);
            goto LAB_08a19b24;
          }
          uVar4 = *puVar10;
        }
        else {
          FUN_08a13fd8(param_1 + 0x18,puVar11);
          puVar10 = (ushort *)((int)puVar10 + *(int *)(puVar10 + 2));
          if (puVar12 <= puVar10) {
            uVar7 = *(uint *)(param_1 + 0x10);
            goto LAB_08a19b24;
          }
          uVar4 = *puVar10;
        }
      }
      if (uVar6 == 0x85) {
        FUN_08a13fd8(param_1 + 0x24,puVar11);
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x8000;
        puVar10 = (ushort *)((int)puVar10 + *(int *)(puVar10 + 2));
        if (puVar12 <= puVar10) {
          uVar7 = *(uint *)(param_1 + 0x10);
          goto LAB_08a19b24;
        }
        uVar4 = *puVar10;
        goto LAB_08a19ac0;
      }
      if (uVar6 < 0x85) {
        FUN_08a13fd8(param_1 + 0x20,puVar11);
        *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffff;
        puVar10 = (ushort *)((int)puVar10 + *(int *)(puVar10 + 2));
        if (puVar12 <= puVar10) {
          uVar7 = *(uint *)(param_1 + 0x10);
          goto LAB_08a19b24;
        }
        uVar4 = *puVar10;
        goto LAB_08a19ac0;
      }
      iVar2 = *(int *)(puVar10 + 2);
      if (uVar6 != 0x86) {
LAB_08a19b10:
        puVar10 = (ushort *)((int)puVar10 + iVar2);
        if (puVar12 <= puVar10) {
          uVar7 = *(uint *)(param_1 + 0x10);
          goto LAB_08a19b24;
        }
        uVar4 = *puVar10;
        goto LAB_08a19ac0;
      }
      puVar10 = (ushort *)((int)puVar10 + iVar2);
      *(uint *)(param_1 + 0x2c) = *puVar11;
    } while (puVar10 < puVar12);
    uVar7 = *(uint *)(param_1 + 0x10);
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x10);
  }
LAB_08a19b24:
  if ((uVar7 & 0x8000) == 0) {
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x18);
  }
  uVar8 = uVar7;
  if ((uVar7 & 1) == 0) {
    uVar8 = uVar7 | 0x1000;
    *(uint *)(param_1 + 0x10) = uVar8;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  if (((uVar7 & 4) == 0) && (*(int *)(param_1 + 0x20) != 0)) {
    uVar8 = uVar8 | 0x2000;
    *(uint *)(param_1 + 0x10) = uVar8;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  if (((uVar8 & 0x10) == 0) && (0.0 < *(float *)(param_1 + 0x2c))) {
    *(uint *)(param_1 + 0x10) = uVar8 | 0x4000;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  return;
}

