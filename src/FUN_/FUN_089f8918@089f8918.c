#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f8918(int param_1,uint param_2)

{
  uint uVar1;
  
  FUN_089d8928(*(int *)(param_1 + 0x94) + 0x24);
  *(undefined4 *)(*(int *)(param_1 + 0x94) + 0x34) = 0;
  uVar1 = *(uint *)(*(int *)(param_1 + 0x94) + 0x34);
  while (uVar1 < param_2) {
    FUN_089f86e4(param_1);
    uVar1 = *(uint *)(*(int *)(param_1 + 0x94) + 0x34);
  }
  return;
}

