#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0899d72c(int param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x40) != 0) {
    uVar1 = 2;
    if ((int)*(char *)(param_1 + 0x109e) <
        (int)(uint)*(byte *)(param_1 + (uint)*(byte *)(param_1 + *(char *)(param_1 + 0x109c) +
                                                      0x10a0) + 0x11c2)) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 0;
}

