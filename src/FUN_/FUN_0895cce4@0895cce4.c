#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895cce4(int param_1,char param_2,byte param_3)

{
  if (param_2 != '\0') {
    *(byte *)(param_1 + 0x4ce1) = *(byte *)(param_1 + 0x4ce1) | param_3;
    return;
  }
  *(byte *)(param_1 + 0x4ce1) = *(byte *)(param_1 + 0x4ce1) & ~param_3;
  return;
}

