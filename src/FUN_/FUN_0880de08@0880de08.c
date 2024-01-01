#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0880de08(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == -1) {
    uVar1 = FUN_0880cc48(0xffffffff,0xffffffff,0xffffffff);
    param_1 = FUN_0880d0ac(uVar1,0x13);
  }
  uVar1 = FUN_0880cc48();
  uVar1 = FUN_0880d0ac(uVar1,param_1 + 3);
  iVar2 = FUN_0880d378();
  if (iVar2 != 0) {
    return 0x2f;
  }
  switch(uVar1) {
  case 1:
  case 2:
  case 0x10:
    return 0x23;
  case 3:
  case 4:
    return 0x24;
  case 5:
  case 0x11:
    return 0x25;
  case 6:
  case 0x12:
    return 0x26;
  case 7:
  case 0x13:
    return 0x27;
  case 8:
  case 0x14:
    return 0x28;
  case 9:
  case 10:
    return 0x29;
  case 0xb:
    return 0x2a;
  case 0xc:
    return 0x2b;
  case 0xd:
    return 0x2c;
  case 0xe:
    return 0x2d;
  case 0xf:
    return 0x2e;
  default:
    return 0x23;
  }
}

