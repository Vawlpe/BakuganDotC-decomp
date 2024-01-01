#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint * FUN_08a280b4(uint *param_1,uint *param_2)

{
  if (((uint)param_1 & 3) != 0) {
    *param_2 = (uint)*(byte *)((int)param_1 + 3) << 0x18 | (uint)*(byte *)((int)param_1 + 2) << 0x10
               | (uint)*(byte *)((int)param_1 + 1) << 8 | (uint)*(byte *)param_1;
    return param_1 + 1;
  }
  *param_2 = *param_1;
  return param_1 + 1;
}

