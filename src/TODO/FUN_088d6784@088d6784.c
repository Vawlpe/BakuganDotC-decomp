#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d6784(int param_1,char param_2)

{
  if (param_2 == '\0') {
    if (*(int *)(param_1 + 0x16c) == 1) {
      *(undefined4 *)(param_1 + 0x16c) = 0;
      *(undefined4 *)(param_1 + 0x180) = 0;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  return;
}

