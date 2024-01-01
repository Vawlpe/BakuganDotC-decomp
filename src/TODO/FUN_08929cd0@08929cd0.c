#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08929cd0(int param_1,char param_2)

{
  if (param_2 == '\0') {
    *(undefined4 *)(param_1 + 0x6f4) = 0;
    *(undefined4 *)(param_1 + 0x6f8) = 0;
    *(undefined4 *)(param_1 + 0x6fc) = 0;
    *(undefined4 *)(param_1 + 0x700) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x6fc) = 0;
    *(undefined4 *)(param_1 + 0x6f4) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x6f8) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x700) = 0x3f800000;
  }
  FUN_089f59e8(*(undefined4 *)(param_1 + 0x18),0);
  return;
}

