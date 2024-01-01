#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint isnan(uint param_1,uint param_2)

{
  return 0x7ff00000 - (param_2 & 0x7fffffff | (param_1 | -param_1) >> 0x1f) >> 0x1f;
}

