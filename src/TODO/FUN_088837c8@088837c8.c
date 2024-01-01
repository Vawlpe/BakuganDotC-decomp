#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088837c8(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 < 0x58) {
    if (0x46 < param_2) {
      uVar1 = 1;
    }
  }
  else if ((0x7d < param_2) && (param_2 < 0x89)) {
    uVar1 = 1;
  }
  return uVar1;
}

