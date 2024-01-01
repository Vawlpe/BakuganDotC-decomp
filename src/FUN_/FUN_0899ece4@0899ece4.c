#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0899ece4(int param_1)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 0x10bb) != '\0') &&
     ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x10) != 0)) {
    uVar1 = 2;
    if (*(char *)(param_1 + (uint)*(byte *)(param_1 + *(char *)(param_1 + 0x109c) + 0x10a0) + 0x11c2
                 ) != '\0') {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 0;
}

