#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined FUN_0895647c(undefined4 param_1,char param_2,uint param_3)

{
  undefined uVar1;
  undefined auStack_40 [20];
  undefined auStack_2c [24];
  
  memcpy_jak(auStack_40,&DAT_08ac3468,0x14);
  memcpy_jak(auStack_2c,&DAT_08ac347c,0x15);
  if (param_2 == '\0') {
    uVar1 = auStack_40[param_3 & 0xff];
  }
  else {
    uVar1 = auStack_2c[param_3 & 0xff];
  }
  return uVar1;
}

