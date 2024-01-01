#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_089a5d34(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_0880cc48();
  uVar2 = FUN_0880d0ac(uVar1,0x35);
  return uVar2 & 1 << (param_1 & 0x1f);
}

