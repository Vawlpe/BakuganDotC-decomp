#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Removing unreachable block (ram,0x088f54a8)

void FUN_088f542c(uint param_1)

{
  int iVar1;
  undefined uVar2;
  
  param_1 = param_1 & 0xffff;
  if (param_1 < 2000) {
    iVar1 = FUN_088f5010(2,param_1);
    if (iVar1 != 0) {
      uVar2 = 0;
      if (-1 < (int)(DAT_08b00bd8._1_1_ - 1)) {
        uVar2 = (undefined)(DAT_08b00bd8._1_1_ - 1);
      }
      DAT_08b00bd8._1_1_ = uVar2;
      return;
    }
    (&DAT_08b00bdc)[(int)(param_1 & 0xffff) >> 5] =
         (&DAT_08b00bdc)[(int)(param_1 & 0xffff) >> 5] & ~(1 << (param_1 & 0x1f));
  }
  return;
}

