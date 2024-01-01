#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895371c(int param_1,char param_2)

{
  undefined4 uVar1;
  
  if (param_2 == '\0') {
    *(undefined4 *)(**(int **)(param_1 + 0x1c) + 0x128) = 2;
    *(uint *)(**(int **)(param_1 + 0x1c) + 0xd0) = *(uint *)(**(int **)(param_1 + 0x1c) + 0xd0) | 1;
    FUN_089f46dc(**(undefined4 **)(param_1 + 0x1c));
    *(uint *)(**(int **)(param_1 + 0x1c) + 0xd0) =
         *(uint *)(**(int **)(param_1 + 0x1c) + 0xd0) | 0x20;
    FUN_089a51fc(0x3f800000,0,0,**(undefined4 **)(param_1 + 0x1c));
    uVar1 = *(undefined4 *)(**(int **)(param_1 + 0x1c) + 0x94);
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0x9c) = uVar1;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  else {
    uVar1 = *(undefined4 *)(**(int **)(param_1 + 0x1c) + 0x90);
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0x9c) = uVar1;
    *(undefined4 *)(param_1 + 0x98) = 0x3f800000;
  }
  return;
}

