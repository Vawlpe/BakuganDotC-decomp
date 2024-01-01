#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089dd01c(uint **param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  undefined auStack_40 [32];
  
  puVar2 = param_1[4] + 0x1c;
  if ((param_1[9][8] & 0x800000) != 0) {
    uVar4 = param_1[9][10];
    iVar1 = FUN_08a10868(param_1[10]);
    if (uVar4 != 0) {
      puVar2 = (uint *)FUN_089dd710(auStack_40,uVar4,puVar2);
    }
    if (iVar1 != 0) {
      puVar2 = (uint *)FUN_089dd710(auStack_40,iVar1,puVar2);
    }
  }
  uVar5 = *puVar2;
  uVar4 = puVar2[1];
  puVar3 = *param_1;
  *param_1 = puVar3 + 1;
  *puVar3 = uVar5 >> 8 | 0x4a000000;
  puVar3 = *param_1;
  *param_1 = puVar3 + 1;
  *puVar3 = uVar4 >> 8 | 0x4b000000;
  uVar5 = puVar2[2];
  uVar4 = puVar2[3];
  puVar2 = *param_1;
  *param_1 = puVar2 + 1;
  *puVar2 = uVar5 >> 8 | 0x48000000;
  puVar2 = *param_1;
  *param_1 = puVar2 + 1;
  *puVar2 = uVar4 >> 8 | 0x49000000;
  return;
}

