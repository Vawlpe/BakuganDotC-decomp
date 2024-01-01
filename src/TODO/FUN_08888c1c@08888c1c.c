#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08888c1c(int param_1,int param_2,char param_3)

{
  float fVar1;
  
  param_1 = param_1 + param_2 * 4;
  if (*(int *)(param_1 + 0xe8) == 0) {
    if (*(float *)(param_1 + 200) <= 0.0) {
      return 1;
    }
    if ((param_3 != '\0') &&
       (fVar1 = *(float *)(param_1 + 200) - 1.0, *(float *)(param_1 + 200) = fVar1, fVar1 < 0.0)) {
      *(undefined4 *)(param_1 + 200) = 0;
    }
  }
  return 0;
}

