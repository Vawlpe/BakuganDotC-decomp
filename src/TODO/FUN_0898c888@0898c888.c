#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_0898c888(undefined4 param_1,byte param_2,uint param_3,uint param_4)

{
  param_3 = param_3 & 0xff;
  if (param_2 == 0) {
    if (param_3 < 6) {
      return param_3 + (param_4 & 0xff) * 6 < 0x12;
    }
  }
  else if ((param_2 < 2) && (param_3 < 6)) {
    return param_3 + (param_4 & 0xff) * 6 < 2;
  }
  return false;
}

