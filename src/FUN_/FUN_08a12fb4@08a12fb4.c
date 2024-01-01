#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a12fb4(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar10 = 0;
    puVar9 = param_1;
    do {
      puVar8 = (undefined4 *)*puVar9;
      if ((puVar8 != (undefined4 *)0x0) &&
         (sVar4 = *(short *)((int)puVar8 + 0xe) + -1, *(short *)((int)puVar8 + 0xe) = sVar4,
         sVar4 == 0)) {
        bVar1 = *(byte *)(puVar8 + 3);
        iVar7 = puVar8[1];
        iVar2 = (uint)bVar1 * 0x24;
        if (iVar7 != 0) {
          *(undefined4 *)(iVar7 + 8) = puVar8[2];
        }
        iVar6 = puVar8[2];
        if (iVar6 != 0) {
          *(int *)(iVar6 + 4) = iVar7;
        }
        if (puVar8 == *(undefined4 **)(&DAT_08af134c + iVar2)) {
          *(int *)(&DAT_08af134c + iVar2) = iVar6;
        }
        if (puVar8 == *(undefined4 **)(&DAT_08af1354 + iVar2)) {
          *(undefined4 *)(&DAT_08af1354 + iVar2) = 0;
        }
        if (puVar8 == *(undefined4 **)(&DAT_08af1350 + iVar2)) {
          uVar5 = *(undefined4 *)(&DAT_08af1354 + iVar2);
          *(undefined4 *)(&DAT_08af1354 + iVar2) = 0;
          *(undefined4 *)(&DAT_08af1350 + iVar2) = uVar5;
        }
        uVar3 = DAT_08afce9c;
        uVar5 = DAT_08afce98;
        if ((&DAT_08af134a)[iVar2] == '\0') {
          (*(code *)(&PTR_FUN_08af1344)[(uint)bVar1 * 9])(*puVar8);
        }
        else {
          puVar8[1] = *(undefined4 *)(&DAT_08af1358 + iVar2);
          puVar8[3] = uVar5;
          *(undefined4 **)(&DAT_08af1358 + iVar2) = puVar8;
          puVar8[2] = uVar3;
        }
      }
      iVar10 = iVar10 + 1;
      puVar9 = puVar9 + 1;
    } while (iVar10 != 3);
    memset_jak(param_1,0,0x6c);
    return;
  }
  return;
}

