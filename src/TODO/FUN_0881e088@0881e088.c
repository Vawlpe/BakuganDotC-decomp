#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0881e088(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  
  iVar1 = param_2 * 3;
  iVar5 = param_2 * 2;
  if ((*(int *)(param_1 + 0xe0) == 0xb) || (*(int *)(param_1 + 0xe0) == 0xc)) {
    FUN_089d8634();
    uVar2 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar4 = FUN_089d7d74(param_2 * 0xc,0,0);
    FUN_089d816c(uVar2);
    FUN_089d866c();
    if (param_2 < iVar5) {
      puVar7 = (undefined4 *)(iVar4 + param_2 * 4);
      iVar6 = param_2;
      do {
        *puVar7 = 0x3f800000;
        iVar6 = iVar6 + 1;
        puVar7 = puVar7 + 1;
      } while (iVar6 < iVar5);
    }
    if (iVar5 < iVar1) {
      puVar7 = (undefined4 *)(iVar4 + param_2 * 8);
      do {
        *puVar7 = 0;
        iVar5 = iVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (iVar5 < iVar1);
    }
    iVar5 = *(int *)(param_1 + 0x204);
    *(int *)(iVar5 + 0x19c) = iVar4;
    *(uint *)(iVar5 + 0x1b8) = *(uint *)(iVar5 + 0x1b8) | 1;
  }
  else {
    FUN_089e7f28(*(int *)(param_1 + 0x204) + 0x100);
    FUN_089d8634();
    uVar2 = FUN_089d81a4();
    FUN_089d816c(1);
    puVar3 = (undefined4 *)FUN_089d7d74(param_2 * 0xc,0,0);
    FUN_089d816c(uVar2);
    FUN_089d866c();
    iVar4 = 0;
    puVar7 = puVar3;
    if (0 < iVar5) {
      do {
        *puVar7 = 0x3f800000;
        iVar4 = iVar4 + 1;
        puVar7 = puVar7 + 1;
      } while (iVar4 < iVar5);
    }
    if (iVar5 < iVar1) {
      puVar7 = puVar3 + param_2 * 2;
      do {
        *puVar7 = 0;
        iVar5 = iVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (iVar5 < iVar1);
    }
    iVar5 = *(int *)(param_1 + 0x204);
    *(undefined4 **)(iVar5 + 0x19c) = puVar3;
    *(uint *)(iVar5 + 0x1b8) = *(uint *)(iVar5 + 0x1b8) | 1;
  }
  return;
}

