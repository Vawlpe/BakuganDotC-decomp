#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0899a5d0(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 in_V7C;
  
  fVar1 = *(float *)(param_1 + 0x22a0) + 0.008333334;
  *(float *)(param_1 + 0x22a0) = fVar1;
  uVar2 = vmul_s(fVar1 * 3.141593,in_V7C);
  fVar1 = (float)vcos_s(uVar2);
  *(float *)(param_1 + 0x2280) = (1.0 - fVar1) * 0.5 * 0.2;
  return;
}

