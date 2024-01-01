#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a158d8(int param_1,ushort param_2,ushort param_3)

{
  if (param_1 != 0) {
    *(ushort *)(param_1 + 0x2e) = ~param_2 & *(ushort *)(param_1 + 0x2e) | param_2 & param_3;
  }
  return;
}

