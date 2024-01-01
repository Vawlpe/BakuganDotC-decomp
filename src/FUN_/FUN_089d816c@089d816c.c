#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d816c(char param_1)

{
  uint uVar1;
  
  if (DAT_08ac5ba0 != 0) {
    if (param_1 == '\0') {
      uVar1 = *(uint *)(DAT_08ac5ba0 + 0x14) & 0xfffffffe;
    }
    else {
      uVar1 = *(uint *)(DAT_08ac5ba0 + 0x14) | 1;
    }
    *(uint *)(DAT_08ac5ba0 + 0x14) = uVar1;
  }
  return;
}

