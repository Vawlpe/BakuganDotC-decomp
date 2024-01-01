#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08855384(int param_1,undefined4 param_2,char param_3)

{
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  *(undefined4 *)(param_1 + 0x8c8) = param_2;
  if (param_3 == '\0') {
    *(undefined4 *)(param_1 + 0x8c0) = 0;
    *(undefined4 *)(param_1 + 0x8d0) = 0;
  }
  if ((0 < *(int *)(param_1 + 0x8c8)) && (*(int *)(param_1 + 0x8c8) < 2)) {
    *(undefined4 *)(param_1 + 0x930) = 0;
    *(undefined4 *)(param_1 + 0x910) = in_V72;
    *(undefined4 *)(param_1 + 0x914) = in_V76;
    *(undefined4 *)(param_1 + 0x918) = in_V7A;
    *(undefined4 *)(param_1 + 0x91c) = in_V7E;
  }
  return;
}

