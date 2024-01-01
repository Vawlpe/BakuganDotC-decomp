#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08989b18(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if ((*(byte *)(iVar2 + 8) & 0x10) == 0) {
    if ((*(byte *)(iVar2 + 8) & 0x40) == 0) {
      if (((int)*(char *)(iVar2 + 8) & 0x80U) == 0) {
        if (((*(byte *)(iVar2 + 8) & 0x20) != 0) && ((int)*(char *)(param_1 + 0x8e0) % 3 != 2)) {
          *(char *)(param_1 + 0x8e0) = *(char *)(param_1 + 0x8e0) + '\x01';
          return 1;
        }
      }
      else if ((int)*(char *)(param_1 + 0x8e0) % 3 != 0) {
        *(char *)(param_1 + 0x8e0) = *(char *)(param_1 + 0x8e0) + -1;
        return 1;
      }
    }
    else {
      cVar1 = *(char *)(param_1 + 0x8e0);
      if ((cVar1 < 3) && (*(char *)(param_1 + 0x8e1) * 6 + (int)cVar1 + 3 < 0x15)) {
        *(char *)(param_1 + 0x8e0) = cVar1 + '\x03';
        return 1;
      }
    }
  }
  else if ('\x02' < *(char *)(param_1 + 0x8e0)) {
    *(char *)(param_1 + 0x8e0) = *(char *)(param_1 + 0x8e0) + -3;
    return 1;
  }
  return 0;
}

