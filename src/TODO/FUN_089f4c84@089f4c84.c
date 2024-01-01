#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f4c84(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x120);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = puVar1[3];
    puVar1[3] = puVar1[6];
    puVar1[6] = *puVar1;
    puVar1[9] = puVar1[3];
  }
  return;
}

