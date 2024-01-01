#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a28fdc(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x80420100;
  if (DAT_08b00110 != 0) {
    uVar1 = zz___sceSasSetKeyOff(&DAT_08b02c80,param_1);
  }
  return uVar1;
}

