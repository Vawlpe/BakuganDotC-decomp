#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined2 * FUN_08a28080(undefined2 *param_1,undefined2 *param_2)

{
  if (((uint)param_1 & 1) == 0) {
    *param_2 = *param_1;
    return param_1 + 1;
  }
  *param_2 = *param_1;
  return param_1 + 1;
}

