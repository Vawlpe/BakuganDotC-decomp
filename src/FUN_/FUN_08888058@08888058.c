#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_08888058(int param_1,undefined4 param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  switch(param_2) {
  case 0:
    return *(float *)(*(int *)(param_1 + 0x88) + 0xac);
  case 1:
    return *(float *)(*(int *)(param_1 + 0x88) + 0xb0);
  case 2:
    return *(float *)(*(int *)(param_1 + 0x88) + 0xb4);
  case 3:
    fVar1 = (float)FUN_08887f64(0x3f000000,*(undefined4 *)(*(int *)(param_1 + 0x88) + 0xb8),param_1,
                                0xd,1);
    return fVar1;
  case 4:
    fVar1 = *(float *)(*(int *)(param_1 + 0x88) + 0xbc);
  case 5:
    return fVar1;
  case 6:
    return *(float *)(*(int *)(param_1 + 0x88) + 0xc0) * *(float *)(*(int *)(param_1 + 0x88) + 200);
  case 7:
    fVar1 = (float)FUN_08887f64(0x3f000000,
                                *(float *)(*(int *)(param_1 + 0x88) + 0xc4) *
                                *(float *)(*(int *)(param_1 + 0x88) + 200),param_1,0xb,1);
    return fVar1;
  case 8:
  case 9:
    return 0.0;
  case 10:
    return *(float *)(*(int *)(param_1 + 0x88) + 0xd8);
  case 0xb:
    fVar1 = 200.0;
  default:
    return fVar1;
  }
}

