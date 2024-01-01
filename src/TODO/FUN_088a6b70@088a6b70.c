#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088a6b70(undefined4 param_1,int param_2)

{
  undefined4 local_50 [18];
  
  memcpy_jak(local_50,&DAT_08abd544,0x48);
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (0x11 < param_2) {
    param_2 = 0x11;
  }
  return local_50[param_2];
}

