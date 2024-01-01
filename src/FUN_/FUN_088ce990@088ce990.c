#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_088ce990(int param_1,int param_2)

{
  undefined *puVar1;
  
  param_2 = param_2 + -0x36;
  if (param_2 < 0x42) {
    puVar1 = (&PTR_DAT_08abead0)[param_2];
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined **)(param_1 + 0x2c) = puVar1;
  }
  return param_2 < 0x42;
}

