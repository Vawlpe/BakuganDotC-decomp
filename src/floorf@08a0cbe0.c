#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float floorf(float param_1)

{
  uint uVar1;
  uint uVar2;
  float local_c;
  
  uVar2 = ((int)param_1 >> 0x17 & 0xffU) - 0x7f;
  if (0x16 < (int)uVar2) {
    if (uVar2 == 0x80) {
      param_1 = param_1 + param_1;
    }
    return param_1;
  }
  local_c = param_1;
  if ((int)uVar2 < 0) {
    if (0.0 < param_1 + 1e+30) {
      if ((int)param_1 < 0) {
        if (((uint)param_1 & 0x7fffffff) != 0) {
          return -1.0;
        }
      }
      else {
        local_c = 0.0;
      }
    }
  }
  else {
    uVar1 = 0x7fffff >> (uVar2 & 0x1f);
    if (((uint)param_1 & uVar1) == 0) {
      return param_1;
    }
    if (0.0 < param_1 + 1e+30) {
      if ((int)param_1 < 0) {
        param_1 = (float)((int)param_1 + (0x800000 >> (uVar2 & 0x1f)));
      }
      return (float)((uint)param_1 & ~uVar1);
    }
  }
  return local_c;
}

