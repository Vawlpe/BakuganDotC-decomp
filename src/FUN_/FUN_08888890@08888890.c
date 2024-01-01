#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_08888890(int param_1,int param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (*(int *)(param_1 + 0x88) == 0) {
    return fVar1;
  }
  param_1 = param_1 + param_2 * 6;
  if ((*(char *)(param_1 + 0xc) != '\0') && (*(short *)(param_1 + 8) != 0)) {
    fVar1 = (float)(int)*(short *)(param_1 + 10) / (float)(int)*(short *)(param_1 + 8);
  }
  return fVar1;
}

