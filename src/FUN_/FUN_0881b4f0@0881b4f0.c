#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0881b4f0(int param_1,undefined *param_2,undefined4 param_3)

{
  undefined uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined uVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  
  if (param_2 != (undefined *)0x0) {
    puVar3 = param_2 + 0x1f;
    iVar2 = 0;
    iVar8 = 0xf;
    puVar4 = param_2 + 0x3e;
    uVar5 = *param_2;
    puVar6 = (undefined *)(param_1 + 0x18);
    puVar7 = param_2;
    do {
      uVar1 = puVar7[1];
      *puVar6 = uVar5;
      iVar2 = iVar2 + 2;
      puVar6[1] = uVar1;
      puVar7 = param_2 + iVar2;
      iVar8 = iVar8 + -1;
      uVar5 = *puVar7;
      puVar6 = (undefined *)(param_1 + 0x18) + iVar2;
    } while (iVar8 != 0);
    *puVar6 = uVar5;
    iVar2 = 0;
    iVar8 = 0xf;
    param_2 = param_2 + 0x5d;
    uVar5 = *puVar3;
    puVar6 = (undefined *)(param_1 + 0x37);
    puVar7 = puVar3;
    do {
      uVar1 = puVar7[1];
      *puVar6 = uVar5;
      iVar2 = iVar2 + 2;
      puVar6[1] = uVar1;
      puVar7 = puVar3 + iVar2;
      iVar8 = iVar8 + -1;
      uVar5 = *puVar7;
      puVar6 = (undefined *)(param_1 + 0x37) + iVar2;
    } while (iVar8 != 0);
    *puVar6 = uVar5;
    iVar8 = 0;
    iVar2 = 0xf;
    uVar5 = *puVar4;
    puVar6 = (undefined *)(param_1 + 0x56);
    puVar7 = puVar4;
    do {
      uVar1 = puVar7[1];
      *puVar6 = uVar5;
      iVar8 = iVar8 + 2;
      puVar6[1] = uVar1;
      puVar7 = puVar4 + iVar8;
      iVar2 = iVar2 + -1;
      uVar5 = *puVar7;
      puVar6 = (undefined *)(param_1 + 0x56) + iVar8;
    } while (iVar2 != 0);
    *puVar6 = uVar5;
    iVar8 = 0;
    iVar2 = 0xf;
    uVar5 = *param_2;
    puVar6 = param_2;
    puVar7 = (undefined *)(param_1 + 0x75);
    do {
      uVar1 = puVar6[1];
      *puVar7 = uVar5;
      iVar8 = iVar8 + 2;
      puVar7[1] = uVar1;
      puVar6 = param_2 + iVar8;
      iVar2 = iVar2 + -1;
      uVar5 = *puVar6;
      puVar7 = (undefined *)(param_1 + 0x75) + iVar8;
    } while (iVar2 != 0);
    *puVar7 = uVar5;
  }
  *(undefined4 *)(param_1 + 0x14) = param_3;
  return;
}

