#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_088b21f0(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0x22;
  switch(param_1 & 0xff) {
  case 0:
  case 0xd:
  case 0x20:
    return uVar1;
  case 1:
    return 0x22;
  case 2:
    return 0x5b;
  case 3:
    return 0x5b;
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
    uVar1 = ((int)((param_1 & 0xff) * 4) >> 2) + 0xadU & 0xff;
  }
  return uVar1;
}

