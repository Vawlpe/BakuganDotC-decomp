#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0888c034(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  
  puVar1 = (undefined4 *)FUN_0888c004(param_2);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_0888c004(0);
  }
  memset_jak((undefined *)param_1,0,0x44);
  iVar6 = 0;
  iVar5 = 8;
  uVar2 = *puVar1;
  puVar4 = puVar1;
  puVar7 = param_1;
  do {
    uVar3 = puVar4[1];
    *puVar7 = uVar2;
    iVar6 = iVar6 + 8;
    puVar7[1] = uVar3;
    puVar4 = (undefined4 *)((int)puVar1 + iVar6);
    iVar5 = iVar5 + -1;
    uVar2 = *puVar4;
    puVar7 = (undefined4 *)((int)param_1 + iVar6);
  } while (iVar5 != 0);
  *puVar7 = uVar2;
  return;
}

