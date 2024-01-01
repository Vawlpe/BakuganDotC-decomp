#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a2333c(uint param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x80450001;
  if (DAT_08af13b0 != -1) {
    uVar1 = 0x80450011;
    if ((param_1 < DAT_08afdee4) && (uVar1 = 0x8045000a, param_2 < 0x80)) {
      uVar1 = 0;
      (&DAT_08afdf59)[param_1 * 0x68] = (char)param_2;
    }
  }
  return uVar1;
}

