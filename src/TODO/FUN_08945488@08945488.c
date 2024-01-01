#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08945488(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xe4);
  if (iVar1 < 1) {
    if ((-1 < iVar1) && (DAT_08ac1be8 <= *(int *)(param_1 + 0x74))) {
      *(undefined4 *)(param_1 + 0xe4) = 1;
      *(undefined4 *)(param_1 + 0x80) = 0;
      FUN_08945488(param_1);
    }
  }
  else if ((iVar1 < 2) && (FUN_089451bc(param_1), 0x42fd < *(int *)(param_1 + 0x74))) {
    *(undefined4 *)(param_1 + 0xe4) = 2;
  }
  return;
}

