#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint finitef(uint param_1)

{
  return (param_1 & 0x7fffffff) + 0x80800000 >> 0x1f;
}

