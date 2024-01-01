#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_08877ad0(int param_1)

{
  return ((int)*(short *)(&DAT_08a68304 + param_1 * 4) & 0xfc00U) >> 10;
}

