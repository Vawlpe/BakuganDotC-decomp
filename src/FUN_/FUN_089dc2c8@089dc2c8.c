#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_089dc2c8(uint **param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  param_3 = param_3 & (uint)param_1[0xd];
  uVar1 = 0;
  if (param_1[0x14] != (uint *)0x0) {
    uVar1 = (*(code *)param_1[0x14])(param_1,param_3,0,param_1[0x15]);
    param_3 = param_3 & ~uVar1;
  }
  FUN_089dc418(param_1,param_3);
  FUN_089dc46c(param_1,param_3);
  FUN_089dc554(param_1,param_3);
  FUN_089dc708(param_1,param_3);
  DAT_08ac5c5c = FUN_089db6f4(param_1,param_1[8],param_2,param_1[5],0);
  uVar2 = param_1[7][9];
  if (uVar2 != 0) {
    if (param_1[2] < *param_1 + 2) {
      *param_1 = *param_1 + 2;
      puVar3 = param_1[0x13];
    }
    else {
      puVar3 = *param_1;
      *param_1 = puVar3 + 1;
      *puVar3 = (uVar2 >> 0x18) << 0x10 | 0x10000000;
      puVar3 = *param_1;
      *param_1 = puVar3 + 1;
      *puVar3 = uVar2 & 0xffffff | 0xa000000;
      puVar3 = param_1[0x13];
    }
    if (puVar3 != (uint *)0x0) {
      (*(code *)puVar3)(param_1);
    }
  }
  return uVar1;
}

