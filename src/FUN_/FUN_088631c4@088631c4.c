#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088631c4(int param_1,undefined2 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (((*(char *)(param_1 + 0x612) == '\0') && (iVar1 = *(int *)(param_1 + 0x614), iVar1 < 8)) &&
     ((*(uint *)(param_1 + 0x144) & 0x40000) == 0)) {
    *(undefined2 *)(param_1 + iVar1 * 2 + 0x618) = param_2;
    *(undefined4 *)(param_1 + iVar1 * 4 + 0x628) = param_3;
    *(int *)(param_1 + 0x614) = iVar1 + 1;
  }
  return;
}

