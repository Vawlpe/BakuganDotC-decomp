#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089b1040(int param_1)

{
  if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x40) == 0) {
    return 0;
  }
  if (*(char *)(param_1 + *(char *)(param_1 + 0x74) + 0x579) != '\0') {
    return 1;
  }
  return 2;
}

