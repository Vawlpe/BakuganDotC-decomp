#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a136f0(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  short sVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int local_40 [4];
  
  if (param_1 != (int *)0x0) {
    iVar11 = 0;
    piVar6 = param_1;
    do {
      puVar10 = (undefined4 *)*piVar6;
      if ((puVar10 != (undefined4 *)0x0) &&
         (sVar4 = *(short *)((int)puVar10 + 0xe) + -1, *(short *)((int)puVar10 + 0xe) = sVar4,
         sVar4 == 0)) {
        bVar1 = *(byte *)(puVar10 + 3);
        iVar9 = puVar10[1];
        iVar2 = (uint)bVar1 * 0x24;
        if (iVar9 != 0) {
          *(undefined4 *)(iVar9 + 8) = puVar10[2];
        }
        iVar8 = puVar10[2];
        if (iVar8 != 0) {
          *(int *)(iVar8 + 4) = iVar9;
        }
        if (puVar10 == *(undefined4 **)(&DAT_08af134c + iVar2)) {
          *(int *)(&DAT_08af134c + iVar2) = iVar8;
        }
        if (puVar10 == *(undefined4 **)(&DAT_08af1354 + iVar2)) {
          *(undefined4 *)(&DAT_08af1354 + iVar2) = 0;
        }
        if (puVar10 == *(undefined4 **)(&DAT_08af1350 + iVar2)) {
          uVar5 = *(undefined4 *)(&DAT_08af1354 + iVar2);
          *(undefined4 *)(&DAT_08af1354 + iVar2) = 0;
          *(undefined4 *)(&DAT_08af1350 + iVar2) = uVar5;
        }
        uVar3 = DAT_08afce9c;
        uVar5 = DAT_08afce98;
        if ((&DAT_08af134a)[iVar2] == '\0') {
          (*(code *)(&PTR_FUN_08af1344)[(uint)bVar1 * 9])(*puVar10);
        }
        else {
          puVar10[1] = *(undefined4 *)(&DAT_08af1358 + iVar2);
          puVar10[3] = uVar5;
          *(undefined4 **)(&DAT_08af1358 + iVar2) = puVar10;
          puVar10[2] = uVar3;
        }
      }
      iVar11 = iVar11 + 1;
      *piVar6 = 0;
      piVar6 = piVar6 + 1;
    } while (iVar11 != 3);
    if (DAT_08af136f == '\0') {
      iVar11 = 0;
      do {
        piVar6 = (int *)(iVar11 + (int)(param_1 + 3));
        iVar2 = iVar11 + 0x1c;
        piVar7 = (int *)((int)local_40 + iVar11);
        iVar11 = iVar11 + 4;
        *piVar7 = *piVar6 + *(int *)((int)param_1 + iVar2);
      } while (iVar11 != 0x10);
      iVar11 = FUN_08a12a80(param_1,0,local_40);
      if ((iVar11 != 0) && (iVar11 = FUN_08a12a80(param_1,2,0), iVar11 != 0)) {
        iVar11 = *param_1;
        param_1[1] = iVar11;
        if (iVar11 != 0) {
          *(short *)(iVar11 + 0xe) = *(short *)(iVar11 + 0xe) + 1;
        }
        param_1[0x13] = param_1[0xf] + param_1[3];
        param_1[0x14] = param_1[0x10] + param_1[4];
        param_1[0x15] = param_1[0x11] + param_1[5];
        param_1[0x16] = param_1[0x12] + param_1[6];
        return 1;
      }
      iVar11 = 0;
      piVar6 = param_1;
      do {
        puVar10 = (undefined4 *)*piVar6;
        if ((puVar10 != (undefined4 *)0x0) &&
           (sVar4 = *(short *)((int)puVar10 + 0xe) + -1, *(short *)((int)puVar10 + 0xe) = sVar4,
           sVar4 == 0)) {
          bVar1 = *(byte *)(puVar10 + 3);
          iVar9 = puVar10[1];
          iVar2 = (uint)bVar1 * 0x24;
          if (iVar9 != 0) {
            *(undefined4 *)(iVar9 + 8) = puVar10[2];
          }
          iVar8 = puVar10[2];
          if (iVar8 != 0) {
            *(int *)(iVar8 + 4) = iVar9;
          }
          if (puVar10 == *(undefined4 **)(&DAT_08af134c + iVar2)) {
            *(int *)(&DAT_08af134c + iVar2) = iVar8;
          }
          if (puVar10 == *(undefined4 **)(&DAT_08af1354 + iVar2)) {
            *(undefined4 *)(&DAT_08af1354 + iVar2) = 0;
          }
          if (puVar10 == *(undefined4 **)(&DAT_08af1350 + iVar2)) {
            uVar5 = *(undefined4 *)(&DAT_08af1354 + iVar2);
            *(undefined4 *)(&DAT_08af1354 + iVar2) = 0;
            *(undefined4 *)(&DAT_08af1350 + iVar2) = uVar5;
          }
          uVar3 = DAT_08afce9c;
          uVar5 = DAT_08afce98;
          if ((&DAT_08af134a)[iVar2] == '\0') {
            (*(code *)(&PTR_FUN_08af1344)[(uint)bVar1 * 9])(*puVar10);
          }
          else {
            puVar10[1] = *(undefined4 *)(&DAT_08af1358 + iVar2);
            puVar10[3] = uVar5;
            *(undefined4 **)(&DAT_08af1358 + iVar2) = puVar10;
            puVar10[2] = uVar3;
          }
        }
        iVar11 = iVar11 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar11 != 3);
    }
    else {
      iVar11 = FUN_08a12a80(param_1,0,0);
      if (((iVar11 != 0) && (iVar11 = FUN_08a12a80(param_1,1,0), iVar11 != 0)) &&
         (iVar11 = FUN_08a12a80(param_1,2,0), iVar11 != 0)) {
        return 1;
      }
      iVar11 = 0;
      piVar6 = param_1;
      do {
        puVar10 = (undefined4 *)*piVar6;
        if ((puVar10 != (undefined4 *)0x0) &&
           (sVar4 = *(short *)((int)puVar10 + 0xe) + -1, *(short *)((int)puVar10 + 0xe) = sVar4,
           sVar4 == 0)) {
          bVar1 = *(byte *)(puVar10 + 3);
          iVar9 = puVar10[1];
          iVar2 = (uint)bVar1 * 0x24;
          if (iVar9 != 0) {
            *(undefined4 *)(iVar9 + 8) = puVar10[2];
          }
          iVar8 = puVar10[2];
          if (iVar8 != 0) {
            *(int *)(iVar8 + 4) = iVar9;
          }
          if (puVar10 == *(undefined4 **)(&DAT_08af134c + iVar2)) {
            *(int *)(&DAT_08af134c + iVar2) = iVar8;
          }
          if (puVar10 == *(undefined4 **)(&DAT_08af1354 + iVar2)) {
            *(undefined4 *)(&DAT_08af1354 + iVar2) = 0;
          }
          if (puVar10 == *(undefined4 **)(&DAT_08af1350 + iVar2)) {
            uVar5 = *(undefined4 *)(&DAT_08af1354 + iVar2);
            *(undefined4 *)(&DAT_08af1354 + iVar2) = 0;
            *(undefined4 *)(&DAT_08af1350 + iVar2) = uVar5;
          }
          uVar3 = DAT_08afce9c;
          uVar5 = DAT_08afce98;
          if ((&DAT_08af134a)[iVar2] == '\0') {
            (*(code *)(&PTR_FUN_08af1344)[(uint)bVar1 * 9])(*puVar10);
          }
          else {
            puVar10[1] = *(undefined4 *)(&DAT_08af1358 + iVar2);
            puVar10[3] = uVar5;
            *(undefined4 **)(&DAT_08af1358 + iVar2) = puVar10;
            puVar10[2] = uVar3;
          }
        }
        iVar11 = iVar11 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar11 != 3);
    }
    memset_jak((undefined *)param_1,0,0x6c);
  }
  return 0;
}

