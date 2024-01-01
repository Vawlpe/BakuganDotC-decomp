#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08944558(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_089edb58();
  if (iVar1 == 0) {
    FUN_089eda24(0);
    iVar1 = FUN_089edb80();
    *(undefined4 *)(iVar1 + 0x10) = param_1;
  }
  return;
}

