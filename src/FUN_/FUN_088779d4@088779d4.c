#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_088779d4(int param_1)

{
  return ((int)*(short *)(&DAT_08a68304 + *(int *)(param_1 + 0xb8) * 4) & 0xfc00U) >> 10;
}

