#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f49d0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  param_2 = param_2 & 0xff;
  FUN_088f4984(param_1,param_2);
  FUN_088f40e4(param_1,*(undefined *)(param_1 + 0xc9),param_2,
               *(int *)(param_1 + 0x80) + param_2 * 0x2c + 4,0);
  iVar1 = *(int *)(param_1 + (uint)*(byte *)(param_1 + 0xc9) * 4);
  iVar2 = *(int *)(iVar1 + 0x14);
  (**(code **)(iVar2 + 0x84))(iVar1 + *(short *)(iVar2 + 0x80));
  *(char *)(param_1 + 0xc9) = *(char *)(param_1 + 0xc9) + '\x01';
  FUN_088f4320(param_1);
  return;
}

