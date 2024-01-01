#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_08943e2c(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  
  if (0.0 < *(float *)(param_1 + 0x1c)) {
    fVar2 = _SUB_00000000;
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_089eb294();
      fVar2 = **(float **)(param_1 + 0x20);
    }
    uVar1 = FUN_089f2178(fVar2 - 1.0);
    local_14 = *(float *)(param_1 + 0x1c) * 0.75;
    local_20 = 0;
    local_1c = 0x3f4ccccd;
    local_18 = 0;
    FUN_089f1be8(uVar1,&local_20,1,0);
    FUN_089f17b0(uVar1,0);
  }
  return;
}

