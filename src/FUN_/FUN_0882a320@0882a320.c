#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0882a320(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x110) == -1) {
    *(undefined4 *)(param_1 + 0x110) = 0;
    puVar5 = (undefined4 *)(param_1 + 0x10);
    iVar7 = 0;
    puVar4 = (undefined4 *)(param_1 + 0x90);
    do {
      uVar1 = param_2[1];
      uVar2 = param_2[2];
      uVar3 = param_2[3];
      *puVar5 = *param_2;
      puVar5[1] = uVar1;
      puVar5[2] = uVar2;
      puVar5[3] = uVar3;
      uVar1 = param_3[1];
      uVar2 = param_3[2];
      uVar3 = param_3[3];
      *puVar4 = *param_3;
      puVar4[1] = uVar1;
      puVar4[2] = uVar2;
      puVar4[3] = uVar3;
      iVar7 = iVar7 + 1;
      puVar5 = puVar5 + 4;
      puVar4 = puVar4 + 4;
    } while (iVar7 < 8);
  }
  else {
    uVar6 = *(int *)(param_1 + 0x110) + 1;
    *(uint *)(param_1 + 0x110) = uVar6;
    uVar6 = uVar6 & 7;
    *(uint *)(param_1 + 0x110) = uVar6;
    iVar7 = param_1 + uVar6 * 0x10;
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *(undefined4 *)(iVar7 + 0x10) = *param_2;
    *(undefined4 *)(iVar7 + 0x14) = uVar1;
    *(undefined4 *)(iVar7 + 0x18) = uVar2;
    *(undefined4 *)(iVar7 + 0x1c) = uVar3;
    param_1 = param_1 + *(int *)(param_1 + 0x110) * 0x10;
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    uVar3 = param_3[3];
    *(undefined4 *)(param_1 + 0x90) = *param_3;
    *(undefined4 *)(param_1 + 0x94) = uVar1;
    *(undefined4 *)(param_1 + 0x98) = uVar2;
    *(undefined4 *)(param_1 + 0x9c) = uVar3;
  }
  return;
}

