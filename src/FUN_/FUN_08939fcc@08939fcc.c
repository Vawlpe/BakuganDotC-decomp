#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08939fcc(undefined4 param_1,uint param_2)

{
  undefined4 auStack_60 [20];
  
  memcpy_jak(auStack_60,&DAT_08ac1a20,0x50);
  if (0x13 < (param_2 & 0xff)) {
    return 0x3f800000;
  }
  return auStack_60[param_2 & 0xff];
}

