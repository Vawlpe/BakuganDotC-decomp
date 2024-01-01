#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0899994c(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x2269) == '\0') {
    uVar1 = FUN_089a4dc8(*(float *)(param_1 + 0x21d4) - 0.002);
  }
  else {
    uVar1 = FUN_089a4dc8(*(float *)(param_1 + 0x21d4) + 0.002);
  }
  *(undefined4 *)(param_1 + 0x21d4) = uVar1;
  return;
}

