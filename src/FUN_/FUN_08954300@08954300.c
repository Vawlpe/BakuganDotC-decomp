#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08954300(int param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x40) != 0) {
    uVar1 = 1;
    if (*(char *)(param_1 + *(char *)(param_1 + 0xa44) + 0x5fd) == '\0') {
      uVar1 = 2;
    }
    return uVar1;
  }
  return 0;
}

