#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08984c38(int param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x40) != 0) {
    uVar1 = 2;
    if (*(char *)((int)*(char *)(param_1 + 0xbcc) + *(char *)(param_1 + 0xbcd) * 4 + param_1 + 0xbd8
                 ) != -1) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 0;
}

