#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0898e3ac(int param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x40) != 0) {
    uVar1 = 2;
    if (*(char *)((int)*(char *)(param_1 + 0xe78) + *(char *)(param_1 + 0xe79) * 6 + param_1 +
                 0x11c0) != '\0') {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 0;
}

