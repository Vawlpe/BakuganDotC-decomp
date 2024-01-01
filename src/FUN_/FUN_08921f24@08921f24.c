#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08921f24(int param_1)

{
  if ((*(byte *)(*(int *)(param_1 + 0x20) + 8) & 0x10) == 0) {
    if (((*(byte *)(*(int *)(param_1 + 0x20) + 8) & 0x40) != 0) &&
       (*(char *)(param_1 + 0x76) != '\0')) {
      *(char *)(param_1 + 0x76) = *(char *)(param_1 + 0x76) + -1;
      return 1;
    }
  }
  else if ((int)*(char *)(param_1 + 0x76) < (int)(*(byte *)(param_1 + 0x224d) - 1)) {
    *(char *)(param_1 + 0x76) = *(char *)(param_1 + 0x76) + '\x01';
    return 1;
  }
  return 0;
}

