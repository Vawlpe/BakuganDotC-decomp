#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08899498(int param_1)

{
  *(undefined4 *)(param_1 + 0xe4) = 0xbf800000;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 1;
  return 1;
}

