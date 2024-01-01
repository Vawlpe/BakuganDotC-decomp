#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined FUN_08978930(undefined4 param_1,char param_2,uint param_3)

{
  undefined uVar1;
  undefined auStack_30 [16];
  undefined auStack_20 [12];
  
  memcpy_jak(auStack_30,&DAT_08ac3558,0xf);
  memcpy_jak(auStack_20,&DAT_08ac3567,0xc);
  if (param_2 == '\0') {
    uVar1 = auStack_30[param_3 & 0xff];
  }
  else {
    uVar1 = auStack_20[param_3 & 0xff];
  }
  return uVar1;
}

