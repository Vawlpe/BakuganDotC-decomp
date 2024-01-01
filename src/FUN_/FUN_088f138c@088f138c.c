#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f138c(int param_1,undefined2 param_2)

{
  if ((*(byte *)(param_1 + 0x273) & 1) != 0) {
    *(undefined *)(param_1 + 0x272) = 0;
    return;
  }
  FUN_088f0168(param_1,param_2);
  return;
}

