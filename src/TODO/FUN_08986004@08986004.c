#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08986004(int param_1,char param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x88);
  if (param_2 == '\0') {
    FUN_089f4a90(0,0x40a00000,uVar1);
    return;
  }
  FUN_089f4a90(0,0,uVar1);
  return;
}

