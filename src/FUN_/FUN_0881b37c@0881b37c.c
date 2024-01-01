#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0881b37c(int param_1,undefined *param_2)

{
  undefined uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined uVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  
  uVar2 = 0;
  if ((param_2 != (undefined *)0x0) && (*(uint *)(param_1 + 0x14) < 4)) {
    iVar6 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = iVar6 + 1;
    puVar8 = (undefined *)(param_1 + iVar6 * 0x1f + 0x18);
    iVar7 = 0;
    iVar6 = 0xf;
    uVar4 = *param_2;
    puVar3 = puVar8;
    puVar5 = param_2;
    do {
      uVar1 = puVar5[1];
      *puVar3 = uVar4;
      iVar7 = iVar7 + 2;
      puVar3[1] = uVar1;
      puVar5 = param_2 + iVar7;
      iVar6 = iVar6 + -1;
      uVar4 = *puVar5;
      puVar3 = puVar8 + iVar7;
    } while (iVar6 != 0);
    *puVar3 = uVar4;
    uVar2 = 1;
  }
  return uVar2;
}

