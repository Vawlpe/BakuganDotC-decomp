#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0893eb28(int param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x40) == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x74) != '\0') {
    if ((*(char *)(param_1 + 0x76) == '\0') && (*(char *)(param_1 + 0x7fc) == '\0')) {
      return 2;
    }
    return 1;
  }
  uVar1 = 1;
  if (*(char *)(param_1 + 0x7fc) == *(char *)(param_1 + 0x7e4)) {
    uVar1 = 2;
  }
  return uVar1;
}

