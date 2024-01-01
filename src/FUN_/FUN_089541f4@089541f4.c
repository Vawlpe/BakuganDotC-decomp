#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089541f4(int param_1)

{
  if ((*(byte *)(*(int *)(param_1 + 0x20) + 8) & 0x10) != 0) {
    *(char *)(param_1 + 0xa44) = *(char *)(param_1 + 0xa44) + -1;
    if (*(char *)(param_1 + 0xa44) < '\0') {
      *(undefined *)(param_1 + 0xa44) = 2;
    }
    return 1;
  }
  if ((*(byte *)(*(int *)(param_1 + 0x20) + 8) & 0x40) != 0) {
    *(char *)(param_1 + 0xa44) = *(char *)(param_1 + 0xa44) + '\x01';
    if ('\x02' < *(char *)(param_1 + 0xa44)) {
      *(undefined *)(param_1 + 0xa44) = 0;
    }
    return 1;
  }
  return 0;
}

