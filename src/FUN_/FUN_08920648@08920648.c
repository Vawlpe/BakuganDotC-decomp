#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08920648(int param_1)

{
  int iVar1;
  
  iVar1 = (int)*(char *)(param_1 + 0x74);
  if (iVar1 < 1) {
    if (-1 < iVar1) {
      if ('\x01' < *(char *)(param_1 + 0x77)) {
        FUN_089a52a0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x200));
        return;
      }
      FUN_089a52a0(*(undefined4 *)
                    (*(int *)(param_1 + 0x1c) + *(char *)(param_1 + iVar1 + 0x77) * 4 + 0x2d0));
      return;
    }
  }
  else if (iVar1 < 2) {
    if (*(char *)(param_1 + 0x75) == '\0') {
      FUN_089a52a0(*(undefined4 *)
                    (*(int *)(param_1 + 0x1c) + *(char *)(param_1 + iVar1 + 0x77) * 4 + 0x19c));
      return;
    }
    FUN_089a52a0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x200));
  }
  return;
}

