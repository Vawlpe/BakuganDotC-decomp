#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089ce55c(int param_1)

{
  FUN_089cdf1c();
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined *)(param_1 + 0x58) = 0;
  FUN_089ce604(param_1);
  return param_1;
}

