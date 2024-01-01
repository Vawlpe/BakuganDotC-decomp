#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined FUN_089788c8(undefined4 param_1,char param_2,uint param_3)

{
  undefined uVar1;
  undefined auStack_40 [36];
  undefined auStack_1c [12];
  
  memcpy_jak(auStack_40,&DAT_08ac352c,0x21);
  memcpy_jak(auStack_1c,&DAT_08ac354d,0xb);
  if (param_2 == '\0') {
    uVar1 = auStack_40[param_3 & 0xff];
  }
  else {
    uVar1 = auStack_1c[param_3 & 0xff];
  }
  return uVar1;
}

