#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0894442c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 < 1) {
    if (-1 < iVar1) {
      *(int *)(param_1 + 0x14) = iVar1 + 1;
      goto LAB_0894449c;
    }
  }
  else if (iVar1 < 2) {
    if (0.0 < *(float *)(param_1 + 0x1c)) {
      *(float *)(param_1 + 0x1c) = *(float *)(param_1 + 0x1c) - 0.0333;
    }
    else {
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(int *)(param_1 + 0x14) = iVar1 + 1;
    }
    goto LAB_0894449c;
  }
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x14) = 0;
LAB_0894449c:
  FUN_08944094();
  return;
}

