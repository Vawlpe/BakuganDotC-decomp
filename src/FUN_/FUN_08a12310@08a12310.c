#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a12310(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  if (param_7 < param_3) {
    param_3 = param_7;
  }
  iVar9 = param_2;
  if (param_6 < param_2) {
    iVar9 = param_6;
  }
  if (param_4 == 0) {
    iVar12 = 0x10;
    iVar2 = param_6;
    if (param_8 != 0) {
      iVar12 = 0x80;
      iVar2 = 0x10;
    }
    if (0 < param_3) {
      do {
        iVar8 = param_3;
        if (8 < param_3) {
          iVar8 = 8;
        }
        if (0 < iVar8) {
          iVar11 = 0;
          iVar10 = 0;
          iVar7 = 0;
          do {
            puVar5 = (undefined4 *)(iVar7 + (int)param_1);
            puVar3 = (undefined4 *)(iVar10 + param_5);
            if (0 < iVar9) {
              iVar6 = 0;
              do {
                iVar6 = iVar6 + 0x10;
                *puVar5 = *puVar3;
                puVar5[1] = puVar3[1];
                puVar5[2] = puVar3[2];
                puVar4 = puVar3 + 3;
                puVar3 = (undefined4 *)((int)puVar3 + iVar12);
                puVar5[3] = *puVar4;
                puVar5 = puVar5 + 4;
              } while (iVar6 < iVar9);
            }
            iVar11 = iVar11 + 1;
            iVar7 = iVar7 + param_2;
            iVar10 = iVar10 + iVar2;
          } while (iVar8 != iVar11);
        }
        param_3 = param_3 + -8;
        param_1 = param_1 + param_2 * 2;
        param_5 = param_6 * 8 + param_5;
      } while (0 < param_3);
    }
  }
  else {
    iVar2 = 1;
    iVar12 = param_6;
    if (param_8 != 0) {
      iVar2 = 8;
      iVar12 = 0x10;
    }
    if (0 < param_3) {
      do {
        iVar8 = param_3;
        if (8 < param_3) {
          iVar8 = 8;
        }
        if (0 < iVar9) {
          iVar10 = 0;
          iVar7 = 0;
          puVar3 = param_1;
          do {
            puVar5 = (undefined4 *)(iVar7 + param_5);
            if (0 < iVar8) {
              iVar11 = 0;
              puVar4 = puVar3;
              do {
                iVar11 = iVar11 + 1;
                *puVar4 = *puVar5;
                puVar4[1] = puVar5[1];
                puVar4[2] = puVar5[2];
                puVar1 = puVar5 + 3;
                puVar5 = (undefined4 *)((int)puVar5 + iVar12);
                puVar4[3] = *puVar1;
                puVar4 = puVar4 + 4;
              } while (iVar8 != iVar11);
            }
            iVar10 = iVar10 + 0x10;
            iVar7 = iVar7 + iVar2 * 0x10;
            puVar3 = puVar3 + 0x20;
          } while (iVar10 < iVar9);
        }
        param_3 = param_3 + -8;
        param_1 = param_1 + param_2 * 2;
        param_5 = param_6 * 8 + param_5;
      } while (0 < param_3);
      return;
    }
  }
  return;
}

