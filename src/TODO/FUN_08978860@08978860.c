#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined FUN_08978860(undefined4 param_1,char param_2,uint param_3)

{
  undefined uVar1;
  undefined auStack_50 [36];
  undefined auStack_2c [20];
  
  memcpy_jak(auStack_50,&DAT_08ac34f8,0x21);
  memcpy_jak(auStack_2c,&DAT_08ac3519,0x13);
  if (param_2 == '\0') {
    uVar1 = auStack_50[param_3 & 0xff];
  }
  else {
    uVar1 = auStack_2c[param_3 & 0xff];
  }
  return uVar1;
}

