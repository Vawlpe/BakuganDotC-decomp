#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088cdc88(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0x12;
  switch(param_1) {
  case 0:
    uVar2 = 1;
    break;
  case 1:
    uVar2 = 2;
    break;
  case 2:
    uVar2 = 8;
    break;
  case 4:
    uVar2 = 3;
    break;
  case 5:
    uVar2 = 4;
    break;
  case 6:
    uVar2 = 5;
    break;
  case 8:
    uVar2 = 0xd;
    break;
  case 9:
    uVar2 = 0xe;
    break;
  case 10:
    uVar2 = 0xf;
    break;
  case 0xc:
    uVar2 = 10;
    break;
  case 0xd:
    uVar2 = 0xb;
    break;
  case 0xe:
    uVar2 = 0xc;
    break;
  case 0x10:
    uVar2 = 6;
    break;
  case 0x11:
    uVar2 = 7;
    break;
  case 0x12:
    uVar2 = 9;
    break;
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
    uVar2 = 0x10;
    break;
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
    uVar2 = 0x11;
    break;
  case 0x25:
    uVar2 = 0;
  }
  if ((param_1 * 4 >> 2 == 0x25) && (iVar1 = FUN_089c9b48(0x1d,DAT_08ac58c8), iVar1 != 0)) {
    uVar2 = 0x11;
  }
  return uVar2;
}

