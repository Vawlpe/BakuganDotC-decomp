#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_0897a6b4(undefined4 param_1,byte param_2,uint param_3,uint param_4)

{
  param_3 = param_3 & 0xff;
  param_4 = param_4 & 0xff;
  if (param_2 == 0) {
    if (param_3 < 6) {
      return param_3 + param_4 * 6 < 0x13;
    }
  }
  else if (param_2 < 2) {
    if (param_3 < 6) {
      return param_3 + param_4 * 6 < 0xb;
    }
  }
  else if (param_2 < 3) {
    if (param_4 % 3 != 0) {
      return param_3 == 0;
    }
    if (param_3 < 6) {
      return true;
    }
  }
  return false;
}

