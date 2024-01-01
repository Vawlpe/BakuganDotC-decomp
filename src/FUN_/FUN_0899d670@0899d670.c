#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0899d670(int param_1)

{
  int iVar1;
  char cVar2;
  undefined uVar3;
  
  iVar1 = (int)*(char *)(param_1 + 0x109e);
  if ((*(byte *)(*(int *)(param_1 + 0x20) + 8) & 0x10) == 0) {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + 8) & 0x40) != 0) {
      uVar3 = 0;
      if (iVar1 != *(byte *)(param_1 + (uint)*(byte *)(param_1 + *(char *)(param_1 + 0x109c) +
                                                      0x10a0) + 0x11b8) - 1) {
        uVar3 = (undefined)((uint)((iVar1 + 1) * 0x1000000) >> 0x18);
      }
      *(undefined *)(param_1 + 0x109e) = uVar3;
      if (*(char *)(param_1 + 0x109e) != iVar1) {
        return 1;
      }
    }
  }
  else {
    if (iVar1 == 0) {
      cVar2 = *(char *)(param_1 + (uint)*(byte *)(param_1 + *(char *)(param_1 + 0x109c) + 0x10a0) +
                       0x11b8) + -1;
    }
    else {
      cVar2 = (char)((uint)((iVar1 + -1) * 0x1000000) >> 0x18);
    }
    *(char *)(param_1 + 0x109e) = cVar2;
    if (*(char *)(param_1 + 0x109e) != iVar1) {
      return 1;
    }
  }
  return 0;
}

