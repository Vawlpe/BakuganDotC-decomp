#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f5260(undefined2 param_1)

{
  uint uVar1;
  
  uVar1 = 0xffffffff;
  switch(param_1) {
  case 3:
    uVar1 = 3;
    break;
  case 0xf:
    uVar1 = 1;
    break;
  case 0x10:
    uVar1 = 5;
    break;
  case 0x11:
    uVar1 = 6;
    break;
  case 0x12:
    uVar1 = 7;
    break;
  case 0x13:
    uVar1 = 8;
  }
  if (uVar1 != 0xffffffff) {
    FUN_0892c44c(uVar1 & 0xff);
  }
  return;
}

