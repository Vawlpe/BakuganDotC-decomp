#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08859d2c(int param_1,char param_2)

{
  *(char *)(param_1 + 0xb8) = param_2;
  if (param_2 != '\0') {
    FUN_0882487c(0x3f800000,DAT_08abd5b0,0xffffffff,param_1);
    return;
  }
  FUN_0882487c(0,DAT_08abd5b0,0xffffffff,param_1);
  return;
}

