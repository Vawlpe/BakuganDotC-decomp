#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0893ec68(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = param_1;
  if (*(byte *)(param_1 + 0x7e4) != 0) {
    do {
      iVar1 = iVar1 + 1;
      if (*(char *)(iVar2 + 0x7f2) != *(char *)(iVar2 + 0x7ec)) {
        return 0;
      }
      iVar2 = param_1 + iVar1;
    } while (iVar1 < (int)(uint)*(byte *)(param_1 + 0x7e4));
  }
  return 1;
}

