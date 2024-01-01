#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Removing unreachable block (ram,0x088f50d0)

undefined4 FUN_088f505c(uint param_1)

{
  int iVar1;
  
  param_1 = param_1 & 0xffff;
  if (param_1 < 2000) {
    iVar1 = FUN_088f5010(2,param_1);
    if (iVar1 == 0) {
      if (((uint)(&DAT_08b00bdc)[(int)(param_1 & 0xffff) >> 5] >> (param_1 & 0x1f) & 1) != 0) {
        return 1;
      }
    }
    else if (DAT_08b00bd8._1_1_ != '\0') {
      return 1;
    }
  }
  return 0;
}

