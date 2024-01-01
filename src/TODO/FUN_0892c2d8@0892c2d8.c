#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0892c2d8(char *param_1)

{
  float fVar1;
  
  if (*param_1 != '\0') {
    if (*(int *)(DAT_08ac5934 + 0x1c) == 0) {
      fVar1 = 1.0;
    }
    else {
      fVar1 = 2.0;
    }
    *(float *)(*(int *)(param_1 + 8) + 100) = *(float *)(*(int *)(param_1 + 8) + 100) - fVar1;
    if (*(float *)(*(int *)(param_1 + 8) + 100) <= -172.0) {
      *(undefined4 *)(*(int *)(param_1 + 8) + 100) = 0x43ba0000;
    }
    *(float *)(*(int *)(param_1 + 0xc) + 100) = *(float *)(*(int *)(param_1 + 0xc) + 100) - fVar1;
    if (*(float *)(*(int *)(param_1 + 0xc) + 100) <= -172.0) {
      *(undefined4 *)(*(int *)(param_1 + 0xc) + 100) = 0x43ba0000;
    }
  }
  return;
}

