#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0896cc04(int param_1)

{
  int iVar1;
  
  iVar1 = (int)*(char *)(param_1 + 0x77);
  if (0 < iVar1) {
    if (iVar1 < 2) {
      if (*(char *)(param_1 + 0x29bd) < '\x03') {
        if (((*(byte *)(*(int *)(param_1 + 0x20) + 8) & 0x40) != 0) &&
           ('\x01' < *(char *)(param_1 + iVar1 + 0x74))) {
          return 1;
        }
      }
      else if ((*(byte *)(*(int *)(param_1 + 0x20) + 8) & 0x40) != 0) {
        return 1;
      }
    }
    else if ((iVar1 < 3) && ((*(byte *)(*(int *)(param_1 + 0x20) + 8) & 0x10) != 0)) {
      return 1;
    }
  }
  return 0;
}

