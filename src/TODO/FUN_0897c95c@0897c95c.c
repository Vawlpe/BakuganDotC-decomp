#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0897c95c(int param_1,char param_2,uint param_3)

{
  param_1 = param_1 + (param_3 & 0xff) * 0x10;
  if (param_2 == '\0') {
    memset_jak((undefined *)(param_1 + 0xef0),0,0x10);
    *(undefined *)(param_1 + 0xef0) = 1;
  }
  else {
    memset_jak((undefined *)(param_1 + 0xef0),0,0x10);
    *(undefined *)(param_1 + 0xef0) = 1;
    *(undefined4 *)(param_1 + 0xef4) = 0x3f333333;
    *(undefined4 *)(param_1 + 0xef8) = 0x3f333333;
  }
  return;
}

