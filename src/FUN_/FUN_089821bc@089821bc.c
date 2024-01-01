#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined FUN_089821bc(undefined4 param_1,char param_2,uint param_3)

{
  undefined uVar1;
  undefined auStack_40 [24];
  undefined auStack_28 [20];
  
  memcpy_jak(auStack_40,&DAT_08ac39c8,0x15);
  memcpy_jak(auStack_28,&DAT_08ac39dd,0x14);
  if (param_2 == '\0') {
    uVar1 = auStack_40[param_3 & 0xff];
  }
  else {
    uVar1 = auStack_28[param_3 & 0xff];
  }
  return uVar1;
}

