#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0896065c(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + *(int *)(param_1 + 0x52a0);
  if (*(char *)(iVar1 + 0x5026) == '\0') {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + 8) & 0x40) != 0) {
      *(undefined *)(iVar1 + 0x5026) = 1;
      return 1;
    }
  }
  else if ((*(byte *)(*(int *)(param_1 + 0x20) + 8) & 0x10) != 0) {
    *(undefined *)(iVar1 + 0x5026) = 0;
    return 1;
  }
  return 0;
}

