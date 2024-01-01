#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f19c0(void)

{
  undefined4 uVar1;
  ushort *puVar2;
  
  uVar1 = FUN_089bfa40(500);
  FUN_088bf3e0(uVar1);
  puVar2 = (ushort *)(&DAT_08b00cdc + (uint)DAT_08b00bd4 * 10 + (uint)DAT_08b00bd6 * 2);
  *puVar2 = *puVar2 & 0xfffe;
  *puVar2 = *puVar2 & 1;
  return;
}

