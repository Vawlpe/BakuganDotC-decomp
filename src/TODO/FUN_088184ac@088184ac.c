#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_088184ac(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0xd8) != 0) {
    return (*(float *)(*(int *)(param_1 + 0xd8) + param_2 * 4) + *(float *)(param_1 + 0x9c)) *
           *(float *)(param_1 + 0xdc);
  }
  return *(float *)(param_1 + 0x94) * *(float *)(param_1 + 0xa8);
}

