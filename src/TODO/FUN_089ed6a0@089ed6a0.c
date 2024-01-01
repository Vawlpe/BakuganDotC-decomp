#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ed6a0(int param_1,char param_2)

{
  if (param_2 != '\0') {
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
    return;
  }
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffffe;
  return;
}

