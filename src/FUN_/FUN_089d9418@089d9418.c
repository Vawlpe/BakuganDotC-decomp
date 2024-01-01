#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_089d9418(int param_1,uint param_2)

{
  uint uVar1;
  
  if (((0x47 < param_1) && (param_1 < 0x4e)) || (param_1 == 0xe1)) {
    uVar1 = (uint)((param_2 & 0xf) != 3);
    if ((param_2 & 0xff00) != 0) {
      uVar1 = 0;
    }
    return uVar1 | 0x100;
  }
  if (((param_1 < 0x42) || (0x47 < param_1)) && (param_1 != 0x4f)) {
    if (((param_1 < 0x82) || (0x88 < param_1)) && (param_1 != 0x98)) {
      return 0;
    }
    return 0x200;
  }
  return 0x100;
}

