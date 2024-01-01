#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ccf50(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  puVar4 = (undefined4 *)*param_1;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  iVar5 = *param_1;
  *(undefined4 *)(iVar5 + 0x10) = 0;
  *(undefined4 *)(iVar5 + 0x14) = 0;
  *(undefined4 *)(iVar5 + 0x18) = 0;
  *(undefined4 *)(iVar5 + 0x1c) = 0;
  iVar5 = *param_1;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(iVar5 + 0x20) = *param_2;
  *(undefined4 *)(iVar5 + 0x24) = uVar1;
  *(undefined4 *)(iVar5 + 0x28) = uVar2;
  *(undefined4 *)(iVar5 + 0x2c) = uVar3;
  iVar5 = *param_1;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  *(undefined4 *)(iVar5 + 0x30) = param_2[4];
  *(undefined4 *)(iVar5 + 0x34) = uVar1;
  *(undefined4 *)(iVar5 + 0x38) = uVar2;
  *(undefined4 *)(iVar5 + 0x3c) = uVar3;
  return;
}

