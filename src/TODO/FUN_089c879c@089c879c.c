#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c879c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_089bf6e8(0x2756,100);
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  *(undefined4 *)(iVar1 + 0x10) = 4;
  *(undefined4 *)(iVar1 + 0x20) = param_1;
  return;
}

