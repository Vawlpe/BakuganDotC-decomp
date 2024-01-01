#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08862d18(float param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_2 + 0xb4);
  if ((*(uint *)(param_2 + 0x144) & 0x100) == 0) {
    fVar1 = (float)FUN_08862cd8(param_2);
    param_1 = param_1 * fVar1;
  }
  FUN_089df788(param_1,param_2);
  return uVar2;
}

