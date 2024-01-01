#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08984db8(int param_1,char param_2,uint param_3)

{
  param_1 = param_1 + (param_3 & 0xff) * 0x10;
  if (param_2 == '\0') {
    memset_jak(param_1 + 0xcb4,0,0x10);
    *(undefined *)(param_1 + 0xcb4) = 1;
  }
  else {
    memset_jak(param_1 + 0xcb4,0,0x10);
    *(undefined *)(param_1 + 0xcb4) = 1;
    *(undefined4 *)(param_1 + 0xcb8) = 0x3f333333;
    *(undefined4 *)(param_1 + 0xcbc) = 0x3f333333;
  }
  return;
}

