#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c8734(undefined4 param_1,undefined4 param_2,undefined param_3,undefined param_4)

{
  int iVar1;
  
  iVar1 = FUN_089bf6e8(0x2756,100);
  *(undefined4 *)(iVar1 + 0x14) = param_1;
  *(undefined4 *)(iVar1 + 0x10) = 3;
  *(undefined4 *)(iVar1 + 0x18) = param_2;
  *(undefined *)(iVar1 + 0x1c) = param_3;
  *(undefined *)(iVar1 + 0x29) = param_4;
  return;
}

