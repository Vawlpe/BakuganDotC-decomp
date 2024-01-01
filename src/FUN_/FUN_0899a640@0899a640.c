#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0899a640(undefined4 param_1,uint param_2,uint param_3)

{
  undefined4 auStack_40 [12];
  
  memcpy_jak(auStack_40,&DAT_08ac3d20,0x30);
  return auStack_40[(param_3 & 0xff) + (param_2 & 0xff) * 3];
}

