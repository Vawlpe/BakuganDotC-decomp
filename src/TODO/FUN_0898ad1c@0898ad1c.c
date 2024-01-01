#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined FUN_0898ad1c(undefined4 param_1,char param_2,uint param_3)

{
  undefined uVar1;
  undefined auStack_40 [36];
  undefined local_1c [4];
  
  memcpy_jak(auStack_40,&DAT_08ac3ab7,0x21);
  local_1c[0] = 2;
  local_1c[1] = 10;
  if (param_2 == '\0') {
    uVar1 = auStack_40[param_3 & 0xff];
  }
  else {
    uVar1 = local_1c[param_3 & 0xff];
  }
  return uVar1;
}

