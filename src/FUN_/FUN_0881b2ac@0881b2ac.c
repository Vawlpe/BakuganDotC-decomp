#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0881b2ac(int param_1,int param_2)

{
  undefined uVar1;
  undefined uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar8 = (undefined *)(param_1 + 0x94);
  memset_jak(puVar8,0,0x1f);
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x14))) {
    puVar6 = (undefined *)(param_1 + param_2 * 0x1f + 0x18);
    iVar5 = 0;
    iVar4 = 0xf;
    uVar2 = *puVar6;
    puVar3 = puVar6;
    puVar7 = puVar8;
    do {
      uVar1 = puVar3[1];
      *puVar7 = uVar2;
      iVar5 = iVar5 + 2;
      puVar7[1] = uVar1;
      puVar3 = puVar6 + iVar5;
      iVar4 = iVar4 + -1;
      uVar2 = *puVar3;
      puVar7 = puVar8 + iVar5;
    } while (iVar4 != 0);
    *puVar7 = uVar2;
    *(undefined *)(param_1 + 0xb3) = 1;
  }
  return;
}

