#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a32418(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x20) = param_1;
  (**(code **)(*(int *)(param_2 + 4) + 0x4c))(param_2 + *(short *)(*(int *)(param_2 + 4) + 0x48));
  return;
}

