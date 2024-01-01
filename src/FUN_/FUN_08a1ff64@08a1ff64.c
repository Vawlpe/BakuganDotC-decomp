#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a1ff64(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x80450001;
  if (DAT_08af13ac != -1) {
    uVar1 = 0x80450002;
    if ((param_1 < 0x80) && (uVar1 = 0x80450002, (&DAT_08afd89c)[param_1] != 0)) {
      (&DAT_08afd89c)[param_1] = 0;
      uVar1 = 0;
    }
  }
  return uVar1;
}

