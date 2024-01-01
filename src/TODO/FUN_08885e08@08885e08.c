#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_08885e08(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (int)param_1 >> 0x17 & 0xff;
  iVar4 = uVar3 - 0x7f;
  uVar2 = param_1 & 0x7fffff;
  uVar1 = ((int)param_1 >> 0x1f & 1U) << 0xf;
  if (iVar4 < -0xe) {
    return uVar1;
  }
  if (iVar4 < 0x10) {
    uVar2 = (int)uVar2 >> 0xd;
    uVar1 = uVar1 | (uVar3 - 0x70 & 0x1f) << 10;
  }
  else {
    if (iVar4 != 0x80) {
      return uVar1 | 0x7c00;
    }
    uVar1 = uVar1 | 0x7c00;
    if (uVar2 != 0) {
      uVar2 = param_1 & 0x3ff;
      if ((param_1 & 0x40000) != 0) {
        uVar2 = uVar2 | 0x400;
      }
      return uVar1 | uVar2;
    }
  }
  return uVar1 | uVar2 & 0xffff;
}

