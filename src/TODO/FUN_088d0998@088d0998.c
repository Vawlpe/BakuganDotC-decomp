#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d0998(float param_1,float param_2,int param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  
  fVar2 = ((param_1 - *(float *)(param_3 + 0x88)) * *(float *)(param_3 + 0x90)) /
          *(float *)(param_3 + 0x80) - *(float *)(param_3 + 0xb4);
  fVar1 = ((param_2 - *(float *)(param_3 + 0x8c)) * *(float *)(param_3 + 0x94)) /
          *(float *)(param_3 + 0x84) - *(float *)(param_3 + 0xb8);
  *param_4 = fVar2 * *(float *)(param_3 + 0xc4) - fVar1 * *(float *)(param_3 + 0xc0);
  *param_5 = fVar2 * *(float *)(param_3 + 0xc0) + fVar1 * *(float *)(param_3 + 0xc4);
  return;
}

