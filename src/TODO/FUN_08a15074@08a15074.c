#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

short * FUN_08a15074(short *param_1)

{
  short sVar1;
  
  if ((param_1 != (short *)0x0) &&
     (sVar1 = *param_1, *param_1 = sVar1 + -1, (short)(sVar1 + -1) == 0)) {
    FUN_08a14e7c();
    thunk_FUN_08a13244(0,param_1);
    return param_1;
  }
  return param_1;
}

