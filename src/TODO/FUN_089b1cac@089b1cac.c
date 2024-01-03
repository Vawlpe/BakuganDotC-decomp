#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089b1cac(byte param_1,ushort param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    uVar2 = DONE_Get_DAT_08AAC9E0();
    uVar1 = FUN_0880d0ac(uVar2,0x30);
    uVar2 = DONE_Get_DAT_08AAC9E0();
    FUN_0880cd9c(uVar2,0x30,uVar1 & ~param_2);
  }
  else if (param_1 < 2) {
    uVar2 = DONE_Get_DAT_08AAC9E0();
    uVar1 = FUN_0880d0ac(uVar2,0x30);
    uVar2 = DONE_Get_DAT_08AAC9E0();
    FUN_0880cd9c(uVar2,0x30,uVar1 | param_2);
  }
  else {
    uVar2 = DONE_Get_DAT_08AAC9E0();
    FUN_0880cd9c(uVar2,0x30,0);
  }
  return;
}

