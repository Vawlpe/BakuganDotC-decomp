#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0899d614(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if ((*(char *)(param_1 + 0x10bb) != '\0') &&
     (uVar1 = 0, (*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x10) != 0)) {
    uVar2 = 1;
    do {
      uVar1 = uVar1 + 1;
      if ((*(byte *)(param_1 + 0x10b9) & uVar2) != 0) {
        return 1;
      }
      uVar2 = 1 << (uVar1 & 0x1f);
    } while ((int)uVar1 < 8);
    return 2;
  }
  return 0;
}

