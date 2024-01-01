#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0896b81c(int param_1,char param_2)

{
  if (param_2 == '\0') {
    *(undefined4 *)(param_1 + 0x29c8) = 0;
    *(undefined4 *)(param_1 + 0x29c4) = 0;
    *(undefined4 *)(param_1 + 0x29cc) = 0;
    *(undefined *)(param_1 + 0x29d0) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x29cc) = 0;
    *(undefined4 *)(param_1 + 0x29c8) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x29c4) = 0x3f800000;
    *(undefined *)(param_1 + 0x29d0) = 0;
  }
  FUN_089f59e8(*(undefined4 *)(param_1 + 0x18),0);
  return;
}

