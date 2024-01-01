#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_089e9010(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_089e8750(param_2 + 0x10,param_1 + 0x10);
  fVar2 = *(float *)(param_1 + 0x20) + *(float *)(param_2 + 0x40);
  return fVar1 <= fVar2 * fVar2;
}

