#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f1934(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  ushort *puVar2;
  
  uVar1 = FUN_089bfa40(500);
  FUN_088c2210(uVar1,param_3 & 0xffff);
  puVar2 = (ushort *)(&DAT_08b00cdc + (uint)DAT_08b00bd4 * 10 + (uint)DAT_08b00bd6 * 2);
  *puVar2 = *puVar2 | 1;
  *puVar2 = *puVar2 & 1 | (ushort)((param_3 & 0x7fff) << 1);
  return;
}

