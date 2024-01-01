#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08863160(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  
  uVar1 = 0;
  if ((0.0 < *(float *)(param_1 + 0x590)) &&
     (fVar2 = (float)FUN_08887cdc(param_1 + 0x434), fVar2 <= *(float *)(param_1 + 0x590))) {
    uVar1 = 1;
  }
  return uVar1;
}

