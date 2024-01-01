#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a234a0(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x80450001;
  if ((DAT_08af13b0 != -1) && (uVar1 = 0x80450011, param_1 < DAT_08afdee4)) {
    uVar1 = 0;
    (&DAT_08afdf5c)[param_1 * 0x1a] = param_2;
  }
  return uVar1;
}

