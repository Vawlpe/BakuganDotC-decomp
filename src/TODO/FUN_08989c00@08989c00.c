#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08989c00(int param_1)

{
  *(char *)(param_1 + 0x8e2) = *(char *)(param_1 + 0x8e1);
  if (((int)*(char *)(*(int *)(param_1 + 0x20) + 8) & 0x80U) == 0) {
    if ((((*(byte *)(*(int *)(param_1 + 0x20) + 8) & 0x20) != 0) &&
        (*(char *)(param_1 + 0x8e1) != '\x03')) && ((int)*(char *)(param_1 + 0x8e0) % 3 == 2)) {
      *(undefined *)(param_1 + 0x8e3) = 2;
      *(char *)(param_1 + 0x8e2) = *(char *)(param_1 + 0x8e2) + '\x01';
      return 1;
    }
  }
  else if (((int)*(char *)(param_1 + 0x8e0) % 3 == 0) && (*(char *)(param_1 + 0x8e2) != '\0')) {
    *(char *)(param_1 + 0x8e2) = *(char *)(param_1 + 0x8e2) + -1;
    *(undefined *)(param_1 + 0x8e3) = 1;
    return 1;
  }
  return 0;
}

