#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0884fb9c(int param_1)

{
  int iVar1;
  
  FUN_0884f5a4();
  iVar1 = FUN_089bf93c(0x1e1,1);
  if (iVar1 == 0) {
    if (DAT_08aba778 == 0) {
      *(undefined4 *)(param_1 + 0x440) = 1;
      *(undefined4 *)(param_1 + 0x444) = 1;
      FUN_0889d9e4();
    }
    else {
      *(undefined4 *)(param_1 + 0x440) = 2;
      *(undefined4 *)(param_1 + 0x444) = 2;
    }
  }
  return;
}

