#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined FUN_089174a8(undefined4 param_1,char param_2,uint param_3)

{
  undefined uVar1;
  undefined auStack_30 [24];
  undefined local_18 [4];
  undefined local_14;
  undefined local_13;
  
  memcpy_jak(auStack_30,&DAT_08ac10f0,0x15);
  local_18[0] = 1;
  local_18[1] = 3;
  local_18[2] = 5;
  local_18[3] = 6;
  local_14 = 7;
  local_13 = 8;
  if (param_2 == '\0') {
    uVar1 = auStack_30[param_3 & 0xff];
  }
  else {
    uVar1 = local_18[param_3 & 0xff];
  }
  return uVar1;
}

