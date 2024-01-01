#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ebe48(int param_1,uint param_2)

{
  undefined4 auStack_60 [21];
  
  if ((*(byte *)(param_1 + 0x273) & 1) == 0) {
    memcpy_jak(auStack_60,&DAT_08a99060,0x54);
    if ((param_2 & 0xffff) < 0x15) {
      FUN_089c2fbc(auStack_60[param_2 & 0xffff]);
    }
  }
  return;
}

