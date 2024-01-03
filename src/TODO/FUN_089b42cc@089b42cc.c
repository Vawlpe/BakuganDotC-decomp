#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089b42cc(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DONE_NotZero_DAT_08AC5874();
  if (iVar1 != 0) {
    uVar2 = DONE_Get_DAT_08AC5874(param_1);
    FUN_089c6350(uVar2,7,0,0);
  }
  FUN_0890a598(param_1,param_2);
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return;
}

