#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08956e90(undefined4 param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  char acStack_30 [24];
  
  memcpy_jak(acStack_30,&DAT_08ac3411,0x16);
  uVar1 = 0;
  if ((acStack_30[param_3 & 0xff] != '\0') && (uVar1 = 0, (param_2 & 1) != 0)) {
    uVar1 = 1;
  }
  return uVar1;
}

