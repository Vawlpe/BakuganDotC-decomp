#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088548f0(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  uint *puVar3;
  undefined4 uVar4;
  
  uVar2 = FUN_089f2178(0x3f000000);
  puVar3 = (uint *)FUN_089f1308(uVar2);
  puVar1 = DAT_08ac5c74;
  *puVar3 = *DAT_08ac5c74 & 0xffffff | 0xcf000000;
  puVar3[1] = puVar1[1] >> 8 | 0xcd000000;
  puVar3[2] = puVar1[2] >> 8 | 0xce000000;
  uVar4 = FUN_089f1490(puVar3 + 3,DAT_08ac5c90,1);
  FUN_089f13c8(uVar2,uVar4);
  if (*(int *)(*(int *)(param_1 + 0x18) + 0x24) != 0) {
    FUN_089f50a0(*(int *)(param_1 + 0x18),uVar2,DAT_08ac5c90,0);
  }
  return;
}

