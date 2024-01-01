#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0892c0dc(uint param_1,uint param_2)

{
  undefined4 auStack_c0 [44];
  
  memcpy_jak(auStack_c0,&DAT_08ac16ec,0xb0);
  return auStack_c0[(param_1 & 0xff) * 2 + (param_2 & 0xff)];
}

