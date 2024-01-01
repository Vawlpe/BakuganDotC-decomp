#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_0898919c(undefined4 param_1,uint param_2,uint param_3)

{
  if ((param_2 & 0xff) < 6) {
    return (param_2 & 0xff) + (param_3 & 0xff) * 6 < 0x15;
  }
  return false;
}

