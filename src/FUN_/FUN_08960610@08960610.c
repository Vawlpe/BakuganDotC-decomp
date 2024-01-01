#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08960610(int param_1)

{
  if (*(char *)(param_1 + 0x5025) == '\0') {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + 8) & 0x40) != 0) {
      *(undefined *)(param_1 + 0x5025) = 1;
      return 1;
    }
  }
  else if ((*(byte *)(*(int *)(param_1 + 0x20) + 8) & 0x10) != 0) {
    *(undefined *)(param_1 + 0x5025) = 0;
    return 1;
  }
  return 0;
}

