#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e8c68(int param_1,char param_2)

{
  if (param_2 != '\0') {
    *(undefined4 *)(param_1 + 0x408) = 0x42aa0000;
    *(undefined4 *)(param_1 + 0x40c) = 0x3f490fdb;
    return;
  }
  *(undefined4 *)(param_1 + 0x408) = 0x42540000;
  *(undefined4 *)(param_1 + 0x40c) = 0x3ea0d97c;
  return;
}

