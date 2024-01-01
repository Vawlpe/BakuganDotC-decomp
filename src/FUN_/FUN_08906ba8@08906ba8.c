#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08906ba8(int param_1,int param_2)

{
  if (((uint)*(ushort *)(param_2 + 0x18) == *(uint *)(param_1 + 0x30)) && (param_2 != 0)) {
    (**(code **)(*(int *)(param_2 + 0x14) + 0xc))
              (param_2 + *(short *)(*(int *)(param_2 + 0x14) + 8),3);
  }
  return;
}

