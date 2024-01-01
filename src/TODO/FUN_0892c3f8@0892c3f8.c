#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0892c3f8(uint param_1,uint param_2)

{
  undefined4 auStack_160 [84];
  
  memcpy_jak(auStack_160,&DAT_08ac17d4,0x150);
  return auStack_160[(param_1 & 0xff) * 4 + (param_2 & 0xff)];
}

