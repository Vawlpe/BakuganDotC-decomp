#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0892970c(int param_1,char param_2)

{
  if (*(char *)(param_1 + 0x485) != '\x05') {
    if (param_2 == '\0') {
      memset_jak((undefined *)(param_1 + 0x488),0,0x10);
      *(undefined *)(param_1 + 0x488) = 1;
    }
    else {
      memset_jak((undefined *)(param_1 + 0x488),0,0x10);
      *(undefined *)(param_1 + 0x488) = 1;
      *(undefined4 *)(param_1 + 0x48c) = 0x3f333333;
      *(undefined4 *)(param_1 + 0x490) = 0x3f333333;
    }
  }
  return;
}

