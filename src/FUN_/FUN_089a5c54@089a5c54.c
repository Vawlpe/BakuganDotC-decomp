#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089a5c54(byte param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    uVar1 = FUN_0880cc48();
    uVar2 = FUN_0880d0ac(uVar1,0x35);
    uVar1 = FUN_0880cc48();
    FUN_0880cd9c(uVar1,0x35,uVar2 & 0xffff & ~(1 << (param_2 & 0x1f)));
  }
  else if (param_1 < 2) {
    uVar1 = FUN_0880cc48();
    uVar2 = FUN_0880d0ac(uVar1,0x35);
    uVar1 = FUN_0880cc48();
    FUN_0880cd9c(uVar1,0x35,uVar2 & 0xffff | 1 << (param_2 & 0x1f) & 0xffffU);
  }
  else {
    uVar1 = FUN_0880cc48();
    FUN_0880cd9c(uVar1,0x35,0);
  }
  return;
}

