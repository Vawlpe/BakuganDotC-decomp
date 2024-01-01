#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088efc94(void)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)DAT_08b00bd4;
  uVar3 = (uint)DAT_08b00bd6;
  if ((*(ushort *)(&DAT_08b00cdc + uVar2 * 10 + uVar3 * 2) & 1) != 0) {
    uVar1 = FUN_089bfa40(500);
    FUN_088c2210(uVar1,((int)(short)*(ushort *)(&DAT_08b00cdc + uVar2 * 10 + uVar3 * 2) & 0xfffeU)
                       >> 1);
  }
  return;
}

