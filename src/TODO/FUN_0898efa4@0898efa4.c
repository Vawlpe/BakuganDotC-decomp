#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0898efa4(undefined4 param_1,uint param_2,uint param_3)

{
  undefined4 auStack_c0 [42];
  
  memcpy_jak(auStack_c0,&DAT_08ac3af8,0xa8);
  return auStack_c0[(param_3 & 0xff) * 2 + (param_2 & 0xff)];
}

