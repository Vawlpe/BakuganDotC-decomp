#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f11a8(int param_1,uint param_2)

{
  param_2 = param_2 & 0xff;
  if (param_2 == 100) {
    param_2 = (uint)*(byte *)(param_1 + 0x2d4);
  }
  FUN_088f488c(DAT_08abf710,*(undefined *)(param_1 + param_2 + 0x292));
  return;
}

