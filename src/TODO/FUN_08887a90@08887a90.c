#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08887a90(int param_1)

{
  float fVar1;
  
  if (*(int *)(param_1 + 0x88) == 0) {
    return 0;
  }
  fVar1 = *(float *)(param_1 + 0x94);
  if (2.147484e+09 <= fVar1) {
    return (int)(fVar1 - 2.147484e+09) + -0x80000000;
  }
  return (int)fVar1;
}

