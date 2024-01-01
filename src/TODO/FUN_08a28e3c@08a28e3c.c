#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a28e3c(uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0x80420100;
  if (DAT_08b00110 != 0) {
    uVar1 = 0x80420005;
    if ((param_1 != 0) && (uVar1 = 0x80420005, (param_1 & 0x3f) == 0)) {
      uVar1 = zz___sceSasCoreWithMix(&DAT_08b02c80,param_1,param_2,param_3);
    }
  }
  return uVar1;
}

