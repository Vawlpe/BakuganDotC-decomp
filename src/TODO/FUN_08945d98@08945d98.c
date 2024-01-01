#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08945d98(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xe8);
  if (iVar1 < 1) {
    if ((-1 < iVar1) && (-1 < *(int *)(param_1 + 0x74))) {
      *(undefined4 *)(param_1 + 0xe8) = 1;
      *(undefined4 *)(param_1 + 0xe0) = 0;
      FUN_08945d98(param_1);
    }
  }
  else if ((iVar1 < 2) && (FUN_08945bd8(param_1), 0x42fd < *(int *)(param_1 + 0x74))) {
    *(undefined4 *)(param_1 + 0xe8) = 2;
  }
  return;
}

