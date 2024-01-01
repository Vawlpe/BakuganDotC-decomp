#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint copysignf(uint param_1,uint param_2)

{
  return param_1 & 0x7fffffff | param_2 & 0x80000000;
}

