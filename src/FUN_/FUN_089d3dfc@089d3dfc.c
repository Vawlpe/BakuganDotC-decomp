#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d3dfc(int param_1,int param_2)

{
  if (param_2 != 0) {
    memcpy_jak(param_1 + 0x42,param_2,6);
    return;
  }
  memset_jak(param_1 + 0x42,0,6);
  return;
}

