#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089505e0(int param_1)

{
  int iVar1;
  
  FUN_0881a0c4(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),5);
  iVar1 = **(int **)(param_1 + 0x1c);
  FUN_089f46dc(iVar1);
  *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 0x20;
  *(undefined4 *)(iVar1 + 0x94) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x90) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x9c) = 0;
  FUN_089f4954(0x3f800000,0x3f800000,iVar1,0);
  return;
}

