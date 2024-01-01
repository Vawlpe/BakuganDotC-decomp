#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint isnanf(uint param_1)

{
  return 0x7f800000 - (param_1 & 0x7fffffff) >> 0x1f;
}

