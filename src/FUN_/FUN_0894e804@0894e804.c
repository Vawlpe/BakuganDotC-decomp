#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0894e804(int param_1,char param_2)

{
  if (param_2 == '\0') {
    *(undefined4 *)(param_1 + 0x2e0) = 0;
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x2e0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x98) = 0x3f800000;
  return;
}

