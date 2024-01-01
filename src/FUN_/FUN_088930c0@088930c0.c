#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088930c0(undefined4 param_1,int param_2,int param_3)

{
  float fVar1;
  
  fVar1 = *(float *)(*(int *)(param_2 + 0x1a0) + 0x34);
  if (param_3 < 0x6001) {
    if (param_3 == 0x6000) {
      fVar1 = fVar1 - 2.356194;
    }
    else if (param_3 == 0x4000) {
      fVar1 = fVar1 - 1.570796;
    }
    else if (param_3 == 0x2000) {
      fVar1 = fVar1 - 0.7853982;
    }
  }
  else if (param_3 == 0xe000) {
    fVar1 = fVar1 + 0.7853982;
  }
  else if (param_3 == 0xc000) {
    fVar1 = fVar1 + 1.570796;
  }
  else if (param_3 == 0xa000) {
    fVar1 = fVar1 + 2.356194;
  }
  else if (param_3 == 0x8000) {
    fVar1 = fVar1 + 3.141593;
  }
  FUN_08893050(fVar1,param_1);
  return;
}

