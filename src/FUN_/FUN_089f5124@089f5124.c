#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f5124(int param_1,int param_2)

{
  if (param_2 != 0) {
    if ((*(uint *)(param_2 + 0x124) & 1) == 0) {
      (**(code **)(*(int *)(param_2 + 0x14) + 0xc))
                (param_2 + *(short *)(*(int *)(param_2 + 0x14) + 8),3);
    }
    else {
      *(uint *)(param_2 + 0x124) = *(uint *)(param_2 + 0x124) & 0xfffffffd;
      FUN_089d8870();
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
    }
  }
  return;
}

