#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0882cd3c(int param_1,char param_2,undefined4 param_3)

{
  if (param_2 != '\0') {
    *(undefined4 *)(param_1 + 0xb90) = 1;
    *(undefined4 *)(param_1 + 0xb94) = param_3;
    *(undefined *)(param_1 + 0xb9c) = 1;
    return;
  }
  *(undefined *)(param_1 + 0xb9c) = 0;
  return;
}

