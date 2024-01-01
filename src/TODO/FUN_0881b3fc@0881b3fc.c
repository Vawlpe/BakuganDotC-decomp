#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0881b3fc(int param_1,int param_2)

{
  undefined uVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined uVar10;
  int iVar11;
  undefined *puVar12;
  int iVar13;
  
  if (param_2 != 0) {
    iVar11 = *(int *)(param_1 + 0x14);
    iVar6 = 0;
    iVar9 = param_1;
    if (0 < iVar11) {
      do {
        bVar2 = true;
        iVar5 = 0;
        iVar13 = iVar9;
        do {
          iVar3 = iVar5 + param_2;
          iVar5 = iVar5 + 1;
          if (*(char *)(iVar13 + 0x31) != *(char *)(iVar3 + 0x19)) {
            bVar2 = false;
            break;
          }
          iVar13 = iVar9 + iVar5;
        } while (iVar5 < 6);
        if (bVar2) {
          iVar11 = iVar11 + -1;
          *(int *)(param_1 + 0x14) = iVar11;
          if (iVar11 < 1) {
            return;
          }
          if (iVar11 <= iVar6) {
            return;
          }
          iVar9 = param_1 + iVar6 * 0x1f;
          puVar7 = (undefined *)(iVar9 + 0x18);
          puVar4 = (undefined *)(iVar9 + 0x37);
          do {
            iVar9 = 0;
            iVar11 = 0xf;
            uVar10 = *puVar4;
            puVar8 = puVar7;
            puVar12 = puVar4;
            do {
              uVar1 = puVar12[1];
              *puVar8 = uVar10;
              iVar9 = iVar9 + 2;
              puVar8[1] = uVar1;
              puVar12 = puVar4 + iVar9;
              iVar11 = iVar11 + -1;
              uVar10 = *puVar12;
              puVar8 = puVar7 + iVar9;
            } while (iVar11 != 0);
            *puVar8 = uVar10;
            iVar6 = iVar6 + 1;
            puVar7 = puVar7 + 0x1f;
            puVar4 = puVar4 + 0x1f;
          } while (iVar6 < *(int *)(param_1 + 0x14));
          return;
        }
        iVar6 = iVar6 + 1;
        iVar9 = iVar9 + 0x1f;
      } while (iVar6 < iVar11);
    }
  }
  return;
}

