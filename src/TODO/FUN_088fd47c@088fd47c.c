#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088fd47c(int param_1)

{
  int iVar1;
  
  *(undefined2 *)(param_1 + 0xb8) = **(undefined2 **)(param_1 + 8);
  if (*(short *)(param_1 + 0xb8) != -1) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x90) + 4);
    (**(code **)(iVar1 + 0x1c))(*(int *)(param_1 + 0x90) + (int)*(short *)(iVar1 + 0x18));
  }
  return;
}

