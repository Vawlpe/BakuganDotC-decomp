#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined FUN_0892ae34(uint param_1,uint param_2)

{
  undefined auStack_40 [44];
  
  memcpy_jak(auStack_40,&DAT_08ac179c,0x2a);
  return auStack_40[(param_2 & 0xff) * 2 + (param_1 & 0xff)];
}

