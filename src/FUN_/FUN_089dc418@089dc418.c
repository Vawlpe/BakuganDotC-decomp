#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089dc418(uint *param_1,uint param_2)

{
  if ((param_2 & 0x10000) != 0) {
    if (param_1[2] < *param_1 + 0x34) {
      *param_1 = *param_1 + 0x34;
      return;
    }
    FUN_089dc7b4();
  }
  return;
}

