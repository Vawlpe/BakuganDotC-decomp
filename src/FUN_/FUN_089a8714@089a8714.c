#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089a8714(int param_1)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0x672) != '\0') {
    return 1;
  }
  bVar1 = *(byte *)(param_1 + 0x74);
  if (4 < bVar1) {
    return 0;
  }
  if (bVar1 != 0) {
    if (bVar1 == 1) {
      return 1;
    }
    if (((bVar1 != 2) && (bVar1 != 3)) && (bVar1 != 4)) {
      return 1;
    }
  }
  return 1;
}

