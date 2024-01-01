#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a290b8(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x80420100;
  if ((DAT_08b00110 != 0) && (uVar1 = 0x80420012, param_2 != 0)) {
    uVar1 = zz___sceSasSetPitch(&DAT_08b02c80,param_1,param_2);
  }
  return uVar1;
}

