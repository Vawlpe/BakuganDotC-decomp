#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08971910(int param_1)

{
  undefined uVar1;
  
  if (('\x03' < *(char *)(param_1 + 0x74)) &&
     ((((int)*(char *)(*(int *)(param_1 + 0x20) + 8) & 0x80U) != 0 ||
      ((*(byte *)(*(int *)(param_1 + 0x20) + 8) & 0x20) != 0)))) {
    uVar1 = 4;
    if (*(char *)(param_1 + 0x74) == '\x04') {
      uVar1 = 5;
    }
    *(undefined *)(param_1 + 0x74) = uVar1;
    return 1;
  }
  return 0;
}

