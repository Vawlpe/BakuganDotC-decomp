#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089de8c4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = DONE_GetPtr_DAT_08AC5278();
  uVar1 = FUN_089c2730(uVar1,param_2);
  *(undefined4 *)(param_1 + 300) = uVar1;
  FUN_089c1f14(uVar1,param_1 + 0x20);
  return;
}

