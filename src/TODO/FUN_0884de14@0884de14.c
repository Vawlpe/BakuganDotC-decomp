#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0884de14(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_089bf93c(0x1e0,1);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x4dc) = param_2;
    *(undefined4 *)(param_1 + 0x440) = 4;
    *(undefined4 *)(param_1 + 0x444) = 4;
    *(undefined4 *)(param_1 + 0x480) = 1;
    FUN_0889d9c8();
  }
  return;
}

