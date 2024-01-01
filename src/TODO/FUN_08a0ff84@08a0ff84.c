#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

short FUN_08a0ff84(int param_1)

{
  short sVar1;
  
  sVar1 = 0;
  if (param_1 != 0) {
    sVar1 = *(short *)(param_1 + 0xe) + 1;
    *(short *)(param_1 + 0xe) = sVar1;
  }
  return sVar1;
}

