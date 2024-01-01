#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined FUN_089a602c(undefined4 param_1,uint param_2,uint param_3)

{
  undefined auStack_30 [28];
  
  memcpy_jak(auStack_30,&DAT_08ac3d61,0x19);
  return auStack_30[(param_2 & 0xff) * 5 + (param_3 & 0xff)];
}

