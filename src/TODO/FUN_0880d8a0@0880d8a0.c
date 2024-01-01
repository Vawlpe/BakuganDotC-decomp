#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0880d8a0(int *param_1,undefined *param_2)

{
  undefined uVar1;
  undefined *puVar2;
  undefined uVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  
  if ((param_2 != (undefined *)0x0) && (*param_1 != 0)) {
    puVar7 = (undefined *)(*param_1 + 0x470);
    iVar6 = 0;
    iVar5 = 0xc;
    uVar3 = *param_2;
    puVar2 = puVar7;
    puVar4 = param_2;
    do {
      uVar1 = puVar4[1];
      *puVar2 = uVar3;
      iVar6 = iVar6 + 2;
      puVar2[1] = uVar1;
      puVar4 = param_2 + iVar6;
      iVar5 = iVar5 + -1;
      uVar3 = *puVar4;
      puVar2 = puVar7 + iVar6;
    } while (iVar5 != 0);
    *puVar2 = uVar3;
  }
  return;
}

