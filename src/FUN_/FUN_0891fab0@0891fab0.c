#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_0891fab0(undefined4 param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_2 & 0xff) == 0x25) {
    return 5;
  }
  uVar1 = (int)(param_2 & 0xff) >> 2;
  if (6 < uVar1) {
    uVar1 = 6;
  }
  return uVar1;
}

