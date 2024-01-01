#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089bf03c(undefined4 *param_1,uint param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  
  if (1 < param_2) {
    uVar4 = param_2 - 1;
    uVar6 = param_2 << 3;
    do {
      uVar5 = uVar6 - param_2;
      param_2 = uVar5 >> 3;
      bVar1 = false;
      iVar10 = 0;
      puVar7 = param_1;
      puVar9 = param_1;
      do {
        uVar6 = iVar10 + param_2;
        if ((float)puVar9[1] < (float)param_1[uVar6 * 2 + 1]) {
          uVar3 = puVar7[1];
          uVar2 = *puVar7;
          puVar8 = param_1 + uVar6 * 2;
          uVar11 = *puVar8;
          bVar1 = true;
          puVar7[1] = puVar8[1];
          *puVar7 = uVar11;
          puVar8[1] = uVar3;
          *puVar8 = uVar2;
        }
        iVar10 = iVar10 + 1;
        puVar9 = puVar9 + 2;
        puVar7 = puVar7 + 2;
      } while (uVar6 < uVar4);
      uVar6 = uVar5 & 0xfffffff8;
    } while ((bVar1) || (uVar6 = uVar5 & 0xfffffff8, 1 < param_2));
  }
  return;
}

