#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e0224(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_08a15998(*(undefined4 *)(param_1 + 0x130));
  *(int *)(*(int *)(*(int *)(param_1 + 0x130) + 0x10) +
           (*(uint *)(*(int *)(iVar1 + 8) + 0x24) & 0x3ff) * 0x10 + 4) = param_3 + 0x60;
  return;
}

